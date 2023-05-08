// REDGPU X RTE
//
// Compile instructions:
//
// cl /LD /O2 /DNDEBUG /EHsc redgpu_x_rte.cpp

/*-----------------------------------------------------------------------
Copyright (c) 2014-2018, NVIDIA. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
* Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
* Neither the name of its contributors may be used to endorse
or promote products derived from this software without specific
prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
-----------------------------------------------------------------------*/

/*
Contacts for feedback:
- pgautron@nvidia.com (Pascal Gautron)
- mlefrancois@nvidia.com (Martin-Karl Lefrancois)
*/

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "dxcompiler.lib")

#define REDGPU_X_RTE_DECLSPEC __declspec(dllexport)
#include "redgpu_x_rte.h"

// NOTE(Constantine): C++ headers

/*
The bottom-level hierarchy is used to store the triangle data in a way suitable
for fast ray-triangle intersection at runtime. To be built, this data structure
requires some scratch space which has to be allocated by the application.
Similarly, the resulting data structure is stored in an application-controlled
buffer.

To be used, the application must first add all the vertex buffers to be
contained in the final structure, using AddVertexBuffer. After all buffers have
been added, ComputeASBufferSizes will prepare the build, and provide the
required sizes for the scratch data and the final result. The Build call will
finally compute the acceleration structure and store it in the result buffer.

Note that the build is enqueued in the command list, meaning that the scratch
buffer needs to be kept until the command list execution is finished.


Example:

BottomLevelASGenerator bottomLevelAS;
bottomLevelAS.AddVertexBuffer(vertexBuffer, 0, vertexCount, sizeof(Vertex),
identityMat.Get(), 0); bottomLevelAS.AddVertexBuffer(vertexBuffer2, 0,
vertexCount2, sizeof(Vertex), identityMat.Get(), 0);
...
UINT64 scratchSizeInBytes = 0;
UINT64 resultSizeInBytes = 0;
bottomLevelAS.ComputeASBufferSizes(GetRTDevice(), false, &scratchSizeInBytes,
&resultSizeInBytes); AccelerationStructureBuffers buffers; buffers.pScratch =
nv_helpers_dx12::CreateBuffer(..., scratchSizeInBytes, ...); buffers.pResult =
nv_helpers_dx12::CreateBuffer(..., resultSizeInBytes, ...);

bottomLevelAS.Generate(m_commandList.Get(), rtCmdList, buffers.pScratch.Get(),
buffers.pResult.Get(), false, nullptr);

return buffers;
*/

#include <unordered_set>
#include <vector>
#include <tuple>
#include <string>
#include <stdexcept>

#include <d3d12.h>
#include <dxcapi.h>
#include <DirectXMath.h>

namespace nv_helpers_dx12
{

/// Helper class to generate bottom-level acceleration structures for raytracing
class BottomLevelASGenerator
{
public:
  /// Add a vertex buffer in GPU memory into the acceleration structure. The
  /// vertices are supposed to be represented by 3 float32 value. Indices are
  /// implicit.
  void AddVertexBuffer(ID3D12Resource* vertexBuffer, /// Buffer containing the vertex coordinates,
                                                     /// possibly interleaved with other vertex data
                       UINT64 vertexOffsetInBytes,   /// Offset of the first vertex in the vertex
                                                     /// buffer
                       uint32_t vertexCount,         /// Number of vertices to consider
                                                     /// in the buffer
                       UINT vertexSizeInBytes,       /// Size of a vertex including all
                                                     /// its other data, used to stride
                                                     /// in the buffer
                       ID3D12Resource* transformBuffer, /// Buffer containing a 4x4 transform
                                                        /// matrix in GPU memory, to be applied
                                                        /// to the vertices. This buffer cannot
                                                        /// be nullptr
                       UINT64 transformOffsetInBytes,   /// Offset of the transform matrix in the
                                                        /// transform buffer
                       bool isOpaque = true /// If true, the geometry is considered opaque,
                                            /// optimizing the search for a closest hit
  );

  /// Add a vertex buffer along with its index buffer in GPU memory into the acceleration structure.
  /// The vertices are supposed to be represented by 3 float32 value, and the indices are 32-bit
  /// unsigned ints
  void AddVertexBuffer(ID3D12Resource* vertexBuffer, /// Buffer containing the vertex coordinates,
                                                     /// possibly interleaved with other vertex data
                       UINT64 vertexOffsetInBytes,   /// Offset of the first vertex in the vertex
                                                     /// buffer
                       uint32_t vertexCount,         /// Number of vertices to consider
                                                     /// in the buffer
                       UINT vertexSizeInBytes,       /// Size of a vertex including
                                                     /// all its other data,
                                                     /// used to stride in the buffer
                       ID3D12Resource* indexBuffer,  /// Buffer containing the vertex indices
                                                     /// describing the triangles
                       UINT64 indexOffsetInBytes,    /// Offset of the first index in
                                                     /// the index buffer
                       uint32_t indexCount,          /// Number of indices to consider in the buffer
                       ID3D12Resource* transformBuffer, /// Buffer containing a 4x4 transform
                                                        /// matrix in GPU memory, to be applied
                                                        /// to the vertices. This buffer cannot
                                                        /// be nullptr
                       UINT64 transformOffsetInBytes,   /// Offset of the transform matrix in the
                                                        /// transform buffer
                       bool isOpaque = true /// If true, the geometry is considered opaque,
                                            /// optimizing the search for a closest hit
  );

  /// Compute the size of the scratch space required to build the acceleration structure, as well as
  /// the size of the resulting structure. The allocation of the buffers is then left to the
  /// application
  void ComputeASBufferSizes(
      ID3D12Device5* device, /// Device on which the build will be performed
      bool allowUpdate,           /// If true, the resulting acceleration structure will
                                  /// allow iterative updates
      UINT64* scratchSizeInBytes, /// Required scratch memory on the GPU to
                                  /// build the acceleration structure
      UINT64* resultSizeInBytes   /// Required GPU memory to store the
                                  /// acceleration structure
  );

  /// Enqueue the construction of the acceleration structure on a command list, using
  /// application-provided buffers and possibly a pointer to the previous acceleration structure in
  /// case of iterative updates. Note that the update can be done in place: the result and
  /// previousResult pointers can be the same.
  void Generate(
      ID3D12GraphicsCommandList4* commandList, /// Command list on which the build will be enqueued
      ID3D12Resource* scratchBuffer, /// Scratch buffer used by the builder to
                                     /// store temporary data
      ID3D12Resource* resultBuffer,  /// Result buffer storing the acceleration structure
      bool updateOnly = false,       /// If true, simply refit the existing acceleration structure
      ID3D12Resource* previousResult = nullptr /// Optional previous acceleration structure, used
                                               /// if an iterative update is requested
  );

private:
  /// Vertex buffer descriptors used to generate the AS
  std::vector<D3D12_RAYTRACING_GEOMETRY_DESC> m_vertexBuffers = {};

  /// Amount of temporary memory required by the builder
  UINT64 m_scratchSizeInBytes = 0;

  /// Amount of memory required to store the AS
  UINT64 m_resultSizeInBytes = 0;

  /// Flags for the builder, specifying whether to allow iterative updates, or
  /// when to perform an update
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS m_flags;
};

} // namespace nv_helpers_dx12

/*
The top-level hierarchy is used to store a set of instances represented by
bottom-level hierarchies in a way suitable for fast intersection at runtime. To
be built, this data structure requires some scratch space which has to be
allocated by the application. Similarly, the resulting data structure is stored
in an application-controlled buffer.

To be used, the application must first add all the instances to be contained in
the final structure, using AddInstance. After all instances have been added,
ComputeASBufferSizes will prepare the build, and provide the required sizes for
the scratch data and the final result. The Build call will finally compute the
acceleration structure and store it in the result buffer.

Note that the build is enqueued in the command list, meaning that the scratch
buffer needs to be kept until the command list execution is finished.



Example:

TopLevelASGenerator topLevelAS;
topLevelAS.AddInstance(instances1, matrix1, instanceId1, hitGroupIndex1);
topLevelAS.AddInstance(instances2, matrix2, instanceId2, hitGroupIndex2);
...
UINT64 scratchSize, resultSize, instanceDescsSize;
topLevelAS.ComputeASBufferSizes(GetRTDevice(), true, &scratchSize, &resultSize,
&instanceDescsSize); AccelerationStructureBuffers buffers; buffers.pScratch =
nv_helpers_dx12::CreateBuffer(..., scratchSizeInBytes, ...); buffers.pResult =
nv_helpers_dx12::CreateBuffer(..., resultSizeInBytes, ...);
buffers.pInstanceDesc = nv_helpers_dx12::CreateBuffer(..., resultSizeInBytes,
...); topLevelAS.Generate(m_commandList.Get(), rtCmdList,
m_topLevelAS.pScratch.Get(), m_topLevelAS.pResult.Get(),
m_topLevelAS.pInstanceDesc.Get(), updateOnly, updateOnly ?
m_topLevelAS.pResult.Get() : nullptr);

return buffers;
*/

namespace nv_helpers_dx12
{

/// Helper class to generate top-level acceleration structures for raytracing
class TopLevelASGenerator
{
public:

  void SetInstancesCount(UINT instancesCount);

  /// Compute the size of the scratch space required to build the acceleration
  /// structure, as well as the size of the resulting structure. The allocation
  /// of the buffers is then left to the application
  void ComputeASBufferSizes(
      ID3D12Device5* device, /// Device on which the build will be performed
      bool allowUpdate,              /// If true, the resulting acceleration structure will
                                     /// allow iterative updates
      UINT64* scratchSizeInBytes,    /// Required scratch memory on the GPU to
                                     /// build the acceleration structure
      UINT64* resultSizeInBytes,     /// Required GPU memory to store the
                                     /// acceleration structure
      UINT64* descriptorsSizeInBytes /// Required GPU memory to store instance
                                     /// descriptors, containing the matrices,
                                     /// indices etc.
  );

  /// Enqueue the construction of the acceleration structure on a command list,
  /// using application-provided buffers and possibly a pointer to the previous
  /// acceleration structure in case of iterative updates. Note that the update
  /// can be done in place: the result and previousResult pointers can be the
  /// same.
  void Generate(
      ID3D12GraphicsCommandList4* commandList, /// Command list on which the build will be enqueued
      ID3D12Resource* scratchBuffer,     /// Scratch buffer used by the builder to
                                         /// store temporary data
      ID3D12Resource* resultBuffer,      /// Result buffer storing the acceleration structure
      ID3D12Resource* descriptorsBuffer, /// Auxiliary result buffer containing the instance
                                         /// descriptors, has to be in upload heap
      bool updateOnly = false, /// If true, simply refit the existing acceleration structure
      ID3D12Resource* previousResult = nullptr /// Optional previous acceleration structure, used
                                               /// if an iterative update is requested
  );

private:
  /// Construction flags, indicating whether the AS supports iterative updates
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS m_flags;
  /// Instances count contained in the top-level AS
  UINT m_instancesCount;

  /// Size of the temporary memory used by the TLAS builder
  UINT64 m_scratchSizeInBytes;
  /// Size of the buffer containing the instance descriptors
  UINT64 m_instanceDescsSizeInBytes;
  /// Size of the buffer containing the TLAS
  UINT64 m_resultSizeInBytes;
};

} // namespace nv_helpers_dx12

/*
Utility class to create root signatures. The order in which the addition methods are called is
important as it will define the slots of the heap or of the Shader Binding Table to which buffer
pointers will be bound.

Example to create an empty root signature:
nv_helpers_dx12::RootSignatureGenerator rsc;
return rsc.Generate(m_device.Get(), true);

Example to create a signature with one constant buffer:
nv_helpers_dx12::RootSignatureGenerator rsc;
rsc.AddRootParameter(D3D12_ROOT_PARAMETER_TYPE_CBV);
return rsc.Generate(m_device.Get(), true);

More advance root signature:
nv_helpers_dx12::RootSignatureGenerator rsc;
rsc.AddRangeParameter({{0,1,0, D3D12_DESCRIPTOR_RANGE_TYPE_UAV, 0},
{0,1,0, D3D12_DESCRIPTOR_RANGE_TYPE_SRV, 1},
{0,1,0, D3D12_DESCRIPTOR_RANGE_TYPE_CBV, 2}});
return rsc.Generate(m_device.Get(), true);
*/

namespace nv_helpers_dx12
{

class RootSignatureGenerator
{
public:
  /// Add a set of heap range descriptors as a parameter of the root signature.
  void AddHeapRangesParameter(const std::vector<D3D12_DESCRIPTOR_RANGE>& ranges);

