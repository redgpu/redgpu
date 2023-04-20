#pragma once

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redGpuVisTracingStart redGpuVisTracingStart
#define _ec50ad01_optionalFile(value) value
#define _ec50ad01_optionalLine(value) value
#define _ec50ad01_optionalUserData(value) value
#else
typedef struct _ec50ad01_optionalFile { _ec50ad01_optionalFile(char* value): value(value) {}; char* value; _ec50ad01_optionalFile(const _ec50ad01_optionalFile &) = delete; } _ec50ad01_optionalFile;
typedef struct _ec50ad01_optionalLine { _ec50ad01_optionalLine(int value): value(value) {}; int value; _ec50ad01_optionalLine(const _ec50ad01_optionalLine &) = delete; } _ec50ad01_optionalLine;
typedef struct _ec50ad01_optionalUserData { _ec50ad01_optionalUserData(void* value): value(value) {}; void* value; _ec50ad01_optionalUserData(const _ec50ad01_optionalUserData &) = delete; } _ec50ad01_optionalUserData;
void np_redGpuVisTracingStart(_ec50ad01_optionalFile & optionalFile, _ec50ad01_optionalLine & optionalLine, _ec50ad01_optionalUserData & optionalUserData) {
  redGpuVisTracingStart(optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redGpuVisTracingCapture redGpuVisTracingCapture
#define _1a17bda6_optionalFile(value) value
#define _1a17bda6_optionalLine(value) value
#define _1a17bda6_optionalUserData(value) value
#else
typedef struct _1a17bda6_optionalFile { _1a17bda6_optionalFile(char* value): value(value) {}; char* value; _1a17bda6_optionalFile(const _1a17bda6_optionalFile &) = delete; } _1a17bda6_optionalFile;
typedef struct _1a17bda6_optionalLine { _1a17bda6_optionalLine(int value): value(value) {}; int value; _1a17bda6_optionalLine(const _1a17bda6_optionalLine &) = delete; } _1a17bda6_optionalLine;
typedef struct _1a17bda6_optionalUserData { _1a17bda6_optionalUserData(void* value): value(value) {}; void* value; _1a17bda6_optionalUserData(const _1a17bda6_optionalUserData &) = delete; } _1a17bda6_optionalUserData;
void np_redGpuVisTracingCapture(_1a17bda6_optionalFile & optionalFile, _1a17bda6_optionalLine & optionalLine, _1a17bda6_optionalUserData & optionalUserData) {
  redGpuVisTracingCapture(optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redGpuVisTracingStop redGpuVisTracingStop
#define _834b61bb_optionalFile(value) value
#define _834b61bb_optionalLine(value) value
#define _834b61bb_optionalUserData(value) value
#else
typedef struct _834b61bb_optionalFile { _834b61bb_optionalFile(char* value): value(value) {}; char* value; _834b61bb_optionalFile(const _834b61bb_optionalFile &) = delete; } _834b61bb_optionalFile;
typedef struct _834b61bb_optionalLine { _834b61bb_optionalLine(int value): value(value) {}; int value; _834b61bb_optionalLine(const _834b61bb_optionalLine &) = delete; } _834b61bb_optionalLine;
typedef struct _834b61bb_optionalUserData { _834b61bb_optionalUserData(void* value): value(value) {}; void* value; _834b61bb_optionalUserData(const _834b61bb_optionalUserData &) = delete; } _834b61bb_optionalUserData;
void np_redGpuVisTracingStop(_834b61bb_optionalFile & optionalFile, _834b61bb_optionalLine & optionalLine, _834b61bb_optionalUserData & optionalUserData) {
  redGpuVisTracingStop(optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

