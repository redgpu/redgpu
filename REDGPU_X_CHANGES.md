Aug 29, 2023:

  * Update `redgpu_x_internal_types.h`.

Aug 27, 2023:

  * Fixed a crash on `redCreateProcedureCompute` call.
  * Fixed a warning on `redMemoryUnmap` call.
  * Fixed an issue for `redCallCopyArrayToArray` for arrays set to mapped memorys at byte offsets different than 0.

May 19, 2023:

  * `redSurfaceGetPresentFeatures::outSurfacePresentFeatures::supportsPresentVsyncModeOff` now returns `1`.
  * Removed too frequent and insignificant marks in redgpu_x_tracing.dll library.

May 18, 2023:

  * **NEW**: redgpu_x_tracing.dll library to generate `about:tracing` profiling data.
  * Added new structs for `redXCallCopyImageRegion` procedure.
  * `redCreatePresent::vsyncMode` parameter set to `RED_PRESENT_VSYNC_MODE_OFF` is now supported.
  * Update `redgpu_x_internal_types.h`.

May 08, 2023:

  * Internal fixes for REDGPU X RTE acceleration structure array creation.

May 06, 2023:

  * Added new `RedXContextOptionalSettings` structs.
  * Added new array type: `REDX_ARRAY_TYPE_RAYTRACING_ACCELERATION_STRUCTURE`.
  * Added new access bitflag: `REDX_ACCESS_BITFLAG_RAYTRACING_ACCELERATION_STRUCTURE`.

May 03, 2023:

  * Fixed validation errors when creating dedicated resources.
  * The type of `redXCallEndProcedureOutput::resolveTargetColorsFormat` parameter is changed from `RedXFormat *` to `unsigned *`.

May 02, 2023:

  * Fixed procedure ids for `redXGetHandleStruct` and `redXPageableEvict` procedures.
  * `redCreateOutput` now returns a dummy non-NULL value for `RedOutput::handle`.

Apr 30, 2023:

  * Update `redgpu_x_internal_types.h`.

Apr 29, 2023:

  * Fixed releasing present images on calling `redDestroyPresent`. As in the original REDGPU API, make sure to call redQueuePresent with `redQueuePresent::waitForAndUnsignalGpuSignalsCount` set to `0` and `redQueuePresent::presentsCount` set to `0` before calling `redDestroyPresent` to wait for the present queue to become idle.
  * Update misc named parameters header files.

Apr 28, 2023:

  * Update misc named parameters header files.

Apr 26, 2023:

  * Internal signal implementation changes with newly added `RedXInternalTypeSignal` struct.
  * `RedXInternalTypeStructDeclaration::procedureParametersHandlesDeclaration` is moved higher in the struct.

Apr 25, 2023:

  * **NEW**: `redXCallCopyImageRegion` procedure, it takes structs of ID3D12GraphicsCommandList::CopyTextureRegion parameters.
  * Fixed crashes on passing NULL strings as handle names.
  * Fixed sometimes incorrectly formed D3D12 root signatures when RedProcedureParametersDeclaration::handlesDeclaration was used.
  * `redCreateImage::restrictToAccess` parameter is not mandatory to fill for texture RO only usages now.
  * `RED_ARRAY_TYPE_INDEX_RO` arrays now also report support for upload memory types.
  * Fixed a crash on calling `redDestroyPresent`.
  * Fixed draw procedure creation.

Apr 22, 2023:

  * RadeonRays 4.1 for REDGPU X is added.

Apr 20, 2023:

  * **NEW**: misc/np/np_*.h headers for REDGPU function variants with C++ named parameters.
  * redgpu_x12.h: X12_API macro is added.

Apr 18, 2023:

  * Adding more internal source files.

Apr 10, 2023:

  * First public release.
