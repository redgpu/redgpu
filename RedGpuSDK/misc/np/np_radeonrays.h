#pragma once

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrCreateContext rrCreateContext
#define _76477c39_apiVersion(value) value
#define _76477c39_api(value) value
#define _76477c39_context(value) value
#else
typedef struct _76477c39_apiVersion { _76477c39_apiVersion(unsigned value): value(value) {}; unsigned value; _76477c39_apiVersion(const _76477c39_apiVersion &) = delete; } _76477c39_apiVersion;
typedef struct _76477c39_api { _76477c39_api(RRApi value): value(value) {}; RRApi value; _76477c39_api(const _76477c39_api &) = delete; } _76477c39_api;
typedef struct _76477c39_context { _76477c39_context(RRContext* value): value(value) {}; RRContext* value; _76477c39_context(const _76477c39_context &) = delete; } _76477c39_context;
RRError np_rrCreateContext(_76477c39_apiVersion & apiVersion, _76477c39_api & api, _76477c39_context & context) {
  return rrCreateContext(apiVersion.value, api.value, context.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrDestroyContext rrDestroyContext
#define _35c0b64a_context(value) value
#else
typedef struct _35c0b64a_context { _35c0b64a_context(RRContext value): value(value) {}; RRContext value; _35c0b64a_context(const _35c0b64a_context &) = delete; } _35c0b64a_context;
RRError np_rrDestroyContext(_35c0b64a_context & context) {
  return rrDestroyContext(context.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrSetLogLevel rrSetLogLevel
#define _9c179593_logLevel(value) value
#else
typedef struct _9c179593_logLevel { _9c179593_logLevel(RRLogLevel value): value(value) {}; RRLogLevel value; _9c179593_logLevel(const _9c179593_logLevel &) = delete; } _9c179593_logLevel;
RRError np_rrSetLogLevel(_9c179593_logLevel & logLevel) {
  return rrSetLogLevel(logLevel.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrSetLogFile rrSetLogFile
#define _a3a56cb6_filename(value) value
#else
typedef struct _a3a56cb6_filename { _a3a56cb6_filename(char* value): value(value) {}; char* value; _a3a56cb6_filename(const _a3a56cb6_filename &) = delete; } _a3a56cb6_filename;
RRError np_rrSetLogFile(_a3a56cb6_filename & filename) {
  return rrSetLogFile(filename.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrCmdBuildGeometry rrCmdBuildGeometry
#define _f627a18d_context(value) value
#define _f627a18d_buildOperation(value) value
#define _f627a18d_buildInput(value) value
#define _f627a18d_buildOptions(value) value
#define _f627a18d_temporaryBuffer(value) value
#define _f627a18d_geometryBuffer(value) value
#define _f627a18d_commandStream(value) value
#else
typedef struct _f627a18d_context { _f627a18d_context(RRContext value): value(value) {}; RRContext value; _f627a18d_context(const _f627a18d_context &) = delete; } _f627a18d_context;
typedef struct _f627a18d_buildOperation { _f627a18d_buildOperation(RRBuildOperation value): value(value) {}; RRBuildOperation value; _f627a18d_buildOperation(const _f627a18d_buildOperation &) = delete; } _f627a18d_buildOperation;
typedef struct _f627a18d_buildInput { _f627a18d_buildInput(RRGeometryBuildInput* value): value(value) {}; RRGeometryBuildInput* value; _f627a18d_buildInput(const _f627a18d_buildInput &) = delete; } _f627a18d_buildInput;
typedef struct _f627a18d_buildOptions { _f627a18d_buildOptions(RRBuildOptions* value): value(value) {}; RRBuildOptions* value; _f627a18d_buildOptions(const _f627a18d_buildOptions &) = delete; } _f627a18d_buildOptions;
typedef struct _f627a18d_temporaryBuffer { _f627a18d_temporaryBuffer(RRDevicePtr value): value(value) {}; RRDevicePtr value; _f627a18d_temporaryBuffer(const _f627a18d_temporaryBuffer &) = delete; } _f627a18d_temporaryBuffer;
typedef struct _f627a18d_geometryBuffer { _f627a18d_geometryBuffer(RRDevicePtr value): value(value) {}; RRDevicePtr value; _f627a18d_geometryBuffer(const _f627a18d_geometryBuffer &) = delete; } _f627a18d_geometryBuffer;
typedef struct _f627a18d_commandStream { _f627a18d_commandStream(RRCommandStream value): value(value) {}; RRCommandStream value; _f627a18d_commandStream(const _f627a18d_commandStream &) = delete; } _f627a18d_commandStream;
RRError np_rrCmdBuildGeometry(_f627a18d_context & context, _f627a18d_buildOperation & buildOperation, _f627a18d_buildInput & buildInput, _f627a18d_buildOptions & buildOptions, _f627a18d_temporaryBuffer & temporaryBuffer, _f627a18d_geometryBuffer & geometryBuffer, _f627a18d_commandStream & commandStream) {
  return rrCmdBuildGeometry(context.value, buildOperation.value, buildInput.value, buildOptions.value, temporaryBuffer.value, geometryBuffer.value, commandStream.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetGeometryBuildMemoryRequirements rrGetGeometryBuildMemoryRequirements
#define _04be2d30_context(value) value
#define _04be2d30_buildInput(value) value
#define _04be2d30_buildOptions(value) value
#define _04be2d30_memoryRequirements(value) value
#else
typedef struct _04be2d30_context { _04be2d30_context(RRContext value): value(value) {}; RRContext value; _04be2d30_context(const _04be2d30_context &) = delete; } _04be2d30_context;
typedef struct _04be2d30_buildInput { _04be2d30_buildInput(RRGeometryBuildInput* value): value(value) {}; RRGeometryBuildInput* value; _04be2d30_buildInput(const _04be2d30_buildInput &) = delete; } _04be2d30_buildInput;
typedef struct _04be2d30_buildOptions { _04be2d30_buildOptions(RRBuildOptions* value): value(value) {}; RRBuildOptions* value; _04be2d30_buildOptions(const _04be2d30_buildOptions &) = delete; } _04be2d30_buildOptions;
typedef struct _04be2d30_memoryRequirements { _04be2d30_memoryRequirements(RRMemoryRequirements* value): value(value) {}; RRMemoryRequirements* value; _04be2d30_memoryRequirements(const _04be2d30_memoryRequirements &) = delete; } _04be2d30_memoryRequirements;
RRError np_rrGetGeometryBuildMemoryRequirements(_04be2d30_context & context, _04be2d30_buildInput & buildInput, _04be2d30_buildOptions & buildOptions, _04be2d30_memoryRequirements & memoryRequirements) {
  return rrGetGeometryBuildMemoryRequirements(context.value, buildInput.value, buildOptions.value, memoryRequirements.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrCmdBuildScene rrCmdBuildScene
#define _e47f0f00_context(value) value
#define _e47f0f00_buildInput(value) value
#define _e47f0f00_buildOptions(value) value
#define _e47f0f00_temporaryBuffer(value) value
#define _e47f0f00_sceneBuffer(value) value
#define _e47f0f00_commandStream(value) value
#else
typedef struct _e47f0f00_context { _e47f0f00_context(RRContext value): value(value) {}; RRContext value; _e47f0f00_context(const _e47f0f00_context &) = delete; } _e47f0f00_context;
typedef struct _e47f0f00_buildInput { _e47f0f00_buildInput(RRSceneBuildInput* value): value(value) {}; RRSceneBuildInput* value; _e47f0f00_buildInput(const _e47f0f00_buildInput &) = delete; } _e47f0f00_buildInput;
typedef struct _e47f0f00_buildOptions { _e47f0f00_buildOptions(RRBuildOptions* value): value(value) {}; RRBuildOptions* value; _e47f0f00_buildOptions(const _e47f0f00_buildOptions &) = delete; } _e47f0f00_buildOptions;
typedef struct _e47f0f00_temporaryBuffer { _e47f0f00_temporaryBuffer(RRDevicePtr value): value(value) {}; RRDevicePtr value; _e47f0f00_temporaryBuffer(const _e47f0f00_temporaryBuffer &) = delete; } _e47f0f00_temporaryBuffer;
typedef struct _e47f0f00_sceneBuffer { _e47f0f00_sceneBuffer(RRDevicePtr value): value(value) {}; RRDevicePtr value; _e47f0f00_sceneBuffer(const _e47f0f00_sceneBuffer &) = delete; } _e47f0f00_sceneBuffer;
typedef struct _e47f0f00_commandStream { _e47f0f00_commandStream(RRCommandStream value): value(value) {}; RRCommandStream value; _e47f0f00_commandStream(const _e47f0f00_commandStream &) = delete; } _e47f0f00_commandStream;
RRError np_rrCmdBuildScene(_e47f0f00_context & context, _e47f0f00_buildInput & buildInput, _e47f0f00_buildOptions & buildOptions, _e47f0f00_temporaryBuffer & temporaryBuffer, _e47f0f00_sceneBuffer & sceneBuffer, _e47f0f00_commandStream & commandStream) {
  return rrCmdBuildScene(context.value, buildInput.value, buildOptions.value, temporaryBuffer.value, sceneBuffer.value, commandStream.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetSceneBuildMemoryRequirements rrGetSceneBuildMemoryRequirements
#define _abd56990_context(value) value
#define _abd56990_buildInput(value) value
#define _abd56990_buildOptions(value) value
#define _abd56990_memoryRequirements(value) value
#else
typedef struct _abd56990_context { _abd56990_context(RRContext value): value(value) {}; RRContext value; _abd56990_context(const _abd56990_context &) = delete; } _abd56990_context;
typedef struct _abd56990_buildInput { _abd56990_buildInput(RRSceneBuildInput* value): value(value) {}; RRSceneBuildInput* value; _abd56990_buildInput(const _abd56990_buildInput &) = delete; } _abd56990_buildInput;
typedef struct _abd56990_buildOptions { _abd56990_buildOptions(RRBuildOptions* value): value(value) {}; RRBuildOptions* value; _abd56990_buildOptions(const _abd56990_buildOptions &) = delete; } _abd56990_buildOptions;
typedef struct _abd56990_memoryRequirements { _abd56990_memoryRequirements(RRMemoryRequirements* value): value(value) {}; RRMemoryRequirements* value; _abd56990_memoryRequirements(const _abd56990_memoryRequirements &) = delete; } _abd56990_memoryRequirements;
RRError np_rrGetSceneBuildMemoryRequirements(_abd56990_context & context, _abd56990_buildInput & buildInput, _abd56990_buildOptions & buildOptions, _abd56990_memoryRequirements & memoryRequirements) {
  return rrGetSceneBuildMemoryRequirements(context.value, buildInput.value, buildOptions.value, memoryRequirements.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrCmdIntersect rrCmdIntersect
#define _b7aaf1b6_context(value) value
#define _b7aaf1b6_sceneBuffer(value) value
#define _b7aaf1b6_query(value) value
#define _b7aaf1b6_rays(value) value
#define _b7aaf1b6_rayCount(value) value
#define _b7aaf1b6_indirectRayCount(value) value
#define _b7aaf1b6_queryOutput(value) value
#define _b7aaf1b6_hits(value) value
#define _b7aaf1b6_scratch(value) value
#define _b7aaf1b6_commandStream(value) value
#else
typedef struct _b7aaf1b6_context { _b7aaf1b6_context(RRContext value): value(value) {}; RRContext value; _b7aaf1b6_context(const _b7aaf1b6_context &) = delete; } _b7aaf1b6_context;
typedef struct _b7aaf1b6_sceneBuffer { _b7aaf1b6_sceneBuffer(RRDevicePtr value): value(value) {}; RRDevicePtr value; _b7aaf1b6_sceneBuffer(const _b7aaf1b6_sceneBuffer &) = delete; } _b7aaf1b6_sceneBuffer;
typedef struct _b7aaf1b6_query { _b7aaf1b6_query(RRIntersectQuery value): value(value) {}; RRIntersectQuery value; _b7aaf1b6_query(const _b7aaf1b6_query &) = delete; } _b7aaf1b6_query;
typedef struct _b7aaf1b6_rays { _b7aaf1b6_rays(RRDevicePtr value): value(value) {}; RRDevicePtr value; _b7aaf1b6_rays(const _b7aaf1b6_rays &) = delete; } _b7aaf1b6_rays;
typedef struct _b7aaf1b6_rayCount { _b7aaf1b6_rayCount(unsigned value): value(value) {}; unsigned value; _b7aaf1b6_rayCount(const _b7aaf1b6_rayCount &) = delete; } _b7aaf1b6_rayCount;
typedef struct _b7aaf1b6_indirectRayCount { _b7aaf1b6_indirectRayCount(RRDevicePtr value): value(value) {}; RRDevicePtr value; _b7aaf1b6_indirectRayCount(const _b7aaf1b6_indirectRayCount &) = delete; } _b7aaf1b6_indirectRayCount;
typedef struct _b7aaf1b6_queryOutput { _b7aaf1b6_queryOutput(RRIntersectQueryOutput value): value(value) {}; RRIntersectQueryOutput value; _b7aaf1b6_queryOutput(const _b7aaf1b6_queryOutput &) = delete; } _b7aaf1b6_queryOutput;
typedef struct _b7aaf1b6_hits { _b7aaf1b6_hits(RRDevicePtr value): value(value) {}; RRDevicePtr value; _b7aaf1b6_hits(const _b7aaf1b6_hits &) = delete; } _b7aaf1b6_hits;
typedef struct _b7aaf1b6_scratch { _b7aaf1b6_scratch(RRDevicePtr value): value(value) {}; RRDevicePtr value; _b7aaf1b6_scratch(const _b7aaf1b6_scratch &) = delete; } _b7aaf1b6_scratch;
typedef struct _b7aaf1b6_commandStream { _b7aaf1b6_commandStream(RRCommandStream value): value(value) {}; RRCommandStream value; _b7aaf1b6_commandStream(const _b7aaf1b6_commandStream &) = delete; } _b7aaf1b6_commandStream;
RRError np_rrCmdIntersect(_b7aaf1b6_context & context, _b7aaf1b6_sceneBuffer & sceneBuffer, _b7aaf1b6_query & query, _b7aaf1b6_rays & rays, _b7aaf1b6_rayCount & rayCount, _b7aaf1b6_indirectRayCount & indirectRayCount, _b7aaf1b6_queryOutput & queryOutput, _b7aaf1b6_hits & hits, _b7aaf1b6_scratch & scratch, _b7aaf1b6_commandStream & commandStream) {
  return rrCmdIntersect(context.value, sceneBuffer.value, query.value, rays.value, rayCount.value, indirectRayCount.value, queryOutput.value, hits.value, scratch.value, commandStream.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetTraceMemoryRequirements rrGetTraceMemoryRequirements
#define _c8d2629e_context(value) value
#define _c8d2629e_rayCount(value) value
#define _c8d2629e_scratchSize(value) value
#else
typedef struct _c8d2629e_context { _c8d2629e_context(RRContext value): value(value) {}; RRContext value; _c8d2629e_context(const _c8d2629e_context &) = delete; } _c8d2629e_context;
typedef struct _c8d2629e_rayCount { _c8d2629e_rayCount(unsigned value): value(value) {}; unsigned value; _c8d2629e_rayCount(const _c8d2629e_rayCount &) = delete; } _c8d2629e_rayCount;
typedef struct _c8d2629e_scratchSize { _c8d2629e_scratchSize(size_t* value): value(value) {}; size_t* value; _c8d2629e_scratchSize(const _c8d2629e_scratchSize &) = delete; } _c8d2629e_scratchSize;
RRError np_rrGetTraceMemoryRequirements(_c8d2629e_context & context, _c8d2629e_rayCount & rayCount, _c8d2629e_scratchSize & scratchSize) {
  return rrGetTraceMemoryRequirements(context.value, rayCount.value, scratchSize.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrAllocateCommandStream rrAllocateCommandStream
#define _b1a1c898_context(value) value
#define _b1a1c898_commandStream(value) value
#else
typedef struct _b1a1c898_context { _b1a1c898_context(RRContext value): value(value) {}; RRContext value; _b1a1c898_context(const _b1a1c898_context &) = delete; } _b1a1c898_context;
typedef struct _b1a1c898_commandStream { _b1a1c898_commandStream(RRCommandStream* value): value(value) {}; RRCommandStream* value; _b1a1c898_commandStream(const _b1a1c898_commandStream &) = delete; } _b1a1c898_commandStream;
RRError np_rrAllocateCommandStream(_b1a1c898_context & context, _b1a1c898_commandStream & commandStream) {
  return rrAllocateCommandStream(context.value, commandStream.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrReleaseCommandStream rrReleaseCommandStream
#define _cc8f6825_context(value) value
#define _cc8f6825_commandStream(value) value
#else
typedef struct _cc8f6825_context { _cc8f6825_context(RRContext value): value(value) {}; RRContext value; _cc8f6825_context(const _cc8f6825_context &) = delete; } _cc8f6825_context;
typedef struct _cc8f6825_commandStream { _cc8f6825_commandStream(RRCommandStream value): value(value) {}; RRCommandStream value; _cc8f6825_commandStream(const _cc8f6825_commandStream &) = delete; } _cc8f6825_commandStream;
RRError np_rrReleaseCommandStream(_cc8f6825_context & context, _cc8f6825_commandStream & commandStream) {
  return rrReleaseCommandStream(context.value, commandStream.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrSumbitCommandStream rrSumbitCommandStream
#define _433bd54e_context(value) value
#define _433bd54e_commandStream(value) value
#define _433bd54e_waitEvent(value) value
#define _433bd54e_outEvent(value) value
#else
typedef struct _433bd54e_context { _433bd54e_context(RRContext value): value(value) {}; RRContext value; _433bd54e_context(const _433bd54e_context &) = delete; } _433bd54e_context;
typedef struct _433bd54e_commandStream { _433bd54e_commandStream(RRCommandStream value): value(value) {}; RRCommandStream value; _433bd54e_commandStream(const _433bd54e_commandStream &) = delete; } _433bd54e_commandStream;
typedef struct _433bd54e_waitEvent { _433bd54e_waitEvent(RREvent value): value(value) {}; RREvent value; _433bd54e_waitEvent(const _433bd54e_waitEvent &) = delete; } _433bd54e_waitEvent;
typedef struct _433bd54e_outEvent { _433bd54e_outEvent(RREvent* value): value(value) {}; RREvent* value; _433bd54e_outEvent(const _433bd54e_outEvent &) = delete; } _433bd54e_outEvent;
RRError np_rrSumbitCommandStream(_433bd54e_context & context, _433bd54e_commandStream & commandStream, _433bd54e_waitEvent & waitEvent, _433bd54e_outEvent & outEvent) {
  return rrSumbitCommandStream(context.value, commandStream.value, waitEvent.value, outEvent.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrReleaseEvent rrReleaseEvent
#define _e8a5dc0d_context(value) value
#define _e8a5dc0d_event(value) value
#else
typedef struct _e8a5dc0d_context { _e8a5dc0d_context(RRContext value): value(value) {}; RRContext value; _e8a5dc0d_context(const _e8a5dc0d_context &) = delete; } _e8a5dc0d_context;
typedef struct _e8a5dc0d_event { _e8a5dc0d_event(RREvent value): value(value) {}; RREvent value; _e8a5dc0d_event(const _e8a5dc0d_event &) = delete; } _e8a5dc0d_event;
RRError np_rrReleaseEvent(_e8a5dc0d_context & context, _e8a5dc0d_event & event) {
  return rrReleaseEvent(context.value, event.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrWaitEvent rrWaitEvent
#define _9e2369c1_context(value) value
#define _9e2369c1_event(value) value
#else
typedef struct _9e2369c1_context { _9e2369c1_context(RRContext value): value(value) {}; RRContext value; _9e2369c1_context(const _9e2369c1_context &) = delete; } _9e2369c1_context;
typedef struct _9e2369c1_event { _9e2369c1_event(RREvent value): value(value) {}; RREvent value; _9e2369c1_event(const _9e2369c1_event &) = delete; } _9e2369c1_event;
RRError np_rrWaitEvent(_9e2369c1_context & context, _9e2369c1_event & event) {
  return rrWaitEvent(context.value, event.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrReleaseDevicePtr rrReleaseDevicePtr
#define _8d1def0e_context(value) value
#define _8d1def0e_ptr(value) value
#else
typedef struct _8d1def0e_context { _8d1def0e_context(RRContext value): value(value) {}; RRContext value; _8d1def0e_context(const _8d1def0e_context &) = delete; } _8d1def0e_context;
typedef struct _8d1def0e_ptr { _8d1def0e_ptr(RRDevicePtr value): value(value) {}; RRDevicePtr value; _8d1def0e_ptr(const _8d1def0e_ptr &) = delete; } _8d1def0e_ptr;
RRError np_rrReleaseDevicePtr(_8d1def0e_context & context, _8d1def0e_ptr & ptr) {
  return rrReleaseDevicePtr(context.value, ptr.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrReleaseExternalCommandStream rrReleaseExternalCommandStream
#define _1141d4bb_context(value) value
#define _1141d4bb_commandStream(value) value
#else
typedef struct _1141d4bb_context { _1141d4bb_context(RRContext value): value(value) {}; RRContext value; _1141d4bb_context(const _1141d4bb_context &) = delete; } _1141d4bb_context;
typedef struct _1141d4bb_commandStream { _1141d4bb_commandStream(RRCommandStream value): value(value) {}; RRCommandStream value; _1141d4bb_commandStream(const _1141d4bb_commandStream &) = delete; } _1141d4bb_commandStream;
RRError np_rrReleaseExternalCommandStream(_1141d4bb_context & context, _1141d4bb_commandStream & commandStream) {
  return rrReleaseExternalCommandStream(context.value, commandStream.value);
}
#endif