  /// Add a set of heap ranges as a parameter of the root signature. Each range
  /// is defined as follows:
  /// - UINT BaseShaderRegister: the first register index in the range, e.g. the
  /// register of a UAV with BaseShaderRegister==0 is defined in the HLSL code
  /// as register(u0)
  /// - UINT NumDescriptors: number of descriptors in the range. Those will be
  /// mapped to BaseShaderRegister, BaseShaderRegister+1 etc. UINT
  /// RegisterSpace: Allows using the same register numbers multiple times by
  /// specifying a space where they are defined, similarly to a namespace. For
  /// example, a UAV with BaseShaderRegister==0 and RegisterSpace==1 is accessed
  /// in HLSL using the syntax register(u0, space1)
  /// - D3D12_DESCRIPTOR_RANGE_TYPE RangeType: The range type, such as
  /// D3D12_DESCRIPTOR_RANGE_TYPE_CBV for a constant buffer
  /// - UINT OffsetInDescriptorsFromTableStart: The first slot in the heap
  /// corresponding to the buffers mapped by the root signature. This can either
  /// be explicit, or implicit using D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND. In
  /// this case the index in the heap is the one directly following the last
  /// parameter range (or 0 if it's the first)
  void AddHeapRangesParameter(std::vector<std::tuple<UINT, // BaseShaderRegister,
                                                     UINT, // NumDescriptors
                                                     UINT, // RegisterSpace
                                                     D3D12_DESCRIPTOR_RANGE_TYPE, // RangeType
                                                     UINT // OffsetInDescriptorsFromTableStart
                                                     >>
                                  ranges);

  /// Add a root parameter to the shader, defined by its type: constant buffer (CBV), shader
  /// resource (SRV), unordered access (UAV), or root constant (CBV, directly defined by its value
  /// instead of a buffer). The shaderRegister and registerSpace indicate how to access the
  /// parameter in the HLSL code, e.g a SRV with shaderRegister==1 and registerSpace==0 is
  /// accessible via register(t1, space0).
  /// In case of a root constant, the last parameter indicates how many successive 32-bit constants
  /// will be bound.
  void AddRootParameter(D3D12_ROOT_PARAMETER_TYPE type, UINT shaderRegister = 0,
                        UINT registerSpace = 0, UINT numRootConstants = 1);

  /// Create the root signature from the set of parameters, in the order of the addition calls
  ID3D12RootSignature* Generate(ID3D12Device* device, bool isLocal);

private:
  /// Heap range descriptors
  std::vector<std::vector<D3D12_DESCRIPTOR_RANGE>> m_ranges;
  /// Root parameter descriptors
  std::vector<D3D12_ROOT_PARAMETER> m_parameters;

  /// For each entry of m_parameter, indicate the index of the range array in m_ranges, and ~0u if
  /// the parameter is not a heap range descriptor
  std::vector<UINT> m_rangeLocations;

  enum
  {
    RSC_BASE_SHADER_REGISTER = 0,
    RSC_NUM_DESCRIPTORS = 1,
    RSC_REGISTER_SPACE = 2,
    RSC_RANGE_TYPE = 3,
    RSC_OFFSET_IN_DESCRIPTORS_FROM_TABLE_START = 4
  };
};

} // namespace nv_helpers_dx12

/*
The raytracing pipeline combines the raytracing shaders into a state object,
that can be thought of as an executable GPU program. For that, it requires the
shaders compiled as DXIL libraries, where each library exports symbols in a way
similar to DLLs. Those symbols are then used to refer to these shaders libraries
when creating hit groups, associating the shaders to their root signatures and
declaring the steps of the pipeline. All the calls to this helper class can be
done in arbitrary order. Some basic sanity checks are also performed when
compiling in debug mode.

Simple usage of this class:

pipeline.AddLibrary(m_rayGenLibrary.Get(), {L"RayGen"});
pipeline.AddLibrary(m_missLibrary.Get(), {L"Miss"});
pipeline.AddLibrary(m_hitLibrary.Get(), {L"ClosestHit"});

pipeline.AddHitGroup(L"HitGroup", L"ClosestHit");

pipeline.AddRootSignatureAssociation(m_rayGenSignature.Get(), {L"RayGen"});
pipeline.AddRootSignatureAssociation(m_missSignature.Get(), {L"Miss"});
pipeline.AddRootSignatureAssociation(m_hitSignature.Get(), {L"HitGroup"});

pipeline.SetMaxPayloadSize(4 * sizeof(float)); // RGB + distance

pipeline.SetMaxAttributeSize(2 * sizeof(float)); // barycentric coordinates

pipeline.SetMaxRecursionDepth(1);

rtStateObject = pipeline.Generate();
*/

namespace nv_helpers_dx12
{

/// Helper class to create raytracing pipelines
class RayTracingPipelineGenerator
{
public:
  /// The pipeline helper requires access to the device, as well as the
  /// raytracing device prior to Windows 10 RS5.
  RayTracingPipelineGenerator(ID3D12Device5* device);

  /// Add a DXIL library to the pipeline. Note that this library has to be
  /// compiled with dxc, using a lib_6_3 target. The exported symbols must correspond exactly to the
  /// names of the shaders declared in the library, although unused ones can be omitted.
  void AddLibrary(uint64_t dxilLibraryBufferSize, void * dxilLibraryBufferPointer, const std::vector<std::wstring>& symbolExports);

  /// In DXR the hit-related shaders are grouped into hit groups. Such shaders are:
  /// - The intersection shader, which can be used to intersect custom geometry, and is called upon
  ///   hitting the bounding box the the object. A default one exists to intersect triangles
  /// - The any hit shader, called on each intersection, which can be used to perform early
  ///   alpha-testing and allow the ray to continue if needed. Default is a pass-through.
  /// - The closest hit shader, invoked on the hit point closest to the ray start.
  /// The shaders in a hit group share the same root signature, and are only referred to by the
  /// hit group name in other places of the program.
  void AddHitGroup(const std::wstring& hitGroupName, const std::wstring& closestHitSymbol,
                   const std::wstring& anyHitSymbol = L"",
                   const std::wstring& intersectionSymbol = L"");

  /// The shaders and hit groups may have various root signatures. This call associates a root
  /// signature to one or more symbols. All imported symbols must be associated to one root
  /// signature.
  void AddRootSignatureAssociation(ID3D12RootSignature* rootSignature,
                                   const std::vector<std::wstring>& symbols);

  /// The payload is the way hit or miss shaders can exchange data with the shader that called
  /// TraceRay. When several ray types are used (e.g. primary and shadow rays), this value must be
  /// the largest possible payload size. Note that to optimize performance, this size must be kept
  /// as low as possible.
  void SetMaxPayloadSize(UINT sizeInBytes);

  /// When hitting geometry, a number of surface attributes can be generated by the intersector.
  /// Using the built-in triangle intersector the attributes are the barycentric coordinates, with a
  /// size 2*sizeof(float).
  void SetMaxAttributeSize(UINT sizeInBytes);

  /// Upon hitting a surface, a closest hit shader can issue a new TraceRay call. This parameter
  /// indicates the maximum level of recursion. Note that this depth should be kept as low as
  /// possible, typically 2, to allow hit shaders to trace shadow rays. Recursive ray tracing
  /// algorithms must be flattened to a loop in the ray generation program for best performance.
  void SetMaxRecursionDepth(UINT maxDepth);

  /// Compiles the raytracing state object
  ID3D12StateObject* Generate();

private:
  /// Storage for DXIL libraries and their exported symbols
  struct Library
  {
    Library(uint64_t dxilLibraryBufferSize, void * dxilLibraryBufferPointer, const std::vector<std::wstring>& exportedSymbols);

    Library(const Library& source);

    uint64_t m_dxilLibraryBufferSize;
    void * m_dxilLibraryBufferPointer;
    const std::vector<std::wstring> m_exportedSymbols;

    std::vector<D3D12_EXPORT_DESC> m_exports;
    D3D12_DXIL_LIBRARY_DESC m_libDesc;
  };

  /// Storage for the hit groups, binding the hit group name with the underlying intersection, any
  /// hit and closest hit symbols
  struct HitGroup
  {
    HitGroup(std::wstring hitGroupName, std::wstring closestHitSymbol,
             std::wstring anyHitSymbol = L"", std::wstring intersectionSymbol = L"");

    HitGroup(const HitGroup& source);

    std::wstring m_hitGroupName;
    std::wstring m_closestHitSymbol;
    std::wstring m_anyHitSymbol;
    std::wstring m_intersectionSymbol;
    D3D12_HIT_GROUP_DESC m_desc = {};
  };

  /// Storage for the association between shaders and root signatures
  struct RootSignatureAssociation
  {
    RootSignatureAssociation(ID3D12RootSignature* rootSignature,
                             const std::vector<std::wstring>& symbols);

    RootSignatureAssociation(const RootSignatureAssociation& source);

    ID3D12RootSignature* m_rootSignature;
    ID3D12RootSignature* m_rootSignaturePointer;
    std::vector<std::wstring> m_symbols;
    std::vector<LPCWSTR> m_symbolPointers;
    D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION m_association = {};
  };

  /// The pipeline creation requires having at least one empty global and local root signatures, so
  /// we systematically create both
  void CreateDummyRootSignatures();

  /// Build a list containing the export symbols for the ray generation shaders, miss shaders, and
  /// hit group names
  void BuildShaderExportList(std::vector<std::wstring>& exportedSymbols);

  std::vector<Library> m_libraries = {};
  std::vector<HitGroup> m_hitGroups = {};
  std::vector<RootSignatureAssociation> m_rootSignatureAssociations = {};

  UINT m_maxPayLoadSizeInBytes = 0;
  /// Attribute size, initialized to 2 for the barycentric coordinates used by the built-in triangle
  /// intersection shader
  UINT m_maxAttributeSizeInBytes = 2 * sizeof(float);
  /// Maximum recursion depth, initialized to 1 to at least allow tracing primary rays
  UINT m_maxRecursionDepth = 1;

  ID3D12Device5* m_device;
  ID3D12RootSignature* m_dummyLocalRootSignature;
  ID3D12RootSignature* m_dummyGlobalRootSignature;

  
};

} // namespace nv_helpers_dx12

/*
The ShaderBindingTable is a helper to construct the SBT. It helps to maintain the
proper offsets of each element, required when constructing the SBT, but also when filling the
dispatch rays description.

Example:


D3D12_GPU_DESCRIPTOR_HANDLE srvUavHeapHandle = m_srvUavHeap->GetGPUDescriptorHandleForHeapStart();
UINT64* heapPointer = reinterpret_cast< UINT64* >(srvUavHeapHandle.ptr);

m_sbtHelper.AddRayGenerationProgram(L"RayGen", {heapPointer});
m_sbtHelper.AddMissProgram(L"Miss", {});

m_sbtHelper.AddHitGroup(L"HitGroup",
{(void*)(m_constantBuffers[i]->GetGPUVirtualAddress())});
m_sbtHelper.AddHitGroup(L"ShadowHitGroup", {});


// Create the SBT on the upload heap
uint32_t sbtSize = 0;
m_sbtHelper.ComputeSBTSize(GetRTDevice(), &sbtSize);
m_sbtStorage = nv_helpers_dx12::CreateBuffer(m_device.Get(), sbtSize,
D3D12_RESOURCE_FLAG_NONE, D3D12_RESOURCE_STATE_GENERIC_READ,
nv_helpers_dx12::kUploadHeapProps);

m_sbtHelper.Generate(m_sbtStorage.Get(), m_rtStateObjectProps.Get());


//--------------------------------------------------------------------
Then setting the descriptor for the dispatch rays become way easier
//--------------------------------------------------------------------

D3D12_DISPATCH_RAYS_DESC desc = {};
// The layout of the SBT is as follows: ray generation shaders, miss shaders,
hit groups. As
// described in the CreateShaderBindingTable method, all SBT entries have the
same size to allow
// a fixed stride.

// The ray generation shaders are always at the beginning of the SBT. In this
// example we have only one RG, so the size of this SBT sections is
m_sbtEntrySize. uint32_t rayGenerationSectionSizeInBytes =
m_sbtHelper.GetRayGenSectionSize(); desc.RayGenerationShaderRecord.StartAddress
= m_sbtStorage->GetGPUVirtualAddress();
desc.RayGenerationShaderRecord.SizeInBytes = rayGenerationSectionSizeInBytes;

// The miss shaders are in the second SBT section, right after the ray
generation shader. We
// have one miss shader for the camera rays and one for the shadow rays, so this
section has a
// size of 2*m_sbtEntrySize. We also indicate the stride between the two miss
shaders, which is
// the size of a SBT entry
uint32_t missSectionSizeInBytes = m_sbtHelper.GetMissSectionSize();
desc.MissShaderTable.StartAddress =
m_sbtStorage->GetGPUVirtualAddress() + rayGenerationSectionSizeInBytes;
desc.MissShaderTable.SizeInBytes = missSectionSizeInBytes;
desc.MissShaderTable.StrideInBytes = m_sbtHelper.GetMissEntrySize();

// The hit groups section start after the miss shaders. In this sample we have 4
hit groups: 2
// for the triangles (1 used when hitting the geometry from a camera ray, 1 when
hitting the
// same geometry from a shadow ray) and 2 for the plane. We also indicate the
stride between the
// two miss shaders, which is the size of a SBT entry
// #Pascal: experiment with different sizes for the SBT entries
uint32_t hitGroupsSectionSize = m_sbtHelper.GetHitGroupSectionSize();
desc.HitGroupTable.StartAddress =
m_sbtStorage->GetGPUVirtualAddress() + rayGenerationSectionSizeInBytes +
missSectionSizeInBytes; desc.HitGroupTable.SizeInBytes = hitGroupsSectionSize;
desc.HitGroupTable.StrideInBytes = m_sbtHelper.GetHitGroupEntrySize();
*/

