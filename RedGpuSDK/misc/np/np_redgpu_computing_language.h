#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateProcedureComputingLanguage redCreateProcedureComputingLanguage
#define _3e8464a5_context(value) value
#define _3e8464a5_gpu(value) value
#define _3e8464a5_handleName(value) value
#define _3e8464a5_procedureCache(value) value
#define _3e8464a5_procedureParameters(value) value
#define _3e8464a5_gpuCodeMainProcedureName(value) value
#define _3e8464a5_gpuCode(value) value
#define _3e8464a5_stateExtension(value) value
#define _3e8464a5_outProcedure(value) value
#define _3e8464a5_outStatuses(value) value
#define _3e8464a5_optionalFile(value) value
#define _3e8464a5_optionalLine(value) value
#define _3e8464a5_optionalUserData(value) value
#else
typedef struct _3e8464a5_context { _3e8464a5_context(RedContext value): value(value) {}; RedContext value; _3e8464a5_context(const _3e8464a5_context &) = delete; } _3e8464a5_context;
typedef struct _3e8464a5_gpu { _3e8464a5_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _3e8464a5_gpu(const _3e8464a5_gpu &) = delete; } _3e8464a5_gpu;
typedef struct _3e8464a5_handleName { _3e8464a5_handleName(char* value): value(value) {}; char* value; _3e8464a5_handleName(const _3e8464a5_handleName &) = delete; } _3e8464a5_handleName;
typedef struct _3e8464a5_procedureCache { _3e8464a5_procedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _3e8464a5_procedureCache(const _3e8464a5_procedureCache &) = delete; } _3e8464a5_procedureCache;
typedef struct _3e8464a5_procedureParameters { _3e8464a5_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _3e8464a5_procedureParameters(const _3e8464a5_procedureParameters &) = delete; } _3e8464a5_procedureParameters;
typedef struct _3e8464a5_gpuCodeMainProcedureName { _3e8464a5_gpuCodeMainProcedureName(char* value): value(value) {}; char* value; _3e8464a5_gpuCodeMainProcedureName(const _3e8464a5_gpuCodeMainProcedureName &) = delete; } _3e8464a5_gpuCodeMainProcedureName;
typedef struct _3e8464a5_gpuCode { _3e8464a5_gpuCode(RedHandleGpuCode value): value(value) {}; RedHandleGpuCode value; _3e8464a5_gpuCode(const _3e8464a5_gpuCode &) = delete; } _3e8464a5_gpuCode;
typedef struct _3e8464a5_stateExtension { _3e8464a5_stateExtension(void* value): value(value) {}; void* value; _3e8464a5_stateExtension(const _3e8464a5_stateExtension &) = delete; } _3e8464a5_stateExtension;
typedef struct _3e8464a5_outProcedure { _3e8464a5_outProcedure(RedHandleProcedure* value): value(value) {}; RedHandleProcedure* value; _3e8464a5_outProcedure(const _3e8464a5_outProcedure &) = delete; } _3e8464a5_outProcedure;
typedef struct _3e8464a5_outStatuses { _3e8464a5_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _3e8464a5_outStatuses(const _3e8464a5_outStatuses &) = delete; } _3e8464a5_outStatuses;
typedef struct _3e8464a5_optionalFile { _3e8464a5_optionalFile(char* value): value(value) {}; char* value; _3e8464a5_optionalFile(const _3e8464a5_optionalFile &) = delete; } _3e8464a5_optionalFile;
typedef struct _3e8464a5_optionalLine { _3e8464a5_optionalLine(int value): value(value) {}; int value; _3e8464a5_optionalLine(const _3e8464a5_optionalLine &) = delete; } _3e8464a5_optionalLine;
typedef struct _3e8464a5_optionalUserData { _3e8464a5_optionalUserData(void* value): value(value) {}; void* value; _3e8464a5_optionalUserData(const _3e8464a5_optionalUserData &) = delete; } _3e8464a5_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redCreateProcedureComputingLanguage(_3e8464a5_context & context, _3e8464a5_gpu & gpu, _3e8464a5_handleName & handleName, _3e8464a5_procedureCache & procedureCache, _3e8464a5_procedureParameters & procedureParameters, _3e8464a5_gpuCodeMainProcedureName & gpuCodeMainProcedureName, _3e8464a5_gpuCode & gpuCode, _3e8464a5_stateExtension & stateExtension, _3e8464a5_outProcedure & outProcedure, _3e8464a5_outStatuses & outStatuses, _3e8464a5_optionalFile & optionalFile, _3e8464a5_optionalLine & optionalLine, _3e8464a5_optionalUserData & optionalUserData) {
  redCreateProcedureComputingLanguage(context.value, gpu.value, handleName.value, procedureCache.value, procedureParameters.value, gpuCodeMainProcedureName.value, gpuCode.value, stateExtension.value, outProcedure.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

