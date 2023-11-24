#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateArrayTimestamp redCreateArrayTimestamp
#define _ca446e21_context(value) value
#define _ca446e21_gpu(value) value
#define _ca446e21_handleName(value) value
#define _ca446e21_count(value) value
#define _ca446e21_outArrayTimestamp(value) value
#define _ca446e21_outStatuses(value) value
#define _ca446e21_optionalFile(value) value
#define _ca446e21_optionalLine(value) value
#define _ca446e21_optionalUserData(value) value
#else
typedef struct _ca446e21_context { _ca446e21_context(RedContext value): value(value) {}; RedContext value; _ca446e21_context(const _ca446e21_context &) = delete; } _ca446e21_context;
typedef struct _ca446e21_gpu { _ca446e21_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _ca446e21_gpu(const _ca446e21_gpu &) = delete; } _ca446e21_gpu;
typedef struct _ca446e21_handleName { _ca446e21_handleName(char* value): value(value) {}; char* value; _ca446e21_handleName(const _ca446e21_handleName &) = delete; } _ca446e21_handleName;
typedef struct _ca446e21_count { _ca446e21_count(unsigned value): value(value) {}; unsigned value; _ca446e21_count(const _ca446e21_count &) = delete; } _ca446e21_count;
typedef struct _ca446e21_outArrayTimestamp { _ca446e21_outArrayTimestamp(RedHandleArrayTimestamp* value): value(value) {}; RedHandleArrayTimestamp* value; _ca446e21_outArrayTimestamp(const _ca446e21_outArrayTimestamp &) = delete; } _ca446e21_outArrayTimestamp;
typedef struct _ca446e21_outStatuses { _ca446e21_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _ca446e21_outStatuses(const _ca446e21_outStatuses &) = delete; } _ca446e21_outStatuses;
typedef struct _ca446e21_optionalFile { _ca446e21_optionalFile(char* value): value(value) {}; char* value; _ca446e21_optionalFile(const _ca446e21_optionalFile &) = delete; } _ca446e21_optionalFile;
typedef struct _ca446e21_optionalLine { _ca446e21_optionalLine(int value): value(value) {}; int value; _ca446e21_optionalLine(const _ca446e21_optionalLine &) = delete; } _ca446e21_optionalLine;
typedef struct _ca446e21_optionalUserData { _ca446e21_optionalUserData(void* value): value(value) {}; void* value; _ca446e21_optionalUserData(const _ca446e21_optionalUserData &) = delete; } _ca446e21_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redCreateArrayTimestamp(_ca446e21_context & context, _ca446e21_gpu & gpu, _ca446e21_handleName & handleName, _ca446e21_count & count, _ca446e21_outArrayTimestamp & outArrayTimestamp, _ca446e21_outStatuses & outStatuses, _ca446e21_optionalFile & optionalFile, _ca446e21_optionalLine & optionalLine, _ca446e21_optionalUserData & optionalUserData) {
  redCreateArrayTimestamp(context.value, gpu.value, handleName.value, count.value, outArrayTimestamp.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyArrayTimestamp redDestroyArrayTimestamp
#define _3233be2d_context(value) value
#define _3233be2d_gpu(value) value
#define _3233be2d_arrayTimestamp(value) value
#define _3233be2d_optionalFile(value) value
#define _3233be2d_optionalLine(value) value
#define _3233be2d_optionalUserData(value) value
#else
typedef struct _3233be2d_context { _3233be2d_context(RedContext value): value(value) {}; RedContext value; _3233be2d_context(const _3233be2d_context &) = delete; } _3233be2d_context;
typedef struct _3233be2d_gpu { _3233be2d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _3233be2d_gpu(const _3233be2d_gpu &) = delete; } _3233be2d_gpu;
typedef struct _3233be2d_arrayTimestamp { _3233be2d_arrayTimestamp(RedHandleArrayTimestamp value): value(value) {}; RedHandleArrayTimestamp value; _3233be2d_arrayTimestamp(const _3233be2d_arrayTimestamp &) = delete; } _3233be2d_arrayTimestamp;
typedef struct _3233be2d_optionalFile { _3233be2d_optionalFile(char* value): value(value) {}; char* value; _3233be2d_optionalFile(const _3233be2d_optionalFile &) = delete; } _3233be2d_optionalFile;
typedef struct _3233be2d_optionalLine { _3233be2d_optionalLine(int value): value(value) {}; int value; _3233be2d_optionalLine(const _3233be2d_optionalLine &) = delete; } _3233be2d_optionalLine;
typedef struct _3233be2d_optionalUserData { _3233be2d_optionalUserData(void* value): value(value) {}; void* value; _3233be2d_optionalUserData(const _3233be2d_optionalUserData &) = delete; } _3233be2d_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redDestroyArrayTimestamp(_3233be2d_context & context, _3233be2d_gpu & gpu, _3233be2d_arrayTimestamp & arrayTimestamp, _3233be2d_optionalFile & optionalFile, _3233be2d_optionalLine & optionalLine, _3233be2d_optionalUserData & optionalUserData) {
  redDestroyArrayTimestamp(context.value, gpu.value, arrayTimestamp.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallArrayTimestampWrite redCallArrayTimestampWrite
#define _69ac2ce9_calls(value) value
#define _69ac2ce9_context(value) value
#define _69ac2ce9_arrayTimestamp(value) value
#define _69ac2ce9_index(value) value
#else
typedef struct _69ac2ce9_calls { _69ac2ce9_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _69ac2ce9_calls(const _69ac2ce9_calls &) = delete; } _69ac2ce9_calls;
typedef struct _69ac2ce9_context { _69ac2ce9_context(RedContext value): value(value) {}; RedContext value; _69ac2ce9_context(const _69ac2ce9_context &) = delete; } _69ac2ce9_context;
typedef struct _69ac2ce9_arrayTimestamp { _69ac2ce9_arrayTimestamp(RedHandleArrayTimestamp value): value(value) {}; RedHandleArrayTimestamp value; _69ac2ce9_arrayTimestamp(const _69ac2ce9_arrayTimestamp &) = delete; } _69ac2ce9_arrayTimestamp;
typedef struct _69ac2ce9_index { _69ac2ce9_index(unsigned value): value(value) {}; unsigned value; _69ac2ce9_index(const _69ac2ce9_index &) = delete; } _69ac2ce9_index;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redCallArrayTimestampWrite(_69ac2ce9_calls & calls, _69ac2ce9_context & context, _69ac2ce9_arrayTimestamp & arrayTimestamp, _69ac2ce9_index & index) {
  redCallArrayTimestampWrite(calls.value, context.value, arrayTimestamp.value, index.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redArrayTimestampRead redArrayTimestampRead
#define _38bcaab7_context(value) value
#define _38bcaab7_gpu(value) value
#define _38bcaab7_arrayTimestamp(value) value
#define _38bcaab7_rangeFirst(value) value
#define _38bcaab7_rangeCount(value) value
#define _38bcaab7_out64BitTicksCounts(value) value
#define _38bcaab7_outStatuses(value) value
#define _38bcaab7_optionalFile(value) value
#define _38bcaab7_optionalLine(value) value
#define _38bcaab7_optionalUserData(value) value
#else
typedef struct _38bcaab7_context { _38bcaab7_context(RedContext value): value(value) {}; RedContext value; _38bcaab7_context(const _38bcaab7_context &) = delete; } _38bcaab7_context;
typedef struct _38bcaab7_gpu { _38bcaab7_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _38bcaab7_gpu(const _38bcaab7_gpu &) = delete; } _38bcaab7_gpu;
typedef struct _38bcaab7_arrayTimestamp { _38bcaab7_arrayTimestamp(RedHandleArrayTimestamp value): value(value) {}; RedHandleArrayTimestamp value; _38bcaab7_arrayTimestamp(const _38bcaab7_arrayTimestamp &) = delete; } _38bcaab7_arrayTimestamp;
typedef struct _38bcaab7_rangeFirst { _38bcaab7_rangeFirst(unsigned value): value(value) {}; unsigned value; _38bcaab7_rangeFirst(const _38bcaab7_rangeFirst &) = delete; } _38bcaab7_rangeFirst;
typedef struct _38bcaab7_rangeCount { _38bcaab7_rangeCount(unsigned value): value(value) {}; unsigned value; _38bcaab7_rangeCount(const _38bcaab7_rangeCount &) = delete; } _38bcaab7_rangeCount;
typedef struct _38bcaab7_out64BitTicksCounts { _38bcaab7_out64BitTicksCounts(void* value): value(value) {}; void* value; _38bcaab7_out64BitTicksCounts(const _38bcaab7_out64BitTicksCounts &) = delete; } _38bcaab7_out64BitTicksCounts;
typedef struct _38bcaab7_outStatuses { _38bcaab7_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _38bcaab7_outStatuses(const _38bcaab7_outStatuses &) = delete; } _38bcaab7_outStatuses;
typedef struct _38bcaab7_optionalFile { _38bcaab7_optionalFile(char* value): value(value) {}; char* value; _38bcaab7_optionalFile(const _38bcaab7_optionalFile &) = delete; } _38bcaab7_optionalFile;
typedef struct _38bcaab7_optionalLine { _38bcaab7_optionalLine(int value): value(value) {}; int value; _38bcaab7_optionalLine(const _38bcaab7_optionalLine &) = delete; } _38bcaab7_optionalLine;
typedef struct _38bcaab7_optionalUserData { _38bcaab7_optionalUserData(void* value): value(value) {}; void* value; _38bcaab7_optionalUserData(const _38bcaab7_optionalUserData &) = delete; } _38bcaab7_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redArrayTimestampRead(_38bcaab7_context & context, _38bcaab7_gpu & gpu, _38bcaab7_arrayTimestamp & arrayTimestamp, _38bcaab7_rangeFirst & rangeFirst, _38bcaab7_rangeCount & rangeCount, _38bcaab7_out64BitTicksCounts & out64BitTicksCounts, _38bcaab7_outStatuses & outStatuses, _38bcaab7_optionalFile & optionalFile, _38bcaab7_optionalLine & optionalLine, _38bcaab7_optionalUserData & optionalUserData) {
  redArrayTimestampRead(context.value, gpu.value, arrayTimestamp.value, rangeFirst.value, rangeCount.value, out64BitTicksCounts.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