namespace nv_helpers_dx12
{
/// Helper class to create and maintain a Shader Binding Table
class ShaderBindingTableGenerator
{
public:
  /// Add a ray generation program by name, with its list of data pointers or values according to
  /// the layout of its root signature
  void AddRayGenerationProgram(const std::wstring& entryPoint, const std::vector<void*>& inputData);

  /// Add a miss program by name, with its list of data pointers or values according to
  /// the layout of its root signature
  void AddMissProgram(const std::wstring& entryPoint, const std::vector<void*>& inputData);

  /// Add a hit group by name, with its list of data pointers or values according to
  /// the layout of its root signature
  void AddHitGroup(const std::wstring& entryPoint, const std::vector<void*>& inputData);

  /// Compute the size of the SBT based on the set of programs and hit groups it contains
  uint32_t ComputeSBTSize();

  /// Build the SBT and store it into sbtBuffer, which has to be pre-allocated on the upload heap.
  /// Access to the raytracing pipeline object is required to fetch program identifiers using their
  /// names
  void Generate(ID3D12Resource* sbtBuffer,
                ID3D12StateObjectProperties* raytracingPipeline);

  /// Reset the sets of programs and hit groups
  void Reset();

  /// The following getters are used to simplify the call to DispatchRays where the offsets of the
  /// shader programs must be exactly following the SBT layout

  /// Get the size in bytes of the SBT section dedicated to ray generation programs
  UINT GetRayGenSectionSize() const;
  /// Get the size in bytes of one ray generation program entry in the SBT
  UINT GetRayGenEntrySize() const;

  /// Get the size in bytes of the SBT section dedicated to miss programs
  UINT GetMissSectionSize() const;
  /// Get the size in bytes of one miss program entry in the SBT
  UINT GetMissEntrySize();

  /// Get the size in bytes of the SBT section dedicated to hit groups
  UINT GetHitGroupSectionSize() const;
  /// Get the size in bytes of hit group entry in the SBT
  UINT GetHitGroupEntrySize() const;

private:
  /// Wrapper for SBT entries, each consisting of the name of the program and a list of values,
  /// which can be either pointers or raw 32-bit constants
  struct SBTEntry
  {
    SBTEntry(std::wstring entryPoint, std::vector<void*> inputData);

    const std::wstring m_entryPoint;
    const std::vector<void*> m_inputData;
  };

  /// For each entry, copy the shader identifier followed by its resource pointers and/or root
  /// constants in outputData, with a stride in bytes of entrySize, and returns the size in bytes
  /// actually written to outputData.
  uint32_t CopyShaderData(ID3D12StateObjectProperties* raytracingPipeline,
                          uint8_t* outputData, const std::vector<SBTEntry>& shaders,
                          uint32_t entrySize);

  /// Compute the size of the SBT entries for a set of entries, which is determined by the maximum
  /// number of parameters of their root signature
  uint32_t GetEntrySize(const std::vector<SBTEntry>& entries);

  std::vector<SBTEntry> m_rayGen;
  std::vector<SBTEntry> m_miss;
  std::vector<SBTEntry> m_hitGroup;

  /// For each category, the size of an entry in the SBT depends on the maximum number of resources
  /// used by the shaders in that category.The helper computes those values automatically in
  /// GetEntrySize()
  uint32_t m_rayGenEntrySize;
  uint32_t m_missEntrySize;
  uint32_t m_hitGroupEntrySize;

  /// The program names are translated into program identifiers.The size in bytes of an identifier
  /// is provided by the device and is the same for all categories.
  UINT m_progIdSize;
};

} // namespace nv_helpers_dx12

// NOTE(Constantine): C++ implementation

// Helper to compute aligned buffer sizes
#ifndef ROUND_UP
#define ROUND_UP(v, powerOf2Alignment)                                         \
  (((v) + (powerOf2Alignment)-1) & ~((powerOf2Alignment)-1))
#endif

namespace nv_helpers_dx12 {

//--------------------------------------------------------------------------------------------------
// Add a vertex buffer in GPU memory into the acceleration structure. The
// vertices are supposed to be represented by 3 float32 value
void BottomLevelASGenerator::AddVertexBuffer(
    ID3D12Resource *vertexBuffer, // Buffer containing the vertex coordinates,
                                  // possibly interleaved with other vertex data
    UINT64
        vertexOffsetInBytes, // Offset of the first vertex in the vertex buffer
    uint32_t vertexCount,    // Number of vertices to consider in the buffer
    UINT vertexSizeInBytes,  // Size of a vertex including all its other data,
                             // used to stride in the buffer
    ID3D12Resource *transformBuffer, // Buffer containing a 4x4 transform matrix
                                     // in GPU memory, to be applied to the
                                     // vertices. This buffer cannot be nullptr
    UINT64 transformOffsetInBytes,   // Offset of the transform matrix in the
                                     // transform buffer
    bool isOpaque /* = true */ // If true, the geometry is considered opaque,
                               // optimizing the search for a closest hit
) {
  AddVertexBuffer(vertexBuffer, vertexOffsetInBytes, vertexCount,
                  vertexSizeInBytes, nullptr, 0, 0, transformBuffer,
                  transformOffsetInBytes, isOpaque);
}

//--------------------------------------------------------------------------------------------------
// Add a vertex buffer along with its index buffer in GPU memory into the
// acceleration structure. The vertices are supposed to be represented by 3
// float32 value. This implementation limits the original flexibility of the
// API:
//   - triangles (no custom intersector support)
//   - 3xfloat32 format
//   - 32-bit indices
void BottomLevelASGenerator::AddVertexBuffer(
    ID3D12Resource *vertexBuffer, // Buffer containing the vertex coordinates,
                                  // possibly interleaved with other vertex data
    UINT64
        vertexOffsetInBytes, // Offset of the first vertex in the vertex buffer
    uint32_t vertexCount,    // Number of vertices to consider in the buffer
    UINT vertexSizeInBytes,  // Size of a vertex including all its other data,
                             // used to stride in the buffer
    ID3D12Resource *indexBuffer, // Buffer containing the vertex indices
                                 // describing the triangles
    UINT64 indexOffsetInBytes, // Offset of the first index in the index buffer
    uint32_t indexCount,       // Number of indices to consider in the buffer
    ID3D12Resource *transformBuffer, // Buffer containing a 4x4 transform matrix
                                     // in GPU memory, to be applied to the
                                     // vertices. This buffer cannot be nullptr
    UINT64 transformOffsetInBytes,   // Offset of the transform matrix in the
                                     // transform buffer
    bool isOpaque /* = true */ // If true, the geometry is considered opaque,
                               // optimizing the search for a closest hit
) {
  // Create the DX12 descriptor representing the input data, assumed to be
  // opaque triangles, with 3xf32 vertex coordinates and 32-bit indices
  D3D12_RAYTRACING_GEOMETRY_DESC descriptor = {};
  descriptor.Type = D3D12_RAYTRACING_GEOMETRY_TYPE_TRIANGLES;
  descriptor.Triangles.VertexBuffer.StartAddress =
      vertexBuffer->GetGPUVirtualAddress() + vertexOffsetInBytes;
  descriptor.Triangles.VertexBuffer.StrideInBytes = vertexSizeInBytes;
  descriptor.Triangles.VertexCount = vertexCount;
  descriptor.Triangles.VertexFormat = DXGI_FORMAT_R32G32B32_FLOAT;
  descriptor.Triangles.IndexBuffer =
      indexBuffer ? (indexBuffer->GetGPUVirtualAddress() + indexOffsetInBytes)
                  : 0;
  descriptor.Triangles.IndexFormat =
      indexBuffer ? DXGI_FORMAT_R32_UINT : DXGI_FORMAT_UNKNOWN;
  descriptor.Triangles.IndexCount = indexCount;
  descriptor.Triangles.Transform3x4 =
      transformBuffer
          ? (transformBuffer->GetGPUVirtualAddress() + transformOffsetInBytes)
          : 0;
  descriptor.Flags = isOpaque ? D3D12_RAYTRACING_GEOMETRY_FLAG_OPAQUE
                              : D3D12_RAYTRACING_GEOMETRY_FLAG_NONE;

  m_vertexBuffers.push_back(descriptor);
}

//--------------------------------------------------------------------------------------------------
// Compute the size of the scratch space required to build the acceleration
// structure, as well as the size of the resulting structure. The allocation of
// the buffers is then left to the application
void BottomLevelASGenerator::ComputeASBufferSizes(
    ID3D12Device5 *device, // Device on which the build will be performed
    bool allowUpdate,     // If true, the resulting acceleration structure will
                          // allow iterative updates
    UINT64 *scratchSizeInBytes, // Required scratch memory on the GPU to build
                                // the acceleration structure
    UINT64 *resultSizeInBytes   // Required GPU memory to store the acceleration
                                // structure
) {
  // The generated AS can support iterative updates. This may change the final
  // size of the AS as well as the temporary memory requirements, and hence has
  // to be set before the actual build
  m_flags =
      allowUpdate
          ? D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE
          : D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_NONE;

  // Describe the work being requested, in this case the construction of a
  // (possibly dynamic) bottom-level hierarchy, with the given vertex buffers
  
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS prebuildDesc;
  prebuildDesc.Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL;
  prebuildDesc.DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  prebuildDesc.NumDescs = static_cast<UINT>(m_vertexBuffers.size());
  prebuildDesc.pGeometryDescs = m_vertexBuffers.data();
  prebuildDesc.Flags = m_flags;

  // This structure is used to hold the sizes of the required scratch memory and
  // resulting AS
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO info = {};

  // Building the acceleration structure (AS) requires some scratch space, as
  // well as space to store the resulting structure This function computes a
  // conservative estimate of the memory requirements for both, based on the
  // geometry size.
  device->GetRaytracingAccelerationStructurePrebuildInfo(&prebuildDesc, &info);

  // Buffer sizes need to be 256-byte-aligned
  *scratchSizeInBytes =
      ROUND_UP(info.ScratchDataSizeInBytes,
               D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT);
  *resultSizeInBytes = ROUND_UP(info.ResultDataMaxSizeInBytes,
                                D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT);

  // Store the memory requirements for use during build
  m_scratchSizeInBytes = *scratchSizeInBytes;
  m_resultSizeInBytes = *resultSizeInBytes;
}

//--------------------------------------------------------------------------------------------------
// Enqueue the construction of the acceleration structure on a command list,
// using application-provided buffers and possibly a pointer to the previous
// acceleration structure in case of iterative updates. Note that the update can
// be done in place: the result and previousResult pointers can be the same.
void BottomLevelASGenerator::Generate(
    ID3D12GraphicsCommandList4
        *commandList, // Command list on which the build will be enqueued
    ID3D12Resource *scratchBuffer, // Scratch buffer used by the builder to
                                   // store temporary data
    ID3D12Resource
        *resultBuffer, // Result buffer storing the acceleration structure
    bool updateOnly,   // If true, simply refit the existing
                       // acceleration structure
    ID3D12Resource *previousResult // Optional previous acceleration
                                   // structure, used if an iterative update
                                   // is requested
) {

  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS flags = m_flags;
  // The stored flags represent whether the AS has been built for updates or
  // not. If yes and an update is requested, the builder is told to only update
  // the AS instead of fully rebuilding it
  if (flags ==
          D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE &&
      updateOnly) {
    flags = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PERFORM_UPDATE;
  }

  // Sanity checks
  if (m_flags !=
          D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE &&
      updateOnly) {
    throw std::logic_error(
        "Cannot update a bottom-level AS not originally built for updates");
  }
  if (updateOnly && previousResult == nullptr) {
    throw std::logic_error(
        "Bottom-level hierarchy update requires the previous hierarchy");
  }

  if (m_resultSizeInBytes == 0 || m_scratchSizeInBytes == 0) {
    throw std::logic_error(
        "Invalid scratch and result buffer sizes - ComputeASBufferSizes needs "
        "to be called before Build");
  }
  // Create a descriptor of the requested builder work, to generate a
  // bottom-level AS from the input parameters
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC buildDesc;
  buildDesc.Inputs.Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL;
  buildDesc.Inputs.DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  buildDesc.Inputs.NumDescs = static_cast<UINT>(m_vertexBuffers.size());
  buildDesc.Inputs.pGeometryDescs = m_vertexBuffers.data();
  buildDesc.DestAccelerationStructureData = {
      resultBuffer->GetGPUVirtualAddress()};
  buildDesc.ScratchAccelerationStructureData = {
      scratchBuffer->GetGPUVirtualAddress()};
  buildDesc.SourceAccelerationStructureData =
      previousResult ? previousResult->GetGPUVirtualAddress() : 0;
  buildDesc.Inputs.Flags = flags;

  // Build the AS
  commandList->BuildRaytracingAccelerationStructure(&buildDesc, 0, nullptr);

  // NOTE(Constantine): Commented out to wait explicitly on user side.
  //
  // Wait for the builder to complete by setting a barrier on the resulting
  // buffer. This is particularly important as the construction of the top-level
  // hierarchy may be called right afterwards, before executing the command
  // list.
  //
  //D3D12_RESOURCE_BARRIER uavBarrier;
  //uavBarrier.Type = D3D12_RESOURCE_BARRIER_TYPE_UAV;
  //uavBarrier.UAV.pResource = resultBuffer;
  //uavBarrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
  //commandList->ResourceBarrier(1, &uavBarrier);
}

} // namespace nv_helpers_dx12

