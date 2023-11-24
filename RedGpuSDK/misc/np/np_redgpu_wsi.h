#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateSurfaceWin32 redCreateSurfaceWin32
#define _976dd369_context(value) value
#define _976dd369_gpu(value) value
#define _976dd369_handleName(value) value
#define _976dd369_win32Hinstance(value) value
#define _976dd369_win32Hwnd(value) value
#define _976dd369_outSurface(value) value
#define _976dd369_outStatuses(value) value
#define _976dd369_optionalFile(value) value
#define _976dd369_optionalLine(value) value
#define _976dd369_optionalUserData(value) value
#else
typedef struct _976dd369_context { _976dd369_context(RedContext value): value(value) {}; RedContext value; _976dd369_context(const _976dd369_context &) = delete; } _976dd369_context;
typedef struct _976dd369_gpu { _976dd369_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _976dd369_gpu(const _976dd369_gpu &) = delete; } _976dd369_gpu;
typedef struct _976dd369_handleName { _976dd369_handleName(char* value): value(value) {}; char* value; _976dd369_handleName(const _976dd369_handleName &) = delete; } _976dd369_handleName;
typedef struct _976dd369_win32Hinstance { _976dd369_win32Hinstance(void* value): value(value) {}; void* value; _976dd369_win32Hinstance(const _976dd369_win32Hinstance &) = delete; } _976dd369_win32Hinstance;
typedef struct _976dd369_win32Hwnd { _976dd369_win32Hwnd(void* value): value(value) {}; void* value; _976dd369_win32Hwnd(const _976dd369_win32Hwnd &) = delete; } _976dd369_win32Hwnd;
typedef struct _976dd369_outSurface { _976dd369_outSurface(RedHandleSurface* value): value(value) {}; RedHandleSurface* value; _976dd369_outSurface(const _976dd369_outSurface &) = delete; } _976dd369_outSurface;
typedef struct _976dd369_outStatuses { _976dd369_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _976dd369_outStatuses(const _976dd369_outStatuses &) = delete; } _976dd369_outStatuses;
typedef struct _976dd369_optionalFile { _976dd369_optionalFile(char* value): value(value) {}; char* value; _976dd369_optionalFile(const _976dd369_optionalFile &) = delete; } _976dd369_optionalFile;
typedef struct _976dd369_optionalLine { _976dd369_optionalLine(int value): value(value) {}; int value; _976dd369_optionalLine(const _976dd369_optionalLine &) = delete; } _976dd369_optionalLine;
typedef struct _976dd369_optionalUserData { _976dd369_optionalUserData(void* value): value(value) {}; void* value; _976dd369_optionalUserData(const _976dd369_optionalUserData &) = delete; } _976dd369_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redCreateSurfaceWin32(_976dd369_context & context, _976dd369_gpu & gpu, _976dd369_handleName & handleName, _976dd369_win32Hinstance & win32Hinstance, _976dd369_win32Hwnd & win32Hwnd, _976dd369_outSurface & outSurface, _976dd369_outStatuses & outStatuses, _976dd369_optionalFile & optionalFile, _976dd369_optionalLine & optionalLine, _976dd369_optionalUserData & optionalUserData) {
  redCreateSurfaceWin32(context.value, gpu.value, handleName.value, win32Hinstance.value, win32Hwnd.value, outSurface.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateSurfaceXlibOrXcb redCreateSurfaceXlibOrXcb
#define _86a3dd1a_context(value) value
#define _86a3dd1a_gpu(value) value
#define _86a3dd1a_handleName(value) value
#define _86a3dd1a_xlibDisplay(value) value
#define _86a3dd1a_xlibWindow(value) value
#define _86a3dd1a_xcbConnection(value) value
#define _86a3dd1a_xcbWindow(value) value
#define _86a3dd1a_outSurface(value) value
#define _86a3dd1a_outStatuses(value) value
#define _86a3dd1a_optionalFile(value) value
#define _86a3dd1a_optionalLine(value) value
#define _86a3dd1a_optionalUserData(value) value
#else
typedef struct _86a3dd1a_context { _86a3dd1a_context(RedContext value): value(value) {}; RedContext value; _86a3dd1a_context(const _86a3dd1a_context &) = delete; } _86a3dd1a_context;
typedef struct _86a3dd1a_gpu { _86a3dd1a_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _86a3dd1a_gpu(const _86a3dd1a_gpu &) = delete; } _86a3dd1a_gpu;
typedef struct _86a3dd1a_handleName { _86a3dd1a_handleName(char* value): value(value) {}; char* value; _86a3dd1a_handleName(const _86a3dd1a_handleName &) = delete; } _86a3dd1a_handleName;
typedef struct _86a3dd1a_xlibDisplay { _86a3dd1a_xlibDisplay(void* value): value(value) {}; void* value; _86a3dd1a_xlibDisplay(const _86a3dd1a_xlibDisplay &) = delete; } _86a3dd1a_xlibDisplay;
typedef struct _86a3dd1a_xlibWindow { _86a3dd1a_xlibWindow(unsigned long value): value(value) {}; unsigned long value; _86a3dd1a_xlibWindow(const _86a3dd1a_xlibWindow &) = delete; } _86a3dd1a_xlibWindow;
typedef struct _86a3dd1a_xcbConnection { _86a3dd1a_xcbConnection(void* value): value(value) {}; void* value; _86a3dd1a_xcbConnection(const _86a3dd1a_xcbConnection &) = delete; } _86a3dd1a_xcbConnection;
typedef struct _86a3dd1a_xcbWindow { _86a3dd1a_xcbWindow(unsigned value): value(value) {}; unsigned value; _86a3dd1a_xcbWindow(const _86a3dd1a_xcbWindow &) = delete; } _86a3dd1a_xcbWindow;
typedef struct _86a3dd1a_outSurface { _86a3dd1a_outSurface(RedHandleSurface* value): value(value) {}; RedHandleSurface* value; _86a3dd1a_outSurface(const _86a3dd1a_outSurface &) = delete; } _86a3dd1a_outSurface;
typedef struct _86a3dd1a_outStatuses { _86a3dd1a_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _86a3dd1a_outStatuses(const _86a3dd1a_outStatuses &) = delete; } _86a3dd1a_outStatuses;
typedef struct _86a3dd1a_optionalFile { _86a3dd1a_optionalFile(char* value): value(value) {}; char* value; _86a3dd1a_optionalFile(const _86a3dd1a_optionalFile &) = delete; } _86a3dd1a_optionalFile;
typedef struct _86a3dd1a_optionalLine { _86a3dd1a_optionalLine(int value): value(value) {}; int value; _86a3dd1a_optionalLine(const _86a3dd1a_optionalLine &) = delete; } _86a3dd1a_optionalLine;
typedef struct _86a3dd1a_optionalUserData { _86a3dd1a_optionalUserData(void* value): value(value) {}; void* value; _86a3dd1a_optionalUserData(const _86a3dd1a_optionalUserData &) = delete; } _86a3dd1a_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redCreateSurfaceXlibOrXcb(_86a3dd1a_context & context, _86a3dd1a_gpu & gpu, _86a3dd1a_handleName & handleName, _86a3dd1a_xlibDisplay & xlibDisplay, _86a3dd1a_xlibWindow & xlibWindow, _86a3dd1a_xcbConnection & xcbConnection, _86a3dd1a_xcbWindow & xcbWindow, _86a3dd1a_outSurface & outSurface, _86a3dd1a_outStatuses & outStatuses, _86a3dd1a_optionalFile & optionalFile, _86a3dd1a_optionalLine & optionalLine, _86a3dd1a_optionalUserData & optionalUserData) {
  redCreateSurfaceXlibOrXcb(context.value, gpu.value, handleName.value, xlibDisplay.value, xlibWindow.value, xcbConnection.value, xcbWindow.value, outSurface.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreatePresent redCreatePresent
#define _1b10d07d_context(value) value
#define _1b10d07d_gpu(value) value
#define _1b10d07d_queue(value) value
#define _1b10d07d_handleName(value) value
#define _1b10d07d_surface(value) value
#define _1b10d07d_imagesCount(value) value
#define _1b10d07d_imagesWidth(value) value
#define _1b10d07d_imagesHeight(value) value
#define _1b10d07d_imagesLayersCount(value) value
#define _1b10d07d_imagesRestrictToAccess(value) value
#define _1b10d07d_transform(value) value
#define _1b10d07d_compositeAlpha(value) value
#define _1b10d07d_vsyncMode(value) value
#define _1b10d07d_clipped(value) value
#define _1b10d07d_discardAfterPresent(value) value
#define _1b10d07d_oldPresent(value) value
#define _1b10d07d_outPresent(value) value
#define _1b10d07d_outImages(value) value
#define _1b10d07d_outTextures(value) value
#define _1b10d07d_outStatuses(value) value
#define _1b10d07d_optionalFile(value) value
#define _1b10d07d_optionalLine(value) value
#define _1b10d07d_optionalUserData(value) value
#else
typedef struct _1b10d07d_context { _1b10d07d_context(RedContext value): value(value) {}; RedContext value; _1b10d07d_context(const _1b10d07d_context &) = delete; } _1b10d07d_context;
typedef struct _1b10d07d_gpu { _1b10d07d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _1b10d07d_gpu(const _1b10d07d_gpu &) = delete; } _1b10d07d_gpu;
typedef struct _1b10d07d_queue { _1b10d07d_queue(RedHandleQueue value): value(value) {}; RedHandleQueue value; _1b10d07d_queue(const _1b10d07d_queue &) = delete; } _1b10d07d_queue;
typedef struct _1b10d07d_handleName { _1b10d07d_handleName(char* value): value(value) {}; char* value; _1b10d07d_handleName(const _1b10d07d_handleName &) = delete; } _1b10d07d_handleName;
typedef struct _1b10d07d_surface { _1b10d07d_surface(RedHandleSurface value): value(value) {}; RedHandleSurface value; _1b10d07d_surface(const _1b10d07d_surface &) = delete; } _1b10d07d_surface;
typedef struct _1b10d07d_imagesCount { _1b10d07d_imagesCount(unsigned value): value(value) {}; unsigned value; _1b10d07d_imagesCount(const _1b10d07d_imagesCount &) = delete; } _1b10d07d_imagesCount;
typedef struct _1b10d07d_imagesWidth { _1b10d07d_imagesWidth(unsigned value): value(value) {}; unsigned value; _1b10d07d_imagesWidth(const _1b10d07d_imagesWidth &) = delete; } _1b10d07d_imagesWidth;
typedef struct _1b10d07d_imagesHeight { _1b10d07d_imagesHeight(unsigned value): value(value) {}; unsigned value; _1b10d07d_imagesHeight(const _1b10d07d_imagesHeight &) = delete; } _1b10d07d_imagesHeight;
typedef struct _1b10d07d_imagesLayersCount { _1b10d07d_imagesLayersCount(unsigned value): value(value) {}; unsigned value; _1b10d07d_imagesLayersCount(const _1b10d07d_imagesLayersCount &) = delete; } _1b10d07d_imagesLayersCount;
typedef struct _1b10d07d_imagesRestrictToAccess { _1b10d07d_imagesRestrictToAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _1b10d07d_imagesRestrictToAccess(const _1b10d07d_imagesRestrictToAccess &) = delete; } _1b10d07d_imagesRestrictToAccess;
typedef struct _1b10d07d_transform { _1b10d07d_transform(RedSurfaceTransformBitflag value): value(value) {}; RedSurfaceTransformBitflag value; _1b10d07d_transform(const _1b10d07d_transform &) = delete; } _1b10d07d_transform;
typedef struct _1b10d07d_compositeAlpha { _1b10d07d_compositeAlpha(RedSurfaceCompositeAlphaBitflag value): value(value) {}; RedSurfaceCompositeAlphaBitflag value; _1b10d07d_compositeAlpha(const _1b10d07d_compositeAlpha &) = delete; } _1b10d07d_compositeAlpha;
typedef struct _1b10d07d_vsyncMode { _1b10d07d_vsyncMode(RedPresentVsyncMode value): value(value) {}; RedPresentVsyncMode value; _1b10d07d_vsyncMode(const _1b10d07d_vsyncMode &) = delete; } _1b10d07d_vsyncMode;
typedef struct _1b10d07d_clipped { _1b10d07d_clipped(RedBool32 value): value(value) {}; RedBool32 value; _1b10d07d_clipped(const _1b10d07d_clipped &) = delete; } _1b10d07d_clipped;
typedef struct _1b10d07d_discardAfterPresent { _1b10d07d_discardAfterPresent(RedBool32 value): value(value) {}; RedBool32 value; _1b10d07d_discardAfterPresent(const _1b10d07d_discardAfterPresent &) = delete; } _1b10d07d_discardAfterPresent;
typedef struct _1b10d07d_oldPresent { _1b10d07d_oldPresent(RedHandlePresent value): value(value) {}; RedHandlePresent value; _1b10d07d_oldPresent(const _1b10d07d_oldPresent &) = delete; } _1b10d07d_oldPresent;
typedef struct _1b10d07d_outPresent { _1b10d07d_outPresent(RedHandlePresent* value): value(value) {}; RedHandlePresent* value; _1b10d07d_outPresent(const _1b10d07d_outPresent &) = delete; } _1b10d07d_outPresent;
typedef struct _1b10d07d_outImages { _1b10d07d_outImages(RedHandleImage* value): value(value) {}; RedHandleImage* value; _1b10d07d_outImages(const _1b10d07d_outImages &) = delete; } _1b10d07d_outImages;
typedef struct _1b10d07d_outTextures { _1b10d07d_outTextures(RedHandleTexture* value): value(value) {}; RedHandleTexture* value; _1b10d07d_outTextures(const _1b10d07d_outTextures &) = delete; } _1b10d07d_outTextures;
typedef struct _1b10d07d_outStatuses { _1b10d07d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _1b10d07d_outStatuses(const _1b10d07d_outStatuses &) = delete; } _1b10d07d_outStatuses;
typedef struct _1b10d07d_optionalFile { _1b10d07d_optionalFile(char* value): value(value) {}; char* value; _1b10d07d_optionalFile(const _1b10d07d_optionalFile &) = delete; } _1b10d07d_optionalFile;
typedef struct _1b10d07d_optionalLine { _1b10d07d_optionalLine(int value): value(value) {}; int value; _1b10d07d_optionalLine(const _1b10d07d_optionalLine &) = delete; } _1b10d07d_optionalLine;
typedef struct _1b10d07d_optionalUserData { _1b10d07d_optionalUserData(void* value): value(value) {}; void* value; _1b10d07d_optionalUserData(const _1b10d07d_optionalUserData &) = delete; } _1b10d07d_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redCreatePresent(_1b10d07d_context & context, _1b10d07d_gpu & gpu, _1b10d07d_queue & queue, _1b10d07d_handleName & handleName, _1b10d07d_surface & surface, _1b10d07d_imagesCount & imagesCount, _1b10d07d_imagesWidth & imagesWidth, _1b10d07d_imagesHeight & imagesHeight, _1b10d07d_imagesLayersCount & imagesLayersCount, _1b10d07d_imagesRestrictToAccess & imagesRestrictToAccess, _1b10d07d_transform & transform, _1b10d07d_compositeAlpha & compositeAlpha, _1b10d07d_vsyncMode & vsyncMode, _1b10d07d_clipped & clipped, _1b10d07d_discardAfterPresent & discardAfterPresent, _1b10d07d_oldPresent & oldPresent, _1b10d07d_outPresent & outPresent, _1b10d07d_outImages & outImages, _1b10d07d_outTextures & outTextures, _1b10d07d_outStatuses & outStatuses, _1b10d07d_optionalFile & optionalFile, _1b10d07d_optionalLine & optionalLine, _1b10d07d_optionalUserData & optionalUserData) {
  redCreatePresent(context.value, gpu.value, queue.value, handleName.value, surface.value, imagesCount.value, imagesWidth.value, imagesHeight.value, imagesLayersCount.value, imagesRestrictToAccess.value, transform.value, compositeAlpha.value, vsyncMode.value, clipped.value, discardAfterPresent.value, oldPresent.value, outPresent.value, outImages.value, outTextures.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroySurface redDestroySurface
#define _5fc7e092_context(value) value
#define _5fc7e092_gpu(value) value
#define _5fc7e092_surface(value) value
#define _5fc7e092_optionalFile(value) value
#define _5fc7e092_optionalLine(value) value
#define _5fc7e092_optionalUserData(value) value
#else
typedef struct _5fc7e092_context { _5fc7e092_context(RedContext value): value(value) {}; RedContext value; _5fc7e092_context(const _5fc7e092_context &) = delete; } _5fc7e092_context;
typedef struct _5fc7e092_gpu { _5fc7e092_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _5fc7e092_gpu(const _5fc7e092_gpu &) = delete; } _5fc7e092_gpu;
typedef struct _5fc7e092_surface { _5fc7e092_surface(RedHandleSurface value): value(value) {}; RedHandleSurface value; _5fc7e092_surface(const _5fc7e092_surface &) = delete; } _5fc7e092_surface;
typedef struct _5fc7e092_optionalFile { _5fc7e092_optionalFile(char* value): value(value) {}; char* value; _5fc7e092_optionalFile(const _5fc7e092_optionalFile &) = delete; } _5fc7e092_optionalFile;
typedef struct _5fc7e092_optionalLine { _5fc7e092_optionalLine(int value): value(value) {}; int value; _5fc7e092_optionalLine(const _5fc7e092_optionalLine &) = delete; } _5fc7e092_optionalLine;
typedef struct _5fc7e092_optionalUserData { _5fc7e092_optionalUserData(void* value): value(value) {}; void* value; _5fc7e092_optionalUserData(const _5fc7e092_optionalUserData &) = delete; } _5fc7e092_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redDestroySurface(_5fc7e092_context & context, _5fc7e092_gpu & gpu, _5fc7e092_surface & surface, _5fc7e092_optionalFile & optionalFile, _5fc7e092_optionalLine & optionalLine, _5fc7e092_optionalUserData & optionalUserData) {
  redDestroySurface(context.value, gpu.value, surface.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyPresent redDestroyPresent
#define _c3c397b9_context(value) value
#define _c3c397b9_gpu(value) value
#define _c3c397b9_present(value) value
#define _c3c397b9_optionalFile(value) value
#define _c3c397b9_optionalLine(value) value
#define _c3c397b9_optionalUserData(value) value
#else
typedef struct _c3c397b9_context { _c3c397b9_context(RedContext value): value(value) {}; RedContext value; _c3c397b9_context(const _c3c397b9_context &) = delete; } _c3c397b9_context;
typedef struct _c3c397b9_gpu { _c3c397b9_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _c3c397b9_gpu(const _c3c397b9_gpu &) = delete; } _c3c397b9_gpu;
typedef struct _c3c397b9_present { _c3c397b9_present(RedHandlePresent value): value(value) {}; RedHandlePresent value; _c3c397b9_present(const _c3c397b9_present &) = delete; } _c3c397b9_present;
typedef struct _c3c397b9_optionalFile { _c3c397b9_optionalFile(char* value): value(value) {}; char* value; _c3c397b9_optionalFile(const _c3c397b9_optionalFile &) = delete; } _c3c397b9_optionalFile;
typedef struct _c3c397b9_optionalLine { _c3c397b9_optionalLine(int value): value(value) {}; int value; _c3c397b9_optionalLine(const _c3c397b9_optionalLine &) = delete; } _c3c397b9_optionalLine;
typedef struct _c3c397b9_optionalUserData { _c3c397b9_optionalUserData(void* value): value(value) {}; void* value; _c3c397b9_optionalUserData(const _c3c397b9_optionalUserData &) = delete; } _c3c397b9_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redDestroyPresent(_c3c397b9_context & context, _c3c397b9_gpu & gpu, _c3c397b9_present & present, _c3c397b9_optionalFile & optionalFile, _c3c397b9_optionalLine & optionalLine, _c3c397b9_optionalUserData & optionalUserData) {
  redDestroyPresent(context.value, gpu.value, present.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redQueueFamilyIndexGetSupportsPresent redQueueFamilyIndexGetSupportsPresent
#define _da8da169_context(value) value
#define _da8da169_gpu(value) value
#define _da8da169_queueFamilyIndex(value) value
#define _da8da169_supportsPresentOnWin32(value) value
#define _da8da169_supportsPresentOnXlib(value) value
#define _da8da169_supportsPresentOnXcb(value) value
#define _da8da169_supportsPresentOnSurface(value) value
#define _da8da169_outStatuses(value) value
#define _da8da169_optionalFile(value) value
#define _da8da169_optionalLine(value) value
#define _da8da169_optionalUserData(value) value
#else
typedef struct _da8da169_context { _da8da169_context(RedContext value): value(value) {}; RedContext value; _da8da169_context(const _da8da169_context &) = delete; } _da8da169_context;
typedef struct _da8da169_gpu { _da8da169_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _da8da169_gpu(const _da8da169_gpu &) = delete; } _da8da169_gpu;
typedef struct _da8da169_queueFamilyIndex { _da8da169_queueFamilyIndex(unsigned value): value(value) {}; unsigned value; _da8da169_queueFamilyIndex(const _da8da169_queueFamilyIndex &) = delete; } _da8da169_queueFamilyIndex;
typedef struct _da8da169_supportsPresentOnWin32 { _da8da169_supportsPresentOnWin32(RedQueueFamilyIndexGetSupportsPresentOnWin32* value): value(value) {}; RedQueueFamilyIndexGetSupportsPresentOnWin32* value; _da8da169_supportsPresentOnWin32(const _da8da169_supportsPresentOnWin32 &) = delete; } _da8da169_supportsPresentOnWin32;
typedef struct _da8da169_supportsPresentOnXlib { _da8da169_supportsPresentOnXlib(RedQueueFamilyIndexGetSupportsPresentOnXlib* value): value(value) {}; RedQueueFamilyIndexGetSupportsPresentOnXlib* value; _da8da169_supportsPresentOnXlib(const _da8da169_supportsPresentOnXlib &) = delete; } _da8da169_supportsPresentOnXlib;
typedef struct _da8da169_supportsPresentOnXcb { _da8da169_supportsPresentOnXcb(RedQueueFamilyIndexGetSupportsPresentOnXcb* value): value(value) {}; RedQueueFamilyIndexGetSupportsPresentOnXcb* value; _da8da169_supportsPresentOnXcb(const _da8da169_supportsPresentOnXcb &) = delete; } _da8da169_supportsPresentOnXcb;
typedef struct _da8da169_supportsPresentOnSurface { _da8da169_supportsPresentOnSurface(RedQueueFamilyIndexGetSupportsPresentOnSurface* value): value(value) {}; RedQueueFamilyIndexGetSupportsPresentOnSurface* value; _da8da169_supportsPresentOnSurface(const _da8da169_supportsPresentOnSurface &) = delete; } _da8da169_supportsPresentOnSurface;
typedef struct _da8da169_outStatuses { _da8da169_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _da8da169_outStatuses(const _da8da169_outStatuses &) = delete; } _da8da169_outStatuses;
typedef struct _da8da169_optionalFile { _da8da169_optionalFile(char* value): value(value) {}; char* value; _da8da169_optionalFile(const _da8da169_optionalFile &) = delete; } _da8da169_optionalFile;
typedef struct _da8da169_optionalLine { _da8da169_optionalLine(int value): value(value) {}; int value; _da8da169_optionalLine(const _da8da169_optionalLine &) = delete; } _da8da169_optionalLine;
typedef struct _da8da169_optionalUserData { _da8da169_optionalUserData(void* value): value(value) {}; void* value; _da8da169_optionalUserData(const _da8da169_optionalUserData &) = delete; } _da8da169_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redQueueFamilyIndexGetSupportsPresent(_da8da169_context & context, _da8da169_gpu & gpu, _da8da169_queueFamilyIndex & queueFamilyIndex, _da8da169_supportsPresentOnWin32 & supportsPresentOnWin32, _da8da169_supportsPresentOnXlib & supportsPresentOnXlib, _da8da169_supportsPresentOnXcb & supportsPresentOnXcb, _da8da169_supportsPresentOnSurface & supportsPresentOnSurface, _da8da169_outStatuses & outStatuses, _da8da169_optionalFile & optionalFile, _da8da169_optionalLine & optionalLine, _da8da169_optionalUserData & optionalUserData) {
  redQueueFamilyIndexGetSupportsPresent(context.value, gpu.value, queueFamilyIndex.value, supportsPresentOnWin32.value, supportsPresentOnXlib.value, supportsPresentOnXcb.value, supportsPresentOnSurface.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redSurfaceGetPresentFeatures redSurfaceGetPresentFeatures
#define _7ac8007d_context(value) value
#define _7ac8007d_gpu(value) value
#define _7ac8007d_surface(value) value
#define _7ac8007d_outSurfacePresentFeatures(value) value
#define _7ac8007d_outStatuses(value) value
#define _7ac8007d_optionalFile(value) value
#define _7ac8007d_optionalLine(value) value
#define _7ac8007d_optionalUserData(value) value
#else
typedef struct _7ac8007d_context { _7ac8007d_context(RedContext value): value(value) {}; RedContext value; _7ac8007d_context(const _7ac8007d_context &) = delete; } _7ac8007d_context;
typedef struct _7ac8007d_gpu { _7ac8007d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _7ac8007d_gpu(const _7ac8007d_gpu &) = delete; } _7ac8007d_gpu;
typedef struct _7ac8007d_surface { _7ac8007d_surface(RedHandleSurface value): value(value) {}; RedHandleSurface value; _7ac8007d_surface(const _7ac8007d_surface &) = delete; } _7ac8007d_surface;
typedef struct _7ac8007d_outSurfacePresentFeatures { _7ac8007d_outSurfacePresentFeatures(RedSurfacePresentFeatures* value): value(value) {}; RedSurfacePresentFeatures* value; _7ac8007d_outSurfacePresentFeatures(const _7ac8007d_outSurfacePresentFeatures &) = delete; } _7ac8007d_outSurfacePresentFeatures;
typedef struct _7ac8007d_outStatuses { _7ac8007d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _7ac8007d_outStatuses(const _7ac8007d_outStatuses &) = delete; } _7ac8007d_outStatuses;
typedef struct _7ac8007d_optionalFile { _7ac8007d_optionalFile(char* value): value(value) {}; char* value; _7ac8007d_optionalFile(const _7ac8007d_optionalFile &) = delete; } _7ac8007d_optionalFile;
typedef struct _7ac8007d_optionalLine { _7ac8007d_optionalLine(int value): value(value) {}; int value; _7ac8007d_optionalLine(const _7ac8007d_optionalLine &) = delete; } _7ac8007d_optionalLine;
typedef struct _7ac8007d_optionalUserData { _7ac8007d_optionalUserData(void* value): value(value) {}; void* value; _7ac8007d_optionalUserData(const _7ac8007d_optionalUserData &) = delete; } _7ac8007d_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redSurfaceGetPresentFeatures(_7ac8007d_context & context, _7ac8007d_gpu & gpu, _7ac8007d_surface & surface, _7ac8007d_outSurfacePresentFeatures & outSurfacePresentFeatures, _7ac8007d_outStatuses & outStatuses, _7ac8007d_optionalFile & optionalFile, _7ac8007d_optionalLine & optionalLine, _7ac8007d_optionalUserData & optionalUserData) {
  redSurfaceGetPresentFeatures(context.value, gpu.value, surface.value, outSurfacePresentFeatures.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redSurfaceGetCurrentPropertiesAndPresentLimits redSurfaceGetCurrentPropertiesAndPresentLimits
#define _cf46f9e2_context(value) value
#define _cf46f9e2_gpu(value) value
#define _cf46f9e2_surface(value) value
#define _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits(value) value
#define _cf46f9e2_outStatuses(value) value
#define _cf46f9e2_optionalFile(value) value
#define _cf46f9e2_optionalLine(value) value
#define _cf46f9e2_optionalUserData(value) value
#else
typedef struct _cf46f9e2_context { _cf46f9e2_context(RedContext value): value(value) {}; RedContext value; _cf46f9e2_context(const _cf46f9e2_context &) = delete; } _cf46f9e2_context;
typedef struct _cf46f9e2_gpu { _cf46f9e2_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _cf46f9e2_gpu(const _cf46f9e2_gpu &) = delete; } _cf46f9e2_gpu;
typedef struct _cf46f9e2_surface { _cf46f9e2_surface(RedHandleSurface value): value(value) {}; RedHandleSurface value; _cf46f9e2_surface(const _cf46f9e2_surface &) = delete; } _cf46f9e2_surface;
typedef struct _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits { _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits(RedSurfaceCurrentPropertiesAndPresentLimits* value): value(value) {}; RedSurfaceCurrentPropertiesAndPresentLimits* value; _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits(const _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits &) = delete; } _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits;
typedef struct _cf46f9e2_outStatuses { _cf46f9e2_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _cf46f9e2_outStatuses(const _cf46f9e2_outStatuses &) = delete; } _cf46f9e2_outStatuses;
typedef struct _cf46f9e2_optionalFile { _cf46f9e2_optionalFile(char* value): value(value) {}; char* value; _cf46f9e2_optionalFile(const _cf46f9e2_optionalFile &) = delete; } _cf46f9e2_optionalFile;
typedef struct _cf46f9e2_optionalLine { _cf46f9e2_optionalLine(int value): value(value) {}; int value; _cf46f9e2_optionalLine(const _cf46f9e2_optionalLine &) = delete; } _cf46f9e2_optionalLine;
typedef struct _cf46f9e2_optionalUserData { _cf46f9e2_optionalUserData(void* value): value(value) {}; void* value; _cf46f9e2_optionalUserData(const _cf46f9e2_optionalUserData &) = delete; } _cf46f9e2_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redSurfaceGetCurrentPropertiesAndPresentLimits(_cf46f9e2_context & context, _cf46f9e2_gpu & gpu, _cf46f9e2_surface & surface, _cf46f9e2_outSurfaceCurrentPropertiesAndPresentLimits & outSurfaceCurrentPropertiesAndPresentLimits, _cf46f9e2_outStatuses & outStatuses, _cf46f9e2_optionalFile & optionalFile, _cf46f9e2_optionalLine & optionalLine, _cf46f9e2_optionalUserData & optionalUserData) {
  redSurfaceGetCurrentPropertiesAndPresentLimits(context.value, gpu.value, surface.value, outSurfaceCurrentPropertiesAndPresentLimits.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redPresentGetImageIndex redPresentGetImageIndex
#define _0850d50a_context(value) value
#define _0850d50a_gpu(value) value
#define _0850d50a_present(value) value
#define _0850d50a_signalCpuSignal(value) value
#define _0850d50a_signalGpuSignal(value) value
#define _0850d50a_outImageIndex(value) value
#define _0850d50a_outStatuses(value) value
#define _0850d50a_optionalFile(value) value
#define _0850d50a_optionalLine(value) value
#define _0850d50a_optionalUserData(value) value
#else
typedef struct _0850d50a_context { _0850d50a_context(RedContext value): value(value) {}; RedContext value; _0850d50a_context(const _0850d50a_context &) = delete; } _0850d50a_context;
typedef struct _0850d50a_gpu { _0850d50a_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _0850d50a_gpu(const _0850d50a_gpu &) = delete; } _0850d50a_gpu;
typedef struct _0850d50a_present { _0850d50a_present(RedHandlePresent value): value(value) {}; RedHandlePresent value; _0850d50a_present(const _0850d50a_present &) = delete; } _0850d50a_present;
typedef struct _0850d50a_signalCpuSignal { _0850d50a_signalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _0850d50a_signalCpuSignal(const _0850d50a_signalCpuSignal &) = delete; } _0850d50a_signalCpuSignal;
typedef struct _0850d50a_signalGpuSignal { _0850d50a_signalGpuSignal(RedHandleGpuSignal value): value(value) {}; RedHandleGpuSignal value; _0850d50a_signalGpuSignal(const _0850d50a_signalGpuSignal &) = delete; } _0850d50a_signalGpuSignal;
typedef struct _0850d50a_outImageIndex { _0850d50a_outImageIndex(unsigned* value): value(value) {}; unsigned* value; _0850d50a_outImageIndex(const _0850d50a_outImageIndex &) = delete; } _0850d50a_outImageIndex;
typedef struct _0850d50a_outStatuses { _0850d50a_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _0850d50a_outStatuses(const _0850d50a_outStatuses &) = delete; } _0850d50a_outStatuses;
typedef struct _0850d50a_optionalFile { _0850d50a_optionalFile(char* value): value(value) {}; char* value; _0850d50a_optionalFile(const _0850d50a_optionalFile &) = delete; } _0850d50a_optionalFile;
typedef struct _0850d50a_optionalLine { _0850d50a_optionalLine(int value): value(value) {}; int value; _0850d50a_optionalLine(const _0850d50a_optionalLine &) = delete; } _0850d50a_optionalLine;
typedef struct _0850d50a_optionalUserData { _0850d50a_optionalUserData(void* value): value(value) {}; void* value; _0850d50a_optionalUserData(const _0850d50a_optionalUserData &) = delete; } _0850d50a_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redPresentGetImageIndex(_0850d50a_context & context, _0850d50a_gpu & gpu, _0850d50a_present & present, _0850d50a_signalCpuSignal & signalCpuSignal, _0850d50a_signalGpuSignal & signalGpuSignal, _0850d50a_outImageIndex & outImageIndex, _0850d50a_outStatuses & outStatuses, _0850d50a_optionalFile & optionalFile, _0850d50a_optionalLine & optionalLine, _0850d50a_optionalUserData & optionalUserData) {
  redPresentGetImageIndex(context.value, gpu.value, present.value, signalCpuSignal.value, signalGpuSignal.value, outImageIndex.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redQueuePresent redQueuePresent
#define _e942825c_context(value) value
#define _e942825c_gpu(value) value
#define _e942825c_queue(value) value
#define _e942825c_waitForAndUnsignalGpuSignalsCount(value) value
#define _e942825c_waitForAndUnsignalGpuSignals(value) value
#define _e942825c_presentsCount(value) value
#define _e942825c_presents(value) value
#define _e942825c_presentsImageIndex(value) value
#define _e942825c_outPresentsStatus(value) value
#define _e942825c_outStatuses(value) value
#define _e942825c_optionalFile(value) value
#define _e942825c_optionalLine(value) value
#define _e942825c_optionalUserData(value) value
#else
typedef struct _e942825c_context { _e942825c_context(RedContext value): value(value) {}; RedContext value; _e942825c_context(const _e942825c_context &) = delete; } _e942825c_context;
typedef struct _e942825c_gpu { _e942825c_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _e942825c_gpu(const _e942825c_gpu &) = delete; } _e942825c_gpu;
typedef struct _e942825c_queue { _e942825c_queue(RedHandleQueue value): value(value) {}; RedHandleQueue value; _e942825c_queue(const _e942825c_queue &) = delete; } _e942825c_queue;
typedef struct _e942825c_waitForAndUnsignalGpuSignalsCount { _e942825c_waitForAndUnsignalGpuSignalsCount(unsigned value): value(value) {}; unsigned value; _e942825c_waitForAndUnsignalGpuSignalsCount(const _e942825c_waitForAndUnsignalGpuSignalsCount &) = delete; } _e942825c_waitForAndUnsignalGpuSignalsCount;
typedef struct _e942825c_waitForAndUnsignalGpuSignals { _e942825c_waitForAndUnsignalGpuSignals(RedHandleGpuSignal* value): value(value) {}; RedHandleGpuSignal* value; _e942825c_waitForAndUnsignalGpuSignals(const _e942825c_waitForAndUnsignalGpuSignals &) = delete; } _e942825c_waitForAndUnsignalGpuSignals;
typedef struct _e942825c_presentsCount { _e942825c_presentsCount(unsigned value): value(value) {}; unsigned value; _e942825c_presentsCount(const _e942825c_presentsCount &) = delete; } _e942825c_presentsCount;
typedef struct _e942825c_presents { _e942825c_presents(RedHandlePresent* value): value(value) {}; RedHandlePresent* value; _e942825c_presents(const _e942825c_presents &) = delete; } _e942825c_presents;
typedef struct _e942825c_presentsImageIndex { _e942825c_presentsImageIndex(unsigned* value): value(value) {}; unsigned* value; _e942825c_presentsImageIndex(const _e942825c_presentsImageIndex &) = delete; } _e942825c_presentsImageIndex;
typedef struct _e942825c_outPresentsStatus { _e942825c_outPresentsStatus(RedStatus* value): value(value) {}; RedStatus* value; _e942825c_outPresentsStatus(const _e942825c_outPresentsStatus &) = delete; } _e942825c_outPresentsStatus;
typedef struct _e942825c_outStatuses { _e942825c_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _e942825c_outStatuses(const _e942825c_outStatuses &) = delete; } _e942825c_outStatuses;
typedef struct _e942825c_optionalFile { _e942825c_optionalFile(char* value): value(value) {}; char* value; _e942825c_optionalFile(const _e942825c_optionalFile &) = delete; } _e942825c_optionalFile;
typedef struct _e942825c_optionalLine { _e942825c_optionalLine(int value): value(value) {}; int value; _e942825c_optionalLine(const _e942825c_optionalLine &) = delete; } _e942825c_optionalLine;
typedef struct _e942825c_optionalUserData { _e942825c_optionalUserData(void* value): value(value) {}; void* value; _e942825c_optionalUserData(const _e942825c_optionalUserData &) = delete; } _e942825c_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redQueuePresent(_e942825c_context & context, _e942825c_gpu & gpu, _e942825c_queue & queue, _e942825c_waitForAndUnsignalGpuSignalsCount & waitForAndUnsignalGpuSignalsCount, _e942825c_waitForAndUnsignalGpuSignals & waitForAndUnsignalGpuSignals, _e942825c_presentsCount & presentsCount, _e942825c_presents & presents, _e942825c_presentsImageIndex & presentsImageIndex, _e942825c_outPresentsStatus & outPresentsStatus, _e942825c_outStatuses & outStatuses, _e942825c_optionalFile & optionalFile, _e942825c_optionalLine & optionalLine, _e942825c_optionalUserData & optionalUserData) {
  redQueuePresent(context.value, gpu.value, queue.value, waitForAndUnsignalGpuSignalsCount.value, waitForAndUnsignalGpuSignals.value, presentsCount.value, presents.value, presentsImageIndex.value, outPresentsStatus.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

