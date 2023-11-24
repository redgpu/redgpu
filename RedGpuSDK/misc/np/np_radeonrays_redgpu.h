#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetDevicePtrFromVkBuffer rrGetDevicePtrFromVkBuffer
#define _7586bd4a_context(value) value
#define _7586bd4a_resource(value) value
#define _7586bd4a_offset(value) value
#define _7586bd4a_devicePtr(value) value
#else
typedef struct _7586bd4a_context { _7586bd4a_context(RRContext value): value(value) {}; RRContext value; _7586bd4a_context(const _7586bd4a_context &) = delete; } _7586bd4a_context;
typedef struct _7586bd4a_resource { _7586bd4a_resource(RedHandleArray value): value(value) {}; RedHandleArray value; _7586bd4a_resource(const _7586bd4a_resource &) = delete; } _7586bd4a_resource;
typedef struct _7586bd4a_offset { _7586bd4a_offset(size_t value): value(value) {}; size_t value; _7586bd4a_offset(const _7586bd4a_offset &) = delete; } _7586bd4a_offset;
typedef struct _7586bd4a_devicePtr { _7586bd4a_devicePtr(RRDevicePtr* value): value(value) {}; RRDevicePtr* value; _7586bd4a_devicePtr(const _7586bd4a_devicePtr &) = delete; } _7586bd4a_devicePtr;
REDGPU_NP_DECLSPEC RRError REDGPU_NP_API np_rrGetDevicePtrFromVkBuffer(_7586bd4a_context & context, _7586bd4a_resource & resource, _7586bd4a_offset & offset, _7586bd4a_devicePtr & devicePtr) {
  return rrGetDevicePtrFromVkBuffer(context.value, resource.value, offset.value, devicePtr.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrCreateContextVk rrCreateContextVk
#define _3649d9fd_apiVersion(value) value
#define _3649d9fd_device(value) value
#define _3649d9fd_physicalDevice(value) value
#define _3649d9fd_commandQueue(value) value
#define _3649d9fd_queueFamilyIndex(value) value
#define _3649d9fd_context(value) value
#else
typedef struct _3649d9fd_apiVersion { _3649d9fd_apiVersion(unsigned value): value(value) {}; unsigned value; _3649d9fd_apiVersion(const _3649d9fd_apiVersion &) = delete; } _3649d9fd_apiVersion;
typedef struct _3649d9fd_device { _3649d9fd_device(RedHandleGpu value): value(value) {}; RedHandleGpu value; _3649d9fd_device(const _3649d9fd_device &) = delete; } _3649d9fd_device;
typedef struct _3649d9fd_physicalDevice { _3649d9fd_physicalDevice(RedHandleGpuDevice value): value(value) {}; RedHandleGpuDevice value; _3649d9fd_physicalDevice(const _3649d9fd_physicalDevice &) = delete; } _3649d9fd_physicalDevice;
typedef struct _3649d9fd_commandQueue { _3649d9fd_commandQueue(RedHandleQueue value): value(value) {}; RedHandleQueue value; _3649d9fd_commandQueue(const _3649d9fd_commandQueue &) = delete; } _3649d9fd_commandQueue;
typedef struct _3649d9fd_queueFamilyIndex { _3649d9fd_queueFamilyIndex(unsigned value): value(value) {}; unsigned value; _3649d9fd_queueFamilyIndex(const _3649d9fd_queueFamilyIndex &) = delete; } _3649d9fd_queueFamilyIndex;
typedef struct _3649d9fd_context { _3649d9fd_context(RRContext* value): value(value) {}; RRContext* value; _3649d9fd_context(const _3649d9fd_context &) = delete; } _3649d9fd_context;
REDGPU_NP_DECLSPEC RRError REDGPU_NP_API np_rrCreateContextVk(_3649d9fd_apiVersion & apiVersion, _3649d9fd_device & device, _3649d9fd_physicalDevice & physicalDevice, _3649d9fd_commandQueue & commandQueue, _3649d9fd_queueFamilyIndex & queueFamilyIndex, _3649d9fd_context & context) {
  return rrCreateContextVk(apiVersion.value, device.value, physicalDevice.value, commandQueue.value, queueFamilyIndex.value, context.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetCommandStreamFromVkCommandBuffer rrGetCommandStreamFromVkCommandBuffer
#define _9fb15427_context(value) value
#define _9fb15427_commandBuffer(value) value
#define _9fb15427_commandStream(value) value
#else
typedef struct _9fb15427_context { _9fb15427_context(RRContext value): value(value) {}; RRContext value; _9fb15427_context(const _9fb15427_context &) = delete; } _9fb15427_context;
typedef struct _9fb15427_commandBuffer { _9fb15427_commandBuffer(RedHandleCalls value): value(value) {}; RedHandleCalls value; _9fb15427_commandBuffer(const _9fb15427_commandBuffer &) = delete; } _9fb15427_commandBuffer;
typedef struct _9fb15427_commandStream { _9fb15427_commandStream(RRCommandStream* value): value(value) {}; RRCommandStream* value; _9fb15427_commandStream(const _9fb15427_commandStream &) = delete; } _9fb15427_commandStream;
REDGPU_NP_DECLSPEC RRError REDGPU_NP_API np_rrGetCommandStreamFromVkCommandBuffer(_9fb15427_context & context, _9fb15427_commandBuffer & commandBuffer, _9fb15427_commandStream & commandStream) {
  return rrGetCommandStreamFromVkCommandBuffer(context.value, commandBuffer.value, commandStream.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrAllocateDeviceBuffer rrAllocateDeviceBuffer
#define _9d6e0c3f_context(value) value
#define _9d6e0c3f_size(value) value
#define _9d6e0c3f_devicePtr(value) value
#else
typedef struct _9d6e0c3f_context { _9d6e0c3f_context(RRContext value): value(value) {}; RRContext value; _9d6e0c3f_context(const _9d6e0c3f_context &) = delete; } _9d6e0c3f_context;
typedef struct _9d6e0c3f_size { _9d6e0c3f_size(size_t value): value(value) {}; size_t value; _9d6e0c3f_size(const _9d6e0c3f_size &) = delete; } _9d6e0c3f_size;
typedef struct _9d6e0c3f_devicePtr { _9d6e0c3f_devicePtr(RRDevicePtr* value): value(value) {}; RRDevicePtr* value; _9d6e0c3f_devicePtr(const _9d6e0c3f_devicePtr &) = delete; } _9d6e0c3f_devicePtr;
REDGPU_NP_DECLSPEC RRError REDGPU_NP_API np_rrAllocateDeviceBuffer(_9d6e0c3f_context & context, _9d6e0c3f_size & size, _9d6e0c3f_devicePtr & devicePtr) {
  return rrAllocateDeviceBuffer(context.value, size.value, devicePtr.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrMapDevicePtr rrMapDevicePtr
#define _9147c399_context(value) value
#define _9147c399_devicePtr(value) value
#define _9147c399_mappingPtr(value) value
#else
typedef struct _9147c399_context { _9147c399_context(RRContext value): value(value) {}; RRContext value; _9147c399_context(const _9147c399_context &) = delete; } _9147c399_context;
typedef struct _9147c399_devicePtr { _9147c399_devicePtr(RRDevicePtr value): value(value) {}; RRDevicePtr value; _9147c399_devicePtr(const _9147c399_devicePtr &) = delete; } _9147c399_devicePtr;
typedef struct _9147c399_mappingPtr { _9147c399_mappingPtr(void** value): value(value) {}; void** value; _9147c399_mappingPtr(const _9147c399_mappingPtr &) = delete; } _9147c399_mappingPtr;
REDGPU_NP_DECLSPEC RRError REDGPU_NP_API np_rrMapDevicePtr(_9147c399_context & context, _9147c399_devicePtr & devicePtr, _9147c399_mappingPtr & mappingPtr) {
  return rrMapDevicePtr(context.value, devicePtr.value, mappingPtr.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrUnmapDevicePtr rrUnmapDevicePtr
#define _1f75d004_context(value) value
#define _1f75d004_devicePtr(value) value
#define _1f75d004_mappingPtr(value) value
#else
typedef struct _1f75d004_context { _1f75d004_context(RRContext value): value(value) {}; RRContext value; _1f75d004_context(const _1f75d004_context &) = delete; } _1f75d004_context;
typedef struct _1f75d004_devicePtr { _1f75d004_devicePtr(RRDevicePtr value): value(value) {}; RRDevicePtr value; _1f75d004_devicePtr(const _1f75d004_devicePtr &) = delete; } _1f75d004_devicePtr;
typedef struct _1f75d004_mappingPtr { _1f75d004_mappingPtr(void** value): value(value) {}; void** value; _1f75d004_mappingPtr(const _1f75d004_mappingPtr &) = delete; } _1f75d004_mappingPtr;
REDGPU_NP_DECLSPEC RRError REDGPU_NP_API np_rrUnmapDevicePtr(_1f75d004_context & context, _1f75d004_devicePtr & devicePtr, _1f75d004_mappingPtr & mappingPtr) {
  return rrUnmapDevicePtr(context.value, devicePtr.value, mappingPtr.value);
}
#endif