/*
The top-level hierarchy is used to store a set of instances represented by
bottom-level hierarchies in a way suitable for fast intersection at runtime. To
be built, this data structure requires some scratch space which has to be
allocated by the application. Similarly, the resulting data structure is stored
in an application-controlled buffer.

To be used, the application must first add all the instances to be contained in
the final structure, using AddInstance. After all instances have been added,
ComputeASBufferSizes will prepare the build, and provide the required sizes for
the scratch data and the final result. The Build call will finally compute the
acceleration structure and store it in the result buffer.

Note that the build is enqueued in the command list, meaning that the scratch
buffer needs to be kept until the command list execution is finished.
*/

// Helper to compute aligned buffer sizes
#ifndef ROUND_UP
#define ROUND_UP(v, powerOf2Alignment) (((v) + (powerOf2Alignment)-1) & ~((powerOf2Alignment)-1))
#endif

namespace nv_helpers_dx12
{

//--------------------------------------------------------------------------------------------------
//
void TopLevelASGenerator::SetInstancesCount(UINT instancesCount)
{
  m_instancesCount = instancesCount;
}

//--------------------------------------------------------------------------------------------------
//
// Compute the size of the scratch space required to build the acceleration
// structure, as well as the size of the resulting structure. The allocation of
// the buffers is then left to the application
void TopLevelASGenerator::ComputeASBufferSizes(
    ID3D12Device5* device, // Device on which the build will be performed
    bool allowUpdate,                        // If true, the resulting acceleration structure will
                                             // allow iterative updates
    UINT64* scratchSizeInBytes,              // Required scratch memory on the GPU to build
                                             // the acceleration structure
    UINT64* resultSizeInBytes,               // Required GPU memory to store the acceleration
                                             // structure
    UINT64* descriptorsSizeInBytes           // Required GPU memory to store instance
                                             // descriptors, containing the matrices,
                                             // indices etc.
)
{
  // The generated AS can support iterative updates. This may change the final
  // size of the AS as well as the temporary memory requirements, and hence has
  // to be set before the actual build
  m_flags = allowUpdate ? D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE
                        : D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_NONE;

  // Describe the work being requested, in this case the construction of a
  // (possibly dynamic) top-level hierarchy, with the given instance descriptors
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS
  prebuildDesc = {};
  prebuildDesc.Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL;
  prebuildDesc.DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  prebuildDesc.NumDescs = static_cast<UINT>(m_instancesCount);
  prebuildDesc.Flags = m_flags;

  // This structure is used to hold the sizes of the required scratch memory and
  // resulting AS
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO info = {};

  // Building the acceleration structure (AS) requires some scratch space, as
  // well as space to store the resulting structure This function computes a
  // conservative estimate of the memory requirements for both, based on the
  // number of bottom-level instances.
  device->GetRaytracingAccelerationStructurePrebuildInfo(&prebuildDesc, &info);

  // Buffer sizes need to be 256-byte-aligned
  info.ResultDataMaxSizeInBytes =
      ROUND_UP(info.ResultDataMaxSizeInBytes, D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT);
  info.ScratchDataSizeInBytes =
      ROUND_UP(info.ScratchDataSizeInBytes, D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT);

  m_resultSizeInBytes = info.ResultDataMaxSizeInBytes;
  m_scratchSizeInBytes = info.ScratchDataSizeInBytes;
  // The instance descriptors are stored as-is in GPU memory, so we can deduce
  // the required size from the instance count
  m_instanceDescsSizeInBytes =
      ROUND_UP(sizeof(D3D12_RAYTRACING_INSTANCE_DESC) * static_cast<UINT64>(m_instancesCount),
               D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT);

  *scratchSizeInBytes = m_scratchSizeInBytes;
  *resultSizeInBytes = m_resultSizeInBytes;
  *descriptorsSizeInBytes = m_instanceDescsSizeInBytes;
}

//--------------------------------------------------------------------------------------------------
//
// Enqueue the construction of the acceleration structure on a command list,
// using application-provided buffers and possibly a pointer to the previous
// acceleration structure in case of iterative updates. Note that the update can
// be done in place: the result and previousResult pointers can be the same.
void TopLevelASGenerator::Generate(
    ID3D12GraphicsCommandList4* commandList, // Command list on which the build will be enqueued
    ID3D12Resource* scratchBuffer,     // Scratch buffer used by the builder to
                                       // store temporary data
    ID3D12Resource* resultBuffer,      // Result buffer storing the acceleration structure
    ID3D12Resource* descriptorsBuffer, // Auxiliary result buffer containing the instance
                                       // descriptors, has to be in upload heap
    bool updateOnly /*= false*/,       // If true, simply refit the existing
                                       // acceleration structure
    ID3D12Resource* previousResult /*= nullptr*/ // Optional previous acceleration
                                                 // structure, used if an iterative update
                                                 // is requested
)
{
  // If this in an update operation we need to provide the source buffer
  D3D12_GPU_VIRTUAL_ADDRESS pSourceAS = updateOnly ? previousResult->GetGPUVirtualAddress() : 0;

  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS flags = m_flags;
  // The stored flags represent whether the AS has been built for updates or
  // not. If yes and an update is requested, the builder is told to only update
  // the AS instead of fully rebuilding it
  if (flags == D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE && updateOnly)
  {
    flags = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PERFORM_UPDATE;
  }

  // Sanity checks
  if (m_flags != D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE && updateOnly)
  {
    throw std::logic_error("Cannot update a top-level AS not originally built for updates");
  }
  if (updateOnly && previousResult == nullptr)
  {
    throw std::logic_error("Top-level hierarchy update requires the previous hierarchy");
  }

  // Create a descriptor of the requested builder work, to generate a top-level
  // AS from the input parameters
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC buildDesc = {};
  buildDesc.Inputs.Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL;
  buildDesc.Inputs.DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  buildDesc.Inputs.InstanceDescs = descriptorsBuffer->GetGPUVirtualAddress();
  buildDesc.Inputs.NumDescs = static_cast<UINT>(m_instancesCount);
  buildDesc.DestAccelerationStructureData = {resultBuffer->GetGPUVirtualAddress()
                                             };
  buildDesc.ScratchAccelerationStructureData = {scratchBuffer->GetGPUVirtualAddress()
                                                };
  buildDesc.SourceAccelerationStructureData = pSourceAS;
  buildDesc.Inputs.Flags = flags;

  // Build the top-level AS
  commandList->BuildRaytracingAccelerationStructure(&buildDesc, 0, nullptr);

  // NOTE(Constantine): Commented out to wait explicitly on user side.
  //
  // Wait for the builder to complete by setting a barrier on the resulting
  // buffer. This can be important in case the rendering is triggered
  // immediately afterwards, without executing the command list
  //
  //D3D12_RESOURCE_BARRIER uavBarrier;
  //uavBarrier.Type = D3D12_RESOURCE_BARRIER_TYPE_UAV;
  //uavBarrier.UAV.pResource = resultBuffer;
  //uavBarrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
  //commandList->ResourceBarrier(1, &uavBarrier);
}

} // namespace nv_helpers_dx12

/*
Utility class to create root signatures. The order in which the addition methods are called is
important as it will define the slots of the heap or of the Shader Binding Table to which buffer
pointers will be bound.
*/

namespace nv_helpers_dx12
{

//--------------------------------------------------------------------------------------------------
//
// Add a set of heap range descriptors as a parameter of the root signature.
void RootSignatureGenerator::AddHeapRangesParameter(
    const std::vector<D3D12_DESCRIPTOR_RANGE>& ranges)
{
  m_ranges.push_back(ranges);

  // A set of ranges on the heap is a descriptor table parameter
  D3D12_ROOT_PARAMETER param = {};
  param.ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
  param.DescriptorTable.NumDescriptorRanges = static_cast<UINT>(ranges.size());
  // The range pointer is kept null here, and will be resolved when generating the root signature
  // (see explanation of m_rangeLocations below)
  param.DescriptorTable.pDescriptorRanges = nullptr;

  // All parameters (heap ranges and root parameters) are added to the same parameter list to
  // preserve order
  m_parameters.push_back(param);

  // The descriptor table descriptor ranges require a pointer to the descriptor ranges. Since new
  // ranges can be dynamically added in the vector, we separately store the index of the range set.
  // The actual address will be solved when generating the actual root signature
  m_rangeLocations.push_back(static_cast<UINT>(m_ranges.size() - 1));
}

//--------------------------------------------------------------------------------------------------
//
// Add a set of heap ranges as a parameter of the root signature. Each range
// is defined as follows:
// - UINT BaseShaderRegister: the first register index in the range, e.g. the
// register of a UAV with BaseShaderRegister==0 is defined in the HLSL code
// as register(u0)
// - UINT NumDescriptors: number of descriptors in the range. Those will be
// mapped to BaseShaderRegister, BaseShaderRegister+1 etc. UINT
// RegisterSpace: Allows using the same register numbers multiple times by
// specifying a space where they are defined, similarly to a namespace. For
// example, a UAV with BaseShaderRegister==0 and RegisterSpace==1 is accessed
// in HLSL using the syntax register(u0, space1)
// - D3D12_DESCRIPTOR_RANGE_TYPE RangeType: The range type, such as
// D3D12_DESCRIPTOR_RANGE_TYPE_CBV for a constant buffer
// - UINT OffsetInDescriptorsFromTableStart: The first slot in the heap
// corresponding to the buffers mapped by the root signature. This can either
// be explicit, or implicit using D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND. In
// this case the index in the heap is the one directly following the last
// parameter range (or 0 if it's the first)
void RootSignatureGenerator::AddHeapRangesParameter(
    std::vector<std::tuple<UINT, /* BaseShaderRegister, */ UINT, /* NumDescriptors */ UINT,
                           /* RegisterSpace */ D3D12_DESCRIPTOR_RANGE_TYPE,
                           /* RangeType */ UINT /* OffsetInDescriptorsFromTableStart */>>
        ranges)
{
  // Build and store the set of descriptors for the ranges
  std::vector<D3D12_DESCRIPTOR_RANGE> rangeStorage;
  for (const auto& input : ranges)
  {
    D3D12_DESCRIPTOR_RANGE r = {};
    r.BaseShaderRegister = std::get<RSC_BASE_SHADER_REGISTER>(input);
    r.NumDescriptors = std::get<RSC_NUM_DESCRIPTORS>(input);
    r.RegisterSpace = std::get<RSC_REGISTER_SPACE>(input);
    r.RangeType = std::get<RSC_RANGE_TYPE>(input);
    r.OffsetInDescriptorsFromTableStart =
        std::get<RSC_OFFSET_IN_DESCRIPTORS_FROM_TABLE_START>(input);
    rangeStorage.push_back(r);
  }

  // Add those ranges to the heap parameters
  AddHeapRangesParameter(rangeStorage);
}

//--------------------------------------------------------------------------------------------------
//
// Add a root parameter to the shader, defined by its type: constant buffer (CBV), shader
// resource (SRV), unordered access (UAV), or root constant (CBV, directly defined by its value
// instead of a buffer). The shaderRegister and registerSpace indicate how to access the
// parameter in the HLSL code, e.g a SRV with shaderRegister==1 and registerSpace==0 is
// accessible via register(t1, space0).
// In case of a root constant, the last parameter indicates how many successive 32-bit constants
// will be bound.
void RootSignatureGenerator::AddRootParameter(D3D12_ROOT_PARAMETER_TYPE type,
                                              UINT shaderRegister /*= 0*/,
                                              UINT registerSpace /*= 0*/,
                                              UINT numRootConstants /*= 1*/)
{
  D3D12_ROOT_PARAMETER param = {};
  param.ParameterType = type;
  // The descriptor is an union, so specific values need to be set in case the parameter is a
  // constant instead of a buffer.
  if (type == D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS)
  {
    param.Constants.Num32BitValues = numRootConstants;
    param.Constants.RegisterSpace = registerSpace;
    param.Constants.ShaderRegister = shaderRegister;
  }
  else
  {
    param.Descriptor.RegisterSpace = registerSpace;
    param.Descriptor.ShaderRegister = shaderRegister;
  }

  // We default the visibility to all shaders
  param.ShaderVisibility = D3D12_SHADER_VISIBILITY_ALL;

  // Add the root parameter to the set of parameters,
  m_parameters.push_back(param);
  // and indicate that there will be no range
  // location to indicate since this parameter is not part of the heap
  m_rangeLocations.push_back(~0u);
}

//--------------------------------------------------------------------------------------------------
//
// Create the root signature from the set of parameters, in the order of the addition calls
ID3D12RootSignature* RootSignatureGenerator::Generate(ID3D12Device* device, bool isLocal)
{
  // Go through all the parameters, and set the actual addresses of the heap range descriptors based
  // on their indices in the range set array
  for (size_t i = 0; i < m_parameters.size(); i++)
  {
    if (m_parameters[i].ParameterType == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)
    {
      m_parameters[i].DescriptorTable.pDescriptorRanges = m_ranges[m_rangeLocations[i]].data();
    }
  }
  // Specify the root signature with its set of parameters
  D3D12_ROOT_SIGNATURE_DESC rootDesc = {};
  rootDesc.NumParameters = static_cast<UINT>(m_parameters.size());
  rootDesc.pParameters = m_parameters.data();
  // Set the flags of the signature. By default root signatures are global, for example for vertex
  // and pixel shaders. For raytracing shaders the root signatures are local.
  rootDesc.Flags =
      isLocal ? D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE : D3D12_ROOT_SIGNATURE_FLAG_NONE;

  // Create the root signature from its descriptor
  ID3DBlob* pSigBlob;
  ID3DBlob* pErrorBlob;
  HRESULT hr = D3D12SerializeRootSignature(&rootDesc, D3D_ROOT_SIGNATURE_VERSION_1_0, &pSigBlob,
                                           &pErrorBlob);
  if (FAILED(hr))
  {
    throw std::logic_error("Cannot serialize root signature");
  }
  ID3D12RootSignature* pRootSig;
  hr = device->CreateRootSignature(0, pSigBlob->GetBufferPointer(), pSigBlob->GetBufferSize(),
                                   IID_PPV_ARGS(&pRootSig));
  if (FAILED(hr))
  {
    throw std::logic_error("Cannot create root signature");
  }
  return pRootSig;
}

} // namespace nv_helpers_dx12

