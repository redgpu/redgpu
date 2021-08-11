#pragma once

#include "redgpu.h"

#ifdef __cplusplus
extern "C" {
#endif

REDGPU_DECLSPEC void REDGPU_API redGpuVisTracingStart(const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_DECLSPEC void REDGPU_API redGpuVisTracingCapture(const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_DECLSPEC void REDGPU_API redGpuVisTracingStop(const char * optionalFile, int optionalLine, void * optionalUserData);

#ifdef __cplusplus
}
#endif
