#pragma once

#include "redgpu.h"
#include "redgpu_wsi.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RedXTypeHandleMemoryCallbackBudgetChange * RedXHandleMemoryCallbackBudgetChange;
typedef struct RedXTypeHandlePageable                   * RedXHandlePageable;
typedef struct RedXTypeHandleResource                   * RedXHandleResource;

typedef enum RedXProcedureId {
  REDX_PROCEDURE_ID_redXMemoryCallbackBudgetChangeRegister   = 12000,
  REDX_PROCEDURE_ID_redXMemoryCallbackBudgetChangeUnregister = 12001,
  REDX_PROCEDURE_ID_redXMemoryReserve                        = 12002,
  REDX_PROCEDURE_ID_redXGetMemoryAddressArray                = 12003,
  REDX_PROCEDURE_ID_redXGetMemoryAddressSampler              = 12004,
  REDX_PROCEDURE_ID_redXGetMemoryAddressTextureRO            = 12005,
  REDX_PROCEDURE_ID_redXGetMemoryAddressTextureRW            = 12006,
  REDX_PROCEDURE_ID_redXGetMemoryAddressStructMember         = 12007,
  REDX_PROCEDURE_ID_redXStructsMemorySet                     = 12008,
  REDX_PROCEDURE_ID_redXGetHandleStruct                      = 12009,
  REDX_PROCEDURE_ID_redXCreateQueue                          = 12010,
  REDX_PROCEDURE_ID_redXCreateImage                          = 12011,
  REDX_PROCEDURE_ID_redXCreateTexture                        = 12012,
  REDX_PROCEDURE_ID_redXGetHandlePageableMemory              = 12013,
  REDX_PROCEDURE_ID_redXGetHandlePageableStructsMemory       = 12014,
  REDX_PROCEDURE_ID_redXPageableSetResidencyPriority         = 12015,
  REDX_PROCEDURE_ID_redXPageableMakeResident                 = 12016,
  REDX_PROCEDURE_ID_redXPageableEvict                        = 12017,
  REDX_PROCEDURE_ID_redXGetHandleResourceArray               = 12018,
  REDX_PROCEDURE_ID_redXGetHandleResourceImage               = 12019,
  REDX_PROCEDURE_ID_redXCreateSurfaceWinRT                   = 12020,
  REDX_PROCEDURE_ID_redXCallCopyImageRegion                  = 12021,
} RedXProcedureId;

// redMemoryAllocate
// redMemoryAllocateMappable

typedef unsigned RedXMemoryBitflags;
typedef enum RedXMemoryBitflag {
  REDX_MEMORY_BITFLAG_NOT_RESIDENT = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,0010),
} RedXMemoryBitflag;

// redXStructsMemorySet

typedef struct RedXMemoryAddress {
  uint64_t memoryAddress;
} RedXMemoryAddress;

// redCreateContext

typedef enum RedGpuInfoOptionalInfo3 {
  RED_GPU_INFO_OPTIONAL_INFO_IMAGE_X_FORMATS_LIMITS_AND_FEATURES = 16,
} RedGpuInfoOptionalInfo3;

typedef struct RedXImageFormatFeatures {
  RedBool32 supportsGpuCodeSampleCmpAndSampleCmpLevelZero;
  RedBool32 supportsMip;
  RedBool32 supportsResolveTarget;
  RedBool32 supportsResolveSource;
  RedBool32 supportsGpuCodeMultisampleLoad;
  RedBool32 supportsGpuCodeGather;
  RedBool32 supportsGpuCodeGatherComparison;
  RedBool32 supportsTextureRWAtomicAdd;
  RedBool32 supportsTextureRWAtomicBitwiseOps;
  RedBool32 supportsTextureRWAtomicCompareStoreOrCompareExchange;
  RedBool32 supportsTextureRWAtomicExchange;
  RedBool32 supportsTextureRWAtomicMinOrMaxSigned;
  RedBool32 supportsTextureRWAtomicMinOrMaxUnsigned;
  RedBool32 supportsTextureRWTypedLoad;
  RedBool32 supportsTextureRWTypedStore;
  RedBool32 supportsProcedureStateBlendLogicOp;
} RedXImageFormatFeatures;

