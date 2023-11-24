#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateContext redRteCreateContext
#define _a3c68208_mallocFn(value) value
#define _a3c68208_freeFn(value) value
#define _a3c68208_optionalMallocTagged(value) value
#define _a3c68208_optionalFreeTagged(value) value
#define _a3c68208_debugCallback(value) value
#define _a3c68208_sdkVersion(value) value
#define _a3c68208_sdkExtensionsCount(value) value
#define _a3c68208_sdkExtensions(value) value
#define _a3c68208_optionalProgramName(value) value
#define _a3c68208_optionalProgramVersion(value) value
#define _a3c68208_optionalEngineName(value) value
#define _a3c68208_optionalEngineVersion(value) value
#define _a3c68208_optionalSettings(value) value
#define _a3c68208_outContext(value) value
#define _a3c68208_outStatuses(value) value
#define _a3c68208_optionalFile(value) value
#define _a3c68208_optionalLine(value) value
#define _a3c68208_optionalUserData(value) value
#define _a3c68208_rteParameters(value) value
#else
typedef struct _a3c68208_mallocFn { _a3c68208_mallocFn(RedTypeProcedureMalloc value): value(value) {}; RedTypeProcedureMalloc value; _a3c68208_mallocFn(const _a3c68208_mallocFn &) = delete; } _a3c68208_mallocFn;
typedef struct _a3c68208_freeFn { _a3c68208_freeFn(RedTypeProcedureFree value): value(value) {}; RedTypeProcedureFree value; _a3c68208_freeFn(const _a3c68208_freeFn &) = delete; } _a3c68208_freeFn;
typedef struct _a3c68208_optionalMallocTagged { _a3c68208_optionalMallocTagged(RedTypeProcedureMallocTagged value): value(value) {}; RedTypeProcedureMallocTagged value; _a3c68208_optionalMallocTagged(const _a3c68208_optionalMallocTagged &) = delete; } _a3c68208_optionalMallocTagged;
typedef struct _a3c68208_optionalFreeTagged { _a3c68208_optionalFreeTagged(RedTypeProcedureFreeTagged value): value(value) {}; RedTypeProcedureFreeTagged value; _a3c68208_optionalFreeTagged(const _a3c68208_optionalFreeTagged &) = delete; } _a3c68208_optionalFreeTagged;
typedef struct _a3c68208_debugCallback { _a3c68208_debugCallback(RedTypeProcedureDebugCallback value): value(value) {}; RedTypeProcedureDebugCallback value; _a3c68208_debugCallback(const _a3c68208_debugCallback &) = delete; } _a3c68208_debugCallback;
typedef struct _a3c68208_sdkVersion { _a3c68208_sdkVersion(RedSdkVersion value): value(value) {}; RedSdkVersion value; _a3c68208_sdkVersion(const _a3c68208_sdkVersion &) = delete; } _a3c68208_sdkVersion;
typedef struct _a3c68208_sdkExtensionsCount { _a3c68208_sdkExtensionsCount(unsigned value): value(value) {}; unsigned value; _a3c68208_sdkExtensionsCount(const _a3c68208_sdkExtensionsCount &) = delete; } _a3c68208_sdkExtensionsCount;
typedef struct _a3c68208_sdkExtensions { _a3c68208_sdkExtensions(unsigned* value): value(value) {}; unsigned* value; _a3c68208_sdkExtensions(const _a3c68208_sdkExtensions &) = delete; } _a3c68208_sdkExtensions;
typedef struct _a3c68208_optionalProgramName { _a3c68208_optionalProgramName(char* value): value(value) {}; char* value; _a3c68208_optionalProgramName(const _a3c68208_optionalProgramName &) = delete; } _a3c68208_optionalProgramName;
typedef struct _a3c68208_optionalProgramVersion { _a3c68208_optionalProgramVersion(unsigned value): value(value) {}; unsigned value; _a3c68208_optionalProgramVersion(const _a3c68208_optionalProgramVersion &) = delete; } _a3c68208_optionalProgramVersion;
typedef struct _a3c68208_optionalEngineName { _a3c68208_optionalEngineName(char* value): value(value) {}; char* value; _a3c68208_optionalEngineName(const _a3c68208_optionalEngineName &) = delete; } _a3c68208_optionalEngineName;
typedef struct _a3c68208_optionalEngineVersion { _a3c68208_optionalEngineVersion(unsigned value): value(value) {}; unsigned value; _a3c68208_optionalEngineVersion(const _a3c68208_optionalEngineVersion &) = delete; } _a3c68208_optionalEngineVersion;
typedef struct _a3c68208_optionalSettings { _a3c68208_optionalSettings(void* value): value(value) {}; void* value; _a3c68208_optionalSettings(const _a3c68208_optionalSettings &) = delete; } _a3c68208_optionalSettings;
typedef struct _a3c68208_outContext { _a3c68208_outContext(RedContext* value): value(value) {}; RedContext* value; _a3c68208_outContext(const _a3c68208_outContext &) = delete; } _a3c68208_outContext;
typedef struct _a3c68208_outStatuses { _a3c68208_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _a3c68208_outStatuses(const _a3c68208_outStatuses &) = delete; } _a3c68208_outStatuses;
typedef struct _a3c68208_optionalFile { _a3c68208_optionalFile(char* value): value(value) {}; char* value; _a3c68208_optionalFile(const _a3c68208_optionalFile &) = delete; } _a3c68208_optionalFile;
typedef struct _a3c68208_optionalLine { _a3c68208_optionalLine(int value): value(value) {}; int value; _a3c68208_optionalLine(const _a3c68208_optionalLine &) = delete; } _a3c68208_optionalLine;
typedef struct _a3c68208_optionalUserData { _a3c68208_optionalUserData(void* value): value(value) {}; void* value; _a3c68208_optionalUserData(const _a3c68208_optionalUserData &) = delete; } _a3c68208_optionalUserData;
typedef struct _a3c68208_rteParameters { _a3c68208_rteParameters(RedRteCreateContextParameters* value): value(value) {}; RedRteCreateContextParameters* value; _a3c68208_rteParameters(const _a3c68208_rteParameters &) = delete; } _a3c68208_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateContext(_a3c68208_mallocFn & mallocFn, _a3c68208_freeFn & freeFn, _a3c68208_optionalMallocTagged & optionalMallocTagged, _a3c68208_optionalFreeTagged & optionalFreeTagged, _a3c68208_debugCallback & debugCallback, _a3c68208_sdkVersion & sdkVersion, _a3c68208_sdkExtensionsCount & sdkExtensionsCount, _a3c68208_sdkExtensions & sdkExtensions, _a3c68208_optionalProgramName & optionalProgramName, _a3c68208_optionalProgramVersion & optionalProgramVersion, _a3c68208_optionalEngineName & optionalEngineName, _a3c68208_optionalEngineVersion & optionalEngineVersion, _a3c68208_optionalSettings & optionalSettings, _a3c68208_outContext & outContext, _a3c68208_outStatuses & outStatuses, _a3c68208_optionalFile & optionalFile, _a3c68208_optionalLine & optionalLine, _a3c68208_optionalUserData & optionalUserData, _a3c68208_rteParameters & rteParameters) {
  return redRteCreateContext(mallocFn.value, freeFn.value, optionalMallocTagged.value, optionalFreeTagged.value, debugCallback.value, sdkVersion.value, sdkExtensionsCount.value, sdkExtensions.value, optionalProgramName.value, optionalProgramVersion.value, optionalEngineName.value, optionalEngineVersion.value, optionalSettings.value, outContext.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyContext redRteDestroyContext
#define _cba668f6_context(value) value
#define _cba668f6_optionalFile(value) value
#define _cba668f6_optionalLine(value) value
#define _cba668f6_optionalUserData(value) value
#define _cba668f6_rteParameters(value) value
#else
typedef struct _cba668f6_context { _cba668f6_context(RedContext value): value(value) {}; RedContext value; _cba668f6_context(const _cba668f6_context &) = delete; } _cba668f6_context;
typedef struct _cba668f6_optionalFile { _cba668f6_optionalFile(char* value): value(value) {}; char* value; _cba668f6_optionalFile(const _cba668f6_optionalFile &) = delete; } _cba668f6_optionalFile;
typedef struct _cba668f6_optionalLine { _cba668f6_optionalLine(int value): value(value) {}; int value; _cba668f6_optionalLine(const _cba668f6_optionalLine &) = delete; } _cba668f6_optionalLine;
typedef struct _cba668f6_optionalUserData { _cba668f6_optionalUserData(void* value): value(value) {}; void* value; _cba668f6_optionalUserData(const _cba668f6_optionalUserData &) = delete; } _cba668f6_optionalUserData;
typedef struct _cba668f6_rteParameters { _cba668f6_rteParameters(RedRteDestroyContextParameters* value): value(value) {}; RedRteDestroyContextParameters* value; _cba668f6_rteParameters(const _cba668f6_rteParameters &) = delete; } _cba668f6_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyContext(_cba668f6_context & context, _cba668f6_optionalFile & optionalFile, _cba668f6_optionalLine & optionalLine, _cba668f6_optionalUserData & optionalUserData, _cba668f6_rteParameters & rteParameters) {
  return redRteDestroyContext(context.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateQueue redRteCreateQueue
#define _b155f18d_rteContext(value) value
#define _b155f18d_handleName(value) value
#define _b155f18d_queueFlags(value) value
#define _b155f18d_queuePriority(value) value
#define _b155f18d_outRteQueue(value) value
#define _b155f18d_outStatuses(value) value
#define _b155f18d_optionalFile(value) value
#define _b155f18d_optionalLine(value) value
#define _b155f18d_optionalUserData(value) value
#define _b155f18d_rteParameters(value) value
#else
typedef struct _b155f18d_rteContext { _b155f18d_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _b155f18d_rteContext(const _b155f18d_rteContext &) = delete; } _b155f18d_rteContext;
typedef struct _b155f18d_handleName { _b155f18d_handleName(char* value): value(value) {}; char* value; _b155f18d_handleName(const _b155f18d_handleName &) = delete; } _b155f18d_handleName;
typedef struct _b155f18d_queueFlags { _b155f18d_queueFlags(RedRteQueueBitflags value): value(value) {}; RedRteQueueBitflags value; _b155f18d_queueFlags(const _b155f18d_queueFlags &) = delete; } _b155f18d_queueFlags;
typedef struct _b155f18d_queuePriority { _b155f18d_queuePriority(float value): value(value) {}; float value; _b155f18d_queuePriority(const _b155f18d_queuePriority &) = delete; } _b155f18d_queuePriority;
typedef struct _b155f18d_outRteQueue { _b155f18d_outRteQueue(RedRteQueue* value): value(value) {}; RedRteQueue* value; _b155f18d_outRteQueue(const _b155f18d_outRteQueue &) = delete; } _b155f18d_outRteQueue;
typedef struct _b155f18d_outStatuses { _b155f18d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _b155f18d_outStatuses(const _b155f18d_outStatuses &) = delete; } _b155f18d_outStatuses;
typedef struct _b155f18d_optionalFile { _b155f18d_optionalFile(char* value): value(value) {}; char* value; _b155f18d_optionalFile(const _b155f18d_optionalFile &) = delete; } _b155f18d_optionalFile;
typedef struct _b155f18d_optionalLine { _b155f18d_optionalLine(int value): value(value) {}; int value; _b155f18d_optionalLine(const _b155f18d_optionalLine &) = delete; } _b155f18d_optionalLine;
typedef struct _b155f18d_optionalUserData { _b155f18d_optionalUserData(void* value): value(value) {}; void* value; _b155f18d_optionalUserData(const _b155f18d_optionalUserData &) = delete; } _b155f18d_optionalUserData;
typedef struct _b155f18d_rteParameters { _b155f18d_rteParameters(void* value): value(value) {}; void* value; _b155f18d_rteParameters(const _b155f18d_rteParameters &) = delete; } _b155f18d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateQueue(_b155f18d_rteContext & rteContext, _b155f18d_handleName & handleName, _b155f18d_queueFlags & queueFlags, _b155f18d_queuePriority & queuePriority, _b155f18d_outRteQueue & outRteQueue, _b155f18d_outStatuses & outStatuses, _b155f18d_optionalFile & optionalFile, _b155f18d_optionalLine & optionalLine, _b155f18d_optionalUserData & optionalUserData, _b155f18d_rteParameters & rteParameters) {
  return redRteCreateQueue(rteContext.value, handleName.value, queueFlags.value, queuePriority.value, outRteQueue.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteArrayGetGpuAddress redRteArrayGetGpuAddress
#define _3dec13d3_rteContext(value) value
#define _3dec13d3_gpu(value) value
#define _3dec13d3_array(value) value
#define _3dec13d3_optionalFile(value) value
#define _3dec13d3_optionalLine(value) value
#define _3dec13d3_optionalUserData(value) value
#define _3dec13d3_rteParameters(value) value
#else
typedef struct _3dec13d3_rteContext { _3dec13d3_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _3dec13d3_rteContext(const _3dec13d3_rteContext &) = delete; } _3dec13d3_rteContext;
typedef struct _3dec13d3_gpu { _3dec13d3_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _3dec13d3_gpu(const _3dec13d3_gpu &) = delete; } _3dec13d3_gpu;
typedef struct _3dec13d3_array { _3dec13d3_array(RedHandleArray value): value(value) {}; RedHandleArray value; _3dec13d3_array(const _3dec13d3_array &) = delete; } _3dec13d3_array;
typedef struct _3dec13d3_optionalFile { _3dec13d3_optionalFile(char* value): value(value) {}; char* value; _3dec13d3_optionalFile(const _3dec13d3_optionalFile &) = delete; } _3dec13d3_optionalFile;
typedef struct _3dec13d3_optionalLine { _3dec13d3_optionalLine(int value): value(value) {}; int value; _3dec13d3_optionalLine(const _3dec13d3_optionalLine &) = delete; } _3dec13d3_optionalLine;
typedef struct _3dec13d3_optionalUserData { _3dec13d3_optionalUserData(void* value): value(value) {}; void* value; _3dec13d3_optionalUserData(const _3dec13d3_optionalUserData &) = delete; } _3dec13d3_optionalUserData;
typedef struct _3dec13d3_rteParameters { _3dec13d3_rteParameters(void* value): value(value) {}; void* value; _3dec13d3_rteParameters(const _3dec13d3_rteParameters &) = delete; } _3dec13d3_rteParameters;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redRteArrayGetGpuAddress(_3dec13d3_rteContext & rteContext, _3dec13d3_gpu & gpu, _3dec13d3_array & array, _3dec13d3_optionalFile & optionalFile, _3dec13d3_optionalLine & optionalLine, _3dec13d3_optionalUserData & optionalUserData, _3dec13d3_rteParameters & rteParameters) {
  return redRteArrayGetGpuAddress(rteContext.value, gpu.value, array.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateHelperAllocatorDma redRteCreateHelperAllocatorDma
#define _5fbcf46f_rteContext(value) value
#define _5fbcf46f_outHelperAllocatorDma(value) value
#define _5fbcf46f_outStatuses(value) value
#define _5fbcf46f_optionalFile(value) value
#define _5fbcf46f_optionalLine(value) value
#define _5fbcf46f_optionalUserData(value) value
#define _5fbcf46f_rteParameters(value) value
#else
typedef struct _5fbcf46f_rteContext { _5fbcf46f_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _5fbcf46f_rteContext(const _5fbcf46f_rteContext &) = delete; } _5fbcf46f_rteContext;
typedef struct _5fbcf46f_outHelperAllocatorDma { _5fbcf46f_outHelperAllocatorDma(RedRteHandleHelperAllocatorDma* value): value(value) {}; RedRteHandleHelperAllocatorDma* value; _5fbcf46f_outHelperAllocatorDma(const _5fbcf46f_outHelperAllocatorDma &) = delete; } _5fbcf46f_outHelperAllocatorDma;
typedef struct _5fbcf46f_outStatuses { _5fbcf46f_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _5fbcf46f_outStatuses(const _5fbcf46f_outStatuses &) = delete; } _5fbcf46f_outStatuses;
typedef struct _5fbcf46f_optionalFile { _5fbcf46f_optionalFile(char* value): value(value) {}; char* value; _5fbcf46f_optionalFile(const _5fbcf46f_optionalFile &) = delete; } _5fbcf46f_optionalFile;
typedef struct _5fbcf46f_optionalLine { _5fbcf46f_optionalLine(int value): value(value) {}; int value; _5fbcf46f_optionalLine(const _5fbcf46f_optionalLine &) = delete; } _5fbcf46f_optionalLine;
typedef struct _5fbcf46f_optionalUserData { _5fbcf46f_optionalUserData(void* value): value(value) {}; void* value; _5fbcf46f_optionalUserData(const _5fbcf46f_optionalUserData &) = delete; } _5fbcf46f_optionalUserData;
typedef struct _5fbcf46f_rteParameters { _5fbcf46f_rteParameters(void* value): value(value) {}; void* value; _5fbcf46f_rteParameters(const _5fbcf46f_rteParameters &) = delete; } _5fbcf46f_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateHelperAllocatorDma(_5fbcf46f_rteContext & rteContext, _5fbcf46f_outHelperAllocatorDma & outHelperAllocatorDma, _5fbcf46f_outStatuses & outStatuses, _5fbcf46f_optionalFile & optionalFile, _5fbcf46f_optionalLine & optionalLine, _5fbcf46f_optionalUserData & optionalUserData, _5fbcf46f_rteParameters & rteParameters) {
  return redRteCreateHelperAllocatorDma(rteContext.value, outHelperAllocatorDma.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyHelperAllocatorDma redRteDestroyHelperAllocatorDma
#define _7966010f_helperAllocatorDma(value) value
#define _7966010f_optionalFile(value) value
#define _7966010f_optionalLine(value) value
#define _7966010f_optionalUserData(value) value
#define _7966010f_rteParameters(value) value
#else
typedef struct _7966010f_helperAllocatorDma { _7966010f_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _7966010f_helperAllocatorDma(const _7966010f_helperAllocatorDma &) = delete; } _7966010f_helperAllocatorDma;
typedef struct _7966010f_optionalFile { _7966010f_optionalFile(char* value): value(value) {}; char* value; _7966010f_optionalFile(const _7966010f_optionalFile &) = delete; } _7966010f_optionalFile;
typedef struct _7966010f_optionalLine { _7966010f_optionalLine(int value): value(value) {}; int value; _7966010f_optionalLine(const _7966010f_optionalLine &) = delete; } _7966010f_optionalLine;
typedef struct _7966010f_optionalUserData { _7966010f_optionalUserData(void* value): value(value) {}; void* value; _7966010f_optionalUserData(const _7966010f_optionalUserData &) = delete; } _7966010f_optionalUserData;
typedef struct _7966010f_rteParameters { _7966010f_rteParameters(void* value): value(value) {}; void* value; _7966010f_rteParameters(const _7966010f_rteParameters &) = delete; } _7966010f_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyHelperAllocatorDma(_7966010f_helperAllocatorDma & helperAllocatorDma, _7966010f_optionalFile & optionalFile, _7966010f_optionalLine & optionalLine, _7966010f_optionalUserData & optionalUserData, _7966010f_rteParameters & rteParameters) {
  return redRteDestroyHelperAllocatorDma(helperAllocatorDma.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaCreateArray redRteHelperAllocatorDmaCreateArray
#define _00c3eb95_helperAllocatorDma(value) value
#define _00c3eb95_arrayInfo(value) value
#define _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _00c3eb95_outRteHelperArray(value) value
#define _00c3eb95_outStatuses(value) value
#define _00c3eb95_optionalFile(value) value
#define _00c3eb95_optionalLine(value) value
#define _00c3eb95_optionalUserData(value) value
#define _00c3eb95_rteParameters(value) value
#else
typedef struct _00c3eb95_helperAllocatorDma { _00c3eb95_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _00c3eb95_helperAllocatorDma(const _00c3eb95_helperAllocatorDma &) = delete; } _00c3eb95_helperAllocatorDma;
typedef struct _00c3eb95_arrayInfo { _00c3eb95_arrayInfo(RedRteHelperCreateArrayInfo* value): value(value) {}; RedRteHelperCreateArrayInfo* value; _00c3eb95_arrayInfo(const _00c3eb95_arrayInfo &) = delete; } _00c3eb95_arrayInfo;
typedef struct _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _00c3eb95_outRteHelperArray { _00c3eb95_outRteHelperArray(RedRteHelperArray* value): value(value) {}; RedRteHelperArray* value; _00c3eb95_outRteHelperArray(const _00c3eb95_outRteHelperArray &) = delete; } _00c3eb95_outRteHelperArray;
typedef struct _00c3eb95_outStatuses { _00c3eb95_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _00c3eb95_outStatuses(const _00c3eb95_outStatuses &) = delete; } _00c3eb95_outStatuses;
typedef struct _00c3eb95_optionalFile { _00c3eb95_optionalFile(char* value): value(value) {}; char* value; _00c3eb95_optionalFile(const _00c3eb95_optionalFile &) = delete; } _00c3eb95_optionalFile;
typedef struct _00c3eb95_optionalLine { _00c3eb95_optionalLine(int value): value(value) {}; int value; _00c3eb95_optionalLine(const _00c3eb95_optionalLine &) = delete; } _00c3eb95_optionalLine;
typedef struct _00c3eb95_optionalUserData { _00c3eb95_optionalUserData(void* value): value(value) {}; void* value; _00c3eb95_optionalUserData(const _00c3eb95_optionalUserData &) = delete; } _00c3eb95_optionalUserData;
typedef struct _00c3eb95_rteParameters { _00c3eb95_rteParameters(void* value): value(value) {}; void* value; _00c3eb95_rteParameters(const _00c3eb95_rteParameters &) = delete; } _00c3eb95_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaCreateArray(_00c3eb95_helperAllocatorDma & helperAllocatorDma, _00c3eb95_arrayInfo & arrayInfo, _00c3eb95_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _00c3eb95_outRteHelperArray & outRteHelperArray, _00c3eb95_outStatuses & outStatuses, _00c3eb95_optionalFile & optionalFile, _00c3eb95_optionalLine & optionalLine, _00c3eb95_optionalUserData & optionalUserData, _00c3eb95_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaCreateArray(helperAllocatorDma.value, arrayInfo.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaCreateImage redRteHelperAllocatorDmaCreateImage
#define _dffd8455_helperAllocatorDma(value) value
#define _dffd8455_imageInfo(value) value
#define _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _dffd8455_outRteHelperImage(value) value
#define _dffd8455_outStatuses(value) value
#define _dffd8455_optionalFile(value) value
#define _dffd8455_optionalLine(value) value
#define _dffd8455_optionalUserData(value) value
#define _dffd8455_rteParameters(value) value
#else
typedef struct _dffd8455_helperAllocatorDma { _dffd8455_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _dffd8455_helperAllocatorDma(const _dffd8455_helperAllocatorDma &) = delete; } _dffd8455_helperAllocatorDma;
typedef struct _dffd8455_imageInfo { _dffd8455_imageInfo(RedRteHelperCreateImageInfo* value): value(value) {}; RedRteHelperCreateImageInfo* value; _dffd8455_imageInfo(const _dffd8455_imageInfo &) = delete; } _dffd8455_imageInfo;
typedef struct _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _dffd8455_outRteHelperImage { _dffd8455_outRteHelperImage(RedRteHelperImage* value): value(value) {}; RedRteHelperImage* value; _dffd8455_outRteHelperImage(const _dffd8455_outRteHelperImage &) = delete; } _dffd8455_outRteHelperImage;
typedef struct _dffd8455_outStatuses { _dffd8455_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _dffd8455_outStatuses(const _dffd8455_outStatuses &) = delete; } _dffd8455_outStatuses;
typedef struct _dffd8455_optionalFile { _dffd8455_optionalFile(char* value): value(value) {}; char* value; _dffd8455_optionalFile(const _dffd8455_optionalFile &) = delete; } _dffd8455_optionalFile;
typedef struct _dffd8455_optionalLine { _dffd8455_optionalLine(int value): value(value) {}; int value; _dffd8455_optionalLine(const _dffd8455_optionalLine &) = delete; } _dffd8455_optionalLine;
typedef struct _dffd8455_optionalUserData { _dffd8455_optionalUserData(void* value): value(value) {}; void* value; _dffd8455_optionalUserData(const _dffd8455_optionalUserData &) = delete; } _dffd8455_optionalUserData;
typedef struct _dffd8455_rteParameters { _dffd8455_rteParameters(void* value): value(value) {}; void* value; _dffd8455_rteParameters(const _dffd8455_rteParameters &) = delete; } _dffd8455_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaCreateImage(_dffd8455_helperAllocatorDma & helperAllocatorDma, _dffd8455_imageInfo & imageInfo, _dffd8455_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _dffd8455_outRteHelperImage & outRteHelperImage, _dffd8455_outStatuses & outStatuses, _dffd8455_optionalFile & optionalFile, _dffd8455_optionalLine & optionalLine, _dffd8455_optionalUserData & optionalUserData, _dffd8455_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaCreateImage(helperAllocatorDma.value, imageInfo.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperImage.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaCreateArraySimple redRteHelperAllocatorDmaCreateArraySimple
#define _e34316c9_helperAllocatorDma(value) value
#define _e34316c9_arrayBytesCount(value) value
#define _e34316c9_arrayUsageFlags(value) value
#define _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _e34316c9_outRteHelperArray(value) value
#define _e34316c9_outStatuses(value) value
#define _e34316c9_optionalFile(value) value
#define _e34316c9_optionalLine(value) value
#define _e34316c9_optionalUserData(value) value
#define _e34316c9_rteParameters(value) value
#else
typedef struct _e34316c9_helperAllocatorDma { _e34316c9_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _e34316c9_helperAllocatorDma(const _e34316c9_helperAllocatorDma &) = delete; } _e34316c9_helperAllocatorDma;
typedef struct _e34316c9_arrayBytesCount { _e34316c9_arrayBytesCount(uint64_t value): value(value) {}; uint64_t value; _e34316c9_arrayBytesCount(const _e34316c9_arrayBytesCount &) = delete; } _e34316c9_arrayBytesCount;
typedef struct _e34316c9_arrayUsageFlags { _e34316c9_arrayUsageFlags(unsigned value): value(value) {}; unsigned value; _e34316c9_arrayUsageFlags(const _e34316c9_arrayUsageFlags &) = delete; } _e34316c9_arrayUsageFlags;
typedef struct _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _e34316c9_outRteHelperArray { _e34316c9_outRteHelperArray(RedRteHelperArray* value): value(value) {}; RedRteHelperArray* value; _e34316c9_outRteHelperArray(const _e34316c9_outRteHelperArray &) = delete; } _e34316c9_outRteHelperArray;
typedef struct _e34316c9_outStatuses { _e34316c9_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _e34316c9_outStatuses(const _e34316c9_outStatuses &) = delete; } _e34316c9_outStatuses;
typedef struct _e34316c9_optionalFile { _e34316c9_optionalFile(char* value): value(value) {}; char* value; _e34316c9_optionalFile(const _e34316c9_optionalFile &) = delete; } _e34316c9_optionalFile;
typedef struct _e34316c9_optionalLine { _e34316c9_optionalLine(int value): value(value) {}; int value; _e34316c9_optionalLine(const _e34316c9_optionalLine &) = delete; } _e34316c9_optionalLine;
typedef struct _e34316c9_optionalUserData { _e34316c9_optionalUserData(void* value): value(value) {}; void* value; _e34316c9_optionalUserData(const _e34316c9_optionalUserData &) = delete; } _e34316c9_optionalUserData;
typedef struct _e34316c9_rteParameters { _e34316c9_rteParameters(void* value): value(value) {}; void* value; _e34316c9_rteParameters(const _e34316c9_rteParameters &) = delete; } _e34316c9_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaCreateArraySimple(_e34316c9_helperAllocatorDma & helperAllocatorDma, _e34316c9_arrayBytesCount & arrayBytesCount, _e34316c9_arrayUsageFlags & arrayUsageFlags, _e34316c9_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _e34316c9_outRteHelperArray & outRteHelperArray, _e34316c9_outStatuses & outStatuses, _e34316c9_optionalFile & optionalFile, _e34316c9_optionalLine & optionalLine, _e34316c9_optionalUserData & optionalUserData, _e34316c9_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaCreateArraySimple(helperAllocatorDma.value, arrayBytesCount.value, arrayUsageFlags.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaCreateArraySimpleWithData redRteHelperAllocatorDmaCreateArraySimpleWithData
#define _9059ed9d_helperAllocatorDma(value) value
#define _9059ed9d_callsSetToUploadArrayData(value) value
#define _9059ed9d_arrayDataBytesCount(value) value
#define _9059ed9d_arrayData(value) value
#define _9059ed9d_arrayUsageFlags(value) value
#define _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _9059ed9d_outRteHelperArray(value) value
#define _9059ed9d_outStatuses(value) value
#define _9059ed9d_optionalFile(value) value
#define _9059ed9d_optionalLine(value) value
#define _9059ed9d_optionalUserData(value) value
#define _9059ed9d_rteParameters(value) value
#else
typedef struct _9059ed9d_helperAllocatorDma { _9059ed9d_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _9059ed9d_helperAllocatorDma(const _9059ed9d_helperAllocatorDma &) = delete; } _9059ed9d_helperAllocatorDma;
typedef struct _9059ed9d_callsSetToUploadArrayData { _9059ed9d_callsSetToUploadArrayData(RedHandleCalls value): value(value) {}; RedHandleCalls value; _9059ed9d_callsSetToUploadArrayData(const _9059ed9d_callsSetToUploadArrayData &) = delete; } _9059ed9d_callsSetToUploadArrayData;
typedef struct _9059ed9d_arrayDataBytesCount { _9059ed9d_arrayDataBytesCount(uint64_t value): value(value) {}; uint64_t value; _9059ed9d_arrayDataBytesCount(const _9059ed9d_arrayDataBytesCount &) = delete; } _9059ed9d_arrayDataBytesCount;
typedef struct _9059ed9d_arrayData { _9059ed9d_arrayData(void* value): value(value) {}; void* value; _9059ed9d_arrayData(const _9059ed9d_arrayData &) = delete; } _9059ed9d_arrayData;
typedef struct _9059ed9d_arrayUsageFlags { _9059ed9d_arrayUsageFlags(unsigned value): value(value) {}; unsigned value; _9059ed9d_arrayUsageFlags(const _9059ed9d_arrayUsageFlags &) = delete; } _9059ed9d_arrayUsageFlags;
typedef struct _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _9059ed9d_outRteHelperArray { _9059ed9d_outRteHelperArray(RedRteHelperArray* value): value(value) {}; RedRteHelperArray* value; _9059ed9d_outRteHelperArray(const _9059ed9d_outRteHelperArray &) = delete; } _9059ed9d_outRteHelperArray;
typedef struct _9059ed9d_outStatuses { _9059ed9d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _9059ed9d_outStatuses(const _9059ed9d_outStatuses &) = delete; } _9059ed9d_outStatuses;
typedef struct _9059ed9d_optionalFile { _9059ed9d_optionalFile(char* value): value(value) {}; char* value; _9059ed9d_optionalFile(const _9059ed9d_optionalFile &) = delete; } _9059ed9d_optionalFile;
typedef struct _9059ed9d_optionalLine { _9059ed9d_optionalLine(int value): value(value) {}; int value; _9059ed9d_optionalLine(const _9059ed9d_optionalLine &) = delete; } _9059ed9d_optionalLine;
typedef struct _9059ed9d_optionalUserData { _9059ed9d_optionalUserData(void* value): value(value) {}; void* value; _9059ed9d_optionalUserData(const _9059ed9d_optionalUserData &) = delete; } _9059ed9d_optionalUserData;
typedef struct _9059ed9d_rteParameters { _9059ed9d_rteParameters(void* value): value(value) {}; void* value; _9059ed9d_rteParameters(const _9059ed9d_rteParameters &) = delete; } _9059ed9d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaCreateArraySimpleWithData(_9059ed9d_helperAllocatorDma & helperAllocatorDma, _9059ed9d_callsSetToUploadArrayData & callsSetToUploadArrayData, _9059ed9d_arrayDataBytesCount & arrayDataBytesCount, _9059ed9d_arrayData & arrayData, _9059ed9d_arrayUsageFlags & arrayUsageFlags, _9059ed9d_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _9059ed9d_outRteHelperArray & outRteHelperArray, _9059ed9d_outStatuses & outStatuses, _9059ed9d_optionalFile & optionalFile, _9059ed9d_optionalLine & optionalLine, _9059ed9d_optionalUserData & optionalUserData, _9059ed9d_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaCreateArraySimpleWithData(helperAllocatorDma.value, callsSetToUploadArrayData.value, arrayDataBytesCount.value, arrayData.value, arrayUsageFlags.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaCreateImageSimpleWithData redRteHelperAllocatorDmaCreateImageSimpleWithData
#define _6a16c8d3_helperAllocatorDma(value) value
#define _6a16c8d3_callsSetToUploadImageData(value) value
#define _6a16c8d3_imageDataBytesCount(value) value
#define _6a16c8d3_imageData(value) value
#define _6a16c8d3_imageInfo(value) value
#define _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral(value) value
#define _6a16c8d3_outRteHelperImage(value) value
#define _6a16c8d3_outStatuses(value) value
#define _6a16c8d3_optionalFile(value) value
#define _6a16c8d3_optionalLine(value) value
#define _6a16c8d3_optionalUserData(value) value
#define _6a16c8d3_rteParameters(value) value
#else
typedef struct _6a16c8d3_helperAllocatorDma { _6a16c8d3_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _6a16c8d3_helperAllocatorDma(const _6a16c8d3_helperAllocatorDma &) = delete; } _6a16c8d3_helperAllocatorDma;
typedef struct _6a16c8d3_callsSetToUploadImageData { _6a16c8d3_callsSetToUploadImageData(RedHandleCalls value): value(value) {}; RedHandleCalls value; _6a16c8d3_callsSetToUploadImageData(const _6a16c8d3_callsSetToUploadImageData &) = delete; } _6a16c8d3_callsSetToUploadImageData;
typedef struct _6a16c8d3_imageDataBytesCount { _6a16c8d3_imageDataBytesCount(uint64_t value): value(value) {}; uint64_t value; _6a16c8d3_imageDataBytesCount(const _6a16c8d3_imageDataBytesCount &) = delete; } _6a16c8d3_imageDataBytesCount;
typedef struct _6a16c8d3_imageData { _6a16c8d3_imageData(void* value): value(value) {}; void* value; _6a16c8d3_imageData(const _6a16c8d3_imageData &) = delete; } _6a16c8d3_imageData;
typedef struct _6a16c8d3_imageInfo { _6a16c8d3_imageInfo(RedRteHelperCreateImageInfo* value): value(value) {}; RedRteHelperCreateImageInfo* value; _6a16c8d3_imageInfo(const _6a16c8d3_imageInfo &) = delete; } _6a16c8d3_imageInfo;
typedef struct _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral { _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral(unsigned value): value(value) {}; unsigned value; _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral(const _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral &) = delete; } _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral;
typedef struct _6a16c8d3_outRteHelperImage { _6a16c8d3_outRteHelperImage(RedRteHelperImage* value): value(value) {}; RedRteHelperImage* value; _6a16c8d3_outRteHelperImage(const _6a16c8d3_outRteHelperImage &) = delete; } _6a16c8d3_outRteHelperImage;
typedef struct _6a16c8d3_outStatuses { _6a16c8d3_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _6a16c8d3_outStatuses(const _6a16c8d3_outStatuses &) = delete; } _6a16c8d3_outStatuses;
typedef struct _6a16c8d3_optionalFile { _6a16c8d3_optionalFile(char* value): value(value) {}; char* value; _6a16c8d3_optionalFile(const _6a16c8d3_optionalFile &) = delete; } _6a16c8d3_optionalFile;
typedef struct _6a16c8d3_optionalLine { _6a16c8d3_optionalLine(int value): value(value) {}; int value; _6a16c8d3_optionalLine(const _6a16c8d3_optionalLine &) = delete; } _6a16c8d3_optionalLine;
typedef struct _6a16c8d3_optionalUserData { _6a16c8d3_optionalUserData(void* value): value(value) {}; void* value; _6a16c8d3_optionalUserData(const _6a16c8d3_optionalUserData &) = delete; } _6a16c8d3_optionalUserData;
typedef struct _6a16c8d3_rteParameters { _6a16c8d3_rteParameters(void* value): value(value) {}; void* value; _6a16c8d3_rteParameters(const _6a16c8d3_rteParameters &) = delete; } _6a16c8d3_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaCreateImageSimpleWithData(_6a16c8d3_helperAllocatorDma & helperAllocatorDma, _6a16c8d3_callsSetToUploadImageData & callsSetToUploadImageData, _6a16c8d3_imageDataBytesCount & imageDataBytesCount, _6a16c8d3_imageData & imageData, _6a16c8d3_imageInfo & imageInfo, _6a16c8d3_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral & imageLayoutSuggestedDefaultValueIsImageLayoutGeneral, _6a16c8d3_outRteHelperImage & outRteHelperImage, _6a16c8d3_outStatuses & outStatuses, _6a16c8d3_optionalFile & optionalFile, _6a16c8d3_optionalLine & optionalLine, _6a16c8d3_optionalUserData & optionalUserData, _6a16c8d3_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaCreateImageSimpleWithData(helperAllocatorDma.value, callsSetToUploadImageData.value, imageDataBytesCount.value, imageData.value, imageInfo.value, imageLayoutSuggestedDefaultValueIsImageLayoutGeneral.value, outRteHelperImage.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaDestroyArray redRteHelperAllocatorDmaDestroyArray
#define _2d758ca1_helperAllocatorDma(value) value
#define _2d758ca1_rteHelperArray(value) value
#define _2d758ca1_rteHelperAllocatorResourceMemory(value) value
#define _2d758ca1_outStatuses(value) value
#define _2d758ca1_optionalFile(value) value
#define _2d758ca1_optionalLine(value) value
#define _2d758ca1_optionalUserData(value) value
#define _2d758ca1_rteParameters(value) value
#else
typedef struct _2d758ca1_helperAllocatorDma { _2d758ca1_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _2d758ca1_helperAllocatorDma(const _2d758ca1_helperAllocatorDma &) = delete; } _2d758ca1_helperAllocatorDma;
typedef struct _2d758ca1_rteHelperArray { _2d758ca1_rteHelperArray(RedHandleArray value): value(value) {}; RedHandleArray value; _2d758ca1_rteHelperArray(const _2d758ca1_rteHelperArray &) = delete; } _2d758ca1_rteHelperArray;
typedef struct _2d758ca1_rteHelperAllocatorResourceMemory { _2d758ca1_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _2d758ca1_rteHelperAllocatorResourceMemory(const _2d758ca1_rteHelperAllocatorResourceMemory &) = delete; } _2d758ca1_rteHelperAllocatorResourceMemory;
typedef struct _2d758ca1_outStatuses { _2d758ca1_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _2d758ca1_outStatuses(const _2d758ca1_outStatuses &) = delete; } _2d758ca1_outStatuses;
typedef struct _2d758ca1_optionalFile { _2d758ca1_optionalFile(char* value): value(value) {}; char* value; _2d758ca1_optionalFile(const _2d758ca1_optionalFile &) = delete; } _2d758ca1_optionalFile;
typedef struct _2d758ca1_optionalLine { _2d758ca1_optionalLine(int value): value(value) {}; int value; _2d758ca1_optionalLine(const _2d758ca1_optionalLine &) = delete; } _2d758ca1_optionalLine;
typedef struct _2d758ca1_optionalUserData { _2d758ca1_optionalUserData(void* value): value(value) {}; void* value; _2d758ca1_optionalUserData(const _2d758ca1_optionalUserData &) = delete; } _2d758ca1_optionalUserData;
typedef struct _2d758ca1_rteParameters { _2d758ca1_rteParameters(void* value): value(value) {}; void* value; _2d758ca1_rteParameters(const _2d758ca1_rteParameters &) = delete; } _2d758ca1_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaDestroyArray(_2d758ca1_helperAllocatorDma & helperAllocatorDma, _2d758ca1_rteHelperArray & rteHelperArray, _2d758ca1_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _2d758ca1_outStatuses & outStatuses, _2d758ca1_optionalFile & optionalFile, _2d758ca1_optionalLine & optionalLine, _2d758ca1_optionalUserData & optionalUserData, _2d758ca1_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaDestroyArray(helperAllocatorDma.value, rteHelperArray.value, rteHelperAllocatorResourceMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaDestroyImage redRteHelperAllocatorDmaDestroyImage
#define _d6f5518e_helperAllocatorDma(value) value
#define _d6f5518e_rteHelperImage(value) value
#define _d6f5518e_rteHelperAllocatorResourceMemory(value) value
#define _d6f5518e_outStatuses(value) value
#define _d6f5518e_optionalFile(value) value
#define _d6f5518e_optionalLine(value) value
#define _d6f5518e_optionalUserData(value) value
#define _d6f5518e_rteParameters(value) value
#else
typedef struct _d6f5518e_helperAllocatorDma { _d6f5518e_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _d6f5518e_helperAllocatorDma(const _d6f5518e_helperAllocatorDma &) = delete; } _d6f5518e_helperAllocatorDma;
typedef struct _d6f5518e_rteHelperImage { _d6f5518e_rteHelperImage(RedHandleImage value): value(value) {}; RedHandleImage value; _d6f5518e_rteHelperImage(const _d6f5518e_rteHelperImage &) = delete; } _d6f5518e_rteHelperImage;
typedef struct _d6f5518e_rteHelperAllocatorResourceMemory { _d6f5518e_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _d6f5518e_rteHelperAllocatorResourceMemory(const _d6f5518e_rteHelperAllocatorResourceMemory &) = delete; } _d6f5518e_rteHelperAllocatorResourceMemory;
typedef struct _d6f5518e_outStatuses { _d6f5518e_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _d6f5518e_outStatuses(const _d6f5518e_outStatuses &) = delete; } _d6f5518e_outStatuses;
typedef struct _d6f5518e_optionalFile { _d6f5518e_optionalFile(char* value): value(value) {}; char* value; _d6f5518e_optionalFile(const _d6f5518e_optionalFile &) = delete; } _d6f5518e_optionalFile;
typedef struct _d6f5518e_optionalLine { _d6f5518e_optionalLine(int value): value(value) {}; int value; _d6f5518e_optionalLine(const _d6f5518e_optionalLine &) = delete; } _d6f5518e_optionalLine;
typedef struct _d6f5518e_optionalUserData { _d6f5518e_optionalUserData(void* value): value(value) {}; void* value; _d6f5518e_optionalUserData(const _d6f5518e_optionalUserData &) = delete; } _d6f5518e_optionalUserData;
typedef struct _d6f5518e_rteParameters { _d6f5518e_rteParameters(void* value): value(value) {}; void* value; _d6f5518e_rteParameters(const _d6f5518e_rteParameters &) = delete; } _d6f5518e_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaDestroyImage(_d6f5518e_helperAllocatorDma & helperAllocatorDma, _d6f5518e_rteHelperImage & rteHelperImage, _d6f5518e_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _d6f5518e_outStatuses & outStatuses, _d6f5518e_optionalFile & optionalFile, _d6f5518e_optionalLine & optionalLine, _d6f5518e_optionalUserData & optionalUserData, _d6f5518e_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaDestroyImage(helperAllocatorDma.value, rteHelperImage.value, rteHelperAllocatorResourceMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaFinalizeAndReleaseStagingMemory redRteHelperAllocatorDmaFinalizeAndReleaseStagingMemory
#define _b8199348_helperAllocatorDma(value) value
#define _b8199348_optionalCpuSignal(value) value
#define _b8199348_outStatuses(value) value
#define _b8199348_optionalFile(value) value
#define _b8199348_optionalLine(value) value
#define _b8199348_optionalUserData(value) value
#define _b8199348_rteParameters(value) value
#else
typedef struct _b8199348_helperAllocatorDma { _b8199348_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _b8199348_helperAllocatorDma(const _b8199348_helperAllocatorDma &) = delete; } _b8199348_helperAllocatorDma;
typedef struct _b8199348_optionalCpuSignal { _b8199348_optionalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _b8199348_optionalCpuSignal(const _b8199348_optionalCpuSignal &) = delete; } _b8199348_optionalCpuSignal;
typedef struct _b8199348_outStatuses { _b8199348_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _b8199348_outStatuses(const _b8199348_outStatuses &) = delete; } _b8199348_outStatuses;
typedef struct _b8199348_optionalFile { _b8199348_optionalFile(char* value): value(value) {}; char* value; _b8199348_optionalFile(const _b8199348_optionalFile &) = delete; } _b8199348_optionalFile;
typedef struct _b8199348_optionalLine { _b8199348_optionalLine(int value): value(value) {}; int value; _b8199348_optionalLine(const _b8199348_optionalLine &) = delete; } _b8199348_optionalLine;
typedef struct _b8199348_optionalUserData { _b8199348_optionalUserData(void* value): value(value) {}; void* value; _b8199348_optionalUserData(const _b8199348_optionalUserData &) = delete; } _b8199348_optionalUserData;
typedef struct _b8199348_rteParameters { _b8199348_rteParameters(void* value): value(value) {}; void* value; _b8199348_rteParameters(const _b8199348_rteParameters &) = delete; } _b8199348_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaFinalizeAndReleaseStagingMemory(_b8199348_helperAllocatorDma & helperAllocatorDma, _b8199348_optionalCpuSignal & optionalCpuSignal, _b8199348_outStatuses & outStatuses, _b8199348_optionalFile & optionalFile, _b8199348_optionalLine & optionalLine, _b8199348_optionalUserData & optionalUserData, _b8199348_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaFinalizeAndReleaseStagingMemory(helperAllocatorDma.value, optionalCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaFinalizeStagingMemory redRteHelperAllocatorDmaFinalizeStagingMemory
#define _78c802c1_helperAllocatorDma(value) value
#define _78c802c1_optionalCpuSignal(value) value
#define _78c802c1_outStatuses(value) value
#define _78c802c1_optionalFile(value) value
#define _78c802c1_optionalLine(value) value
#define _78c802c1_optionalUserData(value) value
#define _78c802c1_rteParameters(value) value
#else
typedef struct _78c802c1_helperAllocatorDma { _78c802c1_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _78c802c1_helperAllocatorDma(const _78c802c1_helperAllocatorDma &) = delete; } _78c802c1_helperAllocatorDma;
typedef struct _78c802c1_optionalCpuSignal { _78c802c1_optionalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _78c802c1_optionalCpuSignal(const _78c802c1_optionalCpuSignal &) = delete; } _78c802c1_optionalCpuSignal;
typedef struct _78c802c1_outStatuses { _78c802c1_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _78c802c1_outStatuses(const _78c802c1_outStatuses &) = delete; } _78c802c1_outStatuses;
typedef struct _78c802c1_optionalFile { _78c802c1_optionalFile(char* value): value(value) {}; char* value; _78c802c1_optionalFile(const _78c802c1_optionalFile &) = delete; } _78c802c1_optionalFile;
typedef struct _78c802c1_optionalLine { _78c802c1_optionalLine(int value): value(value) {}; int value; _78c802c1_optionalLine(const _78c802c1_optionalLine &) = delete; } _78c802c1_optionalLine;
typedef struct _78c802c1_optionalUserData { _78c802c1_optionalUserData(void* value): value(value) {}; void* value; _78c802c1_optionalUserData(const _78c802c1_optionalUserData &) = delete; } _78c802c1_optionalUserData;
typedef struct _78c802c1_rteParameters { _78c802c1_rteParameters(void* value): value(value) {}; void* value; _78c802c1_rteParameters(const _78c802c1_rteParameters &) = delete; } _78c802c1_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaFinalizeStagingMemory(_78c802c1_helperAllocatorDma & helperAllocatorDma, _78c802c1_optionalCpuSignal & optionalCpuSignal, _78c802c1_outStatuses & outStatuses, _78c802c1_optionalFile & optionalFile, _78c802c1_optionalLine & optionalLine, _78c802c1_optionalUserData & optionalUserData, _78c802c1_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaFinalizeStagingMemory(helperAllocatorDma.value, optionalCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaReleaseStagingMemory redRteHelperAllocatorDmaReleaseStagingMemory
#define _b10d824d_helperAllocatorDma(value) value
#define _b10d824d_outStatuses(value) value
#define _b10d824d_optionalFile(value) value
#define _b10d824d_optionalLine(value) value
#define _b10d824d_optionalUserData(value) value
#define _b10d824d_rteParameters(value) value
#else
typedef struct _b10d824d_helperAllocatorDma { _b10d824d_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _b10d824d_helperAllocatorDma(const _b10d824d_helperAllocatorDma &) = delete; } _b10d824d_helperAllocatorDma;
typedef struct _b10d824d_outStatuses { _b10d824d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _b10d824d_outStatuses(const _b10d824d_outStatuses &) = delete; } _b10d824d_outStatuses;
typedef struct _b10d824d_optionalFile { _b10d824d_optionalFile(char* value): value(value) {}; char* value; _b10d824d_optionalFile(const _b10d824d_optionalFile &) = delete; } _b10d824d_optionalFile;
typedef struct _b10d824d_optionalLine { _b10d824d_optionalLine(int value): value(value) {}; int value; _b10d824d_optionalLine(const _b10d824d_optionalLine &) = delete; } _b10d824d_optionalLine;
typedef struct _b10d824d_optionalUserData { _b10d824d_optionalUserData(void* value): value(value) {}; void* value; _b10d824d_optionalUserData(const _b10d824d_optionalUserData &) = delete; } _b10d824d_optionalUserData;
typedef struct _b10d824d_rteParameters { _b10d824d_rteParameters(void* value): value(value) {}; void* value; _b10d824d_rteParameters(const _b10d824d_rteParameters &) = delete; } _b10d824d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaReleaseStagingMemory(_b10d824d_helperAllocatorDma & helperAllocatorDma, _b10d824d_outStatuses & outStatuses, _b10d824d_optionalFile & optionalFile, _b10d824d_optionalLine & optionalLine, _b10d824d_optionalUserData & optionalUserData, _b10d824d_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaReleaseStagingMemory(helperAllocatorDma.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaMapArray redRteHelperAllocatorDmaMapArray
#define _91483c45_helperAllocatorDma(value) value
#define _91483c45_rteHelperArray(value) value
#define _91483c45_rteHelperAllocatorResourceMemory(value) value
#define _91483c45_outVolatilePointer(value) value
#define _91483c45_outStatuses(value) value
#define _91483c45_optionalFile(value) value
#define _91483c45_optionalLine(value) value
#define _91483c45_optionalUserData(value) value
#define _91483c45_rteParameters(value) value
#else
typedef struct _91483c45_helperAllocatorDma { _91483c45_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _91483c45_helperAllocatorDma(const _91483c45_helperAllocatorDma &) = delete; } _91483c45_helperAllocatorDma;
typedef struct _91483c45_rteHelperArray { _91483c45_rteHelperArray(RedHandleArray value): value(value) {}; RedHandleArray value; _91483c45_rteHelperArray(const _91483c45_rteHelperArray &) = delete; } _91483c45_rteHelperArray;
typedef struct _91483c45_rteHelperAllocatorResourceMemory { _91483c45_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _91483c45_rteHelperAllocatorResourceMemory(const _91483c45_rteHelperAllocatorResourceMemory &) = delete; } _91483c45_rteHelperAllocatorResourceMemory;
typedef struct _91483c45_outVolatilePointer { _91483c45_outVolatilePointer(void** value): value(value) {}; void** value; _91483c45_outVolatilePointer(const _91483c45_outVolatilePointer &) = delete; } _91483c45_outVolatilePointer;
typedef struct _91483c45_outStatuses { _91483c45_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _91483c45_outStatuses(const _91483c45_outStatuses &) = delete; } _91483c45_outStatuses;
typedef struct _91483c45_optionalFile { _91483c45_optionalFile(char* value): value(value) {}; char* value; _91483c45_optionalFile(const _91483c45_optionalFile &) = delete; } _91483c45_optionalFile;
typedef struct _91483c45_optionalLine { _91483c45_optionalLine(int value): value(value) {}; int value; _91483c45_optionalLine(const _91483c45_optionalLine &) = delete; } _91483c45_optionalLine;
typedef struct _91483c45_optionalUserData { _91483c45_optionalUserData(void* value): value(value) {}; void* value; _91483c45_optionalUserData(const _91483c45_optionalUserData &) = delete; } _91483c45_optionalUserData;
typedef struct _91483c45_rteParameters { _91483c45_rteParameters(void* value): value(value) {}; void* value; _91483c45_rteParameters(const _91483c45_rteParameters &) = delete; } _91483c45_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaMapArray(_91483c45_helperAllocatorDma & helperAllocatorDma, _91483c45_rteHelperArray & rteHelperArray, _91483c45_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _91483c45_outVolatilePointer & outVolatilePointer, _91483c45_outStatuses & outStatuses, _91483c45_optionalFile & optionalFile, _91483c45_optionalLine & optionalLine, _91483c45_optionalUserData & optionalUserData, _91483c45_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaMapArray(helperAllocatorDma.value, rteHelperArray.value, rteHelperAllocatorResourceMemory.value, outVolatilePointer.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorDmaUnmapArray redRteHelperAllocatorDmaUnmapArray
#define _5a1c9b78_helperAllocatorDma(value) value
#define _5a1c9b78_rteHelperArray(value) value
#define _5a1c9b78_rteHelperAllocatorResourceMemory(value) value
#define _5a1c9b78_outStatuses(value) value
#define _5a1c9b78_optionalFile(value) value
#define _5a1c9b78_optionalLine(value) value
#define _5a1c9b78_optionalUserData(value) value
#define _5a1c9b78_rteParameters(value) value
#else
typedef struct _5a1c9b78_helperAllocatorDma { _5a1c9b78_helperAllocatorDma(RedRteHandleHelperAllocatorDma value): value(value) {}; RedRteHandleHelperAllocatorDma value; _5a1c9b78_helperAllocatorDma(const _5a1c9b78_helperAllocatorDma &) = delete; } _5a1c9b78_helperAllocatorDma;
typedef struct _5a1c9b78_rteHelperArray { _5a1c9b78_rteHelperArray(RedHandleArray value): value(value) {}; RedHandleArray value; _5a1c9b78_rteHelperArray(const _5a1c9b78_rteHelperArray &) = delete; } _5a1c9b78_rteHelperArray;
typedef struct _5a1c9b78_rteHelperAllocatorResourceMemory { _5a1c9b78_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _5a1c9b78_rteHelperAllocatorResourceMemory(const _5a1c9b78_rteHelperAllocatorResourceMemory &) = delete; } _5a1c9b78_rteHelperAllocatorResourceMemory;
typedef struct _5a1c9b78_outStatuses { _5a1c9b78_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _5a1c9b78_outStatuses(const _5a1c9b78_outStatuses &) = delete; } _5a1c9b78_outStatuses;
typedef struct _5a1c9b78_optionalFile { _5a1c9b78_optionalFile(char* value): value(value) {}; char* value; _5a1c9b78_optionalFile(const _5a1c9b78_optionalFile &) = delete; } _5a1c9b78_optionalFile;
typedef struct _5a1c9b78_optionalLine { _5a1c9b78_optionalLine(int value): value(value) {}; int value; _5a1c9b78_optionalLine(const _5a1c9b78_optionalLine &) = delete; } _5a1c9b78_optionalLine;
typedef struct _5a1c9b78_optionalUserData { _5a1c9b78_optionalUserData(void* value): value(value) {}; void* value; _5a1c9b78_optionalUserData(const _5a1c9b78_optionalUserData &) = delete; } _5a1c9b78_optionalUserData;
typedef struct _5a1c9b78_rteParameters { _5a1c9b78_rteParameters(void* value): value(value) {}; void* value; _5a1c9b78_rteParameters(const _5a1c9b78_rteParameters &) = delete; } _5a1c9b78_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorDmaUnmapArray(_5a1c9b78_helperAllocatorDma & helperAllocatorDma, _5a1c9b78_rteHelperArray & rteHelperArray, _5a1c9b78_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _5a1c9b78_outStatuses & outStatuses, _5a1c9b78_optionalFile & optionalFile, _5a1c9b78_optionalLine & optionalLine, _5a1c9b78_optionalUserData & optionalUserData, _5a1c9b78_rteParameters & rteParameters) {
  return redRteHelperAllocatorDmaUnmapArray(helperAllocatorDma.value, rteHelperArray.value, rteHelperAllocatorResourceMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateHelperAllocatorVma redRteCreateHelperAllocatorVma
#define _815f30e5_rteContext(value) value
#define _815f30e5_outHelperAllocatorVma(value) value
#define _815f30e5_outStatuses(value) value
#define _815f30e5_optionalFile(value) value
#define _815f30e5_optionalLine(value) value
#define _815f30e5_optionalUserData(value) value
#define _815f30e5_rteParameters(value) value
#else
typedef struct _815f30e5_rteContext { _815f30e5_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _815f30e5_rteContext(const _815f30e5_rteContext &) = delete; } _815f30e5_rteContext;
typedef struct _815f30e5_outHelperAllocatorVma { _815f30e5_outHelperAllocatorVma(RedRteHandleHelperAllocatorVma* value): value(value) {}; RedRteHandleHelperAllocatorVma* value; _815f30e5_outHelperAllocatorVma(const _815f30e5_outHelperAllocatorVma &) = delete; } _815f30e5_outHelperAllocatorVma;
typedef struct _815f30e5_outStatuses { _815f30e5_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _815f30e5_outStatuses(const _815f30e5_outStatuses &) = delete; } _815f30e5_outStatuses;
typedef struct _815f30e5_optionalFile { _815f30e5_optionalFile(char* value): value(value) {}; char* value; _815f30e5_optionalFile(const _815f30e5_optionalFile &) = delete; } _815f30e5_optionalFile;
typedef struct _815f30e5_optionalLine { _815f30e5_optionalLine(int value): value(value) {}; int value; _815f30e5_optionalLine(const _815f30e5_optionalLine &) = delete; } _815f30e5_optionalLine;
typedef struct _815f30e5_optionalUserData { _815f30e5_optionalUserData(void* value): value(value) {}; void* value; _815f30e5_optionalUserData(const _815f30e5_optionalUserData &) = delete; } _815f30e5_optionalUserData;
typedef struct _815f30e5_rteParameters { _815f30e5_rteParameters(void* value): value(value) {}; void* value; _815f30e5_rteParameters(const _815f30e5_rteParameters &) = delete; } _815f30e5_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateHelperAllocatorVma(_815f30e5_rteContext & rteContext, _815f30e5_outHelperAllocatorVma & outHelperAllocatorVma, _815f30e5_outStatuses & outStatuses, _815f30e5_optionalFile & optionalFile, _815f30e5_optionalLine & optionalLine, _815f30e5_optionalUserData & optionalUserData, _815f30e5_rteParameters & rteParameters) {
  return redRteCreateHelperAllocatorVma(rteContext.value, outHelperAllocatorVma.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyHelperAllocatorVma redRteDestroyHelperAllocatorVma
#define _f21d1fb2_helperAllocatorVma(value) value
#define _f21d1fb2_optionalFile(value) value
#define _f21d1fb2_optionalLine(value) value
#define _f21d1fb2_optionalUserData(value) value
#define _f21d1fb2_rteParameters(value) value
#else
typedef struct _f21d1fb2_helperAllocatorVma { _f21d1fb2_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _f21d1fb2_helperAllocatorVma(const _f21d1fb2_helperAllocatorVma &) = delete; } _f21d1fb2_helperAllocatorVma;
typedef struct _f21d1fb2_optionalFile { _f21d1fb2_optionalFile(char* value): value(value) {}; char* value; _f21d1fb2_optionalFile(const _f21d1fb2_optionalFile &) = delete; } _f21d1fb2_optionalFile;
typedef struct _f21d1fb2_optionalLine { _f21d1fb2_optionalLine(int value): value(value) {}; int value; _f21d1fb2_optionalLine(const _f21d1fb2_optionalLine &) = delete; } _f21d1fb2_optionalLine;
typedef struct _f21d1fb2_optionalUserData { _f21d1fb2_optionalUserData(void* value): value(value) {}; void* value; _f21d1fb2_optionalUserData(const _f21d1fb2_optionalUserData &) = delete; } _f21d1fb2_optionalUserData;
typedef struct _f21d1fb2_rteParameters { _f21d1fb2_rteParameters(void* value): value(value) {}; void* value; _f21d1fb2_rteParameters(const _f21d1fb2_rteParameters &) = delete; } _f21d1fb2_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyHelperAllocatorVma(_f21d1fb2_helperAllocatorVma & helperAllocatorVma, _f21d1fb2_optionalFile & optionalFile, _f21d1fb2_optionalLine & optionalLine, _f21d1fb2_optionalUserData & optionalUserData, _f21d1fb2_rteParameters & rteParameters) {
  return redRteDestroyHelperAllocatorVma(helperAllocatorVma.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaCreateArray redRteHelperAllocatorVmaCreateArray
#define _abb54f78_helperAllocatorVma(value) value
#define _abb54f78_arrayInfo(value) value
#define _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _abb54f78_outRteHelperArray(value) value
#define _abb54f78_outStatuses(value) value
#define _abb54f78_optionalFile(value) value
#define _abb54f78_optionalLine(value) value
#define _abb54f78_optionalUserData(value) value
#define _abb54f78_rteParameters(value) value
#else
typedef struct _abb54f78_helperAllocatorVma { _abb54f78_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _abb54f78_helperAllocatorVma(const _abb54f78_helperAllocatorVma &) = delete; } _abb54f78_helperAllocatorVma;
typedef struct _abb54f78_arrayInfo { _abb54f78_arrayInfo(RedRteHelperCreateArrayInfo* value): value(value) {}; RedRteHelperCreateArrayInfo* value; _abb54f78_arrayInfo(const _abb54f78_arrayInfo &) = delete; } _abb54f78_arrayInfo;
typedef struct _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _abb54f78_outRteHelperArray { _abb54f78_outRteHelperArray(RedRteHelperArray* value): value(value) {}; RedRteHelperArray* value; _abb54f78_outRteHelperArray(const _abb54f78_outRteHelperArray &) = delete; } _abb54f78_outRteHelperArray;
typedef struct _abb54f78_outStatuses { _abb54f78_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _abb54f78_outStatuses(const _abb54f78_outStatuses &) = delete; } _abb54f78_outStatuses;
typedef struct _abb54f78_optionalFile { _abb54f78_optionalFile(char* value): value(value) {}; char* value; _abb54f78_optionalFile(const _abb54f78_optionalFile &) = delete; } _abb54f78_optionalFile;
typedef struct _abb54f78_optionalLine { _abb54f78_optionalLine(int value): value(value) {}; int value; _abb54f78_optionalLine(const _abb54f78_optionalLine &) = delete; } _abb54f78_optionalLine;
typedef struct _abb54f78_optionalUserData { _abb54f78_optionalUserData(void* value): value(value) {}; void* value; _abb54f78_optionalUserData(const _abb54f78_optionalUserData &) = delete; } _abb54f78_optionalUserData;
typedef struct _abb54f78_rteParameters { _abb54f78_rteParameters(void* value): value(value) {}; void* value; _abb54f78_rteParameters(const _abb54f78_rteParameters &) = delete; } _abb54f78_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaCreateArray(_abb54f78_helperAllocatorVma & helperAllocatorVma, _abb54f78_arrayInfo & arrayInfo, _abb54f78_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _abb54f78_outRteHelperArray & outRteHelperArray, _abb54f78_outStatuses & outStatuses, _abb54f78_optionalFile & optionalFile, _abb54f78_optionalLine & optionalLine, _abb54f78_optionalUserData & optionalUserData, _abb54f78_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaCreateArray(helperAllocatorVma.value, arrayInfo.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaCreateImage redRteHelperAllocatorVmaCreateImage
#define _ecda5ec4_helperAllocatorVma(value) value
#define _ecda5ec4_imageInfo(value) value
#define _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _ecda5ec4_outRteHelperImage(value) value
#define _ecda5ec4_outStatuses(value) value
#define _ecda5ec4_optionalFile(value) value
#define _ecda5ec4_optionalLine(value) value
#define _ecda5ec4_optionalUserData(value) value
#define _ecda5ec4_rteParameters(value) value
#else
typedef struct _ecda5ec4_helperAllocatorVma { _ecda5ec4_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _ecda5ec4_helperAllocatorVma(const _ecda5ec4_helperAllocatorVma &) = delete; } _ecda5ec4_helperAllocatorVma;
typedef struct _ecda5ec4_imageInfo { _ecda5ec4_imageInfo(RedRteHelperCreateImageInfo* value): value(value) {}; RedRteHelperCreateImageInfo* value; _ecda5ec4_imageInfo(const _ecda5ec4_imageInfo &) = delete; } _ecda5ec4_imageInfo;
typedef struct _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _ecda5ec4_outRteHelperImage { _ecda5ec4_outRteHelperImage(RedRteHelperImage* value): value(value) {}; RedRteHelperImage* value; _ecda5ec4_outRteHelperImage(const _ecda5ec4_outRteHelperImage &) = delete; } _ecda5ec4_outRteHelperImage;
typedef struct _ecda5ec4_outStatuses { _ecda5ec4_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _ecda5ec4_outStatuses(const _ecda5ec4_outStatuses &) = delete; } _ecda5ec4_outStatuses;
typedef struct _ecda5ec4_optionalFile { _ecda5ec4_optionalFile(char* value): value(value) {}; char* value; _ecda5ec4_optionalFile(const _ecda5ec4_optionalFile &) = delete; } _ecda5ec4_optionalFile;
typedef struct _ecda5ec4_optionalLine { _ecda5ec4_optionalLine(int value): value(value) {}; int value; _ecda5ec4_optionalLine(const _ecda5ec4_optionalLine &) = delete; } _ecda5ec4_optionalLine;
typedef struct _ecda5ec4_optionalUserData { _ecda5ec4_optionalUserData(void* value): value(value) {}; void* value; _ecda5ec4_optionalUserData(const _ecda5ec4_optionalUserData &) = delete; } _ecda5ec4_optionalUserData;
typedef struct _ecda5ec4_rteParameters { _ecda5ec4_rteParameters(void* value): value(value) {}; void* value; _ecda5ec4_rteParameters(const _ecda5ec4_rteParameters &) = delete; } _ecda5ec4_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaCreateImage(_ecda5ec4_helperAllocatorVma & helperAllocatorVma, _ecda5ec4_imageInfo & imageInfo, _ecda5ec4_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _ecda5ec4_outRteHelperImage & outRteHelperImage, _ecda5ec4_outStatuses & outStatuses, _ecda5ec4_optionalFile & optionalFile, _ecda5ec4_optionalLine & optionalLine, _ecda5ec4_optionalUserData & optionalUserData, _ecda5ec4_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaCreateImage(helperAllocatorVma.value, imageInfo.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperImage.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaCreateArraySimple redRteHelperAllocatorVmaCreateArraySimple
#define _4e44cab7_helperAllocatorVma(value) value
#define _4e44cab7_arrayBytesCount(value) value
#define _4e44cab7_arrayUsageFlags(value) value
#define _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _4e44cab7_outRteHelperArray(value) value
#define _4e44cab7_outStatuses(value) value
#define _4e44cab7_optionalFile(value) value
#define _4e44cab7_optionalLine(value) value
#define _4e44cab7_optionalUserData(value) value
#define _4e44cab7_rteParameters(value) value
#else
typedef struct _4e44cab7_helperAllocatorVma { _4e44cab7_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _4e44cab7_helperAllocatorVma(const _4e44cab7_helperAllocatorVma &) = delete; } _4e44cab7_helperAllocatorVma;
typedef struct _4e44cab7_arrayBytesCount { _4e44cab7_arrayBytesCount(uint64_t value): value(value) {}; uint64_t value; _4e44cab7_arrayBytesCount(const _4e44cab7_arrayBytesCount &) = delete; } _4e44cab7_arrayBytesCount;
typedef struct _4e44cab7_arrayUsageFlags { _4e44cab7_arrayUsageFlags(unsigned value): value(value) {}; unsigned value; _4e44cab7_arrayUsageFlags(const _4e44cab7_arrayUsageFlags &) = delete; } _4e44cab7_arrayUsageFlags;
typedef struct _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _4e44cab7_outRteHelperArray { _4e44cab7_outRteHelperArray(RedRteHelperArray* value): value(value) {}; RedRteHelperArray* value; _4e44cab7_outRteHelperArray(const _4e44cab7_outRteHelperArray &) = delete; } _4e44cab7_outRteHelperArray;
typedef struct _4e44cab7_outStatuses { _4e44cab7_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _4e44cab7_outStatuses(const _4e44cab7_outStatuses &) = delete; } _4e44cab7_outStatuses;
typedef struct _4e44cab7_optionalFile { _4e44cab7_optionalFile(char* value): value(value) {}; char* value; _4e44cab7_optionalFile(const _4e44cab7_optionalFile &) = delete; } _4e44cab7_optionalFile;
typedef struct _4e44cab7_optionalLine { _4e44cab7_optionalLine(int value): value(value) {}; int value; _4e44cab7_optionalLine(const _4e44cab7_optionalLine &) = delete; } _4e44cab7_optionalLine;
typedef struct _4e44cab7_optionalUserData { _4e44cab7_optionalUserData(void* value): value(value) {}; void* value; _4e44cab7_optionalUserData(const _4e44cab7_optionalUserData &) = delete; } _4e44cab7_optionalUserData;
typedef struct _4e44cab7_rteParameters { _4e44cab7_rteParameters(void* value): value(value) {}; void* value; _4e44cab7_rteParameters(const _4e44cab7_rteParameters &) = delete; } _4e44cab7_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaCreateArraySimple(_4e44cab7_helperAllocatorVma & helperAllocatorVma, _4e44cab7_arrayBytesCount & arrayBytesCount, _4e44cab7_arrayUsageFlags & arrayUsageFlags, _4e44cab7_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _4e44cab7_outRteHelperArray & outRteHelperArray, _4e44cab7_outStatuses & outStatuses, _4e44cab7_optionalFile & optionalFile, _4e44cab7_optionalLine & optionalLine, _4e44cab7_optionalUserData & optionalUserData, _4e44cab7_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaCreateArraySimple(helperAllocatorVma.value, arrayBytesCount.value, arrayUsageFlags.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaCreateArraySimpleWithData redRteHelperAllocatorVmaCreateArraySimpleWithData
#define _792da977_helperAllocatorVma(value) value
#define _792da977_callsSetToUploadArrayData(value) value
#define _792da977_arrayDataBytesCount(value) value
#define _792da977_arrayData(value) value
#define _792da977_arrayUsageFlags(value) value
#define _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(value) value
#define _792da977_outRteHelperArray(value) value
#define _792da977_outStatuses(value) value
#define _792da977_optionalFile(value) value
#define _792da977_optionalLine(value) value
#define _792da977_optionalUserData(value) value
#define _792da977_rteParameters(value) value
#else
typedef struct _792da977_helperAllocatorVma { _792da977_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _792da977_helperAllocatorVma(const _792da977_helperAllocatorVma &) = delete; } _792da977_helperAllocatorVma;
typedef struct _792da977_callsSetToUploadArrayData { _792da977_callsSetToUploadArrayData(RedHandleCalls value): value(value) {}; RedHandleCalls value; _792da977_callsSetToUploadArrayData(const _792da977_callsSetToUploadArrayData &) = delete; } _792da977_callsSetToUploadArrayData;
typedef struct _792da977_arrayDataBytesCount { _792da977_arrayDataBytesCount(uint64_t value): value(value) {}; uint64_t value; _792da977_arrayDataBytesCount(const _792da977_arrayDataBytesCount &) = delete; } _792da977_arrayDataBytesCount;
typedef struct _792da977_arrayData { _792da977_arrayData(void* value): value(value) {}; void* value; _792da977_arrayData(const _792da977_arrayData &) = delete; } _792da977_arrayData;
typedef struct _792da977_arrayUsageFlags { _792da977_arrayUsageFlags(unsigned value): value(value) {}; unsigned value; _792da977_arrayUsageFlags(const _792da977_arrayUsageFlags &) = delete; } _792da977_arrayUsageFlags;
typedef struct _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit { _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(unsigned value): value(value) {}; unsigned value; _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit(const _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit &) = delete; } _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit;
typedef struct _792da977_outRteHelperArray { _792da977_outRteHelperArray(RedRteHelperArray* value): value(value) {}; RedRteHelperArray* value; _792da977_outRteHelperArray(const _792da977_outRteHelperArray &) = delete; } _792da977_outRteHelperArray;
typedef struct _792da977_outStatuses { _792da977_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _792da977_outStatuses(const _792da977_outStatuses &) = delete; } _792da977_outStatuses;
typedef struct _792da977_optionalFile { _792da977_optionalFile(char* value): value(value) {}; char* value; _792da977_optionalFile(const _792da977_optionalFile &) = delete; } _792da977_optionalFile;
typedef struct _792da977_optionalLine { _792da977_optionalLine(int value): value(value) {}; int value; _792da977_optionalLine(const _792da977_optionalLine &) = delete; } _792da977_optionalLine;
typedef struct _792da977_optionalUserData { _792da977_optionalUserData(void* value): value(value) {}; void* value; _792da977_optionalUserData(const _792da977_optionalUserData &) = delete; } _792da977_optionalUserData;
typedef struct _792da977_rteParameters { _792da977_rteParameters(void* value): value(value) {}; void* value; _792da977_rteParameters(const _792da977_rteParameters &) = delete; } _792da977_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaCreateArraySimpleWithData(_792da977_helperAllocatorVma & helperAllocatorVma, _792da977_callsSetToUploadArrayData & callsSetToUploadArrayData, _792da977_arrayDataBytesCount & arrayDataBytesCount, _792da977_arrayData & arrayData, _792da977_arrayUsageFlags & arrayUsageFlags, _792da977_memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit & memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit, _792da977_outRteHelperArray & outRteHelperArray, _792da977_outStatuses & outStatuses, _792da977_optionalFile & optionalFile, _792da977_optionalLine & optionalLine, _792da977_optionalUserData & optionalUserData, _792da977_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaCreateArraySimpleWithData(helperAllocatorVma.value, callsSetToUploadArrayData.value, arrayDataBytesCount.value, arrayData.value, arrayUsageFlags.value, memoryPropertyFlagsSuggestedDefaultValueIsMemoryPropertyDeviceLocalBit.value, outRteHelperArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaCreateImageSimpleWithData redRteHelperAllocatorVmaCreateImageSimpleWithData
#define _9cc4038d_helperAllocatorVma(value) value
#define _9cc4038d_callsSetToUploadImageData(value) value
#define _9cc4038d_imageDataBytesCount(value) value
#define _9cc4038d_imageData(value) value
#define _9cc4038d_imageInfo(value) value
#define _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral(value) value
#define _9cc4038d_outRteHelperImage(value) value
#define _9cc4038d_outStatuses(value) value
#define _9cc4038d_optionalFile(value) value
#define _9cc4038d_optionalLine(value) value
#define _9cc4038d_optionalUserData(value) value
#define _9cc4038d_rteParameters(value) value
#else
typedef struct _9cc4038d_helperAllocatorVma { _9cc4038d_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _9cc4038d_helperAllocatorVma(const _9cc4038d_helperAllocatorVma &) = delete; } _9cc4038d_helperAllocatorVma;
typedef struct _9cc4038d_callsSetToUploadImageData { _9cc4038d_callsSetToUploadImageData(RedHandleCalls value): value(value) {}; RedHandleCalls value; _9cc4038d_callsSetToUploadImageData(const _9cc4038d_callsSetToUploadImageData &) = delete; } _9cc4038d_callsSetToUploadImageData;
typedef struct _9cc4038d_imageDataBytesCount { _9cc4038d_imageDataBytesCount(uint64_t value): value(value) {}; uint64_t value; _9cc4038d_imageDataBytesCount(const _9cc4038d_imageDataBytesCount &) = delete; } _9cc4038d_imageDataBytesCount;
typedef struct _9cc4038d_imageData { _9cc4038d_imageData(void* value): value(value) {}; void* value; _9cc4038d_imageData(const _9cc4038d_imageData &) = delete; } _9cc4038d_imageData;
typedef struct _9cc4038d_imageInfo { _9cc4038d_imageInfo(RedRteHelperCreateImageInfo* value): value(value) {}; RedRteHelperCreateImageInfo* value; _9cc4038d_imageInfo(const _9cc4038d_imageInfo &) = delete; } _9cc4038d_imageInfo;
typedef struct _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral { _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral(unsigned value): value(value) {}; unsigned value; _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral(const _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral &) = delete; } _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral;
typedef struct _9cc4038d_outRteHelperImage { _9cc4038d_outRteHelperImage(RedRteHelperImage* value): value(value) {}; RedRteHelperImage* value; _9cc4038d_outRteHelperImage(const _9cc4038d_outRteHelperImage &) = delete; } _9cc4038d_outRteHelperImage;
typedef struct _9cc4038d_outStatuses { _9cc4038d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _9cc4038d_outStatuses(const _9cc4038d_outStatuses &) = delete; } _9cc4038d_outStatuses;
typedef struct _9cc4038d_optionalFile { _9cc4038d_optionalFile(char* value): value(value) {}; char* value; _9cc4038d_optionalFile(const _9cc4038d_optionalFile &) = delete; } _9cc4038d_optionalFile;
typedef struct _9cc4038d_optionalLine { _9cc4038d_optionalLine(int value): value(value) {}; int value; _9cc4038d_optionalLine(const _9cc4038d_optionalLine &) = delete; } _9cc4038d_optionalLine;
typedef struct _9cc4038d_optionalUserData { _9cc4038d_optionalUserData(void* value): value(value) {}; void* value; _9cc4038d_optionalUserData(const _9cc4038d_optionalUserData &) = delete; } _9cc4038d_optionalUserData;
typedef struct _9cc4038d_rteParameters { _9cc4038d_rteParameters(void* value): value(value) {}; void* value; _9cc4038d_rteParameters(const _9cc4038d_rteParameters &) = delete; } _9cc4038d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaCreateImageSimpleWithData(_9cc4038d_helperAllocatorVma & helperAllocatorVma, _9cc4038d_callsSetToUploadImageData & callsSetToUploadImageData, _9cc4038d_imageDataBytesCount & imageDataBytesCount, _9cc4038d_imageData & imageData, _9cc4038d_imageInfo & imageInfo, _9cc4038d_imageLayoutSuggestedDefaultValueIsImageLayoutGeneral & imageLayoutSuggestedDefaultValueIsImageLayoutGeneral, _9cc4038d_outRteHelperImage & outRteHelperImage, _9cc4038d_outStatuses & outStatuses, _9cc4038d_optionalFile & optionalFile, _9cc4038d_optionalLine & optionalLine, _9cc4038d_optionalUserData & optionalUserData, _9cc4038d_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaCreateImageSimpleWithData(helperAllocatorVma.value, callsSetToUploadImageData.value, imageDataBytesCount.value, imageData.value, imageInfo.value, imageLayoutSuggestedDefaultValueIsImageLayoutGeneral.value, outRteHelperImage.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaDestroyArray redRteHelperAllocatorVmaDestroyArray
#define _f9dd53a5_helperAllocatorVma(value) value
#define _f9dd53a5_rteHelperArray(value) value
#define _f9dd53a5_rteHelperAllocatorResourceMemory(value) value
#define _f9dd53a5_outStatuses(value) value
#define _f9dd53a5_optionalFile(value) value
#define _f9dd53a5_optionalLine(value) value
#define _f9dd53a5_optionalUserData(value) value
#define _f9dd53a5_rteParameters(value) value
#else
typedef struct _f9dd53a5_helperAllocatorVma { _f9dd53a5_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _f9dd53a5_helperAllocatorVma(const _f9dd53a5_helperAllocatorVma &) = delete; } _f9dd53a5_helperAllocatorVma;
typedef struct _f9dd53a5_rteHelperArray { _f9dd53a5_rteHelperArray(RedHandleArray value): value(value) {}; RedHandleArray value; _f9dd53a5_rteHelperArray(const _f9dd53a5_rteHelperArray &) = delete; } _f9dd53a5_rteHelperArray;
typedef struct _f9dd53a5_rteHelperAllocatorResourceMemory { _f9dd53a5_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _f9dd53a5_rteHelperAllocatorResourceMemory(const _f9dd53a5_rteHelperAllocatorResourceMemory &) = delete; } _f9dd53a5_rteHelperAllocatorResourceMemory;
typedef struct _f9dd53a5_outStatuses { _f9dd53a5_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _f9dd53a5_outStatuses(const _f9dd53a5_outStatuses &) = delete; } _f9dd53a5_outStatuses;
typedef struct _f9dd53a5_optionalFile { _f9dd53a5_optionalFile(char* value): value(value) {}; char* value; _f9dd53a5_optionalFile(const _f9dd53a5_optionalFile &) = delete; } _f9dd53a5_optionalFile;
typedef struct _f9dd53a5_optionalLine { _f9dd53a5_optionalLine(int value): value(value) {}; int value; _f9dd53a5_optionalLine(const _f9dd53a5_optionalLine &) = delete; } _f9dd53a5_optionalLine;
typedef struct _f9dd53a5_optionalUserData { _f9dd53a5_optionalUserData(void* value): value(value) {}; void* value; _f9dd53a5_optionalUserData(const _f9dd53a5_optionalUserData &) = delete; } _f9dd53a5_optionalUserData;
typedef struct _f9dd53a5_rteParameters { _f9dd53a5_rteParameters(void* value): value(value) {}; void* value; _f9dd53a5_rteParameters(const _f9dd53a5_rteParameters &) = delete; } _f9dd53a5_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaDestroyArray(_f9dd53a5_helperAllocatorVma & helperAllocatorVma, _f9dd53a5_rteHelperArray & rteHelperArray, _f9dd53a5_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _f9dd53a5_outStatuses & outStatuses, _f9dd53a5_optionalFile & optionalFile, _f9dd53a5_optionalLine & optionalLine, _f9dd53a5_optionalUserData & optionalUserData, _f9dd53a5_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaDestroyArray(helperAllocatorVma.value, rteHelperArray.value, rteHelperAllocatorResourceMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaDestroyImage redRteHelperAllocatorVmaDestroyImage
#define _161f49b1_helperAllocatorVma(value) value
#define _161f49b1_rteHelperImage(value) value
#define _161f49b1_rteHelperAllocatorResourceMemory(value) value
#define _161f49b1_outStatuses(value) value
#define _161f49b1_optionalFile(value) value
#define _161f49b1_optionalLine(value) value
#define _161f49b1_optionalUserData(value) value
#define _161f49b1_rteParameters(value) value
#else
typedef struct _161f49b1_helperAllocatorVma { _161f49b1_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _161f49b1_helperAllocatorVma(const _161f49b1_helperAllocatorVma &) = delete; } _161f49b1_helperAllocatorVma;
typedef struct _161f49b1_rteHelperImage { _161f49b1_rteHelperImage(RedHandleImage value): value(value) {}; RedHandleImage value; _161f49b1_rteHelperImage(const _161f49b1_rteHelperImage &) = delete; } _161f49b1_rteHelperImage;
typedef struct _161f49b1_rteHelperAllocatorResourceMemory { _161f49b1_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _161f49b1_rteHelperAllocatorResourceMemory(const _161f49b1_rteHelperAllocatorResourceMemory &) = delete; } _161f49b1_rteHelperAllocatorResourceMemory;
typedef struct _161f49b1_outStatuses { _161f49b1_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _161f49b1_outStatuses(const _161f49b1_outStatuses &) = delete; } _161f49b1_outStatuses;
typedef struct _161f49b1_optionalFile { _161f49b1_optionalFile(char* value): value(value) {}; char* value; _161f49b1_optionalFile(const _161f49b1_optionalFile &) = delete; } _161f49b1_optionalFile;
typedef struct _161f49b1_optionalLine { _161f49b1_optionalLine(int value): value(value) {}; int value; _161f49b1_optionalLine(const _161f49b1_optionalLine &) = delete; } _161f49b1_optionalLine;
typedef struct _161f49b1_optionalUserData { _161f49b1_optionalUserData(void* value): value(value) {}; void* value; _161f49b1_optionalUserData(const _161f49b1_optionalUserData &) = delete; } _161f49b1_optionalUserData;
typedef struct _161f49b1_rteParameters { _161f49b1_rteParameters(void* value): value(value) {}; void* value; _161f49b1_rteParameters(const _161f49b1_rteParameters &) = delete; } _161f49b1_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaDestroyImage(_161f49b1_helperAllocatorVma & helperAllocatorVma, _161f49b1_rteHelperImage & rteHelperImage, _161f49b1_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _161f49b1_outStatuses & outStatuses, _161f49b1_optionalFile & optionalFile, _161f49b1_optionalLine & optionalLine, _161f49b1_optionalUserData & optionalUserData, _161f49b1_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaDestroyImage(helperAllocatorVma.value, rteHelperImage.value, rteHelperAllocatorResourceMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaFinalizeAndReleaseStagingMemory redRteHelperAllocatorVmaFinalizeAndReleaseStagingMemory
#define _bdb4ca16_helperAllocatorVma(value) value
#define _bdb4ca16_optionalCpuSignal(value) value
#define _bdb4ca16_outStatuses(value) value
#define _bdb4ca16_optionalFile(value) value
#define _bdb4ca16_optionalLine(value) value
#define _bdb4ca16_optionalUserData(value) value
#define _bdb4ca16_rteParameters(value) value
#else
typedef struct _bdb4ca16_helperAllocatorVma { _bdb4ca16_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _bdb4ca16_helperAllocatorVma(const _bdb4ca16_helperAllocatorVma &) = delete; } _bdb4ca16_helperAllocatorVma;
typedef struct _bdb4ca16_optionalCpuSignal { _bdb4ca16_optionalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _bdb4ca16_optionalCpuSignal(const _bdb4ca16_optionalCpuSignal &) = delete; } _bdb4ca16_optionalCpuSignal;
typedef struct _bdb4ca16_outStatuses { _bdb4ca16_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _bdb4ca16_outStatuses(const _bdb4ca16_outStatuses &) = delete; } _bdb4ca16_outStatuses;
typedef struct _bdb4ca16_optionalFile { _bdb4ca16_optionalFile(char* value): value(value) {}; char* value; _bdb4ca16_optionalFile(const _bdb4ca16_optionalFile &) = delete; } _bdb4ca16_optionalFile;
typedef struct _bdb4ca16_optionalLine { _bdb4ca16_optionalLine(int value): value(value) {}; int value; _bdb4ca16_optionalLine(const _bdb4ca16_optionalLine &) = delete; } _bdb4ca16_optionalLine;
typedef struct _bdb4ca16_optionalUserData { _bdb4ca16_optionalUserData(void* value): value(value) {}; void* value; _bdb4ca16_optionalUserData(const _bdb4ca16_optionalUserData &) = delete; } _bdb4ca16_optionalUserData;
typedef struct _bdb4ca16_rteParameters { _bdb4ca16_rteParameters(void* value): value(value) {}; void* value; _bdb4ca16_rteParameters(const _bdb4ca16_rteParameters &) = delete; } _bdb4ca16_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaFinalizeAndReleaseStagingMemory(_bdb4ca16_helperAllocatorVma & helperAllocatorVma, _bdb4ca16_optionalCpuSignal & optionalCpuSignal, _bdb4ca16_outStatuses & outStatuses, _bdb4ca16_optionalFile & optionalFile, _bdb4ca16_optionalLine & optionalLine, _bdb4ca16_optionalUserData & optionalUserData, _bdb4ca16_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaFinalizeAndReleaseStagingMemory(helperAllocatorVma.value, optionalCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaFinalizeStagingMemory redRteHelperAllocatorVmaFinalizeStagingMemory
#define _ec0def1d_helperAllocatorVma(value) value
#define _ec0def1d_optionalCpuSignal(value) value
#define _ec0def1d_outStatuses(value) value
#define _ec0def1d_optionalFile(value) value
#define _ec0def1d_optionalLine(value) value
#define _ec0def1d_optionalUserData(value) value
#define _ec0def1d_rteParameters(value) value
#else
typedef struct _ec0def1d_helperAllocatorVma { _ec0def1d_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _ec0def1d_helperAllocatorVma(const _ec0def1d_helperAllocatorVma &) = delete; } _ec0def1d_helperAllocatorVma;
typedef struct _ec0def1d_optionalCpuSignal { _ec0def1d_optionalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _ec0def1d_optionalCpuSignal(const _ec0def1d_optionalCpuSignal &) = delete; } _ec0def1d_optionalCpuSignal;
typedef struct _ec0def1d_outStatuses { _ec0def1d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _ec0def1d_outStatuses(const _ec0def1d_outStatuses &) = delete; } _ec0def1d_outStatuses;
typedef struct _ec0def1d_optionalFile { _ec0def1d_optionalFile(char* value): value(value) {}; char* value; _ec0def1d_optionalFile(const _ec0def1d_optionalFile &) = delete; } _ec0def1d_optionalFile;
typedef struct _ec0def1d_optionalLine { _ec0def1d_optionalLine(int value): value(value) {}; int value; _ec0def1d_optionalLine(const _ec0def1d_optionalLine &) = delete; } _ec0def1d_optionalLine;
typedef struct _ec0def1d_optionalUserData { _ec0def1d_optionalUserData(void* value): value(value) {}; void* value; _ec0def1d_optionalUserData(const _ec0def1d_optionalUserData &) = delete; } _ec0def1d_optionalUserData;
typedef struct _ec0def1d_rteParameters { _ec0def1d_rteParameters(void* value): value(value) {}; void* value; _ec0def1d_rteParameters(const _ec0def1d_rteParameters &) = delete; } _ec0def1d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaFinalizeStagingMemory(_ec0def1d_helperAllocatorVma & helperAllocatorVma, _ec0def1d_optionalCpuSignal & optionalCpuSignal, _ec0def1d_outStatuses & outStatuses, _ec0def1d_optionalFile & optionalFile, _ec0def1d_optionalLine & optionalLine, _ec0def1d_optionalUserData & optionalUserData, _ec0def1d_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaFinalizeStagingMemory(helperAllocatorVma.value, optionalCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaReleaseStagingMemory redRteHelperAllocatorVmaReleaseStagingMemory
#define _f69c2293_helperAllocatorVma(value) value
#define _f69c2293_outStatuses(value) value
#define _f69c2293_optionalFile(value) value
#define _f69c2293_optionalLine(value) value
#define _f69c2293_optionalUserData(value) value
#define _f69c2293_rteParameters(value) value
#else
typedef struct _f69c2293_helperAllocatorVma { _f69c2293_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _f69c2293_helperAllocatorVma(const _f69c2293_helperAllocatorVma &) = delete; } _f69c2293_helperAllocatorVma;
typedef struct _f69c2293_outStatuses { _f69c2293_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _f69c2293_outStatuses(const _f69c2293_outStatuses &) = delete; } _f69c2293_outStatuses;
typedef struct _f69c2293_optionalFile { _f69c2293_optionalFile(char* value): value(value) {}; char* value; _f69c2293_optionalFile(const _f69c2293_optionalFile &) = delete; } _f69c2293_optionalFile;
typedef struct _f69c2293_optionalLine { _f69c2293_optionalLine(int value): value(value) {}; int value; _f69c2293_optionalLine(const _f69c2293_optionalLine &) = delete; } _f69c2293_optionalLine;
typedef struct _f69c2293_optionalUserData { _f69c2293_optionalUserData(void* value): value(value) {}; void* value; _f69c2293_optionalUserData(const _f69c2293_optionalUserData &) = delete; } _f69c2293_optionalUserData;
typedef struct _f69c2293_rteParameters { _f69c2293_rteParameters(void* value): value(value) {}; void* value; _f69c2293_rteParameters(const _f69c2293_rteParameters &) = delete; } _f69c2293_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaReleaseStagingMemory(_f69c2293_helperAllocatorVma & helperAllocatorVma, _f69c2293_outStatuses & outStatuses, _f69c2293_optionalFile & optionalFile, _f69c2293_optionalLine & optionalLine, _f69c2293_optionalUserData & optionalUserData, _f69c2293_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaReleaseStagingMemory(helperAllocatorVma.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaMapArray redRteHelperAllocatorVmaMapArray
#define _7147347a_helperAllocatorVma(value) value
#define _7147347a_rteHelperArray(value) value
#define _7147347a_rteHelperAllocatorResourceMemory(value) value
#define _7147347a_outVolatilePointer(value) value
#define _7147347a_outStatuses(value) value
#define _7147347a_optionalFile(value) value
#define _7147347a_optionalLine(value) value
#define _7147347a_optionalUserData(value) value
#define _7147347a_rteParameters(value) value
#else
typedef struct _7147347a_helperAllocatorVma { _7147347a_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _7147347a_helperAllocatorVma(const _7147347a_helperAllocatorVma &) = delete; } _7147347a_helperAllocatorVma;
typedef struct _7147347a_rteHelperArray { _7147347a_rteHelperArray(RedHandleArray value): value(value) {}; RedHandleArray value; _7147347a_rteHelperArray(const _7147347a_rteHelperArray &) = delete; } _7147347a_rteHelperArray;
typedef struct _7147347a_rteHelperAllocatorResourceMemory { _7147347a_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _7147347a_rteHelperAllocatorResourceMemory(const _7147347a_rteHelperAllocatorResourceMemory &) = delete; } _7147347a_rteHelperAllocatorResourceMemory;
typedef struct _7147347a_outVolatilePointer { _7147347a_outVolatilePointer(void** value): value(value) {}; void** value; _7147347a_outVolatilePointer(const _7147347a_outVolatilePointer &) = delete; } _7147347a_outVolatilePointer;
typedef struct _7147347a_outStatuses { _7147347a_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _7147347a_outStatuses(const _7147347a_outStatuses &) = delete; } _7147347a_outStatuses;
typedef struct _7147347a_optionalFile { _7147347a_optionalFile(char* value): value(value) {}; char* value; _7147347a_optionalFile(const _7147347a_optionalFile &) = delete; } _7147347a_optionalFile;
typedef struct _7147347a_optionalLine { _7147347a_optionalLine(int value): value(value) {}; int value; _7147347a_optionalLine(const _7147347a_optionalLine &) = delete; } _7147347a_optionalLine;
typedef struct _7147347a_optionalUserData { _7147347a_optionalUserData(void* value): value(value) {}; void* value; _7147347a_optionalUserData(const _7147347a_optionalUserData &) = delete; } _7147347a_optionalUserData;
typedef struct _7147347a_rteParameters { _7147347a_rteParameters(void* value): value(value) {}; void* value; _7147347a_rteParameters(const _7147347a_rteParameters &) = delete; } _7147347a_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaMapArray(_7147347a_helperAllocatorVma & helperAllocatorVma, _7147347a_rteHelperArray & rteHelperArray, _7147347a_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _7147347a_outVolatilePointer & outVolatilePointer, _7147347a_outStatuses & outStatuses, _7147347a_optionalFile & optionalFile, _7147347a_optionalLine & optionalLine, _7147347a_optionalUserData & optionalUserData, _7147347a_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaMapArray(helperAllocatorVma.value, rteHelperArray.value, rteHelperAllocatorResourceMemory.value, outVolatilePointer.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAllocatorVmaUnmapArray redRteHelperAllocatorVmaUnmapArray
#define _264ceaf5_helperAllocatorVma(value) value
#define _264ceaf5_rteHelperArray(value) value
#define _264ceaf5_rteHelperAllocatorResourceMemory(value) value
#define _264ceaf5_outStatuses(value) value
#define _264ceaf5_optionalFile(value) value
#define _264ceaf5_optionalLine(value) value
#define _264ceaf5_optionalUserData(value) value
#define _264ceaf5_rteParameters(value) value
#else
typedef struct _264ceaf5_helperAllocatorVma { _264ceaf5_helperAllocatorVma(RedRteHandleHelperAllocatorVma value): value(value) {}; RedRteHandleHelperAllocatorVma value; _264ceaf5_helperAllocatorVma(const _264ceaf5_helperAllocatorVma &) = delete; } _264ceaf5_helperAllocatorVma;
typedef struct _264ceaf5_rteHelperArray { _264ceaf5_rteHelperArray(RedHandleArray value): value(value) {}; RedHandleArray value; _264ceaf5_rteHelperArray(const _264ceaf5_rteHelperArray &) = delete; } _264ceaf5_rteHelperArray;
typedef struct _264ceaf5_rteHelperAllocatorResourceMemory { _264ceaf5_rteHelperAllocatorResourceMemory(void* value): value(value) {}; void* value; _264ceaf5_rteHelperAllocatorResourceMemory(const _264ceaf5_rteHelperAllocatorResourceMemory &) = delete; } _264ceaf5_rteHelperAllocatorResourceMemory;
typedef struct _264ceaf5_outStatuses { _264ceaf5_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _264ceaf5_outStatuses(const _264ceaf5_outStatuses &) = delete; } _264ceaf5_outStatuses;
typedef struct _264ceaf5_optionalFile { _264ceaf5_optionalFile(char* value): value(value) {}; char* value; _264ceaf5_optionalFile(const _264ceaf5_optionalFile &) = delete; } _264ceaf5_optionalFile;
typedef struct _264ceaf5_optionalLine { _264ceaf5_optionalLine(int value): value(value) {}; int value; _264ceaf5_optionalLine(const _264ceaf5_optionalLine &) = delete; } _264ceaf5_optionalLine;
typedef struct _264ceaf5_optionalUserData { _264ceaf5_optionalUserData(void* value): value(value) {}; void* value; _264ceaf5_optionalUserData(const _264ceaf5_optionalUserData &) = delete; } _264ceaf5_optionalUserData;
typedef struct _264ceaf5_rteParameters { _264ceaf5_rteParameters(void* value): value(value) {}; void* value; _264ceaf5_rteParameters(const _264ceaf5_rteParameters &) = delete; } _264ceaf5_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAllocatorVmaUnmapArray(_264ceaf5_helperAllocatorVma & helperAllocatorVma, _264ceaf5_rteHelperArray & rteHelperArray, _264ceaf5_rteHelperAllocatorResourceMemory & rteHelperAllocatorResourceMemory, _264ceaf5_outStatuses & outStatuses, _264ceaf5_optionalFile & optionalFile, _264ceaf5_optionalLine & optionalLine, _264ceaf5_optionalUserData & optionalUserData, _264ceaf5_rteParameters & rteParameters) {
  return redRteHelperAllocatorVmaUnmapArray(helperAllocatorVma.value, rteHelperArray.value, rteHelperAllocatorResourceMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateHelperStructs redRteCreateHelperStructs
#define _04d87b90_rteContext(value) value
#define _04d87b90_outHelperStructs(value) value
#define _04d87b90_outStatuses(value) value
#define _04d87b90_optionalFile(value) value
#define _04d87b90_optionalLine(value) value
#define _04d87b90_optionalUserData(value) value
#define _04d87b90_rteParameters(value) value
#else
typedef struct _04d87b90_rteContext { _04d87b90_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _04d87b90_rteContext(const _04d87b90_rteContext &) = delete; } _04d87b90_rteContext;
typedef struct _04d87b90_outHelperStructs { _04d87b90_outHelperStructs(RedRteHandleHelperStructs* value): value(value) {}; RedRteHandleHelperStructs* value; _04d87b90_outHelperStructs(const _04d87b90_outHelperStructs &) = delete; } _04d87b90_outHelperStructs;
typedef struct _04d87b90_outStatuses { _04d87b90_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _04d87b90_outStatuses(const _04d87b90_outStatuses &) = delete; } _04d87b90_outStatuses;
typedef struct _04d87b90_optionalFile { _04d87b90_optionalFile(char* value): value(value) {}; char* value; _04d87b90_optionalFile(const _04d87b90_optionalFile &) = delete; } _04d87b90_optionalFile;
typedef struct _04d87b90_optionalLine { _04d87b90_optionalLine(int value): value(value) {}; int value; _04d87b90_optionalLine(const _04d87b90_optionalLine &) = delete; } _04d87b90_optionalLine;
typedef struct _04d87b90_optionalUserData { _04d87b90_optionalUserData(void* value): value(value) {}; void* value; _04d87b90_optionalUserData(const _04d87b90_optionalUserData &) = delete; } _04d87b90_optionalUserData;
typedef struct _04d87b90_rteParameters { _04d87b90_rteParameters(void* value): value(value) {}; void* value; _04d87b90_rteParameters(const _04d87b90_rteParameters &) = delete; } _04d87b90_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateHelperStructs(_04d87b90_rteContext & rteContext, _04d87b90_outHelperStructs & outHelperStructs, _04d87b90_outStatuses & outStatuses, _04d87b90_optionalFile & optionalFile, _04d87b90_optionalLine & optionalLine, _04d87b90_optionalUserData & optionalUserData, _04d87b90_rteParameters & rteParameters) {
  return redRteCreateHelperStructs(rteContext.value, outHelperStructs.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyHelperStructs redRteDestroyHelperStructs
#define _7d9e4306_helperStructs(value) value
#define _7d9e4306_optionalFile(value) value
#define _7d9e4306_optionalLine(value) value
#define _7d9e4306_optionalUserData(value) value
#define _7d9e4306_rteParameters(value) value
#else
typedef struct _7d9e4306_helperStructs { _7d9e4306_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _7d9e4306_helperStructs(const _7d9e4306_helperStructs &) = delete; } _7d9e4306_helperStructs;
typedef struct _7d9e4306_optionalFile { _7d9e4306_optionalFile(char* value): value(value) {}; char* value; _7d9e4306_optionalFile(const _7d9e4306_optionalFile &) = delete; } _7d9e4306_optionalFile;
typedef struct _7d9e4306_optionalLine { _7d9e4306_optionalLine(int value): value(value) {}; int value; _7d9e4306_optionalLine(const _7d9e4306_optionalLine &) = delete; } _7d9e4306_optionalLine;
typedef struct _7d9e4306_optionalUserData { _7d9e4306_optionalUserData(void* value): value(value) {}; void* value; _7d9e4306_optionalUserData(const _7d9e4306_optionalUserData &) = delete; } _7d9e4306_optionalUserData;
typedef struct _7d9e4306_rteParameters { _7d9e4306_rteParameters(void* value): value(value) {}; void* value; _7d9e4306_rteParameters(const _7d9e4306_rteParameters &) = delete; } _7d9e4306_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyHelperStructs(_7d9e4306_helperStructs & helperStructs, _7d9e4306_optionalFile & optionalFile, _7d9e4306_optionalLine & optionalLine, _7d9e4306_optionalUserData & optionalUserData, _7d9e4306_rteParameters & rteParameters) {
  return redRteDestroyHelperStructs(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsSetStructDeclarationMembers redRteHelperStructsSetStructDeclarationMembers
#define _f7660459_helperStructs(value) value
#define _f7660459_structDeclarationMembersCount(value) value
#define _f7660459_structDeclarationMembers(value) value
#define _f7660459_structDeclarationMembersArrayROCount(value) value
#define _f7660459_structDeclarationMembersArrayRO(value) value
#define _f7660459_optionalFile(value) value
#define _f7660459_optionalLine(value) value
#define _f7660459_optionalUserData(value) value
#define _f7660459_rteParameters(value) value
#else
typedef struct _f7660459_helperStructs { _f7660459_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _f7660459_helperStructs(const _f7660459_helperStructs &) = delete; } _f7660459_helperStructs;
typedef struct _f7660459_structDeclarationMembersCount { _f7660459_structDeclarationMembersCount(unsigned value): value(value) {}; unsigned value; _f7660459_structDeclarationMembersCount(const _f7660459_structDeclarationMembersCount &) = delete; } _f7660459_structDeclarationMembersCount;
typedef struct _f7660459_structDeclarationMembers { _f7660459_structDeclarationMembers(RedStructDeclarationMember* value): value(value) {}; RedStructDeclarationMember* value; _f7660459_structDeclarationMembers(const _f7660459_structDeclarationMembers &) = delete; } _f7660459_structDeclarationMembers;
typedef struct _f7660459_structDeclarationMembersArrayROCount { _f7660459_structDeclarationMembersArrayROCount(unsigned value): value(value) {}; unsigned value; _f7660459_structDeclarationMembersArrayROCount(const _f7660459_structDeclarationMembersArrayROCount &) = delete; } _f7660459_structDeclarationMembersArrayROCount;
typedef struct _f7660459_structDeclarationMembersArrayRO { _f7660459_structDeclarationMembersArrayRO(RedStructDeclarationMemberArrayRO* value): value(value) {}; RedStructDeclarationMemberArrayRO* value; _f7660459_structDeclarationMembersArrayRO(const _f7660459_structDeclarationMembersArrayRO &) = delete; } _f7660459_structDeclarationMembersArrayRO;
typedef struct _f7660459_optionalFile { _f7660459_optionalFile(char* value): value(value) {}; char* value; _f7660459_optionalFile(const _f7660459_optionalFile &) = delete; } _f7660459_optionalFile;
typedef struct _f7660459_optionalLine { _f7660459_optionalLine(int value): value(value) {}; int value; _f7660459_optionalLine(const _f7660459_optionalLine &) = delete; } _f7660459_optionalLine;
typedef struct _f7660459_optionalUserData { _f7660459_optionalUserData(void* value): value(value) {}; void* value; _f7660459_optionalUserData(const _f7660459_optionalUserData &) = delete; } _f7660459_optionalUserData;
typedef struct _f7660459_rteParameters { _f7660459_rteParameters(void* value): value(value) {}; void* value; _f7660459_rteParameters(const _f7660459_rteParameters &) = delete; } _f7660459_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsSetStructDeclarationMembers(_f7660459_helperStructs & helperStructs, _f7660459_structDeclarationMembersCount & structDeclarationMembersCount, _f7660459_structDeclarationMembers & structDeclarationMembers, _f7660459_structDeclarationMembersArrayROCount & structDeclarationMembersArrayROCount, _f7660459_structDeclarationMembersArrayRO & structDeclarationMembersArrayRO, _f7660459_optionalFile & optionalFile, _f7660459_optionalLine & optionalLine, _f7660459_optionalUserData & optionalUserData, _f7660459_rteParameters & rteParameters) {
  return redRteHelperStructsSetStructDeclarationMembers(helperStructs.value, structDeclarationMembersCount.value, structDeclarationMembers.value, structDeclarationMembersArrayROCount.value, structDeclarationMembersArrayRO.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsAddStructDeclarationMember redRteHelperStructsAddStructDeclarationMember
#define _5c5b90ae_helperStructs(value) value
#define _5c5b90ae_slot(value) value
#define _5c5b90ae_type(value) value
#define _5c5b90ae_count(value) value
#define _5c5b90ae_visibleToStages(value) value
#define _5c5b90ae_inlineSampler(value) value
#define _5c5b90ae_slotTypeIsArrayRO(value) value
#define _5c5b90ae_optionalFile(value) value
#define _5c5b90ae_optionalLine(value) value
#define _5c5b90ae_optionalUserData(value) value
#define _5c5b90ae_rteParameters(value) value
#else
typedef struct _5c5b90ae_helperStructs { _5c5b90ae_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _5c5b90ae_helperStructs(const _5c5b90ae_helperStructs &) = delete; } _5c5b90ae_helperStructs;
typedef struct _5c5b90ae_slot { _5c5b90ae_slot(unsigned value): value(value) {}; unsigned value; _5c5b90ae_slot(const _5c5b90ae_slot &) = delete; } _5c5b90ae_slot;
typedef struct _5c5b90ae_type { _5c5b90ae_type(unsigned value): value(value) {}; unsigned value; _5c5b90ae_type(const _5c5b90ae_type &) = delete; } _5c5b90ae_type;
typedef struct _5c5b90ae_count { _5c5b90ae_count(unsigned value): value(value) {}; unsigned value; _5c5b90ae_count(const _5c5b90ae_count &) = delete; } _5c5b90ae_count;
typedef struct _5c5b90ae_visibleToStages { _5c5b90ae_visibleToStages(unsigned value): value(value) {}; unsigned value; _5c5b90ae_visibleToStages(const _5c5b90ae_visibleToStages &) = delete; } _5c5b90ae_visibleToStages;
typedef struct _5c5b90ae_inlineSampler { _5c5b90ae_inlineSampler(RedHandleSampler* value): value(value) {}; RedHandleSampler* value; _5c5b90ae_inlineSampler(const _5c5b90ae_inlineSampler &) = delete; } _5c5b90ae_inlineSampler;
typedef struct _5c5b90ae_slotTypeIsArrayRO { _5c5b90ae_slotTypeIsArrayRO(RedBool32 value): value(value) {}; RedBool32 value; _5c5b90ae_slotTypeIsArrayRO(const _5c5b90ae_slotTypeIsArrayRO &) = delete; } _5c5b90ae_slotTypeIsArrayRO;
typedef struct _5c5b90ae_optionalFile { _5c5b90ae_optionalFile(char* value): value(value) {}; char* value; _5c5b90ae_optionalFile(const _5c5b90ae_optionalFile &) = delete; } _5c5b90ae_optionalFile;
typedef struct _5c5b90ae_optionalLine { _5c5b90ae_optionalLine(int value): value(value) {}; int value; _5c5b90ae_optionalLine(const _5c5b90ae_optionalLine &) = delete; } _5c5b90ae_optionalLine;
typedef struct _5c5b90ae_optionalUserData { _5c5b90ae_optionalUserData(void* value): value(value) {}; void* value; _5c5b90ae_optionalUserData(const _5c5b90ae_optionalUserData &) = delete; } _5c5b90ae_optionalUserData;
typedef struct _5c5b90ae_rteParameters { _5c5b90ae_rteParameters(void* value): value(value) {}; void* value; _5c5b90ae_rteParameters(const _5c5b90ae_rteParameters &) = delete; } _5c5b90ae_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsAddStructDeclarationMember(_5c5b90ae_helperStructs & helperStructs, _5c5b90ae_slot & slot, _5c5b90ae_type & type, _5c5b90ae_count & count, _5c5b90ae_visibleToStages & visibleToStages, _5c5b90ae_inlineSampler & inlineSampler, _5c5b90ae_slotTypeIsArrayRO & slotTypeIsArrayRO, _5c5b90ae_optionalFile & optionalFile, _5c5b90ae_optionalLine & optionalLine, _5c5b90ae_optionalUserData & optionalUserData, _5c5b90ae_rteParameters & rteParameters) {
  return redRteHelperStructsAddStructDeclarationMember(helperStructs.value, slot.value, type.value, count.value, visibleToStages.value, inlineSampler.value, slotTypeIsArrayRO.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsSetStructDeclarationMemberFlags redRteHelperStructsSetStructDeclarationMemberFlags
#define _8bcc2f8e_helperStructs(value) value
#define _8bcc2f8e_slot(value) value
#define _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10(value) value
#define _8bcc2f8e_optionalFile(value) value
#define _8bcc2f8e_optionalLine(value) value
#define _8bcc2f8e_optionalUserData(value) value
#define _8bcc2f8e_rteParameters(value) value
#else
typedef struct _8bcc2f8e_helperStructs { _8bcc2f8e_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _8bcc2f8e_helperStructs(const _8bcc2f8e_helperStructs &) = delete; } _8bcc2f8e_helperStructs;
typedef struct _8bcc2f8e_slot { _8bcc2f8e_slot(unsigned value): value(value) {}; unsigned value; _8bcc2f8e_slot(const _8bcc2f8e_slot &) = delete; } _8bcc2f8e_slot;
typedef struct _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10 { _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10(unsigned value): value(value) {}; unsigned value; _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10(const _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10 &) = delete; } _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10;
typedef struct _8bcc2f8e_optionalFile { _8bcc2f8e_optionalFile(char* value): value(value) {}; char* value; _8bcc2f8e_optionalFile(const _8bcc2f8e_optionalFile &) = delete; } _8bcc2f8e_optionalFile;
typedef struct _8bcc2f8e_optionalLine { _8bcc2f8e_optionalLine(int value): value(value) {}; int value; _8bcc2f8e_optionalLine(const _8bcc2f8e_optionalLine &) = delete; } _8bcc2f8e_optionalLine;
typedef struct _8bcc2f8e_optionalUserData { _8bcc2f8e_optionalUserData(void* value): value(value) {}; void* value; _8bcc2f8e_optionalUserData(const _8bcc2f8e_optionalUserData &) = delete; } _8bcc2f8e_optionalUserData;
typedef struct _8bcc2f8e_rteParameters { _8bcc2f8e_rteParameters(void* value): value(value) {}; void* value; _8bcc2f8e_rteParameters(const _8bcc2f8e_rteParameters &) = delete; } _8bcc2f8e_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsSetStructDeclarationMemberFlags(_8bcc2f8e_helperStructs & helperStructs, _8bcc2f8e_slot & slot, _8bcc2f8e_descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10 & descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10, _8bcc2f8e_optionalFile & optionalFile, _8bcc2f8e_optionalLine & optionalLine, _8bcc2f8e_optionalUserData & optionalUserData, _8bcc2f8e_rteParameters & rteParameters) {
  return redRteHelperStructsSetStructDeclarationMemberFlags(helperStructs.value, slot.value, descriptorBindingFlags_RequiresApiSupportGreaterThanVkVersion10.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsCreateStructDeclaration redRteHelperStructsCreateStructDeclaration
#define _f55c2f96_helperStructs(value) value
#define _f55c2f96_descriptorSetLayoutCreateFlags(value) value
#define _f55c2f96_apiSupport(value) value
#define _f55c2f96_outStructDeclaration(value) value
#define _f55c2f96_outStatuses(value) value
#define _f55c2f96_optionalFile(value) value
#define _f55c2f96_optionalLine(value) value
#define _f55c2f96_optionalUserData(value) value
#define _f55c2f96_rteParameters(value) value
#else
typedef struct _f55c2f96_helperStructs { _f55c2f96_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _f55c2f96_helperStructs(const _f55c2f96_helperStructs &) = delete; } _f55c2f96_helperStructs;
typedef struct _f55c2f96_descriptorSetLayoutCreateFlags { _f55c2f96_descriptorSetLayoutCreateFlags(unsigned value): value(value) {}; unsigned value; _f55c2f96_descriptorSetLayoutCreateFlags(const _f55c2f96_descriptorSetLayoutCreateFlags &) = delete; } _f55c2f96_descriptorSetLayoutCreateFlags;
typedef struct _f55c2f96_apiSupport { _f55c2f96_apiSupport(RedRteHelperStructsApiSupport value): value(value) {}; RedRteHelperStructsApiSupport value; _f55c2f96_apiSupport(const _f55c2f96_apiSupport &) = delete; } _f55c2f96_apiSupport;
typedef struct _f55c2f96_outStructDeclaration { _f55c2f96_outStructDeclaration(RedHandleStructDeclaration* value): value(value) {}; RedHandleStructDeclaration* value; _f55c2f96_outStructDeclaration(const _f55c2f96_outStructDeclaration &) = delete; } _f55c2f96_outStructDeclaration;
typedef struct _f55c2f96_outStatuses { _f55c2f96_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _f55c2f96_outStatuses(const _f55c2f96_outStatuses &) = delete; } _f55c2f96_outStatuses;
typedef struct _f55c2f96_optionalFile { _f55c2f96_optionalFile(char* value): value(value) {}; char* value; _f55c2f96_optionalFile(const _f55c2f96_optionalFile &) = delete; } _f55c2f96_optionalFile;
typedef struct _f55c2f96_optionalLine { _f55c2f96_optionalLine(int value): value(value) {}; int value; _f55c2f96_optionalLine(const _f55c2f96_optionalLine &) = delete; } _f55c2f96_optionalLine;
typedef struct _f55c2f96_optionalUserData { _f55c2f96_optionalUserData(void* value): value(value) {}; void* value; _f55c2f96_optionalUserData(const _f55c2f96_optionalUserData &) = delete; } _f55c2f96_optionalUserData;
typedef struct _f55c2f96_rteParameters { _f55c2f96_rteParameters(void* value): value(value) {}; void* value; _f55c2f96_rteParameters(const _f55c2f96_rteParameters &) = delete; } _f55c2f96_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsCreateStructDeclaration(_f55c2f96_helperStructs & helperStructs, _f55c2f96_descriptorSetLayoutCreateFlags & descriptorSetLayoutCreateFlags, _f55c2f96_apiSupport & apiSupport, _f55c2f96_outStructDeclaration & outStructDeclaration, _f55c2f96_outStatuses & outStatuses, _f55c2f96_optionalFile & optionalFile, _f55c2f96_optionalLine & optionalLine, _f55c2f96_optionalUserData & optionalUserData, _f55c2f96_rteParameters & rteParameters) {
  return redRteHelperStructsCreateStructDeclaration(helperStructs.value, descriptorSetLayoutCreateFlags.value, apiSupport.value, outStructDeclaration.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsCreateStructsMemory redRteHelperStructsCreateStructsMemory
#define _11d23ff7_helperStructs(value) value
#define _11d23ff7_allocateStructsCount(value) value
#define _11d23ff7_outStructsMemory(value) value
#define _11d23ff7_outStatuses(value) value
#define _11d23ff7_optionalFile(value) value
#define _11d23ff7_optionalLine(value) value
#define _11d23ff7_optionalUserData(value) value
#define _11d23ff7_rteParameters(value) value
#else
typedef struct _11d23ff7_helperStructs { _11d23ff7_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _11d23ff7_helperStructs(const _11d23ff7_helperStructs &) = delete; } _11d23ff7_helperStructs;
typedef struct _11d23ff7_allocateStructsCount { _11d23ff7_allocateStructsCount(unsigned value): value(value) {}; unsigned value; _11d23ff7_allocateStructsCount(const _11d23ff7_allocateStructsCount &) = delete; } _11d23ff7_allocateStructsCount;
typedef struct _11d23ff7_outStructsMemory { _11d23ff7_outStructsMemory(RedHandleStructsMemory* value): value(value) {}; RedHandleStructsMemory* value; _11d23ff7_outStructsMemory(const _11d23ff7_outStructsMemory &) = delete; } _11d23ff7_outStructsMemory;
typedef struct _11d23ff7_outStatuses { _11d23ff7_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _11d23ff7_outStatuses(const _11d23ff7_outStatuses &) = delete; } _11d23ff7_outStatuses;
typedef struct _11d23ff7_optionalFile { _11d23ff7_optionalFile(char* value): value(value) {}; char* value; _11d23ff7_optionalFile(const _11d23ff7_optionalFile &) = delete; } _11d23ff7_optionalFile;
typedef struct _11d23ff7_optionalLine { _11d23ff7_optionalLine(int value): value(value) {}; int value; _11d23ff7_optionalLine(const _11d23ff7_optionalLine &) = delete; } _11d23ff7_optionalLine;
typedef struct _11d23ff7_optionalUserData { _11d23ff7_optionalUserData(void* value): value(value) {}; void* value; _11d23ff7_optionalUserData(const _11d23ff7_optionalUserData &) = delete; } _11d23ff7_optionalUserData;
typedef struct _11d23ff7_rteParameters { _11d23ff7_rteParameters(void* value): value(value) {}; void* value; _11d23ff7_rteParameters(const _11d23ff7_rteParameters &) = delete; } _11d23ff7_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsCreateStructsMemory(_11d23ff7_helperStructs & helperStructs, _11d23ff7_allocateStructsCount & allocateStructsCount, _11d23ff7_outStructsMemory & outStructsMemory, _11d23ff7_outStatuses & outStatuses, _11d23ff7_optionalFile & optionalFile, _11d23ff7_optionalLine & optionalLine, _11d23ff7_optionalUserData & optionalUserData, _11d23ff7_rteParameters & rteParameters) {
  return redRteHelperStructsCreateStructsMemory(helperStructs.value, allocateStructsCount.value, outStructsMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsGetStruct redRteHelperStructsGetStruct
#define _b86a44b7_helperStructs(value) value
#define _b86a44b7_structIndex(value) value
#define _b86a44b7_optionalFile(value) value
#define _b86a44b7_optionalLine(value) value
#define _b86a44b7_optionalUserData(value) value
#define _b86a44b7_rteParameters(value) value
#else
typedef struct _b86a44b7_helperStructs { _b86a44b7_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _b86a44b7_helperStructs(const _b86a44b7_helperStructs &) = delete; } _b86a44b7_helperStructs;
typedef struct _b86a44b7_structIndex { _b86a44b7_structIndex(unsigned value): value(value) {}; unsigned value; _b86a44b7_structIndex(const _b86a44b7_structIndex &) = delete; } _b86a44b7_structIndex;
typedef struct _b86a44b7_optionalFile { _b86a44b7_optionalFile(char* value): value(value) {}; char* value; _b86a44b7_optionalFile(const _b86a44b7_optionalFile &) = delete; } _b86a44b7_optionalFile;
typedef struct _b86a44b7_optionalLine { _b86a44b7_optionalLine(int value): value(value) {}; int value; _b86a44b7_optionalLine(const _b86a44b7_optionalLine &) = delete; } _b86a44b7_optionalLine;
typedef struct _b86a44b7_optionalUserData { _b86a44b7_optionalUserData(void* value): value(value) {}; void* value; _b86a44b7_optionalUserData(const _b86a44b7_optionalUserData &) = delete; } _b86a44b7_optionalUserData;
typedef struct _b86a44b7_rteParameters { _b86a44b7_rteParameters(void* value): value(value) {}; void* value; _b86a44b7_rteParameters(const _b86a44b7_rteParameters &) = delete; } _b86a44b7_rteParameters;
REDGPU_NP_DECLSPEC RedHandleStruct REDGPU_NP_API np_redRteHelperStructsGetStruct(_b86a44b7_helperStructs & helperStructs, _b86a44b7_structIndex & structIndex, _b86a44b7_optionalFile & optionalFile, _b86a44b7_optionalLine & optionalLine, _b86a44b7_optionalUserData & optionalUserData, _b86a44b7_rteParameters & rteParameters) {
  return redRteHelperStructsGetStruct(helperStructs.value, structIndex.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsGetStructsCount redRteHelperStructsGetStructsCount
#define _e962846e_helperStructs(value) value
#define _e962846e_optionalFile(value) value
#define _e962846e_optionalLine(value) value
#define _e962846e_optionalUserData(value) value
#define _e962846e_rteParameters(value) value
#else
typedef struct _e962846e_helperStructs { _e962846e_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _e962846e_helperStructs(const _e962846e_helperStructs &) = delete; } _e962846e_helperStructs;
typedef struct _e962846e_optionalFile { _e962846e_optionalFile(char* value): value(value) {}; char* value; _e962846e_optionalFile(const _e962846e_optionalFile &) = delete; } _e962846e_optionalFile;
typedef struct _e962846e_optionalLine { _e962846e_optionalLine(int value): value(value) {}; int value; _e962846e_optionalLine(const _e962846e_optionalLine &) = delete; } _e962846e_optionalLine;
typedef struct _e962846e_optionalUserData { _e962846e_optionalUserData(void* value): value(value) {}; void* value; _e962846e_optionalUserData(const _e962846e_optionalUserData &) = delete; } _e962846e_optionalUserData;
typedef struct _e962846e_rteParameters { _e962846e_rteParameters(void* value): value(value) {}; void* value; _e962846e_rteParameters(const _e962846e_rteParameters &) = delete; } _e962846e_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redRteHelperStructsGetStructsCount(_e962846e_helperStructs & helperStructs, _e962846e_optionalFile & optionalFile, _e962846e_optionalLine & optionalLine, _e962846e_optionalUserData & optionalUserData, _e962846e_rteParameters & rteParameters) {
  return redRteHelperStructsGetStructsCount(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsGetStructs redRteHelperStructsGetStructs
#define _e65e5dba_helperStructs(value) value
#define _e65e5dba_optionalFile(value) value
#define _e65e5dba_optionalLine(value) value
#define _e65e5dba_optionalUserData(value) value
#define _e65e5dba_rteParameters(value) value
#else
typedef struct _e65e5dba_helperStructs { _e65e5dba_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _e65e5dba_helperStructs(const _e65e5dba_helperStructs &) = delete; } _e65e5dba_helperStructs;
typedef struct _e65e5dba_optionalFile { _e65e5dba_optionalFile(char* value): value(value) {}; char* value; _e65e5dba_optionalFile(const _e65e5dba_optionalFile &) = delete; } _e65e5dba_optionalFile;
typedef struct _e65e5dba_optionalLine { _e65e5dba_optionalLine(int value): value(value) {}; int value; _e65e5dba_optionalLine(const _e65e5dba_optionalLine &) = delete; } _e65e5dba_optionalLine;
typedef struct _e65e5dba_optionalUserData { _e65e5dba_optionalUserData(void* value): value(value) {}; void* value; _e65e5dba_optionalUserData(const _e65e5dba_optionalUserData &) = delete; } _e65e5dba_optionalUserData;
typedef struct _e65e5dba_rteParameters { _e65e5dba_rteParameters(void* value): value(value) {}; void* value; _e65e5dba_rteParameters(const _e65e5dba_rteParameters &) = delete; } _e65e5dba_rteParameters;
REDGPU_NP_DECLSPEC RedHandleStruct* REDGPU_NP_API np_redRteHelperStructsGetStructs(_e65e5dba_helperStructs & helperStructs, _e65e5dba_optionalFile & optionalFile, _e65e5dba_optionalLine & optionalLine, _e65e5dba_optionalUserData & optionalUserData, _e65e5dba_rteParameters & rteParameters) {
  return redRteHelperStructsGetStructs(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsGetStructDeclarationMembersCount redRteHelperStructsGetStructDeclarationMembersCount
#define _46345fbc_helperStructs(value) value
#define _46345fbc_optionalFile(value) value
#define _46345fbc_optionalLine(value) value
#define _46345fbc_optionalUserData(value) value
#define _46345fbc_rteParameters(value) value
#else
typedef struct _46345fbc_helperStructs { _46345fbc_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _46345fbc_helperStructs(const _46345fbc_helperStructs &) = delete; } _46345fbc_helperStructs;
typedef struct _46345fbc_optionalFile { _46345fbc_optionalFile(char* value): value(value) {}; char* value; _46345fbc_optionalFile(const _46345fbc_optionalFile &) = delete; } _46345fbc_optionalFile;
typedef struct _46345fbc_optionalLine { _46345fbc_optionalLine(int value): value(value) {}; int value; _46345fbc_optionalLine(const _46345fbc_optionalLine &) = delete; } _46345fbc_optionalLine;
typedef struct _46345fbc_optionalUserData { _46345fbc_optionalUserData(void* value): value(value) {}; void* value; _46345fbc_optionalUserData(const _46345fbc_optionalUserData &) = delete; } _46345fbc_optionalUserData;
typedef struct _46345fbc_rteParameters { _46345fbc_rteParameters(void* value): value(value) {}; void* value; _46345fbc_rteParameters(const _46345fbc_rteParameters &) = delete; } _46345fbc_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redRteHelperStructsGetStructDeclarationMembersCount(_46345fbc_helperStructs & helperStructs, _46345fbc_optionalFile & optionalFile, _46345fbc_optionalLine & optionalLine, _46345fbc_optionalUserData & optionalUserData, _46345fbc_rteParameters & rteParameters) {
  return redRteHelperStructsGetStructDeclarationMembersCount(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsGetStructDeclarationMembers redRteHelperStructsGetStructDeclarationMembers
#define _d1f18e89_helperStructs(value) value
#define _d1f18e89_optionalFile(value) value
#define _d1f18e89_optionalLine(value) value
#define _d1f18e89_optionalUserData(value) value
#define _d1f18e89_rteParameters(value) value
#else
typedef struct _d1f18e89_helperStructs { _d1f18e89_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _d1f18e89_helperStructs(const _d1f18e89_helperStructs &) = delete; } _d1f18e89_helperStructs;
typedef struct _d1f18e89_optionalFile { _d1f18e89_optionalFile(char* value): value(value) {}; char* value; _d1f18e89_optionalFile(const _d1f18e89_optionalFile &) = delete; } _d1f18e89_optionalFile;
typedef struct _d1f18e89_optionalLine { _d1f18e89_optionalLine(int value): value(value) {}; int value; _d1f18e89_optionalLine(const _d1f18e89_optionalLine &) = delete; } _d1f18e89_optionalLine;
typedef struct _d1f18e89_optionalUserData { _d1f18e89_optionalUserData(void* value): value(value) {}; void* value; _d1f18e89_optionalUserData(const _d1f18e89_optionalUserData &) = delete; } _d1f18e89_optionalUserData;
typedef struct _d1f18e89_rteParameters { _d1f18e89_rteParameters(void* value): value(value) {}; void* value; _d1f18e89_rteParameters(const _d1f18e89_rteParameters &) = delete; } _d1f18e89_rteParameters;
REDGPU_NP_DECLSPEC RedStructDeclarationMember* REDGPU_NP_API np_redRteHelperStructsGetStructDeclarationMembers(_d1f18e89_helperStructs & helperStructs, _d1f18e89_optionalFile & optionalFile, _d1f18e89_optionalLine & optionalLine, _d1f18e89_optionalUserData & optionalUserData, _d1f18e89_rteParameters & rteParameters) {
  return redRteHelperStructsGetStructDeclarationMembers(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsDestroyStructDeclaration redRteHelperStructsDestroyStructDeclaration
#define _971201b9_helperStructs(value) value
#define _971201b9_optionalFile(value) value
#define _971201b9_optionalLine(value) value
#define _971201b9_optionalUserData(value) value
#define _971201b9_rteParameters(value) value
#else
typedef struct _971201b9_helperStructs { _971201b9_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _971201b9_helperStructs(const _971201b9_helperStructs &) = delete; } _971201b9_helperStructs;
typedef struct _971201b9_optionalFile { _971201b9_optionalFile(char* value): value(value) {}; char* value; _971201b9_optionalFile(const _971201b9_optionalFile &) = delete; } _971201b9_optionalFile;
typedef struct _971201b9_optionalLine { _971201b9_optionalLine(int value): value(value) {}; int value; _971201b9_optionalLine(const _971201b9_optionalLine &) = delete; } _971201b9_optionalLine;
typedef struct _971201b9_optionalUserData { _971201b9_optionalUserData(void* value): value(value) {}; void* value; _971201b9_optionalUserData(const _971201b9_optionalUserData &) = delete; } _971201b9_optionalUserData;
typedef struct _971201b9_rteParameters { _971201b9_rteParameters(void* value): value(value) {}; void* value; _971201b9_rteParameters(const _971201b9_rteParameters &) = delete; } _971201b9_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsDestroyStructDeclaration(_971201b9_helperStructs & helperStructs, _971201b9_optionalFile & optionalFile, _971201b9_optionalLine & optionalLine, _971201b9_optionalUserData & optionalUserData, _971201b9_rteParameters & rteParameters) {
  return redRteHelperStructsDestroyStructDeclaration(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsDestroyStructsMemory redRteHelperStructsDestroyStructsMemory
#define _c92c46fb_helperStructs(value) value
#define _c92c46fb_optionalFile(value) value
#define _c92c46fb_optionalLine(value) value
#define _c92c46fb_optionalUserData(value) value
#define _c92c46fb_rteParameters(value) value
#else
typedef struct _c92c46fb_helperStructs { _c92c46fb_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _c92c46fb_helperStructs(const _c92c46fb_helperStructs &) = delete; } _c92c46fb_helperStructs;
typedef struct _c92c46fb_optionalFile { _c92c46fb_optionalFile(char* value): value(value) {}; char* value; _c92c46fb_optionalFile(const _c92c46fb_optionalFile &) = delete; } _c92c46fb_optionalFile;
typedef struct _c92c46fb_optionalLine { _c92c46fb_optionalLine(int value): value(value) {}; int value; _c92c46fb_optionalLine(const _c92c46fb_optionalLine &) = delete; } _c92c46fb_optionalLine;
typedef struct _c92c46fb_optionalUserData { _c92c46fb_optionalUserData(void* value): value(value) {}; void* value; _c92c46fb_optionalUserData(const _c92c46fb_optionalUserData &) = delete; } _c92c46fb_optionalUserData;
typedef struct _c92c46fb_rteParameters { _c92c46fb_rteParameters(void* value): value(value) {}; void* value; _c92c46fb_rteParameters(const _c92c46fb_rteParameters &) = delete; } _c92c46fb_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsDestroyStructsMemory(_c92c46fb_helperStructs & helperStructs, _c92c46fb_optionalFile & optionalFile, _c92c46fb_optionalLine & optionalLine, _c92c46fb_optionalUserData & optionalUserData, _c92c46fb_rteParameters & rteParameters) {
  return redRteHelperStructsDestroyStructsMemory(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperStructsClear redRteHelperStructsClear
#define _1ee4ec30_helperStructs(value) value
#define _1ee4ec30_optionalFile(value) value
#define _1ee4ec30_optionalLine(value) value
#define _1ee4ec30_optionalUserData(value) value
#define _1ee4ec30_rteParameters(value) value
#else
typedef struct _1ee4ec30_helperStructs { _1ee4ec30_helperStructs(RedRteHandleHelperStructs value): value(value) {}; RedRteHandleHelperStructs value; _1ee4ec30_helperStructs(const _1ee4ec30_helperStructs &) = delete; } _1ee4ec30_helperStructs;
typedef struct _1ee4ec30_optionalFile { _1ee4ec30_optionalFile(char* value): value(value) {}; char* value; _1ee4ec30_optionalFile(const _1ee4ec30_optionalFile &) = delete; } _1ee4ec30_optionalFile;
typedef struct _1ee4ec30_optionalLine { _1ee4ec30_optionalLine(int value): value(value) {}; int value; _1ee4ec30_optionalLine(const _1ee4ec30_optionalLine &) = delete; } _1ee4ec30_optionalLine;
typedef struct _1ee4ec30_optionalUserData { _1ee4ec30_optionalUserData(void* value): value(value) {}; void* value; _1ee4ec30_optionalUserData(const _1ee4ec30_optionalUserData &) = delete; } _1ee4ec30_optionalUserData;
typedef struct _1ee4ec30_rteParameters { _1ee4ec30_rteParameters(void* value): value(value) {}; void* value; _1ee4ec30_rteParameters(const _1ee4ec30_rteParameters &) = delete; } _1ee4ec30_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperStructsClear(_1ee4ec30_helperStructs & helperStructs, _1ee4ec30_optionalFile & optionalFile, _1ee4ec30_optionalLine & optionalLine, _1ee4ec30_optionalUserData & optionalUserData, _1ee4ec30_rteParameters & rteParameters) {
  return redRteHelperStructsClear(helperStructs.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateRayTracingBuilder redRteCreateRayTracingBuilder
#define _2097d6bb_rteContext(value) value
#define _2097d6bb_rteHandleHelperAllocator(value) value
#define _2097d6bb_queueFamilyIndex(value) value
#define _2097d6bb_outRayTracingBuilder(value) value
#define _2097d6bb_outStatuses(value) value
#define _2097d6bb_optionalFile(value) value
#define _2097d6bb_optionalLine(value) value
#define _2097d6bb_optionalUserData(value) value
#define _2097d6bb_rteParameters(value) value
#else
typedef struct _2097d6bb_rteContext { _2097d6bb_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _2097d6bb_rteContext(const _2097d6bb_rteContext &) = delete; } _2097d6bb_rteContext;
typedef struct _2097d6bb_rteHandleHelperAllocator { _2097d6bb_rteHandleHelperAllocator(void* value): value(value) {}; void* value; _2097d6bb_rteHandleHelperAllocator(const _2097d6bb_rteHandleHelperAllocator &) = delete; } _2097d6bb_rteHandleHelperAllocator;
typedef struct _2097d6bb_queueFamilyIndex { _2097d6bb_queueFamilyIndex(unsigned value): value(value) {}; unsigned value; _2097d6bb_queueFamilyIndex(const _2097d6bb_queueFamilyIndex &) = delete; } _2097d6bb_queueFamilyIndex;
typedef struct _2097d6bb_outRayTracingBuilder { _2097d6bb_outRayTracingBuilder(RedRteHandleRayTracingBuilder* value): value(value) {}; RedRteHandleRayTracingBuilder* value; _2097d6bb_outRayTracingBuilder(const _2097d6bb_outRayTracingBuilder &) = delete; } _2097d6bb_outRayTracingBuilder;
typedef struct _2097d6bb_outStatuses { _2097d6bb_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _2097d6bb_outStatuses(const _2097d6bb_outStatuses &) = delete; } _2097d6bb_outStatuses;
typedef struct _2097d6bb_optionalFile { _2097d6bb_optionalFile(char* value): value(value) {}; char* value; _2097d6bb_optionalFile(const _2097d6bb_optionalFile &) = delete; } _2097d6bb_optionalFile;
typedef struct _2097d6bb_optionalLine { _2097d6bb_optionalLine(int value): value(value) {}; int value; _2097d6bb_optionalLine(const _2097d6bb_optionalLine &) = delete; } _2097d6bb_optionalLine;
typedef struct _2097d6bb_optionalUserData { _2097d6bb_optionalUserData(void* value): value(value) {}; void* value; _2097d6bb_optionalUserData(const _2097d6bb_optionalUserData &) = delete; } _2097d6bb_optionalUserData;
typedef struct _2097d6bb_rteParameters { _2097d6bb_rteParameters(void* value): value(value) {}; void* value; _2097d6bb_rteParameters(const _2097d6bb_rteParameters &) = delete; } _2097d6bb_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateRayTracingBuilder(_2097d6bb_rteContext & rteContext, _2097d6bb_rteHandleHelperAllocator & rteHandleHelperAllocator, _2097d6bb_queueFamilyIndex & queueFamilyIndex, _2097d6bb_outRayTracingBuilder & outRayTracingBuilder, _2097d6bb_outStatuses & outStatuses, _2097d6bb_optionalFile & optionalFile, _2097d6bb_optionalLine & optionalLine, _2097d6bb_optionalUserData & optionalUserData, _2097d6bb_rteParameters & rteParameters) {
  return redRteCreateRayTracingBuilder(rteContext.value, rteHandleHelperAllocator.value, queueFamilyIndex.value, outRayTracingBuilder.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyRayTracingBuilder redRteDestroyRayTracingBuilder
#define _1c743ff7_rayTracingBuilder(value) value
#define _1c743ff7_optionalFile(value) value
#define _1c743ff7_optionalLine(value) value
#define _1c743ff7_optionalUserData(value) value
#define _1c743ff7_rteParameters(value) value
#else
typedef struct _1c743ff7_rayTracingBuilder { _1c743ff7_rayTracingBuilder(RedRteHandleRayTracingBuilder value): value(value) {}; RedRteHandleRayTracingBuilder value; _1c743ff7_rayTracingBuilder(const _1c743ff7_rayTracingBuilder &) = delete; } _1c743ff7_rayTracingBuilder;
typedef struct _1c743ff7_optionalFile { _1c743ff7_optionalFile(char* value): value(value) {}; char* value; _1c743ff7_optionalFile(const _1c743ff7_optionalFile &) = delete; } _1c743ff7_optionalFile;
typedef struct _1c743ff7_optionalLine { _1c743ff7_optionalLine(int value): value(value) {}; int value; _1c743ff7_optionalLine(const _1c743ff7_optionalLine &) = delete; } _1c743ff7_optionalLine;
typedef struct _1c743ff7_optionalUserData { _1c743ff7_optionalUserData(void* value): value(value) {}; void* value; _1c743ff7_optionalUserData(const _1c743ff7_optionalUserData &) = delete; } _1c743ff7_optionalUserData;
typedef struct _1c743ff7_rteParameters { _1c743ff7_rteParameters(void* value): value(value) {}; void* value; _1c743ff7_rteParameters(const _1c743ff7_rteParameters &) = delete; } _1c743ff7_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyRayTracingBuilder(_1c743ff7_rayTracingBuilder & rayTracingBuilder, _1c743ff7_optionalFile & optionalFile, _1c743ff7_optionalLine & optionalLine, _1c743ff7_optionalUserData & optionalUserData, _1c743ff7_rteParameters & rteParameters) {
  return redRteDestroyRayTracingBuilder(rayTracingBuilder.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteRayTracingBuilderBuildBlas redRteRayTracingBuilderBuildBlas
#define _252d81b1_rayTracingBuilder(value) value
#define _252d81b1_blasInputsCount(value) value
#define _252d81b1_blasInputs(value) value
#define _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(value) value
#define _252d81b1_outStatuses(value) value
#define _252d81b1_optionalFile(value) value
#define _252d81b1_optionalLine(value) value
#define _252d81b1_optionalUserData(value) value
#define _252d81b1_rteParameters(value) value
#else
typedef struct _252d81b1_rayTracingBuilder { _252d81b1_rayTracingBuilder(RedRteHandleRayTracingBuilder value): value(value) {}; RedRteHandleRayTracingBuilder value; _252d81b1_rayTracingBuilder(const _252d81b1_rayTracingBuilder &) = delete; } _252d81b1_rayTracingBuilder;
typedef struct _252d81b1_blasInputsCount { _252d81b1_blasInputsCount(unsigned value): value(value) {}; unsigned value; _252d81b1_blasInputsCount(const _252d81b1_blasInputsCount &) = delete; } _252d81b1_blasInputsCount;
typedef struct _252d81b1_blasInputs { _252d81b1_blasInputs(RedRteRayTracingBuilderBlasInput* value): value(value) {}; RedRteRayTracingBuilderBlasInput* value; _252d81b1_blasInputs(const _252d81b1_blasInputs &) = delete; } _252d81b1_blasInputs;
typedef struct _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit { _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(unsigned value): value(value) {}; unsigned value; _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(const _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit &) = delete; } _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit;
typedef struct _252d81b1_outStatuses { _252d81b1_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _252d81b1_outStatuses(const _252d81b1_outStatuses &) = delete; } _252d81b1_outStatuses;
typedef struct _252d81b1_optionalFile { _252d81b1_optionalFile(char* value): value(value) {}; char* value; _252d81b1_optionalFile(const _252d81b1_optionalFile &) = delete; } _252d81b1_optionalFile;
typedef struct _252d81b1_optionalLine { _252d81b1_optionalLine(int value): value(value) {}; int value; _252d81b1_optionalLine(const _252d81b1_optionalLine &) = delete; } _252d81b1_optionalLine;
typedef struct _252d81b1_optionalUserData { _252d81b1_optionalUserData(void* value): value(value) {}; void* value; _252d81b1_optionalUserData(const _252d81b1_optionalUserData &) = delete; } _252d81b1_optionalUserData;
typedef struct _252d81b1_rteParameters { _252d81b1_rteParameters(void* value): value(value) {}; void* value; _252d81b1_rteParameters(const _252d81b1_rteParameters &) = delete; } _252d81b1_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteRayTracingBuilderBuildBlas(_252d81b1_rayTracingBuilder & rayTracingBuilder, _252d81b1_blasInputsCount & blasInputsCount, _252d81b1_blasInputs & blasInputs, _252d81b1_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit & buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit, _252d81b1_outStatuses & outStatuses, _252d81b1_optionalFile & optionalFile, _252d81b1_optionalLine & optionalLine, _252d81b1_optionalUserData & optionalUserData, _252d81b1_rteParameters & rteParameters) {
  return redRteRayTracingBuilderBuildBlas(rayTracingBuilder.value, blasInputsCount.value, blasInputs.value, buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteRayTracingBuilderGetBlasGpuAddress redRteRayTracingBuilderGetBlasGpuAddress
#define _f28a5cda_rayTracingBuilder(value) value
#define _f28a5cda_blasIndex(value) value
#define _f28a5cda_optionalFile(value) value
#define _f28a5cda_optionalLine(value) value
#define _f28a5cda_optionalUserData(value) value
#define _f28a5cda_rteParameters(value) value
#else
typedef struct _f28a5cda_rayTracingBuilder { _f28a5cda_rayTracingBuilder(RedRteHandleRayTracingBuilder value): value(value) {}; RedRteHandleRayTracingBuilder value; _f28a5cda_rayTracingBuilder(const _f28a5cda_rayTracingBuilder &) = delete; } _f28a5cda_rayTracingBuilder;
typedef struct _f28a5cda_blasIndex { _f28a5cda_blasIndex(unsigned value): value(value) {}; unsigned value; _f28a5cda_blasIndex(const _f28a5cda_blasIndex &) = delete; } _f28a5cda_blasIndex;
typedef struct _f28a5cda_optionalFile { _f28a5cda_optionalFile(char* value): value(value) {}; char* value; _f28a5cda_optionalFile(const _f28a5cda_optionalFile &) = delete; } _f28a5cda_optionalFile;
typedef struct _f28a5cda_optionalLine { _f28a5cda_optionalLine(int value): value(value) {}; int value; _f28a5cda_optionalLine(const _f28a5cda_optionalLine &) = delete; } _f28a5cda_optionalLine;
typedef struct _f28a5cda_optionalUserData { _f28a5cda_optionalUserData(void* value): value(value) {}; void* value; _f28a5cda_optionalUserData(const _f28a5cda_optionalUserData &) = delete; } _f28a5cda_optionalUserData;
typedef struct _f28a5cda_rteParameters { _f28a5cda_rteParameters(void* value): value(value) {}; void* value; _f28a5cda_rteParameters(const _f28a5cda_rteParameters &) = delete; } _f28a5cda_rteParameters;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redRteRayTracingBuilderGetBlasGpuAddress(_f28a5cda_rayTracingBuilder & rayTracingBuilder, _f28a5cda_blasIndex & blasIndex, _f28a5cda_optionalFile & optionalFile, _f28a5cda_optionalLine & optionalLine, _f28a5cda_optionalUserData & optionalUserData, _f28a5cda_rteParameters & rteParameters) {
  return redRteRayTracingBuilderGetBlasGpuAddress(rayTracingBuilder.value, blasIndex.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteRayTracingBuilderBuildTlas redRteRayTracingBuilderBuildTlas
#define _3ba6a5b7_rayTracingBuilder(value) value
#define _3ba6a5b7_instancesCount(value) value
#define _3ba6a5b7_instances(value) value
#define _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(value) value
#define _3ba6a5b7_update(value) value
#define _3ba6a5b7_outStatuses(value) value
#define _3ba6a5b7_optionalFile(value) value
#define _3ba6a5b7_optionalLine(value) value
#define _3ba6a5b7_optionalUserData(value) value
#define _3ba6a5b7_rteParameters(value) value
#else
typedef struct _3ba6a5b7_rayTracingBuilder { _3ba6a5b7_rayTracingBuilder(RedRteHandleRayTracingBuilder value): value(value) {}; RedRteHandleRayTracingBuilder value; _3ba6a5b7_rayTracingBuilder(const _3ba6a5b7_rayTracingBuilder &) = delete; } _3ba6a5b7_rayTracingBuilder;
typedef struct _3ba6a5b7_instancesCount { _3ba6a5b7_instancesCount(unsigned value): value(value) {}; unsigned value; _3ba6a5b7_instancesCount(const _3ba6a5b7_instancesCount &) = delete; } _3ba6a5b7_instancesCount;
typedef struct _3ba6a5b7_instances { _3ba6a5b7_instances(RedRteRayTracingAccelerationStructureInstance* value): value(value) {}; RedRteRayTracingAccelerationStructureInstance* value; _3ba6a5b7_instances(const _3ba6a5b7_instances &) = delete; } _3ba6a5b7_instances;
typedef struct _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit { _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(unsigned value): value(value) {}; unsigned value; _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(const _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit &) = delete; } _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit;
typedef struct _3ba6a5b7_update { _3ba6a5b7_update(RedBool32 value): value(value) {}; RedBool32 value; _3ba6a5b7_update(const _3ba6a5b7_update &) = delete; } _3ba6a5b7_update;
typedef struct _3ba6a5b7_outStatuses { _3ba6a5b7_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _3ba6a5b7_outStatuses(const _3ba6a5b7_outStatuses &) = delete; } _3ba6a5b7_outStatuses;
typedef struct _3ba6a5b7_optionalFile { _3ba6a5b7_optionalFile(char* value): value(value) {}; char* value; _3ba6a5b7_optionalFile(const _3ba6a5b7_optionalFile &) = delete; } _3ba6a5b7_optionalFile;
typedef struct _3ba6a5b7_optionalLine { _3ba6a5b7_optionalLine(int value): value(value) {}; int value; _3ba6a5b7_optionalLine(const _3ba6a5b7_optionalLine &) = delete; } _3ba6a5b7_optionalLine;
typedef struct _3ba6a5b7_optionalUserData { _3ba6a5b7_optionalUserData(void* value): value(value) {}; void* value; _3ba6a5b7_optionalUserData(const _3ba6a5b7_optionalUserData &) = delete; } _3ba6a5b7_optionalUserData;
typedef struct _3ba6a5b7_rteParameters { _3ba6a5b7_rteParameters(void* value): value(value) {}; void* value; _3ba6a5b7_rteParameters(const _3ba6a5b7_rteParameters &) = delete; } _3ba6a5b7_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteRayTracingBuilderBuildTlas(_3ba6a5b7_rayTracingBuilder & rayTracingBuilder, _3ba6a5b7_instancesCount & instancesCount, _3ba6a5b7_instances & instances, _3ba6a5b7_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit & buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit, _3ba6a5b7_update & update, _3ba6a5b7_outStatuses & outStatuses, _3ba6a5b7_optionalFile & optionalFile, _3ba6a5b7_optionalLine & optionalLine, _3ba6a5b7_optionalUserData & optionalUserData, _3ba6a5b7_rteParameters & rteParameters) {
  return redRteRayTracingBuilderBuildTlas(rayTracingBuilder.value, instancesCount.value, instances.value, buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit.value, update.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteRayTracingBuilderGetTlas redRteRayTracingBuilderGetTlas
#define _f0e095a0_rayTracingBuilder(value) value
#define _f0e095a0_optionalFile(value) value
#define _f0e095a0_optionalLine(value) value
#define _f0e095a0_optionalUserData(value) value
#define _f0e095a0_rteParameters(value) value
#else
typedef struct _f0e095a0_rayTracingBuilder { _f0e095a0_rayTracingBuilder(RedRteHandleRayTracingBuilder value): value(value) {}; RedRteHandleRayTracingBuilder value; _f0e095a0_rayTracingBuilder(const _f0e095a0_rayTracingBuilder &) = delete; } _f0e095a0_rayTracingBuilder;
typedef struct _f0e095a0_optionalFile { _f0e095a0_optionalFile(char* value): value(value) {}; char* value; _f0e095a0_optionalFile(const _f0e095a0_optionalFile &) = delete; } _f0e095a0_optionalFile;
typedef struct _f0e095a0_optionalLine { _f0e095a0_optionalLine(int value): value(value) {}; int value; _f0e095a0_optionalLine(const _f0e095a0_optionalLine &) = delete; } _f0e095a0_optionalLine;
typedef struct _f0e095a0_optionalUserData { _f0e095a0_optionalUserData(void* value): value(value) {}; void* value; _f0e095a0_optionalUserData(const _f0e095a0_optionalUserData &) = delete; } _f0e095a0_optionalUserData;
typedef struct _f0e095a0_rteParameters { _f0e095a0_rteParameters(void* value): value(value) {}; void* value; _f0e095a0_rteParameters(const _f0e095a0_rteParameters &) = delete; } _f0e095a0_rteParameters;
REDGPU_NP_DECLSPEC RedRteHandleRayTracingAccelerationStructure REDGPU_NP_API np_redRteRayTracingBuilderGetTlas(_f0e095a0_rayTracingBuilder & rayTracingBuilder, _f0e095a0_optionalFile & optionalFile, _f0e095a0_optionalLine & optionalLine, _f0e095a0_optionalUserData & optionalUserData, _f0e095a0_rteParameters & rteParameters) {
  return redRteRayTracingBuilderGetTlas(rayTracingBuilder.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteRayTracingBuilderUpdateBlas redRteRayTracingBuilderUpdateBlas
#define _83ea9684_rayTracingBuilder(value) value
#define _83ea9684_blasIndex(value) value
#define _83ea9684_blasInput(value) value
#define _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(value) value
#define _83ea9684_outStatuses(value) value
#define _83ea9684_optionalFile(value) value
#define _83ea9684_optionalLine(value) value
#define _83ea9684_optionalUserData(value) value
#define _83ea9684_rteParameters(value) value
#else
typedef struct _83ea9684_rayTracingBuilder { _83ea9684_rayTracingBuilder(RedRteHandleRayTracingBuilder value): value(value) {}; RedRteHandleRayTracingBuilder value; _83ea9684_rayTracingBuilder(const _83ea9684_rayTracingBuilder &) = delete; } _83ea9684_rayTracingBuilder;
typedef struct _83ea9684_blasIndex { _83ea9684_blasIndex(unsigned value): value(value) {}; unsigned value; _83ea9684_blasIndex(const _83ea9684_blasIndex &) = delete; } _83ea9684_blasIndex;
typedef struct _83ea9684_blasInput { _83ea9684_blasInput(RedRteRayTracingBuilderBlasInput* value): value(value) {}; RedRteRayTracingBuilderBlasInput* value; _83ea9684_blasInput(const _83ea9684_blasInput &) = delete; } _83ea9684_blasInput;
typedef struct _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit { _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(unsigned value): value(value) {}; unsigned value; _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit(const _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit &) = delete; } _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit;
typedef struct _83ea9684_outStatuses { _83ea9684_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _83ea9684_outStatuses(const _83ea9684_outStatuses &) = delete; } _83ea9684_outStatuses;
typedef struct _83ea9684_optionalFile { _83ea9684_optionalFile(char* value): value(value) {}; char* value; _83ea9684_optionalFile(const _83ea9684_optionalFile &) = delete; } _83ea9684_optionalFile;
typedef struct _83ea9684_optionalLine { _83ea9684_optionalLine(int value): value(value) {}; int value; _83ea9684_optionalLine(const _83ea9684_optionalLine &) = delete; } _83ea9684_optionalLine;
typedef struct _83ea9684_optionalUserData { _83ea9684_optionalUserData(void* value): value(value) {}; void* value; _83ea9684_optionalUserData(const _83ea9684_optionalUserData &) = delete; } _83ea9684_optionalUserData;
typedef struct _83ea9684_rteParameters { _83ea9684_rteParameters(void* value): value(value) {}; void* value; _83ea9684_rteParameters(const _83ea9684_rteParameters &) = delete; } _83ea9684_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteRayTracingBuilderUpdateBlas(_83ea9684_rayTracingBuilder & rayTracingBuilder, _83ea9684_blasIndex & blasIndex, _83ea9684_blasInput & blasInput, _83ea9684_buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit & buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit, _83ea9684_outStatuses & outStatuses, _83ea9684_optionalFile & optionalFile, _83ea9684_optionalLine & optionalLine, _83ea9684_optionalUserData & optionalUserData, _83ea9684_rteParameters & rteParameters) {
  return redRteRayTracingBuilderUpdateBlas(rayTracingBuilder.value, blasIndex.value, blasInput.value, buildAccelerationStructureFlagsSuggestedDefaultValueIsBuildAccelerationStructurePreferFastTraceBit.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateDeferredOperation redRteCreateDeferredOperation
#define _797e3933_rteContext(value) value
#define _797e3933_outDeferredOperation(value) value
#define _797e3933_outStatuses(value) value
#define _797e3933_optionalFile(value) value
#define _797e3933_optionalLine(value) value
#define _797e3933_optionalUserData(value) value
#define _797e3933_rteParameters(value) value
#else
typedef struct _797e3933_rteContext { _797e3933_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _797e3933_rteContext(const _797e3933_rteContext &) = delete; } _797e3933_rteContext;
typedef struct _797e3933_outDeferredOperation { _797e3933_outDeferredOperation(RedRteHandleDeferredOperation* value): value(value) {}; RedRteHandleDeferredOperation* value; _797e3933_outDeferredOperation(const _797e3933_outDeferredOperation &) = delete; } _797e3933_outDeferredOperation;
typedef struct _797e3933_outStatuses { _797e3933_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _797e3933_outStatuses(const _797e3933_outStatuses &) = delete; } _797e3933_outStatuses;
typedef struct _797e3933_optionalFile { _797e3933_optionalFile(char* value): value(value) {}; char* value; _797e3933_optionalFile(const _797e3933_optionalFile &) = delete; } _797e3933_optionalFile;
typedef struct _797e3933_optionalLine { _797e3933_optionalLine(int value): value(value) {}; int value; _797e3933_optionalLine(const _797e3933_optionalLine &) = delete; } _797e3933_optionalLine;
typedef struct _797e3933_optionalUserData { _797e3933_optionalUserData(void* value): value(value) {}; void* value; _797e3933_optionalUserData(const _797e3933_optionalUserData &) = delete; } _797e3933_optionalUserData;
typedef struct _797e3933_rteParameters { _797e3933_rteParameters(void* value): value(value) {}; void* value; _797e3933_rteParameters(const _797e3933_rteParameters &) = delete; } _797e3933_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateDeferredOperation(_797e3933_rteContext & rteContext, _797e3933_outDeferredOperation & outDeferredOperation, _797e3933_outStatuses & outStatuses, _797e3933_optionalFile & optionalFile, _797e3933_optionalLine & optionalLine, _797e3933_optionalUserData & optionalUserData, _797e3933_rteParameters & rteParameters) {
  return redRteCreateDeferredOperation(rteContext.value, outDeferredOperation.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyDeferredOperation redRteDestroyDeferredOperation
#define _7cb483f3_rteContext(value) value
#define _7cb483f3_deferredOperation(value) value
#define _7cb483f3_optionalFile(value) value
#define _7cb483f3_optionalLine(value) value
#define _7cb483f3_optionalUserData(value) value
#define _7cb483f3_rteParameters(value) value
#else
typedef struct _7cb483f3_rteContext { _7cb483f3_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _7cb483f3_rteContext(const _7cb483f3_rteContext &) = delete; } _7cb483f3_rteContext;
typedef struct _7cb483f3_deferredOperation { _7cb483f3_deferredOperation(RedRteHandleDeferredOperation value): value(value) {}; RedRteHandleDeferredOperation value; _7cb483f3_deferredOperation(const _7cb483f3_deferredOperation &) = delete; } _7cb483f3_deferredOperation;
typedef struct _7cb483f3_optionalFile { _7cb483f3_optionalFile(char* value): value(value) {}; char* value; _7cb483f3_optionalFile(const _7cb483f3_optionalFile &) = delete; } _7cb483f3_optionalFile;
typedef struct _7cb483f3_optionalLine { _7cb483f3_optionalLine(int value): value(value) {}; int value; _7cb483f3_optionalLine(const _7cb483f3_optionalLine &) = delete; } _7cb483f3_optionalLine;
typedef struct _7cb483f3_optionalUserData { _7cb483f3_optionalUserData(void* value): value(value) {}; void* value; _7cb483f3_optionalUserData(const _7cb483f3_optionalUserData &) = delete; } _7cb483f3_optionalUserData;
typedef struct _7cb483f3_rteParameters { _7cb483f3_rteParameters(void* value): value(value) {}; void* value; _7cb483f3_rteParameters(const _7cb483f3_rteParameters &) = delete; } _7cb483f3_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyDeferredOperation(_7cb483f3_rteContext & rteContext, _7cb483f3_deferredOperation & deferredOperation, _7cb483f3_optionalFile & optionalFile, _7cb483f3_optionalLine & optionalLine, _7cb483f3_optionalUserData & optionalUserData, _7cb483f3_rteParameters & rteParameters) {
  return redRteDestroyDeferredOperation(rteContext.value, deferredOperation.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDeferredOperationGetMaxConcurrency redRteDeferredOperationGetMaxConcurrency
#define _bc0d9b5c_rteContext(value) value
#define _bc0d9b5c_deferredOperation(value) value
#define _bc0d9b5c_optionalFile(value) value
#define _bc0d9b5c_optionalLine(value) value
#define _bc0d9b5c_optionalUserData(value) value
#define _bc0d9b5c_rteParameters(value) value
#else
typedef struct _bc0d9b5c_rteContext { _bc0d9b5c_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _bc0d9b5c_rteContext(const _bc0d9b5c_rteContext &) = delete; } _bc0d9b5c_rteContext;
typedef struct _bc0d9b5c_deferredOperation { _bc0d9b5c_deferredOperation(RedRteHandleDeferredOperation value): value(value) {}; RedRteHandleDeferredOperation value; _bc0d9b5c_deferredOperation(const _bc0d9b5c_deferredOperation &) = delete; } _bc0d9b5c_deferredOperation;
typedef struct _bc0d9b5c_optionalFile { _bc0d9b5c_optionalFile(char* value): value(value) {}; char* value; _bc0d9b5c_optionalFile(const _bc0d9b5c_optionalFile &) = delete; } _bc0d9b5c_optionalFile;
typedef struct _bc0d9b5c_optionalLine { _bc0d9b5c_optionalLine(int value): value(value) {}; int value; _bc0d9b5c_optionalLine(const _bc0d9b5c_optionalLine &) = delete; } _bc0d9b5c_optionalLine;
typedef struct _bc0d9b5c_optionalUserData { _bc0d9b5c_optionalUserData(void* value): value(value) {}; void* value; _bc0d9b5c_optionalUserData(const _bc0d9b5c_optionalUserData &) = delete; } _bc0d9b5c_optionalUserData;
typedef struct _bc0d9b5c_rteParameters { _bc0d9b5c_rteParameters(void* value): value(value) {}; void* value; _bc0d9b5c_rteParameters(const _bc0d9b5c_rteParameters &) = delete; } _bc0d9b5c_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDeferredOperationGetMaxConcurrency(_bc0d9b5c_rteContext & rteContext, _bc0d9b5c_deferredOperation & deferredOperation, _bc0d9b5c_optionalFile & optionalFile, _bc0d9b5c_optionalLine & optionalLine, _bc0d9b5c_optionalUserData & optionalUserData, _bc0d9b5c_rteParameters & rteParameters) {
  return redRteDeferredOperationGetMaxConcurrency(rteContext.value, deferredOperation.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDeferredOperationGetStatus redRteDeferredOperationGetStatus
#define _59fcedec_rteContext(value) value
#define _59fcedec_deferredOperation(value) value
#define _59fcedec_optionalFile(value) value
#define _59fcedec_optionalLine(value) value
#define _59fcedec_optionalUserData(value) value
#define _59fcedec_rteParameters(value) value
#else
typedef struct _59fcedec_rteContext { _59fcedec_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _59fcedec_rteContext(const _59fcedec_rteContext &) = delete; } _59fcedec_rteContext;
typedef struct _59fcedec_deferredOperation { _59fcedec_deferredOperation(RedRteHandleDeferredOperation value): value(value) {}; RedRteHandleDeferredOperation value; _59fcedec_deferredOperation(const _59fcedec_deferredOperation &) = delete; } _59fcedec_deferredOperation;
typedef struct _59fcedec_optionalFile { _59fcedec_optionalFile(char* value): value(value) {}; char* value; _59fcedec_optionalFile(const _59fcedec_optionalFile &) = delete; } _59fcedec_optionalFile;
typedef struct _59fcedec_optionalLine { _59fcedec_optionalLine(int value): value(value) {}; int value; _59fcedec_optionalLine(const _59fcedec_optionalLine &) = delete; } _59fcedec_optionalLine;
typedef struct _59fcedec_optionalUserData { _59fcedec_optionalUserData(void* value): value(value) {}; void* value; _59fcedec_optionalUserData(const _59fcedec_optionalUserData &) = delete; } _59fcedec_optionalUserData;
typedef struct _59fcedec_rteParameters { _59fcedec_rteParameters(void* value): value(value) {}; void* value; _59fcedec_rteParameters(const _59fcedec_rteParameters &) = delete; } _59fcedec_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDeferredOperationGetStatus(_59fcedec_rteContext & rteContext, _59fcedec_deferredOperation & deferredOperation, _59fcedec_optionalFile & optionalFile, _59fcedec_optionalLine & optionalLine, _59fcedec_optionalUserData & optionalUserData, _59fcedec_rteParameters & rteParameters) {
  return redRteDeferredOperationGetStatus(rteContext.value, deferredOperation.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDeferredOperationJoin redRteDeferredOperationJoin
#define _0b570ac4_rteContext(value) value
#define _0b570ac4_deferredOperation(value) value
#define _0b570ac4_optionalFile(value) value
#define _0b570ac4_optionalLine(value) value
#define _0b570ac4_optionalUserData(value) value
#define _0b570ac4_rteParameters(value) value
#else
typedef struct _0b570ac4_rteContext { _0b570ac4_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _0b570ac4_rteContext(const _0b570ac4_rteContext &) = delete; } _0b570ac4_rteContext;
typedef struct _0b570ac4_deferredOperation { _0b570ac4_deferredOperation(RedRteHandleDeferredOperation value): value(value) {}; RedRteHandleDeferredOperation value; _0b570ac4_deferredOperation(const _0b570ac4_deferredOperation &) = delete; } _0b570ac4_deferredOperation;
typedef struct _0b570ac4_optionalFile { _0b570ac4_optionalFile(char* value): value(value) {}; char* value; _0b570ac4_optionalFile(const _0b570ac4_optionalFile &) = delete; } _0b570ac4_optionalFile;
typedef struct _0b570ac4_optionalLine { _0b570ac4_optionalLine(int value): value(value) {}; int value; _0b570ac4_optionalLine(const _0b570ac4_optionalLine &) = delete; } _0b570ac4_optionalLine;
typedef struct _0b570ac4_optionalUserData { _0b570ac4_optionalUserData(void* value): value(value) {}; void* value; _0b570ac4_optionalUserData(const _0b570ac4_optionalUserData &) = delete; } _0b570ac4_optionalUserData;
typedef struct _0b570ac4_rteParameters { _0b570ac4_rteParameters(void* value): value(value) {}; void* value; _0b570ac4_rteParameters(const _0b570ac4_rteParameters &) = delete; } _0b570ac4_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDeferredOperationJoin(_0b570ac4_rteContext & rteContext, _0b570ac4_deferredOperation & deferredOperation, _0b570ac4_optionalFile & optionalFile, _0b570ac4_optionalLine & optionalLine, _0b570ac4_optionalUserData & optionalUserData, _0b570ac4_rteParameters & rteParameters) {
  return redRteDeferredOperationJoin(rteContext.value, deferredOperation.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateProcedureRayTracing redRteCreateProcedureRayTracing
#define _7b5ae618_rteContext(value) value
#define _7b5ae618_deferredOperation(value) value
#define _7b5ae618_procedureCache(value) value
#define _7b5ae618_state(value) value
#define _7b5ae618_outProcedure(value) value
#define _7b5ae618_outStatuses(value) value
#define _7b5ae618_optionalFile(value) value
#define _7b5ae618_optionalLine(value) value
#define _7b5ae618_optionalUserData(value) value
#define _7b5ae618_rteParameters(value) value
#else
typedef struct _7b5ae618_rteContext { _7b5ae618_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _7b5ae618_rteContext(const _7b5ae618_rteContext &) = delete; } _7b5ae618_rteContext;
typedef struct _7b5ae618_deferredOperation { _7b5ae618_deferredOperation(RedRteHandleDeferredOperation value): value(value) {}; RedRteHandleDeferredOperation value; _7b5ae618_deferredOperation(const _7b5ae618_deferredOperation &) = delete; } _7b5ae618_deferredOperation;
typedef struct _7b5ae618_procedureCache { _7b5ae618_procedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _7b5ae618_procedureCache(const _7b5ae618_procedureCache &) = delete; } _7b5ae618_procedureCache;
typedef struct _7b5ae618_state { _7b5ae618_state(RedRteProcedureRayTracingState* value): value(value) {}; RedRteProcedureRayTracingState* value; _7b5ae618_state(const _7b5ae618_state &) = delete; } _7b5ae618_state;
typedef struct _7b5ae618_outProcedure { _7b5ae618_outProcedure(RedHandleProcedure* value): value(value) {}; RedHandleProcedure* value; _7b5ae618_outProcedure(const _7b5ae618_outProcedure &) = delete; } _7b5ae618_outProcedure;
typedef struct _7b5ae618_outStatuses { _7b5ae618_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _7b5ae618_outStatuses(const _7b5ae618_outStatuses &) = delete; } _7b5ae618_outStatuses;
typedef struct _7b5ae618_optionalFile { _7b5ae618_optionalFile(char* value): value(value) {}; char* value; _7b5ae618_optionalFile(const _7b5ae618_optionalFile &) = delete; } _7b5ae618_optionalFile;
typedef struct _7b5ae618_optionalLine { _7b5ae618_optionalLine(int value): value(value) {}; int value; _7b5ae618_optionalLine(const _7b5ae618_optionalLine &) = delete; } _7b5ae618_optionalLine;
typedef struct _7b5ae618_optionalUserData { _7b5ae618_optionalUserData(void* value): value(value) {}; void* value; _7b5ae618_optionalUserData(const _7b5ae618_optionalUserData &) = delete; } _7b5ae618_optionalUserData;
typedef struct _7b5ae618_rteParameters { _7b5ae618_rteParameters(void* value): value(value) {}; void* value; _7b5ae618_rteParameters(const _7b5ae618_rteParameters &) = delete; } _7b5ae618_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateProcedureRayTracing(_7b5ae618_rteContext & rteContext, _7b5ae618_deferredOperation & deferredOperation, _7b5ae618_procedureCache & procedureCache, _7b5ae618_state & state, _7b5ae618_outProcedure & outProcedure, _7b5ae618_outStatuses & outStatuses, _7b5ae618_optionalFile & optionalFile, _7b5ae618_optionalLine & optionalLine, _7b5ae618_optionalUserData & optionalUserData, _7b5ae618_rteParameters & rteParameters) {
  return redRteCreateProcedureRayTracing(rteContext.value, deferredOperation.value, procedureCache.value, state.value, outProcedure.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteProcedureRayTracingGetGroupCaptureReplayHandles redRteProcedureRayTracingGetGroupCaptureReplayHandles
#define _c744c963_rteContext(value) value
#define _c744c963_procedureRayTracing(value) value
#define _c744c963_groupIndexFirst(value) value
#define _c744c963_groupIndexCount(value) value
#define _c744c963_dataBytesCount(value) value
#define _c744c963_data(value) value
#define _c744c963_optionalFile(value) value
#define _c744c963_optionalLine(value) value
#define _c744c963_optionalUserData(value) value
#define _c744c963_rteParameters(value) value
#else
typedef struct _c744c963_rteContext { _c744c963_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _c744c963_rteContext(const _c744c963_rteContext &) = delete; } _c744c963_rteContext;
typedef struct _c744c963_procedureRayTracing { _c744c963_procedureRayTracing(RedHandleProcedure value): value(value) {}; RedHandleProcedure value; _c744c963_procedureRayTracing(const _c744c963_procedureRayTracing &) = delete; } _c744c963_procedureRayTracing;
typedef struct _c744c963_groupIndexFirst { _c744c963_groupIndexFirst(unsigned value): value(value) {}; unsigned value; _c744c963_groupIndexFirst(const _c744c963_groupIndexFirst &) = delete; } _c744c963_groupIndexFirst;
typedef struct _c744c963_groupIndexCount { _c744c963_groupIndexCount(unsigned value): value(value) {}; unsigned value; _c744c963_groupIndexCount(const _c744c963_groupIndexCount &) = delete; } _c744c963_groupIndexCount;
typedef struct _c744c963_dataBytesCount { _c744c963_dataBytesCount(uint64_t value): value(value) {}; uint64_t value; _c744c963_dataBytesCount(const _c744c963_dataBytesCount &) = delete; } _c744c963_dataBytesCount;
typedef struct _c744c963_data { _c744c963_data(void* value): value(value) {}; void* value; _c744c963_data(const _c744c963_data &) = delete; } _c744c963_data;
typedef struct _c744c963_optionalFile { _c744c963_optionalFile(char* value): value(value) {}; char* value; _c744c963_optionalFile(const _c744c963_optionalFile &) = delete; } _c744c963_optionalFile;
typedef struct _c744c963_optionalLine { _c744c963_optionalLine(int value): value(value) {}; int value; _c744c963_optionalLine(const _c744c963_optionalLine &) = delete; } _c744c963_optionalLine;
typedef struct _c744c963_optionalUserData { _c744c963_optionalUserData(void* value): value(value) {}; void* value; _c744c963_optionalUserData(const _c744c963_optionalUserData &) = delete; } _c744c963_optionalUserData;
typedef struct _c744c963_rteParameters { _c744c963_rteParameters(void* value): value(value) {}; void* value; _c744c963_rteParameters(const _c744c963_rteParameters &) = delete; } _c744c963_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteProcedureRayTracingGetGroupCaptureReplayHandles(_c744c963_rteContext & rteContext, _c744c963_procedureRayTracing & procedureRayTracing, _c744c963_groupIndexFirst & groupIndexFirst, _c744c963_groupIndexCount & groupIndexCount, _c744c963_dataBytesCount & dataBytesCount, _c744c963_data & data, _c744c963_optionalFile & optionalFile, _c744c963_optionalLine & optionalLine, _c744c963_optionalUserData & optionalUserData, _c744c963_rteParameters & rteParameters) {
  return redRteProcedureRayTracingGetGroupCaptureReplayHandles(rteContext.value, procedureRayTracing.value, groupIndexFirst.value, groupIndexCount.value, dataBytesCount.value, data.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteProcedureRayTracingGetGroupStackBytesCount redRteProcedureRayTracingGetGroupStackBytesCount
#define _21b9ff50_rteContext(value) value
#define _21b9ff50_procedureRayTracing(value) value
#define _21b9ff50_groupIndex(value) value
#define _21b9ff50_groupStage(value) value
#define _21b9ff50_optionalFile(value) value
#define _21b9ff50_optionalLine(value) value
#define _21b9ff50_optionalUserData(value) value
#define _21b9ff50_rteParameters(value) value
#else
typedef struct _21b9ff50_rteContext { _21b9ff50_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _21b9ff50_rteContext(const _21b9ff50_rteContext &) = delete; } _21b9ff50_rteContext;
typedef struct _21b9ff50_procedureRayTracing { _21b9ff50_procedureRayTracing(RedHandleProcedure value): value(value) {}; RedHandleProcedure value; _21b9ff50_procedureRayTracing(const _21b9ff50_procedureRayTracing &) = delete; } _21b9ff50_procedureRayTracing;
typedef struct _21b9ff50_groupIndex { _21b9ff50_groupIndex(unsigned value): value(value) {}; unsigned value; _21b9ff50_groupIndex(const _21b9ff50_groupIndex &) = delete; } _21b9ff50_groupIndex;
typedef struct _21b9ff50_groupStage { _21b9ff50_groupStage(RedRteProcedureRayTracingGroupStage value): value(value) {}; RedRteProcedureRayTracingGroupStage value; _21b9ff50_groupStage(const _21b9ff50_groupStage &) = delete; } _21b9ff50_groupStage;
typedef struct _21b9ff50_optionalFile { _21b9ff50_optionalFile(char* value): value(value) {}; char* value; _21b9ff50_optionalFile(const _21b9ff50_optionalFile &) = delete; } _21b9ff50_optionalFile;
typedef struct _21b9ff50_optionalLine { _21b9ff50_optionalLine(int value): value(value) {}; int value; _21b9ff50_optionalLine(const _21b9ff50_optionalLine &) = delete; } _21b9ff50_optionalLine;
typedef struct _21b9ff50_optionalUserData { _21b9ff50_optionalUserData(void* value): value(value) {}; void* value; _21b9ff50_optionalUserData(const _21b9ff50_optionalUserData &) = delete; } _21b9ff50_optionalUserData;
typedef struct _21b9ff50_rteParameters { _21b9ff50_rteParameters(void* value): value(value) {}; void* value; _21b9ff50_rteParameters(const _21b9ff50_rteParameters &) = delete; } _21b9ff50_rteParameters;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redRteProcedureRayTracingGetGroupStackBytesCount(_21b9ff50_rteContext & rteContext, _21b9ff50_procedureRayTracing & procedureRayTracing, _21b9ff50_groupIndex & groupIndex, _21b9ff50_groupStage & groupStage, _21b9ff50_optionalFile & optionalFile, _21b9ff50_optionalLine & optionalLine, _21b9ff50_optionalUserData & optionalUserData, _21b9ff50_rteParameters & rteParameters) {
  return redRteProcedureRayTracingGetGroupStackBytesCount(rteContext.value, procedureRayTracing.value, groupIndex.value, groupStage.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallProcedureRayTracing redRteCallProcedureRayTracing
#define _309e3803_calls(value) value
#define _309e3803_rteContext(value) value
#define _309e3803_shaderBindingTableRayGeneration(value) value
#define _309e3803_shaderBindingTableMiss(value) value
#define _309e3803_shaderBindingTableHit(value) value
#define _309e3803_shaderBindingTableCallable(value) value
#define _309e3803_threadsCountX(value) value
#define _309e3803_threadsCountY(value) value
#define _309e3803_threadsCountZ(value) value
#define _309e3803_optionalFile(value) value
#define _309e3803_optionalLine(value) value
#define _309e3803_optionalUserData(value) value
#define _309e3803_rteParameters(value) value
#else
typedef struct _309e3803_calls { _309e3803_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _309e3803_calls(const _309e3803_calls &) = delete; } _309e3803_calls;
typedef struct _309e3803_rteContext { _309e3803_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _309e3803_rteContext(const _309e3803_rteContext &) = delete; } _309e3803_rteContext;
typedef struct _309e3803_shaderBindingTableRayGeneration { _309e3803_shaderBindingTableRayGeneration(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _309e3803_shaderBindingTableRayGeneration(const _309e3803_shaderBindingTableRayGeneration &) = delete; } _309e3803_shaderBindingTableRayGeneration;
typedef struct _309e3803_shaderBindingTableMiss { _309e3803_shaderBindingTableMiss(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _309e3803_shaderBindingTableMiss(const _309e3803_shaderBindingTableMiss &) = delete; } _309e3803_shaderBindingTableMiss;
typedef struct _309e3803_shaderBindingTableHit { _309e3803_shaderBindingTableHit(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _309e3803_shaderBindingTableHit(const _309e3803_shaderBindingTableHit &) = delete; } _309e3803_shaderBindingTableHit;
typedef struct _309e3803_shaderBindingTableCallable { _309e3803_shaderBindingTableCallable(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _309e3803_shaderBindingTableCallable(const _309e3803_shaderBindingTableCallable &) = delete; } _309e3803_shaderBindingTableCallable;
typedef struct _309e3803_threadsCountX { _309e3803_threadsCountX(unsigned value): value(value) {}; unsigned value; _309e3803_threadsCountX(const _309e3803_threadsCountX &) = delete; } _309e3803_threadsCountX;
typedef struct _309e3803_threadsCountY { _309e3803_threadsCountY(unsigned value): value(value) {}; unsigned value; _309e3803_threadsCountY(const _309e3803_threadsCountY &) = delete; } _309e3803_threadsCountY;
typedef struct _309e3803_threadsCountZ { _309e3803_threadsCountZ(unsigned value): value(value) {}; unsigned value; _309e3803_threadsCountZ(const _309e3803_threadsCountZ &) = delete; } _309e3803_threadsCountZ;
typedef struct _309e3803_optionalFile { _309e3803_optionalFile(char* value): value(value) {}; char* value; _309e3803_optionalFile(const _309e3803_optionalFile &) = delete; } _309e3803_optionalFile;
typedef struct _309e3803_optionalLine { _309e3803_optionalLine(int value): value(value) {}; int value; _309e3803_optionalLine(const _309e3803_optionalLine &) = delete; } _309e3803_optionalLine;
typedef struct _309e3803_optionalUserData { _309e3803_optionalUserData(void* value): value(value) {}; void* value; _309e3803_optionalUserData(const _309e3803_optionalUserData &) = delete; } _309e3803_optionalUserData;
typedef struct _309e3803_rteParameters { _309e3803_rteParameters(void* value): value(value) {}; void* value; _309e3803_rteParameters(const _309e3803_rteParameters &) = delete; } _309e3803_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallProcedureRayTracing(_309e3803_calls & calls, _309e3803_rteContext & rteContext, _309e3803_shaderBindingTableRayGeneration & shaderBindingTableRayGeneration, _309e3803_shaderBindingTableMiss & shaderBindingTableMiss, _309e3803_shaderBindingTableHit & shaderBindingTableHit, _309e3803_shaderBindingTableCallable & shaderBindingTableCallable, _309e3803_threadsCountX & threadsCountX, _309e3803_threadsCountY & threadsCountY, _309e3803_threadsCountZ & threadsCountZ, _309e3803_optionalFile & optionalFile, _309e3803_optionalLine & optionalLine, _309e3803_optionalUserData & optionalUserData, _309e3803_rteParameters & rteParameters) {
  return redRteCallProcedureRayTracing(calls.value, rteContext.value, shaderBindingTableRayGeneration.value, shaderBindingTableMiss.value, shaderBindingTableHit.value, shaderBindingTableCallable.value, threadsCountX.value, threadsCountY.value, threadsCountZ.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallProcedureIndirect redRteCallProcedureIndirect
#define _bee0588e_calls(value) value
#define _bee0588e_rteContext(value) value
#define _bee0588e_array(value) value
#define _bee0588e_arrayBytesFirst(value) value
#define _bee0588e_count(value) value
#define _bee0588e_bytesStride(value) value
#define _bee0588e_optionalFile(value) value
#define _bee0588e_optionalLine(value) value
#define _bee0588e_optionalUserData(value) value
#define _bee0588e_rteParameters(value) value
#else
typedef struct _bee0588e_calls { _bee0588e_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _bee0588e_calls(const _bee0588e_calls &) = delete; } _bee0588e_calls;
typedef struct _bee0588e_rteContext { _bee0588e_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _bee0588e_rteContext(const _bee0588e_rteContext &) = delete; } _bee0588e_rteContext;
typedef struct _bee0588e_array { _bee0588e_array(RedHandleArray value): value(value) {}; RedHandleArray value; _bee0588e_array(const _bee0588e_array &) = delete; } _bee0588e_array;
typedef struct _bee0588e_arrayBytesFirst { _bee0588e_arrayBytesFirst(uint64_t value): value(value) {}; uint64_t value; _bee0588e_arrayBytesFirst(const _bee0588e_arrayBytesFirst &) = delete; } _bee0588e_arrayBytesFirst;
typedef struct _bee0588e_count { _bee0588e_count(unsigned value): value(value) {}; unsigned value; _bee0588e_count(const _bee0588e_count &) = delete; } _bee0588e_count;
typedef struct _bee0588e_bytesStride { _bee0588e_bytesStride(unsigned value): value(value) {}; unsigned value; _bee0588e_bytesStride(const _bee0588e_bytesStride &) = delete; } _bee0588e_bytesStride;
typedef struct _bee0588e_optionalFile { _bee0588e_optionalFile(char* value): value(value) {}; char* value; _bee0588e_optionalFile(const _bee0588e_optionalFile &) = delete; } _bee0588e_optionalFile;
typedef struct _bee0588e_optionalLine { _bee0588e_optionalLine(int value): value(value) {}; int value; _bee0588e_optionalLine(const _bee0588e_optionalLine &) = delete; } _bee0588e_optionalLine;
typedef struct _bee0588e_optionalUserData { _bee0588e_optionalUserData(void* value): value(value) {}; void* value; _bee0588e_optionalUserData(const _bee0588e_optionalUserData &) = delete; } _bee0588e_optionalUserData;
typedef struct _bee0588e_rteParameters { _bee0588e_rteParameters(void* value): value(value) {}; void* value; _bee0588e_rteParameters(const _bee0588e_rteParameters &) = delete; } _bee0588e_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallProcedureIndirect(_bee0588e_calls & calls, _bee0588e_rteContext & rteContext, _bee0588e_array & array, _bee0588e_arrayBytesFirst & arrayBytesFirst, _bee0588e_count & count, _bee0588e_bytesStride & bytesStride, _bee0588e_optionalFile & optionalFile, _bee0588e_optionalLine & optionalLine, _bee0588e_optionalUserData & optionalUserData, _bee0588e_rteParameters & rteParameters) {
  return redRteCallProcedureIndirect(calls.value, rteContext.value, array.value, arrayBytesFirst.value, count.value, bytesStride.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallProcedureIndexedIndirect redRteCallProcedureIndexedIndirect
#define _b92d986c_calls(value) value
#define _b92d986c_rteContext(value) value
#define _b92d986c_array(value) value
#define _b92d986c_arrayBytesFirst(value) value
#define _b92d986c_count(value) value
#define _b92d986c_bytesStride(value) value
#define _b92d986c_optionalFile(value) value
#define _b92d986c_optionalLine(value) value
#define _b92d986c_optionalUserData(value) value
#define _b92d986c_rteParameters(value) value
#else
typedef struct _b92d986c_calls { _b92d986c_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _b92d986c_calls(const _b92d986c_calls &) = delete; } _b92d986c_calls;
typedef struct _b92d986c_rteContext { _b92d986c_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _b92d986c_rteContext(const _b92d986c_rteContext &) = delete; } _b92d986c_rteContext;
typedef struct _b92d986c_array { _b92d986c_array(RedHandleArray value): value(value) {}; RedHandleArray value; _b92d986c_array(const _b92d986c_array &) = delete; } _b92d986c_array;
typedef struct _b92d986c_arrayBytesFirst { _b92d986c_arrayBytesFirst(uint64_t value): value(value) {}; uint64_t value; _b92d986c_arrayBytesFirst(const _b92d986c_arrayBytesFirst &) = delete; } _b92d986c_arrayBytesFirst;
typedef struct _b92d986c_count { _b92d986c_count(unsigned value): value(value) {}; unsigned value; _b92d986c_count(const _b92d986c_count &) = delete; } _b92d986c_count;
typedef struct _b92d986c_bytesStride { _b92d986c_bytesStride(unsigned value): value(value) {}; unsigned value; _b92d986c_bytesStride(const _b92d986c_bytesStride &) = delete; } _b92d986c_bytesStride;
typedef struct _b92d986c_optionalFile { _b92d986c_optionalFile(char* value): value(value) {}; char* value; _b92d986c_optionalFile(const _b92d986c_optionalFile &) = delete; } _b92d986c_optionalFile;
typedef struct _b92d986c_optionalLine { _b92d986c_optionalLine(int value): value(value) {}; int value; _b92d986c_optionalLine(const _b92d986c_optionalLine &) = delete; } _b92d986c_optionalLine;
typedef struct _b92d986c_optionalUserData { _b92d986c_optionalUserData(void* value): value(value) {}; void* value; _b92d986c_optionalUserData(const _b92d986c_optionalUserData &) = delete; } _b92d986c_optionalUserData;
typedef struct _b92d986c_rteParameters { _b92d986c_rteParameters(void* value): value(value) {}; void* value; _b92d986c_rteParameters(const _b92d986c_rteParameters &) = delete; } _b92d986c_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallProcedureIndexedIndirect(_b92d986c_calls & calls, _b92d986c_rteContext & rteContext, _b92d986c_array & array, _b92d986c_arrayBytesFirst & arrayBytesFirst, _b92d986c_count & count, _b92d986c_bytesStride & bytesStride, _b92d986c_optionalFile & optionalFile, _b92d986c_optionalLine & optionalLine, _b92d986c_optionalUserData & optionalUserData, _b92d986c_rteParameters & rteParameters) {
  return redRteCallProcedureIndexedIndirect(calls.value, rteContext.value, array.value, arrayBytesFirst.value, count.value, bytesStride.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallProcedureComputeIndirect redRteCallProcedureComputeIndirect
#define _73c9536a_calls(value) value
#define _73c9536a_rteContext(value) value
#define _73c9536a_array(value) value
#define _73c9536a_arrayBytesFirst(value) value
#define _73c9536a_optionalFile(value) value
#define _73c9536a_optionalLine(value) value
#define _73c9536a_optionalUserData(value) value
#define _73c9536a_rteParameters(value) value
#else
typedef struct _73c9536a_calls { _73c9536a_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _73c9536a_calls(const _73c9536a_calls &) = delete; } _73c9536a_calls;
typedef struct _73c9536a_rteContext { _73c9536a_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _73c9536a_rteContext(const _73c9536a_rteContext &) = delete; } _73c9536a_rteContext;
typedef struct _73c9536a_array { _73c9536a_array(RedHandleArray value): value(value) {}; RedHandleArray value; _73c9536a_array(const _73c9536a_array &) = delete; } _73c9536a_array;
typedef struct _73c9536a_arrayBytesFirst { _73c9536a_arrayBytesFirst(uint64_t value): value(value) {}; uint64_t value; _73c9536a_arrayBytesFirst(const _73c9536a_arrayBytesFirst &) = delete; } _73c9536a_arrayBytesFirst;
typedef struct _73c9536a_optionalFile { _73c9536a_optionalFile(char* value): value(value) {}; char* value; _73c9536a_optionalFile(const _73c9536a_optionalFile &) = delete; } _73c9536a_optionalFile;
typedef struct _73c9536a_optionalLine { _73c9536a_optionalLine(int value): value(value) {}; int value; _73c9536a_optionalLine(const _73c9536a_optionalLine &) = delete; } _73c9536a_optionalLine;
typedef struct _73c9536a_optionalUserData { _73c9536a_optionalUserData(void* value): value(value) {}; void* value; _73c9536a_optionalUserData(const _73c9536a_optionalUserData &) = delete; } _73c9536a_optionalUserData;
typedef struct _73c9536a_rteParameters { _73c9536a_rteParameters(void* value): value(value) {}; void* value; _73c9536a_rteParameters(const _73c9536a_rteParameters &) = delete; } _73c9536a_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallProcedureComputeIndirect(_73c9536a_calls & calls, _73c9536a_rteContext & rteContext, _73c9536a_array & array, _73c9536a_arrayBytesFirst & arrayBytesFirst, _73c9536a_optionalFile & optionalFile, _73c9536a_optionalLine & optionalLine, _73c9536a_optionalUserData & optionalUserData, _73c9536a_rteParameters & rteParameters) {
  return redRteCallProcedureComputeIndirect(calls.value, rteContext.value, array.value, arrayBytesFirst.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallProcedureRayTracingIndirect redRteCallProcedureRayTracingIndirect
#define _81bb4a78_calls(value) value
#define _81bb4a78_rteContext(value) value
#define _81bb4a78_shaderBindingTableRayGeneration(value) value
#define _81bb4a78_shaderBindingTableMiss(value) value
#define _81bb4a78_shaderBindingTableHit(value) value
#define _81bb4a78_shaderBindingTableCallable(value) value
#define _81bb4a78_gpuAddress(value) value
#define _81bb4a78_optionalFile(value) value
#define _81bb4a78_optionalLine(value) value
#define _81bb4a78_optionalUserData(value) value
#define _81bb4a78_rteParameters(value) value
#else
typedef struct _81bb4a78_calls { _81bb4a78_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _81bb4a78_calls(const _81bb4a78_calls &) = delete; } _81bb4a78_calls;
typedef struct _81bb4a78_rteContext { _81bb4a78_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _81bb4a78_rteContext(const _81bb4a78_rteContext &) = delete; } _81bb4a78_rteContext;
typedef struct _81bb4a78_shaderBindingTableRayGeneration { _81bb4a78_shaderBindingTableRayGeneration(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _81bb4a78_shaderBindingTableRayGeneration(const _81bb4a78_shaderBindingTableRayGeneration &) = delete; } _81bb4a78_shaderBindingTableRayGeneration;
typedef struct _81bb4a78_shaderBindingTableMiss { _81bb4a78_shaderBindingTableMiss(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _81bb4a78_shaderBindingTableMiss(const _81bb4a78_shaderBindingTableMiss &) = delete; } _81bb4a78_shaderBindingTableMiss;
typedef struct _81bb4a78_shaderBindingTableHit { _81bb4a78_shaderBindingTableHit(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _81bb4a78_shaderBindingTableHit(const _81bb4a78_shaderBindingTableHit &) = delete; } _81bb4a78_shaderBindingTableHit;
typedef struct _81bb4a78_shaderBindingTableCallable { _81bb4a78_shaderBindingTableCallable(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _81bb4a78_shaderBindingTableCallable(const _81bb4a78_shaderBindingTableCallable &) = delete; } _81bb4a78_shaderBindingTableCallable;
typedef struct _81bb4a78_gpuAddress { _81bb4a78_gpuAddress(uint64_t value): value(value) {}; uint64_t value; _81bb4a78_gpuAddress(const _81bb4a78_gpuAddress &) = delete; } _81bb4a78_gpuAddress;
typedef struct _81bb4a78_optionalFile { _81bb4a78_optionalFile(char* value): value(value) {}; char* value; _81bb4a78_optionalFile(const _81bb4a78_optionalFile &) = delete; } _81bb4a78_optionalFile;
typedef struct _81bb4a78_optionalLine { _81bb4a78_optionalLine(int value): value(value) {}; int value; _81bb4a78_optionalLine(const _81bb4a78_optionalLine &) = delete; } _81bb4a78_optionalLine;
typedef struct _81bb4a78_optionalUserData { _81bb4a78_optionalUserData(void* value): value(value) {}; void* value; _81bb4a78_optionalUserData(const _81bb4a78_optionalUserData &) = delete; } _81bb4a78_optionalUserData;
typedef struct _81bb4a78_rteParameters { _81bb4a78_rteParameters(void* value): value(value) {}; void* value; _81bb4a78_rteParameters(const _81bb4a78_rteParameters &) = delete; } _81bb4a78_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallProcedureRayTracingIndirect(_81bb4a78_calls & calls, _81bb4a78_rteContext & rteContext, _81bb4a78_shaderBindingTableRayGeneration & shaderBindingTableRayGeneration, _81bb4a78_shaderBindingTableMiss & shaderBindingTableMiss, _81bb4a78_shaderBindingTableHit & shaderBindingTableHit, _81bb4a78_shaderBindingTableCallable & shaderBindingTableCallable, _81bb4a78_gpuAddress & gpuAddress, _81bb4a78_optionalFile & optionalFile, _81bb4a78_optionalLine & optionalLine, _81bb4a78_optionalUserData & optionalUserData, _81bb4a78_rteParameters & rteParameters) {
  return redRteCallProcedureRayTracingIndirect(calls.value, rteContext.value, shaderBindingTableRayGeneration.value, shaderBindingTableMiss.value, shaderBindingTableHit.value, shaderBindingTableCallable.value, gpuAddress.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallSetProcedureRayTracingStackBytesCount redRteCallSetProcedureRayTracingStackBytesCount
#define _af0e50cd_calls(value) value
#define _af0e50cd_rteContext(value) value
#define _af0e50cd_stackBytesCount(value) value
#define _af0e50cd_optionalFile(value) value
#define _af0e50cd_optionalLine(value) value
#define _af0e50cd_optionalUserData(value) value
#define _af0e50cd_rteParameters(value) value
#else
typedef struct _af0e50cd_calls { _af0e50cd_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _af0e50cd_calls(const _af0e50cd_calls &) = delete; } _af0e50cd_calls;
typedef struct _af0e50cd_rteContext { _af0e50cd_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _af0e50cd_rteContext(const _af0e50cd_rteContext &) = delete; } _af0e50cd_rteContext;
typedef struct _af0e50cd_stackBytesCount { _af0e50cd_stackBytesCount(unsigned value): value(value) {}; unsigned value; _af0e50cd_stackBytesCount(const _af0e50cd_stackBytesCount &) = delete; } _af0e50cd_stackBytesCount;
typedef struct _af0e50cd_optionalFile { _af0e50cd_optionalFile(char* value): value(value) {}; char* value; _af0e50cd_optionalFile(const _af0e50cd_optionalFile &) = delete; } _af0e50cd_optionalFile;
typedef struct _af0e50cd_optionalLine { _af0e50cd_optionalLine(int value): value(value) {}; int value; _af0e50cd_optionalLine(const _af0e50cd_optionalLine &) = delete; } _af0e50cd_optionalLine;
typedef struct _af0e50cd_optionalUserData { _af0e50cd_optionalUserData(void* value): value(value) {}; void* value; _af0e50cd_optionalUserData(const _af0e50cd_optionalUserData &) = delete; } _af0e50cd_optionalUserData;
typedef struct _af0e50cd_rteParameters { _af0e50cd_rteParameters(void* value): value(value) {}; void* value; _af0e50cd_rteParameters(const _af0e50cd_rteParameters &) = delete; } _af0e50cd_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallSetProcedureRayTracingStackBytesCount(_af0e50cd_calls & calls, _af0e50cd_rteContext & rteContext, _af0e50cd_stackBytesCount & stackBytesCount, _af0e50cd_optionalFile & optionalFile, _af0e50cd_optionalLine & optionalLine, _af0e50cd_optionalUserData & optionalUserData, _af0e50cd_rteParameters & rteParameters) {
  return redRteCallSetProcedureRayTracingStackBytesCount(calls.value, rteContext.value, stackBytesCount.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateHelperShaderBindingTable redRteCreateHelperShaderBindingTable
#define _fb109fe0_rteContext(value) value
#define _fb109fe0_rteHandleHelperAllocator(value) value
#define _fb109fe0_queueFamilyIndex(value) value
#define _fb109fe0_outHelperShaderBindingTable(value) value
#define _fb109fe0_outStatuses(value) value
#define _fb109fe0_optionalFile(value) value
#define _fb109fe0_optionalLine(value) value
#define _fb109fe0_optionalUserData(value) value
#define _fb109fe0_rteParameters(value) value
#else
typedef struct _fb109fe0_rteContext { _fb109fe0_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _fb109fe0_rteContext(const _fb109fe0_rteContext &) = delete; } _fb109fe0_rteContext;
typedef struct _fb109fe0_rteHandleHelperAllocator { _fb109fe0_rteHandleHelperAllocator(void* value): value(value) {}; void* value; _fb109fe0_rteHandleHelperAllocator(const _fb109fe0_rteHandleHelperAllocator &) = delete; } _fb109fe0_rteHandleHelperAllocator;
typedef struct _fb109fe0_queueFamilyIndex { _fb109fe0_queueFamilyIndex(unsigned value): value(value) {}; unsigned value; _fb109fe0_queueFamilyIndex(const _fb109fe0_queueFamilyIndex &) = delete; } _fb109fe0_queueFamilyIndex;
typedef struct _fb109fe0_outHelperShaderBindingTable { _fb109fe0_outHelperShaderBindingTable(RedRteHandleHelperShaderBindingTable* value): value(value) {}; RedRteHandleHelperShaderBindingTable* value; _fb109fe0_outHelperShaderBindingTable(const _fb109fe0_outHelperShaderBindingTable &) = delete; } _fb109fe0_outHelperShaderBindingTable;
typedef struct _fb109fe0_outStatuses { _fb109fe0_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _fb109fe0_outStatuses(const _fb109fe0_outStatuses &) = delete; } _fb109fe0_outStatuses;
typedef struct _fb109fe0_optionalFile { _fb109fe0_optionalFile(char* value): value(value) {}; char* value; _fb109fe0_optionalFile(const _fb109fe0_optionalFile &) = delete; } _fb109fe0_optionalFile;
typedef struct _fb109fe0_optionalLine { _fb109fe0_optionalLine(int value): value(value) {}; int value; _fb109fe0_optionalLine(const _fb109fe0_optionalLine &) = delete; } _fb109fe0_optionalLine;
typedef struct _fb109fe0_optionalUserData { _fb109fe0_optionalUserData(void* value): value(value) {}; void* value; _fb109fe0_optionalUserData(const _fb109fe0_optionalUserData &) = delete; } _fb109fe0_optionalUserData;
typedef struct _fb109fe0_rteParameters { _fb109fe0_rteParameters(void* value): value(value) {}; void* value; _fb109fe0_rteParameters(const _fb109fe0_rteParameters &) = delete; } _fb109fe0_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateHelperShaderBindingTable(_fb109fe0_rteContext & rteContext, _fb109fe0_rteHandleHelperAllocator & rteHandleHelperAllocator, _fb109fe0_queueFamilyIndex & queueFamilyIndex, _fb109fe0_outHelperShaderBindingTable & outHelperShaderBindingTable, _fb109fe0_outStatuses & outStatuses, _fb109fe0_optionalFile & optionalFile, _fb109fe0_optionalLine & optionalLine, _fb109fe0_optionalUserData & optionalUserData, _fb109fe0_rteParameters & rteParameters) {
  return redRteCreateHelperShaderBindingTable(rteContext.value, rteHandleHelperAllocator.value, queueFamilyIndex.value, outHelperShaderBindingTable.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyHelperShaderBindingTable redRteDestroyHelperShaderBindingTable
#define _b5868170_helperShaderBindingTable(value) value
#define _b5868170_optionalFile(value) value
#define _b5868170_optionalLine(value) value
#define _b5868170_optionalUserData(value) value
#define _b5868170_rteParameters(value) value
#else
typedef struct _b5868170_helperShaderBindingTable { _b5868170_helperShaderBindingTable(RedRteHandleHelperShaderBindingTable value): value(value) {}; RedRteHandleHelperShaderBindingTable value; _b5868170_helperShaderBindingTable(const _b5868170_helperShaderBindingTable &) = delete; } _b5868170_helperShaderBindingTable;
typedef struct _b5868170_optionalFile { _b5868170_optionalFile(char* value): value(value) {}; char* value; _b5868170_optionalFile(const _b5868170_optionalFile &) = delete; } _b5868170_optionalFile;
typedef struct _b5868170_optionalLine { _b5868170_optionalLine(int value): value(value) {}; int value; _b5868170_optionalLine(const _b5868170_optionalLine &) = delete; } _b5868170_optionalLine;
typedef struct _b5868170_optionalUserData { _b5868170_optionalUserData(void* value): value(value) {}; void* value; _b5868170_optionalUserData(const _b5868170_optionalUserData &) = delete; } _b5868170_optionalUserData;
typedef struct _b5868170_rteParameters { _b5868170_rteParameters(void* value): value(value) {}; void* value; _b5868170_rteParameters(const _b5868170_rteParameters &) = delete; } _b5868170_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyHelperShaderBindingTable(_b5868170_helperShaderBindingTable & helperShaderBindingTable, _b5868170_optionalFile & optionalFile, _b5868170_optionalLine & optionalLine, _b5868170_optionalUserData & optionalUserData, _b5868170_rteParameters & rteParameters) {
  return redRteDestroyHelperShaderBindingTable(helperShaderBindingTable.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperShaderBindingTableCreate redRteHelperShaderBindingTableCreate
#define _6636c89d_helperShaderBindingTable(value) value
#define _6636c89d_procedureRayTracing(value) value
#define _6636c89d_procedureRayTracingState(value) value
#define _6636c89d_optionalFile(value) value
#define _6636c89d_optionalLine(value) value
#define _6636c89d_optionalUserData(value) value
#define _6636c89d_rteParameters(value) value
#else
typedef struct _6636c89d_helperShaderBindingTable { _6636c89d_helperShaderBindingTable(RedRteHandleHelperShaderBindingTable value): value(value) {}; RedRteHandleHelperShaderBindingTable value; _6636c89d_helperShaderBindingTable(const _6636c89d_helperShaderBindingTable &) = delete; } _6636c89d_helperShaderBindingTable;
typedef struct _6636c89d_procedureRayTracing { _6636c89d_procedureRayTracing(RedHandleProcedure value): value(value) {}; RedHandleProcedure value; _6636c89d_procedureRayTracing(const _6636c89d_procedureRayTracing &) = delete; } _6636c89d_procedureRayTracing;
typedef struct _6636c89d_procedureRayTracingState { _6636c89d_procedureRayTracingState(RedRteProcedureRayTracingState* value): value(value) {}; RedRteProcedureRayTracingState* value; _6636c89d_procedureRayTracingState(const _6636c89d_procedureRayTracingState &) = delete; } _6636c89d_procedureRayTracingState;
typedef struct _6636c89d_optionalFile { _6636c89d_optionalFile(char* value): value(value) {}; char* value; _6636c89d_optionalFile(const _6636c89d_optionalFile &) = delete; } _6636c89d_optionalFile;
typedef struct _6636c89d_optionalLine { _6636c89d_optionalLine(int value): value(value) {}; int value; _6636c89d_optionalLine(const _6636c89d_optionalLine &) = delete; } _6636c89d_optionalLine;
typedef struct _6636c89d_optionalUserData { _6636c89d_optionalUserData(void* value): value(value) {}; void* value; _6636c89d_optionalUserData(const _6636c89d_optionalUserData &) = delete; } _6636c89d_optionalUserData;
typedef struct _6636c89d_rteParameters { _6636c89d_rteParameters(void* value): value(value) {}; void* value; _6636c89d_rteParameters(const _6636c89d_rteParameters &) = delete; } _6636c89d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperShaderBindingTableCreate(_6636c89d_helperShaderBindingTable & helperShaderBindingTable, _6636c89d_procedureRayTracing & procedureRayTracing, _6636c89d_procedureRayTracingState & procedureRayTracingState, _6636c89d_optionalFile & optionalFile, _6636c89d_optionalLine & optionalLine, _6636c89d_optionalUserData & optionalUserData, _6636c89d_rteParameters & rteParameters) {
  return redRteHelperShaderBindingTableCreate(helperShaderBindingTable.value, procedureRayTracing.value, procedureRayTracingState.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperShaderBindingTableGetGpuAddressStrideAndRange redRteHelperShaderBindingTableGetGpuAddressStrideAndRange
#define _d62b575c_helperShaderBindingTable(value) value
#define _d62b575c_outShaderBindingTableRayGeneration(value) value
#define _d62b575c_outShaderBindingTableMiss(value) value
#define _d62b575c_outShaderBindingTableHit(value) value
#define _d62b575c_outShaderBindingTableCallable(value) value
#define _d62b575c_optionalFile(value) value
#define _d62b575c_optionalLine(value) value
#define _d62b575c_optionalUserData(value) value
#define _d62b575c_rteParameters(value) value
#else
typedef struct _d62b575c_helperShaderBindingTable { _d62b575c_helperShaderBindingTable(RedRteHandleHelperShaderBindingTable value): value(value) {}; RedRteHandleHelperShaderBindingTable value; _d62b575c_helperShaderBindingTable(const _d62b575c_helperShaderBindingTable &) = delete; } _d62b575c_helperShaderBindingTable;
typedef struct _d62b575c_outShaderBindingTableRayGeneration { _d62b575c_outShaderBindingTableRayGeneration(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _d62b575c_outShaderBindingTableRayGeneration(const _d62b575c_outShaderBindingTableRayGeneration &) = delete; } _d62b575c_outShaderBindingTableRayGeneration;
typedef struct _d62b575c_outShaderBindingTableMiss { _d62b575c_outShaderBindingTableMiss(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _d62b575c_outShaderBindingTableMiss(const _d62b575c_outShaderBindingTableMiss &) = delete; } _d62b575c_outShaderBindingTableMiss;
typedef struct _d62b575c_outShaderBindingTableHit { _d62b575c_outShaderBindingTableHit(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _d62b575c_outShaderBindingTableHit(const _d62b575c_outShaderBindingTableHit &) = delete; } _d62b575c_outShaderBindingTableHit;
typedef struct _d62b575c_outShaderBindingTableCallable { _d62b575c_outShaderBindingTableCallable(RedRteGpuAddressStrideAndRange* value): value(value) {}; RedRteGpuAddressStrideAndRange* value; _d62b575c_outShaderBindingTableCallable(const _d62b575c_outShaderBindingTableCallable &) = delete; } _d62b575c_outShaderBindingTableCallable;
typedef struct _d62b575c_optionalFile { _d62b575c_optionalFile(char* value): value(value) {}; char* value; _d62b575c_optionalFile(const _d62b575c_optionalFile &) = delete; } _d62b575c_optionalFile;
typedef struct _d62b575c_optionalLine { _d62b575c_optionalLine(int value): value(value) {}; int value; _d62b575c_optionalLine(const _d62b575c_optionalLine &) = delete; } _d62b575c_optionalLine;
typedef struct _d62b575c_optionalUserData { _d62b575c_optionalUserData(void* value): value(value) {}; void* value; _d62b575c_optionalUserData(const _d62b575c_optionalUserData &) = delete; } _d62b575c_optionalUserData;
typedef struct _d62b575c_rteParameters { _d62b575c_rteParameters(void* value): value(value) {}; void* value; _d62b575c_rteParameters(const _d62b575c_rteParameters &) = delete; } _d62b575c_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperShaderBindingTableGetGpuAddressStrideAndRange(_d62b575c_helperShaderBindingTable & helperShaderBindingTable, _d62b575c_outShaderBindingTableRayGeneration & outShaderBindingTableRayGeneration, _d62b575c_outShaderBindingTableMiss & outShaderBindingTableMiss, _d62b575c_outShaderBindingTableHit & outShaderBindingTableHit, _d62b575c_outShaderBindingTableCallable & outShaderBindingTableCallable, _d62b575c_optionalFile & optionalFile, _d62b575c_optionalLine & optionalLine, _d62b575c_optionalUserData & optionalUserData, _d62b575c_rteParameters & rteParameters) {
  return redRteHelperShaderBindingTableGetGpuAddressStrideAndRange(helperShaderBindingTable.value, outShaderBindingTableRayGeneration.value, outShaderBindingTableMiss.value, outShaderBindingTableHit.value, outShaderBindingTableCallable.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteGetInstanceProcAddr redRteGetInstanceProcAddr
#define _13b53647_optionalFile(value) value
#define _13b53647_optionalLine(value) value
#define _13b53647_optionalUserData(value) value
#define _13b53647_rteParameters(value) value
#else
typedef struct _13b53647_optionalFile { _13b53647_optionalFile(char* value): value(value) {}; char* value; _13b53647_optionalFile(const _13b53647_optionalFile &) = delete; } _13b53647_optionalFile;
typedef struct _13b53647_optionalLine { _13b53647_optionalLine(int value): value(value) {}; int value; _13b53647_optionalLine(const _13b53647_optionalLine &) = delete; } _13b53647_optionalLine;
typedef struct _13b53647_optionalUserData { _13b53647_optionalUserData(void* value): value(value) {}; void* value; _13b53647_optionalUserData(const _13b53647_optionalUserData &) = delete; } _13b53647_optionalUserData;
typedef struct _13b53647_rteParameters { _13b53647_rteParameters(void* value): value(value) {}; void* value; _13b53647_rteParameters(const _13b53647_rteParameters &) = delete; } _13b53647_rteParameters;
REDGPU_NP_DECLSPEC void* REDGPU_NP_API np_redRteGetInstanceProcAddr(_13b53647_optionalFile & optionalFile, _13b53647_optionalLine & optionalLine, _13b53647_optionalUserData & optionalUserData, _13b53647_rteParameters & rteParameters) {
  return redRteGetInstanceProcAddr(optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateContextFromRteContext redRteCreateContextFromRteContext
#define _6196f22b_rteContext(value) value
#define _6196f22b_malloc(value) value
#define _6196f22b_free(value) value
#define _6196f22b_optionalMallocTagged(value) value
#define _6196f22b_optionalFreeTagged(value) value
#define _6196f22b_debugCallback(value) value
#define _6196f22b_sdkVersion(value) value
#define _6196f22b_sdkExtensionsCount(value) value
#define _6196f22b_sdkExtensions(value) value
#define _6196f22b_optionalProgramName(value) value
#define _6196f22b_optionalProgramVersion(value) value
#define _6196f22b_optionalEngineName(value) value
#define _6196f22b_optionalEngineVersion(value) value
#define _6196f22b_optionalSettings(value) value
#define _6196f22b_outContext(value) value
#define _6196f22b_outStatuses(value) value
#define _6196f22b_optionalFile(value) value
#define _6196f22b_optionalLine(value) value
#define _6196f22b_optionalUserData(value) value
#define _6196f22b_rteParameters(value) value
#else
typedef struct _6196f22b_rteContext { _6196f22b_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _6196f22b_rteContext(const _6196f22b_rteContext &) = delete; } _6196f22b_rteContext;
typedef struct _6196f22b_malloc { _6196f22b_malloc(RedTypeProcedureMalloc value): value(value) {}; RedTypeProcedureMalloc value; _6196f22b_malloc(const _6196f22b_malloc &) = delete; } _6196f22b_malloc;
typedef struct _6196f22b_free { _6196f22b_free(RedTypeProcedureFree value): value(value) {}; RedTypeProcedureFree value; _6196f22b_free(const _6196f22b_free &) = delete; } _6196f22b_free;
typedef struct _6196f22b_optionalMallocTagged { _6196f22b_optionalMallocTagged(RedTypeProcedureMallocTagged value): value(value) {}; RedTypeProcedureMallocTagged value; _6196f22b_optionalMallocTagged(const _6196f22b_optionalMallocTagged &) = delete; } _6196f22b_optionalMallocTagged;
typedef struct _6196f22b_optionalFreeTagged { _6196f22b_optionalFreeTagged(RedTypeProcedureFreeTagged value): value(value) {}; RedTypeProcedureFreeTagged value; _6196f22b_optionalFreeTagged(const _6196f22b_optionalFreeTagged &) = delete; } _6196f22b_optionalFreeTagged;
typedef struct _6196f22b_debugCallback { _6196f22b_debugCallback(RedTypeProcedureDebugCallback value): value(value) {}; RedTypeProcedureDebugCallback value; _6196f22b_debugCallback(const _6196f22b_debugCallback &) = delete; } _6196f22b_debugCallback;
typedef struct _6196f22b_sdkVersion { _6196f22b_sdkVersion(RedSdkVersion value): value(value) {}; RedSdkVersion value; _6196f22b_sdkVersion(const _6196f22b_sdkVersion &) = delete; } _6196f22b_sdkVersion;
typedef struct _6196f22b_sdkExtensionsCount { _6196f22b_sdkExtensionsCount(unsigned value): value(value) {}; unsigned value; _6196f22b_sdkExtensionsCount(const _6196f22b_sdkExtensionsCount &) = delete; } _6196f22b_sdkExtensionsCount;
typedef struct _6196f22b_sdkExtensions { _6196f22b_sdkExtensions(unsigned* value): value(value) {}; unsigned* value; _6196f22b_sdkExtensions(const _6196f22b_sdkExtensions &) = delete; } _6196f22b_sdkExtensions;
typedef struct _6196f22b_optionalProgramName { _6196f22b_optionalProgramName(char* value): value(value) {}; char* value; _6196f22b_optionalProgramName(const _6196f22b_optionalProgramName &) = delete; } _6196f22b_optionalProgramName;
typedef struct _6196f22b_optionalProgramVersion { _6196f22b_optionalProgramVersion(unsigned value): value(value) {}; unsigned value; _6196f22b_optionalProgramVersion(const _6196f22b_optionalProgramVersion &) = delete; } _6196f22b_optionalProgramVersion;
typedef struct _6196f22b_optionalEngineName { _6196f22b_optionalEngineName(char* value): value(value) {}; char* value; _6196f22b_optionalEngineName(const _6196f22b_optionalEngineName &) = delete; } _6196f22b_optionalEngineName;
typedef struct _6196f22b_optionalEngineVersion { _6196f22b_optionalEngineVersion(unsigned value): value(value) {}; unsigned value; _6196f22b_optionalEngineVersion(const _6196f22b_optionalEngineVersion &) = delete; } _6196f22b_optionalEngineVersion;
typedef struct _6196f22b_optionalSettings { _6196f22b_optionalSettings(void* value): value(value) {}; void* value; _6196f22b_optionalSettings(const _6196f22b_optionalSettings &) = delete; } _6196f22b_optionalSettings;
typedef struct _6196f22b_outContext { _6196f22b_outContext(RedContext* value): value(value) {}; RedContext* value; _6196f22b_outContext(const _6196f22b_outContext &) = delete; } _6196f22b_outContext;
typedef struct _6196f22b_outStatuses { _6196f22b_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _6196f22b_outStatuses(const _6196f22b_outStatuses &) = delete; } _6196f22b_outStatuses;
typedef struct _6196f22b_optionalFile { _6196f22b_optionalFile(char* value): value(value) {}; char* value; _6196f22b_optionalFile(const _6196f22b_optionalFile &) = delete; } _6196f22b_optionalFile;
typedef struct _6196f22b_optionalLine { _6196f22b_optionalLine(int value): value(value) {}; int value; _6196f22b_optionalLine(const _6196f22b_optionalLine &) = delete; } _6196f22b_optionalLine;
typedef struct _6196f22b_optionalUserData { _6196f22b_optionalUserData(void* value): value(value) {}; void* value; _6196f22b_optionalUserData(const _6196f22b_optionalUserData &) = delete; } _6196f22b_optionalUserData;
typedef struct _6196f22b_rteParameters { _6196f22b_rteParameters(void* value): value(value) {}; void* value; _6196f22b_rteParameters(const _6196f22b_rteParameters &) = delete; } _6196f22b_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateContextFromRteContext(_6196f22b_rteContext & rteContext, _6196f22b_malloc & malloc, _6196f22b_free & free, _6196f22b_optionalMallocTagged & optionalMallocTagged, _6196f22b_optionalFreeTagged & optionalFreeTagged, _6196f22b_debugCallback & debugCallback, _6196f22b_sdkVersion & sdkVersion, _6196f22b_sdkExtensionsCount & sdkExtensionsCount, _6196f22b_sdkExtensions & sdkExtensions, _6196f22b_optionalProgramName & optionalProgramName, _6196f22b_optionalProgramVersion & optionalProgramVersion, _6196f22b_optionalEngineName & optionalEngineName, _6196f22b_optionalEngineVersion & optionalEngineVersion, _6196f22b_optionalSettings & optionalSettings, _6196f22b_outContext & outContext, _6196f22b_outStatuses & outStatuses, _6196f22b_optionalFile & optionalFile, _6196f22b_optionalLine & optionalLine, _6196f22b_optionalUserData & optionalUserData, _6196f22b_rteParameters & rteParameters) {
  return redRteCreateContextFromRteContext(rteContext.value, malloc.value, free.value, optionalMallocTagged.value, optionalFreeTagged.value, debugCallback.value, sdkVersion.value, sdkExtensionsCount.value, sdkExtensions.value, optionalProgramName.value, optionalProgramVersion.value, optionalEngineName.value, optionalEngineVersion.value, optionalSettings.value, outContext.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateHelperAppWindow redRteCreateHelperAppWindow
#define _55973ae8_callbacks(value) value
#define _55973ae8_initialWindowWidth(value) value
#define _55973ae8_initialWindowHeight(value) value
#define _55973ae8_initialIsVsyncEnabled(value) value
#define _55973ae8_initialViewportClearColorR(value) value
#define _55973ae8_initialViewportClearColorG(value) value
#define _55973ae8_initialViewportClearColorB(value) value
#define _55973ae8_initialViewportClearColorA(value) value
#define _55973ae8_optionalProgramName(value) value
#define _55973ae8_optionalEngineName(value) value
#define _55973ae8_rteCreateContextParameters(value) value
#define _55973ae8_outHelperAppWindow(value) value
#define _55973ae8_outStatuses(value) value
#define _55973ae8_optionalFile(value) value
#define _55973ae8_optionalLine(value) value
#define _55973ae8_optionalUserData(value) value
#define _55973ae8_rteParameters(value) value
#else
typedef struct _55973ae8_callbacks { _55973ae8_callbacks(RedRteHelperAppCallbacks* value): value(value) {}; RedRteHelperAppCallbacks* value; _55973ae8_callbacks(const _55973ae8_callbacks &) = delete; } _55973ae8_callbacks;
typedef struct _55973ae8_initialWindowWidth { _55973ae8_initialWindowWidth(int value): value(value) {}; int value; _55973ae8_initialWindowWidth(const _55973ae8_initialWindowWidth &) = delete; } _55973ae8_initialWindowWidth;
typedef struct _55973ae8_initialWindowHeight { _55973ae8_initialWindowHeight(int value): value(value) {}; int value; _55973ae8_initialWindowHeight(const _55973ae8_initialWindowHeight &) = delete; } _55973ae8_initialWindowHeight;
typedef struct _55973ae8_initialIsVsyncEnabled { _55973ae8_initialIsVsyncEnabled(RedBool32 value): value(value) {}; RedBool32 value; _55973ae8_initialIsVsyncEnabled(const _55973ae8_initialIsVsyncEnabled &) = delete; } _55973ae8_initialIsVsyncEnabled;
typedef struct _55973ae8_initialViewportClearColorR { _55973ae8_initialViewportClearColorR(float value): value(value) {}; float value; _55973ae8_initialViewportClearColorR(const _55973ae8_initialViewportClearColorR &) = delete; } _55973ae8_initialViewportClearColorR;
typedef struct _55973ae8_initialViewportClearColorG { _55973ae8_initialViewportClearColorG(float value): value(value) {}; float value; _55973ae8_initialViewportClearColorG(const _55973ae8_initialViewportClearColorG &) = delete; } _55973ae8_initialViewportClearColorG;
typedef struct _55973ae8_initialViewportClearColorB { _55973ae8_initialViewportClearColorB(float value): value(value) {}; float value; _55973ae8_initialViewportClearColorB(const _55973ae8_initialViewportClearColorB &) = delete; } _55973ae8_initialViewportClearColorB;
typedef struct _55973ae8_initialViewportClearColorA { _55973ae8_initialViewportClearColorA(float value): value(value) {}; float value; _55973ae8_initialViewportClearColorA(const _55973ae8_initialViewportClearColorA &) = delete; } _55973ae8_initialViewportClearColorA;
typedef struct _55973ae8_optionalProgramName { _55973ae8_optionalProgramName(char* value): value(value) {}; char* value; _55973ae8_optionalProgramName(const _55973ae8_optionalProgramName &) = delete; } _55973ae8_optionalProgramName;
typedef struct _55973ae8_optionalEngineName { _55973ae8_optionalEngineName(char* value): value(value) {}; char* value; _55973ae8_optionalEngineName(const _55973ae8_optionalEngineName &) = delete; } _55973ae8_optionalEngineName;
typedef struct _55973ae8_rteCreateContextParameters { _55973ae8_rteCreateContextParameters(RedRteCreateContextParameters* value): value(value) {}; RedRteCreateContextParameters* value; _55973ae8_rteCreateContextParameters(const _55973ae8_rteCreateContextParameters &) = delete; } _55973ae8_rteCreateContextParameters;
typedef struct _55973ae8_outHelperAppWindow { _55973ae8_outHelperAppWindow(RedRteHandleHelperAppWindow* value): value(value) {}; RedRteHandleHelperAppWindow* value; _55973ae8_outHelperAppWindow(const _55973ae8_outHelperAppWindow &) = delete; } _55973ae8_outHelperAppWindow;
typedef struct _55973ae8_outStatuses { _55973ae8_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _55973ae8_outStatuses(const _55973ae8_outStatuses &) = delete; } _55973ae8_outStatuses;
typedef struct _55973ae8_optionalFile { _55973ae8_optionalFile(char* value): value(value) {}; char* value; _55973ae8_optionalFile(const _55973ae8_optionalFile &) = delete; } _55973ae8_optionalFile;
typedef struct _55973ae8_optionalLine { _55973ae8_optionalLine(int value): value(value) {}; int value; _55973ae8_optionalLine(const _55973ae8_optionalLine &) = delete; } _55973ae8_optionalLine;
typedef struct _55973ae8_optionalUserData { _55973ae8_optionalUserData(void* value): value(value) {}; void* value; _55973ae8_optionalUserData(const _55973ae8_optionalUserData &) = delete; } _55973ae8_optionalUserData;
typedef struct _55973ae8_rteParameters { _55973ae8_rteParameters(void* value): value(value) {}; void* value; _55973ae8_rteParameters(const _55973ae8_rteParameters &) = delete; } _55973ae8_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateHelperAppWindow(_55973ae8_callbacks & callbacks, _55973ae8_initialWindowWidth & initialWindowWidth, _55973ae8_initialWindowHeight & initialWindowHeight, _55973ae8_initialIsVsyncEnabled & initialIsVsyncEnabled, _55973ae8_initialViewportClearColorR & initialViewportClearColorR, _55973ae8_initialViewportClearColorG & initialViewportClearColorG, _55973ae8_initialViewportClearColorB & initialViewportClearColorB, _55973ae8_initialViewportClearColorA & initialViewportClearColorA, _55973ae8_optionalProgramName & optionalProgramName, _55973ae8_optionalEngineName & optionalEngineName, _55973ae8_rteCreateContextParameters & rteCreateContextParameters, _55973ae8_outHelperAppWindow & outHelperAppWindow, _55973ae8_outStatuses & outStatuses, _55973ae8_optionalFile & optionalFile, _55973ae8_optionalLine & optionalLine, _55973ae8_optionalUserData & optionalUserData, _55973ae8_rteParameters & rteParameters) {
  return redRteCreateHelperAppWindow(callbacks.value, initialWindowWidth.value, initialWindowHeight.value, initialIsVsyncEnabled.value, initialViewportClearColorR.value, initialViewportClearColorG.value, initialViewportClearColorB.value, initialViewportClearColorA.value, optionalProgramName.value, optionalEngineName.value, rteCreateContextParameters.value, outHelperAppWindow.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyHelperAppWindow redRteDestroyHelperAppWindow
#define _b9b1d4b5_helperAppWindow(value) value
#define _b9b1d4b5_optionalFile(value) value
#define _b9b1d4b5_optionalLine(value) value
#define _b9b1d4b5_optionalUserData(value) value
#define _b9b1d4b5_rteParameters(value) value
#else
typedef struct _b9b1d4b5_helperAppWindow { _b9b1d4b5_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _b9b1d4b5_helperAppWindow(const _b9b1d4b5_helperAppWindow &) = delete; } _b9b1d4b5_helperAppWindow;
typedef struct _b9b1d4b5_optionalFile { _b9b1d4b5_optionalFile(char* value): value(value) {}; char* value; _b9b1d4b5_optionalFile(const _b9b1d4b5_optionalFile &) = delete; } _b9b1d4b5_optionalFile;
typedef struct _b9b1d4b5_optionalLine { _b9b1d4b5_optionalLine(int value): value(value) {}; int value; _b9b1d4b5_optionalLine(const _b9b1d4b5_optionalLine &) = delete; } _b9b1d4b5_optionalLine;
typedef struct _b9b1d4b5_optionalUserData { _b9b1d4b5_optionalUserData(void* value): value(value) {}; void* value; _b9b1d4b5_optionalUserData(const _b9b1d4b5_optionalUserData &) = delete; } _b9b1d4b5_optionalUserData;
typedef struct _b9b1d4b5_rteParameters { _b9b1d4b5_rteParameters(void* value): value(value) {}; void* value; _b9b1d4b5_rteParameters(const _b9b1d4b5_rteParameters &) = delete; } _b9b1d4b5_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyHelperAppWindow(_b9b1d4b5_helperAppWindow & helperAppWindow, _b9b1d4b5_optionalFile & optionalFile, _b9b1d4b5_optionalLine & optionalLine, _b9b1d4b5_optionalUserData & optionalUserData, _b9b1d4b5_rteParameters & rteParameters) {
  return redRteDestroyHelperAppWindow(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowRun redRteHelperAppWindowRun
#define _8c740629_helperAppWindow(value) value
#define _8c740629_optionalFile(value) value
#define _8c740629_optionalLine(value) value
#define _8c740629_optionalUserData(value) value
#define _8c740629_rteParameters(value) value
#else
typedef struct _8c740629_helperAppWindow { _8c740629_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _8c740629_helperAppWindow(const _8c740629_helperAppWindow &) = delete; } _8c740629_helperAppWindow;
typedef struct _8c740629_optionalFile { _8c740629_optionalFile(char* value): value(value) {}; char* value; _8c740629_optionalFile(const _8c740629_optionalFile &) = delete; } _8c740629_optionalFile;
typedef struct _8c740629_optionalLine { _8c740629_optionalLine(int value): value(value) {}; int value; _8c740629_optionalLine(const _8c740629_optionalLine &) = delete; } _8c740629_optionalLine;
typedef struct _8c740629_optionalUserData { _8c740629_optionalUserData(void* value): value(value) {}; void* value; _8c740629_optionalUserData(const _8c740629_optionalUserData &) = delete; } _8c740629_optionalUserData;
typedef struct _8c740629_rteParameters { _8c740629_rteParameters(void* value): value(value) {}; void* value; _8c740629_rteParameters(const _8c740629_rteParameters &) = delete; } _8c740629_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowRun(_8c740629_helperAppWindow & helperAppWindow, _8c740629_optionalFile & optionalFile, _8c740629_optionalLine & optionalLine, _8c740629_optionalUserData & optionalUserData, _8c740629_rteParameters & rteParameters) {
  return redRteHelperAppWindowRun(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowClose redRteHelperAppWindowClose
#define _1e633dd3_helperAppWindow(value) value
#define _1e633dd3_optionalFile(value) value
#define _1e633dd3_optionalLine(value) value
#define _1e633dd3_optionalUserData(value) value
#define _1e633dd3_rteParameters(value) value
#else
typedef struct _1e633dd3_helperAppWindow { _1e633dd3_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _1e633dd3_helperAppWindow(const _1e633dd3_helperAppWindow &) = delete; } _1e633dd3_helperAppWindow;
typedef struct _1e633dd3_optionalFile { _1e633dd3_optionalFile(char* value): value(value) {}; char* value; _1e633dd3_optionalFile(const _1e633dd3_optionalFile &) = delete; } _1e633dd3_optionalFile;
typedef struct _1e633dd3_optionalLine { _1e633dd3_optionalLine(int value): value(value) {}; int value; _1e633dd3_optionalLine(const _1e633dd3_optionalLine &) = delete; } _1e633dd3_optionalLine;
typedef struct _1e633dd3_optionalUserData { _1e633dd3_optionalUserData(void* value): value(value) {}; void* value; _1e633dd3_optionalUserData(const _1e633dd3_optionalUserData &) = delete; } _1e633dd3_optionalUserData;
typedef struct _1e633dd3_rteParameters { _1e633dd3_rteParameters(void* value): value(value) {}; void* value; _1e633dd3_rteParameters(const _1e633dd3_rteParameters &) = delete; } _1e633dd3_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowClose(_1e633dd3_helperAppWindow & helperAppWindow, _1e633dd3_optionalFile & optionalFile, _1e633dd3_optionalLine & optionalLine, _1e633dd3_optionalUserData & optionalUserData, _1e633dd3_rteParameters & rteParameters) {
  return redRteHelperAppWindowClose(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowSetViewport redRteHelperAppWindowSetViewport
#define _f85509e3_helperAppWindow(value) value
#define _f85509e3_calls(value) value
#define _f85509e3_optionalFile(value) value
#define _f85509e3_optionalLine(value) value
#define _f85509e3_optionalUserData(value) value
#define _f85509e3_rteParameters(value) value
#else
typedef struct _f85509e3_helperAppWindow { _f85509e3_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _f85509e3_helperAppWindow(const _f85509e3_helperAppWindow &) = delete; } _f85509e3_helperAppWindow;
typedef struct _f85509e3_calls { _f85509e3_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _f85509e3_calls(const _f85509e3_calls &) = delete; } _f85509e3_calls;
typedef struct _f85509e3_optionalFile { _f85509e3_optionalFile(char* value): value(value) {}; char* value; _f85509e3_optionalFile(const _f85509e3_optionalFile &) = delete; } _f85509e3_optionalFile;
typedef struct _f85509e3_optionalLine { _f85509e3_optionalLine(int value): value(value) {}; int value; _f85509e3_optionalLine(const _f85509e3_optionalLine &) = delete; } _f85509e3_optionalLine;
typedef struct _f85509e3_optionalUserData { _f85509e3_optionalUserData(void* value): value(value) {}; void* value; _f85509e3_optionalUserData(const _f85509e3_optionalUserData &) = delete; } _f85509e3_optionalUserData;
typedef struct _f85509e3_rteParameters { _f85509e3_rteParameters(void* value): value(value) {}; void* value; _f85509e3_rteParameters(const _f85509e3_rteParameters &) = delete; } _f85509e3_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowSetViewport(_f85509e3_helperAppWindow & helperAppWindow, _f85509e3_calls & calls, _f85509e3_optionalFile & optionalFile, _f85509e3_optionalLine & optionalLine, _f85509e3_optionalUserData & optionalUserData, _f85509e3_rteParameters & rteParameters) {
  return redRteHelperAppWindowSetViewport(helperAppWindow.value, calls.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowIsVsyncEnabled redRteHelperAppWindowIsVsyncEnabled
#define _d2566f6e_helperAppWindow(value) value
#define _d2566f6e_optionalFile(value) value
#define _d2566f6e_optionalLine(value) value
#define _d2566f6e_optionalUserData(value) value
#define _d2566f6e_rteParameters(value) value
#else
typedef struct _d2566f6e_helperAppWindow { _d2566f6e_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _d2566f6e_helperAppWindow(const _d2566f6e_helperAppWindow &) = delete; } _d2566f6e_helperAppWindow;
typedef struct _d2566f6e_optionalFile { _d2566f6e_optionalFile(char* value): value(value) {}; char* value; _d2566f6e_optionalFile(const _d2566f6e_optionalFile &) = delete; } _d2566f6e_optionalFile;
typedef struct _d2566f6e_optionalLine { _d2566f6e_optionalLine(int value): value(value) {}; int value; _d2566f6e_optionalLine(const _d2566f6e_optionalLine &) = delete; } _d2566f6e_optionalLine;
typedef struct _d2566f6e_optionalUserData { _d2566f6e_optionalUserData(void* value): value(value) {}; void* value; _d2566f6e_optionalUserData(const _d2566f6e_optionalUserData &) = delete; } _d2566f6e_optionalUserData;
typedef struct _d2566f6e_rteParameters { _d2566f6e_rteParameters(void* value): value(value) {}; void* value; _d2566f6e_rteParameters(const _d2566f6e_rteParameters &) = delete; } _d2566f6e_rteParameters;
REDGPU_NP_DECLSPEC RedBool32 REDGPU_NP_API np_redRteHelperAppWindowIsVsyncEnabled(_d2566f6e_helperAppWindow & helperAppWindow, _d2566f6e_optionalFile & optionalFile, _d2566f6e_optionalLine & optionalLine, _d2566f6e_optionalUserData & optionalUserData, _d2566f6e_rteParameters & rteParameters) {
  return redRteHelperAppWindowIsVsyncEnabled(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowSetVsyncEnabled redRteHelperAppWindowSetVsyncEnabled
#define _dbd486ee_helperAppWindow(value) value
#define _dbd486ee_enableVsync(value) value
#define _dbd486ee_optionalFile(value) value
#define _dbd486ee_optionalLine(value) value
#define _dbd486ee_optionalUserData(value) value
#define _dbd486ee_rteParameters(value) value
#else
typedef struct _dbd486ee_helperAppWindow { _dbd486ee_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _dbd486ee_helperAppWindow(const _dbd486ee_helperAppWindow &) = delete; } _dbd486ee_helperAppWindow;
typedef struct _dbd486ee_enableVsync { _dbd486ee_enableVsync(RedBool32 value): value(value) {}; RedBool32 value; _dbd486ee_enableVsync(const _dbd486ee_enableVsync &) = delete; } _dbd486ee_enableVsync;
typedef struct _dbd486ee_optionalFile { _dbd486ee_optionalFile(char* value): value(value) {}; char* value; _dbd486ee_optionalFile(const _dbd486ee_optionalFile &) = delete; } _dbd486ee_optionalFile;
typedef struct _dbd486ee_optionalLine { _dbd486ee_optionalLine(int value): value(value) {}; int value; _dbd486ee_optionalLine(const _dbd486ee_optionalLine &) = delete; } _dbd486ee_optionalLine;
typedef struct _dbd486ee_optionalUserData { _dbd486ee_optionalUserData(void* value): value(value) {}; void* value; _dbd486ee_optionalUserData(const _dbd486ee_optionalUserData &) = delete; } _dbd486ee_optionalUserData;
typedef struct _dbd486ee_rteParameters { _dbd486ee_rteParameters(void* value): value(value) {}; void* value; _dbd486ee_rteParameters(const _dbd486ee_rteParameters &) = delete; } _dbd486ee_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowSetVsyncEnabled(_dbd486ee_helperAppWindow & helperAppWindow, _dbd486ee_enableVsync & enableVsync, _dbd486ee_optionalFile & optionalFile, _dbd486ee_optionalLine & optionalLine, _dbd486ee_optionalUserData & optionalUserData, _dbd486ee_rteParameters & rteParameters) {
  return redRteHelperAppWindowSetVsyncEnabled(helperAppWindow.value, enableVsync.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowSetViewportClearColor redRteHelperAppWindowSetViewportClearColor
#define _4573ca2f_helperAppWindow(value) value
#define _4573ca2f_viewportClearColorR(value) value
#define _4573ca2f_viewportClearColorG(value) value
#define _4573ca2f_viewportClearColorB(value) value
#define _4573ca2f_viewportClearColorA(value) value
#define _4573ca2f_optionalFile(value) value
#define _4573ca2f_optionalLine(value) value
#define _4573ca2f_optionalUserData(value) value
#define _4573ca2f_rteParameters(value) value
#else
typedef struct _4573ca2f_helperAppWindow { _4573ca2f_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _4573ca2f_helperAppWindow(const _4573ca2f_helperAppWindow &) = delete; } _4573ca2f_helperAppWindow;
typedef struct _4573ca2f_viewportClearColorR { _4573ca2f_viewportClearColorR(float value): value(value) {}; float value; _4573ca2f_viewportClearColorR(const _4573ca2f_viewportClearColorR &) = delete; } _4573ca2f_viewportClearColorR;
typedef struct _4573ca2f_viewportClearColorG { _4573ca2f_viewportClearColorG(float value): value(value) {}; float value; _4573ca2f_viewportClearColorG(const _4573ca2f_viewportClearColorG &) = delete; } _4573ca2f_viewportClearColorG;
typedef struct _4573ca2f_viewportClearColorB { _4573ca2f_viewportClearColorB(float value): value(value) {}; float value; _4573ca2f_viewportClearColorB(const _4573ca2f_viewportClearColorB &) = delete; } _4573ca2f_viewportClearColorB;
typedef struct _4573ca2f_viewportClearColorA { _4573ca2f_viewportClearColorA(float value): value(value) {}; float value; _4573ca2f_viewportClearColorA(const _4573ca2f_viewportClearColorA &) = delete; } _4573ca2f_viewportClearColorA;
typedef struct _4573ca2f_optionalFile { _4573ca2f_optionalFile(char* value): value(value) {}; char* value; _4573ca2f_optionalFile(const _4573ca2f_optionalFile &) = delete; } _4573ca2f_optionalFile;
typedef struct _4573ca2f_optionalLine { _4573ca2f_optionalLine(int value): value(value) {}; int value; _4573ca2f_optionalLine(const _4573ca2f_optionalLine &) = delete; } _4573ca2f_optionalLine;
typedef struct _4573ca2f_optionalUserData { _4573ca2f_optionalUserData(void* value): value(value) {}; void* value; _4573ca2f_optionalUserData(const _4573ca2f_optionalUserData &) = delete; } _4573ca2f_optionalUserData;
typedef struct _4573ca2f_rteParameters { _4573ca2f_rteParameters(void* value): value(value) {}; void* value; _4573ca2f_rteParameters(const _4573ca2f_rteParameters &) = delete; } _4573ca2f_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowSetViewportClearColor(_4573ca2f_helperAppWindow & helperAppWindow, _4573ca2f_viewportClearColorR & viewportClearColorR, _4573ca2f_viewportClearColorG & viewportClearColorG, _4573ca2f_viewportClearColorB & viewportClearColorB, _4573ca2f_viewportClearColorA & viewportClearColorA, _4573ca2f_optionalFile & optionalFile, _4573ca2f_optionalLine & optionalLine, _4573ca2f_optionalUserData & optionalUserData, _4573ca2f_rteParameters & rteParameters) {
  return redRteHelperAppWindowSetViewportClearColor(helperAppWindow.value, viewportClearColorR.value, viewportClearColorG.value, viewportClearColorB.value, viewportClearColorA.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowAddWaitSemaphore redRteHelperAppWindowAddWaitSemaphore
#define _96f9cc14_helperAppWindow(value) value
#define _96f9cc14_vkSemaphoreSubmitInfoKHR(value) value
#define _96f9cc14_optionalFile(value) value
#define _96f9cc14_optionalLine(value) value
#define _96f9cc14_optionalUserData(value) value
#define _96f9cc14_rteParameters(value) value
#else
typedef struct _96f9cc14_helperAppWindow { _96f9cc14_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _96f9cc14_helperAppWindow(const _96f9cc14_helperAppWindow &) = delete; } _96f9cc14_helperAppWindow;
typedef struct _96f9cc14_vkSemaphoreSubmitInfoKHR { _96f9cc14_vkSemaphoreSubmitInfoKHR(void* value): value(value) {}; void* value; _96f9cc14_vkSemaphoreSubmitInfoKHR(const _96f9cc14_vkSemaphoreSubmitInfoKHR &) = delete; } _96f9cc14_vkSemaphoreSubmitInfoKHR;
typedef struct _96f9cc14_optionalFile { _96f9cc14_optionalFile(char* value): value(value) {}; char* value; _96f9cc14_optionalFile(const _96f9cc14_optionalFile &) = delete; } _96f9cc14_optionalFile;
typedef struct _96f9cc14_optionalLine { _96f9cc14_optionalLine(int value): value(value) {}; int value; _96f9cc14_optionalLine(const _96f9cc14_optionalLine &) = delete; } _96f9cc14_optionalLine;
typedef struct _96f9cc14_optionalUserData { _96f9cc14_optionalUserData(void* value): value(value) {}; void* value; _96f9cc14_optionalUserData(const _96f9cc14_optionalUserData &) = delete; } _96f9cc14_optionalUserData;
typedef struct _96f9cc14_rteParameters { _96f9cc14_rteParameters(void* value): value(value) {}; void* value; _96f9cc14_rteParameters(const _96f9cc14_rteParameters &) = delete; } _96f9cc14_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowAddWaitSemaphore(_96f9cc14_helperAppWindow & helperAppWindow, _96f9cc14_vkSemaphoreSubmitInfoKHR & vkSemaphoreSubmitInfoKHR, _96f9cc14_optionalFile & optionalFile, _96f9cc14_optionalLine & optionalLine, _96f9cc14_optionalUserData & optionalUserData, _96f9cc14_rteParameters & rteParameters) {
  return redRteHelperAppWindowAddWaitSemaphore(helperAppWindow.value, vkSemaphoreSubmitInfoKHR.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowTempCallsCreateAndSet redRteHelperAppWindowTempCallsCreateAndSet
#define _b87380e0_helperAppWindow(value) value
#define _b87380e0_optionalFile(value) value
#define _b87380e0_optionalLine(value) value
#define _b87380e0_optionalUserData(value) value
#define _b87380e0_rteParameters(value) value
#else
typedef struct _b87380e0_helperAppWindow { _b87380e0_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _b87380e0_helperAppWindow(const _b87380e0_helperAppWindow &) = delete; } _b87380e0_helperAppWindow;
typedef struct _b87380e0_optionalFile { _b87380e0_optionalFile(char* value): value(value) {}; char* value; _b87380e0_optionalFile(const _b87380e0_optionalFile &) = delete; } _b87380e0_optionalFile;
typedef struct _b87380e0_optionalLine { _b87380e0_optionalLine(int value): value(value) {}; int value; _b87380e0_optionalLine(const _b87380e0_optionalLine &) = delete; } _b87380e0_optionalLine;
typedef struct _b87380e0_optionalUserData { _b87380e0_optionalUserData(void* value): value(value) {}; void* value; _b87380e0_optionalUserData(const _b87380e0_optionalUserData &) = delete; } _b87380e0_optionalUserData;
typedef struct _b87380e0_rteParameters { _b87380e0_rteParameters(void* value): value(value) {}; void* value; _b87380e0_rteParameters(const _b87380e0_rteParameters &) = delete; } _b87380e0_rteParameters;
REDGPU_NP_DECLSPEC RedHandleCalls REDGPU_NP_API np_redRteHelperAppWindowTempCallsCreateAndSet(_b87380e0_helperAppWindow & helperAppWindow, _b87380e0_optionalFile & optionalFile, _b87380e0_optionalLine & optionalLine, _b87380e0_optionalUserData & optionalUserData, _b87380e0_rteParameters & rteParameters) {
  return redRteHelperAppWindowTempCallsCreateAndSet(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowTempCallsEndSubmitWaitAndDestroy redRteHelperAppWindowTempCallsEndSubmitWaitAndDestroy
#define _8a6e2e2d_helperAppWindow(value) value
#define _8a6e2e2d_tempCalls(value) value
#define _8a6e2e2d_optionalFile(value) value
#define _8a6e2e2d_optionalLine(value) value
#define _8a6e2e2d_optionalUserData(value) value
#define _8a6e2e2d_rteParameters(value) value
#else
typedef struct _8a6e2e2d_helperAppWindow { _8a6e2e2d_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _8a6e2e2d_helperAppWindow(const _8a6e2e2d_helperAppWindow &) = delete; } _8a6e2e2d_helperAppWindow;
typedef struct _8a6e2e2d_tempCalls { _8a6e2e2d_tempCalls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _8a6e2e2d_tempCalls(const _8a6e2e2d_tempCalls &) = delete; } _8a6e2e2d_tempCalls;
typedef struct _8a6e2e2d_optionalFile { _8a6e2e2d_optionalFile(char* value): value(value) {}; char* value; _8a6e2e2d_optionalFile(const _8a6e2e2d_optionalFile &) = delete; } _8a6e2e2d_optionalFile;
typedef struct _8a6e2e2d_optionalLine { _8a6e2e2d_optionalLine(int value): value(value) {}; int value; _8a6e2e2d_optionalLine(const _8a6e2e2d_optionalLine &) = delete; } _8a6e2e2d_optionalLine;
typedef struct _8a6e2e2d_optionalUserData { _8a6e2e2d_optionalUserData(void* value): value(value) {}; void* value; _8a6e2e2d_optionalUserData(const _8a6e2e2d_optionalUserData &) = delete; } _8a6e2e2d_optionalUserData;
typedef struct _8a6e2e2d_rteParameters { _8a6e2e2d_rteParameters(void* value): value(value) {}; void* value; _8a6e2e2d_rteParameters(const _8a6e2e2d_rteParameters &) = delete; } _8a6e2e2d_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowTempCallsEndSubmitWaitAndDestroy(_8a6e2e2d_helperAppWindow & helperAppWindow, _8a6e2e2d_tempCalls & tempCalls, _8a6e2e2d_optionalFile & optionalFile, _8a6e2e2d_optionalLine & optionalLine, _8a6e2e2d_optionalUserData & optionalUserData, _8a6e2e2d_rteParameters & rteParameters) {
  return redRteHelperAppWindowTempCallsEndSubmitWaitAndDestroy(helperAppWindow.value, tempCalls.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowOnFileDrop redRteHelperAppWindowOnFileDrop
#define _6d4e1289_helperAppWindow(value) value
#define _6d4e1289_filename(value) value
#define _6d4e1289_optionalFile(value) value
#define _6d4e1289_optionalLine(value) value
#define _6d4e1289_optionalUserData(value) value
#define _6d4e1289_rteParameters(value) value
#else
typedef struct _6d4e1289_helperAppWindow { _6d4e1289_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _6d4e1289_helperAppWindow(const _6d4e1289_helperAppWindow &) = delete; } _6d4e1289_helperAppWindow;
typedef struct _6d4e1289_filename { _6d4e1289_filename(char* value): value(value) {}; char* value; _6d4e1289_filename(const _6d4e1289_filename &) = delete; } _6d4e1289_filename;
typedef struct _6d4e1289_optionalFile { _6d4e1289_optionalFile(char* value): value(value) {}; char* value; _6d4e1289_optionalFile(const _6d4e1289_optionalFile &) = delete; } _6d4e1289_optionalFile;
typedef struct _6d4e1289_optionalLine { _6d4e1289_optionalLine(int value): value(value) {}; int value; _6d4e1289_optionalLine(const _6d4e1289_optionalLine &) = delete; } _6d4e1289_optionalLine;
typedef struct _6d4e1289_optionalUserData { _6d4e1289_optionalUserData(void* value): value(value) {}; void* value; _6d4e1289_optionalUserData(const _6d4e1289_optionalUserData &) = delete; } _6d4e1289_optionalUserData;
typedef struct _6d4e1289_rteParameters { _6d4e1289_rteParameters(void* value): value(value) {}; void* value; _6d4e1289_rteParameters(const _6d4e1289_rteParameters &) = delete; } _6d4e1289_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowOnFileDrop(_6d4e1289_helperAppWindow & helperAppWindow, _6d4e1289_filename & filename, _6d4e1289_optionalFile & optionalFile, _6d4e1289_optionalLine & optionalLine, _6d4e1289_optionalUserData & optionalUserData, _6d4e1289_rteParameters & rteParameters) {
  return redRteHelperAppWindowOnFileDrop(helperAppWindow.value, filename.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetRteContext redRteHelperAppWindowGetRteContext
#define _e7fbecf3_helperAppWindow(value) value
#define _e7fbecf3_optionalFile(value) value
#define _e7fbecf3_optionalLine(value) value
#define _e7fbecf3_optionalUserData(value) value
#define _e7fbecf3_rteParameters(value) value
#else
typedef struct _e7fbecf3_helperAppWindow { _e7fbecf3_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _e7fbecf3_helperAppWindow(const _e7fbecf3_helperAppWindow &) = delete; } _e7fbecf3_helperAppWindow;
typedef struct _e7fbecf3_optionalFile { _e7fbecf3_optionalFile(char* value): value(value) {}; char* value; _e7fbecf3_optionalFile(const _e7fbecf3_optionalFile &) = delete; } _e7fbecf3_optionalFile;
typedef struct _e7fbecf3_optionalLine { _e7fbecf3_optionalLine(int value): value(value) {}; int value; _e7fbecf3_optionalLine(const _e7fbecf3_optionalLine &) = delete; } _e7fbecf3_optionalLine;
typedef struct _e7fbecf3_optionalUserData { _e7fbecf3_optionalUserData(void* value): value(value) {}; void* value; _e7fbecf3_optionalUserData(const _e7fbecf3_optionalUserData &) = delete; } _e7fbecf3_optionalUserData;
typedef struct _e7fbecf3_rteParameters { _e7fbecf3_rteParameters(void* value): value(value) {}; void* value; _e7fbecf3_rteParameters(const _e7fbecf3_rteParameters &) = delete; } _e7fbecf3_rteParameters;
REDGPU_NP_DECLSPEC RedRteHandleContext REDGPU_NP_API np_redRteHelperAppWindowGetRteContext(_e7fbecf3_helperAppWindow & helperAppWindow, _e7fbecf3_optionalFile & optionalFile, _e7fbecf3_optionalLine & optionalLine, _e7fbecf3_optionalUserData & optionalUserData, _e7fbecf3_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetRteContext(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetGlfwWindow redRteHelperAppWindowGetGlfwWindow
#define _c49fa0c3_helperAppWindow(value) value
#define _c49fa0c3_optionalFile(value) value
#define _c49fa0c3_optionalLine(value) value
#define _c49fa0c3_optionalUserData(value) value
#define _c49fa0c3_rteParameters(value) value
#else
typedef struct _c49fa0c3_helperAppWindow { _c49fa0c3_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _c49fa0c3_helperAppWindow(const _c49fa0c3_helperAppWindow &) = delete; } _c49fa0c3_helperAppWindow;
typedef struct _c49fa0c3_optionalFile { _c49fa0c3_optionalFile(char* value): value(value) {}; char* value; _c49fa0c3_optionalFile(const _c49fa0c3_optionalFile &) = delete; } _c49fa0c3_optionalFile;
typedef struct _c49fa0c3_optionalLine { _c49fa0c3_optionalLine(int value): value(value) {}; int value; _c49fa0c3_optionalLine(const _c49fa0c3_optionalLine &) = delete; } _c49fa0c3_optionalLine;
typedef struct _c49fa0c3_optionalUserData { _c49fa0c3_optionalUserData(void* value): value(value) {}; void* value; _c49fa0c3_optionalUserData(const _c49fa0c3_optionalUserData &) = delete; } _c49fa0c3_optionalUserData;
typedef struct _c49fa0c3_rteParameters { _c49fa0c3_rteParameters(void* value): value(value) {}; void* value; _c49fa0c3_rteParameters(const _c49fa0c3_rteParameters &) = delete; } _c49fa0c3_rteParameters;
REDGPU_NP_DECLSPEC void* REDGPU_NP_API np_redRteHelperAppWindowGetGlfwWindow(_c49fa0c3_helperAppWindow & helperAppWindow, _c49fa0c3_optionalFile & optionalFile, _c49fa0c3_optionalLine & optionalLine, _c49fa0c3_optionalUserData & optionalUserData, _c49fa0c3_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetGlfwWindow(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetViewportWidth redRteHelperAppWindowGetViewportWidth
#define _008a775f_helperAppWindow(value) value
#define _008a775f_optionalFile(value) value
#define _008a775f_optionalLine(value) value
#define _008a775f_optionalUserData(value) value
#define _008a775f_rteParameters(value) value
#else
typedef struct _008a775f_helperAppWindow { _008a775f_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _008a775f_helperAppWindow(const _008a775f_helperAppWindow &) = delete; } _008a775f_helperAppWindow;
typedef struct _008a775f_optionalFile { _008a775f_optionalFile(char* value): value(value) {}; char* value; _008a775f_optionalFile(const _008a775f_optionalFile &) = delete; } _008a775f_optionalFile;
typedef struct _008a775f_optionalLine { _008a775f_optionalLine(int value): value(value) {}; int value; _008a775f_optionalLine(const _008a775f_optionalLine &) = delete; } _008a775f_optionalLine;
typedef struct _008a775f_optionalUserData { _008a775f_optionalUserData(void* value): value(value) {}; void* value; _008a775f_optionalUserData(const _008a775f_optionalUserData &) = delete; } _008a775f_optionalUserData;
typedef struct _008a775f_rteParameters { _008a775f_rteParameters(void* value): value(value) {}; void* value; _008a775f_rteParameters(const _008a775f_rteParameters &) = delete; } _008a775f_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowGetViewportWidth(_008a775f_helperAppWindow & helperAppWindow, _008a775f_optionalFile & optionalFile, _008a775f_optionalLine & optionalLine, _008a775f_optionalUserData & optionalUserData, _008a775f_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetViewportWidth(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetViewportHeight redRteHelperAppWindowGetViewportHeight
#define _0e4eac77_helperAppWindow(value) value
#define _0e4eac77_optionalFile(value) value
#define _0e4eac77_optionalLine(value) value
#define _0e4eac77_optionalUserData(value) value
#define _0e4eac77_rteParameters(value) value
#else
typedef struct _0e4eac77_helperAppWindow { _0e4eac77_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _0e4eac77_helperAppWindow(const _0e4eac77_helperAppWindow &) = delete; } _0e4eac77_helperAppWindow;
typedef struct _0e4eac77_optionalFile { _0e4eac77_optionalFile(char* value): value(value) {}; char* value; _0e4eac77_optionalFile(const _0e4eac77_optionalFile &) = delete; } _0e4eac77_optionalFile;
typedef struct _0e4eac77_optionalLine { _0e4eac77_optionalLine(int value): value(value) {}; int value; _0e4eac77_optionalLine(const _0e4eac77_optionalLine &) = delete; } _0e4eac77_optionalLine;
typedef struct _0e4eac77_optionalUserData { _0e4eac77_optionalUserData(void* value): value(value) {}; void* value; _0e4eac77_optionalUserData(const _0e4eac77_optionalUserData &) = delete; } _0e4eac77_optionalUserData;
typedef struct _0e4eac77_rteParameters { _0e4eac77_rteParameters(void* value): value(value) {}; void* value; _0e4eac77_rteParameters(const _0e4eac77_rteParameters &) = delete; } _0e4eac77_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowGetViewportHeight(_0e4eac77_helperAppWindow & helperAppWindow, _0e4eac77_optionalFile & optionalFile, _0e4eac77_optionalLine & optionalLine, _0e4eac77_optionalUserData & optionalUserData, _0e4eac77_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetViewportHeight(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetWindowWidth redRteHelperAppWindowGetWindowWidth
#define _44d3ff0a_helperAppWindow(value) value
#define _44d3ff0a_optionalFile(value) value
#define _44d3ff0a_optionalLine(value) value
#define _44d3ff0a_optionalUserData(value) value
#define _44d3ff0a_rteParameters(value) value
#else
typedef struct _44d3ff0a_helperAppWindow { _44d3ff0a_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _44d3ff0a_helperAppWindow(const _44d3ff0a_helperAppWindow &) = delete; } _44d3ff0a_helperAppWindow;
typedef struct _44d3ff0a_optionalFile { _44d3ff0a_optionalFile(char* value): value(value) {}; char* value; _44d3ff0a_optionalFile(const _44d3ff0a_optionalFile &) = delete; } _44d3ff0a_optionalFile;
typedef struct _44d3ff0a_optionalLine { _44d3ff0a_optionalLine(int value): value(value) {}; int value; _44d3ff0a_optionalLine(const _44d3ff0a_optionalLine &) = delete; } _44d3ff0a_optionalLine;
typedef struct _44d3ff0a_optionalUserData { _44d3ff0a_optionalUserData(void* value): value(value) {}; void* value; _44d3ff0a_optionalUserData(const _44d3ff0a_optionalUserData &) = delete; } _44d3ff0a_optionalUserData;
typedef struct _44d3ff0a_rteParameters { _44d3ff0a_rteParameters(void* value): value(value) {}; void* value; _44d3ff0a_rteParameters(const _44d3ff0a_rteParameters &) = delete; } _44d3ff0a_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowGetWindowWidth(_44d3ff0a_helperAppWindow & helperAppWindow, _44d3ff0a_optionalFile & optionalFile, _44d3ff0a_optionalLine & optionalLine, _44d3ff0a_optionalUserData & optionalUserData, _44d3ff0a_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetWindowWidth(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetWindowHeight redRteHelperAppWindowGetWindowHeight
#define _8d34566e_helperAppWindow(value) value
#define _8d34566e_optionalFile(value) value
#define _8d34566e_optionalLine(value) value
#define _8d34566e_optionalUserData(value) value
#define _8d34566e_rteParameters(value) value
#else
typedef struct _8d34566e_helperAppWindow { _8d34566e_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _8d34566e_helperAppWindow(const _8d34566e_helperAppWindow &) = delete; } _8d34566e_helperAppWindow;
typedef struct _8d34566e_optionalFile { _8d34566e_optionalFile(char* value): value(value) {}; char* value; _8d34566e_optionalFile(const _8d34566e_optionalFile &) = delete; } _8d34566e_optionalFile;
typedef struct _8d34566e_optionalLine { _8d34566e_optionalLine(int value): value(value) {}; int value; _8d34566e_optionalLine(const _8d34566e_optionalLine &) = delete; } _8d34566e_optionalLine;
typedef struct _8d34566e_optionalUserData { _8d34566e_optionalUserData(void* value): value(value) {}; void* value; _8d34566e_optionalUserData(const _8d34566e_optionalUserData &) = delete; } _8d34566e_optionalUserData;
typedef struct _8d34566e_rteParameters { _8d34566e_rteParameters(void* value): value(value) {}; void* value; _8d34566e_rteParameters(const _8d34566e_rteParameters &) = delete; } _8d34566e_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperAppWindowGetWindowHeight(_8d34566e_helperAppWindow & helperAppWindow, _8d34566e_optionalFile & optionalFile, _8d34566e_optionalLine & optionalLine, _8d34566e_optionalUserData & optionalUserData, _8d34566e_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetWindowHeight(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperAppWindowGetImGuiImplVulkanHWindowData redRteHelperAppWindowGetImGuiImplVulkanHWindowData
#define _e5c0e7fc_helperAppWindow(value) value
#define _e5c0e7fc_optionalFile(value) value
#define _e5c0e7fc_optionalLine(value) value
#define _e5c0e7fc_optionalUserData(value) value
#define _e5c0e7fc_rteParameters(value) value
#else
typedef struct _e5c0e7fc_helperAppWindow { _e5c0e7fc_helperAppWindow(RedRteHandleHelperAppWindow value): value(value) {}; RedRteHandleHelperAppWindow value; _e5c0e7fc_helperAppWindow(const _e5c0e7fc_helperAppWindow &) = delete; } _e5c0e7fc_helperAppWindow;
typedef struct _e5c0e7fc_optionalFile { _e5c0e7fc_optionalFile(char* value): value(value) {}; char* value; _e5c0e7fc_optionalFile(const _e5c0e7fc_optionalFile &) = delete; } _e5c0e7fc_optionalFile;
typedef struct _e5c0e7fc_optionalLine { _e5c0e7fc_optionalLine(int value): value(value) {}; int value; _e5c0e7fc_optionalLine(const _e5c0e7fc_optionalLine &) = delete; } _e5c0e7fc_optionalLine;
typedef struct _e5c0e7fc_optionalUserData { _e5c0e7fc_optionalUserData(void* value): value(value) {}; void* value; _e5c0e7fc_optionalUserData(const _e5c0e7fc_optionalUserData &) = delete; } _e5c0e7fc_optionalUserData;
typedef struct _e5c0e7fc_rteParameters { _e5c0e7fc_rteParameters(void* value): value(value) {}; void* value; _e5c0e7fc_rteParameters(const _e5c0e7fc_rteParameters &) = delete; } _e5c0e7fc_rteParameters;
REDGPU_NP_DECLSPEC void* REDGPU_NP_API np_redRteHelperAppWindowGetImGuiImplVulkanHWindowData(_e5c0e7fc_helperAppWindow & helperAppWindow, _e5c0e7fc_optionalFile & optionalFile, _e5c0e7fc_optionalLine & optionalLine, _e5c0e7fc_optionalUserData & optionalUserData, _e5c0e7fc_rteParameters & rteParameters) {
  return redRteHelperAppWindowGetImGuiImplVulkanHWindowData(helperAppWindow.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCreateHelperGBuffer redRteCreateHelperGBuffer
#define _912a0062_rteContext(value) value
#define _912a0062_rteHandleHelperAllocator(value) value
#define _912a0062_width(value) value
#define _912a0062_height(value) value
#define _912a0062_colorFormatsCount(value) value
#define _912a0062_colorFormats(value) value
#define _912a0062_depthFormat(value) value
#define _912a0062_outHelperGBuffer(value) value
#define _912a0062_outStatuses(value) value
#define _912a0062_optionalFile(value) value
#define _912a0062_optionalLine(value) value
#define _912a0062_optionalUserData(value) value
#define _912a0062_rteParameters(value) value
#else
typedef struct _912a0062_rteContext { _912a0062_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _912a0062_rteContext(const _912a0062_rteContext &) = delete; } _912a0062_rteContext;
typedef struct _912a0062_rteHandleHelperAllocator { _912a0062_rteHandleHelperAllocator(void* value): value(value) {}; void* value; _912a0062_rteHandleHelperAllocator(const _912a0062_rteHandleHelperAllocator &) = delete; } _912a0062_rteHandleHelperAllocator;
typedef struct _912a0062_width { _912a0062_width(unsigned value): value(value) {}; unsigned value; _912a0062_width(const _912a0062_width &) = delete; } _912a0062_width;
typedef struct _912a0062_height { _912a0062_height(unsigned value): value(value) {}; unsigned value; _912a0062_height(const _912a0062_height &) = delete; } _912a0062_height;
typedef struct _912a0062_colorFormatsCount { _912a0062_colorFormatsCount(unsigned value): value(value) {}; unsigned value; _912a0062_colorFormatsCount(const _912a0062_colorFormatsCount &) = delete; } _912a0062_colorFormatsCount;
typedef struct _912a0062_colorFormats { _912a0062_colorFormats(unsigned* value): value(value) {}; unsigned* value; _912a0062_colorFormats(const _912a0062_colorFormats &) = delete; } _912a0062_colorFormats;
typedef struct _912a0062_depthFormat { _912a0062_depthFormat(unsigned value): value(value) {}; unsigned value; _912a0062_depthFormat(const _912a0062_depthFormat &) = delete; } _912a0062_depthFormat;
typedef struct _912a0062_outHelperGBuffer { _912a0062_outHelperGBuffer(RedRteHandleHelperGBuffer* value): value(value) {}; RedRteHandleHelperGBuffer* value; _912a0062_outHelperGBuffer(const _912a0062_outHelperGBuffer &) = delete; } _912a0062_outHelperGBuffer;
typedef struct _912a0062_outStatuses { _912a0062_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _912a0062_outStatuses(const _912a0062_outStatuses &) = delete; } _912a0062_outStatuses;
typedef struct _912a0062_optionalFile { _912a0062_optionalFile(char* value): value(value) {}; char* value; _912a0062_optionalFile(const _912a0062_optionalFile &) = delete; } _912a0062_optionalFile;
typedef struct _912a0062_optionalLine { _912a0062_optionalLine(int value): value(value) {}; int value; _912a0062_optionalLine(const _912a0062_optionalLine &) = delete; } _912a0062_optionalLine;
typedef struct _912a0062_optionalUserData { _912a0062_optionalUserData(void* value): value(value) {}; void* value; _912a0062_optionalUserData(const _912a0062_optionalUserData &) = delete; } _912a0062_optionalUserData;
typedef struct _912a0062_rteParameters { _912a0062_rteParameters(void* value): value(value) {}; void* value; _912a0062_rteParameters(const _912a0062_rteParameters &) = delete; } _912a0062_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCreateHelperGBuffer(_912a0062_rteContext & rteContext, _912a0062_rteHandleHelperAllocator & rteHandleHelperAllocator, _912a0062_width & width, _912a0062_height & height, _912a0062_colorFormatsCount & colorFormatsCount, _912a0062_colorFormats & colorFormats, _912a0062_depthFormat & depthFormat, _912a0062_outHelperGBuffer & outHelperGBuffer, _912a0062_outStatuses & outStatuses, _912a0062_optionalFile & optionalFile, _912a0062_optionalLine & optionalLine, _912a0062_optionalUserData & optionalUserData, _912a0062_rteParameters & rteParameters) {
  return redRteCreateHelperGBuffer(rteContext.value, rteHandleHelperAllocator.value, width.value, height.value, colorFormatsCount.value, colorFormats.value, depthFormat.value, outHelperGBuffer.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteDestroyHelperGBuffer redRteDestroyHelperGBuffer
#define _341970df_helperGBuffer(value) value
#define _341970df_optionalFile(value) value
#define _341970df_optionalLine(value) value
#define _341970df_optionalUserData(value) value
#define _341970df_rteParameters(value) value
#else
typedef struct _341970df_helperGBuffer { _341970df_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _341970df_helperGBuffer(const _341970df_helperGBuffer &) = delete; } _341970df_helperGBuffer;
typedef struct _341970df_optionalFile { _341970df_optionalFile(char* value): value(value) {}; char* value; _341970df_optionalFile(const _341970df_optionalFile &) = delete; } _341970df_optionalFile;
typedef struct _341970df_optionalLine { _341970df_optionalLine(int value): value(value) {}; int value; _341970df_optionalLine(const _341970df_optionalLine &) = delete; } _341970df_optionalLine;
typedef struct _341970df_optionalUserData { _341970df_optionalUserData(void* value): value(value) {}; void* value; _341970df_optionalUserData(const _341970df_optionalUserData &) = delete; } _341970df_optionalUserData;
typedef struct _341970df_rteParameters { _341970df_rteParameters(void* value): value(value) {}; void* value; _341970df_rteParameters(const _341970df_rteParameters &) = delete; } _341970df_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteDestroyHelperGBuffer(_341970df_helperGBuffer & helperGBuffer, _341970df_optionalFile & optionalFile, _341970df_optionalLine & optionalLine, _341970df_optionalUserData & optionalUserData, _341970df_rteParameters & rteParameters) {
  return redRteDestroyHelperGBuffer(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetStruct redRteHelperGBufferGetStruct
#define _8bd80a5b_helperGBuffer(value) value
#define _8bd80a5b_index(value) value
#define _8bd80a5b_optionalFile(value) value
#define _8bd80a5b_optionalLine(value) value
#define _8bd80a5b_optionalUserData(value) value
#define _8bd80a5b_rteParameters(value) value
#else
typedef struct _8bd80a5b_helperGBuffer { _8bd80a5b_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _8bd80a5b_helperGBuffer(const _8bd80a5b_helperGBuffer &) = delete; } _8bd80a5b_helperGBuffer;
typedef struct _8bd80a5b_index { _8bd80a5b_index(unsigned value): value(value) {}; unsigned value; _8bd80a5b_index(const _8bd80a5b_index &) = delete; } _8bd80a5b_index;
typedef struct _8bd80a5b_optionalFile { _8bd80a5b_optionalFile(char* value): value(value) {}; char* value; _8bd80a5b_optionalFile(const _8bd80a5b_optionalFile &) = delete; } _8bd80a5b_optionalFile;
typedef struct _8bd80a5b_optionalLine { _8bd80a5b_optionalLine(int value): value(value) {}; int value; _8bd80a5b_optionalLine(const _8bd80a5b_optionalLine &) = delete; } _8bd80a5b_optionalLine;
typedef struct _8bd80a5b_optionalUserData { _8bd80a5b_optionalUserData(void* value): value(value) {}; void* value; _8bd80a5b_optionalUserData(const _8bd80a5b_optionalUserData &) = delete; } _8bd80a5b_optionalUserData;
typedef struct _8bd80a5b_rteParameters { _8bd80a5b_rteParameters(void* value): value(value) {}; void* value; _8bd80a5b_rteParameters(const _8bd80a5b_rteParameters &) = delete; } _8bd80a5b_rteParameters;
REDGPU_NP_DECLSPEC RedHandleStruct REDGPU_NP_API np_redRteHelperGBufferGetStruct(_8bd80a5b_helperGBuffer & helperGBuffer, _8bd80a5b_index & index, _8bd80a5b_optionalFile & optionalFile, _8bd80a5b_optionalLine & optionalLine, _8bd80a5b_optionalUserData & optionalUserData, _8bd80a5b_rteParameters & rteParameters) {
  return redRteHelperGBufferGetStruct(helperGBuffer.value, index.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetWidth redRteHelperGBufferGetWidth
#define _92a7098c_helperGBuffer(value) value
#define _92a7098c_optionalFile(value) value
#define _92a7098c_optionalLine(value) value
#define _92a7098c_optionalUserData(value) value
#define _92a7098c_rteParameters(value) value
#else
typedef struct _92a7098c_helperGBuffer { _92a7098c_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _92a7098c_helperGBuffer(const _92a7098c_helperGBuffer &) = delete; } _92a7098c_helperGBuffer;
typedef struct _92a7098c_optionalFile { _92a7098c_optionalFile(char* value): value(value) {}; char* value; _92a7098c_optionalFile(const _92a7098c_optionalFile &) = delete; } _92a7098c_optionalFile;
typedef struct _92a7098c_optionalLine { _92a7098c_optionalLine(int value): value(value) {}; int value; _92a7098c_optionalLine(const _92a7098c_optionalLine &) = delete; } _92a7098c_optionalLine;
typedef struct _92a7098c_optionalUserData { _92a7098c_optionalUserData(void* value): value(value) {}; void* value; _92a7098c_optionalUserData(const _92a7098c_optionalUserData &) = delete; } _92a7098c_optionalUserData;
typedef struct _92a7098c_rteParameters { _92a7098c_rteParameters(void* value): value(value) {}; void* value; _92a7098c_rteParameters(const _92a7098c_rteParameters &) = delete; } _92a7098c_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperGBufferGetWidth(_92a7098c_helperGBuffer & helperGBuffer, _92a7098c_optionalFile & optionalFile, _92a7098c_optionalLine & optionalLine, _92a7098c_optionalUserData & optionalUserData, _92a7098c_rteParameters & rteParameters) {
  return redRteHelperGBufferGetWidth(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetHeight redRteHelperGBufferGetHeight
#define _ac39b6f2_helperGBuffer(value) value
#define _ac39b6f2_optionalFile(value) value
#define _ac39b6f2_optionalLine(value) value
#define _ac39b6f2_optionalUserData(value) value
#define _ac39b6f2_rteParameters(value) value
#else
typedef struct _ac39b6f2_helperGBuffer { _ac39b6f2_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _ac39b6f2_helperGBuffer(const _ac39b6f2_helperGBuffer &) = delete; } _ac39b6f2_helperGBuffer;
typedef struct _ac39b6f2_optionalFile { _ac39b6f2_optionalFile(char* value): value(value) {}; char* value; _ac39b6f2_optionalFile(const _ac39b6f2_optionalFile &) = delete; } _ac39b6f2_optionalFile;
typedef struct _ac39b6f2_optionalLine { _ac39b6f2_optionalLine(int value): value(value) {}; int value; _ac39b6f2_optionalLine(const _ac39b6f2_optionalLine &) = delete; } _ac39b6f2_optionalLine;
typedef struct _ac39b6f2_optionalUserData { _ac39b6f2_optionalUserData(void* value): value(value) {}; void* value; _ac39b6f2_optionalUserData(const _ac39b6f2_optionalUserData &) = delete; } _ac39b6f2_optionalUserData;
typedef struct _ac39b6f2_rteParameters { _ac39b6f2_rteParameters(void* value): value(value) {}; void* value; _ac39b6f2_rteParameters(const _ac39b6f2_rteParameters &) = delete; } _ac39b6f2_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperGBufferGetHeight(_ac39b6f2_helperGBuffer & helperGBuffer, _ac39b6f2_optionalFile & optionalFile, _ac39b6f2_optionalLine & optionalLine, _ac39b6f2_optionalUserData & optionalUserData, _ac39b6f2_rteParameters & rteParameters) {
  return redRteHelperGBufferGetHeight(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetColorImage redRteHelperGBufferGetColorImage
#define _4044d4cc_helperGBuffer(value) value
#define _4044d4cc_index(value) value
#define _4044d4cc_optionalFile(value) value
#define _4044d4cc_optionalLine(value) value
#define _4044d4cc_optionalUserData(value) value
#define _4044d4cc_rteParameters(value) value
#else
typedef struct _4044d4cc_helperGBuffer { _4044d4cc_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _4044d4cc_helperGBuffer(const _4044d4cc_helperGBuffer &) = delete; } _4044d4cc_helperGBuffer;
typedef struct _4044d4cc_index { _4044d4cc_index(unsigned value): value(value) {}; unsigned value; _4044d4cc_index(const _4044d4cc_index &) = delete; } _4044d4cc_index;
typedef struct _4044d4cc_optionalFile { _4044d4cc_optionalFile(char* value): value(value) {}; char* value; _4044d4cc_optionalFile(const _4044d4cc_optionalFile &) = delete; } _4044d4cc_optionalFile;
typedef struct _4044d4cc_optionalLine { _4044d4cc_optionalLine(int value): value(value) {}; int value; _4044d4cc_optionalLine(const _4044d4cc_optionalLine &) = delete; } _4044d4cc_optionalLine;
typedef struct _4044d4cc_optionalUserData { _4044d4cc_optionalUserData(void* value): value(value) {}; void* value; _4044d4cc_optionalUserData(const _4044d4cc_optionalUserData &) = delete; } _4044d4cc_optionalUserData;
typedef struct _4044d4cc_rteParameters { _4044d4cc_rteParameters(void* value): value(value) {}; void* value; _4044d4cc_rteParameters(const _4044d4cc_rteParameters &) = delete; } _4044d4cc_rteParameters;
REDGPU_NP_DECLSPEC RedHandleImage REDGPU_NP_API np_redRteHelperGBufferGetColorImage(_4044d4cc_helperGBuffer & helperGBuffer, _4044d4cc_index & index, _4044d4cc_optionalFile & optionalFile, _4044d4cc_optionalLine & optionalLine, _4044d4cc_optionalUserData & optionalUserData, _4044d4cc_rteParameters & rteParameters) {
  return redRteHelperGBufferGetColorImage(helperGBuffer.value, index.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetDepthImage redRteHelperGBufferGetDepthImage
#define _46f44520_helperGBuffer(value) value
#define _46f44520_optionalFile(value) value
#define _46f44520_optionalLine(value) value
#define _46f44520_optionalUserData(value) value
#define _46f44520_rteParameters(value) value
#else
typedef struct _46f44520_helperGBuffer { _46f44520_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _46f44520_helperGBuffer(const _46f44520_helperGBuffer &) = delete; } _46f44520_helperGBuffer;
typedef struct _46f44520_optionalFile { _46f44520_optionalFile(char* value): value(value) {}; char* value; _46f44520_optionalFile(const _46f44520_optionalFile &) = delete; } _46f44520_optionalFile;
typedef struct _46f44520_optionalLine { _46f44520_optionalLine(int value): value(value) {}; int value; _46f44520_optionalLine(const _46f44520_optionalLine &) = delete; } _46f44520_optionalLine;
typedef struct _46f44520_optionalUserData { _46f44520_optionalUserData(void* value): value(value) {}; void* value; _46f44520_optionalUserData(const _46f44520_optionalUserData &) = delete; } _46f44520_optionalUserData;
typedef struct _46f44520_rteParameters { _46f44520_rteParameters(void* value): value(value) {}; void* value; _46f44520_rteParameters(const _46f44520_rteParameters &) = delete; } _46f44520_rteParameters;
REDGPU_NP_DECLSPEC RedHandleImage REDGPU_NP_API np_redRteHelperGBufferGetDepthImage(_46f44520_helperGBuffer & helperGBuffer, _46f44520_optionalFile & optionalFile, _46f44520_optionalLine & optionalLine, _46f44520_optionalUserData & optionalUserData, _46f44520_rteParameters & rteParameters) {
  return redRteHelperGBufferGetDepthImage(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetStructMemberTexture redRteHelperGBufferGetStructMemberTexture
#define _aeb94277_helperGBuffer(value) value
#define _aeb94277_index(value) value
#define _aeb94277_outStructMemberTexture(value) value
#define _aeb94277_optionalFile(value) value
#define _aeb94277_optionalLine(value) value
#define _aeb94277_optionalUserData(value) value
#define _aeb94277_rteParameters(value) value
#else
typedef struct _aeb94277_helperGBuffer { _aeb94277_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _aeb94277_helperGBuffer(const _aeb94277_helperGBuffer &) = delete; } _aeb94277_helperGBuffer;
typedef struct _aeb94277_index { _aeb94277_index(unsigned value): value(value) {}; unsigned value; _aeb94277_index(const _aeb94277_index &) = delete; } _aeb94277_index;
typedef struct _aeb94277_outStructMemberTexture { _aeb94277_outStructMemberTexture(RedStructMemberTexture* value): value(value) {}; RedStructMemberTexture* value; _aeb94277_outStructMemberTexture(const _aeb94277_outStructMemberTexture &) = delete; } _aeb94277_outStructMemberTexture;
typedef struct _aeb94277_optionalFile { _aeb94277_optionalFile(char* value): value(value) {}; char* value; _aeb94277_optionalFile(const _aeb94277_optionalFile &) = delete; } _aeb94277_optionalFile;
typedef struct _aeb94277_optionalLine { _aeb94277_optionalLine(int value): value(value) {}; int value; _aeb94277_optionalLine(const _aeb94277_optionalLine &) = delete; } _aeb94277_optionalLine;
typedef struct _aeb94277_optionalUserData { _aeb94277_optionalUserData(void* value): value(value) {}; void* value; _aeb94277_optionalUserData(const _aeb94277_optionalUserData &) = delete; } _aeb94277_optionalUserData;
typedef struct _aeb94277_rteParameters { _aeb94277_rteParameters(void* value): value(value) {}; void* value; _aeb94277_rteParameters(const _aeb94277_rteParameters &) = delete; } _aeb94277_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteHelperGBufferGetStructMemberTexture(_aeb94277_helperGBuffer & helperGBuffer, _aeb94277_index & index, _aeb94277_outStructMemberTexture & outStructMemberTexture, _aeb94277_optionalFile & optionalFile, _aeb94277_optionalLine & optionalLine, _aeb94277_optionalUserData & optionalUserData, _aeb94277_rteParameters & rteParameters) {
  return redRteHelperGBufferGetStructMemberTexture(helperGBuffer.value, index.value, outStructMemberTexture.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetColorTexture redRteHelperGBufferGetColorTexture
#define _b904279e_helperGBuffer(value) value
#define _b904279e_index(value) value
#define _b904279e_optionalFile(value) value
#define _b904279e_optionalLine(value) value
#define _b904279e_optionalUserData(value) value
#define _b904279e_rteParameters(value) value
#else
typedef struct _b904279e_helperGBuffer { _b904279e_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _b904279e_helperGBuffer(const _b904279e_helperGBuffer &) = delete; } _b904279e_helperGBuffer;
typedef struct _b904279e_index { _b904279e_index(unsigned value): value(value) {}; unsigned value; _b904279e_index(const _b904279e_index &) = delete; } _b904279e_index;
typedef struct _b904279e_optionalFile { _b904279e_optionalFile(char* value): value(value) {}; char* value; _b904279e_optionalFile(const _b904279e_optionalFile &) = delete; } _b904279e_optionalFile;
typedef struct _b904279e_optionalLine { _b904279e_optionalLine(int value): value(value) {}; int value; _b904279e_optionalLine(const _b904279e_optionalLine &) = delete; } _b904279e_optionalLine;
typedef struct _b904279e_optionalUserData { _b904279e_optionalUserData(void* value): value(value) {}; void* value; _b904279e_optionalUserData(const _b904279e_optionalUserData &) = delete; } _b904279e_optionalUserData;
typedef struct _b904279e_rteParameters { _b904279e_rteParameters(void* value): value(value) {}; void* value; _b904279e_rteParameters(const _b904279e_rteParameters &) = delete; } _b904279e_rteParameters;
REDGPU_NP_DECLSPEC RedHandleTexture REDGPU_NP_API np_redRteHelperGBufferGetColorTexture(_b904279e_helperGBuffer & helperGBuffer, _b904279e_index & index, _b904279e_optionalFile & optionalFile, _b904279e_optionalLine & optionalLine, _b904279e_optionalUserData & optionalUserData, _b904279e_rteParameters & rteParameters) {
  return redRteHelperGBufferGetColorTexture(helperGBuffer.value, index.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetDepthTexture redRteHelperGBufferGetDepthTexture
#define _fece9577_helperGBuffer(value) value
#define _fece9577_optionalFile(value) value
#define _fece9577_optionalLine(value) value
#define _fece9577_optionalUserData(value) value
#define _fece9577_rteParameters(value) value
#else
typedef struct _fece9577_helperGBuffer { _fece9577_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _fece9577_helperGBuffer(const _fece9577_helperGBuffer &) = delete; } _fece9577_helperGBuffer;
typedef struct _fece9577_optionalFile { _fece9577_optionalFile(char* value): value(value) {}; char* value; _fece9577_optionalFile(const _fece9577_optionalFile &) = delete; } _fece9577_optionalFile;
typedef struct _fece9577_optionalLine { _fece9577_optionalLine(int value): value(value) {}; int value; _fece9577_optionalLine(const _fece9577_optionalLine &) = delete; } _fece9577_optionalLine;
typedef struct _fece9577_optionalUserData { _fece9577_optionalUserData(void* value): value(value) {}; void* value; _fece9577_optionalUserData(const _fece9577_optionalUserData &) = delete; } _fece9577_optionalUserData;
typedef struct _fece9577_rteParameters { _fece9577_rteParameters(void* value): value(value) {}; void* value; _fece9577_rteParameters(const _fece9577_rteParameters &) = delete; } _fece9577_rteParameters;
REDGPU_NP_DECLSPEC RedHandleTexture REDGPU_NP_API np_redRteHelperGBufferGetDepthTexture(_fece9577_helperGBuffer & helperGBuffer, _fece9577_optionalFile & optionalFile, _fece9577_optionalLine & optionalLine, _fece9577_optionalUserData & optionalUserData, _fece9577_rteParameters & rteParameters) {
  return redRteHelperGBufferGetDepthTexture(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetColorFormat redRteHelperGBufferGetColorFormat
#define _37109e36_helperGBuffer(value) value
#define _37109e36_index(value) value
#define _37109e36_optionalFile(value) value
#define _37109e36_optionalLine(value) value
#define _37109e36_optionalUserData(value) value
#define _37109e36_rteParameters(value) value
#else
typedef struct _37109e36_helperGBuffer { _37109e36_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _37109e36_helperGBuffer(const _37109e36_helperGBuffer &) = delete; } _37109e36_helperGBuffer;
typedef struct _37109e36_index { _37109e36_index(unsigned value): value(value) {}; unsigned value; _37109e36_index(const _37109e36_index &) = delete; } _37109e36_index;
typedef struct _37109e36_optionalFile { _37109e36_optionalFile(char* value): value(value) {}; char* value; _37109e36_optionalFile(const _37109e36_optionalFile &) = delete; } _37109e36_optionalFile;
typedef struct _37109e36_optionalLine { _37109e36_optionalLine(int value): value(value) {}; int value; _37109e36_optionalLine(const _37109e36_optionalLine &) = delete; } _37109e36_optionalLine;
typedef struct _37109e36_optionalUserData { _37109e36_optionalUserData(void* value): value(value) {}; void* value; _37109e36_optionalUserData(const _37109e36_optionalUserData &) = delete; } _37109e36_optionalUserData;
typedef struct _37109e36_rteParameters { _37109e36_rteParameters(void* value): value(value) {}; void* value; _37109e36_rteParameters(const _37109e36_rteParameters &) = delete; } _37109e36_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redRteHelperGBufferGetColorFormat(_37109e36_helperGBuffer & helperGBuffer, _37109e36_index & index, _37109e36_optionalFile & optionalFile, _37109e36_optionalLine & optionalLine, _37109e36_optionalUserData & optionalUserData, _37109e36_rteParameters & rteParameters) {
  return redRteHelperGBufferGetColorFormat(helperGBuffer.value, index.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetDepthFormat redRteHelperGBufferGetDepthFormat
#define _815c3c64_helperGBuffer(value) value
#define _815c3c64_optionalFile(value) value
#define _815c3c64_optionalLine(value) value
#define _815c3c64_optionalUserData(value) value
#define _815c3c64_rteParameters(value) value
#else
typedef struct _815c3c64_helperGBuffer { _815c3c64_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _815c3c64_helperGBuffer(const _815c3c64_helperGBuffer &) = delete; } _815c3c64_helperGBuffer;
typedef struct _815c3c64_optionalFile { _815c3c64_optionalFile(char* value): value(value) {}; char* value; _815c3c64_optionalFile(const _815c3c64_optionalFile &) = delete; } _815c3c64_optionalFile;
typedef struct _815c3c64_optionalLine { _815c3c64_optionalLine(int value): value(value) {}; int value; _815c3c64_optionalLine(const _815c3c64_optionalLine &) = delete; } _815c3c64_optionalLine;
typedef struct _815c3c64_optionalUserData { _815c3c64_optionalUserData(void* value): value(value) {}; void* value; _815c3c64_optionalUserData(const _815c3c64_optionalUserData &) = delete; } _815c3c64_optionalUserData;
typedef struct _815c3c64_rteParameters { _815c3c64_rteParameters(void* value): value(value) {}; void* value; _815c3c64_rteParameters(const _815c3c64_rteParameters &) = delete; } _815c3c64_rteParameters;
REDGPU_NP_DECLSPEC unsigned REDGPU_NP_API np_redRteHelperGBufferGetDepthFormat(_815c3c64_helperGBuffer & helperGBuffer, _815c3c64_optionalFile & optionalFile, _815c3c64_optionalLine & optionalLine, _815c3c64_optionalUserData & optionalUserData, _815c3c64_rteParameters & rteParameters) {
  return redRteHelperGBufferGetDepthFormat(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteHelperGBufferGetAspectRatio redRteHelperGBufferGetAspectRatio
#define _3013eac0_helperGBuffer(value) value
#define _3013eac0_optionalFile(value) value
#define _3013eac0_optionalLine(value) value
#define _3013eac0_optionalUserData(value) value
#define _3013eac0_rteParameters(value) value
#else
typedef struct _3013eac0_helperGBuffer { _3013eac0_helperGBuffer(RedRteHandleHelperGBuffer value): value(value) {}; RedRteHandleHelperGBuffer value; _3013eac0_helperGBuffer(const _3013eac0_helperGBuffer &) = delete; } _3013eac0_helperGBuffer;
typedef struct _3013eac0_optionalFile { _3013eac0_optionalFile(char* value): value(value) {}; char* value; _3013eac0_optionalFile(const _3013eac0_optionalFile &) = delete; } _3013eac0_optionalFile;
typedef struct _3013eac0_optionalLine { _3013eac0_optionalLine(int value): value(value) {}; int value; _3013eac0_optionalLine(const _3013eac0_optionalLine &) = delete; } _3013eac0_optionalLine;
typedef struct _3013eac0_optionalUserData { _3013eac0_optionalUserData(void* value): value(value) {}; void* value; _3013eac0_optionalUserData(const _3013eac0_optionalUserData &) = delete; } _3013eac0_optionalUserData;
typedef struct _3013eac0_rteParameters { _3013eac0_rteParameters(void* value): value(value) {}; void* value; _3013eac0_rteParameters(const _3013eac0_rteParameters &) = delete; } _3013eac0_rteParameters;
REDGPU_NP_DECLSPEC float REDGPU_NP_API np_redRteHelperGBufferGetAspectRatio(_3013eac0_helperGBuffer & helperGBuffer, _3013eac0_optionalFile & optionalFile, _3013eac0_optionalLine & optionalLine, _3013eac0_optionalUserData & optionalUserData, _3013eac0_rteParameters & rteParameters) {
  return redRteHelperGBufferGetAspectRatio(helperGBuffer.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteGpuWaitIdle redRteGpuWaitIdle
#define _b83d5a49_rteContext(value) value
#define _b83d5a49_optionalFile(value) value
#define _b83d5a49_optionalLine(value) value
#define _b83d5a49_optionalUserData(value) value
#define _b83d5a49_rteParameters(value) value
#else
typedef struct _b83d5a49_rteContext { _b83d5a49_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _b83d5a49_rteContext(const _b83d5a49_rteContext &) = delete; } _b83d5a49_rteContext;
typedef struct _b83d5a49_optionalFile { _b83d5a49_optionalFile(char* value): value(value) {}; char* value; _b83d5a49_optionalFile(const _b83d5a49_optionalFile &) = delete; } _b83d5a49_optionalFile;
typedef struct _b83d5a49_optionalLine { _b83d5a49_optionalLine(int value): value(value) {}; int value; _b83d5a49_optionalLine(const _b83d5a49_optionalLine &) = delete; } _b83d5a49_optionalLine;
typedef struct _b83d5a49_optionalUserData { _b83d5a49_optionalUserData(void* value): value(value) {}; void* value; _b83d5a49_optionalUserData(const _b83d5a49_optionalUserData &) = delete; } _b83d5a49_optionalUserData;
typedef struct _b83d5a49_rteParameters { _b83d5a49_rteParameters(void* value): value(value) {}; void* value; _b83d5a49_rteParameters(const _b83d5a49_rteParameters &) = delete; } _b83d5a49_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteGpuWaitIdle(_b83d5a49_rteContext & rteContext, _b83d5a49_optionalFile & optionalFile, _b83d5a49_optionalLine & optionalLine, _b83d5a49_optionalUserData & optionalUserData, _b83d5a49_rteParameters & rteParameters) {
  return redRteGpuWaitIdle(rteContext.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteQueueWaitIdle redRteQueueWaitIdle
#define _e5c46d25_rteContext(value) value
#define _e5c46d25_queue(value) value
#define _e5c46d25_optionalFile(value) value
#define _e5c46d25_optionalLine(value) value
#define _e5c46d25_optionalUserData(value) value
#define _e5c46d25_rteParameters(value) value
#else
typedef struct _e5c46d25_rteContext { _e5c46d25_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _e5c46d25_rteContext(const _e5c46d25_rteContext &) = delete; } _e5c46d25_rteContext;
typedef struct _e5c46d25_queue { _e5c46d25_queue(RedHandleQueue value): value(value) {}; RedHandleQueue value; _e5c46d25_queue(const _e5c46d25_queue &) = delete; } _e5c46d25_queue;
typedef struct _e5c46d25_optionalFile { _e5c46d25_optionalFile(char* value): value(value) {}; char* value; _e5c46d25_optionalFile(const _e5c46d25_optionalFile &) = delete; } _e5c46d25_optionalFile;
typedef struct _e5c46d25_optionalLine { _e5c46d25_optionalLine(int value): value(value) {}; int value; _e5c46d25_optionalLine(const _e5c46d25_optionalLine &) = delete; } _e5c46d25_optionalLine;
typedef struct _e5c46d25_optionalUserData { _e5c46d25_optionalUserData(void* value): value(value) {}; void* value; _e5c46d25_optionalUserData(const _e5c46d25_optionalUserData &) = delete; } _e5c46d25_optionalUserData;
typedef struct _e5c46d25_rteParameters { _e5c46d25_rteParameters(void* value): value(value) {}; void* value; _e5c46d25_rteParameters(const _e5c46d25_rteParameters &) = delete; } _e5c46d25_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteQueueWaitIdle(_e5c46d25_rteContext & rteContext, _e5c46d25_queue & queue, _e5c46d25_optionalFile & optionalFile, _e5c46d25_optionalLine & optionalLine, _e5c46d25_optionalUserData & optionalUserData, _e5c46d25_rteParameters & rteParameters) {
  return redRteQueueWaitIdle(rteContext.value, queue.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteArrayGetMemoryRequirements redRteArrayGetMemoryRequirements
#define _c4294edd_rteContext(value) value
#define _c4294edd_inoutArray(value) value
#define _c4294edd_optionalFile(value) value
#define _c4294edd_optionalLine(value) value
#define _c4294edd_optionalUserData(value) value
#define _c4294edd_rteParameters(value) value
#else
typedef struct _c4294edd_rteContext { _c4294edd_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _c4294edd_rteContext(const _c4294edd_rteContext &) = delete; } _c4294edd_rteContext;
typedef struct _c4294edd_inoutArray { _c4294edd_inoutArray(RedArray* value): value(value) {}; RedArray* value; _c4294edd_inoutArray(const _c4294edd_inoutArray &) = delete; } _c4294edd_inoutArray;
typedef struct _c4294edd_optionalFile { _c4294edd_optionalFile(char* value): value(value) {}; char* value; _c4294edd_optionalFile(const _c4294edd_optionalFile &) = delete; } _c4294edd_optionalFile;
typedef struct _c4294edd_optionalLine { _c4294edd_optionalLine(int value): value(value) {}; int value; _c4294edd_optionalLine(const _c4294edd_optionalLine &) = delete; } _c4294edd_optionalLine;
typedef struct _c4294edd_optionalUserData { _c4294edd_optionalUserData(void* value): value(value) {}; void* value; _c4294edd_optionalUserData(const _c4294edd_optionalUserData &) = delete; } _c4294edd_optionalUserData;
typedef struct _c4294edd_rteParameters { _c4294edd_rteParameters(void* value): value(value) {}; void* value; _c4294edd_rteParameters(const _c4294edd_rteParameters &) = delete; } _c4294edd_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteArrayGetMemoryRequirements(_c4294edd_rteContext & rteContext, _c4294edd_inoutArray & inoutArray, _c4294edd_optionalFile & optionalFile, _c4294edd_optionalLine & optionalLine, _c4294edd_optionalUserData & optionalUserData, _c4294edd_rteParameters & rteParameters) {
  return redRteArrayGetMemoryRequirements(rteContext.value, inoutArray.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteImageGetMemoryRequirements redRteImageGetMemoryRequirements
#define _a8ee680e_rteContext(value) value
#define _a8ee680e_inoutImage(value) value
#define _a8ee680e_optionalFile(value) value
#define _a8ee680e_optionalLine(value) value
#define _a8ee680e_optionalUserData(value) value
#define _a8ee680e_rteParameters(value) value
#else
typedef struct _a8ee680e_rteContext { _a8ee680e_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _a8ee680e_rteContext(const _a8ee680e_rteContext &) = delete; } _a8ee680e_rteContext;
typedef struct _a8ee680e_inoutImage { _a8ee680e_inoutImage(RedImage* value): value(value) {}; RedImage* value; _a8ee680e_inoutImage(const _a8ee680e_inoutImage &) = delete; } _a8ee680e_inoutImage;
typedef struct _a8ee680e_optionalFile { _a8ee680e_optionalFile(char* value): value(value) {}; char* value; _a8ee680e_optionalFile(const _a8ee680e_optionalFile &) = delete; } _a8ee680e_optionalFile;
typedef struct _a8ee680e_optionalLine { _a8ee680e_optionalLine(int value): value(value) {}; int value; _a8ee680e_optionalLine(const _a8ee680e_optionalLine &) = delete; } _a8ee680e_optionalLine;
typedef struct _a8ee680e_optionalUserData { _a8ee680e_optionalUserData(void* value): value(value) {}; void* value; _a8ee680e_optionalUserData(const _a8ee680e_optionalUserData &) = delete; } _a8ee680e_optionalUserData;
typedef struct _a8ee680e_rteParameters { _a8ee680e_rteParameters(void* value): value(value) {}; void* value; _a8ee680e_rteParameters(const _a8ee680e_rteParameters &) = delete; } _a8ee680e_rteParameters;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteImageGetMemoryRequirements(_a8ee680e_rteContext & rteContext, _a8ee680e_inoutImage & inoutImage, _a8ee680e_optionalFile & optionalFile, _a8ee680e_optionalLine & optionalLine, _a8ee680e_optionalUserData & optionalUserData, _a8ee680e_rteParameters & rteParameters) {
  return redRteImageGetMemoryRequirements(rteContext.value, inoutImage.value, optionalFile.value, optionalLine.value, optionalUserData.value, rteParameters.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redRteCallUsageAliasOrderBarrier redRteCallUsageAliasOrderBarrier
#define _16fa6bd9_calls(value) value
#define _16fa6bd9_rteContext(value) value
#define _16fa6bd9_arrayUsagesCount(value) value
#define _16fa6bd9_arrayUsages(value) value
#define _16fa6bd9_imageUsagesCount(value) value
#define _16fa6bd9_imageUsages(value) value
#define _16fa6bd9_aliasesCount(value) value
#define _16fa6bd9_aliases(value) value
#define _16fa6bd9_ordersCount(value) value
#define _16fa6bd9_orders(value) value
#define _16fa6bd9_dependencyFlags(value) value
#else
typedef struct _16fa6bd9_calls { _16fa6bd9_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _16fa6bd9_calls(const _16fa6bd9_calls &) = delete; } _16fa6bd9_calls;
typedef struct _16fa6bd9_rteContext { _16fa6bd9_rteContext(RedRteHandleContext value): value(value) {}; RedRteHandleContext value; _16fa6bd9_rteContext(const _16fa6bd9_rteContext &) = delete; } _16fa6bd9_rteContext;
typedef struct _16fa6bd9_arrayUsagesCount { _16fa6bd9_arrayUsagesCount(unsigned value): value(value) {}; unsigned value; _16fa6bd9_arrayUsagesCount(const _16fa6bd9_arrayUsagesCount &) = delete; } _16fa6bd9_arrayUsagesCount;
typedef struct _16fa6bd9_arrayUsages { _16fa6bd9_arrayUsages(RedRteUsageArray* value): value(value) {}; RedRteUsageArray* value; _16fa6bd9_arrayUsages(const _16fa6bd9_arrayUsages &) = delete; } _16fa6bd9_arrayUsages;
typedef struct _16fa6bd9_imageUsagesCount { _16fa6bd9_imageUsagesCount(unsigned value): value(value) {}; unsigned value; _16fa6bd9_imageUsagesCount(const _16fa6bd9_imageUsagesCount &) = delete; } _16fa6bd9_imageUsagesCount;
typedef struct _16fa6bd9_imageUsages { _16fa6bd9_imageUsages(RedRteUsageImage* value): value(value) {}; RedRteUsageImage* value; _16fa6bd9_imageUsages(const _16fa6bd9_imageUsages &) = delete; } _16fa6bd9_imageUsages;
typedef struct _16fa6bd9_aliasesCount { _16fa6bd9_aliasesCount(unsigned value): value(value) {}; unsigned value; _16fa6bd9_aliasesCount(const _16fa6bd9_aliasesCount &) = delete; } _16fa6bd9_aliasesCount;
typedef struct _16fa6bd9_aliases { _16fa6bd9_aliases(RedAlias* value): value(value) {}; RedAlias* value; _16fa6bd9_aliases(const _16fa6bd9_aliases &) = delete; } _16fa6bd9_aliases;
typedef struct _16fa6bd9_ordersCount { _16fa6bd9_ordersCount(unsigned value): value(value) {}; unsigned value; _16fa6bd9_ordersCount(const _16fa6bd9_ordersCount &) = delete; } _16fa6bd9_ordersCount;
typedef struct _16fa6bd9_orders { _16fa6bd9_orders(RedOrder* value): value(value) {}; RedOrder* value; _16fa6bd9_orders(const _16fa6bd9_orders &) = delete; } _16fa6bd9_orders;
typedef struct _16fa6bd9_dependencyFlags { _16fa6bd9_dependencyFlags(unsigned value): value(value) {}; unsigned value; _16fa6bd9_dependencyFlags(const _16fa6bd9_dependencyFlags &) = delete; } _16fa6bd9_dependencyFlags;
REDGPU_NP_DECLSPEC int64_t REDGPU_NP_API np_redRteCallUsageAliasOrderBarrier(_16fa6bd9_calls & calls, _16fa6bd9_rteContext & rteContext, _16fa6bd9_arrayUsagesCount & arrayUsagesCount, _16fa6bd9_arrayUsages & arrayUsages, _16fa6bd9_imageUsagesCount & imageUsagesCount, _16fa6bd9_imageUsages & imageUsages, _16fa6bd9_aliasesCount & aliasesCount, _16fa6bd9_aliases & aliases, _16fa6bd9_ordersCount & ordersCount, _16fa6bd9_orders & orders, _16fa6bd9_dependencyFlags & dependencyFlags) {
  return redRteCallUsageAliasOrderBarrier(calls.value, rteContext.value, arrayUsagesCount.value, arrayUsages.value, imageUsagesCount.value, imageUsages.value, aliasesCount.value, aliases.value, ordersCount.value, orders.value, dependencyFlags.value);
}
#endif