/*
The raytracing pipeline combines the raytracing shaders into a state object,
that can be thought of as an executable GPU program. For that, it requires the
shaders compiled as DXIL libraries, where each library exports symbols in a way
similar to DLLs. Those symbols are then used to refer to these shaders libraries
when creating hit groups, associating the shaders to their root signatures and
declaring the steps of the pipeline. All the calls to this helper class can be
done in arbitrary order. Some basic sanity checks are also performed when
compiling in debug mode.
*/

namespace nv_helpers_dx12
{

//--------------------------------------------------------------------------------------------------
// The pipeline helper requires access to the device, as well as the
// raytracing device prior to Windows 10 RS5.
RayTracingPipelineGenerator::RayTracingPipelineGenerator(ID3D12Device5* device)
    : m_device(device)
{
  // The pipeline creation requires having at least one empty global and local root signatures, so
  // we systematically create both, as this does not incur any overhead
  CreateDummyRootSignatures();
}

//--------------------------------------------------------------------------------------------------
//
// Add a DXIL library to the pipeline. Note that this library has to be
// compiled with dxc, using a lib_6_3 target. The exported symbols must correspond exactly to the
// names of the shaders declared in the library, although unused ones can be omitted.
void RayTracingPipelineGenerator::AddLibrary(uint64_t dxilLibraryBufferSize, void * dxilLibraryBufferPointer,
                                             const std::vector<std::wstring>& symbolExports)
{
  m_libraries.emplace_back(Library(dxilLibraryBufferSize, dxilLibraryBufferPointer, symbolExports));
}

//--------------------------------------------------------------------------------------------------
//
// In DXR the hit-related shaders are grouped into hit groups. Such shaders are:
// - The intersection shader, which can be used to intersect custom geometry, and is called upon
//   hitting the bounding box the the object. A default one exists to intersect triangles
// - The any hit shader, called on each intersection, which can be used to perform early
//   alpha-testing and allow the ray to continue if needed. Default is a pass-through.
// - The closest hit shader, invoked on the hit point closest to the ray start.
// The shaders in a hit group share the same root signature, and are only referred to by the
// hit group name in other places of the program.
void RayTracingPipelineGenerator::AddHitGroup(const std::wstring& hitGroupName,
                                              const std::wstring& closestHitSymbol,
                                              const std::wstring& anyHitSymbol /*= L""*/,
                                              const std::wstring& intersectionSymbol /*= L""*/)
{
  m_hitGroups.emplace_back(
      HitGroup(hitGroupName, closestHitSymbol, anyHitSymbol, intersectionSymbol));
}

//--------------------------------------------------------------------------------------------------
//
// The shaders and hit groups may have various root signatures. This call associates a root
// signature to one or more symbols. All imported symbols must be associated to one root
// signature.
void RayTracingPipelineGenerator::AddRootSignatureAssociation(
    ID3D12RootSignature* rootSignature, const std::vector<std::wstring>& symbols)
{
  m_rootSignatureAssociations.emplace_back(RootSignatureAssociation(rootSignature, symbols));
}

//--------------------------------------------------------------------------------------------------
//
// The payload is the way hit or miss shaders can exchange data with the shader that called
// TraceRay. When several ray types are used (e.g. primary and shadow rays), this value must be
// the largest possible payload size. Note that to optimize performance, this size must be kept
// as low as possible.
void RayTracingPipelineGenerator::SetMaxPayloadSize(UINT sizeInBytes)
{
  m_maxPayLoadSizeInBytes = sizeInBytes;
}

//--------------------------------------------------------------------------------------------------
//
// When hitting geometry, a number of surface attributes can be generated by the intersector.
// Using the built-in triangle intersector the attributes are the barycentric coordinates, with a
// size 2*sizeof(float).
void RayTracingPipelineGenerator::SetMaxAttributeSize(UINT sizeInBytes)
{
  m_maxAttributeSizeInBytes = sizeInBytes;
}

//--------------------------------------------------------------------------------------------------
//
// Upon hitting a surface, a closest hit shader can issue a new TraceRay call. This parameter
// indicates the maximum level of recursion. Note that this depth should be kept as low as
// possible, typically 2, to allow hit shaders to trace shadow rays. Recursive ray tracing
// algorithms must be flattened to a loop in the ray generation program for best performance.
void RayTracingPipelineGenerator::SetMaxRecursionDepth(UINT maxDepth)
{
  m_maxRecursionDepth = maxDepth;
}

//--------------------------------------------------------------------------------------------------
//
// Compiles the raytracing state object
ID3D12StateObject* RayTracingPipelineGenerator::Generate()
{
  // The pipeline is made of a set of sub-objects, representing the DXIL libraries, hit group
  // declarations, root signature associations, plus some configuration objects
  UINT64 subobjectCount =
      m_libraries.size() +                     // DXIL libraries
      m_hitGroups.size() +                     // Hit group declarations
      1 +                                      // Shader configuration
      1 +                                      // Shader payload
      2 * m_rootSignatureAssociations.size() + // Root signature declaration + association
      2 +                                      // Empty global and local root signatures
      1;                                       // Final pipeline subobject

  // Initialize a vector with the target object count. It is necessary to make the allocation before
  // adding subobjects as some subobjects reference other subobjects by pointer. Using push_back may
  // reallocate the array and invalidate those pointers.
  std::vector<D3D12_STATE_SUBOBJECT> subobjects(subobjectCount);

  UINT currentIndex = 0;

  // Add all the DXIL libraries
  for (const Library& lib : m_libraries)
  {
    D3D12_STATE_SUBOBJECT libSubobject = {};
    libSubobject.Type = D3D12_STATE_SUBOBJECT_TYPE_DXIL_LIBRARY;
    libSubobject.pDesc = &lib.m_libDesc;

    subobjects[currentIndex++] = libSubobject;
  }

  // Add all the hit group declarations
  for (const HitGroup& group : m_hitGroups)
  {
    D3D12_STATE_SUBOBJECT hitGroup = {};
    hitGroup.Type = D3D12_STATE_SUBOBJECT_TYPE_HIT_GROUP;
    hitGroup.pDesc = &group.m_desc;

    subobjects[currentIndex++] = hitGroup;
  }

  // Add a subobject for the shader payload configuration
  D3D12_RAYTRACING_SHADER_CONFIG shaderDesc = {};
  shaderDesc.MaxPayloadSizeInBytes = m_maxPayLoadSizeInBytes;
  shaderDesc.MaxAttributeSizeInBytes = m_maxAttributeSizeInBytes;

  D3D12_STATE_SUBOBJECT shaderConfigObject = {};
  shaderConfigObject.Type = D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_SHADER_CONFIG;
  shaderConfigObject.pDesc = &shaderDesc;

  subobjects[currentIndex++] = shaderConfigObject;

  // Build a list of all the symbols for ray generation, miss and hit groups
  // Those shaders have to be associated with the payload definition
  std::vector<std::wstring> exportedSymbols = {};
  std::vector<LPCWSTR> exportedSymbolPointers = {};
  BuildShaderExportList(exportedSymbols);

  // Build an array of the string pointers
  exportedSymbolPointers.reserve(exportedSymbols.size());
  for (const auto& name : exportedSymbols)
  {
    exportedSymbolPointers.push_back(name.c_str());
  }
  const WCHAR** shaderExports = exportedSymbolPointers.data();

  // Add a subobject for the association between shaders and the payload
  D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION shaderPayloadAssociation = {};
  shaderPayloadAssociation.NumExports = static_cast<UINT>(exportedSymbols.size());
  shaderPayloadAssociation.pExports = shaderExports;

  // Associate the set of shaders with the payload defined in the previous subobject
  shaderPayloadAssociation.pSubobjectToAssociate = &subobjects[(currentIndex - 1)];

  // Create and store the payload association object
  D3D12_STATE_SUBOBJECT shaderPayloadAssociationObject = {};
  shaderPayloadAssociationObject.Type = D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
  shaderPayloadAssociationObject.pDesc = &shaderPayloadAssociation;
  subobjects[currentIndex++] = shaderPayloadAssociationObject;

  // The root signature association requires two objects for each: one to declare the root
  // signature, and another to associate that root signature to a set of symbols
  for (RootSignatureAssociation& assoc : m_rootSignatureAssociations)
  {

    // Add a subobject to declare the root signature
    D3D12_STATE_SUBOBJECT rootSigObject = {};
    rootSigObject.Type = D3D12_STATE_SUBOBJECT_TYPE_LOCAL_ROOT_SIGNATURE;
    rootSigObject.pDesc = &assoc.m_rootSignature;

    subobjects[currentIndex++] = rootSigObject;

    // Add a subobject for the association between the exported shader symbols and the root
    // signature
    assoc.m_association.NumExports = static_cast<UINT>(assoc.m_symbolPointers.size());
    assoc.m_association.pExports = assoc.m_symbolPointers.data();
    assoc.m_association.pSubobjectToAssociate = &subobjects[(currentIndex - 1)];

    D3D12_STATE_SUBOBJECT rootSigAssociationObject = {};
    rootSigAssociationObject.Type = D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
    rootSigAssociationObject.pDesc = &assoc.m_association;

    subobjects[currentIndex++] = rootSigAssociationObject;
  }

  // The pipeline construction always requires an empty global root signature
  D3D12_STATE_SUBOBJECT globalRootSig;
  globalRootSig.Type = D3D12_STATE_SUBOBJECT_TYPE_GLOBAL_ROOT_SIGNATURE;
  ID3D12RootSignature* dgSig = m_dummyGlobalRootSignature;
  globalRootSig.pDesc = &dgSig;

  subobjects[currentIndex++] = globalRootSig;

  // The pipeline construction always requires an empty local root signature
  D3D12_STATE_SUBOBJECT dummyLocalRootSig;
  dummyLocalRootSig.Type = D3D12_STATE_SUBOBJECT_TYPE_LOCAL_ROOT_SIGNATURE;
  ID3D12RootSignature* dlSig = m_dummyLocalRootSignature;
  dummyLocalRootSig.pDesc = &dlSig;
  subobjects[currentIndex++] = dummyLocalRootSig;

  // Add a subobject for the ray tracing pipeline configuration
  D3D12_RAYTRACING_PIPELINE_CONFIG pipelineConfig = {};
  pipelineConfig.MaxTraceRecursionDepth = m_maxRecursionDepth;

  D3D12_STATE_SUBOBJECT pipelineConfigObject = {};
  pipelineConfigObject.Type = D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_PIPELINE_CONFIG;
  pipelineConfigObject.pDesc = &pipelineConfig;

  subobjects[currentIndex++] = pipelineConfigObject;

  // Describe the ray tracing pipeline state object
  D3D12_STATE_OBJECT_DESC pipelineDesc = {};
  pipelineDesc.Type = D3D12_STATE_OBJECT_TYPE_RAYTRACING_PIPELINE;
  pipelineDesc.NumSubobjects = currentIndex; // static_cast<UINT>(subobjects.size());
  pipelineDesc.pSubobjects = subobjects.data();

  ID3D12StateObject* rtStateObject = nullptr;

  // Create the state object
  HRESULT hr = m_device->CreateStateObject(&pipelineDesc, IID_PPV_ARGS(&rtStateObject));
  if (FAILED(hr))
  {
    throw std::logic_error("Could not create the raytracing state object");
  }
  return rtStateObject;
}

//--------------------------------------------------------------------------------------------------
//
// The pipeline creation requires having at least one empty global and local root signatures, so
// we systematically create both
void RayTracingPipelineGenerator::CreateDummyRootSignatures()
{
  // Creation of the global root signature
  D3D12_ROOT_SIGNATURE_DESC rootDesc = {};
  rootDesc.NumParameters = 0;
  rootDesc.pParameters = nullptr;
  // A global root signature is the default, hence this flag
  rootDesc.Flags = D3D12_ROOT_SIGNATURE_FLAG_NONE;

  HRESULT hr = 0;

  ID3DBlob* serializedRootSignature;
  ID3DBlob* error;

  // Create the empty global root signature
  hr = D3D12SerializeRootSignature(&rootDesc, D3D_ROOT_SIGNATURE_VERSION_1,
                                   &serializedRootSignature, &error);
  if (FAILED(hr))
  {
    throw std::logic_error("Could not serialize the global root signature");
  }
  hr = m_device->CreateRootSignature(0, serializedRootSignature->GetBufferPointer(),
                                     serializedRootSignature->GetBufferSize(),
                                     IID_PPV_ARGS(&m_dummyGlobalRootSignature));

  serializedRootSignature->Release();
  if (FAILED(hr))
  {
    throw std::logic_error("Could not create the global root signature");
  }

  // Create the local root signature, reusing the same descriptor but altering the creation flag
  rootDesc.Flags = D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE;
  hr = D3D12SerializeRootSignature(&rootDesc, D3D_ROOT_SIGNATURE_VERSION_1,
                                   &serializedRootSignature, &error);
  if (FAILED(hr))
  {
    throw std::logic_error("Could not serialize the local root signature");
  }
  hr = m_device->CreateRootSignature(0, serializedRootSignature->GetBufferPointer(),
                                     serializedRootSignature->GetBufferSize(),
                                     IID_PPV_ARGS(&m_dummyLocalRootSignature));

  serializedRootSignature->Release();
  if (FAILED(hr))
  {
    throw std::logic_error("Could not create the local root signature");
  }
}

//--------------------------------------------------------------------------------------------------
//
// Build a list containing the export symbols for the ray generation shaders, miss shaders, and
// hit group names
void RayTracingPipelineGenerator::BuildShaderExportList(std::vector<std::wstring>& exportedSymbols)
{
  // Get all names from libraries
  // Get names associated to hit groups
  // Return list of libraries+hit group names - shaders in hit groups

  std::unordered_set<std::wstring> exports;

  // Add all the symbols exported by the libraries
  for (const Library& lib : m_libraries)
  {
    for (const auto& exportName : lib.m_exportedSymbols)
    {
#ifdef _DEBUG
      // Sanity check in debug mode: check that no name is exported more than once
      if (exports.find(exportName) != exports.end())
      {
        throw std::logic_error("Multiple definition of a symbol in the imported DXIL libraries");
      }
#endif
      exports.insert(exportName);
    }
  }

#ifdef _DEBUG
  // Sanity check in debug mode: verify that the hit groups do not reference an unknown shader name
  std::unordered_set<std::wstring> all_exports = exports;

  for (const auto& hitGroup : m_hitGroups)
  {
    if (!hitGroup.m_anyHitSymbol.empty() && exports.find(hitGroup.m_anyHitSymbol) == exports.end())
    {
      throw std::logic_error("Any hit symbol not found in the imported DXIL libraries");
    }

    if (!hitGroup.m_closestHitSymbol.empty() &&
        exports.find(hitGroup.m_closestHitSymbol) == exports.end())
    {
      throw std::logic_error("Closest hit symbol not found in the imported DXIL libraries");
    }

    if (!hitGroup.m_intersectionSymbol.empty() &&
        exports.find(hitGroup.m_intersectionSymbol) == exports.end())
    {
      throw std::logic_error("Intersection symbol not found in the imported DXIL libraries");
    }

    all_exports.insert(hitGroup.m_hitGroupName);
  }

  // Sanity check in debug mode: verify that the root signature associations do not reference an
  // unknown shader or hit group name
  for (const auto& assoc : m_rootSignatureAssociations)
  {
    for (const auto& symb : assoc.m_symbols)
    {
      if (!symb.empty() && all_exports.find(symb) == all_exports.end())
      {
        throw std::logic_error("Root association symbol not found in the "
                               "imported DXIL libraries and hit group names");
      }
    }
  }
#endif

  // Go through all hit groups and remove the symbols corresponding to intersection, any hit and
  // closest hit shaders from the symbol set
  for (const auto& hitGroup : m_hitGroups)
  {
    if (!hitGroup.m_anyHitSymbol.empty())
    {
      exports.erase(hitGroup.m_anyHitSymbol);
    }
    if (!hitGroup.m_closestHitSymbol.empty())
    {
      exports.erase(hitGroup.m_closestHitSymbol);
    }
    if (!hitGroup.m_intersectionSymbol.empty())
    {
      exports.erase(hitGroup.m_intersectionSymbol);
    }
    exports.insert(hitGroup.m_hitGroupName);
  }

  // Finally build a vector containing ray generation and miss shaders, plus the hit group names
  for (const auto& name : exports)
  {
    exportedSymbols.push_back(name);
  }
}

//--------------------------------------------------------------------------------------------------
//
// Store data related to a DXIL library: the library itself, the exported symbols, and the
// associated descriptors
RayTracingPipelineGenerator::Library::Library(uint64_t dxilLibraryBufferSize, void * dxilLibraryBufferPointer,
                                              const std::vector<std::wstring>& exportedSymbols)
    : m_dxilLibraryBufferSize(dxilLibraryBufferSize), m_dxilLibraryBufferPointer(dxilLibraryBufferPointer), m_exportedSymbols(exportedSymbols), m_exports(exportedSymbols.size())
{
  // Create one export descriptor per symbol
  for (size_t i = 0; i < m_exportedSymbols.size(); i++)
  {
    m_exports[i] = {};
    m_exports[i].Name = m_exportedSymbols[i].c_str();
    m_exports[i].ExportToRename = nullptr;
    m_exports[i].Flags = D3D12_EXPORT_FLAG_NONE;
  }

  // Create a library descriptor combining the DXIL code and the export names
  m_libDesc.DXILLibrary.BytecodeLength = dxilLibraryBufferSize;
  m_libDesc.DXILLibrary.pShaderBytecode = dxilLibraryBufferPointer;
  m_libDesc.NumExports = static_cast<UINT>(m_exportedSymbols.size());
  m_libDesc.pExports = m_exports.data();
}

//--------------------------------------------------------------------------------------------------
//
// This copy constructor has to be defined so that the export descriptors are set correctly. Using
// the default constructor would copy the string pointers of the symbols into the descriptors, which
// would cause issues when the original Library object gets out of scope
RayTracingPipelineGenerator::Library::Library(const Library& source)
    : Library(source.m_dxilLibraryBufferSize, source.m_dxilLibraryBufferPointer, source.m_exportedSymbols)
{
}

//--------------------------------------------------------------------------------------------------
//
// Create a hit group descriptor from the input hit group name and shader symbols
RayTracingPipelineGenerator::HitGroup::HitGroup(std::wstring hitGroupName,
                                                std::wstring closestHitSymbol,
                                                std::wstring anyHitSymbol /*= L""*/,
                                                std::wstring intersectionSymbol /*= L""*/)
    : m_hitGroupName(std::move(hitGroupName)), m_closestHitSymbol(std::move(closestHitSymbol)),
      m_anyHitSymbol(std::move(anyHitSymbol)), m_intersectionSymbol(std::move(intersectionSymbol))
{
  // Indicate which shader program is used for closest hit, leave the other
  // ones undefined (default behavior), export the name of the group
  m_desc.HitGroupExport = m_hitGroupName.c_str();
  m_desc.ClosestHitShaderImport = m_closestHitSymbol.empty() ? nullptr : m_closestHitSymbol.c_str();
  m_desc.AnyHitShaderImport = m_anyHitSymbol.empty() ? nullptr : m_anyHitSymbol.c_str();
  m_desc.IntersectionShaderImport =
      m_intersectionSymbol.empty() ? nullptr : m_intersectionSymbol.c_str();
}

//--------------------------------------------------------------------------------------------------
//
// This copy constructor has to be defined so that the export descriptors are set correctly. Using
// the default constructor would copy the string pointers of the symbols into the descriptors, which
// would cause issues when the original HitGroup object gets out of scope
RayTracingPipelineGenerator::HitGroup::HitGroup(const HitGroup& source)
    : HitGroup(source.m_hitGroupName, source.m_closestHitSymbol, source.m_anyHitSymbol,
               source.m_intersectionSymbol)
{
}

//--------------------------------------------------------------------------------------------------
//
// Store the association between a set of symbols and a root signature. The associated descriptors
// will be built when compiling the pipeline. We store the symbol pointers directly so that they can
// be used without processing during compilation.
RayTracingPipelineGenerator::RootSignatureAssociation::RootSignatureAssociation(
    ID3D12RootSignature* rootSignature, const std::vector<std::wstring>& symbols)
    : m_rootSignature(rootSignature), m_symbols(symbols), m_symbolPointers(symbols.size())
{
  for (size_t i = 0; i < m_symbols.size(); i++)
  {
    m_symbolPointers[i] = m_symbols[i].c_str();
  }
  m_rootSignaturePointer = m_rootSignature;
}

//--------------------------------------------------------------------------------------------------
//
// This copy constructor has to be defined so that the export descriptors are set correctly. Using
// the default constructor would copy the string pointers of the symbols into the descriptors, which
// would cause issues when the original RootSignatureAssociation object gets out of scope
RayTracingPipelineGenerator::RootSignatureAssociation::RootSignatureAssociation(
    const RootSignatureAssociation& source)
    : RootSignatureAssociation(source.m_rootSignature, source.m_symbols)
{
}

} // namespace nv_helpers_dx12