typedef struct RedGpuInfoOptionalInfoImageXFormatsLimitsAndFeatures {
  RedGpuInfoOptionalInfo3         optionalInfo;
  const void *                    next;
  const RedImageFormatLimits *    imageXFormatsLimitsImageDimensions1D;                                        // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedImageFormatLimits *    imageXFormatsLimitsImageDimensions2D;                                        // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedImageFormatLimits *    imageXFormatsLimitsImageDimensions2DMultisample;                             // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedImageFormatLimits *    imageXFormatsLimitsImageDimensions2DWithTextureDimensionsCubeAndCubeLayered; // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedImageFormatLimits *    imageXFormatsLimitsImageDimensions3D;                                        // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedImageFormatLimits *    imageXFormatsLimitsImageDimensions3DWithTextureDimensions2DAnd2DLayered;     // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedImageFormatFeatures *  imageXFormatsFeatures;                                                       // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
  const RedXImageFormatFeatures * imageFormatsFeatures1;                                                       // Count: 131, indexable with RedFormat values
  const RedXImageFormatFeatures * imageXFormatsFeatures1;                                                      // Count: 14, indexable with RedXFormat values >= 12000 minus 12000
} RedGpuInfoOptionalInfoImageXFormatsLimitsAndFeatures;

// redXCreateImage

typedef enum RedXFormat {
  REDX_FORMAT_UNDEFINED                      = 0,
  REDX_FORMAT_BGRA_8_8_8_8_UINT_TO_FLOAT_0_1 = 12000,
  REDX_FORMAT_R_16_UINT_TO_FLOAT_0_1         = 12001,
  REDX_FORMAT_R_8_GENERIC                    = 12002,
  REDX_FORMAT_R_16_GENERIC                   = 12003,
  REDX_FORMAT_R_32_GENERIC                   = 12004,
  REDX_FORMAT_RGBA_8_8_8_8_GENERIC           = 12005,
  REDX_FORMAT_RGBA_16_16_16_16_GENERIC       = 12006,
  REDX_FORMAT_RGBA_32_32_32_32_GENERIC       = 12007,
  REDX_FORMAT_RG_24_8_GENERIC                = 12008,
  REDX_FORMAT_RX_24_8_UINT_TO_FLOAT_0_1      = 12009,
  REDX_FORMAT_XG_24_8_UINT                   = 12010,
  REDX_FORMAT_R_32_GX_8_24_GENERIC           = 12011,
  REDX_FORMAT_R_32_XX_8_24_FLOAT             = 12012,
  REDX_FORMAT_X_32_GX_8_24_UINT              = 12013,
} RedXFormat;

// redCreateStructDeclaration

#ifndef REDX_STRUCT_MEMBER_TYPE_ARRAY_RO
#define REDX_STRUCT_MEMBER_TYPE_ARRAY_RO ((RedStructMemberType)12000)
#endif

// redXPageableSetResidencyPriority

typedef unsigned RedXPageableResidencyPriorityBitflags;
typedef enum RedXPageableResidencyPriorityBitflag {
  REDX_PAGEABLE_RESIDENCY_PRIORITY_BITFLAG_MINIMUM = REDGPU_B32(0010,1000,0000,0000,0000,0000,0000,0000),
  REDX_PAGEABLE_RESIDENCY_PRIORITY_BITFLAG_LOW     = REDGPU_B32(0101,0000,0000,0000,0000,0000,0000,0000),
  REDX_PAGEABLE_RESIDENCY_PRIORITY_BITFLAG_NORMAL  = REDGPU_B32(0111,1000,0000,0000,0000,0000,0000,0000),
  REDX_PAGEABLE_RESIDENCY_PRIORITY_BITFLAG_HIGH    = REDGPU_B32(1010,0000,0000,0000,0000,0000,0000,0000),
  REDX_PAGEABLE_RESIDENCY_PRIORITY_BITFLAG_MAXIMUM = REDGPU_B32(1100,1000,0000,0000,0000,0000,0000,0000),
} RedXPageableResidencyPriorityBitflag;

// redXCallUsageAliasOrderBarrier

