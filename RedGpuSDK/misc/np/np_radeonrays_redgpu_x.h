#pragma once

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetDevicePtrFromD3D12Resource rrGetDevicePtrFromD3D12Resource
#define _46f8f610_context(value) value
#define _46f8f610_resource(value) value
#define _46f8f610_offset(value) value
#define _46f8f610_devicePtr(value) value
#else
typedef struct _46f8f610_context { _46f8f610_context(RRContext value): value(value) {}; RRContext value; _46f8f610_context(const _46f8f610_context &) = delete; } _46f8f610_context;
typedef struct _46f8f610_resource { _46f8f610_resource(ID3D12Resource* value): value(value) {}; ID3D12Resource* value; _46f8f610_resource(const _46f8f610_resource &) = delete; } _46f8f610_resource;
typedef struct _46f8f610_offset { _46f8f610_offset(size_t value): value(value) {}; size_t value; _46f8f610_offset(const _46f8f610_offset &) = delete; } _46f8f610_offset;
typedef struct _46f8f610_devicePtr { _46f8f610_devicePtr(RRDevicePtr* value): value(value) {}; RRDevicePtr* value; _46f8f610_devicePtr(const _46f8f610_devicePtr &) = delete; } _46f8f610_devicePtr;
RRError np_rrGetDevicePtrFromD3D12Resource(_46f8f610_context & context, _46f8f610_resource & resource, _46f8f610_offset & offset, _46f8f610_devicePtr & devicePtr) {
  return rrGetDevicePtrFromD3D12Resource(context.value, resource.value, offset.value, devicePtr.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrCreateContextDX rrCreateContextDX
#define _4339579d_apiVersion(value) value
#define _4339579d_d3dDevice(value) value
#define _4339579d_commandQueue(value) value
#define _4339579d_context(value) value
#else
typedef struct _4339579d_apiVersion { _4339579d_apiVersion(uint32_t value): value(value) {}; uint32_t value; _4339579d_apiVersion(const _4339579d_apiVersion &) = delete; } _4339579d_apiVersion;
typedef struct _4339579d_d3dDevice { _4339579d_d3dDevice(ID3D12Device* value): value(value) {}; ID3D12Device* value; _4339579d_d3dDevice(const _4339579d_d3dDevice &) = delete; } _4339579d_d3dDevice;
typedef struct _4339579d_commandQueue { _4339579d_commandQueue(ID3D12CommandQueue* value): value(value) {}; ID3D12CommandQueue* value; _4339579d_commandQueue(const _4339579d_commandQueue &) = delete; } _4339579d_commandQueue;
typedef struct _4339579d_context { _4339579d_context(RRContext* value): value(value) {}; RRContext* value; _4339579d_context(const _4339579d_context &) = delete; } _4339579d_context;
RRError np_rrCreateContextDX(_4339579d_apiVersion & apiVersion, _4339579d_d3dDevice & d3dDevice, _4339579d_commandQueue & commandQueue, _4339579d_context & context) {
  return rrCreateContextDX(apiVersion.value, d3dDevice.value, commandQueue.value, context.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_rrGetCommandStreamFromD3D12CommandList rrGetCommandStreamFromD3D12CommandList
#define _79041f48_context(value) value
#define _79041f48_commandList(value) value
#define _79041f48_commandStream(value) value
#else
typedef struct _79041f48_context { _79041f48_context(RRContext value): value(value) {}; RRContext value; _79041f48_context(const _79041f48_context &) = delete; } _79041f48_context;
typedef struct _79041f48_commandList { _79041f48_commandList(ID3D12GraphicsCommandList* value): value(value) {}; ID3D12GraphicsCommandList* value; _79041f48_commandList(const _79041f48_commandList &) = delete; } _79041f48_commandList;
typedef struct _79041f48_commandStream { _79041f48_commandStream(RRCommandStream* value): value(value) {}; RRCommandStream* value; _79041f48_commandStream(const _79041f48_commandStream &) = delete; } _79041f48_commandStream;
RRError np_rrGetCommandStreamFromD3D12CommandList(_79041f48_context & context, _79041f48_commandList & commandList, _79041f48_commandStream & commandStream) {
  return rrGetCommandStreamFromD3D12CommandList(context.value, commandList.value, commandStream.value);
}
#endif