/*
The ShaderBindingTable is a helper to construct the SBT. It helps to maintain the
proper offsets of each element, required when constructing the SBT, but also when filling the
dispatch rays description.
*/

// Helper to compute aligned buffer sizes
#ifndef ROUND_UP
#define ROUND_UP(v, powerOf2Alignment) (((v) + (powerOf2Alignment)-1) & ~((powerOf2Alignment)-1))
#endif

namespace nv_helpers_dx12
{

//--------------------------------------------------------------------------------------------------
//
// Add a ray generation program by name, with its list of data pointers or values according to
// the layout of its root signature
void ShaderBindingTableGenerator::AddRayGenerationProgram(const std::wstring& entryPoint,
                                                          const std::vector<void*>& inputData)
{
  m_rayGen.emplace_back(SBTEntry(entryPoint, inputData));
}

//--------------------------------------------------------------------------------------------------
//
// Add a miss program by name, with its list of data pointers or values according to
// the layout of its root signature
void ShaderBindingTableGenerator::AddMissProgram(const std::wstring& entryPoint,
                                                 const std::vector<void*>& inputData)
{
  m_miss.emplace_back(SBTEntry(entryPoint, inputData));
}

//--------------------------------------------------------------------------------------------------
//
// Add a hit group by name, with its list of data pointers or values according to
// the layout of its root signature
void ShaderBindingTableGenerator::AddHitGroup(const std::wstring& entryPoint,
                                              const std::vector<void*>& inputData)
{
  m_hitGroup.emplace_back(SBTEntry(entryPoint, inputData));
}

//--------------------------------------------------------------------------------------------------
//
// Compute the size of the SBT based on the set of programs and hit groups it contains
uint32_t ShaderBindingTableGenerator::ComputeSBTSize()
{
  // Size of a program identifier
  m_progIdSize = D3D12_RAYTRACING_SHADER_RECORD_BYTE_ALIGNMENT;
  // Compute the entry size of each program type depending on the maximum number of parameters in
  // each category
  m_rayGenEntrySize = GetEntrySize(m_rayGen);
  m_missEntrySize = GetEntrySize(m_miss);
  m_hitGroupEntrySize = GetEntrySize(m_hitGroup);

  // The total SBT size is the sum of the entries for ray generation, miss and hit groups, aligned
  // on 256 bytes
  uint32_t sbtSize = ROUND_UP(m_rayGenEntrySize * static_cast<UINT>(m_rayGen.size()) +
                                  m_missEntrySize * static_cast<UINT>(m_miss.size()) +
                                  m_hitGroupEntrySize * static_cast<UINT>(m_hitGroup.size()),
                              256);
  return sbtSize;
}

//--------------------------------------------------------------------------------------------------
//
// Build the SBT and store it into sbtBuffer, which has to be pre-allocated on the upload heap.
// Access to the raytracing pipeline object is required to fetch program identifiers using their
// names
void ShaderBindingTableGenerator::Generate(ID3D12Resource* sbtBuffer,
                                           ID3D12StateObjectProperties* raytracingPipeline)
{
  // Map the SBT
  uint8_t* pData;
  HRESULT hr = sbtBuffer->Map(0, nullptr, reinterpret_cast<void**>(&pData));
  if (FAILED(hr))
  {
    throw std::logic_error("Could not map the shader binding table");
  }
  // Copy the shader identifiers followed by their resource pointers or root constants: first the
  // ray generation, then the miss shaders, and finally the set of hit groups
  uint32_t offset = 0;

  offset = CopyShaderData(raytracingPipeline, pData, m_rayGen, m_rayGenEntrySize);
  pData += offset;

  offset = CopyShaderData(raytracingPipeline, pData, m_miss, m_missEntrySize);
  pData += offset;

  offset = CopyShaderData(raytracingPipeline, pData, m_hitGroup, m_hitGroupEntrySize);

  // Unmap the SBT
  sbtBuffer->Unmap(0, nullptr);
}

//--------------------------------------------------------------------------------------------------
//
// Reset the sets of programs and hit groups
void ShaderBindingTableGenerator::Reset()
{
  m_rayGen.clear();
  m_miss.clear();
  m_hitGroup.clear();

  m_rayGenEntrySize = 0;
  m_missEntrySize = 0;
  m_hitGroupEntrySize = 0;
  m_progIdSize = 0;
}

//--------------------------------------------------------------------------------------------------
// The following getters are used to simplify the call to DispatchRays where the offsets of the
// shader programs must be exactly following the SBT layout

//--------------------------------------------------------------------------------------------------
//
// Get the size in bytes of the SBT section dedicated to ray generation programs
UINT ShaderBindingTableGenerator::GetRayGenSectionSize() const
{
  return m_rayGenEntrySize * static_cast<UINT>(m_rayGen.size());
}

//--------------------------------------------------------------------------------------------------
//
// Get the size in bytes of one ray generation program entry in the SBT
UINT ShaderBindingTableGenerator::GetRayGenEntrySize() const
{
  return m_rayGenEntrySize;
}

//--------------------------------------------------------------------------------------------------
//
// Get the size in bytes of the SBT section dedicated to miss programs
UINT ShaderBindingTableGenerator::GetMissSectionSize() const
{
  return m_missEntrySize * static_cast<UINT>(m_miss.size());
}

//--------------------------------------------------------------------------------------------------
//
// Get the size in bytes of one miss program entry in the SBT
UINT ShaderBindingTableGenerator::GetMissEntrySize()
{
  return m_missEntrySize;
}

//--------------------------------------------------------------------------------------------------
//
// Get the size in bytes of the SBT section dedicated to hit groups
UINT ShaderBindingTableGenerator::GetHitGroupSectionSize() const
{
  return m_hitGroupEntrySize * static_cast<UINT>(m_hitGroup.size());
}

//--------------------------------------------------------------------------------------------------
//
// Get the size in bytes of one hit group entry in the SBT
UINT ShaderBindingTableGenerator::GetHitGroupEntrySize() const
{
  return m_hitGroupEntrySize;
}

//--------------------------------------------------------------------------------------------------
//
// For each entry, copy the shader identifier followed by its resource pointers and/or root
// constants in outputData, with a stride in bytes of entrySize, and returns the size in bytes
// actually written to outputData.
uint32_t ShaderBindingTableGenerator::CopyShaderData(
    ID3D12StateObjectProperties* raytracingPipeline, uint8_t* outputData,
    const std::vector<SBTEntry>& shaders, uint32_t entrySize)
{
  uint8_t* pData = outputData;
  for (const auto& shader : shaders)
  {
    // Get the shader identifier, and check whether that identifier is known
    void* id = raytracingPipeline->GetShaderIdentifier(shader.m_entryPoint.c_str());
    if (!id)
    {
      std::wstring errMsg(std::wstring(L"Unknown shader identifier used in the SBT: ") +
                          shader.m_entryPoint);
      throw std::logic_error(std::string(errMsg.begin(), errMsg.end()));
    }
    // Copy the shader identifier
    memcpy(pData, id, m_progIdSize);
    // Copy all its resources pointers or values in bulk
    memcpy(pData + m_progIdSize, shader.m_inputData.data(), shader.m_inputData.size() * 8);

    pData += entrySize;
  }
  // Return the number of bytes actually written to the output buffer
  return static_cast<uint32_t>(shaders.size()) * entrySize;
}

//--------------------------------------------------------------------------------------------------
//
// Compute the size of the SBT entries for a set of entries, which is determined by the maximum
// number of parameters of their root signature
uint32_t ShaderBindingTableGenerator::GetEntrySize(const std::vector<SBTEntry>& entries)
{
  // Find the maximum number of parameters used by a single entry
  size_t maxArgs = 0;
  for (const auto& shader : entries)
  {
    maxArgs = max(maxArgs, shader.m_inputData.size());
  }
  // A SBT entry is made of a program ID and a set of parameters, taking 8 bytes each. Those
  // parameters can either be 8-bytes pointers, or 4-bytes constants
  uint32_t entrySize = m_progIdSize + 8 * static_cast<uint32_t>(maxArgs);

  // The entries of the shader binding table must be 16-bytes-aligned
  entrySize = ROUND_UP(entrySize, D3D12_RAYTRACING_SHADER_RECORD_BYTE_ALIGNMENT);

  return entrySize;
}

//--------------------------------------------------------------------------------------------------
//
//
ShaderBindingTableGenerator::SBTEntry::SBTEntry(std::wstring entryPoint,
                                                std::vector<void*> inputData)
    : m_entryPoint(std::move(entryPoint)), m_inputData(std::move(inputData))
{
}

} // namespace nv_helpers_dx12

