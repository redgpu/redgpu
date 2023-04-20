#pragma once

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12AdapterRegisterVideoMemoryBudgetChangeNotificationEvent x12AdapterRegisterVideoMemoryBudgetChangeNotificationEvent
#define _234869dd_pAdapter(value) value
#define _234869dd_hEvent(value) value
#define _234869dd_outdwCookie(value) value
#define _234869dd_optionalFile(value) value
#define _234869dd_optionalLine(value) value
#else
typedef struct _234869dd_pAdapter { _234869dd_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _234869dd_pAdapter(const _234869dd_pAdapter &) = delete; } _234869dd_pAdapter;
typedef struct _234869dd_hEvent { _234869dd_hEvent(void* value): value(value) {}; void* value; _234869dd_hEvent(const _234869dd_hEvent &) = delete; } _234869dd_hEvent;
typedef struct _234869dd_outdwCookie { _234869dd_outdwCookie(unsigned* value): value(value) {}; unsigned* value; _234869dd_outdwCookie(const _234869dd_outdwCookie &) = delete; } _234869dd_outdwCookie;
typedef struct _234869dd_optionalFile { _234869dd_optionalFile(char* value): value(value) {}; char* value; _234869dd_optionalFile(const _234869dd_optionalFile &) = delete; } _234869dd_optionalFile;
typedef struct _234869dd_optionalLine { _234869dd_optionalLine(int value): value(value) {}; int value; _234869dd_optionalLine(const _234869dd_optionalLine &) = delete; } _234869dd_optionalLine;
HRESULT np_x12AdapterRegisterVideoMemoryBudgetChangeNotificationEvent(_234869dd_pAdapter & pAdapter, _234869dd_hEvent & hEvent, _234869dd_outdwCookie & outdwCookie, _234869dd_optionalFile & optionalFile, _234869dd_optionalLine & optionalLine) {
  return x12AdapterRegisterVideoMemoryBudgetChangeNotificationEvent(pAdapter.value, hEvent.value, outdwCookie.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12AdapterUnregisterVideoMemoryBudgetChangeNotification x12AdapterUnregisterVideoMemoryBudgetChangeNotification
#define _6c92cdcb_pAdapter(value) value
#define _6c92cdcb_dwCookie(value) value
#define _6c92cdcb_optionalFile(value) value
#define _6c92cdcb_optionalLine(value) value
#else
typedef struct _6c92cdcb_pAdapter { _6c92cdcb_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _6c92cdcb_pAdapter(const _6c92cdcb_pAdapter &) = delete; } _6c92cdcb_pAdapter;
typedef struct _6c92cdcb_dwCookie { _6c92cdcb_dwCookie(unsigned value): value(value) {}; unsigned value; _6c92cdcb_dwCookie(const _6c92cdcb_dwCookie &) = delete; } _6c92cdcb_dwCookie;
typedef struct _6c92cdcb_optionalFile { _6c92cdcb_optionalFile(char* value): value(value) {}; char* value; _6c92cdcb_optionalFile(const _6c92cdcb_optionalFile &) = delete; } _6c92cdcb_optionalFile;
typedef struct _6c92cdcb_optionalLine { _6c92cdcb_optionalLine(int value): value(value) {}; int value; _6c92cdcb_optionalLine(const _6c92cdcb_optionalLine &) = delete; } _6c92cdcb_optionalLine;
void np_x12AdapterUnregisterVideoMemoryBudgetChangeNotification(_6c92cdcb_pAdapter & pAdapter, _6c92cdcb_dwCookie & dwCookie, _6c92cdcb_optionalFile & optionalFile, _6c92cdcb_optionalLine & optionalLine) {
  x12AdapterUnregisterVideoMemoryBudgetChangeNotification(pAdapter.value, dwCookie.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12AdapterQueryVideoMemoryInfo x12AdapterQueryVideoMemoryInfo
#define _b624d535_pAdapter(value) value
#define _b624d535_NodeIndex(value) value
#define _b624d535_MemorySegmentGroup(value) value
#define _b624d535_pVideoMemoryInfo(value) value
#define _b624d535_optionalFile(value) value
#define _b624d535_optionalLine(value) value
#else
typedef struct _b624d535_pAdapter { _b624d535_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _b624d535_pAdapter(const _b624d535_pAdapter &) = delete; } _b624d535_pAdapter;
typedef struct _b624d535_NodeIndex { _b624d535_NodeIndex(unsigned value): value(value) {}; unsigned value; _b624d535_NodeIndex(const _b624d535_NodeIndex &) = delete; } _b624d535_NodeIndex;
typedef struct _b624d535_MemorySegmentGroup { _b624d535_MemorySegmentGroup(DXGI_MEMORY_SEGMENT_GROUP value): value(value) {}; DXGI_MEMORY_SEGMENT_GROUP value; _b624d535_MemorySegmentGroup(const _b624d535_MemorySegmentGroup &) = delete; } _b624d535_MemorySegmentGroup;
typedef struct _b624d535_pVideoMemoryInfo { _b624d535_pVideoMemoryInfo(DXGI_QUERY_VIDEO_MEMORY_INFO* value): value(value) {}; DXGI_QUERY_VIDEO_MEMORY_INFO* value; _b624d535_pVideoMemoryInfo(const _b624d535_pVideoMemoryInfo &) = delete; } _b624d535_pVideoMemoryInfo;
typedef struct _b624d535_optionalFile { _b624d535_optionalFile(char* value): value(value) {}; char* value; _b624d535_optionalFile(const _b624d535_optionalFile &) = delete; } _b624d535_optionalFile;
typedef struct _b624d535_optionalLine { _b624d535_optionalLine(int value): value(value) {}; int value; _b624d535_optionalLine(const _b624d535_optionalLine &) = delete; } _b624d535_optionalLine;
HRESULT np_x12AdapterQueryVideoMemoryInfo(_b624d535_pAdapter & pAdapter, _b624d535_NodeIndex & NodeIndex, _b624d535_MemorySegmentGroup & MemorySegmentGroup, _b624d535_pVideoMemoryInfo & pVideoMemoryInfo, _b624d535_optionalFile & optionalFile, _b624d535_optionalLine & optionalLine) {
  return x12AdapterQueryVideoMemoryInfo(pAdapter.value, NodeIndex.value, MemorySegmentGroup.value, pVideoMemoryInfo.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12AdapterSetVideoMemoryReservation x12AdapterSetVideoMemoryReservation
#define _dd8569cd_pAdapter(value) value
#define _dd8569cd_NodeIndex(value) value
#define _dd8569cd_MemorySegmentGroup(value) value
#define _dd8569cd_Reservation(value) value
#define _dd8569cd_optionalFile(value) value
#define _dd8569cd_optionalLine(value) value
#else
typedef struct _dd8569cd_pAdapter { _dd8569cd_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _dd8569cd_pAdapter(const _dd8569cd_pAdapter &) = delete; } _dd8569cd_pAdapter;
typedef struct _dd8569cd_NodeIndex { _dd8569cd_NodeIndex(unsigned value): value(value) {}; unsigned value; _dd8569cd_NodeIndex(const _dd8569cd_NodeIndex &) = delete; } _dd8569cd_NodeIndex;
typedef struct _dd8569cd_MemorySegmentGroup { _dd8569cd_MemorySegmentGroup(DXGI_MEMORY_SEGMENT_GROUP value): value(value) {}; DXGI_MEMORY_SEGMENT_GROUP value; _dd8569cd_MemorySegmentGroup(const _dd8569cd_MemorySegmentGroup &) = delete; } _dd8569cd_MemorySegmentGroup;
typedef struct _dd8569cd_Reservation { _dd8569cd_Reservation(uint64_t value): value(value) {}; uint64_t value; _dd8569cd_Reservation(const _dd8569cd_Reservation &) = delete; } _dd8569cd_Reservation;
typedef struct _dd8569cd_optionalFile { _dd8569cd_optionalFile(char* value): value(value) {}; char* value; _dd8569cd_optionalFile(const _dd8569cd_optionalFile &) = delete; } _dd8569cd_optionalFile;
typedef struct _dd8569cd_optionalLine { _dd8569cd_optionalLine(int value): value(value) {}; int value; _dd8569cd_optionalLine(const _dd8569cd_optionalLine &) = delete; } _dd8569cd_optionalLine;
HRESULT np_x12AdapterSetVideoMemoryReservation(_dd8569cd_pAdapter & pAdapter, _dd8569cd_NodeIndex & NodeIndex, _dd8569cd_MemorySegmentGroup & MemorySegmentGroup, _dd8569cd_Reservation & Reservation, _dd8569cd_optionalFile & optionalFile, _dd8569cd_optionalLine & optionalLine) {
  return x12AdapterSetVideoMemoryReservation(pAdapter.value, NodeIndex.value, MemorySegmentGroup.value, Reservation.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateHeap x12DeviceCreateHeap
#define _b26e9376_pDevice(value) value
#define _b26e9376_pDesc(value) value
#define _b26e9376_outpHeap(value) value
#define _b26e9376_optionalFile(value) value
#define _b26e9376_optionalLine(value) value
#else
typedef struct _b26e9376_pDevice { _b26e9376_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _b26e9376_pDevice(const _b26e9376_pDevice &) = delete; } _b26e9376_pDevice;
typedef struct _b26e9376_pDesc { _b26e9376_pDesc(D3D12_HEAP_DESC* value): value(value) {}; D3D12_HEAP_DESC* value; _b26e9376_pDesc(const _b26e9376_pDesc &) = delete; } _b26e9376_pDesc;
typedef struct _b26e9376_outpHeap { _b26e9376_outpHeap(X12Heap** value): value(value) {}; X12Heap** value; _b26e9376_outpHeap(const _b26e9376_outpHeap &) = delete; } _b26e9376_outpHeap;
typedef struct _b26e9376_optionalFile { _b26e9376_optionalFile(char* value): value(value) {}; char* value; _b26e9376_optionalFile(const _b26e9376_optionalFile &) = delete; } _b26e9376_optionalFile;
typedef struct _b26e9376_optionalLine { _b26e9376_optionalLine(int value): value(value) {}; int value; _b26e9376_optionalLine(const _b26e9376_optionalLine &) = delete; } _b26e9376_optionalLine;
HRESULT np_x12DeviceCreateHeap(_b26e9376_pDevice & pDevice, _b26e9376_pDesc & pDesc, _b26e9376_outpHeap & outpHeap, _b26e9376_optionalFile & optionalFile, _b26e9376_optionalLine & optionalLine) {
  return x12DeviceCreateHeap(pDevice.value, pDesc.value, outpHeap.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceGetResourceAllocationInfo x12DeviceGetResourceAllocationInfo
#define _abfeb258_pDevice(value) value
#define _abfeb258_visibleMask(value) value
#define _abfeb258_numResourceDescs(value) value
#define _abfeb258_pResourceDescs(value) value
#define _abfeb258_outResourceAllocationInfo(value) value
#define _abfeb258_optionalFile(value) value
#define _abfeb258_optionalLine(value) value
#else
typedef struct _abfeb258_pDevice { _abfeb258_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _abfeb258_pDevice(const _abfeb258_pDevice &) = delete; } _abfeb258_pDevice;
typedef struct _abfeb258_visibleMask { _abfeb258_visibleMask(unsigned value): value(value) {}; unsigned value; _abfeb258_visibleMask(const _abfeb258_visibleMask &) = delete; } _abfeb258_visibleMask;
typedef struct _abfeb258_numResourceDescs { _abfeb258_numResourceDescs(unsigned value): value(value) {}; unsigned value; _abfeb258_numResourceDescs(const _abfeb258_numResourceDescs &) = delete; } _abfeb258_numResourceDescs;
typedef struct _abfeb258_pResourceDescs { _abfeb258_pResourceDescs(D3D12_RESOURCE_DESC* value): value(value) {}; D3D12_RESOURCE_DESC* value; _abfeb258_pResourceDescs(const _abfeb258_pResourceDescs &) = delete; } _abfeb258_pResourceDescs;
typedef struct _abfeb258_outResourceAllocationInfo { _abfeb258_outResourceAllocationInfo(D3D12_RESOURCE_ALLOCATION_INFO* value): value(value) {}; D3D12_RESOURCE_ALLOCATION_INFO* value; _abfeb258_outResourceAllocationInfo(const _abfeb258_outResourceAllocationInfo &) = delete; } _abfeb258_outResourceAllocationInfo;
typedef struct _abfeb258_optionalFile { _abfeb258_optionalFile(char* value): value(value) {}; char* value; _abfeb258_optionalFile(const _abfeb258_optionalFile &) = delete; } _abfeb258_optionalFile;
typedef struct _abfeb258_optionalLine { _abfeb258_optionalLine(int value): value(value) {}; int value; _abfeb258_optionalLine(const _abfeb258_optionalLine &) = delete; } _abfeb258_optionalLine;
void np_x12DeviceGetResourceAllocationInfo(_abfeb258_pDevice & pDevice, _abfeb258_visibleMask & visibleMask, _abfeb258_numResourceDescs & numResourceDescs, _abfeb258_pResourceDescs & pResourceDescs, _abfeb258_outResourceAllocationInfo & outResourceAllocationInfo, _abfeb258_optionalFile & optionalFile, _abfeb258_optionalLine & optionalLine) {
  x12DeviceGetResourceAllocationInfo(pDevice.value, visibleMask.value, numResourceDescs.value, pResourceDescs.value, outResourceAllocationInfo.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreatePlacedResource x12DeviceCreatePlacedResource
#define _00687acf_pDevice(value) value
#define _00687acf_pHeap(value) value
#define _00687acf_HeapOffset(value) value
#define _00687acf_pDesc(value) value
#define _00687acf_InitialState(value) value
#define _00687acf_pOptimizedClearValue(value) value
#define _00687acf_outpResource(value) value
#define _00687acf_optionalFile(value) value
#define _00687acf_optionalLine(value) value
#else
typedef struct _00687acf_pDevice { _00687acf_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _00687acf_pDevice(const _00687acf_pDevice &) = delete; } _00687acf_pDevice;
typedef struct _00687acf_pHeap { _00687acf_pHeap(X12Heap* value): value(value) {}; X12Heap* value; _00687acf_pHeap(const _00687acf_pHeap &) = delete; } _00687acf_pHeap;
typedef struct _00687acf_HeapOffset { _00687acf_HeapOffset(uint64_t value): value(value) {}; uint64_t value; _00687acf_HeapOffset(const _00687acf_HeapOffset &) = delete; } _00687acf_HeapOffset;
typedef struct _00687acf_pDesc { _00687acf_pDesc(D3D12_RESOURCE_DESC* value): value(value) {}; D3D12_RESOURCE_DESC* value; _00687acf_pDesc(const _00687acf_pDesc &) = delete; } _00687acf_pDesc;
typedef struct _00687acf_InitialState { _00687acf_InitialState(D3D12_RESOURCE_STATES value): value(value) {}; D3D12_RESOURCE_STATES value; _00687acf_InitialState(const _00687acf_InitialState &) = delete; } _00687acf_InitialState;
typedef struct _00687acf_pOptimizedClearValue { _00687acf_pOptimizedClearValue(D3D12_CLEAR_VALUE* value): value(value) {}; D3D12_CLEAR_VALUE* value; _00687acf_pOptimizedClearValue(const _00687acf_pOptimizedClearValue &) = delete; } _00687acf_pOptimizedClearValue;
typedef struct _00687acf_outpResource { _00687acf_outpResource(X12Resource** value): value(value) {}; X12Resource** value; _00687acf_outpResource(const _00687acf_outpResource &) = delete; } _00687acf_outpResource;
typedef struct _00687acf_optionalFile { _00687acf_optionalFile(char* value): value(value) {}; char* value; _00687acf_optionalFile(const _00687acf_optionalFile &) = delete; } _00687acf_optionalFile;
typedef struct _00687acf_optionalLine { _00687acf_optionalLine(int value): value(value) {}; int value; _00687acf_optionalLine(const _00687acf_optionalLine &) = delete; } _00687acf_optionalLine;
HRESULT np_x12DeviceCreatePlacedResource(_00687acf_pDevice & pDevice, _00687acf_pHeap & pHeap, _00687acf_HeapOffset & HeapOffset, _00687acf_pDesc & pDesc, _00687acf_InitialState & InitialState, _00687acf_pOptimizedClearValue & pOptimizedClearValue, _00687acf_outpResource & outpResource, _00687acf_optionalFile & optionalFile, _00687acf_optionalLine & optionalLine) {
  return x12DeviceCreatePlacedResource(pDevice.value, pHeap.value, HeapOffset.value, pDesc.value, InitialState.value, pOptimizedClearValue.value, outpResource.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateCommittedResource x12DeviceCreateCommittedResource
#define _af30929d_pDevice(value) value
#define _af30929d_pHeapProperties(value) value
#define _af30929d_HeapFlags(value) value
#define _af30929d_pDesc(value) value
#define _af30929d_InitialResourceState(value) value
#define _af30929d_pOptimizedClearValue(value) value
#define _af30929d_outpResource(value) value
#define _af30929d_optionalFile(value) value
#define _af30929d_optionalLine(value) value
#else
typedef struct _af30929d_pDevice { _af30929d_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _af30929d_pDevice(const _af30929d_pDevice &) = delete; } _af30929d_pDevice;
typedef struct _af30929d_pHeapProperties { _af30929d_pHeapProperties(D3D12_HEAP_PROPERTIES* value): value(value) {}; D3D12_HEAP_PROPERTIES* value; _af30929d_pHeapProperties(const _af30929d_pHeapProperties &) = delete; } _af30929d_pHeapProperties;
typedef struct _af30929d_HeapFlags { _af30929d_HeapFlags(D3D12_HEAP_FLAGS value): value(value) {}; D3D12_HEAP_FLAGS value; _af30929d_HeapFlags(const _af30929d_HeapFlags &) = delete; } _af30929d_HeapFlags;
typedef struct _af30929d_pDesc { _af30929d_pDesc(D3D12_RESOURCE_DESC* value): value(value) {}; D3D12_RESOURCE_DESC* value; _af30929d_pDesc(const _af30929d_pDesc &) = delete; } _af30929d_pDesc;
typedef struct _af30929d_InitialResourceState { _af30929d_InitialResourceState(D3D12_RESOURCE_STATES value): value(value) {}; D3D12_RESOURCE_STATES value; _af30929d_InitialResourceState(const _af30929d_InitialResourceState &) = delete; } _af30929d_InitialResourceState;
typedef struct _af30929d_pOptimizedClearValue { _af30929d_pOptimizedClearValue(D3D12_CLEAR_VALUE* value): value(value) {}; D3D12_CLEAR_VALUE* value; _af30929d_pOptimizedClearValue(const _af30929d_pOptimizedClearValue &) = delete; } _af30929d_pOptimizedClearValue;
typedef struct _af30929d_outpResource { _af30929d_outpResource(X12Resource** value): value(value) {}; X12Resource** value; _af30929d_outpResource(const _af30929d_outpResource &) = delete; } _af30929d_outpResource;
typedef struct _af30929d_optionalFile { _af30929d_optionalFile(char* value): value(value) {}; char* value; _af30929d_optionalFile(const _af30929d_optionalFile &) = delete; } _af30929d_optionalFile;
typedef struct _af30929d_optionalLine { _af30929d_optionalLine(int value): value(value) {}; int value; _af30929d_optionalLine(const _af30929d_optionalLine &) = delete; } _af30929d_optionalLine;
HRESULT np_x12DeviceCreateCommittedResource(_af30929d_pDevice & pDevice, _af30929d_pHeapProperties & pHeapProperties, _af30929d_HeapFlags & HeapFlags, _af30929d_pDesc & pDesc, _af30929d_InitialResourceState & InitialResourceState, _af30929d_pOptimizedClearValue & pOptimizedClearValue, _af30929d_outpResource & outpResource, _af30929d_optionalFile & optionalFile, _af30929d_optionalLine & optionalLine) {
  return x12DeviceCreateCommittedResource(pDevice.value, pHeapProperties.value, HeapFlags.value, pDesc.value, InitialResourceState.value, pOptimizedClearValue.value, outpResource.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12ResourceMap x12ResourceMap
#define _78514594_pResource(value) value
#define _78514594_Subresource(value) value
#define _78514594_pReadRange(value) value
#define _78514594_outpData(value) value
#define _78514594_optionalFile(value) value
#define _78514594_optionalLine(value) value
#else
typedef struct _78514594_pResource { _78514594_pResource(X12Resource* value): value(value) {}; X12Resource* value; _78514594_pResource(const _78514594_pResource &) = delete; } _78514594_pResource;
typedef struct _78514594_Subresource { _78514594_Subresource(unsigned value): value(value) {}; unsigned value; _78514594_Subresource(const _78514594_Subresource &) = delete; } _78514594_Subresource;
typedef struct _78514594_pReadRange { _78514594_pReadRange(D3D12_RANGE* value): value(value) {}; D3D12_RANGE* value; _78514594_pReadRange(const _78514594_pReadRange &) = delete; } _78514594_pReadRange;
typedef struct _78514594_outpData { _78514594_outpData(void** value): value(value) {}; void** value; _78514594_outpData(const _78514594_outpData &) = delete; } _78514594_outpData;
typedef struct _78514594_optionalFile { _78514594_optionalFile(char* value): value(value) {}; char* value; _78514594_optionalFile(const _78514594_optionalFile &) = delete; } _78514594_optionalFile;
typedef struct _78514594_optionalLine { _78514594_optionalLine(int value): value(value) {}; int value; _78514594_optionalLine(const _78514594_optionalLine &) = delete; } _78514594_optionalLine;
HRESULT np_x12ResourceMap(_78514594_pResource & pResource, _78514594_Subresource & Subresource, _78514594_pReadRange & pReadRange, _78514594_outpData & outpData, _78514594_optionalFile & optionalFile, _78514594_optionalLine & optionalLine) {
  return x12ResourceMap(pResource.value, Subresource.value, pReadRange.value, outpData.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12ResourceUnmap x12ResourceUnmap
#define _b2aac10d_pResource(value) value
#define _b2aac10d_Subresource(value) value
#define _b2aac10d_pWrittenRange(value) value
#define _b2aac10d_optionalFile(value) value
#define _b2aac10d_optionalLine(value) value
#else
typedef struct _b2aac10d_pResource { _b2aac10d_pResource(X12Resource* value): value(value) {}; X12Resource* value; _b2aac10d_pResource(const _b2aac10d_pResource &) = delete; } _b2aac10d_pResource;
typedef struct _b2aac10d_Subresource { _b2aac10d_Subresource(unsigned value): value(value) {}; unsigned value; _b2aac10d_Subresource(const _b2aac10d_Subresource &) = delete; } _b2aac10d_Subresource;
typedef struct _b2aac10d_pWrittenRange { _b2aac10d_pWrittenRange(D3D12_RANGE* value): value(value) {}; D3D12_RANGE* value; _b2aac10d_pWrittenRange(const _b2aac10d_pWrittenRange &) = delete; } _b2aac10d_pWrittenRange;
typedef struct _b2aac10d_optionalFile { _b2aac10d_optionalFile(char* value): value(value) {}; char* value; _b2aac10d_optionalFile(const _b2aac10d_optionalFile &) = delete; } _b2aac10d_optionalFile;
typedef struct _b2aac10d_optionalLine { _b2aac10d_optionalLine(int value): value(value) {}; int value; _b2aac10d_optionalLine(const _b2aac10d_optionalLine &) = delete; } _b2aac10d_optionalLine;
void np_x12ResourceUnmap(_b2aac10d_pResource & pResource, _b2aac10d_Subresource & Subresource, _b2aac10d_pWrittenRange & pWrittenRange, _b2aac10d_optionalFile & optionalFile, _b2aac10d_optionalLine & optionalLine) {
  x12ResourceUnmap(pResource.value, Subresource.value, pWrittenRange.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateDescriptorHeap x12DeviceCreateDescriptorHeap
#define _d49cdb24_pDevice(value) value
#define _d49cdb24_pDescriptorHeapDesc(value) value
#define _d49cdb24_outpHeap(value) value
#define _d49cdb24_optionalFile(value) value
#define _d49cdb24_optionalLine(value) value
#else
typedef struct _d49cdb24_pDevice { _d49cdb24_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _d49cdb24_pDevice(const _d49cdb24_pDevice &) = delete; } _d49cdb24_pDevice;
typedef struct _d49cdb24_pDescriptorHeapDesc { _d49cdb24_pDescriptorHeapDesc(D3D12_DESCRIPTOR_HEAP_DESC* value): value(value) {}; D3D12_DESCRIPTOR_HEAP_DESC* value; _d49cdb24_pDescriptorHeapDesc(const _d49cdb24_pDescriptorHeapDesc &) = delete; } _d49cdb24_pDescriptorHeapDesc;
typedef struct _d49cdb24_outpHeap { _d49cdb24_outpHeap(X12DescriptorHeap** value): value(value) {}; X12DescriptorHeap** value; _d49cdb24_outpHeap(const _d49cdb24_outpHeap &) = delete; } _d49cdb24_outpHeap;
typedef struct _d49cdb24_optionalFile { _d49cdb24_optionalFile(char* value): value(value) {}; char* value; _d49cdb24_optionalFile(const _d49cdb24_optionalFile &) = delete; } _d49cdb24_optionalFile;
typedef struct _d49cdb24_optionalLine { _d49cdb24_optionalLine(int value): value(value) {}; int value; _d49cdb24_optionalLine(const _d49cdb24_optionalLine &) = delete; } _d49cdb24_optionalLine;
HRESULT np_x12DeviceCreateDescriptorHeap(_d49cdb24_pDevice & pDevice, _d49cdb24_pDescriptorHeapDesc & pDescriptorHeapDesc, _d49cdb24_outpHeap & outpHeap, _d49cdb24_optionalFile & optionalFile, _d49cdb24_optionalLine & optionalLine) {
  return x12DeviceCreateDescriptorHeap(pDevice.value, pDescriptorHeapDesc.value, outpHeap.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DescriptorHeapGetCPUDescriptorHandleForHeapStart x12DescriptorHeapGetCPUDescriptorHandleForHeapStart
#define _9d9e29d9_pDescriptorHeap(value) value
#define _9d9e29d9_pCpuDescriptorHandle(value) value
#else
typedef struct _9d9e29d9_pDescriptorHeap { _9d9e29d9_pDescriptorHeap(X12DescriptorHeap* value): value(value) {}; X12DescriptorHeap* value; _9d9e29d9_pDescriptorHeap(const _9d9e29d9_pDescriptorHeap &) = delete; } _9d9e29d9_pDescriptorHeap;
typedef struct _9d9e29d9_pCpuDescriptorHandle { _9d9e29d9_pCpuDescriptorHandle(D3D12_CPU_DESCRIPTOR_HANDLE* value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE* value; _9d9e29d9_pCpuDescriptorHandle(const _9d9e29d9_pCpuDescriptorHandle &) = delete; } _9d9e29d9_pCpuDescriptorHandle;
void np_x12DescriptorHeapGetCPUDescriptorHandleForHeapStart(_9d9e29d9_pDescriptorHeap & pDescriptorHeap, _9d9e29d9_pCpuDescriptorHandle & pCpuDescriptorHandle) {
  x12DescriptorHeapGetCPUDescriptorHandleForHeapStart(pDescriptorHeap.value, pCpuDescriptorHandle.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCopyDescriptors x12DeviceCopyDescriptors
#define _fd7af7d1_pDevice(value) value
#define _fd7af7d1_NumDestDescriptorRanges(value) value
#define _fd7af7d1_pDestDescriptorRangeStarts(value) value
#define _fd7af7d1_pDestDescriptorRangeSizes(value) value
#define _fd7af7d1_NumSrcDescriptorRanges(value) value
#define _fd7af7d1_pSrcDescriptorRangeStarts(value) value
#define _fd7af7d1_pSrcDescriptorRangeSizes(value) value
#define _fd7af7d1_DescriptorHeapsType(value) value
#define _fd7af7d1_optionalFile(value) value
#define _fd7af7d1_optionalLine(value) value
#else
typedef struct _fd7af7d1_pDevice { _fd7af7d1_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _fd7af7d1_pDevice(const _fd7af7d1_pDevice &) = delete; } _fd7af7d1_pDevice;
typedef struct _fd7af7d1_NumDestDescriptorRanges { _fd7af7d1_NumDestDescriptorRanges(unsigned value): value(value) {}; unsigned value; _fd7af7d1_NumDestDescriptorRanges(const _fd7af7d1_NumDestDescriptorRanges &) = delete; } _fd7af7d1_NumDestDescriptorRanges;
typedef struct _fd7af7d1_pDestDescriptorRangeStarts { _fd7af7d1_pDestDescriptorRangeStarts(D3D12_CPU_DESCRIPTOR_HANDLE* value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE* value; _fd7af7d1_pDestDescriptorRangeStarts(const _fd7af7d1_pDestDescriptorRangeStarts &) = delete; } _fd7af7d1_pDestDescriptorRangeStarts;
typedef struct _fd7af7d1_pDestDescriptorRangeSizes { _fd7af7d1_pDestDescriptorRangeSizes(unsigned* value): value(value) {}; unsigned* value; _fd7af7d1_pDestDescriptorRangeSizes(const _fd7af7d1_pDestDescriptorRangeSizes &) = delete; } _fd7af7d1_pDestDescriptorRangeSizes;
typedef struct _fd7af7d1_NumSrcDescriptorRanges { _fd7af7d1_NumSrcDescriptorRanges(unsigned value): value(value) {}; unsigned value; _fd7af7d1_NumSrcDescriptorRanges(const _fd7af7d1_NumSrcDescriptorRanges &) = delete; } _fd7af7d1_NumSrcDescriptorRanges;
typedef struct _fd7af7d1_pSrcDescriptorRangeStarts { _fd7af7d1_pSrcDescriptorRangeStarts(D3D12_CPU_DESCRIPTOR_HANDLE* value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE* value; _fd7af7d1_pSrcDescriptorRangeStarts(const _fd7af7d1_pSrcDescriptorRangeStarts &) = delete; } _fd7af7d1_pSrcDescriptorRangeStarts;
typedef struct _fd7af7d1_pSrcDescriptorRangeSizes { _fd7af7d1_pSrcDescriptorRangeSizes(unsigned* value): value(value) {}; unsigned* value; _fd7af7d1_pSrcDescriptorRangeSizes(const _fd7af7d1_pSrcDescriptorRangeSizes &) = delete; } _fd7af7d1_pSrcDescriptorRangeSizes;
typedef struct _fd7af7d1_DescriptorHeapsType { _fd7af7d1_DescriptorHeapsType(D3D12_DESCRIPTOR_HEAP_TYPE value): value(value) {}; D3D12_DESCRIPTOR_HEAP_TYPE value; _fd7af7d1_DescriptorHeapsType(const _fd7af7d1_DescriptorHeapsType &) = delete; } _fd7af7d1_DescriptorHeapsType;
typedef struct _fd7af7d1_optionalFile { _fd7af7d1_optionalFile(char* value): value(value) {}; char* value; _fd7af7d1_optionalFile(const _fd7af7d1_optionalFile &) = delete; } _fd7af7d1_optionalFile;
typedef struct _fd7af7d1_optionalLine { _fd7af7d1_optionalLine(int value): value(value) {}; int value; _fd7af7d1_optionalLine(const _fd7af7d1_optionalLine &) = delete; } _fd7af7d1_optionalLine;
void np_x12DeviceCopyDescriptors(_fd7af7d1_pDevice & pDevice, _fd7af7d1_NumDestDescriptorRanges & NumDestDescriptorRanges, _fd7af7d1_pDestDescriptorRangeStarts & pDestDescriptorRangeStarts, _fd7af7d1_pDestDescriptorRangeSizes & pDestDescriptorRangeSizes, _fd7af7d1_NumSrcDescriptorRanges & NumSrcDescriptorRanges, _fd7af7d1_pSrcDescriptorRangeStarts & pSrcDescriptorRangeStarts, _fd7af7d1_pSrcDescriptorRangeSizes & pSrcDescriptorRangeSizes, _fd7af7d1_DescriptorHeapsType & DescriptorHeapsType, _fd7af7d1_optionalFile & optionalFile, _fd7af7d1_optionalLine & optionalLine) {
  x12DeviceCopyDescriptors(pDevice.value, NumDestDescriptorRanges.value, pDestDescriptorRangeStarts.value, pDestDescriptorRangeSizes.value, NumSrcDescriptorRanges.value, pSrcDescriptorRangeStarts.value, pSrcDescriptorRangeSizes.value, DescriptorHeapsType.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DescriptorHeapGetGPUDescriptorHandleForHeapStart x12DescriptorHeapGetGPUDescriptorHandleForHeapStart
#define _194d8253_pDescriptorHeap(value) value
#define _194d8253_pGpuDescriptorHandle(value) value
#else
typedef struct _194d8253_pDescriptorHeap { _194d8253_pDescriptorHeap(X12DescriptorHeap* value): value(value) {}; X12DescriptorHeap* value; _194d8253_pDescriptorHeap(const _194d8253_pDescriptorHeap &) = delete; } _194d8253_pDescriptorHeap;
typedef struct _194d8253_pGpuDescriptorHandle { _194d8253_pGpuDescriptorHandle(D3D12_GPU_DESCRIPTOR_HANDLE* value): value(value) {}; D3D12_GPU_DESCRIPTOR_HANDLE* value; _194d8253_pGpuDescriptorHandle(const _194d8253_pGpuDescriptorHandle &) = delete; } _194d8253_pGpuDescriptorHandle;
void np_x12DescriptorHeapGetGPUDescriptorHandleForHeapStart(_194d8253_pDescriptorHeap & pDescriptorHeap, _194d8253_pGpuDescriptorHandle & pGpuDescriptorHandle) {
  x12DescriptorHeapGetGPUDescriptorHandleForHeapStart(pDescriptorHeap.value, pGpuDescriptorHandle.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceSetResidencyPriority x12DeviceSetResidencyPriority
#define _9b4b70db_pDevice(value) value
#define _9b4b70db_NumObjects(value) value
#define _9b4b70db_ppObjects(value) value
#define _9b4b70db_pPriorities(value) value
#define _9b4b70db_optionalFile(value) value
#define _9b4b70db_optionalLine(value) value
#else
typedef struct _9b4b70db_pDevice { _9b4b70db_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _9b4b70db_pDevice(const _9b4b70db_pDevice &) = delete; } _9b4b70db_pDevice;
typedef struct _9b4b70db_NumObjects { _9b4b70db_NumObjects(unsigned value): value(value) {}; unsigned value; _9b4b70db_NumObjects(const _9b4b70db_NumObjects &) = delete; } _9b4b70db_NumObjects;
typedef struct _9b4b70db_ppObjects { _9b4b70db_ppObjects(const X12Pageable** value): value(value) {}; const X12Pageable** value; _9b4b70db_ppObjects(const _9b4b70db_ppObjects &) = delete; } _9b4b70db_ppObjects;
typedef struct _9b4b70db_pPriorities { _9b4b70db_pPriorities(unsigned* value): value(value) {}; unsigned* value; _9b4b70db_pPriorities(const _9b4b70db_pPriorities &) = delete; } _9b4b70db_pPriorities;
typedef struct _9b4b70db_optionalFile { _9b4b70db_optionalFile(char* value): value(value) {}; char* value; _9b4b70db_optionalFile(const _9b4b70db_optionalFile &) = delete; } _9b4b70db_optionalFile;
typedef struct _9b4b70db_optionalLine { _9b4b70db_optionalLine(int value): value(value) {}; int value; _9b4b70db_optionalLine(const _9b4b70db_optionalLine &) = delete; } _9b4b70db_optionalLine;
HRESULT np_x12DeviceSetResidencyPriority(_9b4b70db_pDevice & pDevice, _9b4b70db_NumObjects & NumObjects, _9b4b70db_ppObjects & ppObjects, _9b4b70db_pPriorities & pPriorities, _9b4b70db_optionalFile & optionalFile, _9b4b70db_optionalLine & optionalLine) {
  return x12DeviceSetResidencyPriority(pDevice.value, NumObjects.value, ppObjects.value, pPriorities.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceEvict x12DeviceEvict
#define _100896fa_pDevice(value) value
#define _100896fa_NumObjects(value) value
#define _100896fa_ppObjects(value) value
#define _100896fa_optionalFile(value) value
#define _100896fa_optionalLine(value) value
#else
typedef struct _100896fa_pDevice { _100896fa_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _100896fa_pDevice(const _100896fa_pDevice &) = delete; } _100896fa_pDevice;
typedef struct _100896fa_NumObjects { _100896fa_NumObjects(unsigned value): value(value) {}; unsigned value; _100896fa_NumObjects(const _100896fa_NumObjects &) = delete; } _100896fa_NumObjects;
typedef struct _100896fa_ppObjects { _100896fa_ppObjects(const X12Pageable** value): value(value) {}; const X12Pageable** value; _100896fa_ppObjects(const _100896fa_ppObjects &) = delete; } _100896fa_ppObjects;
typedef struct _100896fa_optionalFile { _100896fa_optionalFile(char* value): value(value) {}; char* value; _100896fa_optionalFile(const _100896fa_optionalFile &) = delete; } _100896fa_optionalFile;
typedef struct _100896fa_optionalLine { _100896fa_optionalLine(int value): value(value) {}; int value; _100896fa_optionalLine(const _100896fa_optionalLine &) = delete; } _100896fa_optionalLine;
HRESULT np_x12DeviceEvict(_100896fa_pDevice & pDevice, _100896fa_NumObjects & NumObjects, _100896fa_ppObjects & ppObjects, _100896fa_optionalFile & optionalFile, _100896fa_optionalLine & optionalLine) {
  return x12DeviceEvict(pDevice.value, NumObjects.value, ppObjects.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceMakeResident x12DeviceMakeResident
#define _99402084_pDevice(value) value
#define _99402084_NumObjects(value) value
#define _99402084_ppObjects(value) value
#define _99402084_optionalFile(value) value
#define _99402084_optionalLine(value) value
#else
typedef struct _99402084_pDevice { _99402084_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _99402084_pDevice(const _99402084_pDevice &) = delete; } _99402084_pDevice;
typedef struct _99402084_NumObjects { _99402084_NumObjects(unsigned value): value(value) {}; unsigned value; _99402084_NumObjects(const _99402084_NumObjects &) = delete; } _99402084_NumObjects;
typedef struct _99402084_ppObjects { _99402084_ppObjects(const X12Pageable** value): value(value) {}; const X12Pageable** value; _99402084_ppObjects(const _99402084_ppObjects &) = delete; } _99402084_ppObjects;
typedef struct _99402084_optionalFile { _99402084_optionalFile(char* value): value(value) {}; char* value; _99402084_optionalFile(const _99402084_optionalFile &) = delete; } _99402084_optionalFile;
typedef struct _99402084_optionalLine { _99402084_optionalLine(int value): value(value) {}; int value; _99402084_optionalLine(const _99402084_optionalLine &) = delete; } _99402084_optionalLine;
HRESULT np_x12DeviceMakeResident(_99402084_pDevice & pDevice, _99402084_NumObjects & NumObjects, _99402084_ppObjects & ppObjects, _99402084_optionalFile & optionalFile, _99402084_optionalLine & optionalLine) {
  return x12DeviceMakeResident(pDevice.value, NumObjects.value, ppObjects.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceEnqueueMakeResident x12DeviceEnqueueMakeResident
#define _5a205dd0_pDevice(value) value
#define _5a205dd0_Flags(value) value
#define _5a205dd0_NumObjects(value) value
#define _5a205dd0_ppObjects(value) value
#define _5a205dd0_pFenceToSignal(value) value
#define _5a205dd0_FenceValueToSignal(value) value
#define _5a205dd0_optionalFile(value) value
#define _5a205dd0_optionalLine(value) value
#else
typedef struct _5a205dd0_pDevice { _5a205dd0_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _5a205dd0_pDevice(const _5a205dd0_pDevice &) = delete; } _5a205dd0_pDevice;
typedef struct _5a205dd0_Flags { _5a205dd0_Flags(D3D12_RESIDENCY_FLAGS value): value(value) {}; D3D12_RESIDENCY_FLAGS value; _5a205dd0_Flags(const _5a205dd0_Flags &) = delete; } _5a205dd0_Flags;
typedef struct _5a205dd0_NumObjects { _5a205dd0_NumObjects(unsigned value): value(value) {}; unsigned value; _5a205dd0_NumObjects(const _5a205dd0_NumObjects &) = delete; } _5a205dd0_NumObjects;
typedef struct _5a205dd0_ppObjects { _5a205dd0_ppObjects(const X12Pageable** value): value(value) {}; const X12Pageable** value; _5a205dd0_ppObjects(const _5a205dd0_ppObjects &) = delete; } _5a205dd0_ppObjects;
typedef struct _5a205dd0_pFenceToSignal { _5a205dd0_pFenceToSignal(X12Fence* value): value(value) {}; X12Fence* value; _5a205dd0_pFenceToSignal(const _5a205dd0_pFenceToSignal &) = delete; } _5a205dd0_pFenceToSignal;
typedef struct _5a205dd0_FenceValueToSignal { _5a205dd0_FenceValueToSignal(uint64_t value): value(value) {}; uint64_t value; _5a205dd0_FenceValueToSignal(const _5a205dd0_FenceValueToSignal &) = delete; } _5a205dd0_FenceValueToSignal;
typedef struct _5a205dd0_optionalFile { _5a205dd0_optionalFile(char* value): value(value) {}; char* value; _5a205dd0_optionalFile(const _5a205dd0_optionalFile &) = delete; } _5a205dd0_optionalFile;
typedef struct _5a205dd0_optionalLine { _5a205dd0_optionalLine(int value): value(value) {}; int value; _5a205dd0_optionalLine(const _5a205dd0_optionalLine &) = delete; } _5a205dd0_optionalLine;
HRESULT np_x12DeviceEnqueueMakeResident(_5a205dd0_pDevice & pDevice, _5a205dd0_Flags & Flags, _5a205dd0_NumObjects & NumObjects, _5a205dd0_ppObjects & ppObjects, _5a205dd0_pFenceToSignal & pFenceToSignal, _5a205dd0_FenceValueToSignal & FenceValueToSignal, _5a205dd0_optionalFile & optionalFile, _5a205dd0_optionalLine & optionalLine) {
  return x12DeviceEnqueueMakeResident(pDevice.value, Flags.value, NumObjects.value, ppObjects.value, pFenceToSignal.value, FenceValueToSignal.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DebugEnable x12DebugEnable
#define _cdead04c_optionalFile(value) value
#define _cdead04c_optionalLine(value) value
#else
typedef struct _cdead04c_optionalFile { _cdead04c_optionalFile(char* value): value(value) {}; char* value; _cdead04c_optionalFile(const _cdead04c_optionalFile &) = delete; } _cdead04c_optionalFile;
typedef struct _cdead04c_optionalLine { _cdead04c_optionalLine(int value): value(value) {}; int value; _cdead04c_optionalLine(const _cdead04c_optionalLine &) = delete; } _cdead04c_optionalLine;
void* np_x12DebugEnable(_cdead04c_optionalFile & optionalFile, _cdead04c_optionalLine & optionalLine) {
  return x12DebugEnable(optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DebugReport x12DebugReport
#define _a0057177_debugContext(value) value
#define _a0057177_optionalFile(value) value
#define _a0057177_optionalLine(value) value
#else
typedef struct _a0057177_debugContext { _a0057177_debugContext(void* value): value(value) {}; void* value; _a0057177_debugContext(const _a0057177_debugContext &) = delete; } _a0057177_debugContext;
typedef struct _a0057177_optionalFile { _a0057177_optionalFile(char* value): value(value) {}; char* value; _a0057177_optionalFile(const _a0057177_optionalFile &) = delete; } _a0057177_optionalFile;
typedef struct _a0057177_optionalLine { _a0057177_optionalLine(int value): value(value) {}; int value; _a0057177_optionalLine(const _a0057177_optionalLine &) = delete; } _a0057177_optionalLine;
void np_x12DebugReport(_a0057177_debugContext & debugContext, _a0057177_optionalFile & optionalFile, _a0057177_optionalLine & optionalLine) {
  x12DebugReport(debugContext.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CreateFactory2 x12CreateFactory2
#define _e35b5955_Flags(value) value
#define _e35b5955_outpFactory(value) value
#define _e35b5955_optionalFile(value) value
#define _e35b5955_optionalLine(value) value
#else
typedef struct _e35b5955_Flags { _e35b5955_Flags(DXGI_CREATE_FACTORY_FLAGS value): value(value) {}; DXGI_CREATE_FACTORY_FLAGS value; _e35b5955_Flags(const _e35b5955_Flags &) = delete; } _e35b5955_Flags;
typedef struct _e35b5955_outpFactory { _e35b5955_outpFactory(X12Factory4** value): value(value) {}; X12Factory4** value; _e35b5955_outpFactory(const _e35b5955_outpFactory &) = delete; } _e35b5955_outpFactory;
typedef struct _e35b5955_optionalFile { _e35b5955_optionalFile(char* value): value(value) {}; char* value; _e35b5955_optionalFile(const _e35b5955_optionalFile &) = delete; } _e35b5955_optionalFile;
typedef struct _e35b5955_optionalLine { _e35b5955_optionalLine(int value): value(value) {}; int value; _e35b5955_optionalLine(const _e35b5955_optionalLine &) = delete; } _e35b5955_optionalLine;
HRESULT np_x12CreateFactory2(_e35b5955_Flags & Flags, _e35b5955_outpFactory & outpFactory, _e35b5955_optionalFile & optionalFile, _e35b5955_optionalLine & optionalLine) {
  return x12CreateFactory2(Flags.value, outpFactory.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryEnumAdapters1 x12FactoryEnumAdapters1
#define _dbf9ca0f_pFactory(value) value
#define _dbf9ca0f_Adapter(value) value
#define _dbf9ca0f_outpAdapter(value) value
#define _dbf9ca0f_optionalFile(value) value
#define _dbf9ca0f_optionalLine(value) value
#else
typedef struct _dbf9ca0f_pFactory { _dbf9ca0f_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _dbf9ca0f_pFactory(const _dbf9ca0f_pFactory &) = delete; } _dbf9ca0f_pFactory;
typedef struct _dbf9ca0f_Adapter { _dbf9ca0f_Adapter(unsigned value): value(value) {}; unsigned value; _dbf9ca0f_Adapter(const _dbf9ca0f_Adapter &) = delete; } _dbf9ca0f_Adapter;
typedef struct _dbf9ca0f_outpAdapter { _dbf9ca0f_outpAdapter(X12Adapter3** value): value(value) {}; X12Adapter3** value; _dbf9ca0f_outpAdapter(const _dbf9ca0f_outpAdapter &) = delete; } _dbf9ca0f_outpAdapter;
typedef struct _dbf9ca0f_optionalFile { _dbf9ca0f_optionalFile(char* value): value(value) {}; char* value; _dbf9ca0f_optionalFile(const _dbf9ca0f_optionalFile &) = delete; } _dbf9ca0f_optionalFile;
typedef struct _dbf9ca0f_optionalLine { _dbf9ca0f_optionalLine(int value): value(value) {}; int value; _dbf9ca0f_optionalLine(const _dbf9ca0f_optionalLine &) = delete; } _dbf9ca0f_optionalLine;
HRESULT np_x12FactoryEnumAdapters1(_dbf9ca0f_pFactory & pFactory, _dbf9ca0f_Adapter & Adapter, _dbf9ca0f_outpAdapter & outpAdapter, _dbf9ca0f_optionalFile & optionalFile, _dbf9ca0f_optionalLine & optionalLine) {
  return x12FactoryEnumAdapters1(pFactory.value, Adapter.value, outpAdapter.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CreateDevice x12CreateDevice
#define _d2037500_pAdapter(value) value
#define _d2037500_MinimumFeatureLevel(value) value
#define _d2037500_outpDevice(value) value
#define _d2037500_optionalFile(value) value
#define _d2037500_optionalLine(value) value
#else
typedef struct _d2037500_pAdapter { _d2037500_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _d2037500_pAdapter(const _d2037500_pAdapter &) = delete; } _d2037500_pAdapter;
typedef struct _d2037500_MinimumFeatureLevel { _d2037500_MinimumFeatureLevel(D3D_FEATURE_LEVEL value): value(value) {}; D3D_FEATURE_LEVEL value; _d2037500_MinimumFeatureLevel(const _d2037500_MinimumFeatureLevel &) = delete; } _d2037500_MinimumFeatureLevel;
typedef struct _d2037500_outpDevice { _d2037500_outpDevice(X12Device3** value): value(value) {}; X12Device3** value; _d2037500_outpDevice(const _d2037500_outpDevice &) = delete; } _d2037500_outpDevice;
typedef struct _d2037500_optionalFile { _d2037500_optionalFile(char* value): value(value) {}; char* value; _d2037500_optionalFile(const _d2037500_optionalFile &) = delete; } _d2037500_optionalFile;
typedef struct _d2037500_optionalLine { _d2037500_optionalLine(int value): value(value) {}; int value; _d2037500_optionalLine(const _d2037500_optionalLine &) = delete; } _d2037500_optionalLine;
HRESULT np_x12CreateDevice(_d2037500_pAdapter & pAdapter, _d2037500_MinimumFeatureLevel & MinimumFeatureLevel, _d2037500_outpDevice & outpDevice, _d2037500_optionalFile & optionalFile, _d2037500_optionalLine & optionalLine) {
  return x12CreateDevice(pAdapter.value, MinimumFeatureLevel.value, outpDevice.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateUnorderedAccessView x12DeviceCreateUnorderedAccessView
#define _b52e21e8_pDevice(value) value
#define _b52e21e8_pResource(value) value
#define _b52e21e8_pCounterResource(value) value
#define _b52e21e8_pDesc(value) value
#define _b52e21e8_DestDescriptor(value) value
#define _b52e21e8_optionalFile(value) value
#define _b52e21e8_optionalLine(value) value
#else
typedef struct _b52e21e8_pDevice { _b52e21e8_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _b52e21e8_pDevice(const _b52e21e8_pDevice &) = delete; } _b52e21e8_pDevice;
typedef struct _b52e21e8_pResource { _b52e21e8_pResource(X12Resource* value): value(value) {}; X12Resource* value; _b52e21e8_pResource(const _b52e21e8_pResource &) = delete; } _b52e21e8_pResource;
typedef struct _b52e21e8_pCounterResource { _b52e21e8_pCounterResource(X12Resource* value): value(value) {}; X12Resource* value; _b52e21e8_pCounterResource(const _b52e21e8_pCounterResource &) = delete; } _b52e21e8_pCounterResource;
typedef struct _b52e21e8_pDesc { _b52e21e8_pDesc(D3D12_UNORDERED_ACCESS_VIEW_DESC* value): value(value) {}; D3D12_UNORDERED_ACCESS_VIEW_DESC* value; _b52e21e8_pDesc(const _b52e21e8_pDesc &) = delete; } _b52e21e8_pDesc;
typedef struct _b52e21e8_DestDescriptor { _b52e21e8_DestDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _b52e21e8_DestDescriptor(const _b52e21e8_DestDescriptor &) = delete; } _b52e21e8_DestDescriptor;
typedef struct _b52e21e8_optionalFile { _b52e21e8_optionalFile(char* value): value(value) {}; char* value; _b52e21e8_optionalFile(const _b52e21e8_optionalFile &) = delete; } _b52e21e8_optionalFile;
typedef struct _b52e21e8_optionalLine { _b52e21e8_optionalLine(int value): value(value) {}; int value; _b52e21e8_optionalLine(const _b52e21e8_optionalLine &) = delete; } _b52e21e8_optionalLine;
void np_x12DeviceCreateUnorderedAccessView(_b52e21e8_pDevice & pDevice, _b52e21e8_pResource & pResource, _b52e21e8_pCounterResource & pCounterResource, _b52e21e8_pDesc & pDesc, _b52e21e8_DestDescriptor & DestDescriptor, _b52e21e8_optionalFile & optionalFile, _b52e21e8_optionalLine & optionalLine) {
  x12DeviceCreateUnorderedAccessView(pDevice.value, pResource.value, pCounterResource.value, pDesc.value, DestDescriptor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateShaderResourceView x12DeviceCreateShaderResourceView
#define _74230bad_pDevice(value) value
#define _74230bad_pResource(value) value
#define _74230bad_pDesc(value) value
#define _74230bad_DestDescriptor(value) value
#define _74230bad_optionalFile(value) value
#define _74230bad_optionalLine(value) value
#else
typedef struct _74230bad_pDevice { _74230bad_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _74230bad_pDevice(const _74230bad_pDevice &) = delete; } _74230bad_pDevice;
typedef struct _74230bad_pResource { _74230bad_pResource(X12Resource* value): value(value) {}; X12Resource* value; _74230bad_pResource(const _74230bad_pResource &) = delete; } _74230bad_pResource;
typedef struct _74230bad_pDesc { _74230bad_pDesc(D3D12_SHADER_RESOURCE_VIEW_DESC* value): value(value) {}; D3D12_SHADER_RESOURCE_VIEW_DESC* value; _74230bad_pDesc(const _74230bad_pDesc &) = delete; } _74230bad_pDesc;
typedef struct _74230bad_DestDescriptor { _74230bad_DestDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _74230bad_DestDescriptor(const _74230bad_DestDescriptor &) = delete; } _74230bad_DestDescriptor;
typedef struct _74230bad_optionalFile { _74230bad_optionalFile(char* value): value(value) {}; char* value; _74230bad_optionalFile(const _74230bad_optionalFile &) = delete; } _74230bad_optionalFile;
typedef struct _74230bad_optionalLine { _74230bad_optionalLine(int value): value(value) {}; int value; _74230bad_optionalLine(const _74230bad_optionalLine &) = delete; } _74230bad_optionalLine;
void np_x12DeviceCreateShaderResourceView(_74230bad_pDevice & pDevice, _74230bad_pResource & pResource, _74230bad_pDesc & pDesc, _74230bad_DestDescriptor & DestDescriptor, _74230bad_optionalFile & optionalFile, _74230bad_optionalLine & optionalLine) {
  x12DeviceCreateShaderResourceView(pDevice.value, pResource.value, pDesc.value, DestDescriptor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateConstantBufferView x12DeviceCreateConstantBufferView
#define _26025065_pDevice(value) value
#define _26025065_pDesc(value) value
#define _26025065_DestDescriptor(value) value
#define _26025065_optionalFile(value) value
#define _26025065_optionalLine(value) value
#else
typedef struct _26025065_pDevice { _26025065_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _26025065_pDevice(const _26025065_pDevice &) = delete; } _26025065_pDevice;
typedef struct _26025065_pDesc { _26025065_pDesc(D3D12_CONSTANT_BUFFER_VIEW_DESC* value): value(value) {}; D3D12_CONSTANT_BUFFER_VIEW_DESC* value; _26025065_pDesc(const _26025065_pDesc &) = delete; } _26025065_pDesc;
typedef struct _26025065_DestDescriptor { _26025065_DestDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _26025065_DestDescriptor(const _26025065_DestDescriptor &) = delete; } _26025065_DestDescriptor;
typedef struct _26025065_optionalFile { _26025065_optionalFile(char* value): value(value) {}; char* value; _26025065_optionalFile(const _26025065_optionalFile &) = delete; } _26025065_optionalFile;
typedef struct _26025065_optionalLine { _26025065_optionalLine(int value): value(value) {}; int value; _26025065_optionalLine(const _26025065_optionalLine &) = delete; } _26025065_optionalLine;
void np_x12DeviceCreateConstantBufferView(_26025065_pDevice & pDevice, _26025065_pDesc & pDesc, _26025065_DestDescriptor & DestDescriptor, _26025065_optionalFile & optionalFile, _26025065_optionalLine & optionalLine) {
  x12DeviceCreateConstantBufferView(pDevice.value, pDesc.value, DestDescriptor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateSampler x12DeviceCreateSampler
#define _621dd58e_pDevice(value) value
#define _621dd58e_pDesc(value) value
#define _621dd58e_DestDescriptor(value) value
#define _621dd58e_optionalFile(value) value
#define _621dd58e_optionalLine(value) value
#else
typedef struct _621dd58e_pDevice { _621dd58e_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _621dd58e_pDevice(const _621dd58e_pDevice &) = delete; } _621dd58e_pDevice;
typedef struct _621dd58e_pDesc { _621dd58e_pDesc(D3D12_SAMPLER_DESC* value): value(value) {}; D3D12_SAMPLER_DESC* value; _621dd58e_pDesc(const _621dd58e_pDesc &) = delete; } _621dd58e_pDesc;
typedef struct _621dd58e_DestDescriptor { _621dd58e_DestDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _621dd58e_DestDescriptor(const _621dd58e_DestDescriptor &) = delete; } _621dd58e_DestDescriptor;
typedef struct _621dd58e_optionalFile { _621dd58e_optionalFile(char* value): value(value) {}; char* value; _621dd58e_optionalFile(const _621dd58e_optionalFile &) = delete; } _621dd58e_optionalFile;
typedef struct _621dd58e_optionalLine { _621dd58e_optionalLine(int value): value(value) {}; int value; _621dd58e_optionalLine(const _621dd58e_optionalLine &) = delete; } _621dd58e_optionalLine;
void np_x12DeviceCreateSampler(_621dd58e_pDevice & pDevice, _621dd58e_pDesc & pDesc, _621dd58e_DestDescriptor & DestDescriptor, _621dd58e_optionalFile & optionalFile, _621dd58e_optionalLine & optionalLine) {
  x12DeviceCreateSampler(pDevice.value, pDesc.value, DestDescriptor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateRenderTargetView x12DeviceCreateRenderTargetView
#define _e7e93fc6_pDevice(value) value
#define _e7e93fc6_pResource(value) value
#define _e7e93fc6_pDesc(value) value
#define _e7e93fc6_DestDescriptor(value) value
#define _e7e93fc6_optionalFile(value) value
#define _e7e93fc6_optionalLine(value) value
#else
typedef struct _e7e93fc6_pDevice { _e7e93fc6_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _e7e93fc6_pDevice(const _e7e93fc6_pDevice &) = delete; } _e7e93fc6_pDevice;
typedef struct _e7e93fc6_pResource { _e7e93fc6_pResource(X12Resource* value): value(value) {}; X12Resource* value; _e7e93fc6_pResource(const _e7e93fc6_pResource &) = delete; } _e7e93fc6_pResource;
typedef struct _e7e93fc6_pDesc { _e7e93fc6_pDesc(D3D12_RENDER_TARGET_VIEW_DESC* value): value(value) {}; D3D12_RENDER_TARGET_VIEW_DESC* value; _e7e93fc6_pDesc(const _e7e93fc6_pDesc &) = delete; } _e7e93fc6_pDesc;
typedef struct _e7e93fc6_DestDescriptor { _e7e93fc6_DestDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _e7e93fc6_DestDescriptor(const _e7e93fc6_DestDescriptor &) = delete; } _e7e93fc6_DestDescriptor;
typedef struct _e7e93fc6_optionalFile { _e7e93fc6_optionalFile(char* value): value(value) {}; char* value; _e7e93fc6_optionalFile(const _e7e93fc6_optionalFile &) = delete; } _e7e93fc6_optionalFile;
typedef struct _e7e93fc6_optionalLine { _e7e93fc6_optionalLine(int value): value(value) {}; int value; _e7e93fc6_optionalLine(const _e7e93fc6_optionalLine &) = delete; } _e7e93fc6_optionalLine;
void np_x12DeviceCreateRenderTargetView(_e7e93fc6_pDevice & pDevice, _e7e93fc6_pResource & pResource, _e7e93fc6_pDesc & pDesc, _e7e93fc6_DestDescriptor & DestDescriptor, _e7e93fc6_optionalFile & optionalFile, _e7e93fc6_optionalLine & optionalLine) {
  x12DeviceCreateRenderTargetView(pDevice.value, pResource.value, pDesc.value, DestDescriptor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateDepthStencilView x12DeviceCreateDepthStencilView
#define _a421bcf3_pDevice(value) value
#define _a421bcf3_pResource(value) value
#define _a421bcf3_pDesc(value) value
#define _a421bcf3_DestDescriptor(value) value
#define _a421bcf3_optionalFile(value) value
#define _a421bcf3_optionalLine(value) value
#else
typedef struct _a421bcf3_pDevice { _a421bcf3_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _a421bcf3_pDevice(const _a421bcf3_pDevice &) = delete; } _a421bcf3_pDevice;
typedef struct _a421bcf3_pResource { _a421bcf3_pResource(X12Resource* value): value(value) {}; X12Resource* value; _a421bcf3_pResource(const _a421bcf3_pResource &) = delete; } _a421bcf3_pResource;
typedef struct _a421bcf3_pDesc { _a421bcf3_pDesc(D3D12_DEPTH_STENCIL_VIEW_DESC* value): value(value) {}; D3D12_DEPTH_STENCIL_VIEW_DESC* value; _a421bcf3_pDesc(const _a421bcf3_pDesc &) = delete; } _a421bcf3_pDesc;
typedef struct _a421bcf3_DestDescriptor { _a421bcf3_DestDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _a421bcf3_DestDescriptor(const _a421bcf3_DestDescriptor &) = delete; } _a421bcf3_DestDescriptor;
typedef struct _a421bcf3_optionalFile { _a421bcf3_optionalFile(char* value): value(value) {}; char* value; _a421bcf3_optionalFile(const _a421bcf3_optionalFile &) = delete; } _a421bcf3_optionalFile;
typedef struct _a421bcf3_optionalLine { _a421bcf3_optionalLine(int value): value(value) {}; int value; _a421bcf3_optionalLine(const _a421bcf3_optionalLine &) = delete; } _a421bcf3_optionalLine;
void np_x12DeviceCreateDepthStencilView(_a421bcf3_pDevice & pDevice, _a421bcf3_pResource & pResource, _a421bcf3_pDesc & pDesc, _a421bcf3_DestDescriptor & DestDescriptor, _a421bcf3_optionalFile & optionalFile, _a421bcf3_optionalLine & optionalLine) {
  x12DeviceCreateDepthStencilView(pDevice.value, pResource.value, pDesc.value, DestDescriptor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SerializeRootSignature x12SerializeRootSignature
#define _d103985c_pRootSignature(value) value
#define _d103985c_Version(value) value
#define _d103985c_outpBlob(value) value
#define _d103985c_outpErrorBlob(value) value
#define _d103985c_optionalFile(value) value
#define _d103985c_optionalLine(value) value
#else
typedef struct _d103985c_pRootSignature { _d103985c_pRootSignature(D3D12_ROOT_SIGNATURE_DESC* value): value(value) {}; D3D12_ROOT_SIGNATURE_DESC* value; _d103985c_pRootSignature(const _d103985c_pRootSignature &) = delete; } _d103985c_pRootSignature;
typedef struct _d103985c_Version { _d103985c_Version(D3D_ROOT_SIGNATURE_VERSION value): value(value) {}; D3D_ROOT_SIGNATURE_VERSION value; _d103985c_Version(const _d103985c_Version &) = delete; } _d103985c_Version;
typedef struct _d103985c_outpBlob { _d103985c_outpBlob(X12Blob** value): value(value) {}; X12Blob** value; _d103985c_outpBlob(const _d103985c_outpBlob &) = delete; } _d103985c_outpBlob;
typedef struct _d103985c_outpErrorBlob { _d103985c_outpErrorBlob(X12Blob** value): value(value) {}; X12Blob** value; _d103985c_outpErrorBlob(const _d103985c_outpErrorBlob &) = delete; } _d103985c_outpErrorBlob;
typedef struct _d103985c_optionalFile { _d103985c_optionalFile(char* value): value(value) {}; char* value; _d103985c_optionalFile(const _d103985c_optionalFile &) = delete; } _d103985c_optionalFile;
typedef struct _d103985c_optionalLine { _d103985c_optionalLine(int value): value(value) {}; int value; _d103985c_optionalLine(const _d103985c_optionalLine &) = delete; } _d103985c_optionalLine;
HRESULT np_x12SerializeRootSignature(_d103985c_pRootSignature & pRootSignature, _d103985c_Version & Version, _d103985c_outpBlob & outpBlob, _d103985c_outpErrorBlob & outpErrorBlob, _d103985c_optionalFile & optionalFile, _d103985c_optionalLine & optionalLine) {
  return x12SerializeRootSignature(pRootSignature.value, Version.value, outpBlob.value, outpErrorBlob.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateRootSignature x12DeviceCreateRootSignature
#define _e5a1795e_pDevice(value) value
#define _e5a1795e_nodeMask(value) value
#define _e5a1795e_pBlobWithRootSignature(value) value
#define _e5a1795e_blobLengthInBytes(value) value
#define _e5a1795e_outpRootSignature(value) value
#define _e5a1795e_optionalFile(value) value
#define _e5a1795e_optionalLine(value) value
#else
typedef struct _e5a1795e_pDevice { _e5a1795e_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _e5a1795e_pDevice(const _e5a1795e_pDevice &) = delete; } _e5a1795e_pDevice;
typedef struct _e5a1795e_nodeMask { _e5a1795e_nodeMask(unsigned value): value(value) {}; unsigned value; _e5a1795e_nodeMask(const _e5a1795e_nodeMask &) = delete; } _e5a1795e_nodeMask;
typedef struct _e5a1795e_pBlobWithRootSignature { _e5a1795e_pBlobWithRootSignature(void* value): value(value) {}; void* value; _e5a1795e_pBlobWithRootSignature(const _e5a1795e_pBlobWithRootSignature &) = delete; } _e5a1795e_pBlobWithRootSignature;
typedef struct _e5a1795e_blobLengthInBytes { _e5a1795e_blobLengthInBytes(size_t value): value(value) {}; size_t value; _e5a1795e_blobLengthInBytes(const _e5a1795e_blobLengthInBytes &) = delete; } _e5a1795e_blobLengthInBytes;
typedef struct _e5a1795e_outpRootSignature { _e5a1795e_outpRootSignature(X12RootSignature** value): value(value) {}; X12RootSignature** value; _e5a1795e_outpRootSignature(const _e5a1795e_outpRootSignature &) = delete; } _e5a1795e_outpRootSignature;
typedef struct _e5a1795e_optionalFile { _e5a1795e_optionalFile(char* value): value(value) {}; char* value; _e5a1795e_optionalFile(const _e5a1795e_optionalFile &) = delete; } _e5a1795e_optionalFile;
typedef struct _e5a1795e_optionalLine { _e5a1795e_optionalLine(int value): value(value) {}; int value; _e5a1795e_optionalLine(const _e5a1795e_optionalLine &) = delete; } _e5a1795e_optionalLine;
HRESULT np_x12DeviceCreateRootSignature(_e5a1795e_pDevice & pDevice, _e5a1795e_nodeMask & nodeMask, _e5a1795e_pBlobWithRootSignature & pBlobWithRootSignature, _e5a1795e_blobLengthInBytes & blobLengthInBytes, _e5a1795e_outpRootSignature & outpRootSignature, _e5a1795e_optionalFile & optionalFile, _e5a1795e_optionalLine & optionalLine) {
  return x12DeviceCreateRootSignature(pDevice.value, nodeMask.value, pBlobWithRootSignature.value, blobLengthInBytes.value, outpRootSignature.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateGraphicsPipelineState x12DeviceCreateGraphicsPipelineState
#define _adb03488_pDevice(value) value
#define _adb03488_pDesc(value) value
#define _adb03488_outpPipelineState(value) value
#define _adb03488_optionalFile(value) value
#define _adb03488_optionalLine(value) value
#else
typedef struct _adb03488_pDevice { _adb03488_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _adb03488_pDevice(const _adb03488_pDevice &) = delete; } _adb03488_pDevice;
typedef struct _adb03488_pDesc { _adb03488_pDesc(D3D12_GRAPHICS_PIPELINE_STATE_DESC* value): value(value) {}; D3D12_GRAPHICS_PIPELINE_STATE_DESC* value; _adb03488_pDesc(const _adb03488_pDesc &) = delete; } _adb03488_pDesc;
typedef struct _adb03488_outpPipelineState { _adb03488_outpPipelineState(X12PipelineState** value): value(value) {}; X12PipelineState** value; _adb03488_outpPipelineState(const _adb03488_outpPipelineState &) = delete; } _adb03488_outpPipelineState;
typedef struct _adb03488_optionalFile { _adb03488_optionalFile(char* value): value(value) {}; char* value; _adb03488_optionalFile(const _adb03488_optionalFile &) = delete; } _adb03488_optionalFile;
typedef struct _adb03488_optionalLine { _adb03488_optionalLine(int value): value(value) {}; int value; _adb03488_optionalLine(const _adb03488_optionalLine &) = delete; } _adb03488_optionalLine;
HRESULT np_x12DeviceCreateGraphicsPipelineState(_adb03488_pDevice & pDevice, _adb03488_pDesc & pDesc, _adb03488_outpPipelineState & outpPipelineState, _adb03488_optionalFile & optionalFile, _adb03488_optionalLine & optionalLine) {
  return x12DeviceCreateGraphicsPipelineState(pDevice.value, pDesc.value, outpPipelineState.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateComputePipelineState x12DeviceCreateComputePipelineState
#define _1bece4df_pDevice(value) value
#define _1bece4df_pDesc(value) value
#define _1bece4df_outpPipelineState(value) value
#define _1bece4df_optionalFile(value) value
#define _1bece4df_optionalLine(value) value
#else
typedef struct _1bece4df_pDevice { _1bece4df_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _1bece4df_pDevice(const _1bece4df_pDevice &) = delete; } _1bece4df_pDevice;
typedef struct _1bece4df_pDesc { _1bece4df_pDesc(D3D12_COMPUTE_PIPELINE_STATE_DESC* value): value(value) {}; D3D12_COMPUTE_PIPELINE_STATE_DESC* value; _1bece4df_pDesc(const _1bece4df_pDesc &) = delete; } _1bece4df_pDesc;
typedef struct _1bece4df_outpPipelineState { _1bece4df_outpPipelineState(X12PipelineState** value): value(value) {}; X12PipelineState** value; _1bece4df_outpPipelineState(const _1bece4df_outpPipelineState &) = delete; } _1bece4df_outpPipelineState;
typedef struct _1bece4df_optionalFile { _1bece4df_optionalFile(char* value): value(value) {}; char* value; _1bece4df_optionalFile(const _1bece4df_optionalFile &) = delete; } _1bece4df_optionalFile;
typedef struct _1bece4df_optionalLine { _1bece4df_optionalLine(int value): value(value) {}; int value; _1bece4df_optionalLine(const _1bece4df_optionalLine &) = delete; } _1bece4df_optionalLine;
HRESULT np_x12DeviceCreateComputePipelineState(_1bece4df_pDevice & pDevice, _1bece4df_pDesc & pDesc, _1bece4df_outpPipelineState & outpPipelineState, _1bece4df_optionalFile & optionalFile, _1bece4df_optionalLine & optionalLine) {
  return x12DeviceCreateComputePipelineState(pDevice.value, pDesc.value, outpPipelineState.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateFence x12DeviceCreateFence
#define _4553ea8b_pDevice(value) value
#define _4553ea8b_InitialValue(value) value
#define _4553ea8b_Flags(value) value
#define _4553ea8b_outpFence(value) value
#define _4553ea8b_optionalFile(value) value
#define _4553ea8b_optionalLine(value) value
#else
typedef struct _4553ea8b_pDevice { _4553ea8b_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _4553ea8b_pDevice(const _4553ea8b_pDevice &) = delete; } _4553ea8b_pDevice;
typedef struct _4553ea8b_InitialValue { _4553ea8b_InitialValue(uint64_t value): value(value) {}; uint64_t value; _4553ea8b_InitialValue(const _4553ea8b_InitialValue &) = delete; } _4553ea8b_InitialValue;
typedef struct _4553ea8b_Flags { _4553ea8b_Flags(D3D12_FENCE_FLAGS value): value(value) {}; D3D12_FENCE_FLAGS value; _4553ea8b_Flags(const _4553ea8b_Flags &) = delete; } _4553ea8b_Flags;
typedef struct _4553ea8b_outpFence { _4553ea8b_outpFence(X12Fence** value): value(value) {}; X12Fence** value; _4553ea8b_outpFence(const _4553ea8b_outpFence &) = delete; } _4553ea8b_outpFence;
typedef struct _4553ea8b_optionalFile { _4553ea8b_optionalFile(char* value): value(value) {}; char* value; _4553ea8b_optionalFile(const _4553ea8b_optionalFile &) = delete; } _4553ea8b_optionalFile;
typedef struct _4553ea8b_optionalLine { _4553ea8b_optionalLine(int value): value(value) {}; int value; _4553ea8b_optionalLine(const _4553ea8b_optionalLine &) = delete; } _4553ea8b_optionalLine;
HRESULT np_x12DeviceCreateFence(_4553ea8b_pDevice & pDevice, _4553ea8b_InitialValue & InitialValue, _4553ea8b_Flags & Flags, _4553ea8b_outpFence & outpFence, _4553ea8b_optionalFile & optionalFile, _4553ea8b_optionalLine & optionalLine) {
  return x12DeviceCreateFence(pDevice.value, InitialValue.value, Flags.value, outpFence.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateCommandQueue x12DeviceCreateCommandQueue
#define _d235d8e8_pDevice(value) value
#define _d235d8e8_pDesc(value) value
#define _d235d8e8_outpCommandQueue(value) value
#define _d235d8e8_optionalFile(value) value
#define _d235d8e8_optionalLine(value) value
#else
typedef struct _d235d8e8_pDevice { _d235d8e8_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _d235d8e8_pDevice(const _d235d8e8_pDevice &) = delete; } _d235d8e8_pDevice;
typedef struct _d235d8e8_pDesc { _d235d8e8_pDesc(D3D12_COMMAND_QUEUE_DESC* value): value(value) {}; D3D12_COMMAND_QUEUE_DESC* value; _d235d8e8_pDesc(const _d235d8e8_pDesc &) = delete; } _d235d8e8_pDesc;
typedef struct _d235d8e8_outpCommandQueue { _d235d8e8_outpCommandQueue(X12CommandQueue** value): value(value) {}; X12CommandQueue** value; _d235d8e8_outpCommandQueue(const _d235d8e8_outpCommandQueue &) = delete; } _d235d8e8_outpCommandQueue;
typedef struct _d235d8e8_optionalFile { _d235d8e8_optionalFile(char* value): value(value) {}; char* value; _d235d8e8_optionalFile(const _d235d8e8_optionalFile &) = delete; } _d235d8e8_optionalFile;
typedef struct _d235d8e8_optionalLine { _d235d8e8_optionalLine(int value): value(value) {}; int value; _d235d8e8_optionalLine(const _d235d8e8_optionalLine &) = delete; } _d235d8e8_optionalLine;
HRESULT np_x12DeviceCreateCommandQueue(_d235d8e8_pDevice & pDevice, _d235d8e8_pDesc & pDesc, _d235d8e8_outpCommandQueue & outpCommandQueue, _d235d8e8_optionalFile & optionalFile, _d235d8e8_optionalLine & optionalLine) {
  return x12DeviceCreateCommandQueue(pDevice.value, pDesc.value, outpCommandQueue.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateCommandAllocator x12DeviceCreateCommandAllocator
#define _802b86b6_pDevice(value) value
#define _802b86b6_type(value) value
#define _802b86b6_outpCommandAllocator(value) value
#define _802b86b6_optionalFile(value) value
#define _802b86b6_optionalLine(value) value
#else
typedef struct _802b86b6_pDevice { _802b86b6_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _802b86b6_pDevice(const _802b86b6_pDevice &) = delete; } _802b86b6_pDevice;
typedef struct _802b86b6_type { _802b86b6_type(D3D12_COMMAND_LIST_TYPE value): value(value) {}; D3D12_COMMAND_LIST_TYPE value; _802b86b6_type(const _802b86b6_type &) = delete; } _802b86b6_type;
typedef struct _802b86b6_outpCommandAllocator { _802b86b6_outpCommandAllocator(X12CommandAllocator** value): value(value) {}; X12CommandAllocator** value; _802b86b6_outpCommandAllocator(const _802b86b6_outpCommandAllocator &) = delete; } _802b86b6_outpCommandAllocator;
typedef struct _802b86b6_optionalFile { _802b86b6_optionalFile(char* value): value(value) {}; char* value; _802b86b6_optionalFile(const _802b86b6_optionalFile &) = delete; } _802b86b6_optionalFile;
typedef struct _802b86b6_optionalLine { _802b86b6_optionalLine(int value): value(value) {}; int value; _802b86b6_optionalLine(const _802b86b6_optionalLine &) = delete; } _802b86b6_optionalLine;
HRESULT np_x12DeviceCreateCommandAllocator(_802b86b6_pDevice & pDevice, _802b86b6_type & type, _802b86b6_outpCommandAllocator & outpCommandAllocator, _802b86b6_optionalFile & optionalFile, _802b86b6_optionalLine & optionalLine) {
  return x12DeviceCreateCommandAllocator(pDevice.value, type.value, outpCommandAllocator.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCreateCommandList x12DeviceCreateCommandList
#define _21ed1dca_pDevice(value) value
#define _21ed1dca_nodeMask(value) value
#define _21ed1dca_type(value) value
#define _21ed1dca_pCommandAllocator(value) value
#define _21ed1dca_pInitialState(value) value
#define _21ed1dca_outpCommandList(value) value
#define _21ed1dca_optionalFile(value) value
#define _21ed1dca_optionalLine(value) value
#else
typedef struct _21ed1dca_pDevice { _21ed1dca_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _21ed1dca_pDevice(const _21ed1dca_pDevice &) = delete; } _21ed1dca_pDevice;
typedef struct _21ed1dca_nodeMask { _21ed1dca_nodeMask(unsigned value): value(value) {}; unsigned value; _21ed1dca_nodeMask(const _21ed1dca_nodeMask &) = delete; } _21ed1dca_nodeMask;
typedef struct _21ed1dca_type { _21ed1dca_type(D3D12_COMMAND_LIST_TYPE value): value(value) {}; D3D12_COMMAND_LIST_TYPE value; _21ed1dca_type(const _21ed1dca_type &) = delete; } _21ed1dca_type;
typedef struct _21ed1dca_pCommandAllocator { _21ed1dca_pCommandAllocator(X12CommandAllocator* value): value(value) {}; X12CommandAllocator* value; _21ed1dca_pCommandAllocator(const _21ed1dca_pCommandAllocator &) = delete; } _21ed1dca_pCommandAllocator;
typedef struct _21ed1dca_pInitialState { _21ed1dca_pInitialState(X12PipelineState* value): value(value) {}; X12PipelineState* value; _21ed1dca_pInitialState(const _21ed1dca_pInitialState &) = delete; } _21ed1dca_pInitialState;
typedef struct _21ed1dca_outpCommandList { _21ed1dca_outpCommandList(X12CommandList** value): value(value) {}; X12CommandList** value; _21ed1dca_outpCommandList(const _21ed1dca_outpCommandList &) = delete; } _21ed1dca_outpCommandList;
typedef struct _21ed1dca_optionalFile { _21ed1dca_optionalFile(char* value): value(value) {}; char* value; _21ed1dca_optionalFile(const _21ed1dca_optionalFile &) = delete; } _21ed1dca_optionalFile;
typedef struct _21ed1dca_optionalLine { _21ed1dca_optionalLine(int value): value(value) {}; int value; _21ed1dca_optionalLine(const _21ed1dca_optionalLine &) = delete; } _21ed1dca_optionalLine;
HRESULT np_x12DeviceCreateCommandList(_21ed1dca_pDevice & pDevice, _21ed1dca_nodeMask & nodeMask, _21ed1dca_type & type, _21ed1dca_pCommandAllocator & pCommandAllocator, _21ed1dca_pInitialState & pInitialState, _21ed1dca_outpCommandList & outpCommandList, _21ed1dca_optionalFile & optionalFile, _21ed1dca_optionalLine & optionalLine) {
  return x12DeviceCreateCommandList(pDevice.value, nodeMask.value, type.value, pCommandAllocator.value, pInitialState.value, outpCommandList.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12ResourceGetGPUVirtualAddress x12ResourceGetGPUVirtualAddress
#define _1979ee5b_pResource(value) value
#else
typedef struct _1979ee5b_pResource { _1979ee5b_pResource(X12Resource* value): value(value) {}; X12Resource* value; _1979ee5b_pResource(const _1979ee5b_pResource &) = delete; } _1979ee5b_pResource;
D3D12_GPU_VIRTUAL_ADDRESS np_x12ResourceGetGPUVirtualAddress(_1979ee5b_pResource & pResource) {
  return x12ResourceGetGPUVirtualAddress(pResource.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12PipelineStateGetCachedBlob x12PipelineStateGetCachedBlob
#define _c2338cc5_pPipelineState(value) value
#define _c2338cc5_outpBlob(value) value
#define _c2338cc5_optionalFile(value) value
#define _c2338cc5_optionalLine(value) value
#else
typedef struct _c2338cc5_pPipelineState { _c2338cc5_pPipelineState(X12PipelineState* value): value(value) {}; X12PipelineState* value; _c2338cc5_pPipelineState(const _c2338cc5_pPipelineState &) = delete; } _c2338cc5_pPipelineState;
typedef struct _c2338cc5_outpBlob { _c2338cc5_outpBlob(X12Blob** value): value(value) {}; X12Blob** value; _c2338cc5_outpBlob(const _c2338cc5_outpBlob &) = delete; } _c2338cc5_outpBlob;
typedef struct _c2338cc5_optionalFile { _c2338cc5_optionalFile(char* value): value(value) {}; char* value; _c2338cc5_optionalFile(const _c2338cc5_optionalFile &) = delete; } _c2338cc5_optionalFile;
typedef struct _c2338cc5_optionalLine { _c2338cc5_optionalLine(int value): value(value) {}; int value; _c2338cc5_optionalLine(const _c2338cc5_optionalLine &) = delete; } _c2338cc5_optionalLine;
HRESULT np_x12PipelineStateGetCachedBlob(_c2338cc5_pPipelineState & pPipelineState, _c2338cc5_outpBlob & outpBlob, _c2338cc5_optionalFile & optionalFile, _c2338cc5_optionalLine & optionalLine) {
  return x12PipelineStateGetCachedBlob(pPipelineState.value, outpBlob.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12BlobGetBufferPointer x12BlobGetBufferPointer
#define _e8a0cdc9_pBlob(value) value
#else
typedef struct _e8a0cdc9_pBlob { _e8a0cdc9_pBlob(X12Blob* value): value(value) {}; X12Blob* value; _e8a0cdc9_pBlob(const _e8a0cdc9_pBlob &) = delete; } _e8a0cdc9_pBlob;
void* np_x12BlobGetBufferPointer(_e8a0cdc9_pBlob & pBlob) {
  return x12BlobGetBufferPointer(pBlob.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12BlobGetBufferSize x12BlobGetBufferSize
#define _7e8ade3b_pBlob(value) value
#else
typedef struct _7e8ade3b_pBlob { _7e8ade3b_pBlob(X12Blob* value): value(value) {}; X12Blob* value; _7e8ade3b_pBlob(const _7e8ade3b_pBlob &) = delete; } _7e8ade3b_pBlob;
size_t np_x12BlobGetBufferSize(_7e8ade3b_pBlob & pBlob) {
  return x12BlobGetBufferSize(pBlob.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CreateRootSignatureDeserializer x12CreateRootSignatureDeserializer
#define _b7f00c42_pSrcData(value) value
#define _b7f00c42_SrcDataSizeInBytes(value) value
#define _b7f00c42_outpRootSignatureDeserializer(value) value
#define _b7f00c42_optionalFile(value) value
#define _b7f00c42_optionalLine(value) value
#else
typedef struct _b7f00c42_pSrcData { _b7f00c42_pSrcData(void* value): value(value) {}; void* value; _b7f00c42_pSrcData(const _b7f00c42_pSrcData &) = delete; } _b7f00c42_pSrcData;
typedef struct _b7f00c42_SrcDataSizeInBytes { _b7f00c42_SrcDataSizeInBytes(size_t value): value(value) {}; size_t value; _b7f00c42_SrcDataSizeInBytes(const _b7f00c42_SrcDataSizeInBytes &) = delete; } _b7f00c42_SrcDataSizeInBytes;
typedef struct _b7f00c42_outpRootSignatureDeserializer { _b7f00c42_outpRootSignatureDeserializer(X12RootSignatureDeserializer** value): value(value) {}; X12RootSignatureDeserializer** value; _b7f00c42_outpRootSignatureDeserializer(const _b7f00c42_outpRootSignatureDeserializer &) = delete; } _b7f00c42_outpRootSignatureDeserializer;
typedef struct _b7f00c42_optionalFile { _b7f00c42_optionalFile(char* value): value(value) {}; char* value; _b7f00c42_optionalFile(const _b7f00c42_optionalFile &) = delete; } _b7f00c42_optionalFile;
typedef struct _b7f00c42_optionalLine { _b7f00c42_optionalLine(int value): value(value) {}; int value; _b7f00c42_optionalLine(const _b7f00c42_optionalLine &) = delete; } _b7f00c42_optionalLine;
HRESULT np_x12CreateRootSignatureDeserializer(_b7f00c42_pSrcData & pSrcData, _b7f00c42_SrcDataSizeInBytes & SrcDataSizeInBytes, _b7f00c42_outpRootSignatureDeserializer & outpRootSignatureDeserializer, _b7f00c42_optionalFile & optionalFile, _b7f00c42_optionalLine & optionalLine) {
  return x12CreateRootSignatureDeserializer(pSrcData.value, SrcDataSizeInBytes.value, outpRootSignatureDeserializer.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12RootSignatureDeserializerGetRootSignatureDesc x12RootSignatureDeserializerGetRootSignatureDesc
#define _1d33eb6c_pRootSignatureDeserializer(value) value
#define _1d33eb6c_optionalFile(value) value
#define _1d33eb6c_optionalLine(value) value
#else
typedef struct _1d33eb6c_pRootSignatureDeserializer { _1d33eb6c_pRootSignatureDeserializer(X12RootSignatureDeserializer* value): value(value) {}; X12RootSignatureDeserializer* value; _1d33eb6c_pRootSignatureDeserializer(const _1d33eb6c_pRootSignatureDeserializer &) = delete; } _1d33eb6c_pRootSignatureDeserializer;
typedef struct _1d33eb6c_optionalFile { _1d33eb6c_optionalFile(char* value): value(value) {}; char* value; _1d33eb6c_optionalFile(const _1d33eb6c_optionalFile &) = delete; } _1d33eb6c_optionalFile;
typedef struct _1d33eb6c_optionalLine { _1d33eb6c_optionalLine(int value): value(value) {}; int value; _1d33eb6c_optionalLine(const _1d33eb6c_optionalLine &) = delete; } _1d33eb6c_optionalLine;
const D3D12_ROOT_SIGNATURE_DESC* np_x12RootSignatureDeserializerGetRootSignatureDesc(_1d33eb6c_pRootSignatureDeserializer & pRootSignatureDeserializer, _1d33eb6c_optionalFile & optionalFile, _1d33eb6c_optionalLine & optionalLine) {
  return x12RootSignatureDeserializerGetRootSignatureDesc(pRootSignatureDeserializer.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FenceGetCompletedValue x12FenceGetCompletedValue
#define _5dc96348_pFence(value) value
#define _5dc96348_optionalFile(value) value
#define _5dc96348_optionalLine(value) value
#else
typedef struct _5dc96348_pFence { _5dc96348_pFence(X12Fence* value): value(value) {}; X12Fence* value; _5dc96348_pFence(const _5dc96348_pFence &) = delete; } _5dc96348_pFence;
typedef struct _5dc96348_optionalFile { _5dc96348_optionalFile(char* value): value(value) {}; char* value; _5dc96348_optionalFile(const _5dc96348_optionalFile &) = delete; } _5dc96348_optionalFile;
typedef struct _5dc96348_optionalLine { _5dc96348_optionalLine(int value): value(value) {}; int value; _5dc96348_optionalLine(const _5dc96348_optionalLine &) = delete; } _5dc96348_optionalLine;
uint64_t np_x12FenceGetCompletedValue(_5dc96348_pFence & pFence, _5dc96348_optionalFile & optionalFile, _5dc96348_optionalLine & optionalLine) {
  return x12FenceGetCompletedValue(pFence.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FenceSetEventOnCompletion x12FenceSetEventOnCompletion
#define _797d8eba_pFence(value) value
#define _797d8eba_Value(value) value
#define _797d8eba_hEvent(value) value
#define _797d8eba_optionalFile(value) value
#define _797d8eba_optionalLine(value) value
#else
typedef struct _797d8eba_pFence { _797d8eba_pFence(X12Fence* value): value(value) {}; X12Fence* value; _797d8eba_pFence(const _797d8eba_pFence &) = delete; } _797d8eba_pFence;
typedef struct _797d8eba_Value { _797d8eba_Value(uint64_t value): value(value) {}; uint64_t value; _797d8eba_Value(const _797d8eba_Value &) = delete; } _797d8eba_Value;
typedef struct _797d8eba_hEvent { _797d8eba_hEvent(void* value): value(value) {}; void* value; _797d8eba_hEvent(const _797d8eba_hEvent &) = delete; } _797d8eba_hEvent;
typedef struct _797d8eba_optionalFile { _797d8eba_optionalFile(char* value): value(value) {}; char* value; _797d8eba_optionalFile(const _797d8eba_optionalFile &) = delete; } _797d8eba_optionalFile;
typedef struct _797d8eba_optionalLine { _797d8eba_optionalLine(int value): value(value) {}; int value; _797d8eba_optionalLine(const _797d8eba_optionalLine &) = delete; } _797d8eba_optionalLine;
HRESULT np_x12FenceSetEventOnCompletion(_797d8eba_pFence & pFence, _797d8eba_Value & Value, _797d8eba_hEvent & hEvent, _797d8eba_optionalFile & optionalFile, _797d8eba_optionalLine & optionalLine) {
  return x12FenceSetEventOnCompletion(pFence.value, Value.value, hEvent.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceSetEventOnMultipleFenceCompletion x12DeviceSetEventOnMultipleFenceCompletion
#define _955dbbfa_pDevice(value) value
#define _955dbbfa_ppFences(value) value
#define _955dbbfa_pFenceValues(value) value
#define _955dbbfa_NumFences(value) value
#define _955dbbfa_Flag(value) value
#define _955dbbfa_hEvent(value) value
#define _955dbbfa_optionalFile(value) value
#define _955dbbfa_optionalLine(value) value
#else
typedef struct _955dbbfa_pDevice { _955dbbfa_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _955dbbfa_pDevice(const _955dbbfa_pDevice &) = delete; } _955dbbfa_pDevice;
typedef struct _955dbbfa_ppFences { _955dbbfa_ppFences(const X12Fence** value): value(value) {}; const X12Fence** value; _955dbbfa_ppFences(const _955dbbfa_ppFences &) = delete; } _955dbbfa_ppFences;
typedef struct _955dbbfa_pFenceValues { _955dbbfa_pFenceValues(uint64_t* value): value(value) {}; uint64_t* value; _955dbbfa_pFenceValues(const _955dbbfa_pFenceValues &) = delete; } _955dbbfa_pFenceValues;
typedef struct _955dbbfa_NumFences { _955dbbfa_NumFences(unsigned value): value(value) {}; unsigned value; _955dbbfa_NumFences(const _955dbbfa_NumFences &) = delete; } _955dbbfa_NumFences;
typedef struct _955dbbfa_Flag { _955dbbfa_Flag(D3D12_MULTIPLE_FENCE_WAIT_FLAG value): value(value) {}; D3D12_MULTIPLE_FENCE_WAIT_FLAG value; _955dbbfa_Flag(const _955dbbfa_Flag &) = delete; } _955dbbfa_Flag;
typedef struct _955dbbfa_hEvent { _955dbbfa_hEvent(void* value): value(value) {}; void* value; _955dbbfa_hEvent(const _955dbbfa_hEvent &) = delete; } _955dbbfa_hEvent;
typedef struct _955dbbfa_optionalFile { _955dbbfa_optionalFile(char* value): value(value) {}; char* value; _955dbbfa_optionalFile(const _955dbbfa_optionalFile &) = delete; } _955dbbfa_optionalFile;
typedef struct _955dbbfa_optionalLine { _955dbbfa_optionalLine(int value): value(value) {}; int value; _955dbbfa_optionalLine(const _955dbbfa_optionalLine &) = delete; } _955dbbfa_optionalLine;
HRESULT np_x12DeviceSetEventOnMultipleFenceCompletion(_955dbbfa_pDevice & pDevice, _955dbbfa_ppFences & ppFences, _955dbbfa_pFenceValues & pFenceValues, _955dbbfa_NumFences & NumFences, _955dbbfa_Flag & Flag, _955dbbfa_hEvent & hEvent, _955dbbfa_optionalFile & optionalFile, _955dbbfa_optionalLine & optionalLine) {
  return x12DeviceSetEventOnMultipleFenceCompletion(pDevice.value, ppFences.value, pFenceValues.value, NumFences.value, Flag.value, hEvent.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FenceSignal x12FenceSignal
#define _5bab8e55_pFence(value) value
#define _5bab8e55_Value(value) value
#define _5bab8e55_optionalFile(value) value
#define _5bab8e55_optionalLine(value) value
#else
typedef struct _5bab8e55_pFence { _5bab8e55_pFence(X12Fence* value): value(value) {}; X12Fence* value; _5bab8e55_pFence(const _5bab8e55_pFence &) = delete; } _5bab8e55_pFence;
typedef struct _5bab8e55_Value { _5bab8e55_Value(uint64_t value): value(value) {}; uint64_t value; _5bab8e55_Value(const _5bab8e55_Value &) = delete; } _5bab8e55_Value;
typedef struct _5bab8e55_optionalFile { _5bab8e55_optionalFile(char* value): value(value) {}; char* value; _5bab8e55_optionalFile(const _5bab8e55_optionalFile &) = delete; } _5bab8e55_optionalFile;
typedef struct _5bab8e55_optionalLine { _5bab8e55_optionalLine(int value): value(value) {}; int value; _5bab8e55_optionalLine(const _5bab8e55_optionalLine &) = delete; } _5bab8e55_optionalLine;
HRESULT np_x12FenceSignal(_5bab8e55_pFence & pFence, _5bab8e55_Value & Value, _5bab8e55_optionalFile & optionalFile, _5bab8e55_optionalLine & optionalLine) {
  return x12FenceSignal(pFence.value, Value.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandAllocatorReset x12CommandAllocatorReset
#define _57fddeab_pCommandAllocator(value) value
#define _57fddeab_optionalFile(value) value
#define _57fddeab_optionalLine(value) value
#else
typedef struct _57fddeab_pCommandAllocator { _57fddeab_pCommandAllocator(X12CommandAllocator* value): value(value) {}; X12CommandAllocator* value; _57fddeab_pCommandAllocator(const _57fddeab_pCommandAllocator &) = delete; } _57fddeab_pCommandAllocator;
typedef struct _57fddeab_optionalFile { _57fddeab_optionalFile(char* value): value(value) {}; char* value; _57fddeab_optionalFile(const _57fddeab_optionalFile &) = delete; } _57fddeab_optionalFile;
typedef struct _57fddeab_optionalLine { _57fddeab_optionalLine(int value): value(value) {}; int value; _57fddeab_optionalLine(const _57fddeab_optionalLine &) = delete; } _57fddeab_optionalLine;
HRESULT np_x12CommandAllocatorReset(_57fddeab_pCommandAllocator & pCommandAllocator, _57fddeab_optionalFile & optionalFile, _57fddeab_optionalLine & optionalLine) {
  return x12CommandAllocatorReset(pCommandAllocator.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListReset x12CommandListReset
#define _9b1ec6b0_pCommandList(value) value
#define _9b1ec6b0_pAllocator(value) value
#define _9b1ec6b0_pInitialState(value) value
#define _9b1ec6b0_optionalFile(value) value
#define _9b1ec6b0_optionalLine(value) value
#else
typedef struct _9b1ec6b0_pCommandList { _9b1ec6b0_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _9b1ec6b0_pCommandList(const _9b1ec6b0_pCommandList &) = delete; } _9b1ec6b0_pCommandList;
typedef struct _9b1ec6b0_pAllocator { _9b1ec6b0_pAllocator(X12CommandAllocator* value): value(value) {}; X12CommandAllocator* value; _9b1ec6b0_pAllocator(const _9b1ec6b0_pAllocator &) = delete; } _9b1ec6b0_pAllocator;
typedef struct _9b1ec6b0_pInitialState { _9b1ec6b0_pInitialState(X12PipelineState* value): value(value) {}; X12PipelineState* value; _9b1ec6b0_pInitialState(const _9b1ec6b0_pInitialState &) = delete; } _9b1ec6b0_pInitialState;
typedef struct _9b1ec6b0_optionalFile { _9b1ec6b0_optionalFile(char* value): value(value) {}; char* value; _9b1ec6b0_optionalFile(const _9b1ec6b0_optionalFile &) = delete; } _9b1ec6b0_optionalFile;
typedef struct _9b1ec6b0_optionalLine { _9b1ec6b0_optionalLine(int value): value(value) {}; int value; _9b1ec6b0_optionalLine(const _9b1ec6b0_optionalLine &) = delete; } _9b1ec6b0_optionalLine;
HRESULT np_x12CommandListReset(_9b1ec6b0_pCommandList & pCommandList, _9b1ec6b0_pAllocator & pAllocator, _9b1ec6b0_pInitialState & pInitialState, _9b1ec6b0_optionalFile & optionalFile, _9b1ec6b0_optionalLine & optionalLine) {
  return x12CommandListReset(pCommandList.value, pAllocator.value, pInitialState.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListClose x12CommandListClose
#define _5c0a95bb_pCommandList(value) value
#define _5c0a95bb_optionalFile(value) value
#define _5c0a95bb_optionalLine(value) value
#else
typedef struct _5c0a95bb_pCommandList { _5c0a95bb_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _5c0a95bb_pCommandList(const _5c0a95bb_pCommandList &) = delete; } _5c0a95bb_pCommandList;
typedef struct _5c0a95bb_optionalFile { _5c0a95bb_optionalFile(char* value): value(value) {}; char* value; _5c0a95bb_optionalFile(const _5c0a95bb_optionalFile &) = delete; } _5c0a95bb_optionalFile;
typedef struct _5c0a95bb_optionalLine { _5c0a95bb_optionalLine(int value): value(value) {}; int value; _5c0a95bb_optionalLine(const _5c0a95bb_optionalLine &) = delete; } _5c0a95bb_optionalLine;
HRESULT np_x12CommandListClose(_5c0a95bb_pCommandList & pCommandList, _5c0a95bb_optionalFile & optionalFile, _5c0a95bb_optionalLine & optionalLine) {
  return x12CommandListClose(pCommandList.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListCopyBufferRegion x12CommandListCopyBufferRegion
#define _0315fd19_pCommandList(value) value
#define _0315fd19_pDstBuffer(value) value
#define _0315fd19_DstOffset(value) value
#define _0315fd19_pSrcBuffer(value) value
#define _0315fd19_SrcOffset(value) value
#define _0315fd19_NumBytes(value) value
#else
typedef struct _0315fd19_pCommandList { _0315fd19_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _0315fd19_pCommandList(const _0315fd19_pCommandList &) = delete; } _0315fd19_pCommandList;
typedef struct _0315fd19_pDstBuffer { _0315fd19_pDstBuffer(X12Resource* value): value(value) {}; X12Resource* value; _0315fd19_pDstBuffer(const _0315fd19_pDstBuffer &) = delete; } _0315fd19_pDstBuffer;
typedef struct _0315fd19_DstOffset { _0315fd19_DstOffset(uint64_t value): value(value) {}; uint64_t value; _0315fd19_DstOffset(const _0315fd19_DstOffset &) = delete; } _0315fd19_DstOffset;
typedef struct _0315fd19_pSrcBuffer { _0315fd19_pSrcBuffer(X12Resource* value): value(value) {}; X12Resource* value; _0315fd19_pSrcBuffer(const _0315fd19_pSrcBuffer &) = delete; } _0315fd19_pSrcBuffer;
typedef struct _0315fd19_SrcOffset { _0315fd19_SrcOffset(uint64_t value): value(value) {}; uint64_t value; _0315fd19_SrcOffset(const _0315fd19_SrcOffset &) = delete; } _0315fd19_SrcOffset;
typedef struct _0315fd19_NumBytes { _0315fd19_NumBytes(uint64_t value): value(value) {}; uint64_t value; _0315fd19_NumBytes(const _0315fd19_NumBytes &) = delete; } _0315fd19_NumBytes;
void np_x12CommandListCopyBufferRegion(_0315fd19_pCommandList & pCommandList, _0315fd19_pDstBuffer & pDstBuffer, _0315fd19_DstOffset & DstOffset, _0315fd19_pSrcBuffer & pSrcBuffer, _0315fd19_SrcOffset & SrcOffset, _0315fd19_NumBytes & NumBytes) {
  x12CommandListCopyBufferRegion(pCommandList.value, pDstBuffer.value, DstOffset.value, pSrcBuffer.value, SrcOffset.value, NumBytes.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListClearUnorderedAccessViewUint x12CommandListClearUnorderedAccessViewUint
#define _6dc5b77b_pCommandList(value) value
#define _6dc5b77b_ViewGPUHandleInCurrentHeap(value) value
#define _6dc5b77b_ViewCPUHandle(value) value
#define _6dc5b77b_pResource(value) value
#define _6dc5b77b_Values(value) value
#define _6dc5b77b_NumRects(value) value
#define _6dc5b77b_pRects(value) value
#else
typedef struct _6dc5b77b_pCommandList { _6dc5b77b_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _6dc5b77b_pCommandList(const _6dc5b77b_pCommandList &) = delete; } _6dc5b77b_pCommandList;
typedef struct _6dc5b77b_ViewGPUHandleInCurrentHeap { _6dc5b77b_ViewGPUHandleInCurrentHeap(D3D12_GPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_GPU_DESCRIPTOR_HANDLE value; _6dc5b77b_ViewGPUHandleInCurrentHeap(const _6dc5b77b_ViewGPUHandleInCurrentHeap &) = delete; } _6dc5b77b_ViewGPUHandleInCurrentHeap;
typedef struct _6dc5b77b_ViewCPUHandle { _6dc5b77b_ViewCPUHandle(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _6dc5b77b_ViewCPUHandle(const _6dc5b77b_ViewCPUHandle &) = delete; } _6dc5b77b_ViewCPUHandle;
typedef struct _6dc5b77b_pResource { _6dc5b77b_pResource(X12Resource* value): value(value) {}; X12Resource* value; _6dc5b77b_pResource(const _6dc5b77b_pResource &) = delete; } _6dc5b77b_pResource;
typedef struct _6dc5b77b_Values { _6dc5b77b_Values(unsigned* value): value(value) {}; unsigned* value; _6dc5b77b_Values(const _6dc5b77b_Values &) = delete; } _6dc5b77b_Values;
typedef struct _6dc5b77b_NumRects { _6dc5b77b_NumRects(unsigned value): value(value) {}; unsigned value; _6dc5b77b_NumRects(const _6dc5b77b_NumRects &) = delete; } _6dc5b77b_NumRects;
typedef struct _6dc5b77b_pRects { _6dc5b77b_pRects(D3D12_RECT* value): value(value) {}; D3D12_RECT* value; _6dc5b77b_pRects(const _6dc5b77b_pRects &) = delete; } _6dc5b77b_pRects;
void np_x12CommandListClearUnorderedAccessViewUint(_6dc5b77b_pCommandList & pCommandList, _6dc5b77b_ViewGPUHandleInCurrentHeap & ViewGPUHandleInCurrentHeap, _6dc5b77b_ViewCPUHandle & ViewCPUHandle, _6dc5b77b_pResource & pResource, _6dc5b77b_Values & Values, _6dc5b77b_NumRects & NumRects, _6dc5b77b_pRects & pRects) {
  x12CommandListClearUnorderedAccessViewUint(pCommandList.value, ViewGPUHandleInCurrentHeap.value, ViewCPUHandle.value, pResource.value, Values.value, NumRects.value, pRects.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListClearUnorderedAccessViewFloat x12CommandListClearUnorderedAccessViewFloat
#define _7cf3fec3_pCommandList(value) value
#define _7cf3fec3_ViewGPUHandleInCurrentHeap(value) value
#define _7cf3fec3_ViewCPUHandle(value) value
#define _7cf3fec3_pResource(value) value
#define _7cf3fec3_Values(value) value
#define _7cf3fec3_NumRects(value) value
#define _7cf3fec3_pRects(value) value
#else
typedef struct _7cf3fec3_pCommandList { _7cf3fec3_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _7cf3fec3_pCommandList(const _7cf3fec3_pCommandList &) = delete; } _7cf3fec3_pCommandList;
typedef struct _7cf3fec3_ViewGPUHandleInCurrentHeap { _7cf3fec3_ViewGPUHandleInCurrentHeap(D3D12_GPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_GPU_DESCRIPTOR_HANDLE value; _7cf3fec3_ViewGPUHandleInCurrentHeap(const _7cf3fec3_ViewGPUHandleInCurrentHeap &) = delete; } _7cf3fec3_ViewGPUHandleInCurrentHeap;
typedef struct _7cf3fec3_ViewCPUHandle { _7cf3fec3_ViewCPUHandle(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _7cf3fec3_ViewCPUHandle(const _7cf3fec3_ViewCPUHandle &) = delete; } _7cf3fec3_ViewCPUHandle;
typedef struct _7cf3fec3_pResource { _7cf3fec3_pResource(X12Resource* value): value(value) {}; X12Resource* value; _7cf3fec3_pResource(const _7cf3fec3_pResource &) = delete; } _7cf3fec3_pResource;
typedef struct _7cf3fec3_Values { _7cf3fec3_Values(float* value): value(value) {}; float* value; _7cf3fec3_Values(const _7cf3fec3_Values &) = delete; } _7cf3fec3_Values;
typedef struct _7cf3fec3_NumRects { _7cf3fec3_NumRects(unsigned value): value(value) {}; unsigned value; _7cf3fec3_NumRects(const _7cf3fec3_NumRects &) = delete; } _7cf3fec3_NumRects;
typedef struct _7cf3fec3_pRects { _7cf3fec3_pRects(D3D12_RECT* value): value(value) {}; D3D12_RECT* value; _7cf3fec3_pRects(const _7cf3fec3_pRects &) = delete; } _7cf3fec3_pRects;
void np_x12CommandListClearUnorderedAccessViewFloat(_7cf3fec3_pCommandList & pCommandList, _7cf3fec3_ViewGPUHandleInCurrentHeap & ViewGPUHandleInCurrentHeap, _7cf3fec3_ViewCPUHandle & ViewCPUHandle, _7cf3fec3_pResource & pResource, _7cf3fec3_Values & Values, _7cf3fec3_NumRects & NumRects, _7cf3fec3_pRects & pRects) {
  x12CommandListClearUnorderedAccessViewFloat(pCommandList.value, ViewGPUHandleInCurrentHeap.value, ViewCPUHandle.value, pResource.value, Values.value, NumRects.value, pRects.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListDrawInstanced x12CommandListDrawInstanced
#define _649f103c_pCommandList(value) value
#define _649f103c_VertexCountPerInstance(value) value
#define _649f103c_InstanceCount(value) value
#define _649f103c_StartVertexLocation(value) value
#define _649f103c_StartInstanceLocation(value) value
#else
typedef struct _649f103c_pCommandList { _649f103c_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _649f103c_pCommandList(const _649f103c_pCommandList &) = delete; } _649f103c_pCommandList;
typedef struct _649f103c_VertexCountPerInstance { _649f103c_VertexCountPerInstance(unsigned value): value(value) {}; unsigned value; _649f103c_VertexCountPerInstance(const _649f103c_VertexCountPerInstance &) = delete; } _649f103c_VertexCountPerInstance;
typedef struct _649f103c_InstanceCount { _649f103c_InstanceCount(unsigned value): value(value) {}; unsigned value; _649f103c_InstanceCount(const _649f103c_InstanceCount &) = delete; } _649f103c_InstanceCount;
typedef struct _649f103c_StartVertexLocation { _649f103c_StartVertexLocation(unsigned value): value(value) {}; unsigned value; _649f103c_StartVertexLocation(const _649f103c_StartVertexLocation &) = delete; } _649f103c_StartVertexLocation;
typedef struct _649f103c_StartInstanceLocation { _649f103c_StartInstanceLocation(unsigned value): value(value) {}; unsigned value; _649f103c_StartInstanceLocation(const _649f103c_StartInstanceLocation &) = delete; } _649f103c_StartInstanceLocation;
void np_x12CommandListDrawInstanced(_649f103c_pCommandList & pCommandList, _649f103c_VertexCountPerInstance & VertexCountPerInstance, _649f103c_InstanceCount & InstanceCount, _649f103c_StartVertexLocation & StartVertexLocation, _649f103c_StartInstanceLocation & StartInstanceLocation) {
  x12CommandListDrawInstanced(pCommandList.value, VertexCountPerInstance.value, InstanceCount.value, StartVertexLocation.value, StartInstanceLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListDrawIndexedInstanced x12CommandListDrawIndexedInstanced
#define _bff9a01f_pCommandList(value) value
#define _bff9a01f_IndexCountPerInstance(value) value
#define _bff9a01f_InstanceCount(value) value
#define _bff9a01f_StartIndexLocation(value) value
#define _bff9a01f_BaseVertexLocation(value) value
#define _bff9a01f_StartInstanceLocation(value) value
#else
typedef struct _bff9a01f_pCommandList { _bff9a01f_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _bff9a01f_pCommandList(const _bff9a01f_pCommandList &) = delete; } _bff9a01f_pCommandList;
typedef struct _bff9a01f_IndexCountPerInstance { _bff9a01f_IndexCountPerInstance(unsigned value): value(value) {}; unsigned value; _bff9a01f_IndexCountPerInstance(const _bff9a01f_IndexCountPerInstance &) = delete; } _bff9a01f_IndexCountPerInstance;
typedef struct _bff9a01f_InstanceCount { _bff9a01f_InstanceCount(unsigned value): value(value) {}; unsigned value; _bff9a01f_InstanceCount(const _bff9a01f_InstanceCount &) = delete; } _bff9a01f_InstanceCount;
typedef struct _bff9a01f_StartIndexLocation { _bff9a01f_StartIndexLocation(unsigned value): value(value) {}; unsigned value; _bff9a01f_StartIndexLocation(const _bff9a01f_StartIndexLocation &) = delete; } _bff9a01f_StartIndexLocation;
typedef struct _bff9a01f_BaseVertexLocation { _bff9a01f_BaseVertexLocation(int value): value(value) {}; int value; _bff9a01f_BaseVertexLocation(const _bff9a01f_BaseVertexLocation &) = delete; } _bff9a01f_BaseVertexLocation;
typedef struct _bff9a01f_StartInstanceLocation { _bff9a01f_StartInstanceLocation(unsigned value): value(value) {}; unsigned value; _bff9a01f_StartInstanceLocation(const _bff9a01f_StartInstanceLocation &) = delete; } _bff9a01f_StartInstanceLocation;
void np_x12CommandListDrawIndexedInstanced(_bff9a01f_pCommandList & pCommandList, _bff9a01f_IndexCountPerInstance & IndexCountPerInstance, _bff9a01f_InstanceCount & InstanceCount, _bff9a01f_StartIndexLocation & StartIndexLocation, _bff9a01f_BaseVertexLocation & BaseVertexLocation, _bff9a01f_StartInstanceLocation & StartInstanceLocation) {
  x12CommandListDrawIndexedInstanced(pCommandList.value, IndexCountPerInstance.value, InstanceCount.value, StartIndexLocation.value, BaseVertexLocation.value, StartInstanceLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListDispatch x12CommandListDispatch
#define _19b8763f_pCommandList(value) value
#define _19b8763f_ThreadGroupCountX(value) value
#define _19b8763f_ThreadGroupCountY(value) value
#define _19b8763f_ThreadGroupCountZ(value) value
#else
typedef struct _19b8763f_pCommandList { _19b8763f_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _19b8763f_pCommandList(const _19b8763f_pCommandList &) = delete; } _19b8763f_pCommandList;
typedef struct _19b8763f_ThreadGroupCountX { _19b8763f_ThreadGroupCountX(unsigned value): value(value) {}; unsigned value; _19b8763f_ThreadGroupCountX(const _19b8763f_ThreadGroupCountX &) = delete; } _19b8763f_ThreadGroupCountX;
typedef struct _19b8763f_ThreadGroupCountY { _19b8763f_ThreadGroupCountY(unsigned value): value(value) {}; unsigned value; _19b8763f_ThreadGroupCountY(const _19b8763f_ThreadGroupCountY &) = delete; } _19b8763f_ThreadGroupCountY;
typedef struct _19b8763f_ThreadGroupCountZ { _19b8763f_ThreadGroupCountZ(unsigned value): value(value) {}; unsigned value; _19b8763f_ThreadGroupCountZ(const _19b8763f_ThreadGroupCountZ &) = delete; } _19b8763f_ThreadGroupCountZ;
void np_x12CommandListDispatch(_19b8763f_pCommandList & pCommandList, _19b8763f_ThreadGroupCountX & ThreadGroupCountX, _19b8763f_ThreadGroupCountY & ThreadGroupCountY, _19b8763f_ThreadGroupCountZ & ThreadGroupCountZ) {
  x12CommandListDispatch(pCommandList.value, ThreadGroupCountX.value, ThreadGroupCountY.value, ThreadGroupCountZ.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetDescriptorHeaps x12CommandListSetDescriptorHeaps
#define _8486bd6e_pCommandList(value) value
#define _8486bd6e_NumDescriptorHeaps(value) value
#define _8486bd6e_ppDescriptorHeaps(value) value
#else
typedef struct _8486bd6e_pCommandList { _8486bd6e_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _8486bd6e_pCommandList(const _8486bd6e_pCommandList &) = delete; } _8486bd6e_pCommandList;
typedef struct _8486bd6e_NumDescriptorHeaps { _8486bd6e_NumDescriptorHeaps(unsigned value): value(value) {}; unsigned value; _8486bd6e_NumDescriptorHeaps(const _8486bd6e_NumDescriptorHeaps &) = delete; } _8486bd6e_NumDescriptorHeaps;
typedef struct _8486bd6e_ppDescriptorHeaps { _8486bd6e_ppDescriptorHeaps(const X12DescriptorHeap** value): value(value) {}; const X12DescriptorHeap** value; _8486bd6e_ppDescriptorHeaps(const _8486bd6e_ppDescriptorHeaps &) = delete; } _8486bd6e_ppDescriptorHeaps;
void np_x12CommandListSetDescriptorHeaps(_8486bd6e_pCommandList & pCommandList, _8486bd6e_NumDescriptorHeaps & NumDescriptorHeaps, _8486bd6e_ppDescriptorHeaps & ppDescriptorHeaps) {
  x12CommandListSetDescriptorHeaps(pCommandList.value, NumDescriptorHeaps.value, ppDescriptorHeaps.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRootSignature x12CommandListSetGraphicsRootSignature
#define _4572b4c5_pCommandList(value) value
#define _4572b4c5_pRootSignature(value) value
#else
typedef struct _4572b4c5_pCommandList { _4572b4c5_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _4572b4c5_pCommandList(const _4572b4c5_pCommandList &) = delete; } _4572b4c5_pCommandList;
typedef struct _4572b4c5_pRootSignature { _4572b4c5_pRootSignature(X12RootSignature* value): value(value) {}; X12RootSignature* value; _4572b4c5_pRootSignature(const _4572b4c5_pRootSignature &) = delete; } _4572b4c5_pRootSignature;
void np_x12CommandListSetGraphicsRootSignature(_4572b4c5_pCommandList & pCommandList, _4572b4c5_pRootSignature & pRootSignature) {
  x12CommandListSetGraphicsRootSignature(pCommandList.value, pRootSignature.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRoot32BitConstant x12CommandListSetGraphicsRoot32BitConstant
#define _c5dd0fe0_pCommandList(value) value
#define _c5dd0fe0_RootParameterIndex(value) value
#define _c5dd0fe0_SrcData(value) value
#define _c5dd0fe0_DestOffsetIn32BitValues(value) value
#else
typedef struct _c5dd0fe0_pCommandList { _c5dd0fe0_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _c5dd0fe0_pCommandList(const _c5dd0fe0_pCommandList &) = delete; } _c5dd0fe0_pCommandList;
typedef struct _c5dd0fe0_RootParameterIndex { _c5dd0fe0_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _c5dd0fe0_RootParameterIndex(const _c5dd0fe0_RootParameterIndex &) = delete; } _c5dd0fe0_RootParameterIndex;
typedef struct _c5dd0fe0_SrcData { _c5dd0fe0_SrcData(unsigned value): value(value) {}; unsigned value; _c5dd0fe0_SrcData(const _c5dd0fe0_SrcData &) = delete; } _c5dd0fe0_SrcData;
typedef struct _c5dd0fe0_DestOffsetIn32BitValues { _c5dd0fe0_DestOffsetIn32BitValues(unsigned value): value(value) {}; unsigned value; _c5dd0fe0_DestOffsetIn32BitValues(const _c5dd0fe0_DestOffsetIn32BitValues &) = delete; } _c5dd0fe0_DestOffsetIn32BitValues;
void np_x12CommandListSetGraphicsRoot32BitConstant(_c5dd0fe0_pCommandList & pCommandList, _c5dd0fe0_RootParameterIndex & RootParameterIndex, _c5dd0fe0_SrcData & SrcData, _c5dd0fe0_DestOffsetIn32BitValues & DestOffsetIn32BitValues) {
  x12CommandListSetGraphicsRoot32BitConstant(pCommandList.value, RootParameterIndex.value, SrcData.value, DestOffsetIn32BitValues.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRoot32BitConstants x12CommandListSetGraphicsRoot32BitConstants
#define _c13e935f_pCommandList(value) value
#define _c13e935f_RootParameterIndex(value) value
#define _c13e935f_Num32BitValuesToSet(value) value
#define _c13e935f_pSrcData(value) value
#define _c13e935f_DestOffsetIn32BitValues(value) value
#else
typedef struct _c13e935f_pCommandList { _c13e935f_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _c13e935f_pCommandList(const _c13e935f_pCommandList &) = delete; } _c13e935f_pCommandList;
typedef struct _c13e935f_RootParameterIndex { _c13e935f_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _c13e935f_RootParameterIndex(const _c13e935f_RootParameterIndex &) = delete; } _c13e935f_RootParameterIndex;
typedef struct _c13e935f_Num32BitValuesToSet { _c13e935f_Num32BitValuesToSet(unsigned value): value(value) {}; unsigned value; _c13e935f_Num32BitValuesToSet(const _c13e935f_Num32BitValuesToSet &) = delete; } _c13e935f_Num32BitValuesToSet;
typedef struct _c13e935f_pSrcData { _c13e935f_pSrcData(void* value): value(value) {}; void* value; _c13e935f_pSrcData(const _c13e935f_pSrcData &) = delete; } _c13e935f_pSrcData;
typedef struct _c13e935f_DestOffsetIn32BitValues { _c13e935f_DestOffsetIn32BitValues(unsigned value): value(value) {}; unsigned value; _c13e935f_DestOffsetIn32BitValues(const _c13e935f_DestOffsetIn32BitValues &) = delete; } _c13e935f_DestOffsetIn32BitValues;
void np_x12CommandListSetGraphicsRoot32BitConstants(_c13e935f_pCommandList & pCommandList, _c13e935f_RootParameterIndex & RootParameterIndex, _c13e935f_Num32BitValuesToSet & Num32BitValuesToSet, _c13e935f_pSrcData & pSrcData, _c13e935f_DestOffsetIn32BitValues & DestOffsetIn32BitValues) {
  x12CommandListSetGraphicsRoot32BitConstants(pCommandList.value, RootParameterIndex.value, Num32BitValuesToSet.value, pSrcData.value, DestOffsetIn32BitValues.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRootDescriptorTable x12CommandListSetGraphicsRootDescriptorTable
#define _4a5f6d06_pCommandList(value) value
#define _4a5f6d06_RootParameterIndex(value) value
#define _4a5f6d06_BaseDescriptor(value) value
#else
typedef struct _4a5f6d06_pCommandList { _4a5f6d06_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _4a5f6d06_pCommandList(const _4a5f6d06_pCommandList &) = delete; } _4a5f6d06_pCommandList;
typedef struct _4a5f6d06_RootParameterIndex { _4a5f6d06_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _4a5f6d06_RootParameterIndex(const _4a5f6d06_RootParameterIndex &) = delete; } _4a5f6d06_RootParameterIndex;
typedef struct _4a5f6d06_BaseDescriptor { _4a5f6d06_BaseDescriptor(D3D12_GPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_GPU_DESCRIPTOR_HANDLE value; _4a5f6d06_BaseDescriptor(const _4a5f6d06_BaseDescriptor &) = delete; } _4a5f6d06_BaseDescriptor;
void np_x12CommandListSetGraphicsRootDescriptorTable(_4a5f6d06_pCommandList & pCommandList, _4a5f6d06_RootParameterIndex & RootParameterIndex, _4a5f6d06_BaseDescriptor & BaseDescriptor) {
  x12CommandListSetGraphicsRootDescriptorTable(pCommandList.value, RootParameterIndex.value, BaseDescriptor.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRootUnorderedAccessView x12CommandListSetGraphicsRootUnorderedAccessView
#define _763dfb1e_pCommandList(value) value
#define _763dfb1e_RootParameterIndex(value) value
#define _763dfb1e_BufferLocation(value) value
#else
typedef struct _763dfb1e_pCommandList { _763dfb1e_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _763dfb1e_pCommandList(const _763dfb1e_pCommandList &) = delete; } _763dfb1e_pCommandList;
typedef struct _763dfb1e_RootParameterIndex { _763dfb1e_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _763dfb1e_RootParameterIndex(const _763dfb1e_RootParameterIndex &) = delete; } _763dfb1e_RootParameterIndex;
typedef struct _763dfb1e_BufferLocation { _763dfb1e_BufferLocation(D3D12_GPU_VIRTUAL_ADDRESS value): value(value) {}; D3D12_GPU_VIRTUAL_ADDRESS value; _763dfb1e_BufferLocation(const _763dfb1e_BufferLocation &) = delete; } _763dfb1e_BufferLocation;
void np_x12CommandListSetGraphicsRootUnorderedAccessView(_763dfb1e_pCommandList & pCommandList, _763dfb1e_RootParameterIndex & RootParameterIndex, _763dfb1e_BufferLocation & BufferLocation) {
  x12CommandListSetGraphicsRootUnorderedAccessView(pCommandList.value, RootParameterIndex.value, BufferLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRootShaderResourceView x12CommandListSetGraphicsRootShaderResourceView
#define _de3bb1f2_pCommandList(value) value
#define _de3bb1f2_RootParameterIndex(value) value
#define _de3bb1f2_BufferLocation(value) value
#else
typedef struct _de3bb1f2_pCommandList { _de3bb1f2_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _de3bb1f2_pCommandList(const _de3bb1f2_pCommandList &) = delete; } _de3bb1f2_pCommandList;
typedef struct _de3bb1f2_RootParameterIndex { _de3bb1f2_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _de3bb1f2_RootParameterIndex(const _de3bb1f2_RootParameterIndex &) = delete; } _de3bb1f2_RootParameterIndex;
typedef struct _de3bb1f2_BufferLocation { _de3bb1f2_BufferLocation(D3D12_GPU_VIRTUAL_ADDRESS value): value(value) {}; D3D12_GPU_VIRTUAL_ADDRESS value; _de3bb1f2_BufferLocation(const _de3bb1f2_BufferLocation &) = delete; } _de3bb1f2_BufferLocation;
void np_x12CommandListSetGraphicsRootShaderResourceView(_de3bb1f2_pCommandList & pCommandList, _de3bb1f2_RootParameterIndex & RootParameterIndex, _de3bb1f2_BufferLocation & BufferLocation) {
  x12CommandListSetGraphicsRootShaderResourceView(pCommandList.value, RootParameterIndex.value, BufferLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetGraphicsRootConstantBufferView x12CommandListSetGraphicsRootConstantBufferView
#define _1ed09653_pCommandList(value) value
#define _1ed09653_RootParameterIndex(value) value
#define _1ed09653_BufferLocation(value) value
#else
typedef struct _1ed09653_pCommandList { _1ed09653_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _1ed09653_pCommandList(const _1ed09653_pCommandList &) = delete; } _1ed09653_pCommandList;
typedef struct _1ed09653_RootParameterIndex { _1ed09653_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _1ed09653_RootParameterIndex(const _1ed09653_RootParameterIndex &) = delete; } _1ed09653_RootParameterIndex;
typedef struct _1ed09653_BufferLocation { _1ed09653_BufferLocation(D3D12_GPU_VIRTUAL_ADDRESS value): value(value) {}; D3D12_GPU_VIRTUAL_ADDRESS value; _1ed09653_BufferLocation(const _1ed09653_BufferLocation &) = delete; } _1ed09653_BufferLocation;
void np_x12CommandListSetGraphicsRootConstantBufferView(_1ed09653_pCommandList & pCommandList, _1ed09653_RootParameterIndex & RootParameterIndex, _1ed09653_BufferLocation & BufferLocation) {
  x12CommandListSetGraphicsRootConstantBufferView(pCommandList.value, RootParameterIndex.value, BufferLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRootSignature x12CommandListSetComputeRootSignature
#define _38d4a425_pCommandList(value) value
#define _38d4a425_pRootSignature(value) value
#else
typedef struct _38d4a425_pCommandList { _38d4a425_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _38d4a425_pCommandList(const _38d4a425_pCommandList &) = delete; } _38d4a425_pCommandList;
typedef struct _38d4a425_pRootSignature { _38d4a425_pRootSignature(X12RootSignature* value): value(value) {}; X12RootSignature* value; _38d4a425_pRootSignature(const _38d4a425_pRootSignature &) = delete; } _38d4a425_pRootSignature;
void np_x12CommandListSetComputeRootSignature(_38d4a425_pCommandList & pCommandList, _38d4a425_pRootSignature & pRootSignature) {
  x12CommandListSetComputeRootSignature(pCommandList.value, pRootSignature.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRoot32BitConstant x12CommandListSetComputeRoot32BitConstant
#define _71475c80_pCommandList(value) value
#define _71475c80_RootParameterIndex(value) value
#define _71475c80_SrcData(value) value
#define _71475c80_DestOffsetIn32BitValues(value) value
#else
typedef struct _71475c80_pCommandList { _71475c80_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _71475c80_pCommandList(const _71475c80_pCommandList &) = delete; } _71475c80_pCommandList;
typedef struct _71475c80_RootParameterIndex { _71475c80_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _71475c80_RootParameterIndex(const _71475c80_RootParameterIndex &) = delete; } _71475c80_RootParameterIndex;
typedef struct _71475c80_SrcData { _71475c80_SrcData(unsigned value): value(value) {}; unsigned value; _71475c80_SrcData(const _71475c80_SrcData &) = delete; } _71475c80_SrcData;
typedef struct _71475c80_DestOffsetIn32BitValues { _71475c80_DestOffsetIn32BitValues(unsigned value): value(value) {}; unsigned value; _71475c80_DestOffsetIn32BitValues(const _71475c80_DestOffsetIn32BitValues &) = delete; } _71475c80_DestOffsetIn32BitValues;
void np_x12CommandListSetComputeRoot32BitConstant(_71475c80_pCommandList & pCommandList, _71475c80_RootParameterIndex & RootParameterIndex, _71475c80_SrcData & SrcData, _71475c80_DestOffsetIn32BitValues & DestOffsetIn32BitValues) {
  x12CommandListSetComputeRoot32BitConstant(pCommandList.value, RootParameterIndex.value, SrcData.value, DestOffsetIn32BitValues.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRoot32BitConstants x12CommandListSetComputeRoot32BitConstants
#define _428a2fdf_pCommandList(value) value
#define _428a2fdf_RootParameterIndex(value) value
#define _428a2fdf_Num32BitValuesToSet(value) value
#define _428a2fdf_pSrcData(value) value
#define _428a2fdf_DestOffsetIn32BitValues(value) value
#else
typedef struct _428a2fdf_pCommandList { _428a2fdf_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _428a2fdf_pCommandList(const _428a2fdf_pCommandList &) = delete; } _428a2fdf_pCommandList;
typedef struct _428a2fdf_RootParameterIndex { _428a2fdf_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _428a2fdf_RootParameterIndex(const _428a2fdf_RootParameterIndex &) = delete; } _428a2fdf_RootParameterIndex;
typedef struct _428a2fdf_Num32BitValuesToSet { _428a2fdf_Num32BitValuesToSet(unsigned value): value(value) {}; unsigned value; _428a2fdf_Num32BitValuesToSet(const _428a2fdf_Num32BitValuesToSet &) = delete; } _428a2fdf_Num32BitValuesToSet;
typedef struct _428a2fdf_pSrcData { _428a2fdf_pSrcData(void* value): value(value) {}; void* value; _428a2fdf_pSrcData(const _428a2fdf_pSrcData &) = delete; } _428a2fdf_pSrcData;
typedef struct _428a2fdf_DestOffsetIn32BitValues { _428a2fdf_DestOffsetIn32BitValues(unsigned value): value(value) {}; unsigned value; _428a2fdf_DestOffsetIn32BitValues(const _428a2fdf_DestOffsetIn32BitValues &) = delete; } _428a2fdf_DestOffsetIn32BitValues;
void np_x12CommandListSetComputeRoot32BitConstants(_428a2fdf_pCommandList & pCommandList, _428a2fdf_RootParameterIndex & RootParameterIndex, _428a2fdf_Num32BitValuesToSet & Num32BitValuesToSet, _428a2fdf_pSrcData & pSrcData, _428a2fdf_DestOffsetIn32BitValues & DestOffsetIn32BitValues) {
  x12CommandListSetComputeRoot32BitConstants(pCommandList.value, RootParameterIndex.value, Num32BitValuesToSet.value, pSrcData.value, DestOffsetIn32BitValues.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRootDescriptorTable x12CommandListSetComputeRootDescriptorTable
#define _6804f6d4_pCommandList(value) value
#define _6804f6d4_RootParameterIndex(value) value
#define _6804f6d4_BaseDescriptor(value) value
#else
typedef struct _6804f6d4_pCommandList { _6804f6d4_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _6804f6d4_pCommandList(const _6804f6d4_pCommandList &) = delete; } _6804f6d4_pCommandList;
typedef struct _6804f6d4_RootParameterIndex { _6804f6d4_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _6804f6d4_RootParameterIndex(const _6804f6d4_RootParameterIndex &) = delete; } _6804f6d4_RootParameterIndex;
typedef struct _6804f6d4_BaseDescriptor { _6804f6d4_BaseDescriptor(D3D12_GPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_GPU_DESCRIPTOR_HANDLE value; _6804f6d4_BaseDescriptor(const _6804f6d4_BaseDescriptor &) = delete; } _6804f6d4_BaseDescriptor;
void np_x12CommandListSetComputeRootDescriptorTable(_6804f6d4_pCommandList & pCommandList, _6804f6d4_RootParameterIndex & RootParameterIndex, _6804f6d4_BaseDescriptor & BaseDescriptor) {
  x12CommandListSetComputeRootDescriptorTable(pCommandList.value, RootParameterIndex.value, BaseDescriptor.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRootUnorderedAccessView x12CommandListSetComputeRootUnorderedAccessView
#define _d49feb52_pCommandList(value) value
#define _d49feb52_RootParameterIndex(value) value
#define _d49feb52_BufferLocation(value) value
#else
typedef struct _d49feb52_pCommandList { _d49feb52_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _d49feb52_pCommandList(const _d49feb52_pCommandList &) = delete; } _d49feb52_pCommandList;
typedef struct _d49feb52_RootParameterIndex { _d49feb52_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _d49feb52_RootParameterIndex(const _d49feb52_RootParameterIndex &) = delete; } _d49feb52_RootParameterIndex;
typedef struct _d49feb52_BufferLocation { _d49feb52_BufferLocation(D3D12_GPU_VIRTUAL_ADDRESS value): value(value) {}; D3D12_GPU_VIRTUAL_ADDRESS value; _d49feb52_BufferLocation(const _d49feb52_BufferLocation &) = delete; } _d49feb52_BufferLocation;
void np_x12CommandListSetComputeRootUnorderedAccessView(_d49feb52_pCommandList & pCommandList, _d49feb52_RootParameterIndex & RootParameterIndex, _d49feb52_BufferLocation & BufferLocation) {
  x12CommandListSetComputeRootUnorderedAccessView(pCommandList.value, RootParameterIndex.value, BufferLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRootShaderResourceView x12CommandListSetComputeRootShaderResourceView
#define _cc395e92_pCommandList(value) value
#define _cc395e92_RootParameterIndex(value) value
#define _cc395e92_BufferLocation(value) value
#else
typedef struct _cc395e92_pCommandList { _cc395e92_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _cc395e92_pCommandList(const _cc395e92_pCommandList &) = delete; } _cc395e92_pCommandList;
typedef struct _cc395e92_RootParameterIndex { _cc395e92_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _cc395e92_RootParameterIndex(const _cc395e92_RootParameterIndex &) = delete; } _cc395e92_RootParameterIndex;
typedef struct _cc395e92_BufferLocation { _cc395e92_BufferLocation(D3D12_GPU_VIRTUAL_ADDRESS value): value(value) {}; D3D12_GPU_VIRTUAL_ADDRESS value; _cc395e92_BufferLocation(const _cc395e92_BufferLocation &) = delete; } _cc395e92_BufferLocation;
void np_x12CommandListSetComputeRootShaderResourceView(_cc395e92_pCommandList & pCommandList, _cc395e92_RootParameterIndex & RootParameterIndex, _cc395e92_BufferLocation & BufferLocation) {
  x12CommandListSetComputeRootShaderResourceView(pCommandList.value, RootParameterIndex.value, BufferLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetComputeRootConstantBufferView x12CommandListSetComputeRootConstantBufferView
#define _b853c1ff_pCommandList(value) value
#define _b853c1ff_RootParameterIndex(value) value
#define _b853c1ff_BufferLocation(value) value
#else
typedef struct _b853c1ff_pCommandList { _b853c1ff_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _b853c1ff_pCommandList(const _b853c1ff_pCommandList &) = delete; } _b853c1ff_pCommandList;
typedef struct _b853c1ff_RootParameterIndex { _b853c1ff_RootParameterIndex(unsigned value): value(value) {}; unsigned value; _b853c1ff_RootParameterIndex(const _b853c1ff_RootParameterIndex &) = delete; } _b853c1ff_RootParameterIndex;
typedef struct _b853c1ff_BufferLocation { _b853c1ff_BufferLocation(D3D12_GPU_VIRTUAL_ADDRESS value): value(value) {}; D3D12_GPU_VIRTUAL_ADDRESS value; _b853c1ff_BufferLocation(const _b853c1ff_BufferLocation &) = delete; } _b853c1ff_BufferLocation;
void np_x12CommandListSetComputeRootConstantBufferView(_b853c1ff_pCommandList & pCommandList, _b853c1ff_RootParameterIndex & RootParameterIndex, _b853c1ff_BufferLocation & BufferLocation) {
  x12CommandListSetComputeRootConstantBufferView(pCommandList.value, RootParameterIndex.value, BufferLocation.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListClearState x12CommandListClearState
#define _56553c29_pCommandList(value) value
#define _56553c29_pPipelineState(value) value
#else
typedef struct _56553c29_pCommandList { _56553c29_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _56553c29_pCommandList(const _56553c29_pCommandList &) = delete; } _56553c29_pCommandList;
typedef struct _56553c29_pPipelineState { _56553c29_pPipelineState(X12PipelineState* value): value(value) {}; X12PipelineState* value; _56553c29_pPipelineState(const _56553c29_pPipelineState &) = delete; } _56553c29_pPipelineState;
void np_x12CommandListClearState(_56553c29_pCommandList & pCommandList, _56553c29_pPipelineState & pPipelineState) {
  x12CommandListClearState(pCommandList.value, pPipelineState.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetPipelineState x12CommandListSetPipelineState
#define _a707aa16_pCommandList(value) value
#define _a707aa16_pPipelineState(value) value
#else
typedef struct _a707aa16_pCommandList { _a707aa16_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _a707aa16_pCommandList(const _a707aa16_pCommandList &) = delete; } _a707aa16_pCommandList;
typedef struct _a707aa16_pPipelineState { _a707aa16_pPipelineState(X12PipelineState* value): value(value) {}; X12PipelineState* value; _a707aa16_pPipelineState(const _a707aa16_pPipelineState &) = delete; } _a707aa16_pPipelineState;
void np_x12CommandListSetPipelineState(_a707aa16_pCommandList & pCommandList, _a707aa16_pPipelineState & pPipelineState) {
  x12CommandListSetPipelineState(pCommandList.value, pPipelineState.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListIASetPrimitiveTopology x12CommandListIASetPrimitiveTopology
#define _e0897adc_pCommandList(value) value
#define _e0897adc_PrimitiveTopology(value) value
#else
typedef struct _e0897adc_pCommandList { _e0897adc_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _e0897adc_pCommandList(const _e0897adc_pCommandList &) = delete; } _e0897adc_pCommandList;
typedef struct _e0897adc_PrimitiveTopology { _e0897adc_PrimitiveTopology(D3D12_PRIMITIVE_TOPOLOGY value): value(value) {}; D3D12_PRIMITIVE_TOPOLOGY value; _e0897adc_PrimitiveTopology(const _e0897adc_PrimitiveTopology &) = delete; } _e0897adc_PrimitiveTopology;
void np_x12CommandListIASetPrimitiveTopology(_e0897adc_pCommandList & pCommandList, _e0897adc_PrimitiveTopology & PrimitiveTopology) {
  x12CommandListIASetPrimitiveTopology(pCommandList.value, PrimitiveTopology.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListIASetIndexBuffer x12CommandListIASetIndexBuffer
#define _9a1d3fe8_pCommandList(value) value
#define _9a1d3fe8_pView(value) value
#else
typedef struct _9a1d3fe8_pCommandList { _9a1d3fe8_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _9a1d3fe8_pCommandList(const _9a1d3fe8_pCommandList &) = delete; } _9a1d3fe8_pCommandList;
typedef struct _9a1d3fe8_pView { _9a1d3fe8_pView(D3D12_INDEX_BUFFER_VIEW* value): value(value) {}; D3D12_INDEX_BUFFER_VIEW* value; _9a1d3fe8_pView(const _9a1d3fe8_pView &) = delete; } _9a1d3fe8_pView;
void np_x12CommandListIASetIndexBuffer(_9a1d3fe8_pCommandList & pCommandList, _9a1d3fe8_pView & pView) {
  x12CommandListIASetIndexBuffer(pCommandList.value, pView.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListOMSetStencilRef x12CommandListOMSetStencilRef
#define _5238d0fb_pCommandList(value) value
#define _5238d0fb_StencilRef(value) value
#else
typedef struct _5238d0fb_pCommandList { _5238d0fb_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _5238d0fb_pCommandList(const _5238d0fb_pCommandList &) = delete; } _5238d0fb_pCommandList;
typedef struct _5238d0fb_StencilRef { _5238d0fb_StencilRef(unsigned value): value(value) {}; unsigned value; _5238d0fb_StencilRef(const _5238d0fb_StencilRef &) = delete; } _5238d0fb_StencilRef;
void np_x12CommandListOMSetStencilRef(_5238d0fb_pCommandList & pCommandList, _5238d0fb_StencilRef & StencilRef) {
  x12CommandListOMSetStencilRef(pCommandList.value, StencilRef.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListOMSetBlendFactor x12CommandListOMSetBlendFactor
#define _39b569d7_pCommandList(value) value
#define _39b569d7_BlendFactor4Values(value) value
#else
typedef struct _39b569d7_pCommandList { _39b569d7_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _39b569d7_pCommandList(const _39b569d7_pCommandList &) = delete; } _39b569d7_pCommandList;
typedef struct _39b569d7_BlendFactor4Values { _39b569d7_BlendFactor4Values(float* value): value(value) {}; float* value; _39b569d7_BlendFactor4Values(const _39b569d7_BlendFactor4Values &) = delete; } _39b569d7_BlendFactor4Values;
void np_x12CommandListOMSetBlendFactor(_39b569d7_pCommandList & pCommandList, _39b569d7_BlendFactor4Values & BlendFactor4Values) {
  x12CommandListOMSetBlendFactor(pCommandList.value, BlendFactor4Values.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListRSSetViewports x12CommandListRSSetViewports
#define _65a138c6_pCommandList(value) value
#define _65a138c6_NumViewports(value) value
#define _65a138c6_pViewports(value) value
#else
typedef struct _65a138c6_pCommandList { _65a138c6_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _65a138c6_pCommandList(const _65a138c6_pCommandList &) = delete; } _65a138c6_pCommandList;
typedef struct _65a138c6_NumViewports { _65a138c6_NumViewports(unsigned value): value(value) {}; unsigned value; _65a138c6_NumViewports(const _65a138c6_NumViewports &) = delete; } _65a138c6_NumViewports;
typedef struct _65a138c6_pViewports { _65a138c6_pViewports(D3D12_VIEWPORT* value): value(value) {}; D3D12_VIEWPORT* value; _65a138c6_pViewports(const _65a138c6_pViewports &) = delete; } _65a138c6_pViewports;
void np_x12CommandListRSSetViewports(_65a138c6_pCommandList & pCommandList, _65a138c6_NumViewports & NumViewports, _65a138c6_pViewports & pViewports) {
  x12CommandListRSSetViewports(pCommandList.value, NumViewports.value, pViewports.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListRSSetScissorRects x12CommandListRSSetScissorRects
#define _5e40e124_pCommandList(value) value
#define _5e40e124_NumRects(value) value
#define _5e40e124_pRects(value) value
#else
typedef struct _5e40e124_pCommandList { _5e40e124_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _5e40e124_pCommandList(const _5e40e124_pCommandList &) = delete; } _5e40e124_pCommandList;
typedef struct _5e40e124_NumRects { _5e40e124_NumRects(unsigned value): value(value) {}; unsigned value; _5e40e124_NumRects(const _5e40e124_NumRects &) = delete; } _5e40e124_NumRects;
typedef struct _5e40e124_pRects { _5e40e124_pRects(D3D12_RECT* value): value(value) {}; D3D12_RECT* value; _5e40e124_pRects(const _5e40e124_pRects &) = delete; } _5e40e124_pRects;
void np_x12CommandListRSSetScissorRects(_5e40e124_pCommandList & pCommandList, _5e40e124_NumRects & NumRects, _5e40e124_pRects & pRects) {
  x12CommandListRSSetScissorRects(pCommandList.value, NumRects.value, pRects.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListClearRenderTargetView x12CommandListClearRenderTargetView
#define _e2375aa0_pCommandList(value) value
#define _e2375aa0_RenderTargetView(value) value
#define _e2375aa0_ColorRGBA(value) value
#define _e2375aa0_NumRects(value) value
#define _e2375aa0_pRects(value) value
#else
typedef struct _e2375aa0_pCommandList { _e2375aa0_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _e2375aa0_pCommandList(const _e2375aa0_pCommandList &) = delete; } _e2375aa0_pCommandList;
typedef struct _e2375aa0_RenderTargetView { _e2375aa0_RenderTargetView(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _e2375aa0_RenderTargetView(const _e2375aa0_RenderTargetView &) = delete; } _e2375aa0_RenderTargetView;
typedef struct _e2375aa0_ColorRGBA { _e2375aa0_ColorRGBA(float* value): value(value) {}; float* value; _e2375aa0_ColorRGBA(const _e2375aa0_ColorRGBA &) = delete; } _e2375aa0_ColorRGBA;
typedef struct _e2375aa0_NumRects { _e2375aa0_NumRects(unsigned value): value(value) {}; unsigned value; _e2375aa0_NumRects(const _e2375aa0_NumRects &) = delete; } _e2375aa0_NumRects;
typedef struct _e2375aa0_pRects { _e2375aa0_pRects(D3D12_RECT* value): value(value) {}; D3D12_RECT* value; _e2375aa0_pRects(const _e2375aa0_pRects &) = delete; } _e2375aa0_pRects;
void np_x12CommandListClearRenderTargetView(_e2375aa0_pCommandList & pCommandList, _e2375aa0_RenderTargetView & RenderTargetView, _e2375aa0_ColorRGBA & ColorRGBA, _e2375aa0_NumRects & NumRects, _e2375aa0_pRects & pRects) {
  x12CommandListClearRenderTargetView(pCommandList.value, RenderTargetView.value, ColorRGBA.value, NumRects.value, pRects.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListClearDepthStencilView x12CommandListClearDepthStencilView
#define _e120a02f_pCommandList(value) value
#define _e120a02f_DepthStencilView(value) value
#define _e120a02f_ClearFlags(value) value
#define _e120a02f_Depth(value) value
#define _e120a02f_Stencil(value) value
#define _e120a02f_NumRects(value) value
#define _e120a02f_pRects(value) value
#else
typedef struct _e120a02f_pCommandList { _e120a02f_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _e120a02f_pCommandList(const _e120a02f_pCommandList &) = delete; } _e120a02f_pCommandList;
typedef struct _e120a02f_DepthStencilView { _e120a02f_DepthStencilView(D3D12_CPU_DESCRIPTOR_HANDLE value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE value; _e120a02f_DepthStencilView(const _e120a02f_DepthStencilView &) = delete; } _e120a02f_DepthStencilView;
typedef struct _e120a02f_ClearFlags { _e120a02f_ClearFlags(D3D12_CLEAR_FLAGS value): value(value) {}; D3D12_CLEAR_FLAGS value; _e120a02f_ClearFlags(const _e120a02f_ClearFlags &) = delete; } _e120a02f_ClearFlags;
typedef struct _e120a02f_Depth { _e120a02f_Depth(float value): value(value) {}; float value; _e120a02f_Depth(const _e120a02f_Depth &) = delete; } _e120a02f_Depth;
typedef struct _e120a02f_Stencil { _e120a02f_Stencil(unsigned char value): value(value) {}; unsigned char value; _e120a02f_Stencil(const _e120a02f_Stencil &) = delete; } _e120a02f_Stencil;
typedef struct _e120a02f_NumRects { _e120a02f_NumRects(unsigned value): value(value) {}; unsigned value; _e120a02f_NumRects(const _e120a02f_NumRects &) = delete; } _e120a02f_NumRects;
typedef struct _e120a02f_pRects { _e120a02f_pRects(D3D12_RECT* value): value(value) {}; D3D12_RECT* value; _e120a02f_pRects(const _e120a02f_pRects &) = delete; } _e120a02f_pRects;
void np_x12CommandListClearDepthStencilView(_e120a02f_pCommandList & pCommandList, _e120a02f_DepthStencilView & DepthStencilView, _e120a02f_ClearFlags & ClearFlags, _e120a02f_Depth & Depth, _e120a02f_Stencil & Stencil, _e120a02f_NumRects & NumRects, _e120a02f_pRects & pRects) {
  x12CommandListClearDepthStencilView(pCommandList.value, DepthStencilView.value, ClearFlags.value, Depth.value, Stencil.value, NumRects.value, pRects.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListDiscardResource x12CommandListDiscardResource
#define _a22910d9_pCommandList(value) value
#define _a22910d9_pResource(value) value
#define _a22910d9_pRegion(value) value
#else
typedef struct _a22910d9_pCommandList { _a22910d9_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _a22910d9_pCommandList(const _a22910d9_pCommandList &) = delete; } _a22910d9_pCommandList;
typedef struct _a22910d9_pResource { _a22910d9_pResource(X12Resource* value): value(value) {}; X12Resource* value; _a22910d9_pResource(const _a22910d9_pResource &) = delete; } _a22910d9_pResource;
typedef struct _a22910d9_pRegion { _a22910d9_pRegion(D3D12_DISCARD_REGION* value): value(value) {}; D3D12_DISCARD_REGION* value; _a22910d9_pRegion(const _a22910d9_pRegion &) = delete; } _a22910d9_pRegion;
void np_x12CommandListDiscardResource(_a22910d9_pCommandList & pCommandList, _a22910d9_pResource & pResource, _a22910d9_pRegion & pRegion) {
  x12CommandListDiscardResource(pCommandList.value, pResource.value, pRegion.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListOMSetRenderTargets x12CommandListOMSetRenderTargets
#define _9d855e2a_pCommandList(value) value
#define _9d855e2a_NumRenderTargetDescriptors(value) value
#define _9d855e2a_pRenderTargetDescriptors(value) value
#define _9d855e2a_RTsSingleHandleToDescriptorRange(value) value
#define _9d855e2a_pDepthStencilDescriptor(value) value
#else
typedef struct _9d855e2a_pCommandList { _9d855e2a_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _9d855e2a_pCommandList(const _9d855e2a_pCommandList &) = delete; } _9d855e2a_pCommandList;
typedef struct _9d855e2a_NumRenderTargetDescriptors { _9d855e2a_NumRenderTargetDescriptors(unsigned value): value(value) {}; unsigned value; _9d855e2a_NumRenderTargetDescriptors(const _9d855e2a_NumRenderTargetDescriptors &) = delete; } _9d855e2a_NumRenderTargetDescriptors;
typedef struct _9d855e2a_pRenderTargetDescriptors { _9d855e2a_pRenderTargetDescriptors(D3D12_CPU_DESCRIPTOR_HANDLE* value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE* value; _9d855e2a_pRenderTargetDescriptors(const _9d855e2a_pRenderTargetDescriptors &) = delete; } _9d855e2a_pRenderTargetDescriptors;
typedef struct _9d855e2a_RTsSingleHandleToDescriptorRange { _9d855e2a_RTsSingleHandleToDescriptorRange(X12Bool value): value(value) {}; X12Bool value; _9d855e2a_RTsSingleHandleToDescriptorRange(const _9d855e2a_RTsSingleHandleToDescriptorRange &) = delete; } _9d855e2a_RTsSingleHandleToDescriptorRange;
typedef struct _9d855e2a_pDepthStencilDescriptor { _9d855e2a_pDepthStencilDescriptor(D3D12_CPU_DESCRIPTOR_HANDLE* value): value(value) {}; D3D12_CPU_DESCRIPTOR_HANDLE* value; _9d855e2a_pDepthStencilDescriptor(const _9d855e2a_pDepthStencilDescriptor &) = delete; } _9d855e2a_pDepthStencilDescriptor;
void np_x12CommandListOMSetRenderTargets(_9d855e2a_pCommandList & pCommandList, _9d855e2a_NumRenderTargetDescriptors & NumRenderTargetDescriptors, _9d855e2a_pRenderTargetDescriptors & pRenderTargetDescriptors, _9d855e2a_RTsSingleHandleToDescriptorRange & RTsSingleHandleToDescriptorRange, _9d855e2a_pDepthStencilDescriptor & pDepthStencilDescriptor) {
  x12CommandListOMSetRenderTargets(pCommandList.value, NumRenderTargetDescriptors.value, pRenderTargetDescriptors.value, RTsSingleHandleToDescriptorRange.value, pDepthStencilDescriptor.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListResolveSubresource x12CommandListResolveSubresource
#define _7fc942b2_pCommandList(value) value
#define _7fc942b2_pDstResource(value) value
#define _7fc942b2_DstSubresource(value) value
#define _7fc942b2_pSrcResource(value) value
#define _7fc942b2_SrcSubresource(value) value
#define _7fc942b2_Format(value) value
#else
typedef struct _7fc942b2_pCommandList { _7fc942b2_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _7fc942b2_pCommandList(const _7fc942b2_pCommandList &) = delete; } _7fc942b2_pCommandList;
typedef struct _7fc942b2_pDstResource { _7fc942b2_pDstResource(X12Resource* value): value(value) {}; X12Resource* value; _7fc942b2_pDstResource(const _7fc942b2_pDstResource &) = delete; } _7fc942b2_pDstResource;
typedef struct _7fc942b2_DstSubresource { _7fc942b2_DstSubresource(unsigned value): value(value) {}; unsigned value; _7fc942b2_DstSubresource(const _7fc942b2_DstSubresource &) = delete; } _7fc942b2_DstSubresource;
typedef struct _7fc942b2_pSrcResource { _7fc942b2_pSrcResource(X12Resource* value): value(value) {}; X12Resource* value; _7fc942b2_pSrcResource(const _7fc942b2_pSrcResource &) = delete; } _7fc942b2_pSrcResource;
typedef struct _7fc942b2_SrcSubresource { _7fc942b2_SrcSubresource(unsigned value): value(value) {}; unsigned value; _7fc942b2_SrcSubresource(const _7fc942b2_SrcSubresource &) = delete; } _7fc942b2_SrcSubresource;
typedef struct _7fc942b2_Format { _7fc942b2_Format(DXGI_FORMAT value): value(value) {}; DXGI_FORMAT value; _7fc942b2_Format(const _7fc942b2_Format &) = delete; } _7fc942b2_Format;
void np_x12CommandListResolveSubresource(_7fc942b2_pCommandList & pCommandList, _7fc942b2_pDstResource & pDstResource, _7fc942b2_DstSubresource & DstSubresource, _7fc942b2_pSrcResource & pSrcResource, _7fc942b2_SrcSubresource & SrcSubresource, _7fc942b2_Format & Format) {
  x12CommandListResolveSubresource(pCommandList.value, pDstResource.value, DstSubresource.value, pSrcResource.value, SrcSubresource.value, Format.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListResourceBarrier x12CommandListResourceBarrier
#define _49c0e676_pCommandList(value) value
#define _49c0e676_NumBarriers(value) value
#define _49c0e676_pBarriers(value) value
#else
typedef struct _49c0e676_pCommandList { _49c0e676_pCommandList(X12CommandList* value): value(value) {}; X12CommandList* value; _49c0e676_pCommandList(const _49c0e676_pCommandList &) = delete; } _49c0e676_pCommandList;
typedef struct _49c0e676_NumBarriers { _49c0e676_NumBarriers(unsigned value): value(value) {}; unsigned value; _49c0e676_NumBarriers(const _49c0e676_NumBarriers &) = delete; } _49c0e676_NumBarriers;
typedef struct _49c0e676_pBarriers { _49c0e676_pBarriers(D3D12_RESOURCE_BARRIER* value): value(value) {}; D3D12_RESOURCE_BARRIER* value; _49c0e676_pBarriers(const _49c0e676_pBarriers &) = delete; } _49c0e676_pBarriers;
void np_x12CommandListResourceBarrier(_49c0e676_pCommandList & pCommandList, _49c0e676_NumBarriers & NumBarriers, _49c0e676_pBarriers & pBarriers) {
  x12CommandListResourceBarrier(pCommandList.value, NumBarriers.value, pBarriers.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandQueueWait x12CommandQueueWait
#define _3178a99c_pCommandQueue(value) value
#define _3178a99c_pFence(value) value
#define _3178a99c_Value(value) value
#define _3178a99c_optionalFile(value) value
#define _3178a99c_optionalLine(value) value
#else
typedef struct _3178a99c_pCommandQueue { _3178a99c_pCommandQueue(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _3178a99c_pCommandQueue(const _3178a99c_pCommandQueue &) = delete; } _3178a99c_pCommandQueue;
typedef struct _3178a99c_pFence { _3178a99c_pFence(X12Fence* value): value(value) {}; X12Fence* value; _3178a99c_pFence(const _3178a99c_pFence &) = delete; } _3178a99c_pFence;
typedef struct _3178a99c_Value { _3178a99c_Value(uint64_t value): value(value) {}; uint64_t value; _3178a99c_Value(const _3178a99c_Value &) = delete; } _3178a99c_Value;
typedef struct _3178a99c_optionalFile { _3178a99c_optionalFile(char* value): value(value) {}; char* value; _3178a99c_optionalFile(const _3178a99c_optionalFile &) = delete; } _3178a99c_optionalFile;
typedef struct _3178a99c_optionalLine { _3178a99c_optionalLine(int value): value(value) {}; int value; _3178a99c_optionalLine(const _3178a99c_optionalLine &) = delete; } _3178a99c_optionalLine;
HRESULT np_x12CommandQueueWait(_3178a99c_pCommandQueue & pCommandQueue, _3178a99c_pFence & pFence, _3178a99c_Value & Value, _3178a99c_optionalFile & optionalFile, _3178a99c_optionalLine & optionalLine) {
  return x12CommandQueueWait(pCommandQueue.value, pFence.value, Value.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandQueueExecuteCommandLists x12CommandQueueExecuteCommandLists
#define _cf320073_pCommandQueue(value) value
#define _cf320073_NumCommandLists(value) value
#define _cf320073_ppCommandLists(value) value
#define _cf320073_optionalFile(value) value
#define _cf320073_optionalLine(value) value
#else
typedef struct _cf320073_pCommandQueue { _cf320073_pCommandQueue(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _cf320073_pCommandQueue(const _cf320073_pCommandQueue &) = delete; } _cf320073_pCommandQueue;
typedef struct _cf320073_NumCommandLists { _cf320073_NumCommandLists(unsigned value): value(value) {}; unsigned value; _cf320073_NumCommandLists(const _cf320073_NumCommandLists &) = delete; } _cf320073_NumCommandLists;
typedef struct _cf320073_ppCommandLists { _cf320073_ppCommandLists(const X12CommandList** value): value(value) {}; const X12CommandList** value; _cf320073_ppCommandLists(const _cf320073_ppCommandLists &) = delete; } _cf320073_ppCommandLists;
typedef struct _cf320073_optionalFile { _cf320073_optionalFile(char* value): value(value) {}; char* value; _cf320073_optionalFile(const _cf320073_optionalFile &) = delete; } _cf320073_optionalFile;
typedef struct _cf320073_optionalLine { _cf320073_optionalLine(int value): value(value) {}; int value; _cf320073_optionalLine(const _cf320073_optionalLine &) = delete; } _cf320073_optionalLine;
void np_x12CommandQueueExecuteCommandLists(_cf320073_pCommandQueue & pCommandQueue, _cf320073_NumCommandLists & NumCommandLists, _cf320073_ppCommandLists & ppCommandLists, _cf320073_optionalFile & optionalFile, _cf320073_optionalLine & optionalLine) {
  x12CommandQueueExecuteCommandLists(pCommandQueue.value, NumCommandLists.value, ppCommandLists.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandQueueSignal x12CommandQueueSignal
#define _a1760fb9_pCommandQueue(value) value
#define _a1760fb9_pFence(value) value
#define _a1760fb9_Value(value) value
#define _a1760fb9_optionalFile(value) value
#define _a1760fb9_optionalLine(value) value
#else
typedef struct _a1760fb9_pCommandQueue { _a1760fb9_pCommandQueue(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _a1760fb9_pCommandQueue(const _a1760fb9_pCommandQueue &) = delete; } _a1760fb9_pCommandQueue;
typedef struct _a1760fb9_pFence { _a1760fb9_pFence(X12Fence* value): value(value) {}; X12Fence* value; _a1760fb9_pFence(const _a1760fb9_pFence &) = delete; } _a1760fb9_pFence;
typedef struct _a1760fb9_Value { _a1760fb9_Value(uint64_t value): value(value) {}; uint64_t value; _a1760fb9_Value(const _a1760fb9_Value &) = delete; } _a1760fb9_Value;
typedef struct _a1760fb9_optionalFile { _a1760fb9_optionalFile(char* value): value(value) {}; char* value; _a1760fb9_optionalFile(const _a1760fb9_optionalFile &) = delete; } _a1760fb9_optionalFile;
typedef struct _a1760fb9_optionalLine { _a1760fb9_optionalLine(int value): value(value) {}; int value; _a1760fb9_optionalLine(const _a1760fb9_optionalLine &) = delete; } _a1760fb9_optionalLine;
HRESULT np_x12CommandQueueSignal(_a1760fb9_pCommandQueue & pCommandQueue, _a1760fb9_pFence & pFence, _a1760fb9_Value & Value, _a1760fb9_optionalFile & optionalFile, _a1760fb9_optionalLine & optionalLine) {
  return x12CommandQueueSignal(pCommandQueue.value, pFence.value, Value.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryIsCurrent x12FactoryIsCurrent
#define _e72da452_pFactory(value) value
#define _e72da452_optionalFile(value) value
#define _e72da452_optionalLine(value) value
#else
typedef struct _e72da452_pFactory { _e72da452_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _e72da452_pFactory(const _e72da452_pFactory &) = delete; } _e72da452_pFactory;
typedef struct _e72da452_optionalFile { _e72da452_optionalFile(char* value): value(value) {}; char* value; _e72da452_optionalFile(const _e72da452_optionalFile &) = delete; } _e72da452_optionalFile;
typedef struct _e72da452_optionalLine { _e72da452_optionalLine(int value): value(value) {}; int value; _e72da452_optionalLine(const _e72da452_optionalLine &) = delete; } _e72da452_optionalLine;
X12Bool np_x12FactoryIsCurrent(_e72da452_pFactory & pFactory, _e72da452_optionalFile & optionalFile, _e72da452_optionalLine & optionalLine) {
  return x12FactoryIsCurrent(pFactory.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12AdapterGetDesc2 x12AdapterGetDesc2
#define _a8264d78_pAdapter(value) value
#define _a8264d78_outDesc(value) value
#define _a8264d78_optionalFile(value) value
#define _a8264d78_optionalLine(value) value
#else
typedef struct _a8264d78_pAdapter { _a8264d78_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _a8264d78_pAdapter(const _a8264d78_pAdapter &) = delete; } _a8264d78_pAdapter;
typedef struct _a8264d78_outDesc { _a8264d78_outDesc(DXGI_ADAPTER_DESC2* value): value(value) {}; DXGI_ADAPTER_DESC2* value; _a8264d78_outDesc(const _a8264d78_outDesc &) = delete; } _a8264d78_outDesc;
typedef struct _a8264d78_optionalFile { _a8264d78_optionalFile(char* value): value(value) {}; char* value; _a8264d78_optionalFile(const _a8264d78_optionalFile &) = delete; } _a8264d78_optionalFile;
typedef struct _a8264d78_optionalLine { _a8264d78_optionalLine(int value): value(value) {}; int value; _a8264d78_optionalLine(const _a8264d78_optionalLine &) = delete; } _a8264d78_optionalLine;
HRESULT np_x12AdapterGetDesc2(_a8264d78_pAdapter & pAdapter, _a8264d78_outDesc & outDesc, _a8264d78_optionalFile & optionalFile, _a8264d78_optionalLine & optionalLine) {
  return x12AdapterGetDesc2(pAdapter.value, outDesc.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12AdapterEnumOutputs x12AdapterEnumOutputs
#define _6bd27d86_pAdapter(value) value
#define _6bd27d86_Output(value) value
#define _6bd27d86_outpOutput(value) value
#define _6bd27d86_optionalFile(value) value
#define _6bd27d86_optionalLine(value) value
#else
typedef struct _6bd27d86_pAdapter { _6bd27d86_pAdapter(X12Adapter3* value): value(value) {}; X12Adapter3* value; _6bd27d86_pAdapter(const _6bd27d86_pAdapter &) = delete; } _6bd27d86_pAdapter;
typedef struct _6bd27d86_Output { _6bd27d86_Output(unsigned value): value(value) {}; unsigned value; _6bd27d86_Output(const _6bd27d86_Output &) = delete; } _6bd27d86_Output;
typedef struct _6bd27d86_outpOutput { _6bd27d86_outpOutput(X12Output4** value): value(value) {}; X12Output4** value; _6bd27d86_outpOutput(const _6bd27d86_outpOutput &) = delete; } _6bd27d86_outpOutput;
typedef struct _6bd27d86_optionalFile { _6bd27d86_optionalFile(char* value): value(value) {}; char* value; _6bd27d86_optionalFile(const _6bd27d86_optionalFile &) = delete; } _6bd27d86_optionalFile;
typedef struct _6bd27d86_optionalLine { _6bd27d86_optionalLine(int value): value(value) {}; int value; _6bd27d86_optionalLine(const _6bd27d86_optionalLine &) = delete; } _6bd27d86_optionalLine;
HRESULT np_x12AdapterEnumOutputs(_6bd27d86_pAdapter & pAdapter, _6bd27d86_Output & Output, _6bd27d86_outpOutput & outpOutput, _6bd27d86_optionalFile & optionalFile, _6bd27d86_optionalLine & optionalLine) {
  return x12AdapterEnumOutputs(pAdapter.value, Output.value, outpOutput.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceGetAdapterLuid x12DeviceGetAdapterLuid
#define _efc72b2b_pDevice(value) value
#define _efc72b2b_outLuid(value) value
#define _efc72b2b_optionalFile(value) value
#define _efc72b2b_optionalLine(value) value
#else
typedef struct _efc72b2b_pDevice { _efc72b2b_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _efc72b2b_pDevice(const _efc72b2b_pDevice &) = delete; } _efc72b2b_pDevice;
typedef struct _efc72b2b_outLuid { _efc72b2b_outLuid(uint64_t* value): value(value) {}; uint64_t* value; _efc72b2b_outLuid(const _efc72b2b_outLuid &) = delete; } _efc72b2b_outLuid;
typedef struct _efc72b2b_optionalFile { _efc72b2b_optionalFile(char* value): value(value) {}; char* value; _efc72b2b_optionalFile(const _efc72b2b_optionalFile &) = delete; } _efc72b2b_optionalFile;
typedef struct _efc72b2b_optionalLine { _efc72b2b_optionalLine(int value): value(value) {}; int value; _efc72b2b_optionalLine(const _efc72b2b_optionalLine &) = delete; } _efc72b2b_optionalLine;
void np_x12DeviceGetAdapterLuid(_efc72b2b_pDevice & pDevice, _efc72b2b_outLuid & outLuid, _efc72b2b_optionalFile & optionalFile, _efc72b2b_optionalLine & optionalLine) {
  x12DeviceGetAdapterLuid(pDevice.value, outLuid.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceGetDescriptorHandleIncrementSize x12DeviceGetDescriptorHandleIncrementSize
#define _24b0624d_pDevice(value) value
#define _24b0624d_DescriptorHeapType(value) value
#define _24b0624d_optionalFile(value) value
#define _24b0624d_optionalLine(value) value
#else
typedef struct _24b0624d_pDevice { _24b0624d_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _24b0624d_pDevice(const _24b0624d_pDevice &) = delete; } _24b0624d_pDevice;
typedef struct _24b0624d_DescriptorHeapType { _24b0624d_DescriptorHeapType(D3D12_DESCRIPTOR_HEAP_TYPE value): value(value) {}; D3D12_DESCRIPTOR_HEAP_TYPE value; _24b0624d_DescriptorHeapType(const _24b0624d_DescriptorHeapType &) = delete; } _24b0624d_DescriptorHeapType;
typedef struct _24b0624d_optionalFile { _24b0624d_optionalFile(char* value): value(value) {}; char* value; _24b0624d_optionalFile(const _24b0624d_optionalFile &) = delete; } _24b0624d_optionalFile;
typedef struct _24b0624d_optionalLine { _24b0624d_optionalLine(int value): value(value) {}; int value; _24b0624d_optionalLine(const _24b0624d_optionalLine &) = delete; } _24b0624d_optionalLine;
unsigned np_x12DeviceGetDescriptorHandleIncrementSize(_24b0624d_pDevice & pDevice, _24b0624d_DescriptorHeapType & DescriptorHeapType, _24b0624d_optionalFile & optionalFile, _24b0624d_optionalLine & optionalLine) {
  return x12DeviceGetDescriptorHandleIncrementSize(pDevice.value, DescriptorHeapType.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceCheckFeatureSupport x12DeviceCheckFeatureSupport
#define _50ab8204_pDevice(value) value
#define _50ab8204_Feature(value) value
#define _50ab8204_pFeatureSupportData(value) value
#define _50ab8204_FeatureSupportDataSize(value) value
#define _50ab8204_optionalFile(value) value
#define _50ab8204_optionalLine(value) value
#else
typedef struct _50ab8204_pDevice { _50ab8204_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _50ab8204_pDevice(const _50ab8204_pDevice &) = delete; } _50ab8204_pDevice;
typedef struct _50ab8204_Feature { _50ab8204_Feature(D3D12_FEATURE value): value(value) {}; D3D12_FEATURE value; _50ab8204_Feature(const _50ab8204_Feature &) = delete; } _50ab8204_Feature;
typedef struct _50ab8204_pFeatureSupportData { _50ab8204_pFeatureSupportData(void* value): value(value) {}; void* value; _50ab8204_pFeatureSupportData(const _50ab8204_pFeatureSupportData &) = delete; } _50ab8204_pFeatureSupportData;
typedef struct _50ab8204_FeatureSupportDataSize { _50ab8204_FeatureSupportDataSize(unsigned value): value(value) {}; unsigned value; _50ab8204_FeatureSupportDataSize(const _50ab8204_FeatureSupportDataSize &) = delete; } _50ab8204_FeatureSupportDataSize;
typedef struct _50ab8204_optionalFile { _50ab8204_optionalFile(char* value): value(value) {}; char* value; _50ab8204_optionalFile(const _50ab8204_optionalFile &) = delete; } _50ab8204_optionalFile;
typedef struct _50ab8204_optionalLine { _50ab8204_optionalLine(int value): value(value) {}; int value; _50ab8204_optionalLine(const _50ab8204_optionalLine &) = delete; } _50ab8204_optionalLine;
HRESULT np_x12DeviceCheckFeatureSupport(_50ab8204_pDevice & pDevice, _50ab8204_Feature & Feature, _50ab8204_pFeatureSupportData & pFeatureSupportData, _50ab8204_FeatureSupportDataSize & FeatureSupportDataSize, _50ab8204_optionalFile & optionalFile, _50ab8204_optionalLine & optionalLine) {
  return x12DeviceCheckFeatureSupport(pDevice.value, Feature.value, pFeatureSupportData.value, FeatureSupportDataSize.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceGetDeviceRemovedReason x12DeviceGetDeviceRemovedReason
#define _fbfa3eeb_pDevice(value) value
#define _fbfa3eeb_optionalFile(value) value
#define _fbfa3eeb_optionalLine(value) value
#else
typedef struct _fbfa3eeb_pDevice { _fbfa3eeb_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _fbfa3eeb_pDevice(const _fbfa3eeb_pDevice &) = delete; } _fbfa3eeb_pDevice;
typedef struct _fbfa3eeb_optionalFile { _fbfa3eeb_optionalFile(char* value): value(value) {}; char* value; _fbfa3eeb_optionalFile(const _fbfa3eeb_optionalFile &) = delete; } _fbfa3eeb_optionalFile;
typedef struct _fbfa3eeb_optionalLine { _fbfa3eeb_optionalLine(int value): value(value) {}; int value; _fbfa3eeb_optionalLine(const _fbfa3eeb_optionalLine &) = delete; } _fbfa3eeb_optionalLine;
HRESULT np_x12DeviceGetDeviceRemovedReason(_fbfa3eeb_pDevice & pDevice, _fbfa3eeb_optionalFile & optionalFile, _fbfa3eeb_optionalLine & optionalLine) {
  return x12DeviceGetDeviceRemovedReason(pDevice.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12DeviceSetStablePowerState x12DeviceSetStablePowerState
#define _b3233c72_pDevice(value) value
#define _b3233c72_Enable(value) value
#define _b3233c72_optionalFile(value) value
#define _b3233c72_optionalLine(value) value
#else
typedef struct _b3233c72_pDevice { _b3233c72_pDevice(X12Device3* value): value(value) {}; X12Device3* value; _b3233c72_pDevice(const _b3233c72_pDevice &) = delete; } _b3233c72_pDevice;
typedef struct _b3233c72_Enable { _b3233c72_Enable(X12Bool value): value(value) {}; X12Bool value; _b3233c72_Enable(const _b3233c72_Enable &) = delete; } _b3233c72_Enable;
typedef struct _b3233c72_optionalFile { _b3233c72_optionalFile(char* value): value(value) {}; char* value; _b3233c72_optionalFile(const _b3233c72_optionalFile &) = delete; } _b3233c72_optionalFile;
typedef struct _b3233c72_optionalLine { _b3233c72_optionalLine(int value): value(value) {}; int value; _b3233c72_optionalLine(const _b3233c72_optionalLine &) = delete; } _b3233c72_optionalLine;
HRESULT np_x12DeviceSetStablePowerState(_b3233c72_pDevice & pDevice, _b3233c72_Enable & Enable, _b3233c72_optionalFile & optionalFile, _b3233c72_optionalLine & optionalLine) {
  return x12DeviceSetStablePowerState(pDevice.value, Enable.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryCreateSwapChainForHwnd x12FactoryCreateSwapChainForHwnd
#define _a800a8bf_pFactory(value) value
#define _a800a8bf_pCommandQueue(value) value
#define _a800a8bf_hWnd(value) value
#define _a800a8bf_pDesc(value) value
#define _a800a8bf_pFullscreenDesc(value) value
#define _a800a8bf_pRestrictToOutput(value) value
#define _a800a8bf_outpSwapChain(value) value
#define _a800a8bf_optionalFile(value) value
#define _a800a8bf_optionalLine(value) value
#else
typedef struct _a800a8bf_pFactory { _a800a8bf_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _a800a8bf_pFactory(const _a800a8bf_pFactory &) = delete; } _a800a8bf_pFactory;
typedef struct _a800a8bf_pCommandQueue { _a800a8bf_pCommandQueue(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _a800a8bf_pCommandQueue(const _a800a8bf_pCommandQueue &) = delete; } _a800a8bf_pCommandQueue;
typedef struct _a800a8bf_hWnd { _a800a8bf_hWnd(void* value): value(value) {}; void* value; _a800a8bf_hWnd(const _a800a8bf_hWnd &) = delete; } _a800a8bf_hWnd;
typedef struct _a800a8bf_pDesc { _a800a8bf_pDesc(DXGI_SWAP_CHAIN_DESC1* value): value(value) {}; DXGI_SWAP_CHAIN_DESC1* value; _a800a8bf_pDesc(const _a800a8bf_pDesc &) = delete; } _a800a8bf_pDesc;
typedef struct _a800a8bf_pFullscreenDesc { _a800a8bf_pFullscreenDesc(DXGI_SWAP_CHAIN_FULLSCREEN_DESC* value): value(value) {}; DXGI_SWAP_CHAIN_FULLSCREEN_DESC* value; _a800a8bf_pFullscreenDesc(const _a800a8bf_pFullscreenDesc &) = delete; } _a800a8bf_pFullscreenDesc;
typedef struct _a800a8bf_pRestrictToOutput { _a800a8bf_pRestrictToOutput(X12Output4* value): value(value) {}; X12Output4* value; _a800a8bf_pRestrictToOutput(const _a800a8bf_pRestrictToOutput &) = delete; } _a800a8bf_pRestrictToOutput;
typedef struct _a800a8bf_outpSwapChain { _a800a8bf_outpSwapChain(X12SwapChain3** value): value(value) {}; X12SwapChain3** value; _a800a8bf_outpSwapChain(const _a800a8bf_outpSwapChain &) = delete; } _a800a8bf_outpSwapChain;
typedef struct _a800a8bf_optionalFile { _a800a8bf_optionalFile(char* value): value(value) {}; char* value; _a800a8bf_optionalFile(const _a800a8bf_optionalFile &) = delete; } _a800a8bf_optionalFile;
typedef struct _a800a8bf_optionalLine { _a800a8bf_optionalLine(int value): value(value) {}; int value; _a800a8bf_optionalLine(const _a800a8bf_optionalLine &) = delete; } _a800a8bf_optionalLine;
HRESULT np_x12FactoryCreateSwapChainForHwnd(_a800a8bf_pFactory & pFactory, _a800a8bf_pCommandQueue & pCommandQueue, _a800a8bf_hWnd & hWnd, _a800a8bf_pDesc & pDesc, _a800a8bf_pFullscreenDesc & pFullscreenDesc, _a800a8bf_pRestrictToOutput & pRestrictToOutput, _a800a8bf_outpSwapChain & outpSwapChain, _a800a8bf_optionalFile & optionalFile, _a800a8bf_optionalLine & optionalLine) {
  return x12FactoryCreateSwapChainForHwnd(pFactory.value, pCommandQueue.value, hWnd.value, pDesc.value, pFullscreenDesc.value, pRestrictToOutput.value, outpSwapChain.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryCreateSwapChainForCoreWindow x12FactoryCreateSwapChainForCoreWindow
#define _e180f1c8_pFactory(value) value
#define _e180f1c8_pCommandQueue(value) value
#define _e180f1c8_pWindow(value) value
#define _e180f1c8_pDesc(value) value
#define _e180f1c8_pRestrictToOutput(value) value
#define _e180f1c8_outpSwapChain(value) value
#define _e180f1c8_optionalFile(value) value
#define _e180f1c8_optionalLine(value) value
#else
typedef struct _e180f1c8_pFactory { _e180f1c8_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _e180f1c8_pFactory(const _e180f1c8_pFactory &) = delete; } _e180f1c8_pFactory;
typedef struct _e180f1c8_pCommandQueue { _e180f1c8_pCommandQueue(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _e180f1c8_pCommandQueue(const _e180f1c8_pCommandQueue &) = delete; } _e180f1c8_pCommandQueue;
typedef struct _e180f1c8_pWindow { _e180f1c8_pWindow(void* value): value(value) {}; void* value; _e180f1c8_pWindow(const _e180f1c8_pWindow &) = delete; } _e180f1c8_pWindow;
typedef struct _e180f1c8_pDesc { _e180f1c8_pDesc(DXGI_SWAP_CHAIN_DESC1* value): value(value) {}; DXGI_SWAP_CHAIN_DESC1* value; _e180f1c8_pDesc(const _e180f1c8_pDesc &) = delete; } _e180f1c8_pDesc;
typedef struct _e180f1c8_pRestrictToOutput { _e180f1c8_pRestrictToOutput(X12Output4* value): value(value) {}; X12Output4* value; _e180f1c8_pRestrictToOutput(const _e180f1c8_pRestrictToOutput &) = delete; } _e180f1c8_pRestrictToOutput;
typedef struct _e180f1c8_outpSwapChain { _e180f1c8_outpSwapChain(X12SwapChain3** value): value(value) {}; X12SwapChain3** value; _e180f1c8_outpSwapChain(const _e180f1c8_outpSwapChain &) = delete; } _e180f1c8_outpSwapChain;
typedef struct _e180f1c8_optionalFile { _e180f1c8_optionalFile(char* value): value(value) {}; char* value; _e180f1c8_optionalFile(const _e180f1c8_optionalFile &) = delete; } _e180f1c8_optionalFile;
typedef struct _e180f1c8_optionalLine { _e180f1c8_optionalLine(int value): value(value) {}; int value; _e180f1c8_optionalLine(const _e180f1c8_optionalLine &) = delete; } _e180f1c8_optionalLine;
HRESULT np_x12FactoryCreateSwapChainForCoreWindow(_e180f1c8_pFactory & pFactory, _e180f1c8_pCommandQueue & pCommandQueue, _e180f1c8_pWindow & pWindow, _e180f1c8_pDesc & pDesc, _e180f1c8_pRestrictToOutput & pRestrictToOutput, _e180f1c8_outpSwapChain & outpSwapChain, _e180f1c8_optionalFile & optionalFile, _e180f1c8_optionalLine & optionalLine) {
  return x12FactoryCreateSwapChainForCoreWindow(pFactory.value, pCommandQueue.value, pWindow.value, pDesc.value, pRestrictToOutput.value, outpSwapChain.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryCreateSwapChainForComposition x12FactoryCreateSwapChainForComposition
#define _f514aa0a_pFactory(value) value
#define _f514aa0a_pCommandQueue(value) value
#define _f514aa0a_pDesc(value) value
#define _f514aa0a_pRestrictToOutput(value) value
#define _f514aa0a_outpSwapChain(value) value
#define _f514aa0a_optionalFile(value) value
#define _f514aa0a_optionalLine(value) value
#else
typedef struct _f514aa0a_pFactory { _f514aa0a_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _f514aa0a_pFactory(const _f514aa0a_pFactory &) = delete; } _f514aa0a_pFactory;
typedef struct _f514aa0a_pCommandQueue { _f514aa0a_pCommandQueue(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _f514aa0a_pCommandQueue(const _f514aa0a_pCommandQueue &) = delete; } _f514aa0a_pCommandQueue;
typedef struct _f514aa0a_pDesc { _f514aa0a_pDesc(DXGI_SWAP_CHAIN_DESC1* value): value(value) {}; DXGI_SWAP_CHAIN_DESC1* value; _f514aa0a_pDesc(const _f514aa0a_pDesc &) = delete; } _f514aa0a_pDesc;
typedef struct _f514aa0a_pRestrictToOutput { _f514aa0a_pRestrictToOutput(X12Output4* value): value(value) {}; X12Output4* value; _f514aa0a_pRestrictToOutput(const _f514aa0a_pRestrictToOutput &) = delete; } _f514aa0a_pRestrictToOutput;
typedef struct _f514aa0a_outpSwapChain { _f514aa0a_outpSwapChain(X12SwapChain3** value): value(value) {}; X12SwapChain3** value; _f514aa0a_outpSwapChain(const _f514aa0a_outpSwapChain &) = delete; } _f514aa0a_outpSwapChain;
typedef struct _f514aa0a_optionalFile { _f514aa0a_optionalFile(char* value): value(value) {}; char* value; _f514aa0a_optionalFile(const _f514aa0a_optionalFile &) = delete; } _f514aa0a_optionalFile;
typedef struct _f514aa0a_optionalLine { _f514aa0a_optionalLine(int value): value(value) {}; int value; _f514aa0a_optionalLine(const _f514aa0a_optionalLine &) = delete; } _f514aa0a_optionalLine;
HRESULT np_x12FactoryCreateSwapChainForComposition(_f514aa0a_pFactory & pFactory, _f514aa0a_pCommandQueue & pCommandQueue, _f514aa0a_pDesc & pDesc, _f514aa0a_pRestrictToOutput & pRestrictToOutput, _f514aa0a_outpSwapChain & outpSwapChain, _f514aa0a_optionalFile & optionalFile, _f514aa0a_optionalLine & optionalLine) {
  return x12FactoryCreateSwapChainForComposition(pFactory.value, pCommandQueue.value, pDesc.value, pRestrictToOutput.value, outpSwapChain.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryMakeWindowAssociation x12FactoryMakeWindowAssociation
#define _93229b36_pFactory(value) value
#define _93229b36_WindowHandle(value) value
#define _93229b36_Flags(value) value
#define _93229b36_optionalFile(value) value
#define _93229b36_optionalLine(value) value
#else
typedef struct _93229b36_pFactory { _93229b36_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _93229b36_pFactory(const _93229b36_pFactory &) = delete; } _93229b36_pFactory;
typedef struct _93229b36_WindowHandle { _93229b36_WindowHandle(void* value): value(value) {}; void* value; _93229b36_WindowHandle(const _93229b36_WindowHandle &) = delete; } _93229b36_WindowHandle;
typedef struct _93229b36_Flags { _93229b36_Flags(DXGI_MWA_FLAGS value): value(value) {}; DXGI_MWA_FLAGS value; _93229b36_Flags(const _93229b36_Flags &) = delete; } _93229b36_Flags;
typedef struct _93229b36_optionalFile { _93229b36_optionalFile(char* value): value(value) {}; char* value; _93229b36_optionalFile(const _93229b36_optionalFile &) = delete; } _93229b36_optionalFile;
typedef struct _93229b36_optionalLine { _93229b36_optionalLine(int value): value(value) {}; int value; _93229b36_optionalLine(const _93229b36_optionalLine &) = delete; } _93229b36_optionalLine;
HRESULT np_x12FactoryMakeWindowAssociation(_93229b36_pFactory & pFactory, _93229b36_WindowHandle & WindowHandle, _93229b36_Flags & Flags, _93229b36_optionalFile & optionalFile, _93229b36_optionalLine & optionalLine) {
  return x12FactoryMakeWindowAssociation(pFactory.value, WindowHandle.value, Flags.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryGetWindowAssociation x12FactoryGetWindowAssociation
#define _cb86fe2e_pFactory(value) value
#define _cb86fe2e_outWindowHandle(value) value
#define _cb86fe2e_optionalFile(value) value
#define _cb86fe2e_optionalLine(value) value
#else
typedef struct _cb86fe2e_pFactory { _cb86fe2e_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _cb86fe2e_pFactory(const _cb86fe2e_pFactory &) = delete; } _cb86fe2e_pFactory;
typedef struct _cb86fe2e_outWindowHandle { _cb86fe2e_outWindowHandle(void** value): value(value) {}; void** value; _cb86fe2e_outWindowHandle(const _cb86fe2e_outWindowHandle &) = delete; } _cb86fe2e_outWindowHandle;
typedef struct _cb86fe2e_optionalFile { _cb86fe2e_optionalFile(char* value): value(value) {}; char* value; _cb86fe2e_optionalFile(const _cb86fe2e_optionalFile &) = delete; } _cb86fe2e_optionalFile;
typedef struct _cb86fe2e_optionalLine { _cb86fe2e_optionalLine(int value): value(value) {}; int value; _cb86fe2e_optionalLine(const _cb86fe2e_optionalLine &) = delete; } _cb86fe2e_optionalLine;
HRESULT np_x12FactoryGetWindowAssociation(_cb86fe2e_pFactory & pFactory, _cb86fe2e_outWindowHandle & outWindowHandle, _cb86fe2e_optionalFile & optionalFile, _cb86fe2e_optionalLine & optionalLine) {
  return x12FactoryGetWindowAssociation(pFactory.value, outWindowHandle.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryRegisterOcclusionStatusWindow x12FactoryRegisterOcclusionStatusWindow
#define _b24cf22c_pFactory(value) value
#define _b24cf22c_WindowHandle(value) value
#define _b24cf22c_wMsg(value) value
#define _b24cf22c_pdwCookie(value) value
#define _b24cf22c_optionalFile(value) value
#define _b24cf22c_optionalLine(value) value
#else
typedef struct _b24cf22c_pFactory { _b24cf22c_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _b24cf22c_pFactory(const _b24cf22c_pFactory &) = delete; } _b24cf22c_pFactory;
typedef struct _b24cf22c_WindowHandle { _b24cf22c_WindowHandle(void* value): value(value) {}; void* value; _b24cf22c_WindowHandle(const _b24cf22c_WindowHandle &) = delete; } _b24cf22c_WindowHandle;
typedef struct _b24cf22c_wMsg { _b24cf22c_wMsg(unsigned value): value(value) {}; unsigned value; _b24cf22c_wMsg(const _b24cf22c_wMsg &) = delete; } _b24cf22c_wMsg;
typedef struct _b24cf22c_pdwCookie { _b24cf22c_pdwCookie(unsigned* value): value(value) {}; unsigned* value; _b24cf22c_pdwCookie(const _b24cf22c_pdwCookie &) = delete; } _b24cf22c_pdwCookie;
typedef struct _b24cf22c_optionalFile { _b24cf22c_optionalFile(char* value): value(value) {}; char* value; _b24cf22c_optionalFile(const _b24cf22c_optionalFile &) = delete; } _b24cf22c_optionalFile;
typedef struct _b24cf22c_optionalLine { _b24cf22c_optionalLine(int value): value(value) {}; int value; _b24cf22c_optionalLine(const _b24cf22c_optionalLine &) = delete; } _b24cf22c_optionalLine;
HRESULT np_x12FactoryRegisterOcclusionStatusWindow(_b24cf22c_pFactory & pFactory, _b24cf22c_WindowHandle & WindowHandle, _b24cf22c_wMsg & wMsg, _b24cf22c_pdwCookie & pdwCookie, _b24cf22c_optionalFile & optionalFile, _b24cf22c_optionalLine & optionalLine) {
  return x12FactoryRegisterOcclusionStatusWindow(pFactory.value, WindowHandle.value, wMsg.value, pdwCookie.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryRegisterOcclusionStatusEvent x12FactoryRegisterOcclusionStatusEvent
#define _e2a75b7c_pFactory(value) value
#define _e2a75b7c_hEvent(value) value
#define _e2a75b7c_pdwCookie(value) value
#define _e2a75b7c_optionalFile(value) value
#define _e2a75b7c_optionalLine(value) value
#else
typedef struct _e2a75b7c_pFactory { _e2a75b7c_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _e2a75b7c_pFactory(const _e2a75b7c_pFactory &) = delete; } _e2a75b7c_pFactory;
typedef struct _e2a75b7c_hEvent { _e2a75b7c_hEvent(void* value): value(value) {}; void* value; _e2a75b7c_hEvent(const _e2a75b7c_hEvent &) = delete; } _e2a75b7c_hEvent;
typedef struct _e2a75b7c_pdwCookie { _e2a75b7c_pdwCookie(unsigned* value): value(value) {}; unsigned* value; _e2a75b7c_pdwCookie(const _e2a75b7c_pdwCookie &) = delete; } _e2a75b7c_pdwCookie;
typedef struct _e2a75b7c_optionalFile { _e2a75b7c_optionalFile(char* value): value(value) {}; char* value; _e2a75b7c_optionalFile(const _e2a75b7c_optionalFile &) = delete; } _e2a75b7c_optionalFile;
typedef struct _e2a75b7c_optionalLine { _e2a75b7c_optionalLine(int value): value(value) {}; int value; _e2a75b7c_optionalLine(const _e2a75b7c_optionalLine &) = delete; } _e2a75b7c_optionalLine;
HRESULT np_x12FactoryRegisterOcclusionStatusEvent(_e2a75b7c_pFactory & pFactory, _e2a75b7c_hEvent & hEvent, _e2a75b7c_pdwCookie & pdwCookie, _e2a75b7c_optionalFile & optionalFile, _e2a75b7c_optionalLine & optionalLine) {
  return x12FactoryRegisterOcclusionStatusEvent(pFactory.value, hEvent.value, pdwCookie.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12FactoryUnregisterOcclusionStatus x12FactoryUnregisterOcclusionStatus
#define _083de0dd_pFactory(value) value
#define _083de0dd_dwCookie(value) value
#define _083de0dd_optionalFile(value) value
#define _083de0dd_optionalLine(value) value
#else
typedef struct _083de0dd_pFactory { _083de0dd_pFactory(X12Factory4* value): value(value) {}; X12Factory4* value; _083de0dd_pFactory(const _083de0dd_pFactory &) = delete; } _083de0dd_pFactory;
typedef struct _083de0dd_dwCookie { _083de0dd_dwCookie(unsigned value): value(value) {}; unsigned value; _083de0dd_dwCookie(const _083de0dd_dwCookie &) = delete; } _083de0dd_dwCookie;
typedef struct _083de0dd_optionalFile { _083de0dd_optionalFile(char* value): value(value) {}; char* value; _083de0dd_optionalFile(const _083de0dd_optionalFile &) = delete; } _083de0dd_optionalFile;
typedef struct _083de0dd_optionalLine { _083de0dd_optionalLine(int value): value(value) {}; int value; _083de0dd_optionalLine(const _083de0dd_optionalLine &) = delete; } _083de0dd_optionalLine;
void np_x12FactoryUnregisterOcclusionStatus(_083de0dd_pFactory & pFactory, _083de0dd_dwCookie & dwCookie, _083de0dd_optionalFile & optionalFile, _083de0dd_optionalLine & optionalLine) {
  x12FactoryUnregisterOcclusionStatus(pFactory.value, dwCookie.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetBuffer x12SwapChainGetBuffer
#define _24c8bb34_pSwapChain(value) value
#define _24c8bb34_Buffer(value) value
#define _24c8bb34_outpSurface(value) value
#define _24c8bb34_optionalFile(value) value
#define _24c8bb34_optionalLine(value) value
#else
typedef struct _24c8bb34_pSwapChain { _24c8bb34_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _24c8bb34_pSwapChain(const _24c8bb34_pSwapChain &) = delete; } _24c8bb34_pSwapChain;
typedef struct _24c8bb34_Buffer { _24c8bb34_Buffer(unsigned value): value(value) {}; unsigned value; _24c8bb34_Buffer(const _24c8bb34_Buffer &) = delete; } _24c8bb34_Buffer;
typedef struct _24c8bb34_outpSurface { _24c8bb34_outpSurface(X12Resource** value): value(value) {}; X12Resource** value; _24c8bb34_outpSurface(const _24c8bb34_outpSurface &) = delete; } _24c8bb34_outpSurface;
typedef struct _24c8bb34_optionalFile { _24c8bb34_optionalFile(char* value): value(value) {}; char* value; _24c8bb34_optionalFile(const _24c8bb34_optionalFile &) = delete; } _24c8bb34_optionalFile;
typedef struct _24c8bb34_optionalLine { _24c8bb34_optionalLine(int value): value(value) {}; int value; _24c8bb34_optionalLine(const _24c8bb34_optionalLine &) = delete; } _24c8bb34_optionalLine;
HRESULT np_x12SwapChainGetBuffer(_24c8bb34_pSwapChain & pSwapChain, _24c8bb34_Buffer & Buffer, _24c8bb34_outpSurface & outpSurface, _24c8bb34_optionalFile & optionalFile, _24c8bb34_optionalLine & optionalLine) {
  return x12SwapChainGetBuffer(pSwapChain.value, Buffer.value, outpSurface.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetCurrentBackBufferIndex x12SwapChainGetCurrentBackBufferIndex
#define _6d572da9_pSwapChain(value) value
#define _6d572da9_optionalFile(value) value
#define _6d572da9_optionalLine(value) value
#else
typedef struct _6d572da9_pSwapChain { _6d572da9_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _6d572da9_pSwapChain(const _6d572da9_pSwapChain &) = delete; } _6d572da9_pSwapChain;
typedef struct _6d572da9_optionalFile { _6d572da9_optionalFile(char* value): value(value) {}; char* value; _6d572da9_optionalFile(const _6d572da9_optionalFile &) = delete; } _6d572da9_optionalFile;
typedef struct _6d572da9_optionalLine { _6d572da9_optionalLine(int value): value(value) {}; int value; _6d572da9_optionalLine(const _6d572da9_optionalLine &) = delete; } _6d572da9_optionalLine;
unsigned np_x12SwapChainGetCurrentBackBufferIndex(_6d572da9_pSwapChain & pSwapChain, _6d572da9_optionalFile & optionalFile, _6d572da9_optionalLine & optionalLine) {
  return x12SwapChainGetCurrentBackBufferIndex(pSwapChain.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainPresent1 x12SwapChainPresent1
#define _4a3bd7a8_pSwapChain(value) value
#define _4a3bd7a8_SyncInterval(value) value
#define _4a3bd7a8_PresentFlags(value) value
#define _4a3bd7a8_pPresentParameters(value) value
#define _4a3bd7a8_optionalFile(value) value
#define _4a3bd7a8_optionalLine(value) value
#else
typedef struct _4a3bd7a8_pSwapChain { _4a3bd7a8_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _4a3bd7a8_pSwapChain(const _4a3bd7a8_pSwapChain &) = delete; } _4a3bd7a8_pSwapChain;
typedef struct _4a3bd7a8_SyncInterval { _4a3bd7a8_SyncInterval(unsigned value): value(value) {}; unsigned value; _4a3bd7a8_SyncInterval(const _4a3bd7a8_SyncInterval &) = delete; } _4a3bd7a8_SyncInterval;
typedef struct _4a3bd7a8_PresentFlags { _4a3bd7a8_PresentFlags(DXGI_PRESENT_FLAGS value): value(value) {}; DXGI_PRESENT_FLAGS value; _4a3bd7a8_PresentFlags(const _4a3bd7a8_PresentFlags &) = delete; } _4a3bd7a8_PresentFlags;
typedef struct _4a3bd7a8_pPresentParameters { _4a3bd7a8_pPresentParameters(DXGI_PRESENT_PARAMETERS* value): value(value) {}; DXGI_PRESENT_PARAMETERS* value; _4a3bd7a8_pPresentParameters(const _4a3bd7a8_pPresentParameters &) = delete; } _4a3bd7a8_pPresentParameters;
typedef struct _4a3bd7a8_optionalFile { _4a3bd7a8_optionalFile(char* value): value(value) {}; char* value; _4a3bd7a8_optionalFile(const _4a3bd7a8_optionalFile &) = delete; } _4a3bd7a8_optionalFile;
typedef struct _4a3bd7a8_optionalLine { _4a3bd7a8_optionalLine(int value): value(value) {}; int value; _4a3bd7a8_optionalLine(const _4a3bd7a8_optionalLine &) = delete; } _4a3bd7a8_optionalLine;
HRESULT np_x12SwapChainPresent1(_4a3bd7a8_pSwapChain & pSwapChain, _4a3bd7a8_SyncInterval & SyncInterval, _4a3bd7a8_PresentFlags & PresentFlags, _4a3bd7a8_pPresentParameters & pPresentParameters, _4a3bd7a8_optionalFile & optionalFile, _4a3bd7a8_optionalLine & optionalLine) {
  return x12SwapChainPresent1(pSwapChain.value, SyncInterval.value, PresentFlags.value, pPresentParameters.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainResizeTarget x12SwapChainResizeTarget
#define _9aeb92e1_pSwapChain(value) value
#define _9aeb92e1_pNewTargetParameters(value) value
#define _9aeb92e1_optionalFile(value) value
#define _9aeb92e1_optionalLine(value) value
#else
typedef struct _9aeb92e1_pSwapChain { _9aeb92e1_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _9aeb92e1_pSwapChain(const _9aeb92e1_pSwapChain &) = delete; } _9aeb92e1_pSwapChain;
typedef struct _9aeb92e1_pNewTargetParameters { _9aeb92e1_pNewTargetParameters(DXGI_MODE_DESC* value): value(value) {}; DXGI_MODE_DESC* value; _9aeb92e1_pNewTargetParameters(const _9aeb92e1_pNewTargetParameters &) = delete; } _9aeb92e1_pNewTargetParameters;
typedef struct _9aeb92e1_optionalFile { _9aeb92e1_optionalFile(char* value): value(value) {}; char* value; _9aeb92e1_optionalFile(const _9aeb92e1_optionalFile &) = delete; } _9aeb92e1_optionalFile;
typedef struct _9aeb92e1_optionalLine { _9aeb92e1_optionalLine(int value): value(value) {}; int value; _9aeb92e1_optionalLine(const _9aeb92e1_optionalLine &) = delete; } _9aeb92e1_optionalLine;
HRESULT np_x12SwapChainResizeTarget(_9aeb92e1_pSwapChain & pSwapChain, _9aeb92e1_pNewTargetParameters & pNewTargetParameters, _9aeb92e1_optionalFile & optionalFile, _9aeb92e1_optionalLine & optionalLine) {
  return x12SwapChainResizeTarget(pSwapChain.value, pNewTargetParameters.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainResizeBuffers1 x12SwapChainResizeBuffers1
#define _3d307839_pSwapChain(value) value
#define _3d307839_BufferCount(value) value
#define _3d307839_Width(value) value
#define _3d307839_Height(value) value
#define _3d307839_Format(value) value
#define _3d307839_SwapChainFlags(value) value
#define _3d307839_pCreationNodeMask(value) value
#define _3d307839_ppPresentQueue(value) value
#define _3d307839_optionalFile(value) value
#define _3d307839_optionalLine(value) value
#else
typedef struct _3d307839_pSwapChain { _3d307839_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _3d307839_pSwapChain(const _3d307839_pSwapChain &) = delete; } _3d307839_pSwapChain;
typedef struct _3d307839_BufferCount { _3d307839_BufferCount(unsigned value): value(value) {}; unsigned value; _3d307839_BufferCount(const _3d307839_BufferCount &) = delete; } _3d307839_BufferCount;
typedef struct _3d307839_Width { _3d307839_Width(unsigned value): value(value) {}; unsigned value; _3d307839_Width(const _3d307839_Width &) = delete; } _3d307839_Width;
typedef struct _3d307839_Height { _3d307839_Height(unsigned value): value(value) {}; unsigned value; _3d307839_Height(const _3d307839_Height &) = delete; } _3d307839_Height;
typedef struct _3d307839_Format { _3d307839_Format(DXGI_FORMAT value): value(value) {}; DXGI_FORMAT value; _3d307839_Format(const _3d307839_Format &) = delete; } _3d307839_Format;
typedef struct _3d307839_SwapChainFlags { _3d307839_SwapChainFlags(unsigned value): value(value) {}; unsigned value; _3d307839_SwapChainFlags(const _3d307839_SwapChainFlags &) = delete; } _3d307839_SwapChainFlags;
typedef struct _3d307839_pCreationNodeMask { _3d307839_pCreationNodeMask(unsigned* value): value(value) {}; unsigned* value; _3d307839_pCreationNodeMask(const _3d307839_pCreationNodeMask &) = delete; } _3d307839_pCreationNodeMask;
typedef struct _3d307839_ppPresentQueue { _3d307839_ppPresentQueue(const X12CommandQueue** value): value(value) {}; const X12CommandQueue** value; _3d307839_ppPresentQueue(const _3d307839_ppPresentQueue &) = delete; } _3d307839_ppPresentQueue;
typedef struct _3d307839_optionalFile { _3d307839_optionalFile(char* value): value(value) {}; char* value; _3d307839_optionalFile(const _3d307839_optionalFile &) = delete; } _3d307839_optionalFile;
typedef struct _3d307839_optionalLine { _3d307839_optionalLine(int value): value(value) {}; int value; _3d307839_optionalLine(const _3d307839_optionalLine &) = delete; } _3d307839_optionalLine;
HRESULT np_x12SwapChainResizeBuffers1(_3d307839_pSwapChain & pSwapChain, _3d307839_BufferCount & BufferCount, _3d307839_Width & Width, _3d307839_Height & Height, _3d307839_Format & Format, _3d307839_SwapChainFlags & SwapChainFlags, _3d307839_pCreationNodeMask & pCreationNodeMask, _3d307839_ppPresentQueue & ppPresentQueue, _3d307839_optionalFile & optionalFile, _3d307839_optionalLine & optionalLine) {
  return x12SwapChainResizeBuffers1(pSwapChain.value, BufferCount.value, Width.value, Height.value, Format.value, SwapChainFlags.value, pCreationNodeMask.value, ppPresentQueue.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetFullscreenState x12SwapChainSetFullscreenState
#define _683af9d6_pSwapChain(value) value
#define _683af9d6_Fullscreen(value) value
#define _683af9d6_pTarget(value) value
#define _683af9d6_optionalFile(value) value
#define _683af9d6_optionalLine(value) value
#else
typedef struct _683af9d6_pSwapChain { _683af9d6_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _683af9d6_pSwapChain(const _683af9d6_pSwapChain &) = delete; } _683af9d6_pSwapChain;
typedef struct _683af9d6_Fullscreen { _683af9d6_Fullscreen(X12Bool value): value(value) {}; X12Bool value; _683af9d6_Fullscreen(const _683af9d6_Fullscreen &) = delete; } _683af9d6_Fullscreen;
typedef struct _683af9d6_pTarget { _683af9d6_pTarget(X12Output4* value): value(value) {}; X12Output4* value; _683af9d6_pTarget(const _683af9d6_pTarget &) = delete; } _683af9d6_pTarget;
typedef struct _683af9d6_optionalFile { _683af9d6_optionalFile(char* value): value(value) {}; char* value; _683af9d6_optionalFile(const _683af9d6_optionalFile &) = delete; } _683af9d6_optionalFile;
typedef struct _683af9d6_optionalLine { _683af9d6_optionalLine(int value): value(value) {}; int value; _683af9d6_optionalLine(const _683af9d6_optionalLine &) = delete; } _683af9d6_optionalLine;
HRESULT np_x12SwapChainSetFullscreenState(_683af9d6_pSwapChain & pSwapChain, _683af9d6_Fullscreen & Fullscreen, _683af9d6_pTarget & pTarget, _683af9d6_optionalFile & optionalFile, _683af9d6_optionalLine & optionalLine) {
  return x12SwapChainSetFullscreenState(pSwapChain.value, Fullscreen.value, pTarget.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetFullscreenDesc x12SwapChainGetFullscreenDesc
#define _a5398727_pSwapChain(value) value
#define _a5398727_outDesc(value) value
#define _a5398727_optionalFile(value) value
#define _a5398727_optionalLine(value) value
#else
typedef struct _a5398727_pSwapChain { _a5398727_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _a5398727_pSwapChain(const _a5398727_pSwapChain &) = delete; } _a5398727_pSwapChain;
typedef struct _a5398727_outDesc { _a5398727_outDesc(DXGI_SWAP_CHAIN_FULLSCREEN_DESC* value): value(value) {}; DXGI_SWAP_CHAIN_FULLSCREEN_DESC* value; _a5398727_outDesc(const _a5398727_outDesc &) = delete; } _a5398727_outDesc;
typedef struct _a5398727_optionalFile { _a5398727_optionalFile(char* value): value(value) {}; char* value; _a5398727_optionalFile(const _a5398727_optionalFile &) = delete; } _a5398727_optionalFile;
typedef struct _a5398727_optionalLine { _a5398727_optionalLine(int value): value(value) {}; int value; _a5398727_optionalLine(const _a5398727_optionalLine &) = delete; } _a5398727_optionalLine;
HRESULT np_x12SwapChainGetFullscreenDesc(_a5398727_pSwapChain & pSwapChain, _a5398727_outDesc & outDesc, _a5398727_optionalFile & optionalFile, _a5398727_optionalLine & optionalLine) {
  return x12SwapChainGetFullscreenDesc(pSwapChain.value, outDesc.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetLastPresentCount x12SwapChainGetLastPresentCount
#define _a1a41ad9_pSwapChain(value) value
#define _a1a41ad9_outLastPresentCount(value) value
#define _a1a41ad9_optionalFile(value) value
#define _a1a41ad9_optionalLine(value) value
#else
typedef struct _a1a41ad9_pSwapChain { _a1a41ad9_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _a1a41ad9_pSwapChain(const _a1a41ad9_pSwapChain &) = delete; } _a1a41ad9_pSwapChain;
typedef struct _a1a41ad9_outLastPresentCount { _a1a41ad9_outLastPresentCount(unsigned* value): value(value) {}; unsigned* value; _a1a41ad9_outLastPresentCount(const _a1a41ad9_outLastPresentCount &) = delete; } _a1a41ad9_outLastPresentCount;
typedef struct _a1a41ad9_optionalFile { _a1a41ad9_optionalFile(char* value): value(value) {}; char* value; _a1a41ad9_optionalFile(const _a1a41ad9_optionalFile &) = delete; } _a1a41ad9_optionalFile;
typedef struct _a1a41ad9_optionalLine { _a1a41ad9_optionalLine(int value): value(value) {}; int value; _a1a41ad9_optionalLine(const _a1a41ad9_optionalLine &) = delete; } _a1a41ad9_optionalLine;
HRESULT np_x12SwapChainGetLastPresentCount(_a1a41ad9_pSwapChain & pSwapChain, _a1a41ad9_outLastPresentCount & outLastPresentCount, _a1a41ad9_optionalFile & optionalFile, _a1a41ad9_optionalLine & optionalLine) {
  return x12SwapChainGetLastPresentCount(pSwapChain.value, outLastPresentCount.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetFrameStatistics x12SwapChainGetFrameStatistics
#define _6c66cdd3_pSwapChain(value) value
#define _6c66cdd3_outStats(value) value
#define _6c66cdd3_optionalFile(value) value
#define _6c66cdd3_optionalLine(value) value
#else
typedef struct _6c66cdd3_pSwapChain { _6c66cdd3_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _6c66cdd3_pSwapChain(const _6c66cdd3_pSwapChain &) = delete; } _6c66cdd3_pSwapChain;
typedef struct _6c66cdd3_outStats { _6c66cdd3_outStats(DXGI_FRAME_STATISTICS* value): value(value) {}; DXGI_FRAME_STATISTICS* value; _6c66cdd3_outStats(const _6c66cdd3_outStats &) = delete; } _6c66cdd3_outStats;
typedef struct _6c66cdd3_optionalFile { _6c66cdd3_optionalFile(char* value): value(value) {}; char* value; _6c66cdd3_optionalFile(const _6c66cdd3_optionalFile &) = delete; } _6c66cdd3_optionalFile;
typedef struct _6c66cdd3_optionalLine { _6c66cdd3_optionalLine(int value): value(value) {}; int value; _6c66cdd3_optionalLine(const _6c66cdd3_optionalLine &) = delete; } _6c66cdd3_optionalLine;
HRESULT np_x12SwapChainGetFrameStatistics(_6c66cdd3_pSwapChain & pSwapChain, _6c66cdd3_outStats & outStats, _6c66cdd3_optionalFile & optionalFile, _6c66cdd3_optionalLine & optionalLine) {
  return x12SwapChainGetFrameStatistics(pSwapChain.value, outStats.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetBackgroundColor x12SwapChainSetBackgroundColor
#define _2c8cdf3c_pSwapChain(value) value
#define _2c8cdf3c_pColor(value) value
#define _2c8cdf3c_optionalFile(value) value
#define _2c8cdf3c_optionalLine(value) value
#else
typedef struct _2c8cdf3c_pSwapChain { _2c8cdf3c_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _2c8cdf3c_pSwapChain(const _2c8cdf3c_pSwapChain &) = delete; } _2c8cdf3c_pSwapChain;
typedef struct _2c8cdf3c_pColor { _2c8cdf3c_pColor(DXGI_RGBA* value): value(value) {}; DXGI_RGBA* value; _2c8cdf3c_pColor(const _2c8cdf3c_pColor &) = delete; } _2c8cdf3c_pColor;
typedef struct _2c8cdf3c_optionalFile { _2c8cdf3c_optionalFile(char* value): value(value) {}; char* value; _2c8cdf3c_optionalFile(const _2c8cdf3c_optionalFile &) = delete; } _2c8cdf3c_optionalFile;
typedef struct _2c8cdf3c_optionalLine { _2c8cdf3c_optionalLine(int value): value(value) {}; int value; _2c8cdf3c_optionalLine(const _2c8cdf3c_optionalLine &) = delete; } _2c8cdf3c_optionalLine;
HRESULT np_x12SwapChainSetBackgroundColor(_2c8cdf3c_pSwapChain & pSwapChain, _2c8cdf3c_pColor & pColor, _2c8cdf3c_optionalFile & optionalFile, _2c8cdf3c_optionalLine & optionalLine) {
  return x12SwapChainSetBackgroundColor(pSwapChain.value, pColor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetBackgroundColor x12SwapChainGetBackgroundColor
#define _6b38037f_pSwapChain(value) value
#define _6b38037f_outColor(value) value
#define _6b38037f_optionalFile(value) value
#define _6b38037f_optionalLine(value) value
#else
typedef struct _6b38037f_pSwapChain { _6b38037f_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _6b38037f_pSwapChain(const _6b38037f_pSwapChain &) = delete; } _6b38037f_pSwapChain;
typedef struct _6b38037f_outColor { _6b38037f_outColor(DXGI_RGBA* value): value(value) {}; DXGI_RGBA* value; _6b38037f_outColor(const _6b38037f_outColor &) = delete; } _6b38037f_outColor;
typedef struct _6b38037f_optionalFile { _6b38037f_optionalFile(char* value): value(value) {}; char* value; _6b38037f_optionalFile(const _6b38037f_optionalFile &) = delete; } _6b38037f_optionalFile;
typedef struct _6b38037f_optionalLine { _6b38037f_optionalLine(int value): value(value) {}; int value; _6b38037f_optionalLine(const _6b38037f_optionalLine &) = delete; } _6b38037f_optionalLine;
HRESULT np_x12SwapChainGetBackgroundColor(_6b38037f_pSwapChain & pSwapChain, _6b38037f_outColor & outColor, _6b38037f_optionalFile & optionalFile, _6b38037f_optionalLine & optionalLine) {
  return x12SwapChainGetBackgroundColor(pSwapChain.value, outColor.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetRotation x12SwapChainSetRotation
#define _c401013e_pSwapChain(value) value
#define _c401013e_Rotation(value) value
#define _c401013e_optionalFile(value) value
#define _c401013e_optionalLine(value) value
#else
typedef struct _c401013e_pSwapChain { _c401013e_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _c401013e_pSwapChain(const _c401013e_pSwapChain &) = delete; } _c401013e_pSwapChain;
typedef struct _c401013e_Rotation { _c401013e_Rotation(DXGI_MODE_ROTATION value): value(value) {}; DXGI_MODE_ROTATION value; _c401013e_Rotation(const _c401013e_Rotation &) = delete; } _c401013e_Rotation;
typedef struct _c401013e_optionalFile { _c401013e_optionalFile(char* value): value(value) {}; char* value; _c401013e_optionalFile(const _c401013e_optionalFile &) = delete; } _c401013e_optionalFile;
typedef struct _c401013e_optionalLine { _c401013e_optionalLine(int value): value(value) {}; int value; _c401013e_optionalLine(const _c401013e_optionalLine &) = delete; } _c401013e_optionalLine;
HRESULT np_x12SwapChainSetRotation(_c401013e_pSwapChain & pSwapChain, _c401013e_Rotation & Rotation, _c401013e_optionalFile & optionalFile, _c401013e_optionalLine & optionalLine) {
  return x12SwapChainSetRotation(pSwapChain.value, Rotation.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetRotation x12SwapChainGetRotation
#define _5ad0027c_pSwapChain(value) value
#define _5ad0027c_outRotation(value) value
#define _5ad0027c_optionalFile(value) value
#define _5ad0027c_optionalLine(value) value
#else
typedef struct _5ad0027c_pSwapChain { _5ad0027c_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _5ad0027c_pSwapChain(const _5ad0027c_pSwapChain &) = delete; } _5ad0027c_pSwapChain;
typedef struct _5ad0027c_outRotation { _5ad0027c_outRotation(DXGI_MODE_ROTATION* value): value(value) {}; DXGI_MODE_ROTATION* value; _5ad0027c_outRotation(const _5ad0027c_outRotation &) = delete; } _5ad0027c_outRotation;
typedef struct _5ad0027c_optionalFile { _5ad0027c_optionalFile(char* value): value(value) {}; char* value; _5ad0027c_optionalFile(const _5ad0027c_optionalFile &) = delete; } _5ad0027c_optionalFile;
typedef struct _5ad0027c_optionalLine { _5ad0027c_optionalLine(int value): value(value) {}; int value; _5ad0027c_optionalLine(const _5ad0027c_optionalLine &) = delete; } _5ad0027c_optionalLine;
HRESULT np_x12SwapChainGetRotation(_5ad0027c_pSwapChain & pSwapChain, _5ad0027c_outRotation & outRotation, _5ad0027c_optionalFile & optionalFile, _5ad0027c_optionalLine & optionalLine) {
  return x12SwapChainGetRotation(pSwapChain.value, outRotation.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetSourceSize x12SwapChainSetSourceSize
#define _41956731_pSwapChain(value) value
#define _41956731_Width(value) value
#define _41956731_Height(value) value
#define _41956731_optionalFile(value) value
#define _41956731_optionalLine(value) value
#else
typedef struct _41956731_pSwapChain { _41956731_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _41956731_pSwapChain(const _41956731_pSwapChain &) = delete; } _41956731_pSwapChain;
typedef struct _41956731_Width { _41956731_Width(unsigned value): value(value) {}; unsigned value; _41956731_Width(const _41956731_Width &) = delete; } _41956731_Width;
typedef struct _41956731_Height { _41956731_Height(unsigned value): value(value) {}; unsigned value; _41956731_Height(const _41956731_Height &) = delete; } _41956731_Height;
typedef struct _41956731_optionalFile { _41956731_optionalFile(char* value): value(value) {}; char* value; _41956731_optionalFile(const _41956731_optionalFile &) = delete; } _41956731_optionalFile;
typedef struct _41956731_optionalLine { _41956731_optionalLine(int value): value(value) {}; int value; _41956731_optionalLine(const _41956731_optionalLine &) = delete; } _41956731_optionalLine;
HRESULT np_x12SwapChainSetSourceSize(_41956731_pSwapChain & pSwapChain, _41956731_Width & Width, _41956731_Height & Height, _41956731_optionalFile & optionalFile, _41956731_optionalLine & optionalLine) {
  return x12SwapChainSetSourceSize(pSwapChain.value, Width.value, Height.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetSourceSize x12SwapChainGetSourceSize
#define _13a0b30a_pSwapChain(value) value
#define _13a0b30a_outWidth(value) value
#define _13a0b30a_outHeight(value) value
#define _13a0b30a_optionalFile(value) value
#define _13a0b30a_optionalLine(value) value
#else
typedef struct _13a0b30a_pSwapChain { _13a0b30a_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _13a0b30a_pSwapChain(const _13a0b30a_pSwapChain &) = delete; } _13a0b30a_pSwapChain;
typedef struct _13a0b30a_outWidth { _13a0b30a_outWidth(unsigned* value): value(value) {}; unsigned* value; _13a0b30a_outWidth(const _13a0b30a_outWidth &) = delete; } _13a0b30a_outWidth;
typedef struct _13a0b30a_outHeight { _13a0b30a_outHeight(unsigned* value): value(value) {}; unsigned* value; _13a0b30a_outHeight(const _13a0b30a_outHeight &) = delete; } _13a0b30a_outHeight;
typedef struct _13a0b30a_optionalFile { _13a0b30a_optionalFile(char* value): value(value) {}; char* value; _13a0b30a_optionalFile(const _13a0b30a_optionalFile &) = delete; } _13a0b30a_optionalFile;
typedef struct _13a0b30a_optionalLine { _13a0b30a_optionalLine(int value): value(value) {}; int value; _13a0b30a_optionalLine(const _13a0b30a_optionalLine &) = delete; } _13a0b30a_optionalLine;
HRESULT np_x12SwapChainGetSourceSize(_13a0b30a_pSwapChain & pSwapChain, _13a0b30a_outWidth & outWidth, _13a0b30a_outHeight & outHeight, _13a0b30a_optionalFile & optionalFile, _13a0b30a_optionalLine & optionalLine) {
  return x12SwapChainGetSourceSize(pSwapChain.value, outWidth.value, outHeight.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetMaximumFrameLatency x12SwapChainSetMaximumFrameLatency
#define _8c89dd87_pSwapChain(value) value
#define _8c89dd87_MaxLatency(value) value
#define _8c89dd87_optionalFile(value) value
#define _8c89dd87_optionalLine(value) value
#else
typedef struct _8c89dd87_pSwapChain { _8c89dd87_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _8c89dd87_pSwapChain(const _8c89dd87_pSwapChain &) = delete; } _8c89dd87_pSwapChain;
typedef struct _8c89dd87_MaxLatency { _8c89dd87_MaxLatency(unsigned value): value(value) {}; unsigned value; _8c89dd87_MaxLatency(const _8c89dd87_MaxLatency &) = delete; } _8c89dd87_MaxLatency;
typedef struct _8c89dd87_optionalFile { _8c89dd87_optionalFile(char* value): value(value) {}; char* value; _8c89dd87_optionalFile(const _8c89dd87_optionalFile &) = delete; } _8c89dd87_optionalFile;
typedef struct _8c89dd87_optionalLine { _8c89dd87_optionalLine(int value): value(value) {}; int value; _8c89dd87_optionalLine(const _8c89dd87_optionalLine &) = delete; } _8c89dd87_optionalLine;
HRESULT np_x12SwapChainSetMaximumFrameLatency(_8c89dd87_pSwapChain & pSwapChain, _8c89dd87_MaxLatency & MaxLatency, _8c89dd87_optionalFile & optionalFile, _8c89dd87_optionalLine & optionalLine) {
  return x12SwapChainSetMaximumFrameLatency(pSwapChain.value, MaxLatency.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetMaximumFrameLatency x12SwapChainGetMaximumFrameLatency
#define _7ff8df9b_pSwapChain(value) value
#define _7ff8df9b_outMaxLatency(value) value
#define _7ff8df9b_optionalFile(value) value
#define _7ff8df9b_optionalLine(value) value
#else
typedef struct _7ff8df9b_pSwapChain { _7ff8df9b_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _7ff8df9b_pSwapChain(const _7ff8df9b_pSwapChain &) = delete; } _7ff8df9b_pSwapChain;
typedef struct _7ff8df9b_outMaxLatency { _7ff8df9b_outMaxLatency(unsigned* value): value(value) {}; unsigned* value; _7ff8df9b_outMaxLatency(const _7ff8df9b_outMaxLatency &) = delete; } _7ff8df9b_outMaxLatency;
typedef struct _7ff8df9b_optionalFile { _7ff8df9b_optionalFile(char* value): value(value) {}; char* value; _7ff8df9b_optionalFile(const _7ff8df9b_optionalFile &) = delete; } _7ff8df9b_optionalFile;
typedef struct _7ff8df9b_optionalLine { _7ff8df9b_optionalLine(int value): value(value) {}; int value; _7ff8df9b_optionalLine(const _7ff8df9b_optionalLine &) = delete; } _7ff8df9b_optionalLine;
HRESULT np_x12SwapChainGetMaximumFrameLatency(_7ff8df9b_pSwapChain & pSwapChain, _7ff8df9b_outMaxLatency & outMaxLatency, _7ff8df9b_optionalFile & optionalFile, _7ff8df9b_optionalLine & optionalLine) {
  return x12SwapChainGetMaximumFrameLatency(pSwapChain.value, outMaxLatency.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetFrameLatencyWaitableObject x12SwapChainGetFrameLatencyWaitableObject
#define _3f1d196f_pSwapChain(value) value
#define _3f1d196f_optionalFile(value) value
#define _3f1d196f_optionalLine(value) value
#else
typedef struct _3f1d196f_pSwapChain { _3f1d196f_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _3f1d196f_pSwapChain(const _3f1d196f_pSwapChain &) = delete; } _3f1d196f_pSwapChain;
typedef struct _3f1d196f_optionalFile { _3f1d196f_optionalFile(char* value): value(value) {}; char* value; _3f1d196f_optionalFile(const _3f1d196f_optionalFile &) = delete; } _3f1d196f_optionalFile;
typedef struct _3f1d196f_optionalLine { _3f1d196f_optionalLine(int value): value(value) {}; int value; _3f1d196f_optionalLine(const _3f1d196f_optionalLine &) = delete; } _3f1d196f_optionalLine;
void* np_x12SwapChainGetFrameLatencyWaitableObject(_3f1d196f_pSwapChain & pSwapChain, _3f1d196f_optionalFile & optionalFile, _3f1d196f_optionalLine & optionalLine) {
  return x12SwapChainGetFrameLatencyWaitableObject(pSwapChain.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetMatrixTransform x12SwapChainSetMatrixTransform
#define _461a3f60_pSwapChain(value) value
#define _461a3f60_pMatrix(value) value
#define _461a3f60_optionalFile(value) value
#define _461a3f60_optionalLine(value) value
#else
typedef struct _461a3f60_pSwapChain { _461a3f60_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _461a3f60_pSwapChain(const _461a3f60_pSwapChain &) = delete; } _461a3f60_pSwapChain;
typedef struct _461a3f60_pMatrix { _461a3f60_pMatrix(DXGI_MATRIX_3X2_F* value): value(value) {}; DXGI_MATRIX_3X2_F* value; _461a3f60_pMatrix(const _461a3f60_pMatrix &) = delete; } _461a3f60_pMatrix;
typedef struct _461a3f60_optionalFile { _461a3f60_optionalFile(char* value): value(value) {}; char* value; _461a3f60_optionalFile(const _461a3f60_optionalFile &) = delete; } _461a3f60_optionalFile;
typedef struct _461a3f60_optionalLine { _461a3f60_optionalLine(int value): value(value) {}; int value; _461a3f60_optionalLine(const _461a3f60_optionalLine &) = delete; } _461a3f60_optionalLine;
HRESULT np_x12SwapChainSetMatrixTransform(_461a3f60_pSwapChain & pSwapChain, _461a3f60_pMatrix & pMatrix, _461a3f60_optionalFile & optionalFile, _461a3f60_optionalLine & optionalLine) {
  return x12SwapChainSetMatrixTransform(pSwapChain.value, pMatrix.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainGetMatrixTransform x12SwapChainGetMatrixTransform
#define _4294063c_pSwapChain(value) value
#define _4294063c_outMatrix(value) value
#define _4294063c_optionalFile(value) value
#define _4294063c_optionalLine(value) value
#else
typedef struct _4294063c_pSwapChain { _4294063c_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _4294063c_pSwapChain(const _4294063c_pSwapChain &) = delete; } _4294063c_pSwapChain;
typedef struct _4294063c_outMatrix { _4294063c_outMatrix(DXGI_MATRIX_3X2_F* value): value(value) {}; DXGI_MATRIX_3X2_F* value; _4294063c_outMatrix(const _4294063c_outMatrix &) = delete; } _4294063c_outMatrix;
typedef struct _4294063c_optionalFile { _4294063c_optionalFile(char* value): value(value) {}; char* value; _4294063c_optionalFile(const _4294063c_optionalFile &) = delete; } _4294063c_optionalFile;
typedef struct _4294063c_optionalLine { _4294063c_optionalLine(int value): value(value) {}; int value; _4294063c_optionalLine(const _4294063c_optionalLine &) = delete; } _4294063c_optionalLine;
HRESULT np_x12SwapChainGetMatrixTransform(_4294063c_pSwapChain & pSwapChain, _4294063c_outMatrix & outMatrix, _4294063c_optionalFile & optionalFile, _4294063c_optionalLine & optionalLine) {
  return x12SwapChainGetMatrixTransform(pSwapChain.value, outMatrix.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainCheckColorSpaceSupport x12SwapChainCheckColorSpaceSupport
#define _4256abc9_pSwapChain(value) value
#define _4256abc9_ColorSpace(value) value
#define _4256abc9_outColorSpaceSupport(value) value
#define _4256abc9_optionalFile(value) value
#define _4256abc9_optionalLine(value) value
#else
typedef struct _4256abc9_pSwapChain { _4256abc9_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _4256abc9_pSwapChain(const _4256abc9_pSwapChain &) = delete; } _4256abc9_pSwapChain;
typedef struct _4256abc9_ColorSpace { _4256abc9_ColorSpace(DXGI_COLOR_SPACE_TYPE value): value(value) {}; DXGI_COLOR_SPACE_TYPE value; _4256abc9_ColorSpace(const _4256abc9_ColorSpace &) = delete; } _4256abc9_ColorSpace;
typedef struct _4256abc9_outColorSpaceSupport { _4256abc9_outColorSpaceSupport(DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAGS* value): value(value) {}; DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAGS* value; _4256abc9_outColorSpaceSupport(const _4256abc9_outColorSpaceSupport &) = delete; } _4256abc9_outColorSpaceSupport;
typedef struct _4256abc9_optionalFile { _4256abc9_optionalFile(char* value): value(value) {}; char* value; _4256abc9_optionalFile(const _4256abc9_optionalFile &) = delete; } _4256abc9_optionalFile;
typedef struct _4256abc9_optionalLine { _4256abc9_optionalLine(int value): value(value) {}; int value; _4256abc9_optionalLine(const _4256abc9_optionalLine &) = delete; } _4256abc9_optionalLine;
HRESULT np_x12SwapChainCheckColorSpaceSupport(_4256abc9_pSwapChain & pSwapChain, _4256abc9_ColorSpace & ColorSpace, _4256abc9_outColorSpaceSupport & outColorSpaceSupport, _4256abc9_optionalFile & optionalFile, _4256abc9_optionalLine & optionalLine) {
  return x12SwapChainCheckColorSpaceSupport(pSwapChain.value, ColorSpace.value, outColorSpaceSupport.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12SwapChainSetColorSpace1 x12SwapChainSetColorSpace1
#define _7d6d6d4e_pSwapChain(value) value
#define _7d6d6d4e_ColorSpace(value) value
#define _7d6d6d4e_optionalFile(value) value
#define _7d6d6d4e_optionalLine(value) value
#else
typedef struct _7d6d6d4e_pSwapChain { _7d6d6d4e_pSwapChain(X12SwapChain3* value): value(value) {}; X12SwapChain3* value; _7d6d6d4e_pSwapChain(const _7d6d6d4e_pSwapChain &) = delete; } _7d6d6d4e_pSwapChain;
typedef struct _7d6d6d4e_ColorSpace { _7d6d6d4e_ColorSpace(DXGI_COLOR_SPACE_TYPE value): value(value) {}; DXGI_COLOR_SPACE_TYPE value; _7d6d6d4e_ColorSpace(const _7d6d6d4e_ColorSpace &) = delete; } _7d6d6d4e_ColorSpace;
typedef struct _7d6d6d4e_optionalFile { _7d6d6d4e_optionalFile(char* value): value(value) {}; char* value; _7d6d6d4e_optionalFile(const _7d6d6d4e_optionalFile &) = delete; } _7d6d6d4e_optionalFile;
typedef struct _7d6d6d4e_optionalLine { _7d6d6d4e_optionalLine(int value): value(value) {}; int value; _7d6d6d4e_optionalLine(const _7d6d6d4e_optionalLine &) = delete; } _7d6d6d4e_optionalLine;
HRESULT np_x12SwapChainSetColorSpace1(_7d6d6d4e_pSwapChain & pSwapChain, _7d6d6d4e_ColorSpace & ColorSpace, _7d6d6d4e_optionalFile & optionalFile, _7d6d6d4e_optionalLine & optionalLine) {
  return x12SwapChainSetColorSpace1(pSwapChain.value, ColorSpace.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputGetDesc x12OutputGetDesc
#define _5c0dfe07_pOutput(value) value
#define _5c0dfe07_outDesc(value) value
#define _5c0dfe07_optionalFile(value) value
#define _5c0dfe07_optionalLine(value) value
#else
typedef struct _5c0dfe07_pOutput { _5c0dfe07_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _5c0dfe07_pOutput(const _5c0dfe07_pOutput &) = delete; } _5c0dfe07_pOutput;
typedef struct _5c0dfe07_outDesc { _5c0dfe07_outDesc(DXGI_OUTPUT_DESC* value): value(value) {}; DXGI_OUTPUT_DESC* value; _5c0dfe07_outDesc(const _5c0dfe07_outDesc &) = delete; } _5c0dfe07_outDesc;
typedef struct _5c0dfe07_optionalFile { _5c0dfe07_optionalFile(char* value): value(value) {}; char* value; _5c0dfe07_optionalFile(const _5c0dfe07_optionalFile &) = delete; } _5c0dfe07_optionalFile;
typedef struct _5c0dfe07_optionalLine { _5c0dfe07_optionalLine(int value): value(value) {}; int value; _5c0dfe07_optionalLine(const _5c0dfe07_optionalLine &) = delete; } _5c0dfe07_optionalLine;
HRESULT np_x12OutputGetDesc(_5c0dfe07_pOutput & pOutput, _5c0dfe07_outDesc & outDesc, _5c0dfe07_optionalFile & optionalFile, _5c0dfe07_optionalLine & optionalLine) {
  return x12OutputGetDesc(pOutput.value, outDesc.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputGetDisplayModeList1 x12OutputGetDisplayModeList1
#define _abca16d6_pOutput(value) value
#define _abca16d6_EnumFormat(value) value
#define _abca16d6_Flags(value) value
#define _abca16d6_pNumModes(value) value
#define _abca16d6_outDesc(value) value
#define _abca16d6_optionalFile(value) value
#define _abca16d6_optionalLine(value) value
#else
typedef struct _abca16d6_pOutput { _abca16d6_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _abca16d6_pOutput(const _abca16d6_pOutput &) = delete; } _abca16d6_pOutput;
typedef struct _abca16d6_EnumFormat { _abca16d6_EnumFormat(DXGI_FORMAT value): value(value) {}; DXGI_FORMAT value; _abca16d6_EnumFormat(const _abca16d6_EnumFormat &) = delete; } _abca16d6_EnumFormat;
typedef struct _abca16d6_Flags { _abca16d6_Flags(DXGI_ENUM_MODES_FLAGS value): value(value) {}; DXGI_ENUM_MODES_FLAGS value; _abca16d6_Flags(const _abca16d6_Flags &) = delete; } _abca16d6_Flags;
typedef struct _abca16d6_pNumModes { _abca16d6_pNumModes(unsigned* value): value(value) {}; unsigned* value; _abca16d6_pNumModes(const _abca16d6_pNumModes &) = delete; } _abca16d6_pNumModes;
typedef struct _abca16d6_outDesc { _abca16d6_outDesc(DXGI_MODE_DESC1* value): value(value) {}; DXGI_MODE_DESC1* value; _abca16d6_outDesc(const _abca16d6_outDesc &) = delete; } _abca16d6_outDesc;
typedef struct _abca16d6_optionalFile { _abca16d6_optionalFile(char* value): value(value) {}; char* value; _abca16d6_optionalFile(const _abca16d6_optionalFile &) = delete; } _abca16d6_optionalFile;
typedef struct _abca16d6_optionalLine { _abca16d6_optionalLine(int value): value(value) {}; int value; _abca16d6_optionalLine(const _abca16d6_optionalLine &) = delete; } _abca16d6_optionalLine;
HRESULT np_x12OutputGetDisplayModeList1(_abca16d6_pOutput & pOutput, _abca16d6_EnumFormat & EnumFormat, _abca16d6_Flags & Flags, _abca16d6_pNumModes & pNumModes, _abca16d6_outDesc & outDesc, _abca16d6_optionalFile & optionalFile, _abca16d6_optionalLine & optionalLine) {
  return x12OutputGetDisplayModeList1(pOutput.value, EnumFormat.value, Flags.value, pNumModes.value, outDesc.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputFindClosestMatchingMode1 x12OutputFindClosestMatchingMode1
#define _4d60e08d_pOutput(value) value
#define _4d60e08d_pModeToMatch(value) value
#define _4d60e08d_pClosestMatch(value) value
#define _4d60e08d_pConcernedDevice(value) value
#define _4d60e08d_optionalFile(value) value
#define _4d60e08d_optionalLine(value) value
#else
typedef struct _4d60e08d_pOutput { _4d60e08d_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _4d60e08d_pOutput(const _4d60e08d_pOutput &) = delete; } _4d60e08d_pOutput;
typedef struct _4d60e08d_pModeToMatch { _4d60e08d_pModeToMatch(DXGI_MODE_DESC1* value): value(value) {}; DXGI_MODE_DESC1* value; _4d60e08d_pModeToMatch(const _4d60e08d_pModeToMatch &) = delete; } _4d60e08d_pModeToMatch;
typedef struct _4d60e08d_pClosestMatch { _4d60e08d_pClosestMatch(DXGI_MODE_DESC1* value): value(value) {}; DXGI_MODE_DESC1* value; _4d60e08d_pClosestMatch(const _4d60e08d_pClosestMatch &) = delete; } _4d60e08d_pClosestMatch;
typedef struct _4d60e08d_pConcernedDevice { _4d60e08d_pConcernedDevice(X12Device3* value): value(value) {}; X12Device3* value; _4d60e08d_pConcernedDevice(const _4d60e08d_pConcernedDevice &) = delete; } _4d60e08d_pConcernedDevice;
typedef struct _4d60e08d_optionalFile { _4d60e08d_optionalFile(char* value): value(value) {}; char* value; _4d60e08d_optionalFile(const _4d60e08d_optionalFile &) = delete; } _4d60e08d_optionalFile;
typedef struct _4d60e08d_optionalLine { _4d60e08d_optionalLine(int value): value(value) {}; int value; _4d60e08d_optionalLine(const _4d60e08d_optionalLine &) = delete; } _4d60e08d_optionalLine;
HRESULT np_x12OutputFindClosestMatchingMode1(_4d60e08d_pOutput & pOutput, _4d60e08d_pModeToMatch & pModeToMatch, _4d60e08d_pClosestMatch & pClosestMatch, _4d60e08d_pConcernedDevice & pConcernedDevice, _4d60e08d_optionalFile & optionalFile, _4d60e08d_optionalLine & optionalLine) {
  return x12OutputFindClosestMatchingMode1(pOutput.value, pModeToMatch.value, pClosestMatch.value, pConcernedDevice.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputWaitForVBlank x12OutputWaitForVBlank
#define _850cda34_pOutput(value) value
#define _850cda34_optionalFile(value) value
#define _850cda34_optionalLine(value) value
#else
typedef struct _850cda34_pOutput { _850cda34_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _850cda34_pOutput(const _850cda34_pOutput &) = delete; } _850cda34_pOutput;
typedef struct _850cda34_optionalFile { _850cda34_optionalFile(char* value): value(value) {}; char* value; _850cda34_optionalFile(const _850cda34_optionalFile &) = delete; } _850cda34_optionalFile;
typedef struct _850cda34_optionalLine { _850cda34_optionalLine(int value): value(value) {}; int value; _850cda34_optionalLine(const _850cda34_optionalLine &) = delete; } _850cda34_optionalLine;
HRESULT np_x12OutputWaitForVBlank(_850cda34_pOutput & pOutput, _850cda34_optionalFile & optionalFile, _850cda34_optionalLine & optionalLine) {
  return x12OutputWaitForVBlank(pOutput.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputGetGammaControlCapabilities x12OutputGetGammaControlCapabilities
#define _ede16979_pOutput(value) value
#define _ede16979_outGammaCaps(value) value
#define _ede16979_optionalFile(value) value
#define _ede16979_optionalLine(value) value
#else
typedef struct _ede16979_pOutput { _ede16979_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _ede16979_pOutput(const _ede16979_pOutput &) = delete; } _ede16979_pOutput;
typedef struct _ede16979_outGammaCaps { _ede16979_outGammaCaps(DXGI_GAMMA_CONTROL_CAPABILITIES* value): value(value) {}; DXGI_GAMMA_CONTROL_CAPABILITIES* value; _ede16979_outGammaCaps(const _ede16979_outGammaCaps &) = delete; } _ede16979_outGammaCaps;
typedef struct _ede16979_optionalFile { _ede16979_optionalFile(char* value): value(value) {}; char* value; _ede16979_optionalFile(const _ede16979_optionalFile &) = delete; } _ede16979_optionalFile;
typedef struct _ede16979_optionalLine { _ede16979_optionalLine(int value): value(value) {}; int value; _ede16979_optionalLine(const _ede16979_optionalLine &) = delete; } _ede16979_optionalLine;
HRESULT np_x12OutputGetGammaControlCapabilities(_ede16979_pOutput & pOutput, _ede16979_outGammaCaps & outGammaCaps, _ede16979_optionalFile & optionalFile, _ede16979_optionalLine & optionalLine) {
  return x12OutputGetGammaControlCapabilities(pOutput.value, outGammaCaps.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputSetGammaControl x12OutputSetGammaControl
#define _028483db_pOutput(value) value
#define _028483db_pArray(value) value
#define _028483db_optionalFile(value) value
#define _028483db_optionalLine(value) value
#else
typedef struct _028483db_pOutput { _028483db_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _028483db_pOutput(const _028483db_pOutput &) = delete; } _028483db_pOutput;
typedef struct _028483db_pArray { _028483db_pArray(DXGI_GAMMA_CONTROL* value): value(value) {}; DXGI_GAMMA_CONTROL* value; _028483db_pArray(const _028483db_pArray &) = delete; } _028483db_pArray;
typedef struct _028483db_optionalFile { _028483db_optionalFile(char* value): value(value) {}; char* value; _028483db_optionalFile(const _028483db_optionalFile &) = delete; } _028483db_optionalFile;
typedef struct _028483db_optionalLine { _028483db_optionalLine(int value): value(value) {}; int value; _028483db_optionalLine(const _028483db_optionalLine &) = delete; } _028483db_optionalLine;
HRESULT np_x12OutputSetGammaControl(_028483db_pOutput & pOutput, _028483db_pArray & pArray, _028483db_optionalFile & optionalFile, _028483db_optionalLine & optionalLine) {
  return x12OutputSetGammaControl(pOutput.value, pArray.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputGetGammaControl x12OutputGetGammaControl
#define _f6b0344f_pOutput(value) value
#define _f6b0344f_outArray(value) value
#define _f6b0344f_optionalFile(value) value
#define _f6b0344f_optionalLine(value) value
#else
typedef struct _f6b0344f_pOutput { _f6b0344f_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _f6b0344f_pOutput(const _f6b0344f_pOutput &) = delete; } _f6b0344f_pOutput;
typedef struct _f6b0344f_outArray { _f6b0344f_outArray(DXGI_GAMMA_CONTROL* value): value(value) {}; DXGI_GAMMA_CONTROL* value; _f6b0344f_outArray(const _f6b0344f_outArray &) = delete; } _f6b0344f_outArray;
typedef struct _f6b0344f_optionalFile { _f6b0344f_optionalFile(char* value): value(value) {}; char* value; _f6b0344f_optionalFile(const _f6b0344f_optionalFile &) = delete; } _f6b0344f_optionalFile;
typedef struct _f6b0344f_optionalLine { _f6b0344f_optionalLine(int value): value(value) {}; int value; _f6b0344f_optionalLine(const _f6b0344f_optionalLine &) = delete; } _f6b0344f_optionalLine;
HRESULT np_x12OutputGetGammaControl(_f6b0344f_pOutput & pOutput, _f6b0344f_outArray & outArray, _f6b0344f_optionalFile & optionalFile, _f6b0344f_optionalLine & optionalLine) {
  return x12OutputGetGammaControl(pOutput.value, outArray.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputGetFrameStatistics x12OutputGetFrameStatistics
#define _ed83eaeb_pOutput(value) value
#define _ed83eaeb_outStats(value) value
#define _ed83eaeb_optionalFile(value) value
#define _ed83eaeb_optionalLine(value) value
#else
typedef struct _ed83eaeb_pOutput { _ed83eaeb_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _ed83eaeb_pOutput(const _ed83eaeb_pOutput &) = delete; } _ed83eaeb_pOutput;
typedef struct _ed83eaeb_outStats { _ed83eaeb_outStats(DXGI_FRAME_STATISTICS* value): value(value) {}; DXGI_FRAME_STATISTICS* value; _ed83eaeb_outStats(const _ed83eaeb_outStats &) = delete; } _ed83eaeb_outStats;
typedef struct _ed83eaeb_optionalFile { _ed83eaeb_optionalFile(char* value): value(value) {}; char* value; _ed83eaeb_optionalFile(const _ed83eaeb_optionalFile &) = delete; } _ed83eaeb_optionalFile;
typedef struct _ed83eaeb_optionalLine { _ed83eaeb_optionalLine(int value): value(value) {}; int value; _ed83eaeb_optionalLine(const _ed83eaeb_optionalLine &) = delete; } _ed83eaeb_optionalLine;
HRESULT np_x12OutputGetFrameStatistics(_ed83eaeb_pOutput & pOutput, _ed83eaeb_outStats & outStats, _ed83eaeb_optionalFile & optionalFile, _ed83eaeb_optionalLine & optionalLine) {
  return x12OutputGetFrameStatistics(pOutput.value, outStats.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputSupportsOverlays x12OutputSupportsOverlays
#define _513e282e_pOutput(value) value
#define _513e282e_optionalFile(value) value
#define _513e282e_optionalLine(value) value
#else
typedef struct _513e282e_pOutput { _513e282e_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _513e282e_pOutput(const _513e282e_pOutput &) = delete; } _513e282e_pOutput;
typedef struct _513e282e_optionalFile { _513e282e_optionalFile(char* value): value(value) {}; char* value; _513e282e_optionalFile(const _513e282e_optionalFile &) = delete; } _513e282e_optionalFile;
typedef struct _513e282e_optionalLine { _513e282e_optionalLine(int value): value(value) {}; int value; _513e282e_optionalLine(const _513e282e_optionalLine &) = delete; } _513e282e_optionalLine;
X12Bool np_x12OutputSupportsOverlays(_513e282e_pOutput & pOutput, _513e282e_optionalFile & optionalFile, _513e282e_optionalLine & optionalLine) {
  return x12OutputSupportsOverlays(pOutput.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputCheckOverlaySupport x12OutputCheckOverlaySupport
#define _0e69d7c5_pOutput(value) value
#define _0e69d7c5_EnumFormat(value) value
#define _0e69d7c5_pConcernedDevice(value) value
#define _0e69d7c5_pFlags(value) value
#define _0e69d7c5_optionalFile(value) value
#define _0e69d7c5_optionalLine(value) value
#else
typedef struct _0e69d7c5_pOutput { _0e69d7c5_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _0e69d7c5_pOutput(const _0e69d7c5_pOutput &) = delete; } _0e69d7c5_pOutput;
typedef struct _0e69d7c5_EnumFormat { _0e69d7c5_EnumFormat(DXGI_FORMAT value): value(value) {}; DXGI_FORMAT value; _0e69d7c5_EnumFormat(const _0e69d7c5_EnumFormat &) = delete; } _0e69d7c5_EnumFormat;
typedef struct _0e69d7c5_pConcernedDevice { _0e69d7c5_pConcernedDevice(X12Device3* value): value(value) {}; X12Device3* value; _0e69d7c5_pConcernedDevice(const _0e69d7c5_pConcernedDevice &) = delete; } _0e69d7c5_pConcernedDevice;
typedef struct _0e69d7c5_pFlags { _0e69d7c5_pFlags(unsigned* value): value(value) {}; unsigned* value; _0e69d7c5_pFlags(const _0e69d7c5_pFlags &) = delete; } _0e69d7c5_pFlags;
typedef struct _0e69d7c5_optionalFile { _0e69d7c5_optionalFile(char* value): value(value) {}; char* value; _0e69d7c5_optionalFile(const _0e69d7c5_optionalFile &) = delete; } _0e69d7c5_optionalFile;
typedef struct _0e69d7c5_optionalLine { _0e69d7c5_optionalLine(int value): value(value) {}; int value; _0e69d7c5_optionalLine(const _0e69d7c5_optionalLine &) = delete; } _0e69d7c5_optionalLine;
HRESULT np_x12OutputCheckOverlaySupport(_0e69d7c5_pOutput & pOutput, _0e69d7c5_EnumFormat & EnumFormat, _0e69d7c5_pConcernedDevice & pConcernedDevice, _0e69d7c5_pFlags & pFlags, _0e69d7c5_optionalFile & optionalFile, _0e69d7c5_optionalLine & optionalLine) {
  return x12OutputCheckOverlaySupport(pOutput.value, EnumFormat.value, pConcernedDevice.value, pFlags.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12OutputCheckOverlayColorSpaceSupport x12OutputCheckOverlayColorSpaceSupport
#define _d6cd0087_pOutput(value) value
#define _d6cd0087_Format(value) value
#define _d6cd0087_ColorSpace(value) value
#define _d6cd0087_pConcernedDevice(value) value
#define _d6cd0087_outFlags(value) value
#define _d6cd0087_optionalFile(value) value
#define _d6cd0087_optionalLine(value) value
#else
typedef struct _d6cd0087_pOutput { _d6cd0087_pOutput(X12Output4* value): value(value) {}; X12Output4* value; _d6cd0087_pOutput(const _d6cd0087_pOutput &) = delete; } _d6cd0087_pOutput;
typedef struct _d6cd0087_Format { _d6cd0087_Format(DXGI_FORMAT value): value(value) {}; DXGI_FORMAT value; _d6cd0087_Format(const _d6cd0087_Format &) = delete; } _d6cd0087_Format;
typedef struct _d6cd0087_ColorSpace { _d6cd0087_ColorSpace(DXGI_COLOR_SPACE_TYPE value): value(value) {}; DXGI_COLOR_SPACE_TYPE value; _d6cd0087_ColorSpace(const _d6cd0087_ColorSpace &) = delete; } _d6cd0087_ColorSpace;
typedef struct _d6cd0087_pConcernedDevice { _d6cd0087_pConcernedDevice(X12Device3* value): value(value) {}; X12Device3* value; _d6cd0087_pConcernedDevice(const _d6cd0087_pConcernedDevice &) = delete; } _d6cd0087_pConcernedDevice;
typedef struct _d6cd0087_outFlags { _d6cd0087_outFlags(DXGI_OVERLAY_COLOR_SPACE_SUPPORT_FLAGS* value): value(value) {}; DXGI_OVERLAY_COLOR_SPACE_SUPPORT_FLAGS* value; _d6cd0087_outFlags(const _d6cd0087_outFlags &) = delete; } _d6cd0087_outFlags;
typedef struct _d6cd0087_optionalFile { _d6cd0087_optionalFile(char* value): value(value) {}; char* value; _d6cd0087_optionalFile(const _d6cd0087_optionalFile &) = delete; } _d6cd0087_optionalFile;
typedef struct _d6cd0087_optionalLine { _d6cd0087_optionalLine(int value): value(value) {}; int value; _d6cd0087_optionalLine(const _d6cd0087_optionalLine &) = delete; } _d6cd0087_optionalLine;
HRESULT np_x12OutputCheckOverlayColorSpaceSupport(_d6cd0087_pOutput & pOutput, _d6cd0087_Format & Format, _d6cd0087_ColorSpace & ColorSpace, _d6cd0087_pConcernedDevice & pConcernedDevice, _d6cd0087_outFlags & outFlags, _d6cd0087_optionalFile & optionalFile, _d6cd0087_optionalLine & optionalLine) {
  return x12OutputCheckOverlayColorSpaceSupport(pOutput.value, Format.value, ColorSpace.value, pConcernedDevice.value, outFlags.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12ObjectSetName x12ObjectSetName
#define _2e6913bb_handle(value) value
#define _2e6913bb_Name(value) value
#define _2e6913bb_optionalFile(value) value
#define _2e6913bb_optionalLine(value) value
#else
typedef struct _2e6913bb_handle { _2e6913bb_handle(void* value): value(value) {}; void* value; _2e6913bb_handle(const _2e6913bb_handle &) = delete; } _2e6913bb_handle;
typedef struct _2e6913bb_Name { _2e6913bb_Name(wchar_t* value): value(value) {}; wchar_t* value; _2e6913bb_Name(const _2e6913bb_Name &) = delete; } _2e6913bb_Name;
typedef struct _2e6913bb_optionalFile { _2e6913bb_optionalFile(char* value): value(value) {}; char* value; _2e6913bb_optionalFile(const _2e6913bb_optionalFile &) = delete; } _2e6913bb_optionalFile;
typedef struct _2e6913bb_optionalLine { _2e6913bb_optionalLine(int value): value(value) {}; int value; _2e6913bb_optionalLine(const _2e6913bb_optionalLine &) = delete; } _2e6913bb_optionalLine;
HRESULT np_x12ObjectSetName(_2e6913bb_handle & handle, _2e6913bb_Name & Name, _2e6913bb_optionalFile & optionalFile, _2e6913bb_optionalLine & optionalLine) {
  return x12ObjectSetName(handle.value, Name.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12Release x12Release
#define _4f9da3ac_handle(value) value
#define _4f9da3ac_optionalFile(value) value
#define _4f9da3ac_optionalLine(value) value
#else
typedef struct _4f9da3ac_handle { _4f9da3ac_handle(void* value): value(value) {}; void* value; _4f9da3ac_handle(const _4f9da3ac_handle &) = delete; } _4f9da3ac_handle;
typedef struct _4f9da3ac_optionalFile { _4f9da3ac_optionalFile(char* value): value(value) {}; char* value; _4f9da3ac_optionalFile(const _4f9da3ac_optionalFile &) = delete; } _4f9da3ac_optionalFile;
typedef struct _4f9da3ac_optionalLine { _4f9da3ac_optionalLine(int value): value(value) {}; int value; _4f9da3ac_optionalLine(const _4f9da3ac_optionalLine &) = delete; } _4f9da3ac_optionalLine;
void np_x12Release(_4f9da3ac_handle & handle, _4f9da3ac_optionalFile & optionalFile, _4f9da3ac_optionalLine & optionalLine) {
  x12Release(handle.value, optionalFile.value, optionalLine.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListSetMarker x12CommandListSetMarker
#define _16d2881c_handle(value) value
#define _16d2881c_Metadata(value) value
#define _16d2881c_pData(value) value
#define _16d2881c_Size(value) value
#else
typedef struct _16d2881c_handle { _16d2881c_handle(X12CommandList* value): value(value) {}; X12CommandList* value; _16d2881c_handle(const _16d2881c_handle &) = delete; } _16d2881c_handle;
typedef struct _16d2881c_Metadata { _16d2881c_Metadata(unsigned value): value(value) {}; unsigned value; _16d2881c_Metadata(const _16d2881c_Metadata &) = delete; } _16d2881c_Metadata;
typedef struct _16d2881c_pData { _16d2881c_pData(void* value): value(value) {}; void* value; _16d2881c_pData(const _16d2881c_pData &) = delete; } _16d2881c_pData;
typedef struct _16d2881c_Size { _16d2881c_Size(unsigned value): value(value) {}; unsigned value; _16d2881c_Size(const _16d2881c_Size &) = delete; } _16d2881c_Size;
void np_x12CommandListSetMarker(_16d2881c_handle & handle, _16d2881c_Metadata & Metadata, _16d2881c_pData & pData, _16d2881c_Size & Size) {
  x12CommandListSetMarker(handle.value, Metadata.value, pData.value, Size.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListBeginEvent x12CommandListBeginEvent
#define _7500dcee_handle(value) value
#define _7500dcee_Metadata(value) value
#define _7500dcee_pData(value) value
#define _7500dcee_Size(value) value
#else
typedef struct _7500dcee_handle { _7500dcee_handle(X12CommandList* value): value(value) {}; X12CommandList* value; _7500dcee_handle(const _7500dcee_handle &) = delete; } _7500dcee_handle;
typedef struct _7500dcee_Metadata { _7500dcee_Metadata(unsigned value): value(value) {}; unsigned value; _7500dcee_Metadata(const _7500dcee_Metadata &) = delete; } _7500dcee_Metadata;
typedef struct _7500dcee_pData { _7500dcee_pData(void* value): value(value) {}; void* value; _7500dcee_pData(const _7500dcee_pData &) = delete; } _7500dcee_pData;
typedef struct _7500dcee_Size { _7500dcee_Size(unsigned value): value(value) {}; unsigned value; _7500dcee_Size(const _7500dcee_Size &) = delete; } _7500dcee_Size;
void np_x12CommandListBeginEvent(_7500dcee_handle & handle, _7500dcee_Metadata & Metadata, _7500dcee_pData & pData, _7500dcee_Size & Size) {
  x12CommandListBeginEvent(handle.value, Metadata.value, pData.value, Size.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandListEndEvent x12CommandListEndEvent
#define _a016ee3a_handle(value) value
#else
typedef struct _a016ee3a_handle { _a016ee3a_handle(X12CommandList* value): value(value) {}; X12CommandList* value; _a016ee3a_handle(const _a016ee3a_handle &) = delete; } _a016ee3a_handle;
void np_x12CommandListEndEvent(_a016ee3a_handle & handle) {
  x12CommandListEndEvent(handle.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandQueueSetMarker x12CommandQueueSetMarker
#define _2056627d_handle(value) value
#define _2056627d_Metadata(value) value
#define _2056627d_pData(value) value
#define _2056627d_Size(value) value
#else
typedef struct _2056627d_handle { _2056627d_handle(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _2056627d_handle(const _2056627d_handle &) = delete; } _2056627d_handle;
typedef struct _2056627d_Metadata { _2056627d_Metadata(unsigned value): value(value) {}; unsigned value; _2056627d_Metadata(const _2056627d_Metadata &) = delete; } _2056627d_Metadata;
typedef struct _2056627d_pData { _2056627d_pData(void* value): value(value) {}; void* value; _2056627d_pData(const _2056627d_pData &) = delete; } _2056627d_pData;
typedef struct _2056627d_Size { _2056627d_Size(unsigned value): value(value) {}; unsigned value; _2056627d_Size(const _2056627d_Size &) = delete; } _2056627d_Size;
void np_x12CommandQueueSetMarker(_2056627d_handle & handle, _2056627d_Metadata & Metadata, _2056627d_pData & pData, _2056627d_Size & Size) {
  x12CommandQueueSetMarker(handle.value, Metadata.value, pData.value, Size.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandQueueBeginEvent x12CommandQueueBeginEvent
#define _a3651f57_handle(value) value
#define _a3651f57_Metadata(value) value
#define _a3651f57_pData(value) value
#define _a3651f57_Size(value) value
#else
typedef struct _a3651f57_handle { _a3651f57_handle(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _a3651f57_handle(const _a3651f57_handle &) = delete; } _a3651f57_handle;
typedef struct _a3651f57_Metadata { _a3651f57_Metadata(unsigned value): value(value) {}; unsigned value; _a3651f57_Metadata(const _a3651f57_Metadata &) = delete; } _a3651f57_Metadata;
typedef struct _a3651f57_pData { _a3651f57_pData(void* value): value(value) {}; void* value; _a3651f57_pData(const _a3651f57_pData &) = delete; } _a3651f57_pData;
typedef struct _a3651f57_Size { _a3651f57_Size(unsigned value): value(value) {}; unsigned value; _a3651f57_Size(const _a3651f57_Size &) = delete; } _a3651f57_Size;
void np_x12CommandQueueBeginEvent(_a3651f57_handle & handle, _a3651f57_Metadata & Metadata, _a3651f57_pData & pData, _a3651f57_Size & Size) {
  x12CommandQueueBeginEvent(handle.value, Metadata.value, pData.value, Size.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_x12CommandQueueEndEvent x12CommandQueueEndEvent
#define _3af02fbb_handle(value) value
#else
typedef struct _3af02fbb_handle { _3af02fbb_handle(X12CommandQueue* value): value(value) {}; X12CommandQueue* value; _3af02fbb_handle(const _3af02fbb_handle &) = delete; } _3af02fbb_handle;
void np_x12CommandQueueEndEvent(_3af02fbb_handle & handle) {
  x12CommandQueueEndEvent(handle.value);
}
#endif

