#pragma once

#include "redgpu_x.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RedXRteTypeHandleBottomLevelASGenerator *      RedXRteHandleBottomLevelASGenerator;
typedef struct RedXRteTypeHandleTopLevelASGenerator *         RedXRteHandleTopLevelASGenerator;
typedef struct RedXRteTypeHandleRootSignatureGenerator *      RedXRteHandleRootSignatureGenerator;
typedef struct RedXRteTypeHandleRayTracingPipelineGenerator * RedXRteHandleRayTracingPipelineGenerator;
typedef struct RedXRteTypeHandleShaderBindingTableGenerator * RedXRteHandleShaderBindingTableGenerator;

#ifndef REDGPU_X_RTE_DECLSPEC
#define REDGPU_X_RTE_DECLSPEC
#endif

#ifndef REDGPU_X_RTE_API
#define REDGPU_X_RTE_API
#endif

REDGPU_X_RTE_DECLSPEC uint64_t REDGPU_X_RTE_API redXRteArrayGetGpuAddress                 (RedHandleArray array, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteCreateBottomLevelASGenerator       (RedXRteHandleBottomLevelASGenerator * outBottomLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteCreateTopLevelASGenerator          (RedXRteHandleTopLevelASGenerator * outTopLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteCreateRootSignatureGenerator       (RedXRteHandleRootSignatureGenerator * outRootSignatureGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteCreateRayTracingPipelineGenerator  (void * device_ID3D12Device5, RedXRteHandleRayTracingPipelineGenerator * outRayTracingPipelineGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteCreateShaderBindingTableGenerator  (RedXRteHandleShaderBindingTableGenerator * outShaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteDestroyBottomLevelASGenerator      (RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteDestroyTopLevelASGenerator         (RedXRteHandleTopLevelASGenerator topLevelASGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteDestroyRootSignatureGenerator      (RedXRteHandleRootSignatureGenerator rootSignatureGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteDestroyRayTracingPipelineGenerator (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteDestroyShaderBindingTableGenerator (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteBottomLevelASGeneratorAddVertexBuffer                  (RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * vertexBuffer_ID3D12Resource, uint64_t vertexOffsetInBytes, uint32_t vertexCount, unsigned vertexSizeInBytes, void * transformBuffer_ID3D12Resource, uint64_t transformOffsetInBytes, RedBool32 isOpaqueSuggestedDefaultValueIs1, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteBottomLevelASGeneratorAddVertexIndexBuffer             (RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * vertexBuffer_ID3D12Resource, uint64_t vertexOffsetInBytes, uint32_t vertexCount, unsigned vertexSizeInBytes, void * indexBuffer_ID3D12Resource, uint64_t indexOffsetInBytes, uint32_t indexCount, void * transformBuffer_ID3D12Resource, uint64_t transformOffsetInBytes, RedBool32 isOpaqueSuggestedDefaultValueIs1, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteBottomLevelASGeneratorComputeASBufferSizes             (RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * device_ID3D12Device5, RedBool32 allowUpdate, uint64_t * scratchSizeInBytes, uint64_t * resultSizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteBottomLevelASGeneratorGenerate                         (RedXRteHandleBottomLevelASGenerator bottomLevelASGenerator, void * commandList_ID3D12GraphicsCommandList4, void * scratchBuffer_ID3D12Resource, void * resultBuffer_ID3D12Resource, RedBool32 isUpdateOnlySuggestedDefaultValueIs0, void * previousResultSuggestedDefaultValueIsNull_ID3D12Resource, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteTopLevelASGeneratorSetInstancesCount                   (RedXRteHandleTopLevelASGenerator topLevelASGenerator, unsigned instancesCount, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteTopLevelASGeneratorComputeASBufferSizes                (RedXRteHandleTopLevelASGenerator topLevelASGenerator, void * device_ID3D12Device5, RedBool32 allowUpdate, uint64_t * scratchSizeInBytes, uint64_t * resultSizeInBytes, uint64_t * descriptorsSizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteTopLevelASGeneratorGenerate                            (RedXRteHandleTopLevelASGenerator topLevelASGenerator, void * commandList_ID3D12GraphicsCommandList4, void * scratchBuffer_ID3D12Resource, void * resultBuffer_ID3D12Resource, void * descriptorsBuffer_ID3D12Resource, RedBool32 isUpdateOnlySuggestedDefaultValueIs0, void * previousResultSuggestedDefaultValueIsNull_ID3D12Resource, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRootSignatureGeneratorAddHeapRangesParameter           (RedXRteHandleRootSignatureGenerator rootSignatureGenerator, uint64_t rangesCount, void * ranges_D3D12_DESCRIPTOR_RANGE, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRootSignatureGeneratorAddRootParameter                 (RedXRteHandleRootSignatureGenerator rootSignatureGenerator, unsigned type_D3D12_ROOT_PARAMETER_TYPE, unsigned shaderRegisterSuggestedDefaultValueIs0, unsigned registerSpaceSuggestedDefaultValueIs0, unsigned numRootConstantsSuggestedDefaultValueIs1, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRootSignatureGeneratorGenerate                         (RedXRteHandleRootSignatureGenerator rootSignatureGenerator, void * device_ID3D12Device, RedBool32 isLocal, void ** outRootSignature_ID3D12RootSignature, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorAddLibrary                  (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, uint64_t dxilLibraryBufferSize, void * dxilLibraryBufferPointer, uint64_t symbolExportsCount, const wchar_t ** symbolExports, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorAddHitGroup                 (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, const wchar_t * hitGroupName, const wchar_t * closestHitSymbol, const wchar_t * anyHitSymbolSuggestedDefaultValueIsNull, const wchar_t * intersectionSymbolSuggestedDefaultValueIsNull, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorAddRootSignatureAssociation (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, void * rootSignature_ID3D12RootSignature, uint64_t symbolsCount, const wchar_t ** symbols, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorSetMaxPayloadSize           (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, unsigned sizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorSetMaxAttributeSize         (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, unsigned sizeInBytes, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorSetMaxRecursionDepth        (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, unsigned maxDepth, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteRayTracingPipelineGeneratorGenerate                    (RedXRteHandleRayTracingPipelineGenerator rayTracingPipelineGenerator, void ** outStateObject_ID3D12StateObject, void ** outStateObjectProperties_ID3D12StateObjectProperties, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorAddRayGenerationProgram     (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const wchar_t * entryPoint, uint64_t inputDatasCount, void ** inputDatas, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorAddMissProgram              (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const wchar_t * entryPoint, uint64_t inputDatasCount, void ** inputDatas, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorAddHitGroup                 (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const wchar_t * entryPoint, uint64_t inputDatasCount, void ** inputDatas, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorComputeSBTSize              (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGenerate                    (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, void * sbtBuffer_ID3D12Resource, void * raytracingPipeline_ID3D12StateObjectProperties, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC void     REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorReset                       (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGetRayGenSectionSize        (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGetRayGenEntrySize          (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGetMissSectionSize          (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGetMissEntrySize            (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGetHitGroupSectionSize      (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);
REDGPU_X_RTE_DECLSPEC unsigned REDGPU_X_RTE_API redXRteShaderBindingTableGeneratorGetHitGroupEntrySize        (RedXRteHandleShaderBindingTableGenerator shaderBindingTableGenerator, const char * optionalFile, int optionalLine, void * optionalUserData, void * rteParameters);

#ifdef __cplusplus
}
#endif