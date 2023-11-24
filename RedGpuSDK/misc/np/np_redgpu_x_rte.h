#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteArrayGetGpuAddress redXRteArrayGetGpuAddress
#define _175aae60_array(value) value
#define _175aae60_optionalFile(value) value
#define _175aae60_optionalLine(value) value
#define _175aae60_optionalUserData(value) value
#define _175aae60_rteParameters(value) value
#else
typedef struct _175aae60_array { _175aae60_array(RedHandleArray value): value(value) {}; RedHandleArray value; _175aae60_array(const _175aae60_array &) = delete; } _175aae60_array;
typedef struct _175aae60_optionalFile { _175aae60_optionalFile(char* value): value(value) {}; char* value; _175aae60_optionalFile(const _175aae60_optionalFile &) = delete; } _175aae60_optionalFile;
typedef struct _175aae60_optionalLine { _175aae60_optionalLine(int value): value(value) {}; int value; _175aae60_optionalLine(const _175aae60_optionalLine &) = delete; } _175aae60_optionalLine;
typedef struct _175aae60_optionalUserData { _175aae60_optionalUserData(void* value): value(value) {}; void* value; _175aae60_optionalUserData(const _175aae60_optionalUserData &) = delete; } _175aae60_optionalUserData;
typedef struct _175aae60_rteParameters { _175aae60_rteParameters(void* value): value(value) {}; void* value; _175aae60_rteParameters(const _175aae60_rteParameters &) = delete; } _175aae60_rteParameters;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redXRteArrayGetGpuAddress(_175aae60_array & array, _175aae60_optionalFile & optionalFile, _175aae60_optionalLine & optionalLine, _175aae60_optionalUserData & optionalUserData, _175aae60_rteParameters & rteParameters) {
  return redXRteArrayGetGpuAddress(array.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCreateBottomLevelASGenerator redXRteCreateBottomLevelASGenerator
#define _cdec3c44_outBottomLevelASGenerator(value) value
#define _cdec3c44_optionalFile(value) value
#define _cdec3c44_optionalLine(value) value
#define _cdec3c44_optionalUserData(value) value
#define _cdec3c44_rteParameters(value) value
#else
typedef struct _cdec3c44_outBottomLevelASGenerator { _cdec3c44_outBottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator* value): value(value) {}; RedXRteHandleBottomLevelASGenerator* value; _cdec3c44_outBottomLevelASGenerator(const _cdec3c44_outBottomLevelASGenerator &) = delete; } _cdec3c44_outBottomLevelASGenerator;
typedef struct _cdec3c44_optionalFile { _cdec3c44_optionalFile(char* value): value(value) {}; char* value; _cdec3c44_optionalFile(const _cdec3c44_optionalFile &) = delete; } _cdec3c44_optionalFile;
typedef struct _cdec3c44_optionalLine { _cdec3c44_optionalLine(int value): value(value) {}; int value; _cdec3c44_optionalLine(const _cdec3c44_optionalLine &) = delete; } _cdec3c44_optionalLine;
typedef struct _cdec3c44_optionalUserData { _cdec3c44_optionalUserData(void* value): value(value) {}; void* value; _cdec3c44_optionalUserData(const _cdec3c44_optionalUserData &) = delete; } _cdec3c44_optionalUserData;
typedef struct _cdec3c44_rteParameters { _cdec3c44_rteParameters(void* value): value(value) {}; void* value; _cdec3c44_rteParameters(const _cdec3c44_rteParameters &) = delete; } _cdec3c44_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCreateBottomLevelASGenerator(_cdec3c44_outBottomLevelASGenerator & outBottomLevelASGenerator, _cdec3c44_optionalFile & optionalFile, _cdec3c44_optionalLine & optionalLine, _cdec3c44_optionalUserData & optionalUserData, _cdec3c44_rteParameters & rteParameters) {
  redXRteCreateBottomLevelASGenerator(outBottomLevelASGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCreateTopLevelASGenerator redXRteCreateTopLevelASGenerator
#define _83dd01e9_outTopLevelASGenerator(value) value
#define _83dd01e9_optionalFile(value) value
#define _83dd01e9_optionalLine(value) value
#define _83dd01e9_optionalUserData(value) value
#define _83dd01e9_rteParameters(value) value
#else
typedef struct _83dd01e9_outTopLevelASGenerator { _83dd01e9_outTopLevelASGenerator(RedXRteHandleTopLevelASGenerator* value): value(value) {}; RedXRteHandleTopLevelASGenerator* value; _83dd01e9_outTopLevelASGenerator(const _83dd01e9_outTopLevelASGenerator &) = delete; } _83dd01e9_outTopLevelASGenerator;
typedef struct _83dd01e9_optionalFile { _83dd01e9_optionalFile(char* value): value(value) {}; char* value; _83dd01e9_optionalFile(const _83dd01e9_optionalFile &) = delete; } _83dd01e9_optionalFile;
typedef struct _83dd01e9_optionalLine { _83dd01e9_optionalLine(int value): value(value) {}; int value; _83dd01e9_optionalLine(const _83dd01e9_optionalLine &) = delete; } _83dd01e9_optionalLine;
typedef struct _83dd01e9_optionalUserData { _83dd01e9_optionalUserData(void* value): value(value) {}; void* value; _83dd01e9_optionalUserData(const _83dd01e9_optionalUserData &) = delete; } _83dd01e9_optionalUserData;
typedef struct _83dd01e9_rteParameters { _83dd01e9_rteParameters(void* value): value(value) {}; void* value; _83dd01e9_rteParameters(const _83dd01e9_rteParameters &) = delete; } _83dd01e9_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCreateTopLevelASGenerator(_83dd01e9_outTopLevelASGenerator & outTopLevelASGenerator, _83dd01e9_optionalFile & optionalFile, _83dd01e9_optionalLine & optionalLine, _83dd01e9_optionalUserData & optionalUserData, _83dd01e9_rteParameters & rteParameters) {
  redXRteCreateTopLevelASGenerator(outTopLevelASGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCreateRootSignatureGenerator redXRteCreateRootSignatureGenerator
#define _4fee10fa_outRootSignatureGenerator(value) value
#define _4fee10fa_optionalFile(value) value
#define _4fee10fa_optionalLine(value) value
#define _4fee10fa_optionalUserData(value) value
#define _4fee10fa_rteParameters(value) value
#else
typedef struct _4fee10fa_outRootSignatureGenerator { _4fee10fa_outRootSignatureGenerator(RedXRteHandleRootSignatureGenerator* value): value(value) {}; RedXRteHandleRootSignatureGenerator* value; _4fee10fa_outRootSignatureGenerator(const _4fee10fa_outRootSignatureGenerator &) = delete; } _4fee10fa_outRootSignatureGenerator;
typedef struct _4fee10fa_optionalFile { _4fee10fa_optionalFile(char* value): value(value) {}; char* value; _4fee10fa_optionalFile(const _4fee10fa_optionalFile &) = delete; } _4fee10fa_optionalFile;
typedef struct _4fee10fa_optionalLine { _4fee10fa_optionalLine(int value): value(value) {}; int value; _4fee10fa_optionalLine(const _4fee10fa_optionalLine &) = delete; } _4fee10fa_optionalLine;
typedef struct _4fee10fa_optionalUserData { _4fee10fa_optionalUserData(void* value): value(value) {}; void* value; _4fee10fa_optionalUserData(const _4fee10fa_optionalUserData &) = delete; } _4fee10fa_optionalUserData;
typedef struct _4fee10fa_rteParameters { _4fee10fa_rteParameters(void* value): value(value) {}; void* value; _4fee10fa_rteParameters(const _4fee10fa_rteParameters &) = delete; } _4fee10fa_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCreateRootSignatureGenerator(_4fee10fa_outRootSignatureGenerator & outRootSignatureGenerator, _4fee10fa_optionalFile & optionalFile, _4fee10fa_optionalLine & optionalLine, _4fee10fa_optionalUserData & optionalUserData, _4fee10fa_rteParameters & rteParameters) {
  redXRteCreateRootSignatureGenerator(outRootSignatureGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCreateRayTracingPipelineGenerator redXRteCreateRayTracingPipelineGenerator
#define _0cf49da5_device_ID3D12Device5(value) value
#define _0cf49da5_outRayTracingPipelineGenerator(value) value
#define _0cf49da5_optionalFile(value) value
#define _0cf49da5_optionalLine(value) value
#define _0cf49da5_optionalUserData(value) value
#define _0cf49da5_rteParameters(value) value
#else
typedef struct _0cf49da5_device_ID3D12Device5 { _0cf49da5_device_ID3D12Device5(void* value): value(value) {}; void* value; _0cf49da5_device_ID3D12Device5(const _0cf49da5_device_ID3D12Device5 &) = delete; } _0cf49da5_device_ID3D12Device5;
typedef struct _0cf49da5_outRayTracingPipelineGenerator { _0cf49da5_outRayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator* value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator* value; _0cf49da5_outRayTracingPipelineGenerator(const _0cf49da5_outRayTracingPipelineGenerator &) = delete; } _0cf49da5_outRayTracingPipelineGenerator;
typedef struct _0cf49da5_optionalFile { _0cf49da5_optionalFile(char* value): value(value) {}; char* value; _0cf49da5_optionalFile(const _0cf49da5_optionalFile &) = delete; } _0cf49da5_optionalFile;
typedef struct _0cf49da5_optionalLine { _0cf49da5_optionalLine(int value): value(value) {}; int value; _0cf49da5_optionalLine(const _0cf49da5_optionalLine &) = delete; } _0cf49da5_optionalLine;
typedef struct _0cf49da5_optionalUserData { _0cf49da5_optionalUserData(void* value): value(value) {}; void* value; _0cf49da5_optionalUserData(const _0cf49da5_optionalUserData &) = delete; } _0cf49da5_optionalUserData;
typedef struct _0cf49da5_rteParameters { _0cf49da5_rteParameters(void* value): value(value) {}; void* value; _0cf49da5_rteParameters(const _0cf49da5_rteParameters &) = delete; } _0cf49da5_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCreateRayTracingPipelineGenerator(_0cf49da5_device_ID3D12Device5 & device_ID3D12Device5, _0cf49da5_outRayTracingPipelineGenerator & outRayTracingPipelineGenerator, _0cf49da5_optionalFile & optionalFile, _0cf49da5_optionalLine & optionalLine, _0cf49da5_optionalUserData & optionalUserData, _0cf49da5_rteParameters & rteParameters) {
  redXRteCreateRayTracingPipelineGenerator(device_ID3D12Device5.value, outRayTracingPipelineGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCreateShaderBindingTableGenerator redXRteCreateShaderBindingTableGenerator
#define _3926f21b_outShaderBindingTableGenerator(value) value
#define _3926f21b_optionalFile(value) value
#define _3926f21b_optionalLine(value) value
#define _3926f21b_optionalUserData(value) value
#define _3926f21b_rteParameters(value) value
#else
typedef struct _3926f21b_outShaderBindingTableGenerator { _3926f21b_outShaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator* value): value(value) {}; RedXRteHandleShaderBindingTableGenerator* value; _3926f21b_outShaderBindingTableGenerator(const _3926f21b_outShaderBindingTableGenerator &) = delete; } _3926f21b_outShaderBindingTableGenerator;
typedef struct _3926f21b_optionalFile { _3926f21b_optionalFile(char* value): value(value) {}; char* value; _3926f21b_optionalFile(const _3926f21b_optionalFile &) = delete; } _3926f21b_optionalFile;
typedef struct _3926f21b_optionalLine { _3926f21b_optionalLine(int value): value(value) {}; int value; _3926f21b_optionalLine(const _3926f21b_optionalLine &) = delete; } _3926f21b_optionalLine;
typedef struct _3926f21b_optionalUserData { _3926f21b_optionalUserData(void* value): value(value) {}; void* value; _3926f21b_optionalUserData(const _3926f21b_optionalUserData &) = delete; } _3926f21b_optionalUserData;
typedef struct _3926f21b_rteParameters { _3926f21b_rteParameters(void* value): value(value) {}; void* value; _3926f21b_rteParameters(const _3926f21b_rteParameters &) = delete; } _3926f21b_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCreateShaderBindingTableGenerator(_3926f21b_outShaderBindingTableGenerator & outShaderBindingTableGenerator, _3926f21b_optionalFile & optionalFile, _3926f21b_optionalLine & optionalLine, _3926f21b_optionalUserData & optionalUserData, _3926f21b_rteParameters & rteParameters) {
  redXRteCreateShaderBindingTableGenerator(outShaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteDestroyBottomLevelASGenerator redXRteDestroyBottomLevelASGenerator
#define _6be10cf4_bottomLevelASGenerator(value) value
#define _6be10cf4_optionalFile(value) value
#define _6be10cf4_optionalLine(value) value
#define _6be10cf4_optionalUserData(value) value
#define _6be10cf4_rteParameters(value) value
#else
typedef struct _6be10cf4_bottomLevelASGenerator { _6be10cf4_bottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator value): value(value) {}; RedXRteHandleBottomLevelASGenerator value; _6be10cf4_bottomLevelASGenerator(const _6be10cf4_bottomLevelASGenerator &) = delete; } _6be10cf4_bottomLevelASGenerator;
typedef struct _6be10cf4_optionalFile { _6be10cf4_optionalFile(char* value): value(value) {}; char* value; _6be10cf4_optionalFile(const _6be10cf4_optionalFile &) = delete; } _6be10cf4_optionalFile;
typedef struct _6be10cf4_optionalLine { _6be10cf4_optionalLine(int value): value(value) {}; int value; _6be10cf4_optionalLine(const _6be10cf4_optionalLine &) = delete; } _6be10cf4_optionalLine;
typedef struct _6be10cf4_optionalUserData { _6be10cf4_optionalUserData(void* value): value(value) {}; void* value; _6be10cf4_optionalUserData(const _6be10cf4_optionalUserData &) = delete; } _6be10cf4_optionalUserData;
typedef struct _6be10cf4_rteParameters { _6be10cf4_rteParameters(void* value): value(value) {}; void* value; _6be10cf4_rteParameters(const _6be10cf4_rteParameters &) = delete; } _6be10cf4_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteDestroyBottomLevelASGenerator(_6be10cf4_bottomLevelASGenerator & bottomLevelASGenerator, _6be10cf4_optionalFile & optionalFile, _6be10cf4_optionalLine & optionalLine, _6be10cf4_optionalUserData & optionalUserData, _6be10cf4_rteParameters & rteParameters) {
  redXRteDestroyBottomLevelASGenerator(bottomLevelASGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteDestroyTopLevelASGenerator redXRteDestroyTopLevelASGenerator
#define _77e4bbf9_topLevelASGenerator(value) value
#define _77e4bbf9_optionalFile(value) value
#define _77e4bbf9_optionalLine(value) value
#define _77e4bbf9_optionalUserData(value) value
#define _77e4bbf9_rteParameters(value) value
#else
typedef struct _77e4bbf9_topLevelASGenerator { _77e4bbf9_topLevelASGenerator(RedXRteHandleTopLevelASGenerator value): value(value) {}; RedXRteHandleTopLevelASGenerator value; _77e4bbf9_topLevelASGenerator(const _77e4bbf9_topLevelASGenerator &) = delete; } _77e4bbf9_topLevelASGenerator;
typedef struct _77e4bbf9_optionalFile { _77e4bbf9_optionalFile(char* value): value(value) {}; char* value; _77e4bbf9_optionalFile(const _77e4bbf9_optionalFile &) = delete; } _77e4bbf9_optionalFile;
typedef struct _77e4bbf9_optionalLine { _77e4bbf9_optionalLine(int value): value(value) {}; int value; _77e4bbf9_optionalLine(const _77e4bbf9_optionalLine &) = delete; } _77e4bbf9_optionalLine;
typedef struct _77e4bbf9_optionalUserData { _77e4bbf9_optionalUserData(void* value): value(value) {}; void* value; _77e4bbf9_optionalUserData(const _77e4bbf9_optionalUserData &) = delete; } _77e4bbf9_optionalUserData;
typedef struct _77e4bbf9_rteParameters { _77e4bbf9_rteParameters(void* value): value(value) {}; void* value; _77e4bbf9_rteParameters(const _77e4bbf9_rteParameters &) = delete; } _77e4bbf9_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteDestroyTopLevelASGenerator(_77e4bbf9_topLevelASGenerator & topLevelASGenerator, _77e4bbf9_optionalFile & optionalFile, _77e4bbf9_optionalLine & optionalLine, _77e4bbf9_optionalUserData & optionalUserData, _77e4bbf9_rteParameters & rteParameters) {
  redXRteDestroyTopLevelASGenerator(topLevelASGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteDestroyRootSignatureGenerator redXRteDestroyRootSignatureGenerator
#define _79154538_rootSignatureGenerator(value) value
#define _79154538_optionalFile(value) value
#define _79154538_optionalLine(value) value
#define _79154538_optionalUserData(value) value
#define _79154538_rteParameters(value) value
#else
typedef struct _79154538_rootSignatureGenerator { _79154538_rootSignatureGenerator(RedXRteHandleRootSignatureGenerator value): value(value) {}; RedXRteHandleRootSignatureGenerator value; _79154538_rootSignatureGenerator(const _79154538_rootSignatureGenerator &) = delete; } _79154538_rootSignatureGenerator;
typedef struct _79154538_optionalFile { _79154538_optionalFile(char* value): value(value) {}; char* value; _79154538_optionalFile(const _79154538_optionalFile &) = delete; } _79154538_optionalFile;
typedef struct _79154538_optionalLine { _79154538_optionalLine(int value): value(value) {}; int value; _79154538_optionalLine(const _79154538_optionalLine &) = delete; } _79154538_optionalLine;
typedef struct _79154538_optionalUserData { _79154538_optionalUserData(void* value): value(value) {}; void* value; _79154538_optionalUserData(const _79154538_optionalUserData &) = delete; } _79154538_optionalUserData;
typedef struct _79154538_rteParameters { _79154538_rteParameters(void* value): value(value) {}; void* value; _79154538_rteParameters(const _79154538_rteParameters &) = delete; } _79154538_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteDestroyRootSignatureGenerator(_79154538_rootSignatureGenerator & rootSignatureGenerator, _79154538_optionalFile & optionalFile, _79154538_optionalLine & optionalLine, _79154538_optionalUserData & optionalUserData, _79154538_rteParameters & rteParameters) {
  redXRteDestroyRootSignatureGenerator(rootSignatureGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteDestroyRayTracingPipelineGenerator redXRteDestroyRayTracingPipelineGenerator
#define _df8a23e4_rayTracingPipelineGenerator(value) value
#define _df8a23e4_optionalFile(value) value
#define _df8a23e4_optionalLine(value) value
#define _df8a23e4_optionalUserData(value) value
#define _df8a23e4_rteParameters(value) value
#else
typedef struct _df8a23e4_rayTracingPipelineGenerator { _df8a23e4_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _df8a23e4_rayTracingPipelineGenerator(const _df8a23e4_rayTracingPipelineGenerator &) = delete; } _df8a23e4_rayTracingPipelineGenerator;
typedef struct _df8a23e4_optionalFile { _df8a23e4_optionalFile(char* value): value(value) {}; char* value; _df8a23e4_optionalFile(const _df8a23e4_optionalFile &) = delete; } _df8a23e4_optionalFile;
typedef struct _df8a23e4_optionalLine { _df8a23e4_optionalLine(int value): value(value) {}; int value; _df8a23e4_optionalLine(const _df8a23e4_optionalLine &) = delete; } _df8a23e4_optionalLine;
typedef struct _df8a23e4_optionalUserData { _df8a23e4_optionalUserData(void* value): value(value) {}; void* value; _df8a23e4_optionalUserData(const _df8a23e4_optionalUserData &) = delete; } _df8a23e4_optionalUserData;
typedef struct _df8a23e4_rteParameters { _df8a23e4_rteParameters(void* value): value(value) {}; void* value; _df8a23e4_rteParameters(const _df8a23e4_rteParameters &) = delete; } _df8a23e4_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteDestroyRayTracingPipelineGenerator(_df8a23e4_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _df8a23e4_optionalFile & optionalFile, _df8a23e4_optionalLine & optionalLine, _df8a23e4_optionalUserData & optionalUserData, _df8a23e4_rteParameters & rteParameters) {
  redXRteDestroyRayTracingPipelineGenerator(rayTracingPipelineGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteDestroyShaderBindingTableGenerator redXRteDestroyShaderBindingTableGenerator
#define _1ec013a2_shaderBindingTableGenerator(value) value
#define _1ec013a2_optionalFile(value) value
#define _1ec013a2_optionalLine(value) value
#define _1ec013a2_optionalUserData(value) value
#define _1ec013a2_rteParameters(value) value
#else
typedef struct _1ec013a2_shaderBindingTableGenerator { _1ec013a2_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _1ec013a2_shaderBindingTableGenerator(const _1ec013a2_shaderBindingTableGenerator &) = delete; } _1ec013a2_shaderBindingTableGenerator;
typedef struct _1ec013a2_optionalFile { _1ec013a2_optionalFile(char* value): value(value) {}; char* value; _1ec013a2_optionalFile(const _1ec013a2_optionalFile &) = delete; } _1ec013a2_optionalFile;
typedef struct _1ec013a2_optionalLine { _1ec013a2_optionalLine(int value): value(value) {}; int value; _1ec013a2_optionalLine(const _1ec013a2_optionalLine &) = delete; } _1ec013a2_optionalLine;
typedef struct _1ec013a2_optionalUserData { _1ec013a2_optionalUserData(void* value): value(value) {}; void* value; _1ec013a2_optionalUserData(const _1ec013a2_optionalUserData &) = delete; } _1ec013a2_optionalUserData;
typedef struct _1ec013a2_rteParameters { _1ec013a2_rteParameters(void* value): value(value) {}; void* value; _1ec013a2_rteParameters(const _1ec013a2_rteParameters &) = delete; } _1ec013a2_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteDestroyShaderBindingTableGenerator(_1ec013a2_shaderBindingTableGenerator & shaderBindingTableGenerator, _1ec013a2_optionalFile & optionalFile, _1ec013a2_optionalLine & optionalLine, _1ec013a2_optionalUserData & optionalUserData, _1ec013a2_rteParameters & rteParameters) {
  redXRteDestroyShaderBindingTableGenerator(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteBottomLevelASGeneratorAddVertexBuffer redXRteBottomLevelASGeneratorAddVertexBuffer
#define _1d57153e_bottomLevelASGenerator(value) value
#define _1d57153e_vertexBuffer_ID3D12Resource(value) value
#define _1d57153e_vertexOffsetInBytes(value) value
#define _1d57153e_vertexCount(value) value
#define _1d57153e_vertexSizeInBytes(value) value
#define _1d57153e_transformBuffer_ID3D12Resource(value) value
#define _1d57153e_transformOffsetInBytes(value) value
#define _1d57153e_isOpaqueSuggestedDefaultValueIs1(value) value
#define _1d57153e_optionalFile(value) value
#define _1d57153e_optionalLine(value) value
#define _1d57153e_optionalUserData(value) value
#define _1d57153e_rteParameters(value) value
#else
typedef struct _1d57153e_bottomLevelASGenerator { _1d57153e_bottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator value): value(value) {}; RedXRteHandleBottomLevelASGenerator value; _1d57153e_bottomLevelASGenerator(const _1d57153e_bottomLevelASGenerator &) = delete; } _1d57153e_bottomLevelASGenerator;
typedef struct _1d57153e_vertexBuffer_ID3D12Resource { _1d57153e_vertexBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _1d57153e_vertexBuffer_ID3D12Resource(const _1d57153e_vertexBuffer_ID3D12Resource &) = delete; } _1d57153e_vertexBuffer_ID3D12Resource;
typedef struct _1d57153e_vertexOffsetInBytes { _1d57153e_vertexOffsetInBytes(uint64_t value): value(value) {}; uint64_t value; _1d57153e_vertexOffsetInBytes(const _1d57153e_vertexOffsetInBytes &) = delete; } _1d57153e_vertexOffsetInBytes;
typedef struct _1d57153e_vertexCount { _1d57153e_vertexCount(uint32_t value): value(value) {}; uint32_t value; _1d57153e_vertexCount(const _1d57153e_vertexCount &) = delete; } _1d57153e_vertexCount;
typedef struct _1d57153e_vertexSizeInBytes { _1d57153e_vertexSizeInBytes(unsigned value): value(value) {}; unsigned value; _1d57153e_vertexSizeInBytes(const _1d57153e_vertexSizeInBytes &) = delete; } _1d57153e_vertexSizeInBytes;
typedef struct _1d57153e_transformBuffer_ID3D12Resource { _1d57153e_transformBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _1d57153e_transformBuffer_ID3D12Resource(const _1d57153e_transformBuffer_ID3D12Resource &) = delete; } _1d57153e_transformBuffer_ID3D12Resource;
typedef struct _1d57153e_transformOffsetInBytes { _1d57153e_transformOffsetInBytes(uint64_t value): value(value) {}; uint64_t value; _1d57153e_transformOffsetInBytes(const _1d57153e_transformOffsetInBytes &) = delete; } _1d57153e_transformOffsetInBytes;
typedef struct _1d57153e_isOpaqueSuggestedDefaultValueIs1 { _1d57153e_isOpaqueSuggestedDefaultValueIs1(RedBool32 value): value(value) {}; RedBool32 value; _1d57153e_isOpaqueSuggestedDefaultValueIs1(const _1d57153e_isOpaqueSuggestedDefaultValueIs1 &) = delete; } _1d57153e_isOpaqueSuggestedDefaultValueIs1;
typedef struct _1d57153e_optionalFile { _1d57153e_optionalFile(char* value): value(value) {}; char* value; _1d57153e_optionalFile(const _1d57153e_optionalFile &) = delete; } _1d57153e_optionalFile;
typedef struct _1d57153e_optionalLine { _1d57153e_optionalLine(int value): value(value) {}; int value; _1d57153e_optionalLine(const _1d57153e_optionalLine &) = delete; } _1d57153e_optionalLine;
typedef struct _1d57153e_optionalUserData { _1d57153e_optionalUserData(void* value): value(value) {}; void* value; _1d57153e_optionalUserData(const _1d57153e_optionalUserData &) = delete; } _1d57153e_optionalUserData;
typedef struct _1d57153e_rteParameters { _1d57153e_rteParameters(void* value): value(value) {}; void* value; _1d57153e_rteParameters(const _1d57153e_rteParameters &) = delete; } _1d57153e_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteBottomLevelASGeneratorAddVertexBuffer(_1d57153e_bottomLevelASGenerator & bottomLevelASGenerator, _1d57153e_vertexBuffer_ID3D12Resource & vertexBuffer_ID3D12Resource, _1d57153e_vertexOffsetInBytes & vertexOffsetInBytes, _1d57153e_vertexCount & vertexCount, _1d57153e_vertexSizeInBytes & vertexSizeInBytes, _1d57153e_transformBuffer_ID3D12Resource & transformBuffer_ID3D12Resource, _1d57153e_transformOffsetInBytes & transformOffsetInBytes, _1d57153e_isOpaqueSuggestedDefaultValueIs1 & isOpaqueSuggestedDefaultValueIs1, _1d57153e_optionalFile & optionalFile, _1d57153e_optionalLine & optionalLine, _1d57153e_optionalUserData & optionalUserData, _1d57153e_rteParameters & rteParameters) {
  redXRteBottomLevelASGeneratorAddVertexBuffer(bottomLevelASGenerator.value, vertexBuffer_ID3D12Resource.value, vertexOffsetInBytes.value, vertexCount.value, vertexSizeInBytes.value, transformBuffer_ID3D12Resource.value, transformOffsetInBytes.value, isOpaqueSuggestedDefaultValueIs1.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteBottomLevelASGeneratorAddVertexIndexBuffer redXRteBottomLevelASGeneratorAddVertexIndexBuffer
#define _f5335e93_bottomLevelASGenerator(value) value
#define _f5335e93_vertexBuffer_ID3D12Resource(value) value
#define _f5335e93_vertexOffsetInBytes(value) value
#define _f5335e93_vertexCount(value) value
#define _f5335e93_vertexSizeInBytes(value) value
#define _f5335e93_indexBuffer_ID3D12Resource(value) value
#define _f5335e93_indexOffsetInBytes(value) value
#define _f5335e93_indexCount(value) value
#define _f5335e93_transformBuffer_ID3D12Resource(value) value
#define _f5335e93_transformOffsetInBytes(value) value
#define _f5335e93_isOpaqueSuggestedDefaultValueIs1(value) value
#define _f5335e93_optionalFile(value) value
#define _f5335e93_optionalLine(value) value
#define _f5335e93_optionalUserData(value) value
#define _f5335e93_rteParameters(value) value
#else
typedef struct _f5335e93_bottomLevelASGenerator { _f5335e93_bottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator value): value(value) {}; RedXRteHandleBottomLevelASGenerator value; _f5335e93_bottomLevelASGenerator(const _f5335e93_bottomLevelASGenerator &) = delete; } _f5335e93_bottomLevelASGenerator;
typedef struct _f5335e93_vertexBuffer_ID3D12Resource { _f5335e93_vertexBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _f5335e93_vertexBuffer_ID3D12Resource(const _f5335e93_vertexBuffer_ID3D12Resource &) = delete; } _f5335e93_vertexBuffer_ID3D12Resource;
typedef struct _f5335e93_vertexOffsetInBytes { _f5335e93_vertexOffsetInBytes(uint64_t value): value(value) {}; uint64_t value; _f5335e93_vertexOffsetInBytes(const _f5335e93_vertexOffsetInBytes &) = delete; } _f5335e93_vertexOffsetInBytes;
typedef struct _f5335e93_vertexCount { _f5335e93_vertexCount(uint32_t value): value(value) {}; uint32_t value; _f5335e93_vertexCount(const _f5335e93_vertexCount &) = delete; } _f5335e93_vertexCount;
typedef struct _f5335e93_vertexSizeInBytes { _f5335e93_vertexSizeInBytes(unsigned value): value(value) {}; unsigned value; _f5335e93_vertexSizeInBytes(const _f5335e93_vertexSizeInBytes &) = delete; } _f5335e93_vertexSizeInBytes;
typedef struct _f5335e93_indexBuffer_ID3D12Resource { _f5335e93_indexBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _f5335e93_indexBuffer_ID3D12Resource(const _f5335e93_indexBuffer_ID3D12Resource &) = delete; } _f5335e93_indexBuffer_ID3D12Resource;
typedef struct _f5335e93_indexOffsetInBytes { _f5335e93_indexOffsetInBytes(uint64_t value): value(value) {}; uint64_t value; _f5335e93_indexOffsetInBytes(const _f5335e93_indexOffsetInBytes &) = delete; } _f5335e93_indexOffsetInBytes;
typedef struct _f5335e93_indexCount { _f5335e93_indexCount(uint32_t value): value(value) {}; uint32_t value; _f5335e93_indexCount(const _f5335e93_indexCount &) = delete; } _f5335e93_indexCount;
typedef struct _f5335e93_transformBuffer_ID3D12Resource { _f5335e93_transformBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _f5335e93_transformBuffer_ID3D12Resource(const _f5335e93_transformBuffer_ID3D12Resource &) = delete; } _f5335e93_transformBuffer_ID3D12Resource;
typedef struct _f5335e93_transformOffsetInBytes { _f5335e93_transformOffsetInBytes(uint64_t value): value(value) {}; uint64_t value; _f5335e93_transformOffsetInBytes(const _f5335e93_transformOffsetInBytes &) = delete; } _f5335e93_transformOffsetInBytes;
typedef struct _f5335e93_isOpaqueSuggestedDefaultValueIs1 { _f5335e93_isOpaqueSuggestedDefaultValueIs1(RedBool32 value): value(value) {}; RedBool32 value; _f5335e93_isOpaqueSuggestedDefaultValueIs1(const _f5335e93_isOpaqueSuggestedDefaultValueIs1 &) = delete; } _f5335e93_isOpaqueSuggestedDefaultValueIs1;
typedef struct _f5335e93_optionalFile { _f5335e93_optionalFile(char* value): value(value) {}; char* value; _f5335e93_optionalFile(const _f5335e93_optionalFile &) = delete; } _f5335e93_optionalFile;
typedef struct _f5335e93_optionalLine { _f5335e93_optionalLine(int value): value(value) {}; int value; _f5335e93_optionalLine(const _f5335e93_optionalLine &) = delete; } _f5335e93_optionalLine;
typedef struct _f5335e93_optionalUserData { _f5335e93_optionalUserData(void* value): value(value) {}; void* value; _f5335e93_optionalUserData(const _f5335e93_optionalUserData &) = delete; } _f5335e93_optionalUserData;
typedef struct _f5335e93_rteParameters { _f5335e93_rteParameters(void* value): value(value) {}; void* value; _f5335e93_rteParameters(const _f5335e93_rteParameters &) = delete; } _f5335e93_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteBottomLevelASGeneratorAddVertexIndexBuffer(_f5335e93_bottomLevelASGenerator & bottomLevelASGenerator, _f5335e93_vertexBuffer_ID3D12Resource & vertexBuffer_ID3D12Resource, _f5335e93_vertexOffsetInBytes & vertexOffsetInBytes, _f5335e93_vertexCount & vertexCount, _f5335e93_vertexSizeInBytes & vertexSizeInBytes, _f5335e93_indexBuffer_ID3D12Resource & indexBuffer_ID3D12Resource, _f5335e93_indexOffsetInBytes & indexOffsetInBytes, _f5335e93_indexCount & indexCount, _f5335e93_transformBuffer_ID3D12Resource & transformBuffer_ID3D12Resource, _f5335e93_transformOffsetInBytes & transformOffsetInBytes, _f5335e93_isOpaqueSuggestedDefaultValueIs1 & isOpaqueSuggestedDefaultValueIs1, _f5335e93_optionalFile & optionalFile, _f5335e93_optionalLine & optionalLine, _f5335e93_optionalUserData & optionalUserData, _f5335e93_rteParameters & rteParameters) {
  redXRteBottomLevelASGeneratorAddVertexIndexBuffer(bottomLevelASGenerator.value, vertexBuffer_ID3D12Resource.value, vertexOffsetInBytes.value, vertexCount.value, vertexSizeInBytes.value, indexBuffer_ID3D12Resource.value, indexOffsetInBytes.value, indexCount.value, transformBuffer_ID3D12Resource.value, transformOffsetInBytes.value, isOpaqueSuggestedDefaultValueIs1.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteBottomLevelASGeneratorComputeASBufferSizes redXRteBottomLevelASGeneratorComputeASBufferSizes
#define _079d4826_bottomLevelASGenerator(value) value
#define _079d4826_device_ID3D12Device5(value) value
#define _079d4826_allowUpdate(value) value
#define _079d4826_scratchSizeInBytes(value) value
#define _079d4826_resultSizeInBytes(value) value
#define _079d4826_optionalFile(value) value
#define _079d4826_optionalLine(value) value
#define _079d4826_optionalUserData(value) value
#define _079d4826_rteParameters(value) value
#else
typedef struct _079d4826_bottomLevelASGenerator { _079d4826_bottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator value): value(value) {}; RedXRteHandleBottomLevelASGenerator value; _079d4826_bottomLevelASGenerator(const _079d4826_bottomLevelASGenerator &) = delete; } _079d4826_bottomLevelASGenerator;
typedef struct _079d4826_device_ID3D12Device5 { _079d4826_device_ID3D12Device5(void* value): value(value) {}; void* value; _079d4826_device_ID3D12Device5(const _079d4826_device_ID3D12Device5 &) = delete; } _079d4826_device_ID3D12Device5;
typedef struct _079d4826_allowUpdate { _079d4826_allowUpdate(RedBool32 value): value(value) {}; RedBool32 value; _079d4826_allowUpdate(const _079d4826_allowUpdate &) = delete; } _079d4826_allowUpdate;
typedef struct _079d4826_scratchSizeInBytes { _079d4826_scratchSizeInBytes(uint64_t* value): value(value) {}; uint64_t* value; _079d4826_scratchSizeInBytes(const _079d4826_scratchSizeInBytes &) = delete; } _079d4826_scratchSizeInBytes;
typedef struct _079d4826_resultSizeInBytes { _079d4826_resultSizeInBytes(uint64_t* value): value(value) {}; uint64_t* value; _079d4826_resultSizeInBytes(const _079d4826_resultSizeInBytes &) = delete; } _079d4826_resultSizeInBytes;
typedef struct _079d4826_optionalFile { _079d4826_optionalFile(char* value): value(value) {}; char* value; _079d4826_optionalFile(const _079d4826_optionalFile &) = delete; } _079d4826_optionalFile;
typedef struct _079d4826_optionalLine { _079d4826_optionalLine(int value): value(value) {}; int value; _079d4826_optionalLine(const _079d4826_optionalLine &) = delete; } _079d4826_optionalLine;
typedef struct _079d4826_optionalUserData { _079d4826_optionalUserData(void* value): value(value) {}; void* value; _079d4826_optionalUserData(const _079d4826_optionalUserData &) = delete; } _079d4826_optionalUserData;
typedef struct _079d4826_rteParameters { _079d4826_rteParameters(void* value): value(value) {}; void* value; _079d4826_rteParameters(const _079d4826_rteParameters &) = delete; } _079d4826_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteBottomLevelASGeneratorComputeASBufferSizes(_079d4826_bottomLevelASGenerator & bottomLevelASGenerator, _079d4826_device_ID3D12Device5 & device_ID3D12Device5, _079d4826_allowUpdate & allowUpdate, _079d4826_scratchSizeInBytes & scratchSizeInBytes, _079d4826_resultSizeInBytes & resultSizeInBytes, _079d4826_optionalFile & optionalFile, _079d4826_optionalLine & optionalLine, _079d4826_optionalUserData & optionalUserData, _079d4826_rteParameters & rteParameters) {
  redXRteBottomLevelASGeneratorComputeASBufferSizes(bottomLevelASGenerator.value, device_ID3D12Device5.value, allowUpdate.value, scratchSizeInBytes.value, resultSizeInBytes.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteBottomLevelASGeneratorGenerate redXRteBottomLevelASGeneratorGenerate
#define _f6e0bf6c_bottomLevelASGenerator(value) value
#define _f6e0bf6c_commandList_ID3D12GraphicsCommandList4(value) value
#define _f6e0bf6c_scratchBuffer_ID3D12Resource(value) value
#define _f6e0bf6c_resultBuffer_ID3D12Resource(value) value
#define _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0(value) value
#define _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource(value) value
#define _f6e0bf6c_optionalFile(value) value
#define _f6e0bf6c_optionalLine(value) value
#define _f6e0bf6c_optionalUserData(value) value
#define _f6e0bf6c_rteParameters(value) value
#else
typedef struct _f6e0bf6c_bottomLevelASGenerator { _f6e0bf6c_bottomLevelASGenerator(RedXRteHandleBottomLevelASGenerator value): value(value) {}; RedXRteHandleBottomLevelASGenerator value; _f6e0bf6c_bottomLevelASGenerator(const _f6e0bf6c_bottomLevelASGenerator &) = delete; } _f6e0bf6c_bottomLevelASGenerator;
typedef struct _f6e0bf6c_commandList_ID3D12GraphicsCommandList4 { _f6e0bf6c_commandList_ID3D12GraphicsCommandList4(void* value): value(value) {}; void* value; _f6e0bf6c_commandList_ID3D12GraphicsCommandList4(const _f6e0bf6c_commandList_ID3D12GraphicsCommandList4 &) = delete; } _f6e0bf6c_commandList_ID3D12GraphicsCommandList4;
typedef struct _f6e0bf6c_scratchBuffer_ID3D12Resource { _f6e0bf6c_scratchBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _f6e0bf6c_scratchBuffer_ID3D12Resource(const _f6e0bf6c_scratchBuffer_ID3D12Resource &) = delete; } _f6e0bf6c_scratchBuffer_ID3D12Resource;
typedef struct _f6e0bf6c_resultBuffer_ID3D12Resource { _f6e0bf6c_resultBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _f6e0bf6c_resultBuffer_ID3D12Resource(const _f6e0bf6c_resultBuffer_ID3D12Resource &) = delete; } _f6e0bf6c_resultBuffer_ID3D12Resource;
typedef struct _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0 { _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0(RedBool32 value): value(value) {}; RedBool32 value; _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0(const _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0 &) = delete; } _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0;
typedef struct _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource { _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource(void* value): value(value) {}; void* value; _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource(const _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource &) = delete; } _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource;
typedef struct _f6e0bf6c_optionalFile { _f6e0bf6c_optionalFile(char* value): value(value) {}; char* value; _f6e0bf6c_optionalFile(const _f6e0bf6c_optionalFile &) = delete; } _f6e0bf6c_optionalFile;
typedef struct _f6e0bf6c_optionalLine { _f6e0bf6c_optionalLine(int value): value(value) {}; int value; _f6e0bf6c_optionalLine(const _f6e0bf6c_optionalLine &) = delete; } _f6e0bf6c_optionalLine;
typedef struct _f6e0bf6c_optionalUserData { _f6e0bf6c_optionalUserData(void* value): value(value) {}; void* value; _f6e0bf6c_optionalUserData(const _f6e0bf6c_optionalUserData &) = delete; } _f6e0bf6c_optionalUserData;
typedef struct _f6e0bf6c_rteParameters { _f6e0bf6c_rteParameters(void* value): value(value) {}; void* value; _f6e0bf6c_rteParameters(const _f6e0bf6c_rteParameters &) = delete; } _f6e0bf6c_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteBottomLevelASGeneratorGenerate(_f6e0bf6c_bottomLevelASGenerator & bottomLevelASGenerator, _f6e0bf6c_commandList_ID3D12GraphicsCommandList4 & commandList_ID3D12GraphicsCommandList4, _f6e0bf6c_scratchBuffer_ID3D12Resource & scratchBuffer_ID3D12Resource, _f6e0bf6c_resultBuffer_ID3D12Resource & resultBuffer_ID3D12Resource, _f6e0bf6c_isUpdateOnlySuggestedDefaultValueIs0 & isUpdateOnlySuggestedDefaultValueIs0, _f6e0bf6c_previousResultSuggestedDefaultValueIsNull_ID3D12Resource & previousResultSuggestedDefaultValueIsNull_ID3D12Resource, _f6e0bf6c_optionalFile & optionalFile, _f6e0bf6c_optionalLine & optionalLine, _f6e0bf6c_optionalUserData & optionalUserData, _f6e0bf6c_rteParameters & rteParameters) {
  redXRteBottomLevelASGeneratorGenerate(bottomLevelASGenerator.value, commandList_ID3D12GraphicsCommandList4.value, scratchBuffer_ID3D12Resource.value, resultBuffer_ID3D12Resource.value, isUpdateOnlySuggestedDefaultValueIs0.value, previousResultSuggestedDefaultValueIsNull_ID3D12Resource.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteTopLevelASGeneratorSetInstancesCount redXRteTopLevelASGeneratorSetInstancesCount
#define _88ada52f_topLevelASGenerator(value) value
#define _88ada52f_instancesCount(value) value
#define _88ada52f_optionalFile(value) value
#define _88ada52f_optionalLine(value) value
#define _88ada52f_optionalUserData(value) value
#define _88ada52f_rteParameters(value) value
#else
typedef struct _88ada52f_topLevelASGenerator { _88ada52f_topLevelASGenerator(RedXRteHandleTopLevelASGenerator value): value(value) {}; RedXRteHandleTopLevelASGenerator value; _88ada52f_topLevelASGenerator(const _88ada52f_topLevelASGenerator &) = delete; } _88ada52f_topLevelASGenerator;
typedef struct _88ada52f_instancesCount { _88ada52f_instancesCount(unsigned value): value(value) {}; unsigned value; _88ada52f_instancesCount(const _88ada52f_instancesCount &) = delete; } _88ada52f_instancesCount;
typedef struct _88ada52f_optionalFile { _88ada52f_optionalFile(char* value): value(value) {}; char* value; _88ada52f_optionalFile(const _88ada52f_optionalFile &) = delete; } _88ada52f_optionalFile;
typedef struct _88ada52f_optionalLine { _88ada52f_optionalLine(int value): value(value) {}; int value; _88ada52f_optionalLine(const _88ada52f_optionalLine &) = delete; } _88ada52f_optionalLine;
typedef struct _88ada52f_optionalUserData { _88ada52f_optionalUserData(void* value): value(value) {}; void* value; _88ada52f_optionalUserData(const _88ada52f_optionalUserData &) = delete; } _88ada52f_optionalUserData;
typedef struct _88ada52f_rteParameters { _88ada52f_rteParameters(void* value): value(value) {}; void* value; _88ada52f_rteParameters(const _88ada52f_rteParameters &) = delete; } _88ada52f_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteTopLevelASGeneratorSetInstancesCount(_88ada52f_topLevelASGenerator & topLevelASGenerator, _88ada52f_instancesCount & instancesCount, _88ada52f_optionalFile & optionalFile, _88ada52f_optionalLine & optionalLine, _88ada52f_optionalUserData & optionalUserData, _88ada52f_rteParameters & rteParameters) {
  redXRteTopLevelASGeneratorSetInstancesCount(topLevelASGenerator.value, instancesCount.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteTopLevelASGeneratorComputeASBufferSizes redXRteTopLevelASGeneratorComputeASBufferSizes
#define _eaf82f5e_topLevelASGenerator(value) value
#define _eaf82f5e_device_ID3D12Device5(value) value
#define _eaf82f5e_allowUpdate(value) value
#define _eaf82f5e_scratchSizeInBytes(value) value
#define _eaf82f5e_resultSizeInBytes(value) value
#define _eaf82f5e_descriptorsSizeInBytes(value) value
#define _eaf82f5e_optionalFile(value) value
#define _eaf82f5e_optionalLine(value) value
#define _eaf82f5e_optionalUserData(value) value
#define _eaf82f5e_rteParameters(value) value
#else
typedef struct _eaf82f5e_topLevelASGenerator { _eaf82f5e_topLevelASGenerator(RedXRteHandleTopLevelASGenerator value): value(value) {}; RedXRteHandleTopLevelASGenerator value; _eaf82f5e_topLevelASGenerator(const _eaf82f5e_topLevelASGenerator &) = delete; } _eaf82f5e_topLevelASGenerator;
typedef struct _eaf82f5e_device_ID3D12Device5 { _eaf82f5e_device_ID3D12Device5(void* value): value(value) {}; void* value; _eaf82f5e_device_ID3D12Device5(const _eaf82f5e_device_ID3D12Device5 &) = delete; } _eaf82f5e_device_ID3D12Device5;
typedef struct _eaf82f5e_allowUpdate { _eaf82f5e_allowUpdate(RedBool32 value): value(value) {}; RedBool32 value; _eaf82f5e_allowUpdate(const _eaf82f5e_allowUpdate &) = delete; } _eaf82f5e_allowUpdate;
typedef struct _eaf82f5e_scratchSizeInBytes { _eaf82f5e_scratchSizeInBytes(uint64_t* value): value(value) {}; uint64_t* value; _eaf82f5e_scratchSizeInBytes(const _eaf82f5e_scratchSizeInBytes &) = delete; } _eaf82f5e_scratchSizeInBytes;
typedef struct _eaf82f5e_resultSizeInBytes { _eaf82f5e_resultSizeInBytes(uint64_t* value): value(value) {}; uint64_t* value; _eaf82f5e_resultSizeInBytes(const _eaf82f5e_resultSizeInBytes &) = delete; } _eaf82f5e_resultSizeInBytes;
typedef struct _eaf82f5e_descriptorsSizeInBytes { _eaf82f5e_descriptorsSizeInBytes(uint64_t* value): value(value) {}; uint64_t* value; _eaf82f5e_descriptorsSizeInBytes(const _eaf82f5e_descriptorsSizeInBytes &) = delete; } _eaf82f5e_descriptorsSizeInBytes;
typedef struct _eaf82f5e_optionalFile { _eaf82f5e_optionalFile(char* value): value(value) {}; char* value; _eaf82f5e_optionalFile(const _eaf82f5e_optionalFile &) = delete; } _eaf82f5e_optionalFile;
typedef struct _eaf82f5e_optionalLine { _eaf82f5e_optionalLine(int value): value(value) {}; int value; _eaf82f5e_optionalLine(const _eaf82f5e_optionalLine &) = delete; } _eaf82f5e_optionalLine;
typedef struct _eaf82f5e_optionalUserData { _eaf82f5e_optionalUserData(void* value): value(value) {}; void* value; _eaf82f5e_optionalUserData(const _eaf82f5e_optionalUserData &) = delete; } _eaf82f5e_optionalUserData;
typedef struct _eaf82f5e_rteParameters { _eaf82f5e_rteParameters(void* value): value(value) {}; void* value; _eaf82f5e_rteParameters(const _eaf82f5e_rteParameters &) = delete; } _eaf82f5e_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteTopLevelASGeneratorComputeASBufferSizes(_eaf82f5e_topLevelASGenerator & topLevelASGenerator, _eaf82f5e_device_ID3D12Device5 & device_ID3D12Device5, _eaf82f5e_allowUpdate & allowUpdate, _eaf82f5e_scratchSizeInBytes & scratchSizeInBytes, _eaf82f5e_resultSizeInBytes & resultSizeInBytes, _eaf82f5e_descriptorsSizeInBytes & descriptorsSizeInBytes, _eaf82f5e_optionalFile & optionalFile, _eaf82f5e_optionalLine & optionalLine, _eaf82f5e_optionalUserData & optionalUserData, _eaf82f5e_rteParameters & rteParameters) {
  redXRteTopLevelASGeneratorComputeASBufferSizes(topLevelASGenerator.value, device_ID3D12Device5.value, allowUpdate.value, scratchSizeInBytes.value, resultSizeInBytes.value, descriptorsSizeInBytes.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteTopLevelASGeneratorGenerate redXRteTopLevelASGeneratorGenerate
#define _69d9e76a_topLevelASGenerator(value) value
#define _69d9e76a_commandList_ID3D12GraphicsCommandList4(value) value
#define _69d9e76a_scratchBuffer_ID3D12Resource(value) value
#define _69d9e76a_resultBuffer_ID3D12Resource(value) value
#define _69d9e76a_descriptorsBuffer_ID3D12Resource(value) value
#define _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0(value) value
#define _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource(value) value
#define _69d9e76a_optionalFile(value) value
#define _69d9e76a_optionalLine(value) value
#define _69d9e76a_optionalUserData(value) value
#define _69d9e76a_rteParameters(value) value
#else
typedef struct _69d9e76a_topLevelASGenerator { _69d9e76a_topLevelASGenerator(RedXRteHandleTopLevelASGenerator value): value(value) {}; RedXRteHandleTopLevelASGenerator value; _69d9e76a_topLevelASGenerator(const _69d9e76a_topLevelASGenerator &) = delete; } _69d9e76a_topLevelASGenerator;
typedef struct _69d9e76a_commandList_ID3D12GraphicsCommandList4 { _69d9e76a_commandList_ID3D12GraphicsCommandList4(void* value): value(value) {}; void* value; _69d9e76a_commandList_ID3D12GraphicsCommandList4(const _69d9e76a_commandList_ID3D12GraphicsCommandList4 &) = delete; } _69d9e76a_commandList_ID3D12GraphicsCommandList4;
typedef struct _69d9e76a_scratchBuffer_ID3D12Resource { _69d9e76a_scratchBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _69d9e76a_scratchBuffer_ID3D12Resource(const _69d9e76a_scratchBuffer_ID3D12Resource &) = delete; } _69d9e76a_scratchBuffer_ID3D12Resource;
typedef struct _69d9e76a_resultBuffer_ID3D12Resource { _69d9e76a_resultBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _69d9e76a_resultBuffer_ID3D12Resource(const _69d9e76a_resultBuffer_ID3D12Resource &) = delete; } _69d9e76a_resultBuffer_ID3D12Resource;
typedef struct _69d9e76a_descriptorsBuffer_ID3D12Resource { _69d9e76a_descriptorsBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _69d9e76a_descriptorsBuffer_ID3D12Resource(const _69d9e76a_descriptorsBuffer_ID3D12Resource &) = delete; } _69d9e76a_descriptorsBuffer_ID3D12Resource;
typedef struct _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0 { _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0(RedBool32 value): value(value) {}; RedBool32 value; _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0(const _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0 &) = delete; } _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0;
typedef struct _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource { _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource(void* value): value(value) {}; void* value; _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource(const _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource &) = delete; } _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource;
typedef struct _69d9e76a_optionalFile { _69d9e76a_optionalFile(char* value): value(value) {}; char* value; _69d9e76a_optionalFile(const _69d9e76a_optionalFile &) = delete; } _69d9e76a_optionalFile;
typedef struct _69d9e76a_optionalLine { _69d9e76a_optionalLine(int value): value(value) {}; int value; _69d9e76a_optionalLine(const _69d9e76a_optionalLine &) = delete; } _69d9e76a_optionalLine;
typedef struct _69d9e76a_optionalUserData { _69d9e76a_optionalUserData(void* value): value(value) {}; void* value; _69d9e76a_optionalUserData(const _69d9e76a_optionalUserData &) = delete; } _69d9e76a_optionalUserData;
typedef struct _69d9e76a_rteParameters { _69d9e76a_rteParameters(void* value): value(value) {}; void* value; _69d9e76a_rteParameters(const _69d9e76a_rteParameters &) = delete; } _69d9e76a_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteTopLevelASGeneratorGenerate(_69d9e76a_topLevelASGenerator & topLevelASGenerator, _69d9e76a_commandList_ID3D12GraphicsCommandList4 & commandList_ID3D12GraphicsCommandList4, _69d9e76a_scratchBuffer_ID3D12Resource & scratchBuffer_ID3D12Resource, _69d9e76a_resultBuffer_ID3D12Resource & resultBuffer_ID3D12Resource, _69d9e76a_descriptorsBuffer_ID3D12Resource & descriptorsBuffer_ID3D12Resource, _69d9e76a_isUpdateOnlySuggestedDefaultValueIs0 & isUpdateOnlySuggestedDefaultValueIs0, _69d9e76a_previousResultSuggestedDefaultValueIsNull_ID3D12Resource & previousResultSuggestedDefaultValueIsNull_ID3D12Resource, _69d9e76a_optionalFile & optionalFile, _69d9e76a_optionalLine & optionalLine, _69d9e76a_optionalUserData & optionalUserData, _69d9e76a_rteParameters & rteParameters) {
  redXRteTopLevelASGeneratorGenerate(topLevelASGenerator.value, commandList_ID3D12GraphicsCommandList4.value, scratchBuffer_ID3D12Resource.value, resultBuffer_ID3D12Resource.value, descriptorsBuffer_ID3D12Resource.value, isUpdateOnlySuggestedDefaultValueIs0.value, previousResultSuggestedDefaultValueIsNull_ID3D12Resource.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRootSignatureGeneratorAddHeapRangesParameter redXRteRootSignatureGeneratorAddHeapRangesParameter
#define _99cb78c9_rootSignatureGenerator(value) value
#define _99cb78c9_rangesCount(value) value
#define _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE(value) value
#define _99cb78c9_optionalFile(value) value
#define _99cb78c9_optionalLine(value) value
#define _99cb78c9_optionalUserData(value) value
#define _99cb78c9_rteParameters(value) value
#else
typedef struct _99cb78c9_rootSignatureGenerator { _99cb78c9_rootSignatureGenerator(RedXRteHandleRootSignatureGenerator value): value(value) {}; RedXRteHandleRootSignatureGenerator value; _99cb78c9_rootSignatureGenerator(const _99cb78c9_rootSignatureGenerator &) = delete; } _99cb78c9_rootSignatureGenerator;
typedef struct _99cb78c9_rangesCount { _99cb78c9_rangesCount(uint64_t value): value(value) {}; uint64_t value; _99cb78c9_rangesCount(const _99cb78c9_rangesCount &) = delete; } _99cb78c9_rangesCount;
typedef struct _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE { _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE(void* value): value(value) {}; void* value; _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE(const _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE &) = delete; } _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE;
typedef struct _99cb78c9_optionalFile { _99cb78c9_optionalFile(char* value): value(value) {}; char* value; _99cb78c9_optionalFile(const _99cb78c9_optionalFile &) = delete; } _99cb78c9_optionalFile;
typedef struct _99cb78c9_optionalLine { _99cb78c9_optionalLine(int value): value(value) {}; int value; _99cb78c9_optionalLine(const _99cb78c9_optionalLine &) = delete; } _99cb78c9_optionalLine;
typedef struct _99cb78c9_optionalUserData { _99cb78c9_optionalUserData(void* value): value(value) {}; void* value; _99cb78c9_optionalUserData(const _99cb78c9_optionalUserData &) = delete; } _99cb78c9_optionalUserData;
typedef struct _99cb78c9_rteParameters { _99cb78c9_rteParameters(void* value): value(value) {}; void* value; _99cb78c9_rteParameters(const _99cb78c9_rteParameters &) = delete; } _99cb78c9_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRootSignatureGeneratorAddHeapRangesParameter(_99cb78c9_rootSignatureGenerator & rootSignatureGenerator, _99cb78c9_rangesCount & rangesCount, _99cb78c9_ranges_D3D12_DESCRIPTOR_RANGE & ranges_D3D12_DESCRIPTOR_RANGE, _99cb78c9_optionalFile & optionalFile, _99cb78c9_optionalLine & optionalLine, _99cb78c9_optionalUserData & optionalUserData, _99cb78c9_rteParameters & rteParameters) {
  redXRteRootSignatureGeneratorAddHeapRangesParameter(rootSignatureGenerator.value, rangesCount.value, ranges_D3D12_DESCRIPTOR_RANGE.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRootSignatureGeneratorAddRootParameter redXRteRootSignatureGeneratorAddRootParameter
#define _6260d546_rootSignatureGenerator(value) value
#define _6260d546_type_D3D12_ROOT_PARAMETER_TYPE(value) value
#define _6260d546_shaderRegisterSuggestedDefaultValueIs0(value) value
#define _6260d546_registerSpaceSuggestedDefaultValueIs0(value) value
#define _6260d546_numRootConstantsSuggestedDefaultValueIs1(value) value
#define _6260d546_optionalFile(value) value
#define _6260d546_optionalLine(value) value
#define _6260d546_optionalUserData(value) value
#define _6260d546_rteParameters(value) value
#else
typedef struct _6260d546_rootSignatureGenerator { _6260d546_rootSignatureGenerator(RedXRteHandleRootSignatureGenerator value): value(value) {}; RedXRteHandleRootSignatureGenerator value; _6260d546_rootSignatureGenerator(const _6260d546_rootSignatureGenerator &) = delete; } _6260d546_rootSignatureGenerator;
typedef struct _6260d546_type_D3D12_ROOT_PARAMETER_TYPE { _6260d546_type_D3D12_ROOT_PARAMETER_TYPE(unsigned value): value(value) {}; unsigned value; _6260d546_type_D3D12_ROOT_PARAMETER_TYPE(const _6260d546_type_D3D12_ROOT_PARAMETER_TYPE &) = delete; } _6260d546_type_D3D12_ROOT_PARAMETER_TYPE;
typedef struct _6260d546_shaderRegisterSuggestedDefaultValueIs0 { _6260d546_shaderRegisterSuggestedDefaultValueIs0(unsigned value): value(value) {}; unsigned value; _6260d546_shaderRegisterSuggestedDefaultValueIs0(const _6260d546_shaderRegisterSuggestedDefaultValueIs0 &) = delete; } _6260d546_shaderRegisterSuggestedDefaultValueIs0;
typedef struct _6260d546_registerSpaceSuggestedDefaultValueIs0 { _6260d546_registerSpaceSuggestedDefaultValueIs0(unsigned value): value(value) {}; unsigned value; _6260d546_registerSpaceSuggestedDefaultValueIs0(const _6260d546_registerSpaceSuggestedDefaultValueIs0 &) = delete; } _6260d546_registerSpaceSuggestedDefaultValueIs0;
typedef struct _6260d546_numRootConstantsSuggestedDefaultValueIs1 { _6260d546_numRootConstantsSuggestedDefaultValueIs1(unsigned value): value(value) {}; unsigned value; _6260d546_numRootConstantsSuggestedDefaultValueIs1(const _6260d546_numRootConstantsSuggestedDefaultValueIs1 &) = delete; } _6260d546_numRootConstantsSuggestedDefaultValueIs1;
typedef struct _6260d546_optionalFile { _6260d546_optionalFile(char* value): value(value) {}; char* value; _6260d546_optionalFile(const _6260d546_optionalFile &) = delete; } _6260d546_optionalFile;
typedef struct _6260d546_optionalLine { _6260d546_optionalLine(int value): value(value) {}; int value; _6260d546_optionalLine(const _6260d546_optionalLine &) = delete; } _6260d546_optionalLine;
typedef struct _6260d546_optionalUserData { _6260d546_optionalUserData(void* value): value(value) {}; void* value; _6260d546_optionalUserData(const _6260d546_optionalUserData &) = delete; } _6260d546_optionalUserData;
typedef struct _6260d546_rteParameters { _6260d546_rteParameters(void* value): value(value) {}; void* value; _6260d546_rteParameters(const _6260d546_rteParameters &) = delete; } _6260d546_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRootSignatureGeneratorAddRootParameter(_6260d546_rootSignatureGenerator & rootSignatureGenerator, _6260d546_type_D3D12_ROOT_PARAMETER_TYPE & type_D3D12_ROOT_PARAMETER_TYPE, _6260d546_shaderRegisterSuggestedDefaultValueIs0 & shaderRegisterSuggestedDefaultValueIs0, _6260d546_registerSpaceSuggestedDefaultValueIs0 & registerSpaceSuggestedDefaultValueIs0, _6260d546_numRootConstantsSuggestedDefaultValueIs1 & numRootConstantsSuggestedDefaultValueIs1, _6260d546_optionalFile & optionalFile, _6260d546_optionalLine & optionalLine, _6260d546_optionalUserData & optionalUserData, _6260d546_rteParameters & rteParameters) {
  redXRteRootSignatureGeneratorAddRootParameter(rootSignatureGenerator.value, type_D3D12_ROOT_PARAMETER_TYPE.value, shaderRegisterSuggestedDefaultValueIs0.value, registerSpaceSuggestedDefaultValueIs0.value, numRootConstantsSuggestedDefaultValueIs1.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRootSignatureGeneratorGenerate redXRteRootSignatureGeneratorGenerate
#define _deab52ff_rootSignatureGenerator(value) value
#define _deab52ff_device_ID3D12Device(value) value
#define _deab52ff_isLocal(value) value
#define _deab52ff_outRootSignature_ID3D12RootSignature(value) value
#define _deab52ff_optionalFile(value) value
#define _deab52ff_optionalLine(value) value
#define _deab52ff_optionalUserData(value) value
#define _deab52ff_rteParameters(value) value
#else
typedef struct _deab52ff_rootSignatureGenerator { _deab52ff_rootSignatureGenerator(RedXRteHandleRootSignatureGenerator value): value(value) {}; RedXRteHandleRootSignatureGenerator value; _deab52ff_rootSignatureGenerator(const _deab52ff_rootSignatureGenerator &) = delete; } _deab52ff_rootSignatureGenerator;
typedef struct _deab52ff_device_ID3D12Device { _deab52ff_device_ID3D12Device(void* value): value(value) {}; void* value; _deab52ff_device_ID3D12Device(const _deab52ff_device_ID3D12Device &) = delete; } _deab52ff_device_ID3D12Device;
typedef struct _deab52ff_isLocal { _deab52ff_isLocal(RedBool32 value): value(value) {}; RedBool32 value; _deab52ff_isLocal(const _deab52ff_isLocal &) = delete; } _deab52ff_isLocal;
typedef struct _deab52ff_outRootSignature_ID3D12RootSignature { _deab52ff_outRootSignature_ID3D12RootSignature(void** value): value(value) {}; void** value; _deab52ff_outRootSignature_ID3D12RootSignature(const _deab52ff_outRootSignature_ID3D12RootSignature &) = delete; } _deab52ff_outRootSignature_ID3D12RootSignature;
typedef struct _deab52ff_optionalFile { _deab52ff_optionalFile(char* value): value(value) {}; char* value; _deab52ff_optionalFile(const _deab52ff_optionalFile &) = delete; } _deab52ff_optionalFile;
typedef struct _deab52ff_optionalLine { _deab52ff_optionalLine(int value): value(value) {}; int value; _deab52ff_optionalLine(const _deab52ff_optionalLine &) = delete; } _deab52ff_optionalLine;
typedef struct _deab52ff_optionalUserData { _deab52ff_optionalUserData(void* value): value(value) {}; void* value; _deab52ff_optionalUserData(const _deab52ff_optionalUserData &) = delete; } _deab52ff_optionalUserData;
typedef struct _deab52ff_rteParameters { _deab52ff_rteParameters(void* value): value(value) {}; void* value; _deab52ff_rteParameters(const _deab52ff_rteParameters &) = delete; } _deab52ff_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRootSignatureGeneratorGenerate(_deab52ff_rootSignatureGenerator & rootSignatureGenerator, _deab52ff_device_ID3D12Device & device_ID3D12Device, _deab52ff_isLocal & isLocal, _deab52ff_outRootSignature_ID3D12RootSignature & outRootSignature_ID3D12RootSignature, _deab52ff_optionalFile & optionalFile, _deab52ff_optionalLine & optionalLine, _deab52ff_optionalUserData & optionalUserData, _deab52ff_rteParameters & rteParameters) {
  redXRteRootSignatureGeneratorGenerate(rootSignatureGenerator.value, device_ID3D12Device.value, isLocal.value, outRootSignature_ID3D12RootSignature.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorAddLibrary redXRteRayTracingPipelineGeneratorAddLibrary
#define _6cb56816_rayTracingPipelineGenerator(value) value
#define _6cb56816_dxilLibraryBufferSize(value) value
#define _6cb56816_dxilLibraryBufferPointer(value) value
#define _6cb56816_symbolExportsCount(value) value
#define _6cb56816_symbolExports(value) value
#define _6cb56816_optionalFile(value) value
#define _6cb56816_optionalLine(value) value
#define _6cb56816_optionalUserData(value) value
#define _6cb56816_rteParameters(value) value
#else
typedef struct _6cb56816_rayTracingPipelineGenerator { _6cb56816_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _6cb56816_rayTracingPipelineGenerator(const _6cb56816_rayTracingPipelineGenerator &) = delete; } _6cb56816_rayTracingPipelineGenerator;
typedef struct _6cb56816_dxilLibraryBufferSize { _6cb56816_dxilLibraryBufferSize(uint64_t value): value(value) {}; uint64_t value; _6cb56816_dxilLibraryBufferSize(const _6cb56816_dxilLibraryBufferSize &) = delete; } _6cb56816_dxilLibraryBufferSize;
typedef struct _6cb56816_dxilLibraryBufferPointer { _6cb56816_dxilLibraryBufferPointer(void* value): value(value) {}; void* value; _6cb56816_dxilLibraryBufferPointer(const _6cb56816_dxilLibraryBufferPointer &) = delete; } _6cb56816_dxilLibraryBufferPointer;
typedef struct _6cb56816_symbolExportsCount { _6cb56816_symbolExportsCount(uint64_t value): value(value) {}; uint64_t value; _6cb56816_symbolExportsCount(const _6cb56816_symbolExportsCount &) = delete; } _6cb56816_symbolExportsCount;
typedef struct _6cb56816_symbolExports { _6cb56816_symbolExports(const wchar_t** value): value(value) {}; const wchar_t** value; _6cb56816_symbolExports(const _6cb56816_symbolExports &) = delete; } _6cb56816_symbolExports;
typedef struct _6cb56816_optionalFile { _6cb56816_optionalFile(char* value): value(value) {}; char* value; _6cb56816_optionalFile(const _6cb56816_optionalFile &) = delete; } _6cb56816_optionalFile;
typedef struct _6cb56816_optionalLine { _6cb56816_optionalLine(int value): value(value) {}; int value; _6cb56816_optionalLine(const _6cb56816_optionalLine &) = delete; } _6cb56816_optionalLine;
typedef struct _6cb56816_optionalUserData { _6cb56816_optionalUserData(void* value): value(value) {}; void* value; _6cb56816_optionalUserData(const _6cb56816_optionalUserData &) = delete; } _6cb56816_optionalUserData;
typedef struct _6cb56816_rteParameters { _6cb56816_rteParameters(void* value): value(value) {}; void* value; _6cb56816_rteParameters(const _6cb56816_rteParameters &) = delete; } _6cb56816_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorAddLibrary(_6cb56816_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _6cb56816_dxilLibraryBufferSize & dxilLibraryBufferSize, _6cb56816_dxilLibraryBufferPointer & dxilLibraryBufferPointer, _6cb56816_symbolExportsCount & symbolExportsCount, _6cb56816_symbolExports & symbolExports, _6cb56816_optionalFile & optionalFile, _6cb56816_optionalLine & optionalLine, _6cb56816_optionalUserData & optionalUserData, _6cb56816_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorAddLibrary(rayTracingPipelineGenerator.value, dxilLibraryBufferSize.value, dxilLibraryBufferPointer.value, symbolExportsCount.value, symbolExports.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorAddHitGroup redXRteRayTracingPipelineGeneratorAddHitGroup
#define _80f9b631_rayTracingPipelineGenerator(value) value
#define _80f9b631_hitGroupName(value) value
#define _80f9b631_closestHitSymbol(value) value
#define _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull(value) value
#define _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull(value) value
#define _80f9b631_optionalFile(value) value
#define _80f9b631_optionalLine(value) value
#define _80f9b631_optionalUserData(value) value
#define _80f9b631_rteParameters(value) value
#else
typedef struct _80f9b631_rayTracingPipelineGenerator { _80f9b631_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _80f9b631_rayTracingPipelineGenerator(const _80f9b631_rayTracingPipelineGenerator &) = delete; } _80f9b631_rayTracingPipelineGenerator;
typedef struct _80f9b631_hitGroupName { _80f9b631_hitGroupName(wchar_t* value): value(value) {}; wchar_t* value; _80f9b631_hitGroupName(const _80f9b631_hitGroupName &) = delete; } _80f9b631_hitGroupName;
typedef struct _80f9b631_closestHitSymbol { _80f9b631_closestHitSymbol(wchar_t* value): value(value) {}; wchar_t* value; _80f9b631_closestHitSymbol(const _80f9b631_closestHitSymbol &) = delete; } _80f9b631_closestHitSymbol;
typedef struct _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull { _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull(wchar_t* value): value(value) {}; wchar_t* value; _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull(const _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull &) = delete; } _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull;
typedef struct _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull { _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull(wchar_t* value): value(value) {}; wchar_t* value; _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull(const _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull &) = delete; } _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull;
typedef struct _80f9b631_optionalFile { _80f9b631_optionalFile(char* value): value(value) {}; char* value; _80f9b631_optionalFile(const _80f9b631_optionalFile &) = delete; } _80f9b631_optionalFile;
typedef struct _80f9b631_optionalLine { _80f9b631_optionalLine(int value): value(value) {}; int value; _80f9b631_optionalLine(const _80f9b631_optionalLine &) = delete; } _80f9b631_optionalLine;
typedef struct _80f9b631_optionalUserData { _80f9b631_optionalUserData(void* value): value(value) {}; void* value; _80f9b631_optionalUserData(const _80f9b631_optionalUserData &) = delete; } _80f9b631_optionalUserData;
typedef struct _80f9b631_rteParameters { _80f9b631_rteParameters(void* value): value(value) {}; void* value; _80f9b631_rteParameters(const _80f9b631_rteParameters &) = delete; } _80f9b631_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorAddHitGroup(_80f9b631_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _80f9b631_hitGroupName & hitGroupName, _80f9b631_closestHitSymbol & closestHitSymbol, _80f9b631_anyHitSymbolSuggestedDefaultValueIsNull & anyHitSymbolSuggestedDefaultValueIsNull, _80f9b631_intersectionSymbolSuggestedDefaultValueIsNull & intersectionSymbolSuggestedDefaultValueIsNull, _80f9b631_optionalFile & optionalFile, _80f9b631_optionalLine & optionalLine, _80f9b631_optionalUserData & optionalUserData, _80f9b631_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorAddHitGroup(rayTracingPipelineGenerator.value, hitGroupName.value, closestHitSymbol.value, anyHitSymbolSuggestedDefaultValueIsNull.value, intersectionSymbolSuggestedDefaultValueIsNull.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorAddRootSignatureAssociation redXRteRayTracingPipelineGeneratorAddRootSignatureAssociation
#define _21184b2b_rayTracingPipelineGenerator(value) value
#define _21184b2b_rootSignature_ID3D12RootSignature(value) value
#define _21184b2b_symbolsCount(value) value
#define _21184b2b_symbols(value) value
#define _21184b2b_optionalFile(value) value
#define _21184b2b_optionalLine(value) value
#define _21184b2b_optionalUserData(value) value
#define _21184b2b_rteParameters(value) value
#else
typedef struct _21184b2b_rayTracingPipelineGenerator { _21184b2b_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _21184b2b_rayTracingPipelineGenerator(const _21184b2b_rayTracingPipelineGenerator &) = delete; } _21184b2b_rayTracingPipelineGenerator;
typedef struct _21184b2b_rootSignature_ID3D12RootSignature { _21184b2b_rootSignature_ID3D12RootSignature(void* value): value(value) {}; void* value; _21184b2b_rootSignature_ID3D12RootSignature(const _21184b2b_rootSignature_ID3D12RootSignature &) = delete; } _21184b2b_rootSignature_ID3D12RootSignature;
typedef struct _21184b2b_symbolsCount { _21184b2b_symbolsCount(uint64_t value): value(value) {}; uint64_t value; _21184b2b_symbolsCount(const _21184b2b_symbolsCount &) = delete; } _21184b2b_symbolsCount;
typedef struct _21184b2b_symbols { _21184b2b_symbols(const wchar_t** value): value(value) {}; const wchar_t** value; _21184b2b_symbols(const _21184b2b_symbols &) = delete; } _21184b2b_symbols;
typedef struct _21184b2b_optionalFile { _21184b2b_optionalFile(char* value): value(value) {}; char* value; _21184b2b_optionalFile(const _21184b2b_optionalFile &) = delete; } _21184b2b_optionalFile;
typedef struct _21184b2b_optionalLine { _21184b2b_optionalLine(int value): value(value) {}; int value; _21184b2b_optionalLine(const _21184b2b_optionalLine &) = delete; } _21184b2b_optionalLine;
typedef struct _21184b2b_optionalUserData { _21184b2b_optionalUserData(void* value): value(value) {}; void* value; _21184b2b_optionalUserData(const _21184b2b_optionalUserData &) = delete; } _21184b2b_optionalUserData;
typedef struct _21184b2b_rteParameters { _21184b2b_rteParameters(void* value): value(value) {}; void* value; _21184b2b_rteParameters(const _21184b2b_rteParameters &) = delete; } _21184b2b_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorAddRootSignatureAssociation(_21184b2b_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _21184b2b_rootSignature_ID3D12RootSignature & rootSignature_ID3D12RootSignature, _21184b2b_symbolsCount & symbolsCount, _21184b2b_symbols & symbols, _21184b2b_optionalFile & optionalFile, _21184b2b_optionalLine & optionalLine, _21184b2b_optionalUserData & optionalUserData, _21184b2b_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorAddRootSignatureAssociation(rayTracingPipelineGenerator.value, rootSignature_ID3D12RootSignature.value, symbolsCount.value, symbols.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorSetMaxPayloadSize redXRteRayTracingPipelineGeneratorSetMaxPayloadSize
#define _5af55de0_rayTracingPipelineGenerator(value) value
#define _5af55de0_sizeInBytes(value) value
#define _5af55de0_optionalFile(value) value
#define _5af55de0_optionalLine(value) value
#define _5af55de0_optionalUserData(value) value
#define _5af55de0_rteParameters(value) value
#else
typedef struct _5af55de0_rayTracingPipelineGenerator { _5af55de0_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _5af55de0_rayTracingPipelineGenerator(const _5af55de0_rayTracingPipelineGenerator &) = delete; } _5af55de0_rayTracingPipelineGenerator;
typedef struct _5af55de0_sizeInBytes { _5af55de0_sizeInBytes(unsigned value): value(value) {}; unsigned value; _5af55de0_sizeInBytes(const _5af55de0_sizeInBytes &) = delete; } _5af55de0_sizeInBytes;
typedef struct _5af55de0_optionalFile { _5af55de0_optionalFile(char* value): value(value) {}; char* value; _5af55de0_optionalFile(const _5af55de0_optionalFile &) = delete; } _5af55de0_optionalFile;
typedef struct _5af55de0_optionalLine { _5af55de0_optionalLine(int value): value(value) {}; int value; _5af55de0_optionalLine(const _5af55de0_optionalLine &) = delete; } _5af55de0_optionalLine;
typedef struct _5af55de0_optionalUserData { _5af55de0_optionalUserData(void* value): value(value) {}; void* value; _5af55de0_optionalUserData(const _5af55de0_optionalUserData &) = delete; } _5af55de0_optionalUserData;
typedef struct _5af55de0_rteParameters { _5af55de0_rteParameters(void* value): value(value) {}; void* value; _5af55de0_rteParameters(const _5af55de0_rteParameters &) = delete; } _5af55de0_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorSetMaxPayloadSize(_5af55de0_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _5af55de0_sizeInBytes & sizeInBytes, _5af55de0_optionalFile & optionalFile, _5af55de0_optionalLine & optionalLine, _5af55de0_optionalUserData & optionalUserData, _5af55de0_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorSetMaxPayloadSize(rayTracingPipelineGenerator.value, sizeInBytes.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorSetMaxAttributeSize redXRteRayTracingPipelineGeneratorSetMaxAttributeSize
#define _7ac955c4_rayTracingPipelineGenerator(value) value
#define _7ac955c4_sizeInBytes(value) value
#define _7ac955c4_optionalFile(value) value
#define _7ac955c4_optionalLine(value) value
#define _7ac955c4_optionalUserData(value) value
#define _7ac955c4_rteParameters(value) value
#else
typedef struct _7ac955c4_rayTracingPipelineGenerator { _7ac955c4_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _7ac955c4_rayTracingPipelineGenerator(const _7ac955c4_rayTracingPipelineGenerator &) = delete; } _7ac955c4_rayTracingPipelineGenerator;
typedef struct _7ac955c4_sizeInBytes { _7ac955c4_sizeInBytes(unsigned value): value(value) {}; unsigned value; _7ac955c4_sizeInBytes(const _7ac955c4_sizeInBytes &) = delete; } _7ac955c4_sizeInBytes;
typedef struct _7ac955c4_optionalFile { _7ac955c4_optionalFile(char* value): value(value) {}; char* value; _7ac955c4_optionalFile(const _7ac955c4_optionalFile &) = delete; } _7ac955c4_optionalFile;
typedef struct _7ac955c4_optionalLine { _7ac955c4_optionalLine(int value): value(value) {}; int value; _7ac955c4_optionalLine(const _7ac955c4_optionalLine &) = delete; } _7ac955c4_optionalLine;
typedef struct _7ac955c4_optionalUserData { _7ac955c4_optionalUserData(void* value): value(value) {}; void* value; _7ac955c4_optionalUserData(const _7ac955c4_optionalUserData &) = delete; } _7ac955c4_optionalUserData;
typedef struct _7ac955c4_rteParameters { _7ac955c4_rteParameters(void* value): value(value) {}; void* value; _7ac955c4_rteParameters(const _7ac955c4_rteParameters &) = delete; } _7ac955c4_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorSetMaxAttributeSize(_7ac955c4_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _7ac955c4_sizeInBytes & sizeInBytes, _7ac955c4_optionalFile & optionalFile, _7ac955c4_optionalLine & optionalLine, _7ac955c4_optionalUserData & optionalUserData, _7ac955c4_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorSetMaxAttributeSize(rayTracingPipelineGenerator.value, sizeInBytes.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorSetMaxRecursionDepth redXRteRayTracingPipelineGeneratorSetMaxRecursionDepth
#define _23f1004d_rayTracingPipelineGenerator(value) value
#define _23f1004d_maxDepth(value) value
#define _23f1004d_optionalFile(value) value
#define _23f1004d_optionalLine(value) value
#define _23f1004d_optionalUserData(value) value
#define _23f1004d_rteParameters(value) value
#else
typedef struct _23f1004d_rayTracingPipelineGenerator { _23f1004d_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _23f1004d_rayTracingPipelineGenerator(const _23f1004d_rayTracingPipelineGenerator &) = delete; } _23f1004d_rayTracingPipelineGenerator;
typedef struct _23f1004d_maxDepth { _23f1004d_maxDepth(unsigned value): value(value) {}; unsigned value; _23f1004d_maxDepth(const _23f1004d_maxDepth &) = delete; } _23f1004d_maxDepth;
typedef struct _23f1004d_optionalFile { _23f1004d_optionalFile(char* value): value(value) {}; char* value; _23f1004d_optionalFile(const _23f1004d_optionalFile &) = delete; } _23f1004d_optionalFile;
typedef struct _23f1004d_optionalLine { _23f1004d_optionalLine(int value): value(value) {}; int value; _23f1004d_optionalLine(const _23f1004d_optionalLine &) = delete; } _23f1004d_optionalLine;
typedef struct _23f1004d_optionalUserData { _23f1004d_optionalUserData(void* value): value(value) {}; void* value; _23f1004d_optionalUserData(const _23f1004d_optionalUserData &) = delete; } _23f1004d_optionalUserData;
typedef struct _23f1004d_rteParameters { _23f1004d_rteParameters(void* value): value(value) {}; void* value; _23f1004d_rteParameters(const _23f1004d_rteParameters &) = delete; } _23f1004d_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorSetMaxRecursionDepth(_23f1004d_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _23f1004d_maxDepth & maxDepth, _23f1004d_optionalFile & optionalFile, _23f1004d_optionalLine & optionalLine, _23f1004d_optionalUserData & optionalUserData, _23f1004d_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorSetMaxRecursionDepth(rayTracingPipelineGenerator.value, maxDepth.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteRayTracingPipelineGeneratorGenerate redXRteRayTracingPipelineGeneratorGenerate
#define _3e2b6044_rayTracingPipelineGenerator(value) value
#define _3e2b6044_outStateObject_ID3D12StateObject(value) value
#define _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties(value) value
#define _3e2b6044_optionalFile(value) value
#define _3e2b6044_optionalLine(value) value
#define _3e2b6044_optionalUserData(value) value
#define _3e2b6044_rteParameters(value) value
#else
typedef struct _3e2b6044_rayTracingPipelineGenerator { _3e2b6044_rayTracingPipelineGenerator(RedXRteHandleRayTracingPipelineGenerator value): value(value) {}; RedXRteHandleRayTracingPipelineGenerator value; _3e2b6044_rayTracingPipelineGenerator(const _3e2b6044_rayTracingPipelineGenerator &) = delete; } _3e2b6044_rayTracingPipelineGenerator;
typedef struct _3e2b6044_outStateObject_ID3D12StateObject { _3e2b6044_outStateObject_ID3D12StateObject(void** value): value(value) {}; void** value; _3e2b6044_outStateObject_ID3D12StateObject(const _3e2b6044_outStateObject_ID3D12StateObject &) = delete; } _3e2b6044_outStateObject_ID3D12StateObject;
typedef struct _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties { _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties(void** value): value(value) {}; void** value; _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties(const _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties &) = delete; } _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties;
typedef struct _3e2b6044_optionalFile { _3e2b6044_optionalFile(char* value): value(value) {}; char* value; _3e2b6044_optionalFile(const _3e2b6044_optionalFile &) = delete; } _3e2b6044_optionalFile;
typedef struct _3e2b6044_optionalLine { _3e2b6044_optionalLine(int value): value(value) {}; int value; _3e2b6044_optionalLine(const _3e2b6044_optionalLine &) = delete; } _3e2b6044_optionalLine;
typedef struct _3e2b6044_optionalUserData { _3e2b6044_optionalUserData(void* value): value(value) {}; void* value; _3e2b6044_optionalUserData(const _3e2b6044_optionalUserData &) = delete; } _3e2b6044_optionalUserData;
typedef struct _3e2b6044_rteParameters { _3e2b6044_rteParameters(void* value): value(value) {}; void* value; _3e2b6044_rteParameters(const _3e2b6044_rteParameters &) = delete; } _3e2b6044_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteRayTracingPipelineGeneratorGenerate(_3e2b6044_rayTracingPipelineGenerator & rayTracingPipelineGenerator, _3e2b6044_outStateObject_ID3D12StateObject & outStateObject_ID3D12StateObject, _3e2b6044_outStateObjectProperties_ID3D12StateObjectProperties & outStateObjectProperties_ID3D12StateObjectProperties, _3e2b6044_optionalFile & optionalFile, _3e2b6044_optionalLine & optionalLine, _3e2b6044_optionalUserData & optionalUserData, _3e2b6044_rteParameters & rteParameters) {
  redXRteRayTracingPipelineGeneratorGenerate(rayTracingPipelineGenerator.value, outStateObject_ID3D12StateObject.value, outStateObjectProperties_ID3D12StateObjectProperties.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorAddRayGenerationProgram redXRteShaderBindingTableGeneratorAddRayGenerationProgram
#define _c64da9b8_shaderBindingTableGenerator(value) value
#define _c64da9b8_entryPoint(value) value
#define _c64da9b8_inputDatasCount(value) value
#define _c64da9b8_inputDatas(value) value
#define _c64da9b8_optionalFile(value) value
#define _c64da9b8_optionalLine(value) value
#define _c64da9b8_optionalUserData(value) value
#define _c64da9b8_rteParameters(value) value
#else
typedef struct _c64da9b8_shaderBindingTableGenerator { _c64da9b8_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _c64da9b8_shaderBindingTableGenerator(const _c64da9b8_shaderBindingTableGenerator &) = delete; } _c64da9b8_shaderBindingTableGenerator;
typedef struct _c64da9b8_entryPoint { _c64da9b8_entryPoint(wchar_t* value): value(value) {}; wchar_t* value; _c64da9b8_entryPoint(const _c64da9b8_entryPoint &) = delete; } _c64da9b8_entryPoint;
typedef struct _c64da9b8_inputDatasCount { _c64da9b8_inputDatasCount(uint64_t value): value(value) {}; uint64_t value; _c64da9b8_inputDatasCount(const _c64da9b8_inputDatasCount &) = delete; } _c64da9b8_inputDatasCount;
typedef struct _c64da9b8_inputDatas { _c64da9b8_inputDatas(void** value): value(value) {}; void** value; _c64da9b8_inputDatas(const _c64da9b8_inputDatas &) = delete; } _c64da9b8_inputDatas;
typedef struct _c64da9b8_optionalFile { _c64da9b8_optionalFile(char* value): value(value) {}; char* value; _c64da9b8_optionalFile(const _c64da9b8_optionalFile &) = delete; } _c64da9b8_optionalFile;
typedef struct _c64da9b8_optionalLine { _c64da9b8_optionalLine(int value): value(value) {}; int value; _c64da9b8_optionalLine(const _c64da9b8_optionalLine &) = delete; } _c64da9b8_optionalLine;
typedef struct _c64da9b8_optionalUserData { _c64da9b8_optionalUserData(void* value): value(value) {}; void* value; _c64da9b8_optionalUserData(const _c64da9b8_optionalUserData &) = delete; } _c64da9b8_optionalUserData;
typedef struct _c64da9b8_rteParameters { _c64da9b8_rteParameters(void* value): value(value) {}; void* value; _c64da9b8_rteParameters(const _c64da9b8_rteParameters &) = delete; } _c64da9b8_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteShaderBindingTableGeneratorAddRayGenerationProgram(_c64da9b8_shaderBindingTableGenerator & shaderBindingTableGenerator, _c64da9b8_entryPoint & entryPoint, _c64da9b8_inputDatasCount & inputDatasCount, _c64da9b8_inputDatas & inputDatas, _c64da9b8_optionalFile & optionalFile, _c64da9b8_optionalLine & optionalLine, _c64da9b8_optionalUserData & optionalUserData, _c64da9b8_rteParameters & rteParameters) {
  redXRteShaderBindingTableGeneratorAddRayGenerationProgram(shaderBindingTableGenerator.value, entryPoint.value, inputDatasCount.value, inputDatas.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorAddMissProgram redXRteShaderBindingTableGeneratorAddMissProgram
#define _397e44ec_shaderBindingTableGenerator(value) value
#define _397e44ec_entryPoint(value) value
#define _397e44ec_inputDatasCount(value) value
#define _397e44ec_inputDatas(value) value
#define _397e44ec_optionalFile(value) value
#define _397e44ec_optionalLine(value) value
#define _397e44ec_optionalUserData(value) value
#define _397e44ec_rteParameters(value) value
#else
typedef struct _397e44ec_shaderBindingTableGenerator { _397e44ec_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _397e44ec_shaderBindingTableGenerator(const _397e44ec_shaderBindingTableGenerator &) = delete; } _397e44ec_shaderBindingTableGenerator;
typedef struct _397e44ec_entryPoint { _397e44ec_entryPoint(wchar_t* value): value(value) {}; wchar_t* value; _397e44ec_entryPoint(const _397e44ec_entryPoint &) = delete; } _397e44ec_entryPoint;
typedef struct _397e44ec_inputDatasCount { _397e44ec_inputDatasCount(uint64_t value): value(value) {}; uint64_t value; _397e44ec_inputDatasCount(const _397e44ec_inputDatasCount &) = delete; } _397e44ec_inputDatasCount;
typedef struct _397e44ec_inputDatas { _397e44ec_inputDatas(void** value): value(value) {}; void** value; _397e44ec_inputDatas(const _397e44ec_inputDatas &) = delete; } _397e44ec_inputDatas;
typedef struct _397e44ec_optionalFile { _397e44ec_optionalFile(char* value): value(value) {}; char* value; _397e44ec_optionalFile(const _397e44ec_optionalFile &) = delete; } _397e44ec_optionalFile;
typedef struct _397e44ec_optionalLine { _397e44ec_optionalLine(int value): value(value) {}; int value; _397e44ec_optionalLine(const _397e44ec_optionalLine &) = delete; } _397e44ec_optionalLine;
typedef struct _397e44ec_optionalUserData { _397e44ec_optionalUserData(void* value): value(value) {}; void* value; _397e44ec_optionalUserData(const _397e44ec_optionalUserData &) = delete; } _397e44ec_optionalUserData;
typedef struct _397e44ec_rteParameters { _397e44ec_rteParameters(void* value): value(value) {}; void* value; _397e44ec_rteParameters(const _397e44ec_rteParameters &) = delete; } _397e44ec_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteShaderBindingTableGeneratorAddMissProgram(_397e44ec_shaderBindingTableGenerator & shaderBindingTableGenerator, _397e44ec_entryPoint & entryPoint, _397e44ec_inputDatasCount & inputDatasCount, _397e44ec_inputDatas & inputDatas, _397e44ec_optionalFile & optionalFile, _397e44ec_optionalLine & optionalLine, _397e44ec_optionalUserData & optionalUserData, _397e44ec_rteParameters & rteParameters) {
  redXRteShaderBindingTableGeneratorAddMissProgram(shaderBindingTableGenerator.value, entryPoint.value, inputDatasCount.value, inputDatas.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorAddHitGroup redXRteShaderBindingTableGeneratorAddHitGroup
#define _1a3bff74_shaderBindingTableGenerator(value) value
#define _1a3bff74_entryPoint(value) value
#define _1a3bff74_inputDatasCount(value) value
#define _1a3bff74_inputDatas(value) value
#define _1a3bff74_optionalFile(value) value
#define _1a3bff74_optionalLine(value) value
#define _1a3bff74_optionalUserData(value) value
#define _1a3bff74_rteParameters(value) value
#else
typedef struct _1a3bff74_shaderBindingTableGenerator { _1a3bff74_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _1a3bff74_shaderBindingTableGenerator(const _1a3bff74_shaderBindingTableGenerator &) = delete; } _1a3bff74_shaderBindingTableGenerator;
typedef struct _1a3bff74_entryPoint { _1a3bff74_entryPoint(wchar_t* value): value(value) {}; wchar_t* value; _1a3bff74_entryPoint(const _1a3bff74_entryPoint &) = delete; } _1a3bff74_entryPoint;
typedef struct _1a3bff74_inputDatasCount { _1a3bff74_inputDatasCount(uint64_t value): value(value) {}; uint64_t value; _1a3bff74_inputDatasCount(const _1a3bff74_inputDatasCount &) = delete; } _1a3bff74_inputDatasCount;
typedef struct _1a3bff74_inputDatas { _1a3bff74_inputDatas(void** value): value(value) {}; void** value; _1a3bff74_inputDatas(const _1a3bff74_inputDatas &) = delete; } _1a3bff74_inputDatas;
typedef struct _1a3bff74_optionalFile { _1a3bff74_optionalFile(char* value): value(value) {}; char* value; _1a3bff74_optionalFile(const _1a3bff74_optionalFile &) = delete; } _1a3bff74_optionalFile;
typedef struct _1a3bff74_optionalLine { _1a3bff74_optionalLine(int value): value(value) {}; int value; _1a3bff74_optionalLine(const _1a3bff74_optionalLine &) = delete; } _1a3bff74_optionalLine;
typedef struct _1a3bff74_optionalUserData { _1a3bff74_optionalUserData(void* value): value(value) {}; void* value; _1a3bff74_optionalUserData(const _1a3bff74_optionalUserData &) = delete; } _1a3bff74_optionalUserData;
typedef struct _1a3bff74_rteParameters { _1a3bff74_rteParameters(void* value): value(value) {}; void* value; _1a3bff74_rteParameters(const _1a3bff74_rteParameters &) = delete; } _1a3bff74_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteShaderBindingTableGeneratorAddHitGroup(_1a3bff74_shaderBindingTableGenerator & shaderBindingTableGenerator, _1a3bff74_entryPoint & entryPoint, _1a3bff74_inputDatasCount & inputDatasCount, _1a3bff74_inputDatas & inputDatas, _1a3bff74_optionalFile & optionalFile, _1a3bff74_optionalLine & optionalLine, _1a3bff74_optionalUserData & optionalUserData, _1a3bff74_rteParameters & rteParameters) {
  redXRteShaderBindingTableGeneratorAddHitGroup(shaderBindingTableGenerator.value, entryPoint.value, inputDatasCount.value, inputDatas.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorComputeSBTSize redXRteShaderBindingTableGeneratorComputeSBTSize
#define _3113bb1b_shaderBindingTableGenerator(value) value
#define _3113bb1b_optionalFile(value) value
#define _3113bb1b_optionalLine(value) value
#define _3113bb1b_optionalUserData(value) value
#define _3113bb1b_rteParameters(value) value
#else
typedef struct _3113bb1b_shaderBindingTableGenerator { _3113bb1b_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _3113bb1b_shaderBindingTableGenerator(const _3113bb1b_shaderBindingTableGenerator &) = delete; } _3113bb1b_shaderBindingTableGenerator;
typedef struct _3113bb1b_optionalFile { _3113bb1b_optionalFile(char* value): value(value) {}; char* value; _3113bb1b_optionalFile(const _3113bb1b_optionalFile &) = delete; } _3113bb1b_optionalFile;
typedef struct _3113bb1b_optionalLine { _3113bb1b_optionalLine(int value): value(value) {}; int value; _3113bb1b_optionalLine(const _3113bb1b_optionalLine &) = delete; } _3113bb1b_optionalLine;
typedef struct _3113bb1b_optionalUserData { _3113bb1b_optionalUserData(void* value): value(value) {}; void* value; _3113bb1b_optionalUserData(const _3113bb1b_optionalUserData &) = delete; } _3113bb1b_optionalUserData;
typedef struct _3113bb1b_rteParameters { _3113bb1b_rteParameters(void* value): value(value) {}; void* value; _3113bb1b_rteParameters(const _3113bb1b_rteParameters &) = delete; } _3113bb1b_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorComputeSBTSize(_3113bb1b_shaderBindingTableGenerator & shaderBindingTableGenerator, _3113bb1b_optionalFile & optionalFile, _3113bb1b_optionalLine & optionalLine, _3113bb1b_optionalUserData & optionalUserData, _3113bb1b_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorComputeSBTSize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGenerate redXRteShaderBindingTableGeneratorGenerate
#define _ca1bcdd0_shaderBindingTableGenerator(value) value
#define _ca1bcdd0_sbtBuffer_ID3D12Resource(value) value
#define _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties(value) value
#define _ca1bcdd0_optionalFile(value) value
#define _ca1bcdd0_optionalLine(value) value
#define _ca1bcdd0_optionalUserData(value) value
#define _ca1bcdd0_rteParameters(value) value
#else
typedef struct _ca1bcdd0_shaderBindingTableGenerator { _ca1bcdd0_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _ca1bcdd0_shaderBindingTableGenerator(const _ca1bcdd0_shaderBindingTableGenerator &) = delete; } _ca1bcdd0_shaderBindingTableGenerator;
typedef struct _ca1bcdd0_sbtBuffer_ID3D12Resource { _ca1bcdd0_sbtBuffer_ID3D12Resource(void* value): value(value) {}; void* value; _ca1bcdd0_sbtBuffer_ID3D12Resource(const _ca1bcdd0_sbtBuffer_ID3D12Resource &) = delete; } _ca1bcdd0_sbtBuffer_ID3D12Resource;
typedef struct _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties { _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties(void* value): value(value) {}; void* value; _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties(const _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties &) = delete; } _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties;
typedef struct _ca1bcdd0_optionalFile { _ca1bcdd0_optionalFile(char* value): value(value) {}; char* value; _ca1bcdd0_optionalFile(const _ca1bcdd0_optionalFile &) = delete; } _ca1bcdd0_optionalFile;
typedef struct _ca1bcdd0_optionalLine { _ca1bcdd0_optionalLine(int value): value(value) {}; int value; _ca1bcdd0_optionalLine(const _ca1bcdd0_optionalLine &) = delete; } _ca1bcdd0_optionalLine;
typedef struct _ca1bcdd0_optionalUserData { _ca1bcdd0_optionalUserData(void* value): value(value) {}; void* value; _ca1bcdd0_optionalUserData(const _ca1bcdd0_optionalUserData &) = delete; } _ca1bcdd0_optionalUserData;
typedef struct _ca1bcdd0_rteParameters { _ca1bcdd0_rteParameters(void* value): value(value) {}; void* value; _ca1bcdd0_rteParameters(const _ca1bcdd0_rteParameters &) = delete; } _ca1bcdd0_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGenerate(_ca1bcdd0_shaderBindingTableGenerator & shaderBindingTableGenerator, _ca1bcdd0_sbtBuffer_ID3D12Resource & sbtBuffer_ID3D12Resource, _ca1bcdd0_raytracingPipeline_ID3D12StateObjectProperties & raytracingPipeline_ID3D12StateObjectProperties, _ca1bcdd0_optionalFile & optionalFile, _ca1bcdd0_optionalLine & optionalLine, _ca1bcdd0_optionalUserData & optionalUserData, _ca1bcdd0_rteParameters & rteParameters) {
  redXRteShaderBindingTableGeneratorGenerate(shaderBindingTableGenerator.value, sbtBuffer_ID3D12Resource.value, raytracingPipeline_ID3D12StateObjectProperties.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorReset redXRteShaderBindingTableGeneratorReset
#define _125b9e04_shaderBindingTableGenerator(value) value
#define _125b9e04_optionalFile(value) value
#define _125b9e04_optionalLine(value) value
#define _125b9e04_optionalUserData(value) value
#define _125b9e04_rteParameters(value) value
#else
typedef struct _125b9e04_shaderBindingTableGenerator { _125b9e04_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _125b9e04_shaderBindingTableGenerator(const _125b9e04_shaderBindingTableGenerator &) = delete; } _125b9e04_shaderBindingTableGenerator;
typedef struct _125b9e04_optionalFile { _125b9e04_optionalFile(char* value): value(value) {}; char* value; _125b9e04_optionalFile(const _125b9e04_optionalFile &) = delete; } _125b9e04_optionalFile;
typedef struct _125b9e04_optionalLine { _125b9e04_optionalLine(int value): value(value) {}; int value; _125b9e04_optionalLine(const _125b9e04_optionalLine &) = delete; } _125b9e04_optionalLine;
typedef struct _125b9e04_optionalUserData { _125b9e04_optionalUserData(void* value): value(value) {}; void* value; _125b9e04_optionalUserData(const _125b9e04_optionalUserData &) = delete; } _125b9e04_optionalUserData;
typedef struct _125b9e04_rteParameters { _125b9e04_rteParameters(void* value): value(value) {}; void* value; _125b9e04_rteParameters(const _125b9e04_rteParameters &) = delete; } _125b9e04_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteShaderBindingTableGeneratorReset(_125b9e04_shaderBindingTableGenerator & shaderBindingTableGenerator, _125b9e04_optionalFile & optionalFile, _125b9e04_optionalLine & optionalLine, _125b9e04_optionalUserData & optionalUserData, _125b9e04_rteParameters & rteParameters) {
  redXRteShaderBindingTableGeneratorReset(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGetRayGenSectionSize redXRteShaderBindingTableGeneratorGetRayGenSectionSize
#define _bd3fec3e_shaderBindingTableGenerator(value) value
#define _bd3fec3e_optionalFile(value) value
#define _bd3fec3e_optionalLine(value) value
#define _bd3fec3e_optionalUserData(value) value
#define _bd3fec3e_rteParameters(value) value
#else
typedef struct _bd3fec3e_shaderBindingTableGenerator { _bd3fec3e_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _bd3fec3e_shaderBindingTableGenerator(const _bd3fec3e_shaderBindingTableGenerator &) = delete; } _bd3fec3e_shaderBindingTableGenerator;
typedef struct _bd3fec3e_optionalFile { _bd3fec3e_optionalFile(char* value): value(value) {}; char* value; _bd3fec3e_optionalFile(const _bd3fec3e_optionalFile &) = delete; } _bd3fec3e_optionalFile;
typedef struct _bd3fec3e_optionalLine { _bd3fec3e_optionalLine(int value): value(value) {}; int value; _bd3fec3e_optionalLine(const _bd3fec3e_optionalLine &) = delete; } _bd3fec3e_optionalLine;
typedef struct _bd3fec3e_optionalUserData { _bd3fec3e_optionalUserData(void* value): value(value) {}; void* value; _bd3fec3e_optionalUserData(const _bd3fec3e_optionalUserData &) = delete; } _bd3fec3e_optionalUserData;
typedef struct _bd3fec3e_rteParameters { _bd3fec3e_rteParameters(void* value): value(value) {}; void* value; _bd3fec3e_rteParameters(const _bd3fec3e_rteParameters &) = delete; } _bd3fec3e_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGetRayGenSectionSize(_bd3fec3e_shaderBindingTableGenerator & shaderBindingTableGenerator, _bd3fec3e_optionalFile & optionalFile, _bd3fec3e_optionalLine & optionalLine, _bd3fec3e_optionalUserData & optionalUserData, _bd3fec3e_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorGetRayGenSectionSize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGetRayGenEntrySize redXRteShaderBindingTableGeneratorGetRayGenEntrySize
#define _9277b628_shaderBindingTableGenerator(value) value
#define _9277b628_optionalFile(value) value
#define _9277b628_optionalLine(value) value
#define _9277b628_optionalUserData(value) value
#define _9277b628_rteParameters(value) value
#else
typedef struct _9277b628_shaderBindingTableGenerator { _9277b628_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _9277b628_shaderBindingTableGenerator(const _9277b628_shaderBindingTableGenerator &) = delete; } _9277b628_shaderBindingTableGenerator;
typedef struct _9277b628_optionalFile { _9277b628_optionalFile(char* value): value(value) {}; char* value; _9277b628_optionalFile(const _9277b628_optionalFile &) = delete; } _9277b628_optionalFile;
typedef struct _9277b628_optionalLine { _9277b628_optionalLine(int value): value(value) {}; int value; _9277b628_optionalLine(const _9277b628_optionalLine &) = delete; } _9277b628_optionalLine;
typedef struct _9277b628_optionalUserData { _9277b628_optionalUserData(void* value): value(value) {}; void* value; _9277b628_optionalUserData(const _9277b628_optionalUserData &) = delete; } _9277b628_optionalUserData;
typedef struct _9277b628_rteParameters { _9277b628_rteParameters(void* value): value(value) {}; void* value; _9277b628_rteParameters(const _9277b628_rteParameters &) = delete; } _9277b628_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGetRayGenEntrySize(_9277b628_shaderBindingTableGenerator & shaderBindingTableGenerator, _9277b628_optionalFile & optionalFile, _9277b628_optionalLine & optionalLine, _9277b628_optionalUserData & optionalUserData, _9277b628_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorGetRayGenEntrySize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGetMissSectionSize redXRteShaderBindingTableGeneratorGetMissSectionSize
#define _cdf833df_shaderBindingTableGenerator(value) value
#define _cdf833df_optionalFile(value) value
#define _cdf833df_optionalLine(value) value
#define _cdf833df_optionalUserData(value) value
#define _cdf833df_rteParameters(value) value
#else
typedef struct _cdf833df_shaderBindingTableGenerator { _cdf833df_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _cdf833df_shaderBindingTableGenerator(const _cdf833df_shaderBindingTableGenerator &) = delete; } _cdf833df_shaderBindingTableGenerator;
typedef struct _cdf833df_optionalFile { _cdf833df_optionalFile(char* value): value(value) {}; char* value; _cdf833df_optionalFile(const _cdf833df_optionalFile &) = delete; } _cdf833df_optionalFile;
typedef struct _cdf833df_optionalLine { _cdf833df_optionalLine(int value): value(value) {}; int value; _cdf833df_optionalLine(const _cdf833df_optionalLine &) = delete; } _cdf833df_optionalLine;
typedef struct _cdf833df_optionalUserData { _cdf833df_optionalUserData(void* value): value(value) {}; void* value; _cdf833df_optionalUserData(const _cdf833df_optionalUserData &) = delete; } _cdf833df_optionalUserData;
typedef struct _cdf833df_rteParameters { _cdf833df_rteParameters(void* value): value(value) {}; void* value; _cdf833df_rteParameters(const _cdf833df_rteParameters &) = delete; } _cdf833df_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGetMissSectionSize(_cdf833df_shaderBindingTableGenerator & shaderBindingTableGenerator, _cdf833df_optionalFile & optionalFile, _cdf833df_optionalLine & optionalLine, _cdf833df_optionalUserData & optionalUserData, _cdf833df_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorGetMissSectionSize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGetMissEntrySize redXRteShaderBindingTableGeneratorGetMissEntrySize
#define _9cd8dba6_shaderBindingTableGenerator(value) value
#define _9cd8dba6_optionalFile(value) value
#define _9cd8dba6_optionalLine(value) value
#define _9cd8dba6_optionalUserData(value) value
#define _9cd8dba6_rteParameters(value) value
#else
typedef struct _9cd8dba6_shaderBindingTableGenerator { _9cd8dba6_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _9cd8dba6_shaderBindingTableGenerator(const _9cd8dba6_shaderBindingTableGenerator &) = delete; } _9cd8dba6_shaderBindingTableGenerator;
typedef struct _9cd8dba6_optionalFile { _9cd8dba6_optionalFile(char* value): value(value) {}; char* value; _9cd8dba6_optionalFile(const _9cd8dba6_optionalFile &) = delete; } _9cd8dba6_optionalFile;
typedef struct _9cd8dba6_optionalLine { _9cd8dba6_optionalLine(int value): value(value) {}; int value; _9cd8dba6_optionalLine(const _9cd8dba6_optionalLine &) = delete; } _9cd8dba6_optionalLine;
typedef struct _9cd8dba6_optionalUserData { _9cd8dba6_optionalUserData(void* value): value(value) {}; void* value; _9cd8dba6_optionalUserData(const _9cd8dba6_optionalUserData &) = delete; } _9cd8dba6_optionalUserData;
typedef struct _9cd8dba6_rteParameters { _9cd8dba6_rteParameters(void* value): value(value) {}; void* value; _9cd8dba6_rteParameters(const _9cd8dba6_rteParameters &) = delete; } _9cd8dba6_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGetMissEntrySize(_9cd8dba6_shaderBindingTableGenerator & shaderBindingTableGenerator, _9cd8dba6_optionalFile & optionalFile, _9cd8dba6_optionalLine & optionalLine, _9cd8dba6_optionalUserData & optionalUserData, _9cd8dba6_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorGetMissEntrySize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGetHitGroupSectionSize redXRteShaderBindingTableGeneratorGetHitGroupSectionSize
#define _a3967c14_shaderBindingTableGenerator(value) value
#define _a3967c14_optionalFile(value) value
#define _a3967c14_optionalLine(value) value
#define _a3967c14_optionalUserData(value) value
#define _a3967c14_rteParameters(value) value
#else
typedef struct _a3967c14_shaderBindingTableGenerator { _a3967c14_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _a3967c14_shaderBindingTableGenerator(const _a3967c14_shaderBindingTableGenerator &) = delete; } _a3967c14_shaderBindingTableGenerator;
typedef struct _a3967c14_optionalFile { _a3967c14_optionalFile(char* value): value(value) {}; char* value; _a3967c14_optionalFile(const _a3967c14_optionalFile &) = delete; } _a3967c14_optionalFile;
typedef struct _a3967c14_optionalLine { _a3967c14_optionalLine(int value): value(value) {}; int value; _a3967c14_optionalLine(const _a3967c14_optionalLine &) = delete; } _a3967c14_optionalLine;
typedef struct _a3967c14_optionalUserData { _a3967c14_optionalUserData(void* value): value(value) {}; void* value; _a3967c14_optionalUserData(const _a3967c14_optionalUserData &) = delete; } _a3967c14_optionalUserData;
typedef struct _a3967c14_rteParameters { _a3967c14_rteParameters(void* value): value(value) {}; void* value; _a3967c14_rteParameters(const _a3967c14_rteParameters &) = delete; } _a3967c14_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGetHitGroupSectionSize(_a3967c14_shaderBindingTableGenerator & shaderBindingTableGenerator, _a3967c14_optionalFile & optionalFile, _a3967c14_optionalLine & optionalLine, _a3967c14_optionalUserData & optionalUserData, _a3967c14_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorGetHitGroupSectionSize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteShaderBindingTableGeneratorGetHitGroupEntrySize redXRteShaderBindingTableGeneratorGetHitGroupEntrySize
#define _d9c0e7e1_shaderBindingTableGenerator(value) value
#define _d9c0e7e1_optionalFile(value) value
#define _d9c0e7e1_optionalLine(value) value
#define _d9c0e7e1_optionalUserData(value) value
#define _d9c0e7e1_rteParameters(value) value
#else
typedef struct _d9c0e7e1_shaderBindingTableGenerator { _d9c0e7e1_shaderBindingTableGenerator(RedXRteHandleShaderBindingTableGenerator value): value(value) {}; RedXRteHandleShaderBindingTableGenerator value; _d9c0e7e1_shaderBindingTableGenerator(const _d9c0e7e1_shaderBindingTableGenerator &) = delete; } _d9c0e7e1_shaderBindingTableGenerator;
typedef struct _d9c0e7e1_optionalFile { _d9c0e7e1_optionalFile(char* value): value(value) {}; char* value; _d9c0e7e1_optionalFile(const _d9c0e7e1_optionalFile &) = delete; } _d9c0e7e1_optionalFile;
typedef struct _d9c0e7e1_optionalLine { _d9c0e7e1_optionalLine(int value): value(value) {}; int value; _d9c0e7e1_optionalLine(const _d9c0e7e1_optionalLine &) = delete; } _d9c0e7e1_optionalLine;
typedef struct _d9c0e7e1_optionalUserData { _d9c0e7e1_optionalUserData(void* value): value(value) {}; void* value; _d9c0e7e1_optionalUserData(const _d9c0e7e1_optionalUserData &) = delete; } _d9c0e7e1_optionalUserData;
typedef struct _d9c0e7e1_rteParameters { _d9c0e7e1_rteParameters(void* value): value(value) {}; void* value; _d9c0e7e1_rteParameters(const _d9c0e7e1_rteParameters &) = delete; } _d9c0e7e1_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redXRteShaderBindingTableGeneratorGetHitGroupEntrySize(_d9c0e7e1_shaderBindingTableGenerator & shaderBindingTableGenerator, _d9c0e7e1_optionalFile & optionalFile, _d9c0e7e1_optionalLine & optionalLine, _d9c0e7e1_optionalUserData & optionalUserData, _d9c0e7e1_rteParameters & rteParameters) {
  return redXRteShaderBindingTableGeneratorGetHitGroupEntrySize(shaderBindingTableGenerator.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCallSetStateObject redXRteCallSetStateObject
#define _386a712d_calls(value) value
#define _386a712d_stateObject_ID3D12StateObject(value) value
#define _386a712d_optionalFile(value) value
#define _386a712d_optionalLine(value) value
#define _386a712d_optionalUserData(value) value
#define _386a712d_rteParameters(value) value
#else
typedef struct _386a712d_calls { _386a712d_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _386a712d_calls(const _386a712d_calls &) = delete; } _386a712d_calls;
typedef struct _386a712d_stateObject_ID3D12StateObject { _386a712d_stateObject_ID3D12StateObject(void* value): value(value) {}; void* value; _386a712d_stateObject_ID3D12StateObject(const _386a712d_stateObject_ID3D12StateObject &) = delete; } _386a712d_stateObject_ID3D12StateObject;
typedef struct _386a712d_optionalFile { _386a712d_optionalFile(char* value): value(value) {}; char* value; _386a712d_optionalFile(const _386a712d_optionalFile &) = delete; } _386a712d_optionalFile;
typedef struct _386a712d_optionalLine { _386a712d_optionalLine(int value): value(value) {}; int value; _386a712d_optionalLine(const _386a712d_optionalLine &) = delete; } _386a712d_optionalLine;
typedef struct _386a712d_optionalUserData { _386a712d_optionalUserData(void* value): value(value) {}; void* value; _386a712d_optionalUserData(const _386a712d_optionalUserData &) = delete; } _386a712d_optionalUserData;
typedef struct _386a712d_rteParameters { _386a712d_rteParameters(void* value): value(value) {}; void* value; _386a712d_rteParameters(const _386a712d_rteParameters &) = delete; } _386a712d_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCallSetStateObject(_386a712d_calls & calls, _386a712d_stateObject_ID3D12StateObject & stateObject_ID3D12StateObject, _386a712d_optionalFile & optionalFile, _386a712d_optionalLine & optionalLine, _386a712d_optionalUserData & optionalUserData, _386a712d_rteParameters & rteParameters) {
  redXRteCallSetStateObject(calls.value, stateObject_ID3D12StateObject.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXRteCallDispatchRays redXRteCallDispatchRays
#define _318e9339_calls(value) value
#define _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC(value) value
#define _318e9339_optionalFile(value) value
#define _318e9339_optionalLine(value) value
#define _318e9339_optionalUserData(value) value
#define _318e9339_rteParameters(value) value
#else
typedef struct _318e9339_calls { _318e9339_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _318e9339_calls(const _318e9339_calls &) = delete; } _318e9339_calls;
typedef struct _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC { _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC(void* value): value(value) {}; void* value; _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC(const _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC &) = delete; } _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC;
typedef struct _318e9339_optionalFile { _318e9339_optionalFile(char* value): value(value) {}; char* value; _318e9339_optionalFile(const _318e9339_optionalFile &) = delete; } _318e9339_optionalFile;
typedef struct _318e9339_optionalLine { _318e9339_optionalLine(int value): value(value) {}; int value; _318e9339_optionalLine(const _318e9339_optionalLine &) = delete; } _318e9339_optionalLine;
typedef struct _318e9339_optionalUserData { _318e9339_optionalUserData(void* value): value(value) {}; void* value; _318e9339_optionalUserData(const _318e9339_optionalUserData &) = delete; } _318e9339_optionalUserData;
typedef struct _318e9339_rteParameters { _318e9339_rteParameters(void* value): value(value) {}; void* value; _318e9339_rteParameters(const _318e9339_rteParameters &) = delete; } _318e9339_rteParameters;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXRteCallDispatchRays(_318e9339_calls & calls, _318e9339_dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC & dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC, _318e9339_optionalFile & optionalFile, _318e9339_optionalLine & optionalLine, _318e9339_optionalUserData & optionalUserData, _318e9339_rteParameters & rteParameters) {
  redXRteCallDispatchRays(calls.value, dispatchRaysDescription_D3D12_DISPATCH_RAYS_DESC.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