// NOTE(Constantine): C implementation

uint64_t redXRteArrayGetGpuAddress(RedHandleArray array, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  ID3D12Resource * resource = ((ID3D12Resource **)array)[0];
  return resource->GetGPUVirtualAddress();
}

void redXRteCreateBottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator * outBottomLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::BottomLevelASGenerator * handle = new(std::nothrow) nv_helpers_dx12::BottomLevelASGenerator();
  outBottomLevelASGenerator[0] = (RedXRteHandleBottomLevelASGenerator)(void *)handle;
}

void redXRteCreateTopLevelASGenerator(RedXRteHandleTopLevelASGenerator * outTopLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::TopLevelASGenerator * handle = new(std::nothrow) nv_helpers_dx12::TopLevelASGenerator();
  outTopLevelASGenerator[0] = (RedXRteHandleTopLevelASGenerator)(void *)handle;
}

void redXRteCreateRootSignatureGenerator(RedXRteHandleRootSignatureGenerator * outRootSignatureGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RootSignatureGenerator * handle = new(std::nothrow) nv_helpers_dx12::RootSignatureGenerator();
  outRootSignatureGenerator[0] = (RedXRteHandleRootSignatureGenerator)(void *)handle;
}

void redXRteCreateRayTracingPipelineGenerator(void * device_ID3D12Device5, RedXRteHandleRayTracingPipelineGenerator * outRayTracingPipelineGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = new(std::nothrow) nv_helpers_dx12::RayTracingPipelineGenerator((ID3D12Device5 *)device_ID3D12Device5);
  outRayTracingPipelineGenerator[0] = (RedXRteHandleRayTracingPipelineGenerator)(void *)handle;
}

void redXRteCreateShaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator * outShaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = new(std::nothrow) nv_helpers_dx12::ShaderBindingTableGenerator();
  outShaderBindingTableGenerator[0] = (RedXRteHandleShaderBindingTableGenerator)(void *)handle;
}

void redXRteDestroyBottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::BottomLevelASGenerator * handle = (nv_helpers_dx12::BottomLevelASGenerator *)(void *)bottomLevelASGenerator;
  delete handle;
}

void redXRteDestroyTopLevelASGenerator(RedXRteHandleTopLevelASGenerator topLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::TopLevelASGenerator * handle = (nv_helpers_dx12::TopLevelASGenerator *)(void *)topLevelASGenerator;
  delete handle;
}

void redXRteDestroyRootSignatureGenerator(RedXRteHandleRootSignatureGenerator rootSignatureGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RootSignatureGenerator * handle = (nv_helpers_dx12::RootSignatureGenerator *)(void *)rootSignatureGenerator;
  delete handle;
}

void redXRteDestroyRayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  delete handle;
}

void redXRteDestroyShaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  delete handle;
}

void redXRteBottomLevelASGeneratorAddVertexBuffer(RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * vertexBuffer_ID3D12Resource, uint64_t vertexOffsetInBytes, uint32_t vertexCount, unsigned vertexSizeInBytes, void * transformBuffer_ID3D12Resource, uint64_t transformOffsetInBytes, RedBool32 isOpaqueSuggestedDefaultValueIs1, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::BottomLevelASGenerator * handle = (nv_helpers_dx12::BottomLevelASGenerator *)(void *)bottomLevelASGenerator;
  handle->AddVertexBuffer((ID3D12Resource *)vertexBuffer_ID3D12Resource, vertexOffsetInBytes, vertexCount, vertexSizeInBytes, (ID3D12Resource *)transformBuffer_ID3D12Resource, transformOffsetInBytes, isOpaqueSuggestedDefaultValueIs1 == 1 ? true : false);
}

void redXRteBottomLevelASGeneratorAddVertexIndexBuffer(RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * vertexBuffer_ID3D12Resource, uint64_t vertexOffsetInBytes, uint32_t vertexCount, unsigned vertexSizeInBytes, void * indexBuffer_ID3D12Resource, uint64_t indexOffsetInBytes, uint32_t indexCount, void * transformBuffer_ID3D12Resource, uint64_t transformOffsetInBytes, RedBool32 isOpaqueSuggestedDefaultValueIs1, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::BottomLevelASGenerator * handle = (nv_helpers_dx12::BottomLevelASGenerator *)(void *)bottomLevelASGenerator;
  handle->AddVertexBuffer((ID3D12Resource *)vertexBuffer_ID3D12Resource, vertexOffsetInBytes, vertexCount, vertexSizeInBytes, (ID3D12Resource *)indexBuffer_ID3D12Resource, indexOffsetInBytes, indexCount, (ID3D12Resource *)transformBuffer_ID3D12Resource, transformOffsetInBytes, isOpaqueSuggestedDefaultValueIs1 == 1 ? true : false);
}

void redXRteBottomLevelASGeneratorComputeASBufferSizes(RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * device_ID3D12Device5, RedBool32 allowUpdate, uint64_t * scratchSizeInBytes, uint64_t * resultSizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::BottomLevelASGenerator * handle = (nv_helpers_dx12::BottomLevelASGenerator *)(void *)bottomLevelASGenerator;
  handle->ComputeASBufferSizes((ID3D12Device5 *)device_ID3D12Device5, allowUpdate == 1 ? true : false, scratchSizeInBytes, resultSizeInBytes);
}

void redXRteBottomLevelASGeneratorGenerate(RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * commandList_ID3D12GraphicsCommandList4, void * scratchBuffer_ID3D12Resource, void * resultBuffer_ID3D12Resource, RedBool32 isUpdateOnlySuggestedDefaultValueIs0, void * previousResultSuggestedDefaultValueIsNull_ID3D12Resource, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::BottomLevelASGenerator * handle = (nv_helpers_dx12::BottomLevelASGenerator *)(void *)bottomLevelASGenerator;
  handle->Generate((ID3D12GraphicsCommandList4 *)commandList_ID3D12GraphicsCommandList4, (ID3D12Resource *)scratchBuffer_ID3D12Resource, (ID3D12Resource *)resultBuffer_ID3D12Resource, isUpdateOnlySuggestedDefaultValueIs0 == 1 ? true : false, (ID3D12Resource *)previousResultSuggestedDefaultValueIsNull_ID3D12Resource);
}

