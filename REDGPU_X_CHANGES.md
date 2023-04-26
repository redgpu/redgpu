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