typedef unsigned RedXAccessBitflags;
typedef enum RedXAccessBitflag {
  REDX_ACCESS_BITFLAG_COMMON                               = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,0000),
  REDX_ACCESS_BITFLAG_PRESENT                              = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,0000),
  REDX_ACCESS_BITFLAG_STRUCT_ARRAY_RO_CONSTANT_R           = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,0001),
  REDX_ACCESS_BITFLAG_INDEX_R                              = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,0010),
  REDX_ACCESS_BITFLAG_OUTPUT_COLOR_W                       = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,0100),
  REDX_ACCESS_BITFLAG_STRUCT_RESOURCE_RW                   = REDGPU_B32(0000,0000,0000,0000,0000,0000,0000,1000),
  REDX_ACCESS_BITFLAG_OUTPUT_DEPTH_STENCIL_RW              = REDGPU_B32(0000,0000,0000,0000,0000,0000,0001,0000),
  REDX_ACCESS_BITFLAG_OUTPUT_DEPTH_STENCIL_R               = REDGPU_B32(0000,0000,0000,0000,0000,0000,0010,0000),
  REDX_ACCESS_BITFLAG_STRUCT_RESOURCE_NON_FRAGMENT_STAGE_R = REDGPU_B32(0000,0000,0000,0000,0000,0000,0100,0000),
  REDX_ACCESS_BITFLAG_STRUCT_RESOURCE_FRAGMENT_STAGE_R     = REDGPU_B32(0000,0000,0000,0000,0000,0000,1000,0000),
  REDX_ACCESS_BITFLAG_COPY_W                               = REDGPU_B32(0000,0000,0000,0000,0000,0100,0000,0000), // The initial access for mappable, coherent, cached (readback) memory type resources
  REDX_ACCESS_BITFLAG_COPY_R                               = REDGPU_B32(0000,0000,0000,0000,0000,1000,0000,0000),
  REDX_ACCESS_BITFLAG_RESOLVE_TARGET_W                     = REDGPU_B32(0000,0000,0000,0000,0001,0000,0000,0000),
  REDX_ACCESS_BITFLAG_RESOLVE_SOURCE_R                     = REDGPU_B32(0000,0000,0000,0000,0010,0000,0000,0000),
  REDX_ACCESS_BITFLAG_GENERIC_R                            = REDGPU_B32(0000,0000,0000,0000,0000,1010,1100,0011), // The initial access for mappable, coherent (upload) memory type resources
} RedXAccessBitflag;

typedef struct RedXUsage {
  unsigned           setTo0;
  RedBarrierSplit    split;
  RedXHandleResource resource;
  unsigned           level;       // Set to max value for all levels or (layerFirst * levelsCount) + levelFirst
  RedXAccessBitflags oldAccesses;
  RedXAccessBitflags newAccesses;
} RedXUsage;

typedef struct RedXAlias {
  unsigned           setTo1;
  RedBarrierSplit    split;
  RedXHandleResource oldResource;
  RedXHandleResource newResource;
} RedXAlias;

typedef struct RedXOrder {
  unsigned           setTo2;
  RedBarrierSplit    split;
  RedXHandleResource resource;
} RedXOrder;

typedef union RedXBarrier {
  RedXUsage usage;
  RedXAlias alias;
  RedXOrder order;
} RedXBarrier;

#ifndef REDGPU_X_DECLSPEC
#define REDGPU_X_DECLSPEC
#endif

#ifndef REDGPU_X_API
#define REDGPU_X_API
#endif

// Memory