void redXRteTopLevelASGeneratorSetInstancesCount(RedXRteHandleTopLevelASGenerator topLevelASGenerator, unsigned instancesCount, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::TopLevelASGenerator * handle = (nv_helpers_dx12::TopLevelASGenerator *)(void *)topLevelASGenerator;
  handle->SetInstancesCount(instancesCount);
}

void redXRteTopLevelASGeneratorComputeASBufferSizes(RedXRteHandleTopLevelASGenerator topLevelASGenerator, void * device_ID3D12Device5, RedBool32 allowUpdate, uint64_t * scratchSizeInBytes, uint64_t * resultSizeInBytes, uint64_t * descriptorsSizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::TopLevelASGenerator * handle = (nv_helpers_dx12::TopLevelASGenerator *)(void *)topLevelASGenerator;
  handle->ComputeASBufferSizes((ID3D12Device5 *)device_ID3D12Device5, allowUpdate == 1 ? true : false, scratchSizeInBytes, resultSizeInBytes, descriptorsSizeInBytes);
}

void redXRteTopLevelASGeneratorGenerate(RedXRteHandleTopLevelASGenerator topLevelASGenerator, void * commandList_ID3D12GraphicsCommandList4, void * scratchBuffer_ID3D12Resource, void * resultBuffer_ID3D12Resource, void * descriptorsBuffer_ID3D12Resource, RedBool32 isUpdateOnlySuggestedDefaultValueIs0, void * previousResultSuggestedDefaultValueIsNull_ID3D12Resource, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::TopLevelASGenerator * handle = (nv_helpers_dx12::TopLevelASGenerator *)(void *)topLevelASGenerator;
  handle->Generate((ID3D12GraphicsCommandList4 *)commandList_ID3D12GraphicsCommandList4, (ID3D12Resource *)scratchBuffer_ID3D12Resource, (ID3D12Resource *)resultBuffer_ID3D12Resource, (ID3D12Resource *)descriptorsBuffer_ID3D12Resource, isUpdateOnlySuggestedDefaultValueIs0 == 1 ? true : false, (ID3D12Resource *)previousResultSuggestedDefaultValueIsNull_ID3D12Resource);
}

void redXRteRootSignatureGeneratorAddHeapRangesParameter(RedXRteHandleRootSignatureGenerator rootSignatureGenerator, uint64_t rangesCount, void * ranges_D3D12_DESCRIPTOR_RANGE, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RootSignatureGenerator * handle = (nv_helpers_dx12::RootSignatureGenerator *)(void *)rootSignatureGenerator;
  D3D12_DESCRIPTOR_RANGE *            rangesPointer = (D3D12_DESCRIPTOR_RANGE *)ranges_D3D12_DESCRIPTOR_RANGE;
  std::vector<D3D12_DESCRIPTOR_RANGE> rangesVector  = std::vector<D3D12_DESCRIPTOR_RANGE>();
  if (rangesCount > 0) {
    rangesVector.resize(rangesCount);
  }
  for (uint64_t i = 0; i < rangesCount; i += 1) {
    rangesVector[i] = rangesPointer[i];
  }
  handle->AddHeapRangesParameter(rangesVector);
}

void redXRteRootSignatureGeneratorAddRootParameter(RedXRteHandleRootSignatureGenerator rootSignatureGenerator, unsigned type_D3D12_ROOT_PARAMETER_TYPE, unsigned shaderRegisterSuggestedDefaultValueIs0, unsigned registerSpaceSuggestedDefaultValueIs0, unsigned numRootConstantsSuggestedDefaultValueIs1, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RootSignatureGenerator * handle = (nv_helpers_dx12::RootSignatureGenerator *)(void *)rootSignatureGenerator;
  handle->AddRootParameter((D3D12_ROOT_PARAMETER_TYPE)type_D3D12_ROOT_PARAMETER_TYPE, shaderRegisterSuggestedDefaultValueIs0, registerSpaceSuggestedDefaultValueIs0, numRootConstantsSuggestedDefaultValueIs1);
}

void redXRteRootSignatureGeneratorGenerate(RedXRteHandleRootSignatureGenerator rootSignatureGenerator, void * device_ID3D12Device, RedBool32 isLocal, void ** outRootSignature_ID3D12RootSignature, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RootSignatureGenerator * handle = (nv_helpers_dx12::RootSignatureGenerator *)(void *)rootSignatureGenerator;
  ID3D12RootSignature * rootSignature = handle->Generate((ID3D12Device *)device_ID3D12Device, isLocal == 1 ? true : false);
  outRootSignature_ID3D12RootSignature[0] = (void *)rootSignature;
}

void redXRteRayTracingPipelineGeneratorAddLibrary(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, uint64_t dxilLibraryBufferSize, void * dxilLibraryBufferPointer, uint64_t symbolExportsCount, const wchar_t ** symbolExports, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  std::vector<std::wstring> symbolExportsVector = std::vector<std::wstring>();
  if (symbolExportsCount > 0) {
    symbolExportsVector.resize(symbolExportsCount);
  }
  for (uint64_t i = 0; i < symbolExportsCount; i += 1) {
    if (symbolExports[i] != NULL) {
      symbolExportsVector[i] = symbolExports[i];
    }
  }
  handle->AddLibrary(dxilLibraryBufferSize, dxilLibraryBufferPointer, symbolExportsVector); // IDxcBlob is an alias of ID3D10Blob and ID3DBlob
}

void redXRteRayTracingPipelineGeneratorAddHitGroup(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, const wchar_t * hitGroupName, const wchar_t * closestHitSymbol, const wchar_t * anyHitSymbolSuggestedDefaultValueIsNull, const wchar_t * intersectionSymbolSuggestedDefaultValueIsNull, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  std::wstring hitGroupNameString       = L"";
  std::wstring closestHitSymbolString   = L"";
  std::wstring anyHitSymbolString       = L"";
  std::wstring intersectionSymbolString = L"";
  if (hitGroupName                                  != NULL) { hitGroupNameString       = hitGroupName;                                  }
  if (closestHitSymbol                              != NULL) { closestHitSymbolString   = closestHitSymbol;                              }
  if (anyHitSymbolSuggestedDefaultValueIsNull       != NULL) { anyHitSymbolString       = anyHitSymbolSuggestedDefaultValueIsNull;       }
  if (intersectionSymbolSuggestedDefaultValueIsNull != NULL) { intersectionSymbolString = intersectionSymbolSuggestedDefaultValueIsNull; }
  handle->AddHitGroup(hitGroupNameString, closestHitSymbolString, anyHitSymbolString, intersectionSymbolString);
}

void redXRteRayTracingPipelineGeneratorAddRootSignatureAssociation(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, void * rootSignature_ID3D12RootSignature, uint64_t symbolsCount, const wchar_t ** symbols, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  std::vector<std::wstring> symbolsVector = std::vector<std::wstring>();
  if (symbolsCount > 0) {
    symbolsVector.resize(symbolsCount);
  }
  for (uint64_t i = 0; i < symbolsCount; i += 1) {
    if (symbols[i] != NULL) {
      symbolsVector[i] = symbols[i];
    }
  }
  handle->AddRootSignatureAssociation((ID3D12RootSignature *)rootSignature_ID3D12RootSignature, symbolsVector);
}

void redXRteRayTracingPipelineGeneratorSetMaxPayloadSize(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, unsigned sizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  handle->SetMaxPayloadSize(sizeInBytes);
}

void redXRteRayTracingPipelineGeneratorSetMaxAttributeSize(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, unsigned sizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  handle->SetMaxAttributeSize(sizeInBytes);
}

void redXRteRayTracingPipelineGeneratorSetMaxRecursionDepth(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, unsigned maxDepth, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  handle->SetMaxRecursionDepth(maxDepth);
}

void redXRteRayTracingPipelineGeneratorGenerate(RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, void ** outStateObject_ID3D12StateObject, void ** outStateObjectProperties_ID3D12StateObjectProperties, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::RayTracingPipelineGenerator * handle = (nv_helpers_dx12::RayTracingPipelineGenerator *)(void *)rayTracingPipelineGenerator;
  ID3D12StateObject * stateObject = handle->Generate();
  outStateObject_ID3D12StateObject[0] = (void *)stateObject;
  if (outStateObjectProperties_ID3D12StateObjectProperties != NULL) {
    ID3D12StateObjectProperties * stateObjectProperties = NULL;
    stateObject->QueryInterface(IID_PPV_ARGS(&stateObjectProperties));
    outStateObjectProperties_ID3D12StateObjectProperties[0] = (void *)stateObjectProperties;
  }
}

void redXRteShaderBindingTableGeneratorAddRayGenerationProgram(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const wchar_t * entryPoint, uint64_t inputDatasCount, void ** inputDatas, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  std::wstring entryPointString = L"";
  if (entryPoint != NULL) { entryPointString = entryPoint; }
  std::vector<void *> inputDataVectors = std::vector<void *>();
  if (inputDatasCount > 0) {
    inputDataVectors.resize(inputDatasCount);
  }
  for (uint64_t i = 0; i < inputDatasCount; i += 1) {
    inputDataVectors[i] = inputDatas[i];
  }
  handle->AddRayGenerationProgram(entryPointString, inputDataVectors);
}

void redXRteShaderBindingTableGeneratorAddMissProgram(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const wchar_t * entryPoint, uint64_t inputDatasCount, void ** inputDatas, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  std::wstring entryPointString = L"";
  if (entryPoint != NULL) { entryPointString = entryPoint; }
  std::vector<void *> inputDataVectors = std::vector<void *>();
  if (inputDatasCount > 0) {
    inputDataVectors.resize(inputDatasCount);
  }
  for (uint64_t i = 0; i < inputDatasCount; i += 1) {
    inputDataVectors[i] = inputDatas[i];
  }
  handle->AddMissProgram(entryPointString, inputDataVectors);
}

void redXRteShaderBindingTableGeneratorAddHitGroup(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const wchar_t * entryPoint, uint64_t inputDatasCount, void ** inputDatas, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  std::wstring entryPointString = L"";
  if (entryPoint != NULL) { entryPointString = entryPoint; }
  std::vector<void *> inputDataVectors = std::vector<void *>();
  if (inputDatasCount > 0) {
    inputDataVectors.resize(inputDatasCount);
  }
  for (uint64_t i = 0; i < inputDatasCount; i += 1) {
    inputDataVectors[i] = inputDatas[i];
  }
  handle->AddHitGroup(entryPointString, inputDataVectors);
}

unsigned redXRteShaderBindingTableGeneratorComputeSBTSize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->ComputeSBTSize();
}

void redXRteShaderBindingTableGeneratorGenerate(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, void * sbtBuffer_ID3D12Resource, void * raytracingPipeline_ID3D12StateObjectProperties, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  handle->Generate((ID3D12Resource *)sbtBuffer_ID3D12Resource, (ID3D12StateObjectProperties *)raytracingPipeline_ID3D12StateObjectProperties);
}

void redXRteShaderBindingTableGeneratorReset(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  handle->Reset();
}

unsigned redXRteShaderBindingTableGeneratorGetRayGenSectionSize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->GetRayGenSectionSize();
}

unsigned redXRteShaderBindingTableGeneratorGetRayGenEntrySize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->GetRayGenEntrySize();
}

unsigned redXRteShaderBindingTableGeneratorGetMissSectionSize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->GetMissSectionSize();
}

unsigned redXRteShaderBindingTableGeneratorGetMissEntrySize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->GetMissEntrySize();
}

unsigned redXRteShaderBindingTableGeneratorGetHitGroupSectionSize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->GetHitGroupSectionSize();
}

unsigned redXRteShaderBindingTableGeneratorGetHitGroupEntrySize(RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  nv_helpers_dx12::ShaderBindingTableGenerator * handle = (nv_helpers_dx12::ShaderBindingTableGenerator *)(void *)shaderBindingTableGenerator;
  return handle->GetHitGroupEntrySize();
}

void redXRteCallSetStateObject(RedHandleCalls calls, void * stateObject_ID3D12StateObject, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  ID3D12GraphicsCommandList4 * commandList = ((ID3D12GraphicsCommandList4 **)calls)[0];
  commandList->SetPipelineState1((ID3D12StateObject *)stateObject_ID3D12StateObject);
}

void redXRteCallDispatchRays(RedHandleCalls calls, void * dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters) {
  ID3D12GraphicsCommandList4 * commandList = ((ID3D12GraphicsCommandList4 **)calls)[0];
  commandList->DispatchRays((const D3D12_DISPATCH_RAYS_DESC *)dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC);
}
