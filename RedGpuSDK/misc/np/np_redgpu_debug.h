#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDebugArrayGetHandle redDebugArrayGetHandle
#define _f477b6f5_context(value) value
#define _f477b6f5_gpu(value) value
#define _f477b6f5_outStatuses(value) value
#define _f477b6f5_optionalFile(value) value
#define _f477b6f5_optionalLine(value) value
#define _f477b6f5_optionalUserData(value) value
#else
typedef struct _f477b6f5_context { _f477b6f5_context(RedContext value): value(value) {}; RedContext value; _f477b6f5_context(const _f477b6f5_context &) = delete; } _f477b6f5_context;
typedef struct _f477b6f5_gpu { _f477b6f5_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _f477b6f5_gpu(const _f477b6f5_gpu &) = delete; } _f477b6f5_gpu;
typedef struct _f477b6f5_outStatuses { _f477b6f5_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _f477b6f5_outStatuses(const _f477b6f5_outStatuses &) = delete; } _f477b6f5_outStatuses;
typedef struct _f477b6f5_optionalFile { _f477b6f5_optionalFile(char* value): value(value) {}; char* value; _f477b6f5_optionalFile(const _f477b6f5_optionalFile &) = delete; } _f477b6f5_optionalFile;
typedef struct _f477b6f5_optionalLine { _f477b6f5_optionalLine(int value): value(value) {}; int value; _f477b6f5_optionalLine(const _f477b6f5_optionalLine &) = delete; } _f477b6f5_optionalLine;
typedef struct _f477b6f5_optionalUserData { _f477b6f5_optionalUserData(void* value): value(value) {}; void* value; _f477b6f5_optionalUserData(const _f477b6f5_optionalUserData &) = delete; } _f477b6f5_optionalUserData;
REDGPU_NP_DECLSPEC RedHandleArray REDGPU_NP_API np_redDebugArrayGetHandle(_f477b6f5_context & context, _f477b6f5_gpu & gpu, _f477b6f5_outStatuses & outStatuses, _f477b6f5_optionalFile & optionalFile, _f477b6f5_optionalLine & optionalLine, _f477b6f5_optionalUserData & optionalUserData) {
  return redDebugArrayGetHandle(context.value, gpu.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDebugArrayCallPrint redDebugArrayCallPrint
#define _5f1d5655_context(value) value
#define _5f1d5655_gpu(value) value
#define _5f1d5655_calls(value) value
#define _5f1d5655_outStatuses(value) value
#define _5f1d5655_optionalFile(value) value
#define _5f1d5655_optionalLine(value) value
#define _5f1d5655_optionalUserData(value) value
#else
typedef struct _5f1d5655_context { _5f1d5655_context(RedContext value): value(value) {}; RedContext value; _5f1d5655_context(const _5f1d5655_context &) = delete; } _5f1d5655_context;
typedef struct _5f1d5655_gpu { _5f1d5655_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _5f1d5655_gpu(const _5f1d5655_gpu &) = delete; } _5f1d5655_gpu;
typedef struct _5f1d5655_calls { _5f1d5655_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _5f1d5655_calls(const _5f1d5655_calls &) = delete; } _5f1d5655_calls;
typedef struct _5f1d5655_outStatuses { _5f1d5655_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _5f1d5655_outStatuses(const _5f1d5655_outStatuses &) = delete; } _5f1d5655_outStatuses;
typedef struct _5f1d5655_optionalFile { _5f1d5655_optionalFile(char* value): value(value) {}; char* value; _5f1d5655_optionalFile(const _5f1d5655_optionalFile &) = delete; } _5f1d5655_optionalFile;
typedef struct _5f1d5655_optionalLine { _5f1d5655_optionalLine(int value): value(value) {}; int value; _5f1d5655_optionalLine(const _5f1d5655_optionalLine &) = delete; } _5f1d5655_optionalLine;
typedef struct _5f1d5655_optionalUserData { _5f1d5655_optionalUserData(void* value): value(value) {}; void* value; _5f1d5655_optionalUserData(const _5f1d5655_optionalUserData &) = delete; } _5f1d5655_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redDebugArrayCallPrint(_5f1d5655_context & context, _5f1d5655_gpu & gpu, _5f1d5655_calls & calls, _5f1d5655_outStatuses & outStatuses, _5f1d5655_optionalFile & optionalFile, _5f1d5655_optionalLine & optionalLine, _5f1d5655_optionalUserData & optionalUserData) {
  redDebugArrayCallPrint(context.value, gpu.value, calls.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