REDGPU_X_DECLSPEC void               REDGPU_X_API redXMemoryCallbackBudgetChangeRegister   (RedContext context, RedHandleGpu gpu, void * eventHandle, RedXHandleMemoryCallbackBudgetChange * outMemoryCallbackBudgetChange, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXMemoryCallbackBudgetChangeUnregister (RedContext context, RedHandleGpu gpu, RedXHandleMemoryCallbackBudgetChange memoryCallbackBudgetChange, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXMemoryReserve                        (RedContext context, RedHandleGpu gpu, RedBool32 sharedMemory, uint64_t bytesCount, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);

// Struct

REDGPU_X_DECLSPEC uint64_t           REDGPU_X_API redXGetMemoryAddressArray                (RedContext context, RedHandleGpu gpu, RedHandleArray array);
REDGPU_X_DECLSPEC uint64_t           REDGPU_X_API redXGetMemoryAddressSampler              (RedContext context, RedHandleGpu gpu, RedHandleSampler sampler);
REDGPU_X_DECLSPEC uint64_t           REDGPU_X_API redXGetMemoryAddressTextureRO            (RedContext context, RedHandleGpu gpu, RedHandleTexture texture);
REDGPU_X_DECLSPEC uint64_t           REDGPU_X_API redXGetMemoryAddressTextureRW            (RedContext context, RedHandleGpu gpu, RedHandleTexture texture);
REDGPU_X_DECLSPEC uint64_t           REDGPU_X_API redXGetMemoryAddressStructMember         (RedContext context, RedHandleGpu gpu, RedHandleStructsMemory structsMemory, unsigned structMemberIndex);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXStructsMemorySet                     (RedContext context, RedHandleGpu gpu, RedBool32 copyingSamplers, unsigned sourceCopiesCount, const RedXMemoryAddress * sourceCopiesAddressFirst, const unsigned * sourceCopiesAddressCount, unsigned targetCopiesCount, const RedXMemoryAddress * targetCopiesAddressFirst, const unsigned * targetCopiesAddressCount, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC RedHandleStruct    REDGPU_X_API redXGetHandleStruct                      (RedContext context, RedHandleGpu gpu, RedHandleStructsMemory structsMemory, unsigned structMemberIndex);

// Create

REDGPU_X_DECLSPEC void               REDGPU_X_API redXCreateQueue                          (RedContext context, RedHandleGpu gpu, const char * handleName, RedBool32 canCopy, RedBool32 canDraw, RedBool32 canCompute, unsigned priority, RedBool32 disableGpuTimeout, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXCreateImage                          (RedContext context, RedHandleGpu gpu, const char * handleName, RedImageDimensions dimensions, RedFormat format, unsigned xformat, unsigned width, unsigned height, unsigned depth, unsigned levelsCount, unsigned layersCount, RedMultisampleCountBitflag multisampleCount, RedAccessBitflags restrictToAccess, RedAccessBitflags initialAccess, unsigned initialQueueFamilyIndex, RedBool32 dedicate, RedImage * outImage, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXCreateTexture                        (RedContext context, RedHandleGpu gpu, const char * handleName, RedHandleImage image, RedImagePartBitflags parts, RedTextureDimensions dimensions, RedFormat format, unsigned xformat, unsigned levelsFirst, unsigned levelsCount, unsigned layersFirst, unsigned layersCount, RedAccessBitflags restrictToAccess, RedHandleTexture * outTexture, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);

// Pageable

REDGPU_X_DECLSPEC RedXHandlePageable REDGPU_X_API redXGetHandlePageableMemory              (RedContext context, RedHandleGpu gpu, RedHandleMemory memory);
REDGPU_X_DECLSPEC RedXHandlePageable REDGPU_X_API redXGetHandlePageableStructsMemory       (RedContext context, RedHandleGpu gpu, RedHandleStructsMemory structsMemory);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXPageableSetResidencyPriority         (RedContext context, RedHandleGpu gpu, unsigned pageablesCount, const RedXHandlePageable * pageables, const RedXPageableResidencyPriorityBitflags * pageablesResidencyPriority, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXPageableMakeResident                 (RedContext context, RedHandleGpu gpu, unsigned pageablesCount, const RedXHandlePageable * pageables, RedBool32 denyOverbudget, RedHandleCpuSignal signalCpuSignal, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXPageableEvict                        (RedContext context, RedHandleGpu gpu, unsigned pageablesCount, const RedXHandlePageable * pageables, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);

// Resource handle

REDGPU_X_DECLSPEC RedXHandleResource REDGPU_X_API redXGetHandleResourceArray               (RedContext context, RedHandleGpu gpu, RedHandleArray array);
REDGPU_X_DECLSPEC RedXHandleResource REDGPU_X_API redXGetHandleResourceImage               (RedContext context, RedHandleGpu gpu, RedHandleImage image);

// Calls recording

REDGPU_X_DECLSPEC void               REDGPU_X_API redXCallSetProcedureOutput               (RedHandleCalls calls, RedHandleTexture depthStencil, unsigned colorsCount, RedHandleTexture * colors, RedSetProcedureOutputOp depthSetProcedureOutputOp, RedSetProcedureOutputOp stencilSetProcedureOutputOp, RedSetProcedureOutputOp * colorsSetProcedureOutputOp, float depthClearValue, unsigned stencilClearValue, const RedColorsClearValuesFloat * colorsClearValuesFloat);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXCallEndProcedureOutput               (RedHandleCalls calls, RedHandleTexture * resolveTargetColors, RedXFormat * resolveTargetColorsFormat, RedEndProcedureOutputOp depthEndProcedureOutputOp, RedEndProcedureOutputOp stencilEndProcedureOutputOp, RedEndProcedureOutputOp * colorsEndProcedureOutputOp);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXCallUsageAliasOrderBarrier           (RedHandleCalls calls, unsigned barriersCount, const void * barriers);
REDGPU_X_DECLSPEC void               REDGPU_X_API redXCallCopyImageRegion                  (RedHandleCalls calls, unsigned copiesCount, const void * copies);

// WSI

REDGPU_X_DECLSPEC void               REDGPU_X_API redXCreateSurfaceWinRT                   (RedContext context, RedHandleGpu gpu, const char * handleName, const void * winrtIUnknownPointerCoreWindow, RedHandleSurface * outSurface, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);

#ifdef __cplusplus
}
#endif

// Additional notes:
//
// * Instead of undefined and NULL redStructsMemorySuballocateStructs use redXGetMemoryAddress*
//                                 redStructsMemoryReset                  redXStructsMemorySet
//                                 redStructsSet                          redXGetHandleStruct
//
// * Instead of undefined and NULL redCallCopyImageToImage use texture RWs and compute shaders to copy to and from images.
//                                 redCallCopyArrayToImage
//                                 redCallCopyImageToArray
//
// * Instead of undefined and NULL redCallSetDynamicDepthBias          use their static alternatives in RedProcedureState.
//                                 redCallSetDynamicDepthBounds
//                                 redCallSetDynamicStencilCompareMask
//                                 redCallSetDynamicStencilWriteMask
//
// * Instead of undefined and NULL redCallSetProcedureOutput use redXCallSetProcedureOutput
//                                 redCallEndProcedureOutput     redXCallEndProcedureOutput
//                                 redCallUsageOrderBarrier      redXCallUsageAliasOrderBarrier
//
// redCreateImage   -> redXCreateImage   extra parameters: (RedXFormat xformat)
// redCreateTexture -> redXCreateTexture extra parameters: (RedXFormat xformat)
//
// * redXCreateImage:    for REDGPU, ::xformat is ignored, for REDGPU X, ::format is ignored, ::restrictToAccess is required to be set to a non-0 value.
// * redCreateProcedure: ::outputDeclaration can accept an array of 9 RedXFormat values, 8 for output colors and 1 for output depth stencil, respectively.
//
// * Static procedure state values change dynamic procedure state values.
// * Procedure parameters variables set within procedure output pass are applied to the following draw procedure calls, procedure parameters variables set outside procedure output pass are applied to the following compute procedure calls.
// * Draw and compute procedure calls respect only the last set procedure and procedure parameters variables.
// * One procedure parameters handles set call should set all the handles in the order they were declared.
// * If an image is layered, its textures must be of *_LAYERED dimensions.
// * To allocate an image from a non-depth-stencil and non-output-color memory type, set ::restrictToAccess to any flags other than RED_ACCESS_BITFLAG_OUTPUT_{DEPTH_*,STENCIL_*}, RED_ACCESS_BITFLAG_OUTPUT_COLOR_W.
// * The only non-HRESULT RedStatus values reported are RED_STATUS_NOT_READY, RED_STATUS_ERROR_OUT_OF_CPU_MEMORY, RED_STATUS_ERROR_INITIALIZATION_FAILED, RED_STATUS_ERROR_FORMAT_IS_NOT_SUPPORTED and RED_STATUS_ERROR_VALIDATION_FAILED.
// * Reusable GPU calls can be submitted again after they're finished executing on the GPU.
// * Do not destroy present images, they are destroyed when the present handle is destroyed.
// * Readback resources must be mapped and unmapped only when it's time to read data back from GPU to CPU.
// * Cast mapped resource pointers to volatile pointers.
// * Destroying a GPU resource or activating an aliased GPU resource may invalidate the underlying memory data. Data is guaranteed to be preserved only for CPU-accessible memory.
// * For a parameters memory, all structs must come from the same structs memory.
// * Only one mapped memory range per memory allocation is allowed.
// * The initial data of newly created resources is garbage. Clear the resources yourself.