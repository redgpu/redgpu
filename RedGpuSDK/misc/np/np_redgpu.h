#pragma once

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryGetBudget redMemoryGetBudget
#define _9b481c8c_context(value) value
#define _9b481c8c_gpu(value) value
#define _9b481c8c_outMemoryBudget(value) value
#define _9b481c8c_outStatuses(value) value
#define _9b481c8c_optionalFile(value) value
#define _9b481c8c_optionalLine(value) value
#define _9b481c8c_optionalUserData(value) value
#else
typedef struct _9b481c8c_context { _9b481c8c_context(RedContext value): value(value) {}; RedContext value; _9b481c8c_context(const _9b481c8c_context &) = delete; } _9b481c8c_context;
typedef struct _9b481c8c_gpu { _9b481c8c_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _9b481c8c_gpu(const _9b481c8c_gpu &) = delete; } _9b481c8c_gpu;
typedef struct _9b481c8c_outMemoryBudget { _9b481c8c_outMemoryBudget(RedMemoryBudget* value): value(value) {}; RedMemoryBudget* value; _9b481c8c_outMemoryBudget(const _9b481c8c_outMemoryBudget &) = delete; } _9b481c8c_outMemoryBudget;
typedef struct _9b481c8c_outStatuses { _9b481c8c_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _9b481c8c_outStatuses(const _9b481c8c_outStatuses &) = delete; } _9b481c8c_outStatuses;
typedef struct _9b481c8c_optionalFile { _9b481c8c_optionalFile(char* value): value(value) {}; char* value; _9b481c8c_optionalFile(const _9b481c8c_optionalFile &) = delete; } _9b481c8c_optionalFile;
typedef struct _9b481c8c_optionalLine { _9b481c8c_optionalLine(int value): value(value) {}; int value; _9b481c8c_optionalLine(const _9b481c8c_optionalLine &) = delete; } _9b481c8c_optionalLine;
typedef struct _9b481c8c_optionalUserData { _9b481c8c_optionalUserData(void* value): value(value) {}; void* value; _9b481c8c_optionalUserData(const _9b481c8c_optionalUserData &) = delete; } _9b481c8c_optionalUserData;
void np_redMemoryGetBudget(_9b481c8c_context & context, _9b481c8c_gpu & gpu, _9b481c8c_outMemoryBudget & outMemoryBudget, _9b481c8c_outStatuses & outStatuses, _9b481c8c_optionalFile & optionalFile, _9b481c8c_optionalLine & optionalLine, _9b481c8c_optionalUserData & optionalUserData) {
  redMemoryGetBudget(context.value, gpu.value, outMemoryBudget.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryAllocate redMemoryAllocate
#define _66d6050d_context(value) value
#define _66d6050d_gpu(value) value
#define _66d6050d_handleName(value) value
#define _66d6050d_bytesCount(value) value
#define _66d6050d_memoryTypeIndex(value) value
#define _66d6050d_dedicateToArray(value) value
#define _66d6050d_dedicateToImage(value) value
#define _66d6050d_memoryBitflags(value) value
#define _66d6050d_outMemory(value) value
#define _66d6050d_outStatuses(value) value
#define _66d6050d_optionalFile(value) value
#define _66d6050d_optionalLine(value) value
#define _66d6050d_optionalUserData(value) value
#else
typedef struct _66d6050d_context { _66d6050d_context(RedContext value): value(value) {}; RedContext value; _66d6050d_context(const _66d6050d_context &) = delete; } _66d6050d_context;
typedef struct _66d6050d_gpu { _66d6050d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _66d6050d_gpu(const _66d6050d_gpu &) = delete; } _66d6050d_gpu;
typedef struct _66d6050d_handleName { _66d6050d_handleName(char* value): value(value) {}; char* value; _66d6050d_handleName(const _66d6050d_handleName &) = delete; } _66d6050d_handleName;
typedef struct _66d6050d_bytesCount { _66d6050d_bytesCount(uint64_t value): value(value) {}; uint64_t value; _66d6050d_bytesCount(const _66d6050d_bytesCount &) = delete; } _66d6050d_bytesCount;
typedef struct _66d6050d_memoryTypeIndex { _66d6050d_memoryTypeIndex(unsigned value): value(value) {}; unsigned value; _66d6050d_memoryTypeIndex(const _66d6050d_memoryTypeIndex &) = delete; } _66d6050d_memoryTypeIndex;
typedef struct _66d6050d_dedicateToArray { _66d6050d_dedicateToArray(RedHandleArray value): value(value) {}; RedHandleArray value; _66d6050d_dedicateToArray(const _66d6050d_dedicateToArray &) = delete; } _66d6050d_dedicateToArray;
typedef struct _66d6050d_dedicateToImage { _66d6050d_dedicateToImage(RedHandleImage value): value(value) {}; RedHandleImage value; _66d6050d_dedicateToImage(const _66d6050d_dedicateToImage &) = delete; } _66d6050d_dedicateToImage;
typedef struct _66d6050d_memoryBitflags { _66d6050d_memoryBitflags(unsigned value): value(value) {}; unsigned value; _66d6050d_memoryBitflags(const _66d6050d_memoryBitflags &) = delete; } _66d6050d_memoryBitflags;
typedef struct _66d6050d_outMemory { _66d6050d_outMemory(RedHandleMemory* value): value(value) {}; RedHandleMemory* value; _66d6050d_outMemory(const _66d6050d_outMemory &) = delete; } _66d6050d_outMemory;
typedef struct _66d6050d_outStatuses { _66d6050d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _66d6050d_outStatuses(const _66d6050d_outStatuses &) = delete; } _66d6050d_outStatuses;
typedef struct _66d6050d_optionalFile { _66d6050d_optionalFile(char* value): value(value) {}; char* value; _66d6050d_optionalFile(const _66d6050d_optionalFile &) = delete; } _66d6050d_optionalFile;
typedef struct _66d6050d_optionalLine { _66d6050d_optionalLine(int value): value(value) {}; int value; _66d6050d_optionalLine(const _66d6050d_optionalLine &) = delete; } _66d6050d_optionalLine;
typedef struct _66d6050d_optionalUserData { _66d6050d_optionalUserData(void* value): value(value) {}; void* value; _66d6050d_optionalUserData(const _66d6050d_optionalUserData &) = delete; } _66d6050d_optionalUserData;
void np_redMemoryAllocate(_66d6050d_context & context, _66d6050d_gpu & gpu, _66d6050d_handleName & handleName, _66d6050d_bytesCount & bytesCount, _66d6050d_memoryTypeIndex & memoryTypeIndex, _66d6050d_dedicateToArray & dedicateToArray, _66d6050d_dedicateToImage & dedicateToImage, _66d6050d_memoryBitflags & memoryBitflags, _66d6050d_outMemory & outMemory, _66d6050d_outStatuses & outStatuses, _66d6050d_optionalFile & optionalFile, _66d6050d_optionalLine & optionalLine, _66d6050d_optionalUserData & optionalUserData) {
  redMemoryAllocate(context.value, gpu.value, handleName.value, bytesCount.value, memoryTypeIndex.value, dedicateToArray.value, dedicateToImage.value, memoryBitflags.value, outMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryAllocateMappable redMemoryAllocateMappable
#define _6d4c9126_context(value) value
#define _6d4c9126_gpu(value) value
#define _6d4c9126_handleName(value) value
#define _6d4c9126_dedicate(value) value
#define _6d4c9126_array(value) value
#define _6d4c9126_arrayMemoryBytesCount(value) value
#define _6d4c9126_memoryTypeIndex(value) value
#define _6d4c9126_memoryBitflags(value) value
#define _6d4c9126_outMemory(value) value
#define _6d4c9126_outStatuses(value) value
#define _6d4c9126_optionalFile(value) value
#define _6d4c9126_optionalLine(value) value
#define _6d4c9126_optionalUserData(value) value
#else
typedef struct _6d4c9126_context { _6d4c9126_context(RedContext value): value(value) {}; RedContext value; _6d4c9126_context(const _6d4c9126_context &) = delete; } _6d4c9126_context;
typedef struct _6d4c9126_gpu { _6d4c9126_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _6d4c9126_gpu(const _6d4c9126_gpu &) = delete; } _6d4c9126_gpu;
typedef struct _6d4c9126_handleName { _6d4c9126_handleName(char* value): value(value) {}; char* value; _6d4c9126_handleName(const _6d4c9126_handleName &) = delete; } _6d4c9126_handleName;
typedef struct _6d4c9126_dedicate { _6d4c9126_dedicate(RedBool32 value): value(value) {}; RedBool32 value; _6d4c9126_dedicate(const _6d4c9126_dedicate &) = delete; } _6d4c9126_dedicate;
typedef struct _6d4c9126_array { _6d4c9126_array(RedHandleArray value): value(value) {}; RedHandleArray value; _6d4c9126_array(const _6d4c9126_array &) = delete; } _6d4c9126_array;
typedef struct _6d4c9126_arrayMemoryBytesCount { _6d4c9126_arrayMemoryBytesCount(uint64_t value): value(value) {}; uint64_t value; _6d4c9126_arrayMemoryBytesCount(const _6d4c9126_arrayMemoryBytesCount &) = delete; } _6d4c9126_arrayMemoryBytesCount;
typedef struct _6d4c9126_memoryTypeIndex { _6d4c9126_memoryTypeIndex(unsigned value): value(value) {}; unsigned value; _6d4c9126_memoryTypeIndex(const _6d4c9126_memoryTypeIndex &) = delete; } _6d4c9126_memoryTypeIndex;
typedef struct _6d4c9126_memoryBitflags { _6d4c9126_memoryBitflags(unsigned value): value(value) {}; unsigned value; _6d4c9126_memoryBitflags(const _6d4c9126_memoryBitflags &) = delete; } _6d4c9126_memoryBitflags;
typedef struct _6d4c9126_outMemory { _6d4c9126_outMemory(RedHandleMemory* value): value(value) {}; RedHandleMemory* value; _6d4c9126_outMemory(const _6d4c9126_outMemory &) = delete; } _6d4c9126_outMemory;
typedef struct _6d4c9126_outStatuses { _6d4c9126_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _6d4c9126_outStatuses(const _6d4c9126_outStatuses &) = delete; } _6d4c9126_outStatuses;
typedef struct _6d4c9126_optionalFile { _6d4c9126_optionalFile(char* value): value(value) {}; char* value; _6d4c9126_optionalFile(const _6d4c9126_optionalFile &) = delete; } _6d4c9126_optionalFile;
typedef struct _6d4c9126_optionalLine { _6d4c9126_optionalLine(int value): value(value) {}; int value; _6d4c9126_optionalLine(const _6d4c9126_optionalLine &) = delete; } _6d4c9126_optionalLine;
typedef struct _6d4c9126_optionalUserData { _6d4c9126_optionalUserData(void* value): value(value) {}; void* value; _6d4c9126_optionalUserData(const _6d4c9126_optionalUserData &) = delete; } _6d4c9126_optionalUserData;
void np_redMemoryAllocateMappable(_6d4c9126_context & context, _6d4c9126_gpu & gpu, _6d4c9126_handleName & handleName, _6d4c9126_dedicate & dedicate, _6d4c9126_array & array, _6d4c9126_arrayMemoryBytesCount & arrayMemoryBytesCount, _6d4c9126_memoryTypeIndex & memoryTypeIndex, _6d4c9126_memoryBitflags & memoryBitflags, _6d4c9126_outMemory & outMemory, _6d4c9126_outStatuses & outStatuses, _6d4c9126_optionalFile & optionalFile, _6d4c9126_optionalLine & optionalLine, _6d4c9126_optionalUserData & optionalUserData) {
  redMemoryAllocateMappable(context.value, gpu.value, handleName.value, dedicate.value, array.value, arrayMemoryBytesCount.value, memoryTypeIndex.value, memoryBitflags.value, outMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryFree redMemoryFree
#define _23089e5d_context(value) value
#define _23089e5d_gpu(value) value
#define _23089e5d_memory(value) value
#define _23089e5d_optionalFile(value) value
#define _23089e5d_optionalLine(value) value
#define _23089e5d_optionalUserData(value) value
#else
typedef struct _23089e5d_context { _23089e5d_context(RedContext value): value(value) {}; RedContext value; _23089e5d_context(const _23089e5d_context &) = delete; } _23089e5d_context;
typedef struct _23089e5d_gpu { _23089e5d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _23089e5d_gpu(const _23089e5d_gpu &) = delete; } _23089e5d_gpu;
typedef struct _23089e5d_memory { _23089e5d_memory(RedHandleMemory value): value(value) {}; RedHandleMemory value; _23089e5d_memory(const _23089e5d_memory &) = delete; } _23089e5d_memory;
typedef struct _23089e5d_optionalFile { _23089e5d_optionalFile(char* value): value(value) {}; char* value; _23089e5d_optionalFile(const _23089e5d_optionalFile &) = delete; } _23089e5d_optionalFile;
typedef struct _23089e5d_optionalLine { _23089e5d_optionalLine(int value): value(value) {}; int value; _23089e5d_optionalLine(const _23089e5d_optionalLine &) = delete; } _23089e5d_optionalLine;
typedef struct _23089e5d_optionalUserData { _23089e5d_optionalUserData(void* value): value(value) {}; void* value; _23089e5d_optionalUserData(const _23089e5d_optionalUserData &) = delete; } _23089e5d_optionalUserData;
void np_redMemoryFree(_23089e5d_context & context, _23089e5d_gpu & gpu, _23089e5d_memory & memory, _23089e5d_optionalFile & optionalFile, _23089e5d_optionalLine & optionalLine, _23089e5d_optionalUserData & optionalUserData) {
  redMemoryFree(context.value, gpu.value, memory.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemorySet redMemorySet
#define _81c7fc7d_context(value) value
#define _81c7fc7d_gpu(value) value
#define _81c7fc7d_memoryArraysCount(value) value
#define _81c7fc7d_memoryArrays(value) value
#define _81c7fc7d_memoryImagesCount(value) value
#define _81c7fc7d_memoryImages(value) value
#define _81c7fc7d_outStatuses(value) value
#define _81c7fc7d_optionalFile(value) value
#define _81c7fc7d_optionalLine(value) value
#define _81c7fc7d_optionalUserData(value) value
#else
typedef struct _81c7fc7d_context { _81c7fc7d_context(RedContext value): value(value) {}; RedContext value; _81c7fc7d_context(const _81c7fc7d_context &) = delete; } _81c7fc7d_context;
typedef struct _81c7fc7d_gpu { _81c7fc7d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _81c7fc7d_gpu(const _81c7fc7d_gpu &) = delete; } _81c7fc7d_gpu;
typedef struct _81c7fc7d_memoryArraysCount { _81c7fc7d_memoryArraysCount(unsigned value): value(value) {}; unsigned value; _81c7fc7d_memoryArraysCount(const _81c7fc7d_memoryArraysCount &) = delete; } _81c7fc7d_memoryArraysCount;
typedef struct _81c7fc7d_memoryArrays { _81c7fc7d_memoryArrays(RedMemoryArray* value): value(value) {}; RedMemoryArray* value; _81c7fc7d_memoryArrays(const _81c7fc7d_memoryArrays &) = delete; } _81c7fc7d_memoryArrays;
typedef struct _81c7fc7d_memoryImagesCount { _81c7fc7d_memoryImagesCount(unsigned value): value(value) {}; unsigned value; _81c7fc7d_memoryImagesCount(const _81c7fc7d_memoryImagesCount &) = delete; } _81c7fc7d_memoryImagesCount;
typedef struct _81c7fc7d_memoryImages { _81c7fc7d_memoryImages(RedMemoryImage* value): value(value) {}; RedMemoryImage* value; _81c7fc7d_memoryImages(const _81c7fc7d_memoryImages &) = delete; } _81c7fc7d_memoryImages;
typedef struct _81c7fc7d_outStatuses { _81c7fc7d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _81c7fc7d_outStatuses(const _81c7fc7d_outStatuses &) = delete; } _81c7fc7d_outStatuses;
typedef struct _81c7fc7d_optionalFile { _81c7fc7d_optionalFile(char* value): value(value) {}; char* value; _81c7fc7d_optionalFile(const _81c7fc7d_optionalFile &) = delete; } _81c7fc7d_optionalFile;
typedef struct _81c7fc7d_optionalLine { _81c7fc7d_optionalLine(int value): value(value) {}; int value; _81c7fc7d_optionalLine(const _81c7fc7d_optionalLine &) = delete; } _81c7fc7d_optionalLine;
typedef struct _81c7fc7d_optionalUserData { _81c7fc7d_optionalUserData(void* value): value(value) {}; void* value; _81c7fc7d_optionalUserData(const _81c7fc7d_optionalUserData &) = delete; } _81c7fc7d_optionalUserData;
void np_redMemorySet(_81c7fc7d_context & context, _81c7fc7d_gpu & gpu, _81c7fc7d_memoryArraysCount & memoryArraysCount, _81c7fc7d_memoryArrays & memoryArrays, _81c7fc7d_memoryImagesCount & memoryImagesCount, _81c7fc7d_memoryImages & memoryImages, _81c7fc7d_outStatuses & outStatuses, _81c7fc7d_optionalFile & optionalFile, _81c7fc7d_optionalLine & optionalLine, _81c7fc7d_optionalUserData & optionalUserData) {
  redMemorySet(context.value, gpu.value, memoryArraysCount.value, memoryArrays.value, memoryImagesCount.value, memoryImages.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryMap redMemoryMap
#define _9060f292_context(value) value
#define _9060f292_gpu(value) value
#define _9060f292_mappableMemory(value) value
#define _9060f292_mappableMemoryBytesFirst(value) value
#define _9060f292_mappableMemoryBytesCount(value) value
#define _9060f292_outVolatilePointer(value) value
#define _9060f292_outStatuses(value) value
#define _9060f292_optionalFile(value) value
#define _9060f292_optionalLine(value) value
#define _9060f292_optionalUserData(value) value
#else
typedef struct _9060f292_context { _9060f292_context(RedContext value): value(value) {}; RedContext value; _9060f292_context(const _9060f292_context &) = delete; } _9060f292_context;
typedef struct _9060f292_gpu { _9060f292_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _9060f292_gpu(const _9060f292_gpu &) = delete; } _9060f292_gpu;
typedef struct _9060f292_mappableMemory { _9060f292_mappableMemory(RedHandleMemory value): value(value) {}; RedHandleMemory value; _9060f292_mappableMemory(const _9060f292_mappableMemory &) = delete; } _9060f292_mappableMemory;
typedef struct _9060f292_mappableMemoryBytesFirst { _9060f292_mappableMemoryBytesFirst(uint64_t value): value(value) {}; uint64_t value; _9060f292_mappableMemoryBytesFirst(const _9060f292_mappableMemoryBytesFirst &) = delete; } _9060f292_mappableMemoryBytesFirst;
typedef struct _9060f292_mappableMemoryBytesCount { _9060f292_mappableMemoryBytesCount(uint64_t value): value(value) {}; uint64_t value; _9060f292_mappableMemoryBytesCount(const _9060f292_mappableMemoryBytesCount &) = delete; } _9060f292_mappableMemoryBytesCount;
typedef struct _9060f292_outVolatilePointer { _9060f292_outVolatilePointer(void** value): value(value) {}; void** value; _9060f292_outVolatilePointer(const _9060f292_outVolatilePointer &) = delete; } _9060f292_outVolatilePointer;
typedef struct _9060f292_outStatuses { _9060f292_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _9060f292_outStatuses(const _9060f292_outStatuses &) = delete; } _9060f292_outStatuses;
typedef struct _9060f292_optionalFile { _9060f292_optionalFile(char* value): value(value) {}; char* value; _9060f292_optionalFile(const _9060f292_optionalFile &) = delete; } _9060f292_optionalFile;
typedef struct _9060f292_optionalLine { _9060f292_optionalLine(int value): value(value) {}; int value; _9060f292_optionalLine(const _9060f292_optionalLine &) = delete; } _9060f292_optionalLine;
typedef struct _9060f292_optionalUserData { _9060f292_optionalUserData(void* value): value(value) {}; void* value; _9060f292_optionalUserData(const _9060f292_optionalUserData &) = delete; } _9060f292_optionalUserData;
void np_redMemoryMap(_9060f292_context & context, _9060f292_gpu & gpu, _9060f292_mappableMemory & mappableMemory, _9060f292_mappableMemoryBytesFirst & mappableMemoryBytesFirst, _9060f292_mappableMemoryBytesCount & mappableMemoryBytesCount, _9060f292_outVolatilePointer & outVolatilePointer, _9060f292_outStatuses & outStatuses, _9060f292_optionalFile & optionalFile, _9060f292_optionalLine & optionalLine, _9060f292_optionalUserData & optionalUserData) {
  redMemoryMap(context.value, gpu.value, mappableMemory.value, mappableMemoryBytesFirst.value, mappableMemoryBytesCount.value, outVolatilePointer.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryUnmap redMemoryUnmap
#define _b02908e0_context(value) value
#define _b02908e0_gpu(value) value
#define _b02908e0_mappableMemory(value) value
#define _b02908e0_optionalFile(value) value
#define _b02908e0_optionalLine(value) value
#define _b02908e0_optionalUserData(value) value
#else
typedef struct _b02908e0_context { _b02908e0_context(RedContext value): value(value) {}; RedContext value; _b02908e0_context(const _b02908e0_context &) = delete; } _b02908e0_context;
typedef struct _b02908e0_gpu { _b02908e0_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _b02908e0_gpu(const _b02908e0_gpu &) = delete; } _b02908e0_gpu;
typedef struct _b02908e0_mappableMemory { _b02908e0_mappableMemory(RedHandleMemory value): value(value) {}; RedHandleMemory value; _b02908e0_mappableMemory(const _b02908e0_mappableMemory &) = delete; } _b02908e0_mappableMemory;
typedef struct _b02908e0_optionalFile { _b02908e0_optionalFile(char* value): value(value) {}; char* value; _b02908e0_optionalFile(const _b02908e0_optionalFile &) = delete; } _b02908e0_optionalFile;
typedef struct _b02908e0_optionalLine { _b02908e0_optionalLine(int value): value(value) {}; int value; _b02908e0_optionalLine(const _b02908e0_optionalLine &) = delete; } _b02908e0_optionalLine;
typedef struct _b02908e0_optionalUserData { _b02908e0_optionalUserData(void* value): value(value) {}; void* value; _b02908e0_optionalUserData(const _b02908e0_optionalUserData &) = delete; } _b02908e0_optionalUserData;
void np_redMemoryUnmap(_b02908e0_context & context, _b02908e0_gpu & gpu, _b02908e0_mappableMemory & mappableMemory, _b02908e0_optionalFile & optionalFile, _b02908e0_optionalLine & optionalLine, _b02908e0_optionalUserData & optionalUserData) {
  redMemoryUnmap(context.value, gpu.value, mappableMemory.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryNonCoherentFlush redMemoryNonCoherentFlush
#define _8550ea0d_context(value) value
#define _8550ea0d_gpu(value) value
#define _8550ea0d_mappableMemoryRangesCount(value) value
#define _8550ea0d_mappableMemoryRanges(value) value
#define _8550ea0d_outStatuses(value) value
#define _8550ea0d_optionalFile(value) value
#define _8550ea0d_optionalLine(value) value
#define _8550ea0d_optionalUserData(value) value
#else
typedef struct _8550ea0d_context { _8550ea0d_context(RedContext value): value(value) {}; RedContext value; _8550ea0d_context(const _8550ea0d_context &) = delete; } _8550ea0d_context;
typedef struct _8550ea0d_gpu { _8550ea0d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _8550ea0d_gpu(const _8550ea0d_gpu &) = delete; } _8550ea0d_gpu;
typedef struct _8550ea0d_mappableMemoryRangesCount { _8550ea0d_mappableMemoryRangesCount(unsigned value): value(value) {}; unsigned value; _8550ea0d_mappableMemoryRangesCount(const _8550ea0d_mappableMemoryRangesCount &) = delete; } _8550ea0d_mappableMemoryRangesCount;
typedef struct _8550ea0d_mappableMemoryRanges { _8550ea0d_mappableMemoryRanges(RedMappableMemoryRange* value): value(value) {}; RedMappableMemoryRange* value; _8550ea0d_mappableMemoryRanges(const _8550ea0d_mappableMemoryRanges &) = delete; } _8550ea0d_mappableMemoryRanges;
typedef struct _8550ea0d_outStatuses { _8550ea0d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _8550ea0d_outStatuses(const _8550ea0d_outStatuses &) = delete; } _8550ea0d_outStatuses;
typedef struct _8550ea0d_optionalFile { _8550ea0d_optionalFile(char* value): value(value) {}; char* value; _8550ea0d_optionalFile(const _8550ea0d_optionalFile &) = delete; } _8550ea0d_optionalFile;
typedef struct _8550ea0d_optionalLine { _8550ea0d_optionalLine(int value): value(value) {}; int value; _8550ea0d_optionalLine(const _8550ea0d_optionalLine &) = delete; } _8550ea0d_optionalLine;
typedef struct _8550ea0d_optionalUserData { _8550ea0d_optionalUserData(void* value): value(value) {}; void* value; _8550ea0d_optionalUserData(const _8550ea0d_optionalUserData &) = delete; } _8550ea0d_optionalUserData;
void np_redMemoryNonCoherentFlush(_8550ea0d_context & context, _8550ea0d_gpu & gpu, _8550ea0d_mappableMemoryRangesCount & mappableMemoryRangesCount, _8550ea0d_mappableMemoryRanges & mappableMemoryRanges, _8550ea0d_outStatuses & outStatuses, _8550ea0d_optionalFile & optionalFile, _8550ea0d_optionalLine & optionalLine, _8550ea0d_optionalUserData & optionalUserData) {
  redMemoryNonCoherentFlush(context.value, gpu.value, mappableMemoryRangesCount.value, mappableMemoryRanges.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMemoryNonCoherentInvalidate redMemoryNonCoherentInvalidate
#define _d4a38ba3_context(value) value
#define _d4a38ba3_gpu(value) value
#define _d4a38ba3_mappableMemoryRangesCount(value) value
#define _d4a38ba3_mappableMemoryRanges(value) value
#define _d4a38ba3_outStatuses(value) value
#define _d4a38ba3_optionalFile(value) value
#define _d4a38ba3_optionalLine(value) value
#define _d4a38ba3_optionalUserData(value) value
#else
typedef struct _d4a38ba3_context { _d4a38ba3_context(RedContext value): value(value) {}; RedContext value; _d4a38ba3_context(const _d4a38ba3_context &) = delete; } _d4a38ba3_context;
typedef struct _d4a38ba3_gpu { _d4a38ba3_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _d4a38ba3_gpu(const _d4a38ba3_gpu &) = delete; } _d4a38ba3_gpu;
typedef struct _d4a38ba3_mappableMemoryRangesCount { _d4a38ba3_mappableMemoryRangesCount(unsigned value): value(value) {}; unsigned value; _d4a38ba3_mappableMemoryRangesCount(const _d4a38ba3_mappableMemoryRangesCount &) = delete; } _d4a38ba3_mappableMemoryRangesCount;
typedef struct _d4a38ba3_mappableMemoryRanges { _d4a38ba3_mappableMemoryRanges(RedMappableMemoryRange* value): value(value) {}; RedMappableMemoryRange* value; _d4a38ba3_mappableMemoryRanges(const _d4a38ba3_mappableMemoryRanges &) = delete; } _d4a38ba3_mappableMemoryRanges;
typedef struct _d4a38ba3_outStatuses { _d4a38ba3_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _d4a38ba3_outStatuses(const _d4a38ba3_outStatuses &) = delete; } _d4a38ba3_outStatuses;
typedef struct _d4a38ba3_optionalFile { _d4a38ba3_optionalFile(char* value): value(value) {}; char* value; _d4a38ba3_optionalFile(const _d4a38ba3_optionalFile &) = delete; } _d4a38ba3_optionalFile;
typedef struct _d4a38ba3_optionalLine { _d4a38ba3_optionalLine(int value): value(value) {}; int value; _d4a38ba3_optionalLine(const _d4a38ba3_optionalLine &) = delete; } _d4a38ba3_optionalLine;
typedef struct _d4a38ba3_optionalUserData { _d4a38ba3_optionalUserData(void* value): value(value) {}; void* value; _d4a38ba3_optionalUserData(const _d4a38ba3_optionalUserData &) = delete; } _d4a38ba3_optionalUserData;
void np_redMemoryNonCoherentInvalidate(_d4a38ba3_context & context, _d4a38ba3_gpu & gpu, _d4a38ba3_mappableMemoryRangesCount & mappableMemoryRangesCount, _d4a38ba3_mappableMemoryRanges & mappableMemoryRanges, _d4a38ba3_outStatuses & outStatuses, _d4a38ba3_optionalFile & optionalFile, _d4a38ba3_optionalLine & optionalLine, _d4a38ba3_optionalUserData & optionalUserData) {
  redMemoryNonCoherentInvalidate(context.value, gpu.value, mappableMemoryRangesCount.value, mappableMemoryRanges.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redStructsMemoryAllocate redStructsMemoryAllocate
#define _ca1830ff_context(value) value
#define _ca1830ff_gpu(value) value
#define _ca1830ff_handleName(value) value
#define _ca1830ff_maxStructsCount(value) value
#define _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount(value) value
#define _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount(value) value
#define _ca1830ff_maxStructsMembersOfTypeTextureROCount(value) value
#define _ca1830ff_maxStructsMembersOfTypeTextureRWCount(value) value
#define _ca1830ff_outStructsMemory(value) value
#define _ca1830ff_outStatuses(value) value
#define _ca1830ff_optionalFile(value) value
#define _ca1830ff_optionalLine(value) value
#define _ca1830ff_optionalUserData(value) value
#else
typedef struct _ca1830ff_context { _ca1830ff_context(RedContext value): value(value) {}; RedContext value; _ca1830ff_context(const _ca1830ff_context &) = delete; } _ca1830ff_context;
typedef struct _ca1830ff_gpu { _ca1830ff_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _ca1830ff_gpu(const _ca1830ff_gpu &) = delete; } _ca1830ff_gpu;
typedef struct _ca1830ff_handleName { _ca1830ff_handleName(char* value): value(value) {}; char* value; _ca1830ff_handleName(const _ca1830ff_handleName &) = delete; } _ca1830ff_handleName;
typedef struct _ca1830ff_maxStructsCount { _ca1830ff_maxStructsCount(unsigned value): value(value) {}; unsigned value; _ca1830ff_maxStructsCount(const _ca1830ff_maxStructsCount &) = delete; } _ca1830ff_maxStructsCount;
typedef struct _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount { _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount(unsigned value): value(value) {}; unsigned value; _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount(const _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount &) = delete; } _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount;
typedef struct _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount { _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount(unsigned value): value(value) {}; unsigned value; _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount(const _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount &) = delete; } _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount;
typedef struct _ca1830ff_maxStructsMembersOfTypeTextureROCount { _ca1830ff_maxStructsMembersOfTypeTextureROCount(unsigned value): value(value) {}; unsigned value; _ca1830ff_maxStructsMembersOfTypeTextureROCount(const _ca1830ff_maxStructsMembersOfTypeTextureROCount &) = delete; } _ca1830ff_maxStructsMembersOfTypeTextureROCount;
typedef struct _ca1830ff_maxStructsMembersOfTypeTextureRWCount { _ca1830ff_maxStructsMembersOfTypeTextureRWCount(unsigned value): value(value) {}; unsigned value; _ca1830ff_maxStructsMembersOfTypeTextureRWCount(const _ca1830ff_maxStructsMembersOfTypeTextureRWCount &) = delete; } _ca1830ff_maxStructsMembersOfTypeTextureRWCount;
typedef struct _ca1830ff_outStructsMemory { _ca1830ff_outStructsMemory(RedHandleStructsMemory* value): value(value) {}; RedHandleStructsMemory* value; _ca1830ff_outStructsMemory(const _ca1830ff_outStructsMemory &) = delete; } _ca1830ff_outStructsMemory;
typedef struct _ca1830ff_outStatuses { _ca1830ff_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _ca1830ff_outStatuses(const _ca1830ff_outStatuses &) = delete; } _ca1830ff_outStatuses;
typedef struct _ca1830ff_optionalFile { _ca1830ff_optionalFile(char* value): value(value) {}; char* value; _ca1830ff_optionalFile(const _ca1830ff_optionalFile &) = delete; } _ca1830ff_optionalFile;
typedef struct _ca1830ff_optionalLine { _ca1830ff_optionalLine(int value): value(value) {}; int value; _ca1830ff_optionalLine(const _ca1830ff_optionalLine &) = delete; } _ca1830ff_optionalLine;
typedef struct _ca1830ff_optionalUserData { _ca1830ff_optionalUserData(void* value): value(value) {}; void* value; _ca1830ff_optionalUserData(const _ca1830ff_optionalUserData &) = delete; } _ca1830ff_optionalUserData;
void np_redStructsMemoryAllocate(_ca1830ff_context & context, _ca1830ff_gpu & gpu, _ca1830ff_handleName & handleName, _ca1830ff_maxStructsCount & maxStructsCount, _ca1830ff_maxStructsMembersOfTypeArrayROConstantCount & maxStructsMembersOfTypeArrayROConstantCount, _ca1830ff_maxStructsMembersOfTypeArrayROOrArrayRWCount & maxStructsMembersOfTypeArrayROOrArrayRWCount, _ca1830ff_maxStructsMembersOfTypeTextureROCount & maxStructsMembersOfTypeTextureROCount, _ca1830ff_maxStructsMembersOfTypeTextureRWCount & maxStructsMembersOfTypeTextureRWCount, _ca1830ff_outStructsMemory & outStructsMemory, _ca1830ff_outStatuses & outStatuses, _ca1830ff_optionalFile & optionalFile, _ca1830ff_optionalLine & optionalLine, _ca1830ff_optionalUserData & optionalUserData) {
  redStructsMemoryAllocate(context.value, gpu.value, handleName.value, maxStructsCount.value, maxStructsMembersOfTypeArrayROConstantCount.value, maxStructsMembersOfTypeArrayROOrArrayRWCount.value, maxStructsMembersOfTypeTextureROCount.value, maxStructsMembersOfTypeTextureRWCount.value, outStructsMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redStructsMemoryAllocateSamplers redStructsMemoryAllocateSamplers
#define _a6a65124_context(value) value
#define _a6a65124_gpu(value) value
#define _a6a65124_handleName(value) value
#define _a6a65124_maxStructsCount(value) value
#define _a6a65124_maxStructsMembersOfTypeSamplerCount(value) value
#define _a6a65124_outStructsMemory(value) value
#define _a6a65124_outStatuses(value) value
#define _a6a65124_optionalFile(value) value
#define _a6a65124_optionalLine(value) value
#define _a6a65124_optionalUserData(value) value
#else
typedef struct _a6a65124_context { _a6a65124_context(RedContext value): value(value) {}; RedContext value; _a6a65124_context(const _a6a65124_context &) = delete; } _a6a65124_context;
typedef struct _a6a65124_gpu { _a6a65124_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _a6a65124_gpu(const _a6a65124_gpu &) = delete; } _a6a65124_gpu;
typedef struct _a6a65124_handleName { _a6a65124_handleName(char* value): value(value) {}; char* value; _a6a65124_handleName(const _a6a65124_handleName &) = delete; } _a6a65124_handleName;
typedef struct _a6a65124_maxStructsCount { _a6a65124_maxStructsCount(unsigned value): value(value) {}; unsigned value; _a6a65124_maxStructsCount(const _a6a65124_maxStructsCount &) = delete; } _a6a65124_maxStructsCount;
typedef struct _a6a65124_maxStructsMembersOfTypeSamplerCount { _a6a65124_maxStructsMembersOfTypeSamplerCount(unsigned value): value(value) {}; unsigned value; _a6a65124_maxStructsMembersOfTypeSamplerCount(const _a6a65124_maxStructsMembersOfTypeSamplerCount &) = delete; } _a6a65124_maxStructsMembersOfTypeSamplerCount;
typedef struct _a6a65124_outStructsMemory { _a6a65124_outStructsMemory(RedHandleStructsMemory* value): value(value) {}; RedHandleStructsMemory* value; _a6a65124_outStructsMemory(const _a6a65124_outStructsMemory &) = delete; } _a6a65124_outStructsMemory;
typedef struct _a6a65124_outStatuses { _a6a65124_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _a6a65124_outStatuses(const _a6a65124_outStatuses &) = delete; } _a6a65124_outStatuses;
typedef struct _a6a65124_optionalFile { _a6a65124_optionalFile(char* value): value(value) {}; char* value; _a6a65124_optionalFile(const _a6a65124_optionalFile &) = delete; } _a6a65124_optionalFile;
typedef struct _a6a65124_optionalLine { _a6a65124_optionalLine(int value): value(value) {}; int value; _a6a65124_optionalLine(const _a6a65124_optionalLine &) = delete; } _a6a65124_optionalLine;
typedef struct _a6a65124_optionalUserData { _a6a65124_optionalUserData(void* value): value(value) {}; void* value; _a6a65124_optionalUserData(const _a6a65124_optionalUserData &) = delete; } _a6a65124_optionalUserData;
void np_redStructsMemoryAllocateSamplers(_a6a65124_context & context, _a6a65124_gpu & gpu, _a6a65124_handleName & handleName, _a6a65124_maxStructsCount & maxStructsCount, _a6a65124_maxStructsMembersOfTypeSamplerCount & maxStructsMembersOfTypeSamplerCount, _a6a65124_outStructsMemory & outStructsMemory, _a6a65124_outStatuses & outStatuses, _a6a65124_optionalFile & optionalFile, _a6a65124_optionalLine & optionalLine, _a6a65124_optionalUserData & optionalUserData) {
  redStructsMemoryAllocateSamplers(context.value, gpu.value, handleName.value, maxStructsCount.value, maxStructsMembersOfTypeSamplerCount.value, outStructsMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redStructsMemorySuballocateStructs redStructsMemorySuballocateStructs
#define _2aeabcb8_context(value) value
#define _2aeabcb8_gpu(value) value
#define _2aeabcb8_handleNames(value) value
#define _2aeabcb8_structsMemory(value) value
#define _2aeabcb8_structsDeclarationsCount(value) value
#define _2aeabcb8_structsDeclarations(value) value
#define _2aeabcb8_outStructs(value) value
#define _2aeabcb8_outStatuses(value) value
#define _2aeabcb8_optionalFile(value) value
#define _2aeabcb8_optionalLine(value) value
#define _2aeabcb8_optionalUserData(value) value
#else
typedef struct _2aeabcb8_context { _2aeabcb8_context(RedContext value): value(value) {}; RedContext value; _2aeabcb8_context(const _2aeabcb8_context &) = delete; } _2aeabcb8_context;
typedef struct _2aeabcb8_gpu { _2aeabcb8_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _2aeabcb8_gpu(const _2aeabcb8_gpu &) = delete; } _2aeabcb8_gpu;
typedef struct _2aeabcb8_handleNames { _2aeabcb8_handleNames(const char** value): value(value) {}; const char** value; _2aeabcb8_handleNames(const _2aeabcb8_handleNames &) = delete; } _2aeabcb8_handleNames;
typedef struct _2aeabcb8_structsMemory { _2aeabcb8_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _2aeabcb8_structsMemory(const _2aeabcb8_structsMemory &) = delete; } _2aeabcb8_structsMemory;
typedef struct _2aeabcb8_structsDeclarationsCount { _2aeabcb8_structsDeclarationsCount(unsigned value): value(value) {}; unsigned value; _2aeabcb8_structsDeclarationsCount(const _2aeabcb8_structsDeclarationsCount &) = delete; } _2aeabcb8_structsDeclarationsCount;
typedef struct _2aeabcb8_structsDeclarations { _2aeabcb8_structsDeclarations(RedHandleStructDeclaration* value): value(value) {}; RedHandleStructDeclaration* value; _2aeabcb8_structsDeclarations(const _2aeabcb8_structsDeclarations &) = delete; } _2aeabcb8_structsDeclarations;
typedef struct _2aeabcb8_outStructs { _2aeabcb8_outStructs(RedHandleStruct* value): value(value) {}; RedHandleStruct* value; _2aeabcb8_outStructs(const _2aeabcb8_outStructs &) = delete; } _2aeabcb8_outStructs;
typedef struct _2aeabcb8_outStatuses { _2aeabcb8_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _2aeabcb8_outStatuses(const _2aeabcb8_outStatuses &) = delete; } _2aeabcb8_outStatuses;
typedef struct _2aeabcb8_optionalFile { _2aeabcb8_optionalFile(char* value): value(value) {}; char* value; _2aeabcb8_optionalFile(const _2aeabcb8_optionalFile &) = delete; } _2aeabcb8_optionalFile;
typedef struct _2aeabcb8_optionalLine { _2aeabcb8_optionalLine(int value): value(value) {}; int value; _2aeabcb8_optionalLine(const _2aeabcb8_optionalLine &) = delete; } _2aeabcb8_optionalLine;
typedef struct _2aeabcb8_optionalUserData { _2aeabcb8_optionalUserData(void* value): value(value) {}; void* value; _2aeabcb8_optionalUserData(const _2aeabcb8_optionalUserData &) = delete; } _2aeabcb8_optionalUserData;
void np_redStructsMemorySuballocateStructs(_2aeabcb8_context & context, _2aeabcb8_gpu & gpu, _2aeabcb8_handleNames & handleNames, _2aeabcb8_structsMemory & structsMemory, _2aeabcb8_structsDeclarationsCount & structsDeclarationsCount, _2aeabcb8_structsDeclarations & structsDeclarations, _2aeabcb8_outStructs & outStructs, _2aeabcb8_outStatuses & outStatuses, _2aeabcb8_optionalFile & optionalFile, _2aeabcb8_optionalLine & optionalLine, _2aeabcb8_optionalUserData & optionalUserData) {
  redStructsMemorySuballocateStructs(context.value, gpu.value, handleNames.value, structsMemory.value, structsDeclarationsCount.value, structsDeclarations.value, outStructs.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redStructsMemoryReset redStructsMemoryReset
#define _0d734196_context(value) value
#define _0d734196_gpu(value) value
#define _0d734196_structsMemory(value) value
#define _0d734196_outStatuses(value) value
#define _0d734196_optionalFile(value) value
#define _0d734196_optionalLine(value) value
#define _0d734196_optionalUserData(value) value
#else
typedef struct _0d734196_context { _0d734196_context(RedContext value): value(value) {}; RedContext value; _0d734196_context(const _0d734196_context &) = delete; } _0d734196_context;
typedef struct _0d734196_gpu { _0d734196_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _0d734196_gpu(const _0d734196_gpu &) = delete; } _0d734196_gpu;
typedef struct _0d734196_structsMemory { _0d734196_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _0d734196_structsMemory(const _0d734196_structsMemory &) = delete; } _0d734196_structsMemory;
typedef struct _0d734196_outStatuses { _0d734196_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _0d734196_outStatuses(const _0d734196_outStatuses &) = delete; } _0d734196_outStatuses;
typedef struct _0d734196_optionalFile { _0d734196_optionalFile(char* value): value(value) {}; char* value; _0d734196_optionalFile(const _0d734196_optionalFile &) = delete; } _0d734196_optionalFile;
typedef struct _0d734196_optionalLine { _0d734196_optionalLine(int value): value(value) {}; int value; _0d734196_optionalLine(const _0d734196_optionalLine &) = delete; } _0d734196_optionalLine;
typedef struct _0d734196_optionalUserData { _0d734196_optionalUserData(void* value): value(value) {}; void* value; _0d734196_optionalUserData(const _0d734196_optionalUserData &) = delete; } _0d734196_optionalUserData;
void np_redStructsMemoryReset(_0d734196_context & context, _0d734196_gpu & gpu, _0d734196_structsMemory & structsMemory, _0d734196_outStatuses & outStatuses, _0d734196_optionalFile & optionalFile, _0d734196_optionalLine & optionalLine, _0d734196_optionalUserData & optionalUserData) {
  redStructsMemoryReset(context.value, gpu.value, structsMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redStructsMemoryFree redStructsMemoryFree
#define _7c3647ab_context(value) value
#define _7c3647ab_gpu(value) value
#define _7c3647ab_structsMemory(value) value
#define _7c3647ab_optionalFile(value) value
#define _7c3647ab_optionalLine(value) value
#define _7c3647ab_optionalUserData(value) value
#else
typedef struct _7c3647ab_context { _7c3647ab_context(RedContext value): value(value) {}; RedContext value; _7c3647ab_context(const _7c3647ab_context &) = delete; } _7c3647ab_context;
typedef struct _7c3647ab_gpu { _7c3647ab_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _7c3647ab_gpu(const _7c3647ab_gpu &) = delete; } _7c3647ab_gpu;
typedef struct _7c3647ab_structsMemory { _7c3647ab_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _7c3647ab_structsMemory(const _7c3647ab_structsMemory &) = delete; } _7c3647ab_structsMemory;
typedef struct _7c3647ab_optionalFile { _7c3647ab_optionalFile(char* value): value(value) {}; char* value; _7c3647ab_optionalFile(const _7c3647ab_optionalFile &) = delete; } _7c3647ab_optionalFile;
typedef struct _7c3647ab_optionalLine { _7c3647ab_optionalLine(int value): value(value) {}; int value; _7c3647ab_optionalLine(const _7c3647ab_optionalLine &) = delete; } _7c3647ab_optionalLine;
typedef struct _7c3647ab_optionalUserData { _7c3647ab_optionalUserData(void* value): value(value) {}; void* value; _7c3647ab_optionalUserData(const _7c3647ab_optionalUserData &) = delete; } _7c3647ab_optionalUserData;
void np_redStructsMemoryFree(_7c3647ab_context & context, _7c3647ab_gpu & gpu, _7c3647ab_structsMemory & structsMemory, _7c3647ab_optionalFile & optionalFile, _7c3647ab_optionalLine & optionalLine, _7c3647ab_optionalUserData & optionalUserData) {
  redStructsMemoryFree(context.value, gpu.value, structsMemory.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redStructsSet redStructsSet
#define _b55b2659_context(value) value
#define _b55b2659_gpu(value) value
#define _b55b2659_structsMembersCount(value) value
#define _b55b2659_structsMembers(value) value
#define _b55b2659_optionalFile(value) value
#define _b55b2659_optionalLine(value) value
#define _b55b2659_optionalUserData(value) value
#else
typedef struct _b55b2659_context { _b55b2659_context(RedContext value): value(value) {}; RedContext value; _b55b2659_context(const _b55b2659_context &) = delete; } _b55b2659_context;
typedef struct _b55b2659_gpu { _b55b2659_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _b55b2659_gpu(const _b55b2659_gpu &) = delete; } _b55b2659_gpu;
typedef struct _b55b2659_structsMembersCount { _b55b2659_structsMembersCount(unsigned value): value(value) {}; unsigned value; _b55b2659_structsMembersCount(const _b55b2659_structsMembersCount &) = delete; } _b55b2659_structsMembersCount;
typedef struct _b55b2659_structsMembers { _b55b2659_structsMembers(RedStructMember* value): value(value) {}; RedStructMember* value; _b55b2659_structsMembers(const _b55b2659_structsMembers &) = delete; } _b55b2659_structsMembers;
typedef struct _b55b2659_optionalFile { _b55b2659_optionalFile(char* value): value(value) {}; char* value; _b55b2659_optionalFile(const _b55b2659_optionalFile &) = delete; } _b55b2659_optionalFile;
typedef struct _b55b2659_optionalLine { _b55b2659_optionalLine(int value): value(value) {}; int value; _b55b2659_optionalLine(const _b55b2659_optionalLine &) = delete; } _b55b2659_optionalLine;
typedef struct _b55b2659_optionalUserData { _b55b2659_optionalUserData(void* value): value(value) {}; void* value; _b55b2659_optionalUserData(const _b55b2659_optionalUserData &) = delete; } _b55b2659_optionalUserData;
void np_redStructsSet(_b55b2659_context & context, _b55b2659_gpu & gpu, _b55b2659_structsMembersCount & structsMembersCount, _b55b2659_structsMembers & structsMembers, _b55b2659_optionalFile & optionalFile, _b55b2659_optionalLine & optionalLine, _b55b2659_optionalUserData & optionalUserData) {
  redStructsSet(context.value, gpu.value, structsMembersCount.value, structsMembers.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateContext redCreateContext
#define _8b4eaa17_malloc(value) value
#define _8b4eaa17_free(value) value
#define _8b4eaa17_optionalMallocTagged(value) value
#define _8b4eaa17_optionalFreeTagged(value) value
#define _8b4eaa17_debugCallback(value) value
#define _8b4eaa17_sdkVersion(value) value
#define _8b4eaa17_sdkExtensionsCount(value) value
#define _8b4eaa17_sdkExtensions(value) value
#define _8b4eaa17_optionalProgramName(value) value
#define _8b4eaa17_optionalProgramVersion(value) value
#define _8b4eaa17_optionalEngineName(value) value
#define _8b4eaa17_optionalEngineVersion(value) value
#define _8b4eaa17_optionalSettings(value) value
#define _8b4eaa17_outContext(value) value
#define _8b4eaa17_outStatuses(value) value
#define _8b4eaa17_optionalFile(value) value
#define _8b4eaa17_optionalLine(value) value
#define _8b4eaa17_optionalUserData(value) value
#else
typedef struct _8b4eaa17_malloc { _8b4eaa17_malloc(RedTypeProcedureMalloc value): value(value) {}; RedTypeProcedureMalloc value; _8b4eaa17_malloc(const _8b4eaa17_malloc &) = delete; } _8b4eaa17_malloc;
typedef struct _8b4eaa17_free { _8b4eaa17_free(RedTypeProcedureFree value): value(value) {}; RedTypeProcedureFree value; _8b4eaa17_free(const _8b4eaa17_free &) = delete; } _8b4eaa17_free;
typedef struct _8b4eaa17_optionalMallocTagged { _8b4eaa17_optionalMallocTagged(RedTypeProcedureMallocTagged value): value(value) {}; RedTypeProcedureMallocTagged value; _8b4eaa17_optionalMallocTagged(const _8b4eaa17_optionalMallocTagged &) = delete; } _8b4eaa17_optionalMallocTagged;
typedef struct _8b4eaa17_optionalFreeTagged { _8b4eaa17_optionalFreeTagged(RedTypeProcedureFreeTagged value): value(value) {}; RedTypeProcedureFreeTagged value; _8b4eaa17_optionalFreeTagged(const _8b4eaa17_optionalFreeTagged &) = delete; } _8b4eaa17_optionalFreeTagged;
typedef struct _8b4eaa17_debugCallback { _8b4eaa17_debugCallback(RedTypeProcedureDebugCallback value): value(value) {}; RedTypeProcedureDebugCallback value; _8b4eaa17_debugCallback(const _8b4eaa17_debugCallback &) = delete; } _8b4eaa17_debugCallback;
typedef struct _8b4eaa17_sdkVersion { _8b4eaa17_sdkVersion(RedSdkVersion value): value(value) {}; RedSdkVersion value; _8b4eaa17_sdkVersion(const _8b4eaa17_sdkVersion &) = delete; } _8b4eaa17_sdkVersion;
typedef struct _8b4eaa17_sdkExtensionsCount { _8b4eaa17_sdkExtensionsCount(unsigned value): value(value) {}; unsigned value; _8b4eaa17_sdkExtensionsCount(const _8b4eaa17_sdkExtensionsCount &) = delete; } _8b4eaa17_sdkExtensionsCount;
typedef struct _8b4eaa17_sdkExtensions { _8b4eaa17_sdkExtensions(unsigned* value): value(value) {}; unsigned* value; _8b4eaa17_sdkExtensions(const _8b4eaa17_sdkExtensions &) = delete; } _8b4eaa17_sdkExtensions;
typedef struct _8b4eaa17_optionalProgramName { _8b4eaa17_optionalProgramName(char* value): value(value) {}; char* value; _8b4eaa17_optionalProgramName(const _8b4eaa17_optionalProgramName &) = delete; } _8b4eaa17_optionalProgramName;
typedef struct _8b4eaa17_optionalProgramVersion { _8b4eaa17_optionalProgramVersion(unsigned value): value(value) {}; unsigned value; _8b4eaa17_optionalProgramVersion(const _8b4eaa17_optionalProgramVersion &) = delete; } _8b4eaa17_optionalProgramVersion;
typedef struct _8b4eaa17_optionalEngineName { _8b4eaa17_optionalEngineName(char* value): value(value) {}; char* value; _8b4eaa17_optionalEngineName(const _8b4eaa17_optionalEngineName &) = delete; } _8b4eaa17_optionalEngineName;
typedef struct _8b4eaa17_optionalEngineVersion { _8b4eaa17_optionalEngineVersion(unsigned value): value(value) {}; unsigned value; _8b4eaa17_optionalEngineVersion(const _8b4eaa17_optionalEngineVersion &) = delete; } _8b4eaa17_optionalEngineVersion;
typedef struct _8b4eaa17_optionalSettings { _8b4eaa17_optionalSettings(void* value): value(value) {}; void* value; _8b4eaa17_optionalSettings(const _8b4eaa17_optionalSettings &) = delete; } _8b4eaa17_optionalSettings;
typedef struct _8b4eaa17_outContext { _8b4eaa17_outContext(RedContext* value): value(value) {}; RedContext* value; _8b4eaa17_outContext(const _8b4eaa17_outContext &) = delete; } _8b4eaa17_outContext;
typedef struct _8b4eaa17_outStatuses { _8b4eaa17_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _8b4eaa17_outStatuses(const _8b4eaa17_outStatuses &) = delete; } _8b4eaa17_outStatuses;
typedef struct _8b4eaa17_optionalFile { _8b4eaa17_optionalFile(char* value): value(value) {}; char* value; _8b4eaa17_optionalFile(const _8b4eaa17_optionalFile &) = delete; } _8b4eaa17_optionalFile;
typedef struct _8b4eaa17_optionalLine { _8b4eaa17_optionalLine(int value): value(value) {}; int value; _8b4eaa17_optionalLine(const _8b4eaa17_optionalLine &) = delete; } _8b4eaa17_optionalLine;
typedef struct _8b4eaa17_optionalUserData { _8b4eaa17_optionalUserData(void* value): value(value) {}; void* value; _8b4eaa17_optionalUserData(const _8b4eaa17_optionalUserData &) = delete; } _8b4eaa17_optionalUserData;
void np_redCreateContext(_8b4eaa17_malloc & malloc, _8b4eaa17_free & free, _8b4eaa17_optionalMallocTagged & optionalMallocTagged, _8b4eaa17_optionalFreeTagged & optionalFreeTagged, _8b4eaa17_debugCallback & debugCallback, _8b4eaa17_sdkVersion & sdkVersion, _8b4eaa17_sdkExtensionsCount & sdkExtensionsCount, _8b4eaa17_sdkExtensions & sdkExtensions, _8b4eaa17_optionalProgramName & optionalProgramName, _8b4eaa17_optionalProgramVersion & optionalProgramVersion, _8b4eaa17_optionalEngineName & optionalEngineName, _8b4eaa17_optionalEngineVersion & optionalEngineVersion, _8b4eaa17_optionalSettings & optionalSettings, _8b4eaa17_outContext & outContext, _8b4eaa17_outStatuses & outStatuses, _8b4eaa17_optionalFile & optionalFile, _8b4eaa17_optionalLine & optionalLine, _8b4eaa17_optionalUserData & optionalUserData) {
  redCreateContext(malloc.value, free.value, optionalMallocTagged.value, optionalFreeTagged.value, debugCallback.value, sdkVersion.value, sdkExtensionsCount.value, sdkExtensions.value, optionalProgramName.value, optionalProgramVersion.value, optionalEngineName.value, optionalEngineVersion.value, optionalSettings.value, outContext.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateArray redCreateArray
#define _95a0b6be_context(value) value
#define _95a0b6be_gpu(value) value
#define _95a0b6be_handleName(value) value
#define _95a0b6be_type(value) value
#define _95a0b6be_bytesCount(value) value
#define _95a0b6be_structuredBufferElementBytesCount(value) value
#define _95a0b6be_initialAccess(value) value
#define _95a0b6be_initialQueueFamilyIndex(value) value
#define _95a0b6be_dedicate(value) value
#define _95a0b6be_outArray(value) value
#define _95a0b6be_outStatuses(value) value
#define _95a0b6be_optionalFile(value) value
#define _95a0b6be_optionalLine(value) value
#define _95a0b6be_optionalUserData(value) value
#else
typedef struct _95a0b6be_context { _95a0b6be_context(RedContext value): value(value) {}; RedContext value; _95a0b6be_context(const _95a0b6be_context &) = delete; } _95a0b6be_context;
typedef struct _95a0b6be_gpu { _95a0b6be_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _95a0b6be_gpu(const _95a0b6be_gpu &) = delete; } _95a0b6be_gpu;
typedef struct _95a0b6be_handleName { _95a0b6be_handleName(char* value): value(value) {}; char* value; _95a0b6be_handleName(const _95a0b6be_handleName &) = delete; } _95a0b6be_handleName;
typedef struct _95a0b6be_type { _95a0b6be_type(RedArrayType value): value(value) {}; RedArrayType value; _95a0b6be_type(const _95a0b6be_type &) = delete; } _95a0b6be_type;
typedef struct _95a0b6be_bytesCount { _95a0b6be_bytesCount(uint64_t value): value(value) {}; uint64_t value; _95a0b6be_bytesCount(const _95a0b6be_bytesCount &) = delete; } _95a0b6be_bytesCount;
typedef struct _95a0b6be_structuredBufferElementBytesCount { _95a0b6be_structuredBufferElementBytesCount(uint64_t value): value(value) {}; uint64_t value; _95a0b6be_structuredBufferElementBytesCount(const _95a0b6be_structuredBufferElementBytesCount &) = delete; } _95a0b6be_structuredBufferElementBytesCount;
typedef struct _95a0b6be_initialAccess { _95a0b6be_initialAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _95a0b6be_initialAccess(const _95a0b6be_initialAccess &) = delete; } _95a0b6be_initialAccess;
typedef struct _95a0b6be_initialQueueFamilyIndex { _95a0b6be_initialQueueFamilyIndex(unsigned value): value(value) {}; unsigned value; _95a0b6be_initialQueueFamilyIndex(const _95a0b6be_initialQueueFamilyIndex &) = delete; } _95a0b6be_initialQueueFamilyIndex;
typedef struct _95a0b6be_dedicate { _95a0b6be_dedicate(RedBool32 value): value(value) {}; RedBool32 value; _95a0b6be_dedicate(const _95a0b6be_dedicate &) = delete; } _95a0b6be_dedicate;
typedef struct _95a0b6be_outArray { _95a0b6be_outArray(RedArray* value): value(value) {}; RedArray* value; _95a0b6be_outArray(const _95a0b6be_outArray &) = delete; } _95a0b6be_outArray;
typedef struct _95a0b6be_outStatuses { _95a0b6be_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _95a0b6be_outStatuses(const _95a0b6be_outStatuses &) = delete; } _95a0b6be_outStatuses;
typedef struct _95a0b6be_optionalFile { _95a0b6be_optionalFile(char* value): value(value) {}; char* value; _95a0b6be_optionalFile(const _95a0b6be_optionalFile &) = delete; } _95a0b6be_optionalFile;
typedef struct _95a0b6be_optionalLine { _95a0b6be_optionalLine(int value): value(value) {}; int value; _95a0b6be_optionalLine(const _95a0b6be_optionalLine &) = delete; } _95a0b6be_optionalLine;
typedef struct _95a0b6be_optionalUserData { _95a0b6be_optionalUserData(void* value): value(value) {}; void* value; _95a0b6be_optionalUserData(const _95a0b6be_optionalUserData &) = delete; } _95a0b6be_optionalUserData;
void np_redCreateArray(_95a0b6be_context & context, _95a0b6be_gpu & gpu, _95a0b6be_handleName & handleName, _95a0b6be_type & type, _95a0b6be_bytesCount & bytesCount, _95a0b6be_structuredBufferElementBytesCount & structuredBufferElementBytesCount, _95a0b6be_initialAccess & initialAccess, _95a0b6be_initialQueueFamilyIndex & initialQueueFamilyIndex, _95a0b6be_dedicate & dedicate, _95a0b6be_outArray & outArray, _95a0b6be_outStatuses & outStatuses, _95a0b6be_optionalFile & optionalFile, _95a0b6be_optionalLine & optionalLine, _95a0b6be_optionalUserData & optionalUserData) {
  redCreateArray(context.value, gpu.value, handleName.value, type.value, bytesCount.value, structuredBufferElementBytesCount.value, initialAccess.value, initialQueueFamilyIndex.value, dedicate.value, outArray.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateImage redCreateImage
#define _1e73af3e_context(value) value
#define _1e73af3e_gpu(value) value
#define _1e73af3e_handleName(value) value
#define _1e73af3e_dimensions(value) value
#define _1e73af3e_format(value) value
#define _1e73af3e_width(value) value
#define _1e73af3e_height(value) value
#define _1e73af3e_depth(value) value
#define _1e73af3e_levelsCount(value) value
#define _1e73af3e_layersCount(value) value
#define _1e73af3e_multisampleCount(value) value
#define _1e73af3e_restrictToAccess(value) value
#define _1e73af3e_initialAccess(value) value
#define _1e73af3e_initialQueueFamilyIndex(value) value
#define _1e73af3e_dedicate(value) value
#define _1e73af3e_outImage(value) value
#define _1e73af3e_outStatuses(value) value
#define _1e73af3e_optionalFile(value) value
#define _1e73af3e_optionalLine(value) value
#define _1e73af3e_optionalUserData(value) value
#else
typedef struct _1e73af3e_context { _1e73af3e_context(RedContext value): value(value) {}; RedContext value; _1e73af3e_context(const _1e73af3e_context &) = delete; } _1e73af3e_context;
typedef struct _1e73af3e_gpu { _1e73af3e_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _1e73af3e_gpu(const _1e73af3e_gpu &) = delete; } _1e73af3e_gpu;
typedef struct _1e73af3e_handleName { _1e73af3e_handleName(char* value): value(value) {}; char* value; _1e73af3e_handleName(const _1e73af3e_handleName &) = delete; } _1e73af3e_handleName;
typedef struct _1e73af3e_dimensions { _1e73af3e_dimensions(RedImageDimensions value): value(value) {}; RedImageDimensions value; _1e73af3e_dimensions(const _1e73af3e_dimensions &) = delete; } _1e73af3e_dimensions;
typedef struct _1e73af3e_format { _1e73af3e_format(RedFormat value): value(value) {}; RedFormat value; _1e73af3e_format(const _1e73af3e_format &) = delete; } _1e73af3e_format;
typedef struct _1e73af3e_width { _1e73af3e_width(unsigned value): value(value) {}; unsigned value; _1e73af3e_width(const _1e73af3e_width &) = delete; } _1e73af3e_width;
typedef struct _1e73af3e_height { _1e73af3e_height(unsigned value): value(value) {}; unsigned value; _1e73af3e_height(const _1e73af3e_height &) = delete; } _1e73af3e_height;
typedef struct _1e73af3e_depth { _1e73af3e_depth(unsigned value): value(value) {}; unsigned value; _1e73af3e_depth(const _1e73af3e_depth &) = delete; } _1e73af3e_depth;
typedef struct _1e73af3e_levelsCount { _1e73af3e_levelsCount(unsigned value): value(value) {}; unsigned value; _1e73af3e_levelsCount(const _1e73af3e_levelsCount &) = delete; } _1e73af3e_levelsCount;
typedef struct _1e73af3e_layersCount { _1e73af3e_layersCount(unsigned value): value(value) {}; unsigned value; _1e73af3e_layersCount(const _1e73af3e_layersCount &) = delete; } _1e73af3e_layersCount;
typedef struct _1e73af3e_multisampleCount { _1e73af3e_multisampleCount(RedMultisampleCountBitflag value): value(value) {}; RedMultisampleCountBitflag value; _1e73af3e_multisampleCount(const _1e73af3e_multisampleCount &) = delete; } _1e73af3e_multisampleCount;
typedef struct _1e73af3e_restrictToAccess { _1e73af3e_restrictToAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _1e73af3e_restrictToAccess(const _1e73af3e_restrictToAccess &) = delete; } _1e73af3e_restrictToAccess;
typedef struct _1e73af3e_initialAccess { _1e73af3e_initialAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _1e73af3e_initialAccess(const _1e73af3e_initialAccess &) = delete; } _1e73af3e_initialAccess;
typedef struct _1e73af3e_initialQueueFamilyIndex { _1e73af3e_initialQueueFamilyIndex(unsigned value): value(value) {}; unsigned value; _1e73af3e_initialQueueFamilyIndex(const _1e73af3e_initialQueueFamilyIndex &) = delete; } _1e73af3e_initialQueueFamilyIndex;
typedef struct _1e73af3e_dedicate { _1e73af3e_dedicate(RedBool32 value): value(value) {}; RedBool32 value; _1e73af3e_dedicate(const _1e73af3e_dedicate &) = delete; } _1e73af3e_dedicate;
typedef struct _1e73af3e_outImage { _1e73af3e_outImage(RedImage* value): value(value) {}; RedImage* value; _1e73af3e_outImage(const _1e73af3e_outImage &) = delete; } _1e73af3e_outImage;
typedef struct _1e73af3e_outStatuses { _1e73af3e_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _1e73af3e_outStatuses(const _1e73af3e_outStatuses &) = delete; } _1e73af3e_outStatuses;
typedef struct _1e73af3e_optionalFile { _1e73af3e_optionalFile(char* value): value(value) {}; char* value; _1e73af3e_optionalFile(const _1e73af3e_optionalFile &) = delete; } _1e73af3e_optionalFile;
typedef struct _1e73af3e_optionalLine { _1e73af3e_optionalLine(int value): value(value) {}; int value; _1e73af3e_optionalLine(const _1e73af3e_optionalLine &) = delete; } _1e73af3e_optionalLine;
typedef struct _1e73af3e_optionalUserData { _1e73af3e_optionalUserData(void* value): value(value) {}; void* value; _1e73af3e_optionalUserData(const _1e73af3e_optionalUserData &) = delete; } _1e73af3e_optionalUserData;
void np_redCreateImage(_1e73af3e_context & context, _1e73af3e_gpu & gpu, _1e73af3e_handleName & handleName, _1e73af3e_dimensions & dimensions, _1e73af3e_format & format, _1e73af3e_width & width, _1e73af3e_height & height, _1e73af3e_depth & depth, _1e73af3e_levelsCount & levelsCount, _1e73af3e_layersCount & layersCount, _1e73af3e_multisampleCount & multisampleCount, _1e73af3e_restrictToAccess & restrictToAccess, _1e73af3e_initialAccess & initialAccess, _1e73af3e_initialQueueFamilyIndex & initialQueueFamilyIndex, _1e73af3e_dedicate & dedicate, _1e73af3e_outImage & outImage, _1e73af3e_outStatuses & outStatuses, _1e73af3e_optionalFile & optionalFile, _1e73af3e_optionalLine & optionalLine, _1e73af3e_optionalUserData & optionalUserData) {
  redCreateImage(context.value, gpu.value, handleName.value, dimensions.value, format.value, width.value, height.value, depth.value, levelsCount.value, layersCount.value, multisampleCount.value, restrictToAccess.value, initialAccess.value, initialQueueFamilyIndex.value, dedicate.value, outImage.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateSampler redCreateSampler
#define _66b1ed07_context(value) value
#define _66b1ed07_gpu(value) value
#define _66b1ed07_handleName(value) value
#define _66b1ed07_filteringMag(value) value
#define _66b1ed07_filteringMin(value) value
#define _66b1ed07_filteringMip(value) value
#define _66b1ed07_behaviorOutsideTextureCoordinateU(value) value
#define _66b1ed07_behaviorOutsideTextureCoordinateV(value) value
#define _66b1ed07_behaviorOutsideTextureCoordinateW(value) value
#define _66b1ed07_mipLodBias(value) value
#define _66b1ed07_enableAnisotropy(value) value
#define _66b1ed07_maxAnisotropy(value) value
#define _66b1ed07_enableCompare(value) value
#define _66b1ed07_compareOp(value) value
#define _66b1ed07_minLod(value) value
#define _66b1ed07_maxLod(value) value
#define _66b1ed07_outSampler(value) value
#define _66b1ed07_outStatuses(value) value
#define _66b1ed07_optionalFile(value) value
#define _66b1ed07_optionalLine(value) value
#define _66b1ed07_optionalUserData(value) value
#else
typedef struct _66b1ed07_context { _66b1ed07_context(RedContext value): value(value) {}; RedContext value; _66b1ed07_context(const _66b1ed07_context &) = delete; } _66b1ed07_context;
typedef struct _66b1ed07_gpu { _66b1ed07_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _66b1ed07_gpu(const _66b1ed07_gpu &) = delete; } _66b1ed07_gpu;
typedef struct _66b1ed07_handleName { _66b1ed07_handleName(char* value): value(value) {}; char* value; _66b1ed07_handleName(const _66b1ed07_handleName &) = delete; } _66b1ed07_handleName;
typedef struct _66b1ed07_filteringMag { _66b1ed07_filteringMag(RedSamplerFiltering value): value(value) {}; RedSamplerFiltering value; _66b1ed07_filteringMag(const _66b1ed07_filteringMag &) = delete; } _66b1ed07_filteringMag;
typedef struct _66b1ed07_filteringMin { _66b1ed07_filteringMin(RedSamplerFiltering value): value(value) {}; RedSamplerFiltering value; _66b1ed07_filteringMin(const _66b1ed07_filteringMin &) = delete; } _66b1ed07_filteringMin;
typedef struct _66b1ed07_filteringMip { _66b1ed07_filteringMip(RedSamplerFilteringMip value): value(value) {}; RedSamplerFilteringMip value; _66b1ed07_filteringMip(const _66b1ed07_filteringMip &) = delete; } _66b1ed07_filteringMip;
typedef struct _66b1ed07_behaviorOutsideTextureCoordinateU { _66b1ed07_behaviorOutsideTextureCoordinateU(RedSamplerBehaviorOutsideTextureCoordinate value): value(value) {}; RedSamplerBehaviorOutsideTextureCoordinate value; _66b1ed07_behaviorOutsideTextureCoordinateU(const _66b1ed07_behaviorOutsideTextureCoordinateU &) = delete; } _66b1ed07_behaviorOutsideTextureCoordinateU;
typedef struct _66b1ed07_behaviorOutsideTextureCoordinateV { _66b1ed07_behaviorOutsideTextureCoordinateV(RedSamplerBehaviorOutsideTextureCoordinate value): value(value) {}; RedSamplerBehaviorOutsideTextureCoordinate value; _66b1ed07_behaviorOutsideTextureCoordinateV(const _66b1ed07_behaviorOutsideTextureCoordinateV &) = delete; } _66b1ed07_behaviorOutsideTextureCoordinateV;
typedef struct _66b1ed07_behaviorOutsideTextureCoordinateW { _66b1ed07_behaviorOutsideTextureCoordinateW(RedSamplerBehaviorOutsideTextureCoordinate value): value(value) {}; RedSamplerBehaviorOutsideTextureCoordinate value; _66b1ed07_behaviorOutsideTextureCoordinateW(const _66b1ed07_behaviorOutsideTextureCoordinateW &) = delete; } _66b1ed07_behaviorOutsideTextureCoordinateW;
typedef struct _66b1ed07_mipLodBias { _66b1ed07_mipLodBias(float value): value(value) {}; float value; _66b1ed07_mipLodBias(const _66b1ed07_mipLodBias &) = delete; } _66b1ed07_mipLodBias;
typedef struct _66b1ed07_enableAnisotropy { _66b1ed07_enableAnisotropy(RedBool32 value): value(value) {}; RedBool32 value; _66b1ed07_enableAnisotropy(const _66b1ed07_enableAnisotropy &) = delete; } _66b1ed07_enableAnisotropy;
typedef struct _66b1ed07_maxAnisotropy { _66b1ed07_maxAnisotropy(float value): value(value) {}; float value; _66b1ed07_maxAnisotropy(const _66b1ed07_maxAnisotropy &) = delete; } _66b1ed07_maxAnisotropy;
typedef struct _66b1ed07_enableCompare { _66b1ed07_enableCompare(RedBool32 value): value(value) {}; RedBool32 value; _66b1ed07_enableCompare(const _66b1ed07_enableCompare &) = delete; } _66b1ed07_enableCompare;
typedef struct _66b1ed07_compareOp { _66b1ed07_compareOp(RedCompareOp value): value(value) {}; RedCompareOp value; _66b1ed07_compareOp(const _66b1ed07_compareOp &) = delete; } _66b1ed07_compareOp;
typedef struct _66b1ed07_minLod { _66b1ed07_minLod(float value): value(value) {}; float value; _66b1ed07_minLod(const _66b1ed07_minLod &) = delete; } _66b1ed07_minLod;
typedef struct _66b1ed07_maxLod { _66b1ed07_maxLod(float value): value(value) {}; float value; _66b1ed07_maxLod(const _66b1ed07_maxLod &) = delete; } _66b1ed07_maxLod;
typedef struct _66b1ed07_outSampler { _66b1ed07_outSampler(RedHandleSampler* value): value(value) {}; RedHandleSampler* value; _66b1ed07_outSampler(const _66b1ed07_outSampler &) = delete; } _66b1ed07_outSampler;
typedef struct _66b1ed07_outStatuses { _66b1ed07_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _66b1ed07_outStatuses(const _66b1ed07_outStatuses &) = delete; } _66b1ed07_outStatuses;
typedef struct _66b1ed07_optionalFile { _66b1ed07_optionalFile(char* value): value(value) {}; char* value; _66b1ed07_optionalFile(const _66b1ed07_optionalFile &) = delete; } _66b1ed07_optionalFile;
typedef struct _66b1ed07_optionalLine { _66b1ed07_optionalLine(int value): value(value) {}; int value; _66b1ed07_optionalLine(const _66b1ed07_optionalLine &) = delete; } _66b1ed07_optionalLine;
typedef struct _66b1ed07_optionalUserData { _66b1ed07_optionalUserData(void* value): value(value) {}; void* value; _66b1ed07_optionalUserData(const _66b1ed07_optionalUserData &) = delete; } _66b1ed07_optionalUserData;
void np_redCreateSampler(_66b1ed07_context & context, _66b1ed07_gpu & gpu, _66b1ed07_handleName & handleName, _66b1ed07_filteringMag & filteringMag, _66b1ed07_filteringMin & filteringMin, _66b1ed07_filteringMip & filteringMip, _66b1ed07_behaviorOutsideTextureCoordinateU & behaviorOutsideTextureCoordinateU, _66b1ed07_behaviorOutsideTextureCoordinateV & behaviorOutsideTextureCoordinateV, _66b1ed07_behaviorOutsideTextureCoordinateW & behaviorOutsideTextureCoordinateW, _66b1ed07_mipLodBias & mipLodBias, _66b1ed07_enableAnisotropy & enableAnisotropy, _66b1ed07_maxAnisotropy & maxAnisotropy, _66b1ed07_enableCompare & enableCompare, _66b1ed07_compareOp & compareOp, _66b1ed07_minLod & minLod, _66b1ed07_maxLod & maxLod, _66b1ed07_outSampler & outSampler, _66b1ed07_outStatuses & outStatuses, _66b1ed07_optionalFile & optionalFile, _66b1ed07_optionalLine & optionalLine, _66b1ed07_optionalUserData & optionalUserData) {
  redCreateSampler(context.value, gpu.value, handleName.value, filteringMag.value, filteringMin.value, filteringMip.value, behaviorOutsideTextureCoordinateU.value, behaviorOutsideTextureCoordinateV.value, behaviorOutsideTextureCoordinateW.value, mipLodBias.value, enableAnisotropy.value, maxAnisotropy.value, enableCompare.value, compareOp.value, minLod.value, maxLod.value, outSampler.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateTexture redCreateTexture
#define _1ff52d80_context(value) value
#define _1ff52d80_gpu(value) value
#define _1ff52d80_handleName(value) value
#define _1ff52d80_image(value) value
#define _1ff52d80_parts(value) value
#define _1ff52d80_dimensions(value) value
#define _1ff52d80_format(value) value
#define _1ff52d80_levelsFirst(value) value
#define _1ff52d80_levelsCount(value) value
#define _1ff52d80_layersFirst(value) value
#define _1ff52d80_layersCount(value) value
#define _1ff52d80_restrictToAccess(value) value
#define _1ff52d80_outTexture(value) value
#define _1ff52d80_outStatuses(value) value
#define _1ff52d80_optionalFile(value) value
#define _1ff52d80_optionalLine(value) value
#define _1ff52d80_optionalUserData(value) value
#else
typedef struct _1ff52d80_context { _1ff52d80_context(RedContext value): value(value) {}; RedContext value; _1ff52d80_context(const _1ff52d80_context &) = delete; } _1ff52d80_context;
typedef struct _1ff52d80_gpu { _1ff52d80_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _1ff52d80_gpu(const _1ff52d80_gpu &) = delete; } _1ff52d80_gpu;
typedef struct _1ff52d80_handleName { _1ff52d80_handleName(char* value): value(value) {}; char* value; _1ff52d80_handleName(const _1ff52d80_handleName &) = delete; } _1ff52d80_handleName;
typedef struct _1ff52d80_image { _1ff52d80_image(RedHandleImage value): value(value) {}; RedHandleImage value; _1ff52d80_image(const _1ff52d80_image &) = delete; } _1ff52d80_image;
typedef struct _1ff52d80_parts { _1ff52d80_parts(RedImagePartBitflags value): value(value) {}; RedImagePartBitflags value; _1ff52d80_parts(const _1ff52d80_parts &) = delete; } _1ff52d80_parts;
typedef struct _1ff52d80_dimensions { _1ff52d80_dimensions(RedTextureDimensions value): value(value) {}; RedTextureDimensions value; _1ff52d80_dimensions(const _1ff52d80_dimensions &) = delete; } _1ff52d80_dimensions;
typedef struct _1ff52d80_format { _1ff52d80_format(RedFormat value): value(value) {}; RedFormat value; _1ff52d80_format(const _1ff52d80_format &) = delete; } _1ff52d80_format;
typedef struct _1ff52d80_levelsFirst { _1ff52d80_levelsFirst(unsigned value): value(value) {}; unsigned value; _1ff52d80_levelsFirst(const _1ff52d80_levelsFirst &) = delete; } _1ff52d80_levelsFirst;
typedef struct _1ff52d80_levelsCount { _1ff52d80_levelsCount(unsigned value): value(value) {}; unsigned value; _1ff52d80_levelsCount(const _1ff52d80_levelsCount &) = delete; } _1ff52d80_levelsCount;
typedef struct _1ff52d80_layersFirst { _1ff52d80_layersFirst(unsigned value): value(value) {}; unsigned value; _1ff52d80_layersFirst(const _1ff52d80_layersFirst &) = delete; } _1ff52d80_layersFirst;
typedef struct _1ff52d80_layersCount { _1ff52d80_layersCount(unsigned value): value(value) {}; unsigned value; _1ff52d80_layersCount(const _1ff52d80_layersCount &) = delete; } _1ff52d80_layersCount;
typedef struct _1ff52d80_restrictToAccess { _1ff52d80_restrictToAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _1ff52d80_restrictToAccess(const _1ff52d80_restrictToAccess &) = delete; } _1ff52d80_restrictToAccess;
typedef struct _1ff52d80_outTexture { _1ff52d80_outTexture(RedHandleTexture* value): value(value) {}; RedHandleTexture* value; _1ff52d80_outTexture(const _1ff52d80_outTexture &) = delete; } _1ff52d80_outTexture;
typedef struct _1ff52d80_outStatuses { _1ff52d80_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _1ff52d80_outStatuses(const _1ff52d80_outStatuses &) = delete; } _1ff52d80_outStatuses;
typedef struct _1ff52d80_optionalFile { _1ff52d80_optionalFile(char* value): value(value) {}; char* value; _1ff52d80_optionalFile(const _1ff52d80_optionalFile &) = delete; } _1ff52d80_optionalFile;
typedef struct _1ff52d80_optionalLine { _1ff52d80_optionalLine(int value): value(value) {}; int value; _1ff52d80_optionalLine(const _1ff52d80_optionalLine &) = delete; } _1ff52d80_optionalLine;
typedef struct _1ff52d80_optionalUserData { _1ff52d80_optionalUserData(void* value): value(value) {}; void* value; _1ff52d80_optionalUserData(const _1ff52d80_optionalUserData &) = delete; } _1ff52d80_optionalUserData;
void np_redCreateTexture(_1ff52d80_context & context, _1ff52d80_gpu & gpu, _1ff52d80_handleName & handleName, _1ff52d80_image & image, _1ff52d80_parts & parts, _1ff52d80_dimensions & dimensions, _1ff52d80_format & format, _1ff52d80_levelsFirst & levelsFirst, _1ff52d80_levelsCount & levelsCount, _1ff52d80_layersFirst & layersFirst, _1ff52d80_layersCount & layersCount, _1ff52d80_restrictToAccess & restrictToAccess, _1ff52d80_outTexture & outTexture, _1ff52d80_outStatuses & outStatuses, _1ff52d80_optionalFile & optionalFile, _1ff52d80_optionalLine & optionalLine, _1ff52d80_optionalUserData & optionalUserData) {
  redCreateTexture(context.value, gpu.value, handleName.value, image.value, parts.value, dimensions.value, format.value, levelsFirst.value, levelsCount.value, layersFirst.value, layersCount.value, restrictToAccess.value, outTexture.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateGpuCode redCreateGpuCode
#define _01c06284_context(value) value
#define _01c06284_gpu(value) value
#define _01c06284_handleName(value) value
#define _01c06284_irBytesCount(value) value
#define _01c06284_ir(value) value
#define _01c06284_outGpuCode(value) value
#define _01c06284_outStatuses(value) value
#define _01c06284_optionalFile(value) value
#define _01c06284_optionalLine(value) value
#define _01c06284_optionalUserData(value) value
#else
typedef struct _01c06284_context { _01c06284_context(RedContext value): value(value) {}; RedContext value; _01c06284_context(const _01c06284_context &) = delete; } _01c06284_context;
typedef struct _01c06284_gpu { _01c06284_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _01c06284_gpu(const _01c06284_gpu &) = delete; } _01c06284_gpu;
typedef struct _01c06284_handleName { _01c06284_handleName(char* value): value(value) {}; char* value; _01c06284_handleName(const _01c06284_handleName &) = delete; } _01c06284_handleName;
typedef struct _01c06284_irBytesCount { _01c06284_irBytesCount(uint64_t value): value(value) {}; uint64_t value; _01c06284_irBytesCount(const _01c06284_irBytesCount &) = delete; } _01c06284_irBytesCount;
typedef struct _01c06284_ir { _01c06284_ir(void* value): value(value) {}; void* value; _01c06284_ir(const _01c06284_ir &) = delete; } _01c06284_ir;
typedef struct _01c06284_outGpuCode { _01c06284_outGpuCode(RedHandleGpuCode* value): value(value) {}; RedHandleGpuCode* value; _01c06284_outGpuCode(const _01c06284_outGpuCode &) = delete; } _01c06284_outGpuCode;
typedef struct _01c06284_outStatuses { _01c06284_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _01c06284_outStatuses(const _01c06284_outStatuses &) = delete; } _01c06284_outStatuses;
typedef struct _01c06284_optionalFile { _01c06284_optionalFile(char* value): value(value) {}; char* value; _01c06284_optionalFile(const _01c06284_optionalFile &) = delete; } _01c06284_optionalFile;
typedef struct _01c06284_optionalLine { _01c06284_optionalLine(int value): value(value) {}; int value; _01c06284_optionalLine(const _01c06284_optionalLine &) = delete; } _01c06284_optionalLine;
typedef struct _01c06284_optionalUserData { _01c06284_optionalUserData(void* value): value(value) {}; void* value; _01c06284_optionalUserData(const _01c06284_optionalUserData &) = delete; } _01c06284_optionalUserData;
void np_redCreateGpuCode(_01c06284_context & context, _01c06284_gpu & gpu, _01c06284_handleName & handleName, _01c06284_irBytesCount & irBytesCount, _01c06284_ir & ir, _01c06284_outGpuCode & outGpuCode, _01c06284_outStatuses & outStatuses, _01c06284_optionalFile & optionalFile, _01c06284_optionalLine & optionalLine, _01c06284_optionalUserData & optionalUserData) {
  redCreateGpuCode(context.value, gpu.value, handleName.value, irBytesCount.value, ir.value, outGpuCode.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateOutputDeclaration redCreateOutputDeclaration
#define _4726df20_context(value) value
#define _4726df20_gpu(value) value
#define _4726df20_handleName(value) value
#define _4726df20_outputDeclarationMembers(value) value
#define _4726df20_outputDeclarationMembersResolveSources(value) value
#define _4726df20_dependencyByRegion(value) value
#define _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers(value) value
#define _4726df20_outOutputDeclaration(value) value
#define _4726df20_outStatuses(value) value
#define _4726df20_optionalFile(value) value
#define _4726df20_optionalLine(value) value
#define _4726df20_optionalUserData(value) value
#else
typedef struct _4726df20_context { _4726df20_context(RedContext value): value(value) {}; RedContext value; _4726df20_context(const _4726df20_context &) = delete; } _4726df20_context;
typedef struct _4726df20_gpu { _4726df20_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _4726df20_gpu(const _4726df20_gpu &) = delete; } _4726df20_gpu;
typedef struct _4726df20_handleName { _4726df20_handleName(char* value): value(value) {}; char* value; _4726df20_handleName(const _4726df20_handleName &) = delete; } _4726df20_handleName;
typedef struct _4726df20_outputDeclarationMembers { _4726df20_outputDeclarationMembers(RedOutputDeclarationMembers* value): value(value) {}; RedOutputDeclarationMembers* value; _4726df20_outputDeclarationMembers(const _4726df20_outputDeclarationMembers &) = delete; } _4726df20_outputDeclarationMembers;
typedef struct _4726df20_outputDeclarationMembersResolveSources { _4726df20_outputDeclarationMembersResolveSources(RedOutputDeclarationMembersResolveSources* value): value(value) {}; RedOutputDeclarationMembersResolveSources* value; _4726df20_outputDeclarationMembersResolveSources(const _4726df20_outputDeclarationMembersResolveSources &) = delete; } _4726df20_outputDeclarationMembersResolveSources;
typedef struct _4726df20_dependencyByRegion { _4726df20_dependencyByRegion(RedBool32 value): value(value) {}; RedBool32 value; _4726df20_dependencyByRegion(const _4726df20_dependencyByRegion &) = delete; } _4726df20_dependencyByRegion;
typedef struct _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers { _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers(RedBool32 value): value(value) {}; RedBool32 value; _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers(const _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers &) = delete; } _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers;
typedef struct _4726df20_outOutputDeclaration { _4726df20_outOutputDeclaration(RedHandleOutputDeclaration* value): value(value) {}; RedHandleOutputDeclaration* value; _4726df20_outOutputDeclaration(const _4726df20_outOutputDeclaration &) = delete; } _4726df20_outOutputDeclaration;
typedef struct _4726df20_outStatuses { _4726df20_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _4726df20_outStatuses(const _4726df20_outStatuses &) = delete; } _4726df20_outStatuses;
typedef struct _4726df20_optionalFile { _4726df20_optionalFile(char* value): value(value) {}; char* value; _4726df20_optionalFile(const _4726df20_optionalFile &) = delete; } _4726df20_optionalFile;
typedef struct _4726df20_optionalLine { _4726df20_optionalLine(int value): value(value) {}; int value; _4726df20_optionalLine(const _4726df20_optionalLine &) = delete; } _4726df20_optionalLine;
typedef struct _4726df20_optionalUserData { _4726df20_optionalUserData(void* value): value(value) {}; void* value; _4726df20_optionalUserData(const _4726df20_optionalUserData &) = delete; } _4726df20_optionalUserData;
void np_redCreateOutputDeclaration(_4726df20_context & context, _4726df20_gpu & gpu, _4726df20_handleName & handleName, _4726df20_outputDeclarationMembers & outputDeclarationMembers, _4726df20_outputDeclarationMembersResolveSources & outputDeclarationMembersResolveSources, _4726df20_dependencyByRegion & dependencyByRegion, _4726df20_dependencyByRegionAllowUsageAliasOrderBarriers & dependencyByRegionAllowUsageAliasOrderBarriers, _4726df20_outOutputDeclaration & outOutputDeclaration, _4726df20_outStatuses & outStatuses, _4726df20_optionalFile & optionalFile, _4726df20_optionalLine & optionalLine, _4726df20_optionalUserData & optionalUserData) {
  redCreateOutputDeclaration(context.value, gpu.value, handleName.value, outputDeclarationMembers.value, outputDeclarationMembersResolveSources.value, dependencyByRegion.value, dependencyByRegionAllowUsageAliasOrderBarriers.value, outOutputDeclaration.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateStructDeclaration redCreateStructDeclaration
#define _413f0fa7_context(value) value
#define _413f0fa7_gpu(value) value
#define _413f0fa7_handleName(value) value
#define _413f0fa7_structDeclarationMembersCount(value) value
#define _413f0fa7_structDeclarationMembers(value) value
#define _413f0fa7_structDeclarationMembersArrayROCount(value) value
#define _413f0fa7_structDeclarationMembersArrayRO(value) value
#define _413f0fa7_procedureParametersHandlesDeclaration(value) value
#define _413f0fa7_outStructDeclaration(value) value
#define _413f0fa7_outStatuses(value) value
#define _413f0fa7_optionalFile(value) value
#define _413f0fa7_optionalLine(value) value
#define _413f0fa7_optionalUserData(value) value
#else
typedef struct _413f0fa7_context { _413f0fa7_context(RedContext value): value(value) {}; RedContext value; _413f0fa7_context(const _413f0fa7_context &) = delete; } _413f0fa7_context;
typedef struct _413f0fa7_gpu { _413f0fa7_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _413f0fa7_gpu(const _413f0fa7_gpu &) = delete; } _413f0fa7_gpu;
typedef struct _413f0fa7_handleName { _413f0fa7_handleName(char* value): value(value) {}; char* value; _413f0fa7_handleName(const _413f0fa7_handleName &) = delete; } _413f0fa7_handleName;
typedef struct _413f0fa7_structDeclarationMembersCount { _413f0fa7_structDeclarationMembersCount(unsigned value): value(value) {}; unsigned value; _413f0fa7_structDeclarationMembersCount(const _413f0fa7_structDeclarationMembersCount &) = delete; } _413f0fa7_structDeclarationMembersCount;
typedef struct _413f0fa7_structDeclarationMembers { _413f0fa7_structDeclarationMembers(RedStructDeclarationMember* value): value(value) {}; RedStructDeclarationMember* value; _413f0fa7_structDeclarationMembers(const _413f0fa7_structDeclarationMembers &) = delete; } _413f0fa7_structDeclarationMembers;
typedef struct _413f0fa7_structDeclarationMembersArrayROCount { _413f0fa7_structDeclarationMembersArrayROCount(unsigned value): value(value) {}; unsigned value; _413f0fa7_structDeclarationMembersArrayROCount(const _413f0fa7_structDeclarationMembersArrayROCount &) = delete; } _413f0fa7_structDeclarationMembersArrayROCount;
typedef struct _413f0fa7_structDeclarationMembersArrayRO { _413f0fa7_structDeclarationMembersArrayRO(RedStructDeclarationMemberArrayRO* value): value(value) {}; RedStructDeclarationMemberArrayRO* value; _413f0fa7_structDeclarationMembersArrayRO(const _413f0fa7_structDeclarationMembersArrayRO &) = delete; } _413f0fa7_structDeclarationMembersArrayRO;
typedef struct _413f0fa7_procedureParametersHandlesDeclaration { _413f0fa7_procedureParametersHandlesDeclaration(RedBool32 value): value(value) {}; RedBool32 value; _413f0fa7_procedureParametersHandlesDeclaration(const _413f0fa7_procedureParametersHandlesDeclaration &) = delete; } _413f0fa7_procedureParametersHandlesDeclaration;
typedef struct _413f0fa7_outStructDeclaration { _413f0fa7_outStructDeclaration(RedHandleStructDeclaration* value): value(value) {}; RedHandleStructDeclaration* value; _413f0fa7_outStructDeclaration(const _413f0fa7_outStructDeclaration &) = delete; } _413f0fa7_outStructDeclaration;
typedef struct _413f0fa7_outStatuses { _413f0fa7_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _413f0fa7_outStatuses(const _413f0fa7_outStatuses &) = delete; } _413f0fa7_outStatuses;
typedef struct _413f0fa7_optionalFile { _413f0fa7_optionalFile(char* value): value(value) {}; char* value; _413f0fa7_optionalFile(const _413f0fa7_optionalFile &) = delete; } _413f0fa7_optionalFile;
typedef struct _413f0fa7_optionalLine { _413f0fa7_optionalLine(int value): value(value) {}; int value; _413f0fa7_optionalLine(const _413f0fa7_optionalLine &) = delete; } _413f0fa7_optionalLine;
typedef struct _413f0fa7_optionalUserData { _413f0fa7_optionalUserData(void* value): value(value) {}; void* value; _413f0fa7_optionalUserData(const _413f0fa7_optionalUserData &) = delete; } _413f0fa7_optionalUserData;
void np_redCreateStructDeclaration(_413f0fa7_context & context, _413f0fa7_gpu & gpu, _413f0fa7_handleName & handleName, _413f0fa7_structDeclarationMembersCount & structDeclarationMembersCount, _413f0fa7_structDeclarationMembers & structDeclarationMembers, _413f0fa7_structDeclarationMembersArrayROCount & structDeclarationMembersArrayROCount, _413f0fa7_structDeclarationMembersArrayRO & structDeclarationMembersArrayRO, _413f0fa7_procedureParametersHandlesDeclaration & procedureParametersHandlesDeclaration, _413f0fa7_outStructDeclaration & outStructDeclaration, _413f0fa7_outStatuses & outStatuses, _413f0fa7_optionalFile & optionalFile, _413f0fa7_optionalLine & optionalLine, _413f0fa7_optionalUserData & optionalUserData) {
  redCreateStructDeclaration(context.value, gpu.value, handleName.value, structDeclarationMembersCount.value, structDeclarationMembers.value, structDeclarationMembersArrayROCount.value, structDeclarationMembersArrayRO.value, procedureParametersHandlesDeclaration.value, outStructDeclaration.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateProcedureParameters redCreateProcedureParameters
#define _7067ad8e_context(value) value
#define _7067ad8e_gpu(value) value
#define _7067ad8e_handleName(value) value
#define _7067ad8e_procedureParametersDeclaration(value) value
#define _7067ad8e_outProcedureParameters(value) value
#define _7067ad8e_outStatuses(value) value
#define _7067ad8e_optionalFile(value) value
#define _7067ad8e_optionalLine(value) value
#define _7067ad8e_optionalUserData(value) value
#else
typedef struct _7067ad8e_context { _7067ad8e_context(RedContext value): value(value) {}; RedContext value; _7067ad8e_context(const _7067ad8e_context &) = delete; } _7067ad8e_context;
typedef struct _7067ad8e_gpu { _7067ad8e_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _7067ad8e_gpu(const _7067ad8e_gpu &) = delete; } _7067ad8e_gpu;
typedef struct _7067ad8e_handleName { _7067ad8e_handleName(char* value): value(value) {}; char* value; _7067ad8e_handleName(const _7067ad8e_handleName &) = delete; } _7067ad8e_handleName;
typedef struct _7067ad8e_procedureParametersDeclaration { _7067ad8e_procedureParametersDeclaration(RedProcedureParametersDeclaration* value): value(value) {}; RedProcedureParametersDeclaration* value; _7067ad8e_procedureParametersDeclaration(const _7067ad8e_procedureParametersDeclaration &) = delete; } _7067ad8e_procedureParametersDeclaration;
typedef struct _7067ad8e_outProcedureParameters { _7067ad8e_outProcedureParameters(RedHandleProcedureParameters* value): value(value) {}; RedHandleProcedureParameters* value; _7067ad8e_outProcedureParameters(const _7067ad8e_outProcedureParameters &) = delete; } _7067ad8e_outProcedureParameters;
typedef struct _7067ad8e_outStatuses { _7067ad8e_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _7067ad8e_outStatuses(const _7067ad8e_outStatuses &) = delete; } _7067ad8e_outStatuses;
typedef struct _7067ad8e_optionalFile { _7067ad8e_optionalFile(char* value): value(value) {}; char* value; _7067ad8e_optionalFile(const _7067ad8e_optionalFile &) = delete; } _7067ad8e_optionalFile;
typedef struct _7067ad8e_optionalLine { _7067ad8e_optionalLine(int value): value(value) {}; int value; _7067ad8e_optionalLine(const _7067ad8e_optionalLine &) = delete; } _7067ad8e_optionalLine;
typedef struct _7067ad8e_optionalUserData { _7067ad8e_optionalUserData(void* value): value(value) {}; void* value; _7067ad8e_optionalUserData(const _7067ad8e_optionalUserData &) = delete; } _7067ad8e_optionalUserData;
void np_redCreateProcedureParameters(_7067ad8e_context & context, _7067ad8e_gpu & gpu, _7067ad8e_handleName & handleName, _7067ad8e_procedureParametersDeclaration & procedureParametersDeclaration, _7067ad8e_outProcedureParameters & outProcedureParameters, _7067ad8e_outStatuses & outStatuses, _7067ad8e_optionalFile & optionalFile, _7067ad8e_optionalLine & optionalLine, _7067ad8e_optionalUserData & optionalUserData) {
  redCreateProcedureParameters(context.value, gpu.value, handleName.value, procedureParametersDeclaration.value, outProcedureParameters.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateProcedureCache redCreateProcedureCache
#define _ec5dbc9f_context(value) value
#define _ec5dbc9f_gpu(value) value
#define _ec5dbc9f_handleName(value) value
#define _ec5dbc9f_fromBlobBytesCount(value) value
#define _ec5dbc9f_fromBlob(value) value
#define _ec5dbc9f_outProcedureCache(value) value
#define _ec5dbc9f_outStatuses(value) value
#define _ec5dbc9f_optionalFile(value) value
#define _ec5dbc9f_optionalLine(value) value
#define _ec5dbc9f_optionalUserData(value) value
#else
typedef struct _ec5dbc9f_context { _ec5dbc9f_context(RedContext value): value(value) {}; RedContext value; _ec5dbc9f_context(const _ec5dbc9f_context &) = delete; } _ec5dbc9f_context;
typedef struct _ec5dbc9f_gpu { _ec5dbc9f_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _ec5dbc9f_gpu(const _ec5dbc9f_gpu &) = delete; } _ec5dbc9f_gpu;
typedef struct _ec5dbc9f_handleName { _ec5dbc9f_handleName(char* value): value(value) {}; char* value; _ec5dbc9f_handleName(const _ec5dbc9f_handleName &) = delete; } _ec5dbc9f_handleName;
typedef struct _ec5dbc9f_fromBlobBytesCount { _ec5dbc9f_fromBlobBytesCount(uint64_t value): value(value) {}; uint64_t value; _ec5dbc9f_fromBlobBytesCount(const _ec5dbc9f_fromBlobBytesCount &) = delete; } _ec5dbc9f_fromBlobBytesCount;
typedef struct _ec5dbc9f_fromBlob { _ec5dbc9f_fromBlob(void* value): value(value) {}; void* value; _ec5dbc9f_fromBlob(const _ec5dbc9f_fromBlob &) = delete; } _ec5dbc9f_fromBlob;
typedef struct _ec5dbc9f_outProcedureCache { _ec5dbc9f_outProcedureCache(RedHandleProcedureCache* value): value(value) {}; RedHandleProcedureCache* value; _ec5dbc9f_outProcedureCache(const _ec5dbc9f_outProcedureCache &) = delete; } _ec5dbc9f_outProcedureCache;
typedef struct _ec5dbc9f_outStatuses { _ec5dbc9f_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _ec5dbc9f_outStatuses(const _ec5dbc9f_outStatuses &) = delete; } _ec5dbc9f_outStatuses;
typedef struct _ec5dbc9f_optionalFile { _ec5dbc9f_optionalFile(char* value): value(value) {}; char* value; _ec5dbc9f_optionalFile(const _ec5dbc9f_optionalFile &) = delete; } _ec5dbc9f_optionalFile;
typedef struct _ec5dbc9f_optionalLine { _ec5dbc9f_optionalLine(int value): value(value) {}; int value; _ec5dbc9f_optionalLine(const _ec5dbc9f_optionalLine &) = delete; } _ec5dbc9f_optionalLine;
typedef struct _ec5dbc9f_optionalUserData { _ec5dbc9f_optionalUserData(void* value): value(value) {}; void* value; _ec5dbc9f_optionalUserData(const _ec5dbc9f_optionalUserData &) = delete; } _ec5dbc9f_optionalUserData;
void np_redCreateProcedureCache(_ec5dbc9f_context & context, _ec5dbc9f_gpu & gpu, _ec5dbc9f_handleName & handleName, _ec5dbc9f_fromBlobBytesCount & fromBlobBytesCount, _ec5dbc9f_fromBlob & fromBlob, _ec5dbc9f_outProcedureCache & outProcedureCache, _ec5dbc9f_outStatuses & outStatuses, _ec5dbc9f_optionalFile & optionalFile, _ec5dbc9f_optionalLine & optionalLine, _ec5dbc9f_optionalUserData & optionalUserData) {
  redCreateProcedureCache(context.value, gpu.value, handleName.value, fromBlobBytesCount.value, fromBlob.value, outProcedureCache.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateProcedure redCreateProcedure
#define _81f861ea_context(value) value
#define _81f861ea_gpu(value) value
#define _81f861ea_handleName(value) value
#define _81f861ea_procedureCache(value) value
#define _81f861ea_outputDeclaration(value) value
#define _81f861ea_procedureParameters(value) value
#define _81f861ea_gpuCodeVertexMainProcedureName(value) value
#define _81f861ea_gpuCodeVertex(value) value
#define _81f861ea_gpuCodeFragmentMainProcedureName(value) value
#define _81f861ea_gpuCodeFragment(value) value
#define _81f861ea_state(value) value
#define _81f861ea_stateExtension(value) value
#define _81f861ea_deriveBase(value) value
#define _81f861ea_deriveFrom(value) value
#define _81f861ea_outProcedure(value) value
#define _81f861ea_outStatuses(value) value
#define _81f861ea_optionalFile(value) value
#define _81f861ea_optionalLine(value) value
#define _81f861ea_optionalUserData(value) value
#else
typedef struct _81f861ea_context { _81f861ea_context(RedContext value): value(value) {}; RedContext value; _81f861ea_context(const _81f861ea_context &) = delete; } _81f861ea_context;
typedef struct _81f861ea_gpu { _81f861ea_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _81f861ea_gpu(const _81f861ea_gpu &) = delete; } _81f861ea_gpu;
typedef struct _81f861ea_handleName { _81f861ea_handleName(char* value): value(value) {}; char* value; _81f861ea_handleName(const _81f861ea_handleName &) = delete; } _81f861ea_handleName;
typedef struct _81f861ea_procedureCache { _81f861ea_procedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _81f861ea_procedureCache(const _81f861ea_procedureCache &) = delete; } _81f861ea_procedureCache;
typedef struct _81f861ea_outputDeclaration { _81f861ea_outputDeclaration(RedHandleOutputDeclaration value): value(value) {}; RedHandleOutputDeclaration value; _81f861ea_outputDeclaration(const _81f861ea_outputDeclaration &) = delete; } _81f861ea_outputDeclaration;
typedef struct _81f861ea_procedureParameters { _81f861ea_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _81f861ea_procedureParameters(const _81f861ea_procedureParameters &) = delete; } _81f861ea_procedureParameters;
typedef struct _81f861ea_gpuCodeVertexMainProcedureName { _81f861ea_gpuCodeVertexMainProcedureName(char* value): value(value) {}; char* value; _81f861ea_gpuCodeVertexMainProcedureName(const _81f861ea_gpuCodeVertexMainProcedureName &) = delete; } _81f861ea_gpuCodeVertexMainProcedureName;
typedef struct _81f861ea_gpuCodeVertex { _81f861ea_gpuCodeVertex(RedHandleGpuCode value): value(value) {}; RedHandleGpuCode value; _81f861ea_gpuCodeVertex(const _81f861ea_gpuCodeVertex &) = delete; } _81f861ea_gpuCodeVertex;
typedef struct _81f861ea_gpuCodeFragmentMainProcedureName { _81f861ea_gpuCodeFragmentMainProcedureName(char* value): value(value) {}; char* value; _81f861ea_gpuCodeFragmentMainProcedureName(const _81f861ea_gpuCodeFragmentMainProcedureName &) = delete; } _81f861ea_gpuCodeFragmentMainProcedureName;
typedef struct _81f861ea_gpuCodeFragment { _81f861ea_gpuCodeFragment(RedHandleGpuCode value): value(value) {}; RedHandleGpuCode value; _81f861ea_gpuCodeFragment(const _81f861ea_gpuCodeFragment &) = delete; } _81f861ea_gpuCodeFragment;
typedef struct _81f861ea_state { _81f861ea_state(RedProcedureState* value): value(value) {}; RedProcedureState* value; _81f861ea_state(const _81f861ea_state &) = delete; } _81f861ea_state;
typedef struct _81f861ea_stateExtension { _81f861ea_stateExtension(void* value): value(value) {}; void* value; _81f861ea_stateExtension(const _81f861ea_stateExtension &) = delete; } _81f861ea_stateExtension;
typedef struct _81f861ea_deriveBase { _81f861ea_deriveBase(RedBool32 value): value(value) {}; RedBool32 value; _81f861ea_deriveBase(const _81f861ea_deriveBase &) = delete; } _81f861ea_deriveBase;
typedef struct _81f861ea_deriveFrom { _81f861ea_deriveFrom(RedHandleProcedure value): value(value) {}; RedHandleProcedure value; _81f861ea_deriveFrom(const _81f861ea_deriveFrom &) = delete; } _81f861ea_deriveFrom;
typedef struct _81f861ea_outProcedure { _81f861ea_outProcedure(RedHandleProcedure* value): value(value) {}; RedHandleProcedure* value; _81f861ea_outProcedure(const _81f861ea_outProcedure &) = delete; } _81f861ea_outProcedure;
typedef struct _81f861ea_outStatuses { _81f861ea_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _81f861ea_outStatuses(const _81f861ea_outStatuses &) = delete; } _81f861ea_outStatuses;
typedef struct _81f861ea_optionalFile { _81f861ea_optionalFile(char* value): value(value) {}; char* value; _81f861ea_optionalFile(const _81f861ea_optionalFile &) = delete; } _81f861ea_optionalFile;
typedef struct _81f861ea_optionalLine { _81f861ea_optionalLine(int value): value(value) {}; int value; _81f861ea_optionalLine(const _81f861ea_optionalLine &) = delete; } _81f861ea_optionalLine;
typedef struct _81f861ea_optionalUserData { _81f861ea_optionalUserData(void* value): value(value) {}; void* value; _81f861ea_optionalUserData(const _81f861ea_optionalUserData &) = delete; } _81f861ea_optionalUserData;
void np_redCreateProcedure(_81f861ea_context & context, _81f861ea_gpu & gpu, _81f861ea_handleName & handleName, _81f861ea_procedureCache & procedureCache, _81f861ea_outputDeclaration & outputDeclaration, _81f861ea_procedureParameters & procedureParameters, _81f861ea_gpuCodeVertexMainProcedureName & gpuCodeVertexMainProcedureName, _81f861ea_gpuCodeVertex & gpuCodeVertex, _81f861ea_gpuCodeFragmentMainProcedureName & gpuCodeFragmentMainProcedureName, _81f861ea_gpuCodeFragment & gpuCodeFragment, _81f861ea_state & state, _81f861ea_stateExtension & stateExtension, _81f861ea_deriveBase & deriveBase, _81f861ea_deriveFrom & deriveFrom, _81f861ea_outProcedure & outProcedure, _81f861ea_outStatuses & outStatuses, _81f861ea_optionalFile & optionalFile, _81f861ea_optionalLine & optionalLine, _81f861ea_optionalUserData & optionalUserData) {
  redCreateProcedure(context.value, gpu.value, handleName.value, procedureCache.value, outputDeclaration.value, procedureParameters.value, gpuCodeVertexMainProcedureName.value, gpuCodeVertex.value, gpuCodeFragmentMainProcedureName.value, gpuCodeFragment.value, state.value, stateExtension.value, deriveBase.value, deriveFrom.value, outProcedure.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateProcedureCompute redCreateProcedureCompute
#define _bd6d24cf_context(value) value
#define _bd6d24cf_gpu(value) value
#define _bd6d24cf_handleName(value) value
#define _bd6d24cf_procedureCache(value) value
#define _bd6d24cf_procedureParameters(value) value
#define _bd6d24cf_gpuCodeMainProcedureName(value) value
#define _bd6d24cf_gpuCode(value) value
#define _bd6d24cf_outProcedure(value) value
#define _bd6d24cf_outStatuses(value) value
#define _bd6d24cf_optionalFile(value) value
#define _bd6d24cf_optionalLine(value) value
#define _bd6d24cf_optionalUserData(value) value
#else
typedef struct _bd6d24cf_context { _bd6d24cf_context(RedContext value): value(value) {}; RedContext value; _bd6d24cf_context(const _bd6d24cf_context &) = delete; } _bd6d24cf_context;
typedef struct _bd6d24cf_gpu { _bd6d24cf_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _bd6d24cf_gpu(const _bd6d24cf_gpu &) = delete; } _bd6d24cf_gpu;
typedef struct _bd6d24cf_handleName { _bd6d24cf_handleName(char* value): value(value) {}; char* value; _bd6d24cf_handleName(const _bd6d24cf_handleName &) = delete; } _bd6d24cf_handleName;
typedef struct _bd6d24cf_procedureCache { _bd6d24cf_procedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _bd6d24cf_procedureCache(const _bd6d24cf_procedureCache &) = delete; } _bd6d24cf_procedureCache;
typedef struct _bd6d24cf_procedureParameters { _bd6d24cf_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _bd6d24cf_procedureParameters(const _bd6d24cf_procedureParameters &) = delete; } _bd6d24cf_procedureParameters;
typedef struct _bd6d24cf_gpuCodeMainProcedureName { _bd6d24cf_gpuCodeMainProcedureName(char* value): value(value) {}; char* value; _bd6d24cf_gpuCodeMainProcedureName(const _bd6d24cf_gpuCodeMainProcedureName &) = delete; } _bd6d24cf_gpuCodeMainProcedureName;
typedef struct _bd6d24cf_gpuCode { _bd6d24cf_gpuCode(RedHandleGpuCode value): value(value) {}; RedHandleGpuCode value; _bd6d24cf_gpuCode(const _bd6d24cf_gpuCode &) = delete; } _bd6d24cf_gpuCode;
typedef struct _bd6d24cf_outProcedure { _bd6d24cf_outProcedure(RedHandleProcedure* value): value(value) {}; RedHandleProcedure* value; _bd6d24cf_outProcedure(const _bd6d24cf_outProcedure &) = delete; } _bd6d24cf_outProcedure;
typedef struct _bd6d24cf_outStatuses { _bd6d24cf_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _bd6d24cf_outStatuses(const _bd6d24cf_outStatuses &) = delete; } _bd6d24cf_outStatuses;
typedef struct _bd6d24cf_optionalFile { _bd6d24cf_optionalFile(char* value): value(value) {}; char* value; _bd6d24cf_optionalFile(const _bd6d24cf_optionalFile &) = delete; } _bd6d24cf_optionalFile;
typedef struct _bd6d24cf_optionalLine { _bd6d24cf_optionalLine(int value): value(value) {}; int value; _bd6d24cf_optionalLine(const _bd6d24cf_optionalLine &) = delete; } _bd6d24cf_optionalLine;
typedef struct _bd6d24cf_optionalUserData { _bd6d24cf_optionalUserData(void* value): value(value) {}; void* value; _bd6d24cf_optionalUserData(const _bd6d24cf_optionalUserData &) = delete; } _bd6d24cf_optionalUserData;
void np_redCreateProcedureCompute(_bd6d24cf_context & context, _bd6d24cf_gpu & gpu, _bd6d24cf_handleName & handleName, _bd6d24cf_procedureCache & procedureCache, _bd6d24cf_procedureParameters & procedureParameters, _bd6d24cf_gpuCodeMainProcedureName & gpuCodeMainProcedureName, _bd6d24cf_gpuCode & gpuCode, _bd6d24cf_outProcedure & outProcedure, _bd6d24cf_outStatuses & outStatuses, _bd6d24cf_optionalFile & optionalFile, _bd6d24cf_optionalLine & optionalLine, _bd6d24cf_optionalUserData & optionalUserData) {
  redCreateProcedureCompute(context.value, gpu.value, handleName.value, procedureCache.value, procedureParameters.value, gpuCodeMainProcedureName.value, gpuCode.value, outProcedure.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateOutput redCreateOutput
#define _242ac2a6_context(value) value
#define _242ac2a6_gpu(value) value
#define _242ac2a6_handleName(value) value
#define _242ac2a6_outputDeclaration(value) value
#define _242ac2a6_outputMembers(value) value
#define _242ac2a6_outputMembersResolveTargets(value) value
#define _242ac2a6_width(value) value
#define _242ac2a6_height(value) value
#define _242ac2a6_outOutput(value) value
#define _242ac2a6_outStatuses(value) value
#define _242ac2a6_optionalFile(value) value
#define _242ac2a6_optionalLine(value) value
#define _242ac2a6_optionalUserData(value) value
#else
typedef struct _242ac2a6_context { _242ac2a6_context(RedContext value): value(value) {}; RedContext value; _242ac2a6_context(const _242ac2a6_context &) = delete; } _242ac2a6_context;
typedef struct _242ac2a6_gpu { _242ac2a6_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _242ac2a6_gpu(const _242ac2a6_gpu &) = delete; } _242ac2a6_gpu;
typedef struct _242ac2a6_handleName { _242ac2a6_handleName(char* value): value(value) {}; char* value; _242ac2a6_handleName(const _242ac2a6_handleName &) = delete; } _242ac2a6_handleName;
typedef struct _242ac2a6_outputDeclaration { _242ac2a6_outputDeclaration(RedHandleOutputDeclaration value): value(value) {}; RedHandleOutputDeclaration value; _242ac2a6_outputDeclaration(const _242ac2a6_outputDeclaration &) = delete; } _242ac2a6_outputDeclaration;
typedef struct _242ac2a6_outputMembers { _242ac2a6_outputMembers(RedOutputMembers* value): value(value) {}; RedOutputMembers* value; _242ac2a6_outputMembers(const _242ac2a6_outputMembers &) = delete; } _242ac2a6_outputMembers;
typedef struct _242ac2a6_outputMembersResolveTargets { _242ac2a6_outputMembersResolveTargets(RedOutputMembersResolveTargets* value): value(value) {}; RedOutputMembersResolveTargets* value; _242ac2a6_outputMembersResolveTargets(const _242ac2a6_outputMembersResolveTargets &) = delete; } _242ac2a6_outputMembersResolveTargets;
typedef struct _242ac2a6_width { _242ac2a6_width(unsigned value): value(value) {}; unsigned value; _242ac2a6_width(const _242ac2a6_width &) = delete; } _242ac2a6_width;
typedef struct _242ac2a6_height { _242ac2a6_height(unsigned value): value(value) {}; unsigned value; _242ac2a6_height(const _242ac2a6_height &) = delete; } _242ac2a6_height;
typedef struct _242ac2a6_outOutput { _242ac2a6_outOutput(RedOutput* value): value(value) {}; RedOutput* value; _242ac2a6_outOutput(const _242ac2a6_outOutput &) = delete; } _242ac2a6_outOutput;
typedef struct _242ac2a6_outStatuses { _242ac2a6_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _242ac2a6_outStatuses(const _242ac2a6_outStatuses &) = delete; } _242ac2a6_outStatuses;
typedef struct _242ac2a6_optionalFile { _242ac2a6_optionalFile(char* value): value(value) {}; char* value; _242ac2a6_optionalFile(const _242ac2a6_optionalFile &) = delete; } _242ac2a6_optionalFile;
typedef struct _242ac2a6_optionalLine { _242ac2a6_optionalLine(int value): value(value) {}; int value; _242ac2a6_optionalLine(const _242ac2a6_optionalLine &) = delete; } _242ac2a6_optionalLine;
typedef struct _242ac2a6_optionalUserData { _242ac2a6_optionalUserData(void* value): value(value) {}; void* value; _242ac2a6_optionalUserData(const _242ac2a6_optionalUserData &) = delete; } _242ac2a6_optionalUserData;
void np_redCreateOutput(_242ac2a6_context & context, _242ac2a6_gpu & gpu, _242ac2a6_handleName & handleName, _242ac2a6_outputDeclaration & outputDeclaration, _242ac2a6_outputMembers & outputMembers, _242ac2a6_outputMembersResolveTargets & outputMembersResolveTargets, _242ac2a6_width & width, _242ac2a6_height & height, _242ac2a6_outOutput & outOutput, _242ac2a6_outStatuses & outStatuses, _242ac2a6_optionalFile & optionalFile, _242ac2a6_optionalLine & optionalLine, _242ac2a6_optionalUserData & optionalUserData) {
  redCreateOutput(context.value, gpu.value, handleName.value, outputDeclaration.value, outputMembers.value, outputMembersResolveTargets.value, width.value, height.value, outOutput.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateCpuSignal redCreateCpuSignal
#define _9dcf3e68_context(value) value
#define _9dcf3e68_gpu(value) value
#define _9dcf3e68_handleName(value) value
#define _9dcf3e68_createSignaled(value) value
#define _9dcf3e68_outCpuSignal(value) value
#define _9dcf3e68_outStatuses(value) value
#define _9dcf3e68_optionalFile(value) value
#define _9dcf3e68_optionalLine(value) value
#define _9dcf3e68_optionalUserData(value) value
#else
typedef struct _9dcf3e68_context { _9dcf3e68_context(RedContext value): value(value) {}; RedContext value; _9dcf3e68_context(const _9dcf3e68_context &) = delete; } _9dcf3e68_context;
typedef struct _9dcf3e68_gpu { _9dcf3e68_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _9dcf3e68_gpu(const _9dcf3e68_gpu &) = delete; } _9dcf3e68_gpu;
typedef struct _9dcf3e68_handleName { _9dcf3e68_handleName(char* value): value(value) {}; char* value; _9dcf3e68_handleName(const _9dcf3e68_handleName &) = delete; } _9dcf3e68_handleName;
typedef struct _9dcf3e68_createSignaled { _9dcf3e68_createSignaled(RedBool32 value): value(value) {}; RedBool32 value; _9dcf3e68_createSignaled(const _9dcf3e68_createSignaled &) = delete; } _9dcf3e68_createSignaled;
typedef struct _9dcf3e68_outCpuSignal { _9dcf3e68_outCpuSignal(RedHandleCpuSignal* value): value(value) {}; RedHandleCpuSignal* value; _9dcf3e68_outCpuSignal(const _9dcf3e68_outCpuSignal &) = delete; } _9dcf3e68_outCpuSignal;
typedef struct _9dcf3e68_outStatuses { _9dcf3e68_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _9dcf3e68_outStatuses(const _9dcf3e68_outStatuses &) = delete; } _9dcf3e68_outStatuses;
typedef struct _9dcf3e68_optionalFile { _9dcf3e68_optionalFile(char* value): value(value) {}; char* value; _9dcf3e68_optionalFile(const _9dcf3e68_optionalFile &) = delete; } _9dcf3e68_optionalFile;
typedef struct _9dcf3e68_optionalLine { _9dcf3e68_optionalLine(int value): value(value) {}; int value; _9dcf3e68_optionalLine(const _9dcf3e68_optionalLine &) = delete; } _9dcf3e68_optionalLine;
typedef struct _9dcf3e68_optionalUserData { _9dcf3e68_optionalUserData(void* value): value(value) {}; void* value; _9dcf3e68_optionalUserData(const _9dcf3e68_optionalUserData &) = delete; } _9dcf3e68_optionalUserData;
void np_redCreateCpuSignal(_9dcf3e68_context & context, _9dcf3e68_gpu & gpu, _9dcf3e68_handleName & handleName, _9dcf3e68_createSignaled & createSignaled, _9dcf3e68_outCpuSignal & outCpuSignal, _9dcf3e68_outStatuses & outStatuses, _9dcf3e68_optionalFile & optionalFile, _9dcf3e68_optionalLine & optionalLine, _9dcf3e68_optionalUserData & optionalUserData) {
  redCreateCpuSignal(context.value, gpu.value, handleName.value, createSignaled.value, outCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateGpuSignal redCreateGpuSignal
#define _324fbb03_context(value) value
#define _324fbb03_gpu(value) value
#define _324fbb03_handleName(value) value
#define _324fbb03_outGpuSignal(value) value
#define _324fbb03_outStatuses(value) value
#define _324fbb03_optionalFile(value) value
#define _324fbb03_optionalLine(value) value
#define _324fbb03_optionalUserData(value) value
#else
typedef struct _324fbb03_context { _324fbb03_context(RedContext value): value(value) {}; RedContext value; _324fbb03_context(const _324fbb03_context &) = delete; } _324fbb03_context;
typedef struct _324fbb03_gpu { _324fbb03_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _324fbb03_gpu(const _324fbb03_gpu &) = delete; } _324fbb03_gpu;
typedef struct _324fbb03_handleName { _324fbb03_handleName(char* value): value(value) {}; char* value; _324fbb03_handleName(const _324fbb03_handleName &) = delete; } _324fbb03_handleName;
typedef struct _324fbb03_outGpuSignal { _324fbb03_outGpuSignal(RedHandleGpuSignal* value): value(value) {}; RedHandleGpuSignal* value; _324fbb03_outGpuSignal(const _324fbb03_outGpuSignal &) = delete; } _324fbb03_outGpuSignal;
typedef struct _324fbb03_outStatuses { _324fbb03_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _324fbb03_outStatuses(const _324fbb03_outStatuses &) = delete; } _324fbb03_outStatuses;
typedef struct _324fbb03_optionalFile { _324fbb03_optionalFile(char* value): value(value) {}; char* value; _324fbb03_optionalFile(const _324fbb03_optionalFile &) = delete; } _324fbb03_optionalFile;
typedef struct _324fbb03_optionalLine { _324fbb03_optionalLine(int value): value(value) {}; int value; _324fbb03_optionalLine(const _324fbb03_optionalLine &) = delete; } _324fbb03_optionalLine;
typedef struct _324fbb03_optionalUserData { _324fbb03_optionalUserData(void* value): value(value) {}; void* value; _324fbb03_optionalUserData(const _324fbb03_optionalUserData &) = delete; } _324fbb03_optionalUserData;
void np_redCreateGpuSignal(_324fbb03_context & context, _324fbb03_gpu & gpu, _324fbb03_handleName & handleName, _324fbb03_outGpuSignal & outGpuSignal, _324fbb03_outStatuses & outStatuses, _324fbb03_optionalFile & optionalFile, _324fbb03_optionalLine & optionalLine, _324fbb03_optionalUserData & optionalUserData) {
  redCreateGpuSignal(context.value, gpu.value, handleName.value, outGpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateGpuToCpuSignal redCreateGpuToCpuSignal
#define _43b4b3d9_context(value) value
#define _43b4b3d9_gpu(value) value
#define _43b4b3d9_handleName(value) value
#define _43b4b3d9_outGpuToCpuSignal(value) value
#define _43b4b3d9_outStatuses(value) value
#define _43b4b3d9_optionalFile(value) value
#define _43b4b3d9_optionalLine(value) value
#define _43b4b3d9_optionalUserData(value) value
#else
typedef struct _43b4b3d9_context { _43b4b3d9_context(RedContext value): value(value) {}; RedContext value; _43b4b3d9_context(const _43b4b3d9_context &) = delete; } _43b4b3d9_context;
typedef struct _43b4b3d9_gpu { _43b4b3d9_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _43b4b3d9_gpu(const _43b4b3d9_gpu &) = delete; } _43b4b3d9_gpu;
typedef struct _43b4b3d9_handleName { _43b4b3d9_handleName(char* value): value(value) {}; char* value; _43b4b3d9_handleName(const _43b4b3d9_handleName &) = delete; } _43b4b3d9_handleName;
typedef struct _43b4b3d9_outGpuToCpuSignal { _43b4b3d9_outGpuToCpuSignal(RedHandleGpuToCpuSignal* value): value(value) {}; RedHandleGpuToCpuSignal* value; _43b4b3d9_outGpuToCpuSignal(const _43b4b3d9_outGpuToCpuSignal &) = delete; } _43b4b3d9_outGpuToCpuSignal;
typedef struct _43b4b3d9_outStatuses { _43b4b3d9_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _43b4b3d9_outStatuses(const _43b4b3d9_outStatuses &) = delete; } _43b4b3d9_outStatuses;
typedef struct _43b4b3d9_optionalFile { _43b4b3d9_optionalFile(char* value): value(value) {}; char* value; _43b4b3d9_optionalFile(const _43b4b3d9_optionalFile &) = delete; } _43b4b3d9_optionalFile;
typedef struct _43b4b3d9_optionalLine { _43b4b3d9_optionalLine(int value): value(value) {}; int value; _43b4b3d9_optionalLine(const _43b4b3d9_optionalLine &) = delete; } _43b4b3d9_optionalLine;
typedef struct _43b4b3d9_optionalUserData { _43b4b3d9_optionalUserData(void* value): value(value) {}; void* value; _43b4b3d9_optionalUserData(const _43b4b3d9_optionalUserData &) = delete; } _43b4b3d9_optionalUserData;
void np_redCreateGpuToCpuSignal(_43b4b3d9_context & context, _43b4b3d9_gpu & gpu, _43b4b3d9_handleName & handleName, _43b4b3d9_outGpuToCpuSignal & outGpuToCpuSignal, _43b4b3d9_outStatuses & outStatuses, _43b4b3d9_optionalFile & optionalFile, _43b4b3d9_optionalLine & optionalLine, _43b4b3d9_optionalUserData & optionalUserData) {
  redCreateGpuToCpuSignal(context.value, gpu.value, handleName.value, outGpuToCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateCalls redCreateCalls
#define _84a8f462_context(value) value
#define _84a8f462_gpu(value) value
#define _84a8f462_handleName(value) value
#define _84a8f462_queueFamilyIndex(value) value
#define _84a8f462_outCalls(value) value
#define _84a8f462_outStatuses(value) value
#define _84a8f462_optionalFile(value) value
#define _84a8f462_optionalLine(value) value
#define _84a8f462_optionalUserData(value) value
#else
typedef struct _84a8f462_context { _84a8f462_context(RedContext value): value(value) {}; RedContext value; _84a8f462_context(const _84a8f462_context &) = delete; } _84a8f462_context;
typedef struct _84a8f462_gpu { _84a8f462_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _84a8f462_gpu(const _84a8f462_gpu &) = delete; } _84a8f462_gpu;
typedef struct _84a8f462_handleName { _84a8f462_handleName(char* value): value(value) {}; char* value; _84a8f462_handleName(const _84a8f462_handleName &) = delete; } _84a8f462_handleName;
typedef struct _84a8f462_queueFamilyIndex { _84a8f462_queueFamilyIndex(unsigned value): value(value) {}; unsigned value; _84a8f462_queueFamilyIndex(const _84a8f462_queueFamilyIndex &) = delete; } _84a8f462_queueFamilyIndex;
typedef struct _84a8f462_outCalls { _84a8f462_outCalls(RedCalls* value): value(value) {}; RedCalls* value; _84a8f462_outCalls(const _84a8f462_outCalls &) = delete; } _84a8f462_outCalls;
typedef struct _84a8f462_outStatuses { _84a8f462_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _84a8f462_outStatuses(const _84a8f462_outStatuses &) = delete; } _84a8f462_outStatuses;
typedef struct _84a8f462_optionalFile { _84a8f462_optionalFile(char* value): value(value) {}; char* value; _84a8f462_optionalFile(const _84a8f462_optionalFile &) = delete; } _84a8f462_optionalFile;
typedef struct _84a8f462_optionalLine { _84a8f462_optionalLine(int value): value(value) {}; int value; _84a8f462_optionalLine(const _84a8f462_optionalLine &) = delete; } _84a8f462_optionalLine;
typedef struct _84a8f462_optionalUserData { _84a8f462_optionalUserData(void* value): value(value) {}; void* value; _84a8f462_optionalUserData(const _84a8f462_optionalUserData &) = delete; } _84a8f462_optionalUserData;
void np_redCreateCalls(_84a8f462_context & context, _84a8f462_gpu & gpu, _84a8f462_handleName & handleName, _84a8f462_queueFamilyIndex & queueFamilyIndex, _84a8f462_outCalls & outCalls, _84a8f462_outStatuses & outStatuses, _84a8f462_optionalFile & optionalFile, _84a8f462_optionalLine & optionalLine, _84a8f462_optionalUserData & optionalUserData) {
  redCreateCalls(context.value, gpu.value, handleName.value, queueFamilyIndex.value, outCalls.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCreateCallsReusable redCreateCallsReusable
#define _abac7e66_context(value) value
#define _abac7e66_gpu(value) value
#define _abac7e66_handleName(value) value
#define _abac7e66_queueFamilyIndex(value) value
#define _abac7e66_outCalls(value) value
#define _abac7e66_outStatuses(value) value
#define _abac7e66_optionalFile(value) value
#define _abac7e66_optionalLine(value) value
#define _abac7e66_optionalUserData(value) value
#else
typedef struct _abac7e66_context { _abac7e66_context(RedContext value): value(value) {}; RedContext value; _abac7e66_context(const _abac7e66_context &) = delete; } _abac7e66_context;
typedef struct _abac7e66_gpu { _abac7e66_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _abac7e66_gpu(const _abac7e66_gpu &) = delete; } _abac7e66_gpu;
typedef struct _abac7e66_handleName { _abac7e66_handleName(char* value): value(value) {}; char* value; _abac7e66_handleName(const _abac7e66_handleName &) = delete; } _abac7e66_handleName;
typedef struct _abac7e66_queueFamilyIndex { _abac7e66_queueFamilyIndex(unsigned value): value(value) {}; unsigned value; _abac7e66_queueFamilyIndex(const _abac7e66_queueFamilyIndex &) = delete; } _abac7e66_queueFamilyIndex;
typedef struct _abac7e66_outCalls { _abac7e66_outCalls(RedCalls* value): value(value) {}; RedCalls* value; _abac7e66_outCalls(const _abac7e66_outCalls &) = delete; } _abac7e66_outCalls;
typedef struct _abac7e66_outStatuses { _abac7e66_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _abac7e66_outStatuses(const _abac7e66_outStatuses &) = delete; } _abac7e66_outStatuses;
typedef struct _abac7e66_optionalFile { _abac7e66_optionalFile(char* value): value(value) {}; char* value; _abac7e66_optionalFile(const _abac7e66_optionalFile &) = delete; } _abac7e66_optionalFile;
typedef struct _abac7e66_optionalLine { _abac7e66_optionalLine(int value): value(value) {}; int value; _abac7e66_optionalLine(const _abac7e66_optionalLine &) = delete; } _abac7e66_optionalLine;
typedef struct _abac7e66_optionalUserData { _abac7e66_optionalUserData(void* value): value(value) {}; void* value; _abac7e66_optionalUserData(const _abac7e66_optionalUserData &) = delete; } _abac7e66_optionalUserData;
void np_redCreateCallsReusable(_abac7e66_context & context, _abac7e66_gpu & gpu, _abac7e66_handleName & handleName, _abac7e66_queueFamilyIndex & queueFamilyIndex, _abac7e66_outCalls & outCalls, _abac7e66_outStatuses & outStatuses, _abac7e66_optionalFile & optionalFile, _abac7e66_optionalLine & optionalLine, _abac7e66_optionalUserData & optionalUserData) {
  redCreateCallsReusable(context.value, gpu.value, handleName.value, queueFamilyIndex.value, outCalls.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyContext redDestroyContext
#define _e3956603_context(value) value
#define _e3956603_optionalFile(value) value
#define _e3956603_optionalLine(value) value
#define _e3956603_optionalUserData(value) value
#else
typedef struct _e3956603_context { _e3956603_context(RedContext value): value(value) {}; RedContext value; _e3956603_context(const _e3956603_context &) = delete; } _e3956603_context;
typedef struct _e3956603_optionalFile { _e3956603_optionalFile(char* value): value(value) {}; char* value; _e3956603_optionalFile(const _e3956603_optionalFile &) = delete; } _e3956603_optionalFile;
typedef struct _e3956603_optionalLine { _e3956603_optionalLine(int value): value(value) {}; int value; _e3956603_optionalLine(const _e3956603_optionalLine &) = delete; } _e3956603_optionalLine;
typedef struct _e3956603_optionalUserData { _e3956603_optionalUserData(void* value): value(value) {}; void* value; _e3956603_optionalUserData(const _e3956603_optionalUserData &) = delete; } _e3956603_optionalUserData;
void np_redDestroyContext(_e3956603_context & context, _e3956603_optionalFile & optionalFile, _e3956603_optionalLine & optionalLine, _e3956603_optionalUserData & optionalUserData) {
  redDestroyContext(context.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyArray redDestroyArray
#define _8cba366d_context(value) value
#define _8cba366d_gpu(value) value
#define _8cba366d_array(value) value
#define _8cba366d_optionalFile(value) value
#define _8cba366d_optionalLine(value) value
#define _8cba366d_optionalUserData(value) value
#else
typedef struct _8cba366d_context { _8cba366d_context(RedContext value): value(value) {}; RedContext value; _8cba366d_context(const _8cba366d_context &) = delete; } _8cba366d_context;
typedef struct _8cba366d_gpu { _8cba366d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _8cba366d_gpu(const _8cba366d_gpu &) = delete; } _8cba366d_gpu;
typedef struct _8cba366d_array { _8cba366d_array(RedHandleArray value): value(value) {}; RedHandleArray value; _8cba366d_array(const _8cba366d_array &) = delete; } _8cba366d_array;
typedef struct _8cba366d_optionalFile { _8cba366d_optionalFile(char* value): value(value) {}; char* value; _8cba366d_optionalFile(const _8cba366d_optionalFile &) = delete; } _8cba366d_optionalFile;
typedef struct _8cba366d_optionalLine { _8cba366d_optionalLine(int value): value(value) {}; int value; _8cba366d_optionalLine(const _8cba366d_optionalLine &) = delete; } _8cba366d_optionalLine;
typedef struct _8cba366d_optionalUserData { _8cba366d_optionalUserData(void* value): value(value) {}; void* value; _8cba366d_optionalUserData(const _8cba366d_optionalUserData &) = delete; } _8cba366d_optionalUserData;
void np_redDestroyArray(_8cba366d_context & context, _8cba366d_gpu & gpu, _8cba366d_array & array, _8cba366d_optionalFile & optionalFile, _8cba366d_optionalLine & optionalLine, _8cba366d_optionalUserData & optionalUserData) {
  redDestroyArray(context.value, gpu.value, array.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyImage redDestroyImage
#define _2878ba39_context(value) value
#define _2878ba39_gpu(value) value
#define _2878ba39_image(value) value
#define _2878ba39_optionalFile(value) value
#define _2878ba39_optionalLine(value) value
#define _2878ba39_optionalUserData(value) value
#else
typedef struct _2878ba39_context { _2878ba39_context(RedContext value): value(value) {}; RedContext value; _2878ba39_context(const _2878ba39_context &) = delete; } _2878ba39_context;
typedef struct _2878ba39_gpu { _2878ba39_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _2878ba39_gpu(const _2878ba39_gpu &) = delete; } _2878ba39_gpu;
typedef struct _2878ba39_image { _2878ba39_image(RedHandleImage value): value(value) {}; RedHandleImage value; _2878ba39_image(const _2878ba39_image &) = delete; } _2878ba39_image;
typedef struct _2878ba39_optionalFile { _2878ba39_optionalFile(char* value): value(value) {}; char* value; _2878ba39_optionalFile(const _2878ba39_optionalFile &) = delete; } _2878ba39_optionalFile;
typedef struct _2878ba39_optionalLine { _2878ba39_optionalLine(int value): value(value) {}; int value; _2878ba39_optionalLine(const _2878ba39_optionalLine &) = delete; } _2878ba39_optionalLine;
typedef struct _2878ba39_optionalUserData { _2878ba39_optionalUserData(void* value): value(value) {}; void* value; _2878ba39_optionalUserData(const _2878ba39_optionalUserData &) = delete; } _2878ba39_optionalUserData;
void np_redDestroyImage(_2878ba39_context & context, _2878ba39_gpu & gpu, _2878ba39_image & image, _2878ba39_optionalFile & optionalFile, _2878ba39_optionalLine & optionalLine, _2878ba39_optionalUserData & optionalUserData) {
  redDestroyImage(context.value, gpu.value, image.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroySampler redDestroySampler
#define _af6ed521_context(value) value
#define _af6ed521_gpu(value) value
#define _af6ed521_sampler(value) value
#define _af6ed521_optionalFile(value) value
#define _af6ed521_optionalLine(value) value
#define _af6ed521_optionalUserData(value) value
#else
typedef struct _af6ed521_context { _af6ed521_context(RedContext value): value(value) {}; RedContext value; _af6ed521_context(const _af6ed521_context &) = delete; } _af6ed521_context;
typedef struct _af6ed521_gpu { _af6ed521_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _af6ed521_gpu(const _af6ed521_gpu &) = delete; } _af6ed521_gpu;
typedef struct _af6ed521_sampler { _af6ed521_sampler(RedHandleSampler value): value(value) {}; RedHandleSampler value; _af6ed521_sampler(const _af6ed521_sampler &) = delete; } _af6ed521_sampler;
typedef struct _af6ed521_optionalFile { _af6ed521_optionalFile(char* value): value(value) {}; char* value; _af6ed521_optionalFile(const _af6ed521_optionalFile &) = delete; } _af6ed521_optionalFile;
typedef struct _af6ed521_optionalLine { _af6ed521_optionalLine(int value): value(value) {}; int value; _af6ed521_optionalLine(const _af6ed521_optionalLine &) = delete; } _af6ed521_optionalLine;
typedef struct _af6ed521_optionalUserData { _af6ed521_optionalUserData(void* value): value(value) {}; void* value; _af6ed521_optionalUserData(const _af6ed521_optionalUserData &) = delete; } _af6ed521_optionalUserData;
void np_redDestroySampler(_af6ed521_context & context, _af6ed521_gpu & gpu, _af6ed521_sampler & sampler, _af6ed521_optionalFile & optionalFile, _af6ed521_optionalLine & optionalLine, _af6ed521_optionalUserData & optionalUserData) {
  redDestroySampler(context.value, gpu.value, sampler.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyTexture redDestroyTexture
#define _1c72da53_context(value) value
#define _1c72da53_gpu(value) value
#define _1c72da53_texture(value) value
#define _1c72da53_optionalFile(value) value
#define _1c72da53_optionalLine(value) value
#define _1c72da53_optionalUserData(value) value
#else
typedef struct _1c72da53_context { _1c72da53_context(RedContext value): value(value) {}; RedContext value; _1c72da53_context(const _1c72da53_context &) = delete; } _1c72da53_context;
typedef struct _1c72da53_gpu { _1c72da53_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _1c72da53_gpu(const _1c72da53_gpu &) = delete; } _1c72da53_gpu;
typedef struct _1c72da53_texture { _1c72da53_texture(RedHandleTexture value): value(value) {}; RedHandleTexture value; _1c72da53_texture(const _1c72da53_texture &) = delete; } _1c72da53_texture;
typedef struct _1c72da53_optionalFile { _1c72da53_optionalFile(char* value): value(value) {}; char* value; _1c72da53_optionalFile(const _1c72da53_optionalFile &) = delete; } _1c72da53_optionalFile;
typedef struct _1c72da53_optionalLine { _1c72da53_optionalLine(int value): value(value) {}; int value; _1c72da53_optionalLine(const _1c72da53_optionalLine &) = delete; } _1c72da53_optionalLine;
typedef struct _1c72da53_optionalUserData { _1c72da53_optionalUserData(void* value): value(value) {}; void* value; _1c72da53_optionalUserData(const _1c72da53_optionalUserData &) = delete; } _1c72da53_optionalUserData;
void np_redDestroyTexture(_1c72da53_context & context, _1c72da53_gpu & gpu, _1c72da53_texture & texture, _1c72da53_optionalFile & optionalFile, _1c72da53_optionalLine & optionalLine, _1c72da53_optionalUserData & optionalUserData) {
  redDestroyTexture(context.value, gpu.value, texture.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyGpuCode redDestroyGpuCode
#define _deea23f2_context(value) value
#define _deea23f2_gpu(value) value
#define _deea23f2_gpuCode(value) value
#define _deea23f2_optionalFile(value) value
#define _deea23f2_optionalLine(value) value
#define _deea23f2_optionalUserData(value) value
#else
typedef struct _deea23f2_context { _deea23f2_context(RedContext value): value(value) {}; RedContext value; _deea23f2_context(const _deea23f2_context &) = delete; } _deea23f2_context;
typedef struct _deea23f2_gpu { _deea23f2_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _deea23f2_gpu(const _deea23f2_gpu &) = delete; } _deea23f2_gpu;
typedef struct _deea23f2_gpuCode { _deea23f2_gpuCode(RedHandleGpuCode value): value(value) {}; RedHandleGpuCode value; _deea23f2_gpuCode(const _deea23f2_gpuCode &) = delete; } _deea23f2_gpuCode;
typedef struct _deea23f2_optionalFile { _deea23f2_optionalFile(char* value): value(value) {}; char* value; _deea23f2_optionalFile(const _deea23f2_optionalFile &) = delete; } _deea23f2_optionalFile;
typedef struct _deea23f2_optionalLine { _deea23f2_optionalLine(int value): value(value) {}; int value; _deea23f2_optionalLine(const _deea23f2_optionalLine &) = delete; } _deea23f2_optionalLine;
typedef struct _deea23f2_optionalUserData { _deea23f2_optionalUserData(void* value): value(value) {}; void* value; _deea23f2_optionalUserData(const _deea23f2_optionalUserData &) = delete; } _deea23f2_optionalUserData;
void np_redDestroyGpuCode(_deea23f2_context & context, _deea23f2_gpu & gpu, _deea23f2_gpuCode & gpuCode, _deea23f2_optionalFile & optionalFile, _deea23f2_optionalLine & optionalLine, _deea23f2_optionalUserData & optionalUserData) {
  redDestroyGpuCode(context.value, gpu.value, gpuCode.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyOutputDeclaration redDestroyOutputDeclaration
#define _88038ea3_context(value) value
#define _88038ea3_gpu(value) value
#define _88038ea3_outputDeclaration(value) value
#define _88038ea3_optionalFile(value) value
#define _88038ea3_optionalLine(value) value
#define _88038ea3_optionalUserData(value) value
#else
typedef struct _88038ea3_context { _88038ea3_context(RedContext value): value(value) {}; RedContext value; _88038ea3_context(const _88038ea3_context &) = delete; } _88038ea3_context;
typedef struct _88038ea3_gpu { _88038ea3_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _88038ea3_gpu(const _88038ea3_gpu &) = delete; } _88038ea3_gpu;
typedef struct _88038ea3_outputDeclaration { _88038ea3_outputDeclaration(RedHandleOutputDeclaration value): value(value) {}; RedHandleOutputDeclaration value; _88038ea3_outputDeclaration(const _88038ea3_outputDeclaration &) = delete; } _88038ea3_outputDeclaration;
typedef struct _88038ea3_optionalFile { _88038ea3_optionalFile(char* value): value(value) {}; char* value; _88038ea3_optionalFile(const _88038ea3_optionalFile &) = delete; } _88038ea3_optionalFile;
typedef struct _88038ea3_optionalLine { _88038ea3_optionalLine(int value): value(value) {}; int value; _88038ea3_optionalLine(const _88038ea3_optionalLine &) = delete; } _88038ea3_optionalLine;
typedef struct _88038ea3_optionalUserData { _88038ea3_optionalUserData(void* value): value(value) {}; void* value; _88038ea3_optionalUserData(const _88038ea3_optionalUserData &) = delete; } _88038ea3_optionalUserData;
void np_redDestroyOutputDeclaration(_88038ea3_context & context, _88038ea3_gpu & gpu, _88038ea3_outputDeclaration & outputDeclaration, _88038ea3_optionalFile & optionalFile, _88038ea3_optionalLine & optionalLine, _88038ea3_optionalUserData & optionalUserData) {
  redDestroyOutputDeclaration(context.value, gpu.value, outputDeclaration.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyStructDeclaration redDestroyStructDeclaration
#define _f18dfa11_context(value) value
#define _f18dfa11_gpu(value) value
#define _f18dfa11_structDeclaration(value) value
#define _f18dfa11_optionalFile(value) value
#define _f18dfa11_optionalLine(value) value
#define _f18dfa11_optionalUserData(value) value
#else
typedef struct _f18dfa11_context { _f18dfa11_context(RedContext value): value(value) {}; RedContext value; _f18dfa11_context(const _f18dfa11_context &) = delete; } _f18dfa11_context;
typedef struct _f18dfa11_gpu { _f18dfa11_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _f18dfa11_gpu(const _f18dfa11_gpu &) = delete; } _f18dfa11_gpu;
typedef struct _f18dfa11_structDeclaration { _f18dfa11_structDeclaration(RedHandleStructDeclaration value): value(value) {}; RedHandleStructDeclaration value; _f18dfa11_structDeclaration(const _f18dfa11_structDeclaration &) = delete; } _f18dfa11_structDeclaration;
typedef struct _f18dfa11_optionalFile { _f18dfa11_optionalFile(char* value): value(value) {}; char* value; _f18dfa11_optionalFile(const _f18dfa11_optionalFile &) = delete; } _f18dfa11_optionalFile;
typedef struct _f18dfa11_optionalLine { _f18dfa11_optionalLine(int value): value(value) {}; int value; _f18dfa11_optionalLine(const _f18dfa11_optionalLine &) = delete; } _f18dfa11_optionalLine;
typedef struct _f18dfa11_optionalUserData { _f18dfa11_optionalUserData(void* value): value(value) {}; void* value; _f18dfa11_optionalUserData(const _f18dfa11_optionalUserData &) = delete; } _f18dfa11_optionalUserData;
void np_redDestroyStructDeclaration(_f18dfa11_context & context, _f18dfa11_gpu & gpu, _f18dfa11_structDeclaration & structDeclaration, _f18dfa11_optionalFile & optionalFile, _f18dfa11_optionalLine & optionalLine, _f18dfa11_optionalUserData & optionalUserData) {
  redDestroyStructDeclaration(context.value, gpu.value, structDeclaration.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyProcedureParameters redDestroyProcedureParameters
#define _446caf7a_context(value) value
#define _446caf7a_gpu(value) value
#define _446caf7a_procedureParameters(value) value
#define _446caf7a_optionalFile(value) value
#define _446caf7a_optionalLine(value) value
#define _446caf7a_optionalUserData(value) value
#else
typedef struct _446caf7a_context { _446caf7a_context(RedContext value): value(value) {}; RedContext value; _446caf7a_context(const _446caf7a_context &) = delete; } _446caf7a_context;
typedef struct _446caf7a_gpu { _446caf7a_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _446caf7a_gpu(const _446caf7a_gpu &) = delete; } _446caf7a_gpu;
typedef struct _446caf7a_procedureParameters { _446caf7a_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _446caf7a_procedureParameters(const _446caf7a_procedureParameters &) = delete; } _446caf7a_procedureParameters;
typedef struct _446caf7a_optionalFile { _446caf7a_optionalFile(char* value): value(value) {}; char* value; _446caf7a_optionalFile(const _446caf7a_optionalFile &) = delete; } _446caf7a_optionalFile;
typedef struct _446caf7a_optionalLine { _446caf7a_optionalLine(int value): value(value) {}; int value; _446caf7a_optionalLine(const _446caf7a_optionalLine &) = delete; } _446caf7a_optionalLine;
typedef struct _446caf7a_optionalUserData { _446caf7a_optionalUserData(void* value): value(value) {}; void* value; _446caf7a_optionalUserData(const _446caf7a_optionalUserData &) = delete; } _446caf7a_optionalUserData;
void np_redDestroyProcedureParameters(_446caf7a_context & context, _446caf7a_gpu & gpu, _446caf7a_procedureParameters & procedureParameters, _446caf7a_optionalFile & optionalFile, _446caf7a_optionalLine & optionalLine, _446caf7a_optionalUserData & optionalUserData) {
  redDestroyProcedureParameters(context.value, gpu.value, procedureParameters.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyProcedureCache redDestroyProcedureCache
#define _d2b903f0_context(value) value
#define _d2b903f0_gpu(value) value
#define _d2b903f0_procedureCache(value) value
#define _d2b903f0_optionalFile(value) value
#define _d2b903f0_optionalLine(value) value
#define _d2b903f0_optionalUserData(value) value
#else
typedef struct _d2b903f0_context { _d2b903f0_context(RedContext value): value(value) {}; RedContext value; _d2b903f0_context(const _d2b903f0_context &) = delete; } _d2b903f0_context;
typedef struct _d2b903f0_gpu { _d2b903f0_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _d2b903f0_gpu(const _d2b903f0_gpu &) = delete; } _d2b903f0_gpu;
typedef struct _d2b903f0_procedureCache { _d2b903f0_procedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _d2b903f0_procedureCache(const _d2b903f0_procedureCache &) = delete; } _d2b903f0_procedureCache;
typedef struct _d2b903f0_optionalFile { _d2b903f0_optionalFile(char* value): value(value) {}; char* value; _d2b903f0_optionalFile(const _d2b903f0_optionalFile &) = delete; } _d2b903f0_optionalFile;
typedef struct _d2b903f0_optionalLine { _d2b903f0_optionalLine(int value): value(value) {}; int value; _d2b903f0_optionalLine(const _d2b903f0_optionalLine &) = delete; } _d2b903f0_optionalLine;
typedef struct _d2b903f0_optionalUserData { _d2b903f0_optionalUserData(void* value): value(value) {}; void* value; _d2b903f0_optionalUserData(const _d2b903f0_optionalUserData &) = delete; } _d2b903f0_optionalUserData;
void np_redDestroyProcedureCache(_d2b903f0_context & context, _d2b903f0_gpu & gpu, _d2b903f0_procedureCache & procedureCache, _d2b903f0_optionalFile & optionalFile, _d2b903f0_optionalLine & optionalLine, _d2b903f0_optionalUserData & optionalUserData) {
  redDestroyProcedureCache(context.value, gpu.value, procedureCache.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyProcedure redDestroyProcedure
#define _2beff629_context(value) value
#define _2beff629_gpu(value) value
#define _2beff629_procedure(value) value
#define _2beff629_optionalFile(value) value
#define _2beff629_optionalLine(value) value
#define _2beff629_optionalUserData(value) value
#else
typedef struct _2beff629_context { _2beff629_context(RedContext value): value(value) {}; RedContext value; _2beff629_context(const _2beff629_context &) = delete; } _2beff629_context;
typedef struct _2beff629_gpu { _2beff629_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _2beff629_gpu(const _2beff629_gpu &) = delete; } _2beff629_gpu;
typedef struct _2beff629_procedure { _2beff629_procedure(RedHandleProcedure value): value(value) {}; RedHandleProcedure value; _2beff629_procedure(const _2beff629_procedure &) = delete; } _2beff629_procedure;
typedef struct _2beff629_optionalFile { _2beff629_optionalFile(char* value): value(value) {}; char* value; _2beff629_optionalFile(const _2beff629_optionalFile &) = delete; } _2beff629_optionalFile;
typedef struct _2beff629_optionalLine { _2beff629_optionalLine(int value): value(value) {}; int value; _2beff629_optionalLine(const _2beff629_optionalLine &) = delete; } _2beff629_optionalLine;
typedef struct _2beff629_optionalUserData { _2beff629_optionalUserData(void* value): value(value) {}; void* value; _2beff629_optionalUserData(const _2beff629_optionalUserData &) = delete; } _2beff629_optionalUserData;
void np_redDestroyProcedure(_2beff629_context & context, _2beff629_gpu & gpu, _2beff629_procedure & procedure, _2beff629_optionalFile & optionalFile, _2beff629_optionalLine & optionalLine, _2beff629_optionalUserData & optionalUserData) {
  redDestroyProcedure(context.value, gpu.value, procedure.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyOutput redDestroyOutput
#define _39af47cf_context(value) value
#define _39af47cf_gpu(value) value
#define _39af47cf_output(value) value
#define _39af47cf_optionalFile(value) value
#define _39af47cf_optionalLine(value) value
#define _39af47cf_optionalUserData(value) value
#else
typedef struct _39af47cf_context { _39af47cf_context(RedContext value): value(value) {}; RedContext value; _39af47cf_context(const _39af47cf_context &) = delete; } _39af47cf_context;
typedef struct _39af47cf_gpu { _39af47cf_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _39af47cf_gpu(const _39af47cf_gpu &) = delete; } _39af47cf_gpu;
typedef struct _39af47cf_output { _39af47cf_output(RedHandleOutput value): value(value) {}; RedHandleOutput value; _39af47cf_output(const _39af47cf_output &) = delete; } _39af47cf_output;
typedef struct _39af47cf_optionalFile { _39af47cf_optionalFile(char* value): value(value) {}; char* value; _39af47cf_optionalFile(const _39af47cf_optionalFile &) = delete; } _39af47cf_optionalFile;
typedef struct _39af47cf_optionalLine { _39af47cf_optionalLine(int value): value(value) {}; int value; _39af47cf_optionalLine(const _39af47cf_optionalLine &) = delete; } _39af47cf_optionalLine;
typedef struct _39af47cf_optionalUserData { _39af47cf_optionalUserData(void* value): value(value) {}; void* value; _39af47cf_optionalUserData(const _39af47cf_optionalUserData &) = delete; } _39af47cf_optionalUserData;
void np_redDestroyOutput(_39af47cf_context & context, _39af47cf_gpu & gpu, _39af47cf_output & output, _39af47cf_optionalFile & optionalFile, _39af47cf_optionalLine & optionalLine, _39af47cf_optionalUserData & optionalUserData) {
  redDestroyOutput(context.value, gpu.value, output.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyCpuSignal redDestroyCpuSignal
#define _05dd4cf0_context(value) value
#define _05dd4cf0_gpu(value) value
#define _05dd4cf0_cpuSignal(value) value
#define _05dd4cf0_optionalFile(value) value
#define _05dd4cf0_optionalLine(value) value
#define _05dd4cf0_optionalUserData(value) value
#else
typedef struct _05dd4cf0_context { _05dd4cf0_context(RedContext value): value(value) {}; RedContext value; _05dd4cf0_context(const _05dd4cf0_context &) = delete; } _05dd4cf0_context;
typedef struct _05dd4cf0_gpu { _05dd4cf0_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _05dd4cf0_gpu(const _05dd4cf0_gpu &) = delete; } _05dd4cf0_gpu;
typedef struct _05dd4cf0_cpuSignal { _05dd4cf0_cpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _05dd4cf0_cpuSignal(const _05dd4cf0_cpuSignal &) = delete; } _05dd4cf0_cpuSignal;
typedef struct _05dd4cf0_optionalFile { _05dd4cf0_optionalFile(char* value): value(value) {}; char* value; _05dd4cf0_optionalFile(const _05dd4cf0_optionalFile &) = delete; } _05dd4cf0_optionalFile;
typedef struct _05dd4cf0_optionalLine { _05dd4cf0_optionalLine(int value): value(value) {}; int value; _05dd4cf0_optionalLine(const _05dd4cf0_optionalLine &) = delete; } _05dd4cf0_optionalLine;
typedef struct _05dd4cf0_optionalUserData { _05dd4cf0_optionalUserData(void* value): value(value) {}; void* value; _05dd4cf0_optionalUserData(const _05dd4cf0_optionalUserData &) = delete; } _05dd4cf0_optionalUserData;
void np_redDestroyCpuSignal(_05dd4cf0_context & context, _05dd4cf0_gpu & gpu, _05dd4cf0_cpuSignal & cpuSignal, _05dd4cf0_optionalFile & optionalFile, _05dd4cf0_optionalLine & optionalLine, _05dd4cf0_optionalUserData & optionalUserData) {
  redDestroyCpuSignal(context.value, gpu.value, cpuSignal.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyGpuSignal redDestroyGpuSignal
#define _efa16eff_context(value) value
#define _efa16eff_gpu(value) value
#define _efa16eff_gpuSignal(value) value
#define _efa16eff_optionalFile(value) value
#define _efa16eff_optionalLine(value) value
#define _efa16eff_optionalUserData(value) value
#else
typedef struct _efa16eff_context { _efa16eff_context(RedContext value): value(value) {}; RedContext value; _efa16eff_context(const _efa16eff_context &) = delete; } _efa16eff_context;
typedef struct _efa16eff_gpu { _efa16eff_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _efa16eff_gpu(const _efa16eff_gpu &) = delete; } _efa16eff_gpu;
typedef struct _efa16eff_gpuSignal { _efa16eff_gpuSignal(RedHandleGpuSignal value): value(value) {}; RedHandleGpuSignal value; _efa16eff_gpuSignal(const _efa16eff_gpuSignal &) = delete; } _efa16eff_gpuSignal;
typedef struct _efa16eff_optionalFile { _efa16eff_optionalFile(char* value): value(value) {}; char* value; _efa16eff_optionalFile(const _efa16eff_optionalFile &) = delete; } _efa16eff_optionalFile;
typedef struct _efa16eff_optionalLine { _efa16eff_optionalLine(int value): value(value) {}; int value; _efa16eff_optionalLine(const _efa16eff_optionalLine &) = delete; } _efa16eff_optionalLine;
typedef struct _efa16eff_optionalUserData { _efa16eff_optionalUserData(void* value): value(value) {}; void* value; _efa16eff_optionalUserData(const _efa16eff_optionalUserData &) = delete; } _efa16eff_optionalUserData;
void np_redDestroyGpuSignal(_efa16eff_context & context, _efa16eff_gpu & gpu, _efa16eff_gpuSignal & gpuSignal, _efa16eff_optionalFile & optionalFile, _efa16eff_optionalLine & optionalLine, _efa16eff_optionalUserData & optionalUserData) {
  redDestroyGpuSignal(context.value, gpu.value, gpuSignal.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyGpuToCpuSignal redDestroyGpuToCpuSignal
#define _9b866b42_context(value) value
#define _9b866b42_gpu(value) value
#define _9b866b42_gpuToCpuSignal(value) value
#define _9b866b42_optionalFile(value) value
#define _9b866b42_optionalLine(value) value
#define _9b866b42_optionalUserData(value) value
#else
typedef struct _9b866b42_context { _9b866b42_context(RedContext value): value(value) {}; RedContext value; _9b866b42_context(const _9b866b42_context &) = delete; } _9b866b42_context;
typedef struct _9b866b42_gpu { _9b866b42_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _9b866b42_gpu(const _9b866b42_gpu &) = delete; } _9b866b42_gpu;
typedef struct _9b866b42_gpuToCpuSignal { _9b866b42_gpuToCpuSignal(RedHandleGpuToCpuSignal value): value(value) {}; RedHandleGpuToCpuSignal value; _9b866b42_gpuToCpuSignal(const _9b866b42_gpuToCpuSignal &) = delete; } _9b866b42_gpuToCpuSignal;
typedef struct _9b866b42_optionalFile { _9b866b42_optionalFile(char* value): value(value) {}; char* value; _9b866b42_optionalFile(const _9b866b42_optionalFile &) = delete; } _9b866b42_optionalFile;
typedef struct _9b866b42_optionalLine { _9b866b42_optionalLine(int value): value(value) {}; int value; _9b866b42_optionalLine(const _9b866b42_optionalLine &) = delete; } _9b866b42_optionalLine;
typedef struct _9b866b42_optionalUserData { _9b866b42_optionalUserData(void* value): value(value) {}; void* value; _9b866b42_optionalUserData(const _9b866b42_optionalUserData &) = delete; } _9b866b42_optionalUserData;
void np_redDestroyGpuToCpuSignal(_9b866b42_context & context, _9b866b42_gpu & gpu, _9b866b42_gpuToCpuSignal & gpuToCpuSignal, _9b866b42_optionalFile & optionalFile, _9b866b42_optionalLine & optionalLine, _9b866b42_optionalUserData & optionalUserData) {
  redDestroyGpuToCpuSignal(context.value, gpu.value, gpuToCpuSignal.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redDestroyCalls redDestroyCalls
#define _de2e32b2_context(value) value
#define _de2e32b2_gpu(value) value
#define _de2e32b2_calls(value) value
#define _de2e32b2_callsMemory(value) value
#define _de2e32b2_optionalFile(value) value
#define _de2e32b2_optionalLine(value) value
#define _de2e32b2_optionalUserData(value) value
#else
typedef struct _de2e32b2_context { _de2e32b2_context(RedContext value): value(value) {}; RedContext value; _de2e32b2_context(const _de2e32b2_context &) = delete; } _de2e32b2_context;
typedef struct _de2e32b2_gpu { _de2e32b2_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _de2e32b2_gpu(const _de2e32b2_gpu &) = delete; } _de2e32b2_gpu;
typedef struct _de2e32b2_calls { _de2e32b2_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _de2e32b2_calls(const _de2e32b2_calls &) = delete; } _de2e32b2_calls;
typedef struct _de2e32b2_callsMemory { _de2e32b2_callsMemory(RedHandleCallsMemory value): value(value) {}; RedHandleCallsMemory value; _de2e32b2_callsMemory(const _de2e32b2_callsMemory &) = delete; } _de2e32b2_callsMemory;
typedef struct _de2e32b2_optionalFile { _de2e32b2_optionalFile(char* value): value(value) {}; char* value; _de2e32b2_optionalFile(const _de2e32b2_optionalFile &) = delete; } _de2e32b2_optionalFile;
typedef struct _de2e32b2_optionalLine { _de2e32b2_optionalLine(int value): value(value) {}; int value; _de2e32b2_optionalLine(const _de2e32b2_optionalLine &) = delete; } _de2e32b2_optionalLine;
typedef struct _de2e32b2_optionalUserData { _de2e32b2_optionalUserData(void* value): value(value) {}; void* value; _de2e32b2_optionalUserData(const _de2e32b2_optionalUserData &) = delete; } _de2e32b2_optionalUserData;
void np_redDestroyCalls(_de2e32b2_context & context, _de2e32b2_gpu & gpu, _de2e32b2_calls & calls, _de2e32b2_callsMemory & callsMemory, _de2e32b2_optionalFile & optionalFile, _de2e32b2_optionalLine & optionalLine, _de2e32b2_optionalUserData & optionalUserData) {
  redDestroyCalls(context.value, gpu.value, calls.value, callsMemory.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redProcedureCacheGetBlob redProcedureCacheGetBlob
#define _b55c2a5e_context(value) value
#define _b55c2a5e_gpu(value) value
#define _b55c2a5e_procedureCache(value) value
#define _b55c2a5e_outBlobBytesCount(value) value
#define _b55c2a5e_outBlob(value) value
#define _b55c2a5e_outStatuses(value) value
#define _b55c2a5e_optionalFile(value) value
#define _b55c2a5e_optionalLine(value) value
#define _b55c2a5e_optionalUserData(value) value
#else
typedef struct _b55c2a5e_context { _b55c2a5e_context(RedContext value): value(value) {}; RedContext value; _b55c2a5e_context(const _b55c2a5e_context &) = delete; } _b55c2a5e_context;
typedef struct _b55c2a5e_gpu { _b55c2a5e_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _b55c2a5e_gpu(const _b55c2a5e_gpu &) = delete; } _b55c2a5e_gpu;
typedef struct _b55c2a5e_procedureCache { _b55c2a5e_procedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _b55c2a5e_procedureCache(const _b55c2a5e_procedureCache &) = delete; } _b55c2a5e_procedureCache;
typedef struct _b55c2a5e_outBlobBytesCount { _b55c2a5e_outBlobBytesCount(uint64_t* value): value(value) {}; uint64_t* value; _b55c2a5e_outBlobBytesCount(const _b55c2a5e_outBlobBytesCount &) = delete; } _b55c2a5e_outBlobBytesCount;
typedef struct _b55c2a5e_outBlob { _b55c2a5e_outBlob(void* value): value(value) {}; void* value; _b55c2a5e_outBlob(const _b55c2a5e_outBlob &) = delete; } _b55c2a5e_outBlob;
typedef struct _b55c2a5e_outStatuses { _b55c2a5e_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _b55c2a5e_outStatuses(const _b55c2a5e_outStatuses &) = delete; } _b55c2a5e_outStatuses;
typedef struct _b55c2a5e_optionalFile { _b55c2a5e_optionalFile(char* value): value(value) {}; char* value; _b55c2a5e_optionalFile(const _b55c2a5e_optionalFile &) = delete; } _b55c2a5e_optionalFile;
typedef struct _b55c2a5e_optionalLine { _b55c2a5e_optionalLine(int value): value(value) {}; int value; _b55c2a5e_optionalLine(const _b55c2a5e_optionalLine &) = delete; } _b55c2a5e_optionalLine;
typedef struct _b55c2a5e_optionalUserData { _b55c2a5e_optionalUserData(void* value): value(value) {}; void* value; _b55c2a5e_optionalUserData(const _b55c2a5e_optionalUserData &) = delete; } _b55c2a5e_optionalUserData;
void np_redProcedureCacheGetBlob(_b55c2a5e_context & context, _b55c2a5e_gpu & gpu, _b55c2a5e_procedureCache & procedureCache, _b55c2a5e_outBlobBytesCount & outBlobBytesCount, _b55c2a5e_outBlob & outBlob, _b55c2a5e_outStatuses & outStatuses, _b55c2a5e_optionalFile & optionalFile, _b55c2a5e_optionalLine & optionalLine, _b55c2a5e_optionalUserData & optionalUserData) {
  redProcedureCacheGetBlob(context.value, gpu.value, procedureCache.value, outBlobBytesCount.value, outBlob.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redProcedureCacheMergeCaches redProcedureCacheMergeCaches
#define _af49ac68_context(value) value
#define _af49ac68_gpu(value) value
#define _af49ac68_sourceProcedureCachesCount(value) value
#define _af49ac68_sourceProcedureCaches(value) value
#define _af49ac68_targetProcedureCache(value) value
#define _af49ac68_outStatuses(value) value
#define _af49ac68_optionalFile(value) value
#define _af49ac68_optionalLine(value) value
#define _af49ac68_optionalUserData(value) value
#else
typedef struct _af49ac68_context { _af49ac68_context(RedContext value): value(value) {}; RedContext value; _af49ac68_context(const _af49ac68_context &) = delete; } _af49ac68_context;
typedef struct _af49ac68_gpu { _af49ac68_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _af49ac68_gpu(const _af49ac68_gpu &) = delete; } _af49ac68_gpu;
typedef struct _af49ac68_sourceProcedureCachesCount { _af49ac68_sourceProcedureCachesCount(unsigned value): value(value) {}; unsigned value; _af49ac68_sourceProcedureCachesCount(const _af49ac68_sourceProcedureCachesCount &) = delete; } _af49ac68_sourceProcedureCachesCount;
typedef struct _af49ac68_sourceProcedureCaches { _af49ac68_sourceProcedureCaches(RedHandleProcedureCache* value): value(value) {}; RedHandleProcedureCache* value; _af49ac68_sourceProcedureCaches(const _af49ac68_sourceProcedureCaches &) = delete; } _af49ac68_sourceProcedureCaches;
typedef struct _af49ac68_targetProcedureCache { _af49ac68_targetProcedureCache(RedHandleProcedureCache value): value(value) {}; RedHandleProcedureCache value; _af49ac68_targetProcedureCache(const _af49ac68_targetProcedureCache &) = delete; } _af49ac68_targetProcedureCache;
typedef struct _af49ac68_outStatuses { _af49ac68_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _af49ac68_outStatuses(const _af49ac68_outStatuses &) = delete; } _af49ac68_outStatuses;
typedef struct _af49ac68_optionalFile { _af49ac68_optionalFile(char* value): value(value) {}; char* value; _af49ac68_optionalFile(const _af49ac68_optionalFile &) = delete; } _af49ac68_optionalFile;
typedef struct _af49ac68_optionalLine { _af49ac68_optionalLine(int value): value(value) {}; int value; _af49ac68_optionalLine(const _af49ac68_optionalLine &) = delete; } _af49ac68_optionalLine;
typedef struct _af49ac68_optionalUserData { _af49ac68_optionalUserData(void* value): value(value) {}; void* value; _af49ac68_optionalUserData(const _af49ac68_optionalUserData &) = delete; } _af49ac68_optionalUserData;
void np_redProcedureCacheMergeCaches(_af49ac68_context & context, _af49ac68_gpu & gpu, _af49ac68_sourceProcedureCachesCount & sourceProcedureCachesCount, _af49ac68_sourceProcedureCaches & sourceProcedureCaches, _af49ac68_targetProcedureCache & targetProcedureCache, _af49ac68_outStatuses & outStatuses, _af49ac68_optionalFile & optionalFile, _af49ac68_optionalLine & optionalLine, _af49ac68_optionalUserData & optionalUserData) {
  redProcedureCacheMergeCaches(context.value, gpu.value, sourceProcedureCachesCount.value, sourceProcedureCaches.value, targetProcedureCache.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCpuSignalGetStatus redCpuSignalGetStatus
#define _3e706476_context(value) value
#define _3e706476_gpu(value) value
#define _3e706476_cpuSignal(value) value
#define _3e706476_outStatus(value) value
#define _3e706476_optionalFile(value) value
#define _3e706476_optionalLine(value) value
#define _3e706476_optionalUserData(value) value
#else
typedef struct _3e706476_context { _3e706476_context(RedContext value): value(value) {}; RedContext value; _3e706476_context(const _3e706476_context &) = delete; } _3e706476_context;
typedef struct _3e706476_gpu { _3e706476_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _3e706476_gpu(const _3e706476_gpu &) = delete; } _3e706476_gpu;
typedef struct _3e706476_cpuSignal { _3e706476_cpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _3e706476_cpuSignal(const _3e706476_cpuSignal &) = delete; } _3e706476_cpuSignal;
typedef struct _3e706476_outStatus { _3e706476_outStatus(RedStatus* value): value(value) {}; RedStatus* value; _3e706476_outStatus(const _3e706476_outStatus &) = delete; } _3e706476_outStatus;
typedef struct _3e706476_optionalFile { _3e706476_optionalFile(char* value): value(value) {}; char* value; _3e706476_optionalFile(const _3e706476_optionalFile &) = delete; } _3e706476_optionalFile;
typedef struct _3e706476_optionalLine { _3e706476_optionalLine(int value): value(value) {}; int value; _3e706476_optionalLine(const _3e706476_optionalLine &) = delete; } _3e706476_optionalLine;
typedef struct _3e706476_optionalUserData { _3e706476_optionalUserData(void* value): value(value) {}; void* value; _3e706476_optionalUserData(const _3e706476_optionalUserData &) = delete; } _3e706476_optionalUserData;
void np_redCpuSignalGetStatus(_3e706476_context & context, _3e706476_gpu & gpu, _3e706476_cpuSignal & cpuSignal, _3e706476_outStatus & outStatus, _3e706476_optionalFile & optionalFile, _3e706476_optionalLine & optionalLine, _3e706476_optionalUserData & optionalUserData) {
  redCpuSignalGetStatus(context.value, gpu.value, cpuSignal.value, outStatus.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCpuSignalWait redCpuSignalWait
#define _4a826452_context(value) value
#define _4a826452_gpu(value) value
#define _4a826452_cpuSignalsCount(value) value
#define _4a826452_cpuSignals(value) value
#define _4a826452_waitAll(value) value
#define _4a826452_outStatuses(value) value
#define _4a826452_optionalFile(value) value
#define _4a826452_optionalLine(value) value
#define _4a826452_optionalUserData(value) value
#else
typedef struct _4a826452_context { _4a826452_context(RedContext value): value(value) {}; RedContext value; _4a826452_context(const _4a826452_context &) = delete; } _4a826452_context;
typedef struct _4a826452_gpu { _4a826452_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _4a826452_gpu(const _4a826452_gpu &) = delete; } _4a826452_gpu;
typedef struct _4a826452_cpuSignalsCount { _4a826452_cpuSignalsCount(unsigned value): value(value) {}; unsigned value; _4a826452_cpuSignalsCount(const _4a826452_cpuSignalsCount &) = delete; } _4a826452_cpuSignalsCount;
typedef struct _4a826452_cpuSignals { _4a826452_cpuSignals(RedHandleCpuSignal* value): value(value) {}; RedHandleCpuSignal* value; _4a826452_cpuSignals(const _4a826452_cpuSignals &) = delete; } _4a826452_cpuSignals;
typedef struct _4a826452_waitAll { _4a826452_waitAll(RedBool32 value): value(value) {}; RedBool32 value; _4a826452_waitAll(const _4a826452_waitAll &) = delete; } _4a826452_waitAll;
typedef struct _4a826452_outStatuses { _4a826452_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _4a826452_outStatuses(const _4a826452_outStatuses &) = delete; } _4a826452_outStatuses;
typedef struct _4a826452_optionalFile { _4a826452_optionalFile(char* value): value(value) {}; char* value; _4a826452_optionalFile(const _4a826452_optionalFile &) = delete; } _4a826452_optionalFile;
typedef struct _4a826452_optionalLine { _4a826452_optionalLine(int value): value(value) {}; int value; _4a826452_optionalLine(const _4a826452_optionalLine &) = delete; } _4a826452_optionalLine;
typedef struct _4a826452_optionalUserData { _4a826452_optionalUserData(void* value): value(value) {}; void* value; _4a826452_optionalUserData(const _4a826452_optionalUserData &) = delete; } _4a826452_optionalUserData;
void np_redCpuSignalWait(_4a826452_context & context, _4a826452_gpu & gpu, _4a826452_cpuSignalsCount & cpuSignalsCount, _4a826452_cpuSignals & cpuSignals, _4a826452_waitAll & waitAll, _4a826452_outStatuses & outStatuses, _4a826452_optionalFile & optionalFile, _4a826452_optionalLine & optionalLine, _4a826452_optionalUserData & optionalUserData) {
  redCpuSignalWait(context.value, gpu.value, cpuSignalsCount.value, cpuSignals.value, waitAll.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCpuSignalUnsignal redCpuSignalUnsignal
#define _fd52e10b_context(value) value
#define _fd52e10b_gpu(value) value
#define _fd52e10b_cpuSignalsCount(value) value
#define _fd52e10b_cpuSignals(value) value
#define _fd52e10b_outStatuses(value) value
#define _fd52e10b_optionalFile(value) value
#define _fd52e10b_optionalLine(value) value
#define _fd52e10b_optionalUserData(value) value
#else
typedef struct _fd52e10b_context { _fd52e10b_context(RedContext value): value(value) {}; RedContext value; _fd52e10b_context(const _fd52e10b_context &) = delete; } _fd52e10b_context;
typedef struct _fd52e10b_gpu { _fd52e10b_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _fd52e10b_gpu(const _fd52e10b_gpu &) = delete; } _fd52e10b_gpu;
typedef struct _fd52e10b_cpuSignalsCount { _fd52e10b_cpuSignalsCount(unsigned value): value(value) {}; unsigned value; _fd52e10b_cpuSignalsCount(const _fd52e10b_cpuSignalsCount &) = delete; } _fd52e10b_cpuSignalsCount;
typedef struct _fd52e10b_cpuSignals { _fd52e10b_cpuSignals(RedHandleCpuSignal* value): value(value) {}; RedHandleCpuSignal* value; _fd52e10b_cpuSignals(const _fd52e10b_cpuSignals &) = delete; } _fd52e10b_cpuSignals;
typedef struct _fd52e10b_outStatuses { _fd52e10b_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _fd52e10b_outStatuses(const _fd52e10b_outStatuses &) = delete; } _fd52e10b_outStatuses;
typedef struct _fd52e10b_optionalFile { _fd52e10b_optionalFile(char* value): value(value) {}; char* value; _fd52e10b_optionalFile(const _fd52e10b_optionalFile &) = delete; } _fd52e10b_optionalFile;
typedef struct _fd52e10b_optionalLine { _fd52e10b_optionalLine(int value): value(value) {}; int value; _fd52e10b_optionalLine(const _fd52e10b_optionalLine &) = delete; } _fd52e10b_optionalLine;
typedef struct _fd52e10b_optionalUserData { _fd52e10b_optionalUserData(void* value): value(value) {}; void* value; _fd52e10b_optionalUserData(const _fd52e10b_optionalUserData &) = delete; } _fd52e10b_optionalUserData;
void np_redCpuSignalUnsignal(_fd52e10b_context & context, _fd52e10b_gpu & gpu, _fd52e10b_cpuSignalsCount & cpuSignalsCount, _fd52e10b_cpuSignals & cpuSignals, _fd52e10b_outStatuses & outStatuses, _fd52e10b_optionalFile & optionalFile, _fd52e10b_optionalLine & optionalLine, _fd52e10b_optionalUserData & optionalUserData) {
  redCpuSignalUnsignal(context.value, gpu.value, cpuSignalsCount.value, cpuSignals.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redGpuToCpuSignalGetStatus redGpuToCpuSignalGetStatus
#define _881955d2_context(value) value
#define _881955d2_gpu(value) value
#define _881955d2_gpuToCpuSignal(value) value
#define _881955d2_outStatus(value) value
#define _881955d2_optionalFile(value) value
#define _881955d2_optionalLine(value) value
#define _881955d2_optionalUserData(value) value
#else
typedef struct _881955d2_context { _881955d2_context(RedContext value): value(value) {}; RedContext value; _881955d2_context(const _881955d2_context &) = delete; } _881955d2_context;
typedef struct _881955d2_gpu { _881955d2_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _881955d2_gpu(const _881955d2_gpu &) = delete; } _881955d2_gpu;
typedef struct _881955d2_gpuToCpuSignal { _881955d2_gpuToCpuSignal(RedHandleGpuToCpuSignal value): value(value) {}; RedHandleGpuToCpuSignal value; _881955d2_gpuToCpuSignal(const _881955d2_gpuToCpuSignal &) = delete; } _881955d2_gpuToCpuSignal;
typedef struct _881955d2_outStatus { _881955d2_outStatus(RedStatus* value): value(value) {}; RedStatus* value; _881955d2_outStatus(const _881955d2_outStatus &) = delete; } _881955d2_outStatus;
typedef struct _881955d2_optionalFile { _881955d2_optionalFile(char* value): value(value) {}; char* value; _881955d2_optionalFile(const _881955d2_optionalFile &) = delete; } _881955d2_optionalFile;
typedef struct _881955d2_optionalLine { _881955d2_optionalLine(int value): value(value) {}; int value; _881955d2_optionalLine(const _881955d2_optionalLine &) = delete; } _881955d2_optionalLine;
typedef struct _881955d2_optionalUserData { _881955d2_optionalUserData(void* value): value(value) {}; void* value; _881955d2_optionalUserData(const _881955d2_optionalUserData &) = delete; } _881955d2_optionalUserData;
void np_redGpuToCpuSignalGetStatus(_881955d2_context & context, _881955d2_gpu & gpu, _881955d2_gpuToCpuSignal & gpuToCpuSignal, _881955d2_outStatus & outStatus, _881955d2_optionalFile & optionalFile, _881955d2_optionalLine & optionalLine, _881955d2_optionalUserData & optionalUserData) {
  redGpuToCpuSignalGetStatus(context.value, gpu.value, gpuToCpuSignal.value, outStatus.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redGpuToCpuSignalUnsignal redGpuToCpuSignalUnsignal
#define _ad347b4d_context(value) value
#define _ad347b4d_gpu(value) value
#define _ad347b4d_gpuToCpuSignal(value) value
#define _ad347b4d_outStatuses(value) value
#define _ad347b4d_optionalFile(value) value
#define _ad347b4d_optionalLine(value) value
#define _ad347b4d_optionalUserData(value) value
#else
typedef struct _ad347b4d_context { _ad347b4d_context(RedContext value): value(value) {}; RedContext value; _ad347b4d_context(const _ad347b4d_context &) = delete; } _ad347b4d_context;
typedef struct _ad347b4d_gpu { _ad347b4d_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _ad347b4d_gpu(const _ad347b4d_gpu &) = delete; } _ad347b4d_gpu;
typedef struct _ad347b4d_gpuToCpuSignal { _ad347b4d_gpuToCpuSignal(RedHandleGpuToCpuSignal value): value(value) {}; RedHandleGpuToCpuSignal value; _ad347b4d_gpuToCpuSignal(const _ad347b4d_gpuToCpuSignal &) = delete; } _ad347b4d_gpuToCpuSignal;
typedef struct _ad347b4d_outStatuses { _ad347b4d_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _ad347b4d_outStatuses(const _ad347b4d_outStatuses &) = delete; } _ad347b4d_outStatuses;
typedef struct _ad347b4d_optionalFile { _ad347b4d_optionalFile(char* value): value(value) {}; char* value; _ad347b4d_optionalFile(const _ad347b4d_optionalFile &) = delete; } _ad347b4d_optionalFile;
typedef struct _ad347b4d_optionalLine { _ad347b4d_optionalLine(int value): value(value) {}; int value; _ad347b4d_optionalLine(const _ad347b4d_optionalLine &) = delete; } _ad347b4d_optionalLine;
typedef struct _ad347b4d_optionalUserData { _ad347b4d_optionalUserData(void* value): value(value) {}; void* value; _ad347b4d_optionalUserData(const _ad347b4d_optionalUserData &) = delete; } _ad347b4d_optionalUserData;
void np_redGpuToCpuSignalUnsignal(_ad347b4d_context & context, _ad347b4d_gpu & gpu, _ad347b4d_gpuToCpuSignal & gpuToCpuSignal, _ad347b4d_outStatuses & outStatuses, _ad347b4d_optionalFile & optionalFile, _ad347b4d_optionalLine & optionalLine, _ad347b4d_optionalUserData & optionalUserData) {
  redGpuToCpuSignalUnsignal(context.value, gpu.value, gpuToCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallsSet redCallsSet
#define _23514538_context(value) value
#define _23514538_gpu(value) value
#define _23514538_calls(value) value
#define _23514538_callsMemory(value) value
#define _23514538_callsReusable(value) value
#define _23514538_outStatuses(value) value
#define _23514538_optionalFile(value) value
#define _23514538_optionalLine(value) value
#define _23514538_optionalUserData(value) value
#else
typedef struct _23514538_context { _23514538_context(RedContext value): value(value) {}; RedContext value; _23514538_context(const _23514538_context &) = delete; } _23514538_context;
typedef struct _23514538_gpu { _23514538_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _23514538_gpu(const _23514538_gpu &) = delete; } _23514538_gpu;
typedef struct _23514538_calls { _23514538_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _23514538_calls(const _23514538_calls &) = delete; } _23514538_calls;
typedef struct _23514538_callsMemory { _23514538_callsMemory(RedHandleCallsMemory value): value(value) {}; RedHandleCallsMemory value; _23514538_callsMemory(const _23514538_callsMemory &) = delete; } _23514538_callsMemory;
typedef struct _23514538_callsReusable { _23514538_callsReusable(RedBool32 value): value(value) {}; RedBool32 value; _23514538_callsReusable(const _23514538_callsReusable &) = delete; } _23514538_callsReusable;
typedef struct _23514538_outStatuses { _23514538_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _23514538_outStatuses(const _23514538_outStatuses &) = delete; } _23514538_outStatuses;
typedef struct _23514538_optionalFile { _23514538_optionalFile(char* value): value(value) {}; char* value; _23514538_optionalFile(const _23514538_optionalFile &) = delete; } _23514538_optionalFile;
typedef struct _23514538_optionalLine { _23514538_optionalLine(int value): value(value) {}; int value; _23514538_optionalLine(const _23514538_optionalLine &) = delete; } _23514538_optionalLine;
typedef struct _23514538_optionalUserData { _23514538_optionalUserData(void* value): value(value) {}; void* value; _23514538_optionalUserData(const _23514538_optionalUserData &) = delete; } _23514538_optionalUserData;
void np_redCallsSet(_23514538_context & context, _23514538_gpu & gpu, _23514538_calls & calls, _23514538_callsMemory & callsMemory, _23514538_callsReusable & callsReusable, _23514538_outStatuses & outStatuses, _23514538_optionalFile & optionalFile, _23514538_optionalLine & optionalLine, _23514538_optionalUserData & optionalUserData) {
  redCallsSet(context.value, gpu.value, calls.value, callsMemory.value, callsReusable.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallsEnd redCallsEnd
#define _2566f99f_context(value) value
#define _2566f99f_gpu(value) value
#define _2566f99f_calls(value) value
#define _2566f99f_callsMemory(value) value
#define _2566f99f_outStatuses(value) value
#define _2566f99f_optionalFile(value) value
#define _2566f99f_optionalLine(value) value
#define _2566f99f_optionalUserData(value) value
#else
typedef struct _2566f99f_context { _2566f99f_context(RedContext value): value(value) {}; RedContext value; _2566f99f_context(const _2566f99f_context &) = delete; } _2566f99f_context;
typedef struct _2566f99f_gpu { _2566f99f_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _2566f99f_gpu(const _2566f99f_gpu &) = delete; } _2566f99f_gpu;
typedef struct _2566f99f_calls { _2566f99f_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _2566f99f_calls(const _2566f99f_calls &) = delete; } _2566f99f_calls;
typedef struct _2566f99f_callsMemory { _2566f99f_callsMemory(RedHandleCallsMemory value): value(value) {}; RedHandleCallsMemory value; _2566f99f_callsMemory(const _2566f99f_callsMemory &) = delete; } _2566f99f_callsMemory;
typedef struct _2566f99f_outStatuses { _2566f99f_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _2566f99f_outStatuses(const _2566f99f_outStatuses &) = delete; } _2566f99f_outStatuses;
typedef struct _2566f99f_optionalFile { _2566f99f_optionalFile(char* value): value(value) {}; char* value; _2566f99f_optionalFile(const _2566f99f_optionalFile &) = delete; } _2566f99f_optionalFile;
typedef struct _2566f99f_optionalLine { _2566f99f_optionalLine(int value): value(value) {}; int value; _2566f99f_optionalLine(const _2566f99f_optionalLine &) = delete; } _2566f99f_optionalLine;
typedef struct _2566f99f_optionalUserData { _2566f99f_optionalUserData(void* value): value(value) {}; void* value; _2566f99f_optionalUserData(const _2566f99f_optionalUserData &) = delete; } _2566f99f_optionalUserData;
void np_redCallsEnd(_2566f99f_context & context, _2566f99f_gpu & gpu, _2566f99f_calls & calls, _2566f99f_callsMemory & callsMemory, _2566f99f_outStatuses & outStatuses, _2566f99f_optionalFile & optionalFile, _2566f99f_optionalLine & optionalLine, _2566f99f_optionalUserData & optionalUserData) {
  redCallsEnd(context.value, gpu.value, calls.value, callsMemory.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redGetCallProceduresAndAddresses redGetCallProceduresAndAddresses
#define _038a00b5_context(value) value
#define _038a00b5_gpu(value) value
#define _038a00b5_outCallProceduresAndAddresses(value) value
#define _038a00b5_outStatuses(value) value
#define _038a00b5_optionalFile(value) value
#define _038a00b5_optionalLine(value) value
#define _038a00b5_optionalUserData(value) value
#else
typedef struct _038a00b5_context { _038a00b5_context(RedContext value): value(value) {}; RedContext value; _038a00b5_context(const _038a00b5_context &) = delete; } _038a00b5_context;
typedef struct _038a00b5_gpu { _038a00b5_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _038a00b5_gpu(const _038a00b5_gpu &) = delete; } _038a00b5_gpu;
typedef struct _038a00b5_outCallProceduresAndAddresses { _038a00b5_outCallProceduresAndAddresses(RedCallProceduresAndAddresses* value): value(value) {}; RedCallProceduresAndAddresses* value; _038a00b5_outCallProceduresAndAddresses(const _038a00b5_outCallProceduresAndAddresses &) = delete; } _038a00b5_outCallProceduresAndAddresses;
typedef struct _038a00b5_outStatuses { _038a00b5_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _038a00b5_outStatuses(const _038a00b5_outStatuses &) = delete; } _038a00b5_outStatuses;
typedef struct _038a00b5_optionalFile { _038a00b5_optionalFile(char* value): value(value) {}; char* value; _038a00b5_optionalFile(const _038a00b5_optionalFile &) = delete; } _038a00b5_optionalFile;
typedef struct _038a00b5_optionalLine { _038a00b5_optionalLine(int value): value(value) {}; int value; _038a00b5_optionalLine(const _038a00b5_optionalLine &) = delete; } _038a00b5_optionalLine;
typedef struct _038a00b5_optionalUserData { _038a00b5_optionalUserData(void* value): value(value) {}; void* value; _038a00b5_optionalUserData(const _038a00b5_optionalUserData &) = delete; } _038a00b5_optionalUserData;
void np_redGetCallProceduresAndAddresses(_038a00b5_context & context, _038a00b5_gpu & gpu, _038a00b5_outCallProceduresAndAddresses & outCallProceduresAndAddresses, _038a00b5_outStatuses & outStatuses, _038a00b5_optionalFile & optionalFile, _038a00b5_optionalLine & optionalLine, _038a00b5_optionalUserData & optionalUserData) {
  redGetCallProceduresAndAddresses(context.value, gpu.value, outCallProceduresAndAddresses.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallGpuToCpuSignalSignal(_0, _1, _2, _3) _0(_1, _2, _3)
#define _87338edd_address(value) value
#define _87338edd_calls(value) value
#define _87338edd_signalGpuToCpuSignal(value) value
#define _87338edd_setTo8192(value) value
#else
typedef struct _87338edd_address { _87338edd_address(RedTypeProcedureCallGpuToCpuSignalSignal value): value(value) {}; RedTypeProcedureCallGpuToCpuSignalSignal value; _87338edd_address(const _87338edd_address &) = delete; } _87338edd_address;
typedef struct _87338edd_calls { _87338edd_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _87338edd_calls(const _87338edd_calls &) = delete; } _87338edd_calls;
typedef struct _87338edd_signalGpuToCpuSignal { _87338edd_signalGpuToCpuSignal(RedHandleGpuToCpuSignal value): value(value) {}; RedHandleGpuToCpuSignal value; _87338edd_signalGpuToCpuSignal(const _87338edd_signalGpuToCpuSignal &) = delete; } _87338edd_signalGpuToCpuSignal;
typedef struct _87338edd_setTo8192 { _87338edd_setTo8192(unsigned value): value(value) {}; unsigned value; _87338edd_setTo8192(const _87338edd_setTo8192 &) = delete; } _87338edd_setTo8192;
void np_redCallGpuToCpuSignalSignal(_87338edd_address & address, _87338edd_calls & calls, _87338edd_signalGpuToCpuSignal & signalGpuToCpuSignal, _87338edd_setTo8192 & setTo8192) {
  address.value(calls.value, signalGpuToCpuSignal.value, setTo8192.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallCopyArrayToArray(_0, _1, _2, _3, _4, _5) _0(_1, _2, _3, _4, _5)
#define _60652b4b_address(value) value
#define _60652b4b_calls(value) value
#define _60652b4b_arrayR(value) value
#define _60652b4b_arrayW(value) value
#define _60652b4b_rangesCount(value) value
#define _60652b4b_ranges(value) value
#else
typedef struct _60652b4b_address { _60652b4b_address(RedTypeProcedureCallCopyArrayToArray value): value(value) {}; RedTypeProcedureCallCopyArrayToArray value; _60652b4b_address(const _60652b4b_address &) = delete; } _60652b4b_address;
typedef struct _60652b4b_calls { _60652b4b_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _60652b4b_calls(const _60652b4b_calls &) = delete; } _60652b4b_calls;
typedef struct _60652b4b_arrayR { _60652b4b_arrayR(RedHandleArray value): value(value) {}; RedHandleArray value; _60652b4b_arrayR(const _60652b4b_arrayR &) = delete; } _60652b4b_arrayR;
typedef struct _60652b4b_arrayW { _60652b4b_arrayW(RedHandleArray value): value(value) {}; RedHandleArray value; _60652b4b_arrayW(const _60652b4b_arrayW &) = delete; } _60652b4b_arrayW;
typedef struct _60652b4b_rangesCount { _60652b4b_rangesCount(unsigned value): value(value) {}; unsigned value; _60652b4b_rangesCount(const _60652b4b_rangesCount &) = delete; } _60652b4b_rangesCount;
typedef struct _60652b4b_ranges { _60652b4b_ranges(RedCopyArrayRange* value): value(value) {}; RedCopyArrayRange* value; _60652b4b_ranges(const _60652b4b_ranges &) = delete; } _60652b4b_ranges;
void np_redCallCopyArrayToArray(_60652b4b_address & address, _60652b4b_calls & calls, _60652b4b_arrayR & arrayR, _60652b4b_arrayW & arrayW, _60652b4b_rangesCount & rangesCount, _60652b4b_ranges & ranges) {
  address.value(calls.value, arrayR.value, arrayW.value, rangesCount.value, ranges.value);
}
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallCopyImageToImage(_0, _1, _2, _3, _4, _5, _6, _7) _0(_1, _2, _3, _4, _5, _6, _7)
#define _14b4d8f4_address(value) value
#define _14b4d8f4_calls(value) value
#define _14b4d8f4_imageR(value) value
#define _14b4d8f4_setTo1(value) value
#define _14b4d8f4_imageW(value) value
#define _14b4d8f4_setTo01(value) value
#define _14b4d8f4_rangesCount(value) value
#define _14b4d8f4_ranges(value) value
#else
typedef struct _14b4d8f4_address { _14b4d8f4_address(RedTypeProcedureCallCopyImageToImage value): value(value) {}; RedTypeProcedureCallCopyImageToImage value; _14b4d8f4_address(const _14b4d8f4_address &) = delete; } _14b4d8f4_address;
typedef struct _14b4d8f4_calls { _14b4d8f4_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _14b4d8f4_calls(const _14b4d8f4_calls &) = delete; } _14b4d8f4_calls;
typedef struct _14b4d8f4_imageR { _14b4d8f4_imageR(RedHandleImage value): value(value) {}; RedHandleImage value; _14b4d8f4_imageR(const _14b4d8f4_imageR &) = delete; } _14b4d8f4_imageR;
typedef struct _14b4d8f4_setTo1 { _14b4d8f4_setTo1(unsigned value): value(value) {}; unsigned value; _14b4d8f4_setTo1(const _14b4d8f4_setTo1 &) = delete; } _14b4d8f4_setTo1;
typedef struct _14b4d8f4_imageW { _14b4d8f4_imageW(RedHandleImage value): value(value) {}; RedHandleImage value; _14b4d8f4_imageW(const _14b4d8f4_imageW &) = delete; } _14b4d8f4_imageW;
typedef struct _14b4d8f4_setTo01 { _14b4d8f4_setTo01(unsigned value): value(value) {}; unsigned value; _14b4d8f4_setTo01(const _14b4d8f4_setTo01 &) = delete; } _14b4d8f4_setTo01;
typedef struct _14b4d8f4_rangesCount { _14b4d8f4_rangesCount(unsigned value): value(value) {}; unsigned value; _14b4d8f4_rangesCount(const _14b4d8f4_rangesCount &) = delete; } _14b4d8f4_rangesCount;
typedef struct _14b4d8f4_ranges { _14b4d8f4_ranges(RedCopyImageRange* value): value(value) {}; RedCopyImageRange* value; _14b4d8f4_ranges(const _14b4d8f4_ranges &) = delete; } _14b4d8f4_ranges;
void np_redCallCopyImageToImage(_14b4d8f4_address & address, _14b4d8f4_calls & calls, _14b4d8f4_imageR & imageR, _14b4d8f4_setTo1 & setTo1, _14b4d8f4_imageW & imageW, _14b4d8f4_setTo01 & setTo01, _14b4d8f4_rangesCount & rangesCount, _14b4d8f4_ranges & ranges) {
  address.value(calls.value, imageR.value, setTo1.value, imageW.value, setTo01.value, rangesCount.value, ranges.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallCopyArrayToImage(_0, _1, _2, _3, _4, _5, _6) _0(_1, _2, _3, _4, _5, _6)
#define _e68e8cba_address(value) value
#define _e68e8cba_calls(value) value
#define _e68e8cba_arrayR(value) value
#define _e68e8cba_imageW(value) value
#define _e68e8cba_setTo1(value) value
#define _e68e8cba_rangesCount(value) value
#define _e68e8cba_ranges(value) value
#else
typedef struct _e68e8cba_address { _e68e8cba_address(RedTypeProcedureCallCopyArrayToImage value): value(value) {}; RedTypeProcedureCallCopyArrayToImage value; _e68e8cba_address(const _e68e8cba_address &) = delete; } _e68e8cba_address;
typedef struct _e68e8cba_calls { _e68e8cba_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _e68e8cba_calls(const _e68e8cba_calls &) = delete; } _e68e8cba_calls;
typedef struct _e68e8cba_arrayR { _e68e8cba_arrayR(RedHandleArray value): value(value) {}; RedHandleArray value; _e68e8cba_arrayR(const _e68e8cba_arrayR &) = delete; } _e68e8cba_arrayR;
typedef struct _e68e8cba_imageW { _e68e8cba_imageW(RedHandleImage value): value(value) {}; RedHandleImage value; _e68e8cba_imageW(const _e68e8cba_imageW &) = delete; } _e68e8cba_imageW;
typedef struct _e68e8cba_setTo1 { _e68e8cba_setTo1(unsigned value): value(value) {}; unsigned value; _e68e8cba_setTo1(const _e68e8cba_setTo1 &) = delete; } _e68e8cba_setTo1;
typedef struct _e68e8cba_rangesCount { _e68e8cba_rangesCount(unsigned value): value(value) {}; unsigned value; _e68e8cba_rangesCount(const _e68e8cba_rangesCount &) = delete; } _e68e8cba_rangesCount;
typedef struct _e68e8cba_ranges { _e68e8cba_ranges(RedCopyArrayImageRange* value): value(value) {}; RedCopyArrayImageRange* value; _e68e8cba_ranges(const _e68e8cba_ranges &) = delete; } _e68e8cba_ranges;
void np_redCallCopyArrayToImage(_e68e8cba_address & address, _e68e8cba_calls & calls, _e68e8cba_arrayR & arrayR, _e68e8cba_imageW & imageW, _e68e8cba_setTo1 & setTo1, _e68e8cba_rangesCount & rangesCount, _e68e8cba_ranges & ranges) {
  address.value(calls.value, arrayR.value, imageW.value, setTo1.value, rangesCount.value, ranges.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallCopyImageToArray(_0, _1, _2, _3, _4, _5, _6) _0(_1, _2, _3, _4, _5, _6)
#define _4f794fd6_address(value) value
#define _4f794fd6_calls(value) value
#define _4f794fd6_imageR(value) value
#define _4f794fd6_setTo1(value) value
#define _4f794fd6_arrayW(value) value
#define _4f794fd6_rangesCount(value) value
#define _4f794fd6_ranges(value) value
#else
typedef struct _4f794fd6_address { _4f794fd6_address(RedTypeProcedureCallCopyImageToArray value): value(value) {}; RedTypeProcedureCallCopyImageToArray value; _4f794fd6_address(const _4f794fd6_address &) = delete; } _4f794fd6_address;
typedef struct _4f794fd6_calls { _4f794fd6_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _4f794fd6_calls(const _4f794fd6_calls &) = delete; } _4f794fd6_calls;
typedef struct _4f794fd6_imageR { _4f794fd6_imageR(RedHandleImage value): value(value) {}; RedHandleImage value; _4f794fd6_imageR(const _4f794fd6_imageR &) = delete; } _4f794fd6_imageR;
typedef struct _4f794fd6_setTo1 { _4f794fd6_setTo1(unsigned value): value(value) {}; unsigned value; _4f794fd6_setTo1(const _4f794fd6_setTo1 &) = delete; } _4f794fd6_setTo1;
typedef struct _4f794fd6_arrayW { _4f794fd6_arrayW(RedHandleArray value): value(value) {}; RedHandleArray value; _4f794fd6_arrayW(const _4f794fd6_arrayW &) = delete; } _4f794fd6_arrayW;
typedef struct _4f794fd6_rangesCount { _4f794fd6_rangesCount(unsigned value): value(value) {}; unsigned value; _4f794fd6_rangesCount(const _4f794fd6_rangesCount &) = delete; } _4f794fd6_rangesCount;
typedef struct _4f794fd6_ranges { _4f794fd6_ranges(RedCopyArrayImageRange* value): value(value) {}; RedCopyArrayImageRange* value; _4f794fd6_ranges(const _4f794fd6_ranges &) = delete; } _4f794fd6_ranges;
void np_redCallCopyImageToArray(_4f794fd6_address & address, _4f794fd6_calls & calls, _4f794fd6_imageR & imageR, _4f794fd6_setTo1 & setTo1, _4f794fd6_arrayW & arrayW, _4f794fd6_rangesCount & rangesCount, _4f794fd6_ranges & ranges) {
  address.value(calls.value, imageR.value, setTo1.value, arrayW.value, rangesCount.value, ranges.value);
}
#endif
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallProcedure(_0, _1, _2, _3, _4, _5) _0(_1, _2, _3, _4, _5)
#define _1a3e7fa1_address(value) value
#define _1a3e7fa1_calls(value) value
#define _1a3e7fa1_vertexCount(value) value
#define _1a3e7fa1_instanceCount(value) value
#define _1a3e7fa1_vertexFirst(value) value
#define _1a3e7fa1_instanceFirst(value) value
#else
typedef struct _1a3e7fa1_address { _1a3e7fa1_address(RedTypeProcedureCallProcedure value): value(value) {}; RedTypeProcedureCallProcedure value; _1a3e7fa1_address(const _1a3e7fa1_address &) = delete; } _1a3e7fa1_address;
typedef struct _1a3e7fa1_calls { _1a3e7fa1_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _1a3e7fa1_calls(const _1a3e7fa1_calls &) = delete; } _1a3e7fa1_calls;
typedef struct _1a3e7fa1_vertexCount { _1a3e7fa1_vertexCount(unsigned value): value(value) {}; unsigned value; _1a3e7fa1_vertexCount(const _1a3e7fa1_vertexCount &) = delete; } _1a3e7fa1_vertexCount;
typedef struct _1a3e7fa1_instanceCount { _1a3e7fa1_instanceCount(unsigned value): value(value) {}; unsigned value; _1a3e7fa1_instanceCount(const _1a3e7fa1_instanceCount &) = delete; } _1a3e7fa1_instanceCount;
typedef struct _1a3e7fa1_vertexFirst { _1a3e7fa1_vertexFirst(unsigned value): value(value) {}; unsigned value; _1a3e7fa1_vertexFirst(const _1a3e7fa1_vertexFirst &) = delete; } _1a3e7fa1_vertexFirst;
typedef struct _1a3e7fa1_instanceFirst { _1a3e7fa1_instanceFirst(unsigned value): value(value) {}; unsigned value; _1a3e7fa1_instanceFirst(const _1a3e7fa1_instanceFirst &) = delete; } _1a3e7fa1_instanceFirst;
void np_redCallProcedure(_1a3e7fa1_address & address, _1a3e7fa1_calls & calls, _1a3e7fa1_vertexCount & vertexCount, _1a3e7fa1_instanceCount & instanceCount, _1a3e7fa1_vertexFirst & vertexFirst, _1a3e7fa1_instanceFirst & instanceFirst) {
  address.value(calls.value, vertexCount.value, instanceCount.value, vertexFirst.value, instanceFirst.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallProcedureIndexed(_0, _1, _2, _3, _4, _5, _6) _0(_1, _2, _3, _4, _5, _6)
#define _46f9defa_address(value) value
#define _46f9defa_calls(value) value
#define _46f9defa_indexCount(value) value
#define _46f9defa_instanceCount(value) value
#define _46f9defa_indexFirst(value) value
#define _46f9defa_vertexBase(value) value
#define _46f9defa_instanceFirst(value) value
#else
typedef struct _46f9defa_address { _46f9defa_address(RedTypeProcedureCallProcedureIndexed value): value(value) {}; RedTypeProcedureCallProcedureIndexed value; _46f9defa_address(const _46f9defa_address &) = delete; } _46f9defa_address;
typedef struct _46f9defa_calls { _46f9defa_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _46f9defa_calls(const _46f9defa_calls &) = delete; } _46f9defa_calls;
typedef struct _46f9defa_indexCount { _46f9defa_indexCount(unsigned value): value(value) {}; unsigned value; _46f9defa_indexCount(const _46f9defa_indexCount &) = delete; } _46f9defa_indexCount;
typedef struct _46f9defa_instanceCount { _46f9defa_instanceCount(unsigned value): value(value) {}; unsigned value; _46f9defa_instanceCount(const _46f9defa_instanceCount &) = delete; } _46f9defa_instanceCount;
typedef struct _46f9defa_indexFirst { _46f9defa_indexFirst(unsigned value): value(value) {}; unsigned value; _46f9defa_indexFirst(const _46f9defa_indexFirst &) = delete; } _46f9defa_indexFirst;
typedef struct _46f9defa_vertexBase { _46f9defa_vertexBase(int value): value(value) {}; int value; _46f9defa_vertexBase(const _46f9defa_vertexBase &) = delete; } _46f9defa_vertexBase;
typedef struct _46f9defa_instanceFirst { _46f9defa_instanceFirst(unsigned value): value(value) {}; unsigned value; _46f9defa_instanceFirst(const _46f9defa_instanceFirst &) = delete; } _46f9defa_instanceFirst;
void np_redCallProcedureIndexed(_46f9defa_address & address, _46f9defa_calls & calls, _46f9defa_indexCount & indexCount, _46f9defa_instanceCount & instanceCount, _46f9defa_indexFirst & indexFirst, _46f9defa_vertexBase & vertexBase, _46f9defa_instanceFirst & instanceFirst) {
  address.value(calls.value, indexCount.value, instanceCount.value, indexFirst.value, vertexBase.value, instanceFirst.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallProcedureCompute(_0, _1, _2, _3, _4) _0(_1, _2, _3, _4)
#define _17fa22b3_address(value) value
#define _17fa22b3_calls(value) value
#define _17fa22b3_workgroupsCountX(value) value
#define _17fa22b3_workgroupsCountY(value) value
#define _17fa22b3_workgroupsCountZ(value) value
#else
typedef struct _17fa22b3_address { _17fa22b3_address(RedTypeProcedureCallProcedureCompute value): value(value) {}; RedTypeProcedureCallProcedureCompute value; _17fa22b3_address(const _17fa22b3_address &) = delete; } _17fa22b3_address;
typedef struct _17fa22b3_calls { _17fa22b3_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _17fa22b3_calls(const _17fa22b3_calls &) = delete; } _17fa22b3_calls;
typedef struct _17fa22b3_workgroupsCountX { _17fa22b3_workgroupsCountX(unsigned value): value(value) {}; unsigned value; _17fa22b3_workgroupsCountX(const _17fa22b3_workgroupsCountX &) = delete; } _17fa22b3_workgroupsCountX;
typedef struct _17fa22b3_workgroupsCountY { _17fa22b3_workgroupsCountY(unsigned value): value(value) {}; unsigned value; _17fa22b3_workgroupsCountY(const _17fa22b3_workgroupsCountY &) = delete; } _17fa22b3_workgroupsCountY;
typedef struct _17fa22b3_workgroupsCountZ { _17fa22b3_workgroupsCountZ(unsigned value): value(value) {}; unsigned value; _17fa22b3_workgroupsCountZ(const _17fa22b3_workgroupsCountZ &) = delete; } _17fa22b3_workgroupsCountZ;
void np_redCallProcedureCompute(_17fa22b3_address & address, _17fa22b3_calls & calls, _17fa22b3_workgroupsCountX & workgroupsCountX, _17fa22b3_workgroupsCountY & workgroupsCountY, _17fa22b3_workgroupsCountZ & workgroupsCountZ) {
  address.value(calls.value, workgroupsCountX.value, workgroupsCountY.value, workgroupsCountZ.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedure(_0, _1, _2, _3) _0(_1, _2, _3)
#define _16d79404_address(value) value
#define _16d79404_calls(value) value
#define _16d79404_procedureType(value) value
#define _16d79404_procedure(value) value
#else
typedef struct _16d79404_address { _16d79404_address(RedTypeProcedureCallSetProcedure value): value(value) {}; RedTypeProcedureCallSetProcedure value; _16d79404_address(const _16d79404_address &) = delete; } _16d79404_address;
typedef struct _16d79404_calls { _16d79404_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _16d79404_calls(const _16d79404_calls &) = delete; } _16d79404_calls;
typedef struct _16d79404_procedureType { _16d79404_procedureType(RedProcedureType value): value(value) {}; RedProcedureType value; _16d79404_procedureType(const _16d79404_procedureType &) = delete; } _16d79404_procedureType;
typedef struct _16d79404_procedure { _16d79404_procedure(RedHandleProcedure value): value(value) {}; RedHandleProcedure value; _16d79404_procedure(const _16d79404_procedure &) = delete; } _16d79404_procedure;
void np_redCallSetProcedure(_16d79404_address & address, _16d79404_calls & calls, _16d79404_procedureType & procedureType, _16d79404_procedure & procedure) {
  address.value(calls.value, procedureType.value, procedure.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedureIndices(_0, _1, _2, _3, _4) _0(_1, _2, _3, _4)
#define _fc588166_address(value) value
#define _fc588166_calls(value) value
#define _fc588166_array(value) value
#define _fc588166_setTo0(value) value
#define _fc588166_setTo1(value) value
#else
typedef struct _fc588166_address { _fc588166_address(RedTypeProcedureCallSetProcedureIndices value): value(value) {}; RedTypeProcedureCallSetProcedureIndices value; _fc588166_address(const _fc588166_address &) = delete; } _fc588166_address;
typedef struct _fc588166_calls { _fc588166_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _fc588166_calls(const _fc588166_calls &) = delete; } _fc588166_calls;
typedef struct _fc588166_array { _fc588166_array(RedHandleArray value): value(value) {}; RedHandleArray value; _fc588166_array(const _fc588166_array &) = delete; } _fc588166_array;
typedef struct _fc588166_setTo0 { _fc588166_setTo0(uint64_t value): value(value) {}; uint64_t value; _fc588166_setTo0(const _fc588166_setTo0 &) = delete; } _fc588166_setTo0;
typedef struct _fc588166_setTo1 { _fc588166_setTo1(unsigned value): value(value) {}; unsigned value; _fc588166_setTo1(const _fc588166_setTo1 &) = delete; } _fc588166_setTo1;
void np_redCallSetProcedureIndices(_fc588166_address & address, _fc588166_calls & calls, _fc588166_array & array, _fc588166_setTo0 & setTo0, _fc588166_setTo1 & setTo1) {
  address.value(calls.value, array.value, setTo0.value, setTo1.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedureParametersVariables(_0, _1, _2, _3, _4, _5, _6) _0(_1, _2, _3, _4, _5, _6)
#define _cba9ac89_address(value) value
#define _cba9ac89_calls(value) value
#define _cba9ac89_procedureParameters(value) value
#define _cba9ac89_visibleToStages(value) value
#define _cba9ac89_variablesBytesFirst(value) value
#define _cba9ac89_dataBytesCount(value) value
#define _cba9ac89_data(value) value
#else
typedef struct _cba9ac89_address { _cba9ac89_address(RedTypeProcedureCallSetProcedureParametersVariables value): value(value) {}; RedTypeProcedureCallSetProcedureParametersVariables value; _cba9ac89_address(const _cba9ac89_address &) = delete; } _cba9ac89_address;
typedef struct _cba9ac89_calls { _cba9ac89_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _cba9ac89_calls(const _cba9ac89_calls &) = delete; } _cba9ac89_calls;
typedef struct _cba9ac89_procedureParameters { _cba9ac89_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _cba9ac89_procedureParameters(const _cba9ac89_procedureParameters &) = delete; } _cba9ac89_procedureParameters;
typedef struct _cba9ac89_visibleToStages { _cba9ac89_visibleToStages(RedVisibleToStageBitflags value): value(value) {}; RedVisibleToStageBitflags value; _cba9ac89_visibleToStages(const _cba9ac89_visibleToStages &) = delete; } _cba9ac89_visibleToStages;
typedef struct _cba9ac89_variablesBytesFirst { _cba9ac89_variablesBytesFirst(unsigned value): value(value) {}; unsigned value; _cba9ac89_variablesBytesFirst(const _cba9ac89_variablesBytesFirst &) = delete; } _cba9ac89_variablesBytesFirst;
typedef struct _cba9ac89_dataBytesCount { _cba9ac89_dataBytesCount(unsigned value): value(value) {}; unsigned value; _cba9ac89_dataBytesCount(const _cba9ac89_dataBytesCount &) = delete; } _cba9ac89_dataBytesCount;
typedef struct _cba9ac89_data { _cba9ac89_data(void* value): value(value) {}; void* value; _cba9ac89_data(const _cba9ac89_data &) = delete; } _cba9ac89_data;
void np_redCallSetProcedureParametersVariables(_cba9ac89_address & address, _cba9ac89_calls & calls, _cba9ac89_procedureParameters & procedureParameters, _cba9ac89_visibleToStages & visibleToStages, _cba9ac89_variablesBytesFirst & variablesBytesFirst, _cba9ac89_dataBytesCount & dataBytesCount, _cba9ac89_data & data) {
  address.value(calls.value, procedureParameters.value, visibleToStages.value, variablesBytesFirst.value, dataBytesCount.value, data.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedureParametersStructs(_0, _1, _2, _3, _4, _5, _6, _7, _8) _0(_1, _2, _3, _4, _5, _6, _7, _8)
#define _b6fcba5e_address(value) value
#define _b6fcba5e_calls(value) value
#define _b6fcba5e_procedureType(value) value
#define _b6fcba5e_procedureParameters(value) value
#define _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst(value) value
#define _b6fcba5e_structsCount(value) value
#define _b6fcba5e_structs(value) value
#define _b6fcba5e_setTo0(value) value
#define _b6fcba5e_setTo00(value) value
#else
typedef struct _b6fcba5e_address { _b6fcba5e_address(RedTypeProcedureCallSetProcedureParametersStructs value): value(value) {}; RedTypeProcedureCallSetProcedureParametersStructs value; _b6fcba5e_address(const _b6fcba5e_address &) = delete; } _b6fcba5e_address;
typedef struct _b6fcba5e_calls { _b6fcba5e_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _b6fcba5e_calls(const _b6fcba5e_calls &) = delete; } _b6fcba5e_calls;
typedef struct _b6fcba5e_procedureType { _b6fcba5e_procedureType(RedProcedureType value): value(value) {}; RedProcedureType value; _b6fcba5e_procedureType(const _b6fcba5e_procedureType &) = delete; } _b6fcba5e_procedureType;
typedef struct _b6fcba5e_procedureParameters { _b6fcba5e_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _b6fcba5e_procedureParameters(const _b6fcba5e_procedureParameters &) = delete; } _b6fcba5e_procedureParameters;
typedef struct _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst { _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst(unsigned value): value(value) {}; unsigned value; _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst(const _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst &) = delete; } _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst;
typedef struct _b6fcba5e_structsCount { _b6fcba5e_structsCount(unsigned value): value(value) {}; unsigned value; _b6fcba5e_structsCount(const _b6fcba5e_structsCount &) = delete; } _b6fcba5e_structsCount;
typedef struct _b6fcba5e_structs { _b6fcba5e_structs(RedHandleStruct* value): value(value) {}; RedHandleStruct* value; _b6fcba5e_structs(const _b6fcba5e_structs &) = delete; } _b6fcba5e_structs;
typedef struct _b6fcba5e_setTo0 { _b6fcba5e_setTo0(unsigned value): value(value) {}; unsigned value; _b6fcba5e_setTo0(const _b6fcba5e_setTo0 &) = delete; } _b6fcba5e_setTo0;
typedef struct _b6fcba5e_setTo00 { _b6fcba5e_setTo00(size_t value): value(value) {}; size_t value; _b6fcba5e_setTo00(const _b6fcba5e_setTo00 &) = delete; } _b6fcba5e_setTo00;
void np_redCallSetProcedureParametersStructs(_b6fcba5e_address & address, _b6fcba5e_calls & calls, _b6fcba5e_procedureType & procedureType, _b6fcba5e_procedureParameters & procedureParameters, _b6fcba5e_procedureParametersDeclarationStructsDeclarationsFirst & procedureParametersDeclarationStructsDeclarationsFirst, _b6fcba5e_structsCount & structsCount, _b6fcba5e_structs & structs, _b6fcba5e_setTo0 & setTo0, _b6fcba5e_setTo00 & setTo00) {
  address.value(calls.value, procedureType.value, procedureParameters.value, procedureParametersDeclarationStructsDeclarationsFirst.value, structsCount.value, structs.value, setTo0.value, setTo00.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedureParametersHandles(_0, _1, _2, _3, _4, _5, _6) _0(_1, _2, _3, _4, _5, _6)
#define _63e4f50e_address(value) value
#define _63e4f50e_calls(value) value
#define _63e4f50e_procedureType(value) value
#define _63e4f50e_procedureParameters(value) value
#define _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount(value) value
#define _63e4f50e_handlesCount(value) value
#define _63e4f50e_handles(value) value
#else
typedef struct _63e4f50e_address { _63e4f50e_address(RedTypeProcedureCallSetProcedureParametersHandles value): value(value) {}; RedTypeProcedureCallSetProcedureParametersHandles value; _63e4f50e_address(const _63e4f50e_address &) = delete; } _63e4f50e_address;
typedef struct _63e4f50e_calls { _63e4f50e_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _63e4f50e_calls(const _63e4f50e_calls &) = delete; } _63e4f50e_calls;
typedef struct _63e4f50e_procedureType { _63e4f50e_procedureType(RedProcedureType value): value(value) {}; RedProcedureType value; _63e4f50e_procedureType(const _63e4f50e_procedureType &) = delete; } _63e4f50e_procedureType;
typedef struct _63e4f50e_procedureParameters { _63e4f50e_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _63e4f50e_procedureParameters(const _63e4f50e_procedureParameters &) = delete; } _63e4f50e_procedureParameters;
typedef struct _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount { _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount(unsigned value): value(value) {}; unsigned value; _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount(const _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount &) = delete; } _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount;
typedef struct _63e4f50e_handlesCount { _63e4f50e_handlesCount(unsigned value): value(value) {}; unsigned value; _63e4f50e_handlesCount(const _63e4f50e_handlesCount &) = delete; } _63e4f50e_handlesCount;
typedef struct _63e4f50e_handles { _63e4f50e_handles(RedProcedureParametersHandle* value): value(value) {}; RedProcedureParametersHandle* value; _63e4f50e_handles(const _63e4f50e_handles &) = delete; } _63e4f50e_handles;
void np_redCallSetProcedureParametersHandles(_63e4f50e_address & address, _63e4f50e_calls & calls, _63e4f50e_procedureType & procedureType, _63e4f50e_procedureParameters & procedureParameters, _63e4f50e_procedureParametersDeclarationStructsDeclarationsCount & procedureParametersDeclarationStructsDeclarationsCount, _63e4f50e_handlesCount & handlesCount, _63e4f50e_handles & handles) {
  address.value(calls.value, procedureType.value, procedureParameters.value, procedureParametersDeclarationStructsDeclarationsCount.value, handlesCount.value, handles.value);
}
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicDepthBias(_0, _1, _2, _3, _4) _0(_1, _2, _3, _4)
#define _704bca01_address(value) value
#define _704bca01_calls(value) value
#define _704bca01_constantFactor(value) value
#define _704bca01_clamp(value) value
#define _704bca01_slopeFactor(value) value
#else
typedef struct _704bca01_address { _704bca01_address(RedTypeProcedureCallSetDynamicDepthBias value): value(value) {}; RedTypeProcedureCallSetDynamicDepthBias value; _704bca01_address(const _704bca01_address &) = delete; } _704bca01_address;
typedef struct _704bca01_calls { _704bca01_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _704bca01_calls(const _704bca01_calls &) = delete; } _704bca01_calls;
typedef struct _704bca01_constantFactor { _704bca01_constantFactor(float value): value(value) {}; float value; _704bca01_constantFactor(const _704bca01_constantFactor &) = delete; } _704bca01_constantFactor;
typedef struct _704bca01_clamp { _704bca01_clamp(float value): value(value) {}; float value; _704bca01_clamp(const _704bca01_clamp &) = delete; } _704bca01_clamp;
typedef struct _704bca01_slopeFactor { _704bca01_slopeFactor(float value): value(value) {}; float value; _704bca01_slopeFactor(const _704bca01_slopeFactor &) = delete; } _704bca01_slopeFactor;
void np_redCallSetDynamicDepthBias(_704bca01_address & address, _704bca01_calls & calls, _704bca01_constantFactor & constantFactor, _704bca01_clamp & clamp, _704bca01_slopeFactor & slopeFactor) {
  address.value(calls.value, constantFactor.value, clamp.value, slopeFactor.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicDepthBounds(_0, _1, _2, _3) _0(_1, _2, _3)
#define _0b3dca08_address(value) value
#define _0b3dca08_calls(value) value
#define _0b3dca08_min(value) value
#define _0b3dca08_max(value) value
#else
typedef struct _0b3dca08_address { _0b3dca08_address(RedTypeProcedureCallSetDynamicDepthBounds value): value(value) {}; RedTypeProcedureCallSetDynamicDepthBounds value; _0b3dca08_address(const _0b3dca08_address &) = delete; } _0b3dca08_address;
typedef struct _0b3dca08_calls { _0b3dca08_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _0b3dca08_calls(const _0b3dca08_calls &) = delete; } _0b3dca08_calls;
typedef struct _0b3dca08_min { _0b3dca08_min(float value): value(value) {}; float value; _0b3dca08_min(const _0b3dca08_min &) = delete; } _0b3dca08_min;
typedef struct _0b3dca08_max { _0b3dca08_max(float value): value(value) {}; float value; _0b3dca08_max(const _0b3dca08_max &) = delete; } _0b3dca08_max;
void np_redCallSetDynamicDepthBounds(_0b3dca08_address & address, _0b3dca08_calls & calls, _0b3dca08_min & min, _0b3dca08_max & max) {
  address.value(calls.value, min.value, max.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicStencilCompareMask(_0, _1, _2, _3) _0(_1, _2, _3)
#define _49fbcd04_address(value) value
#define _49fbcd04_calls(value) value
#define _49fbcd04_face(value) value
#define _49fbcd04_compareMask(value) value
#else
typedef struct _49fbcd04_address { _49fbcd04_address(RedTypeProcedureCallSetDynamicStencilCompareMask value): value(value) {}; RedTypeProcedureCallSetDynamicStencilCompareMask value; _49fbcd04_address(const _49fbcd04_address &) = delete; } _49fbcd04_address;
typedef struct _49fbcd04_calls { _49fbcd04_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _49fbcd04_calls(const _49fbcd04_calls &) = delete; } _49fbcd04_calls;
typedef struct _49fbcd04_face { _49fbcd04_face(RedStencilFace value): value(value) {}; RedStencilFace value; _49fbcd04_face(const _49fbcd04_face &) = delete; } _49fbcd04_face;
typedef struct _49fbcd04_compareMask { _49fbcd04_compareMask(unsigned value): value(value) {}; unsigned value; _49fbcd04_compareMask(const _49fbcd04_compareMask &) = delete; } _49fbcd04_compareMask;
void np_redCallSetDynamicStencilCompareMask(_49fbcd04_address & address, _49fbcd04_calls & calls, _49fbcd04_face & face, _49fbcd04_compareMask & compareMask) {
  address.value(calls.value, face.value, compareMask.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicStencilWriteMask(_0, _1, _2, _3) _0(_1, _2, _3)
#define _b029fa3c_address(value) value
#define _b029fa3c_calls(value) value
#define _b029fa3c_face(value) value
#define _b029fa3c_writeMask(value) value
#else
typedef struct _b029fa3c_address { _b029fa3c_address(RedTypeProcedureCallSetDynamicStencilWriteMask value): value(value) {}; RedTypeProcedureCallSetDynamicStencilWriteMask value; _b029fa3c_address(const _b029fa3c_address &) = delete; } _b029fa3c_address;
typedef struct _b029fa3c_calls { _b029fa3c_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _b029fa3c_calls(const _b029fa3c_calls &) = delete; } _b029fa3c_calls;
typedef struct _b029fa3c_face { _b029fa3c_face(RedStencilFace value): value(value) {}; RedStencilFace value; _b029fa3c_face(const _b029fa3c_face &) = delete; } _b029fa3c_face;
typedef struct _b029fa3c_writeMask { _b029fa3c_writeMask(unsigned value): value(value) {}; unsigned value; _b029fa3c_writeMask(const _b029fa3c_writeMask &) = delete; } _b029fa3c_writeMask;
void np_redCallSetDynamicStencilWriteMask(_b029fa3c_address & address, _b029fa3c_calls & calls, _b029fa3c_face & face, _b029fa3c_writeMask & writeMask) {
  address.value(calls.value, face.value, writeMask.value);
}
#endif
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicStencilReference(_0, _1, _2, _3) _0(_1, _2, _3)
#define _2d80c0fb_address(value) value
#define _2d80c0fb_calls(value) value
#define _2d80c0fb_face(value) value
#define _2d80c0fb_reference(value) value
#else
typedef struct _2d80c0fb_address { _2d80c0fb_address(RedTypeProcedureCallSetDynamicStencilReference value): value(value) {}; RedTypeProcedureCallSetDynamicStencilReference value; _2d80c0fb_address(const _2d80c0fb_address &) = delete; } _2d80c0fb_address;
typedef struct _2d80c0fb_calls { _2d80c0fb_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _2d80c0fb_calls(const _2d80c0fb_calls &) = delete; } _2d80c0fb_calls;
typedef struct _2d80c0fb_face { _2d80c0fb_face(RedStencilFace value): value(value) {}; RedStencilFace value; _2d80c0fb_face(const _2d80c0fb_face &) = delete; } _2d80c0fb_face;
typedef struct _2d80c0fb_reference { _2d80c0fb_reference(unsigned value): value(value) {}; unsigned value; _2d80c0fb_reference(const _2d80c0fb_reference &) = delete; } _2d80c0fb_reference;
void np_redCallSetDynamicStencilReference(_2d80c0fb_address & address, _2d80c0fb_calls & calls, _2d80c0fb_face & face, _2d80c0fb_reference & reference) {
  address.value(calls.value, face.value, reference.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicBlendConstants(_0, _1, _2) _0(_1, _2)
#define _8f3db010_address(value) value
#define _8f3db010_calls(value) value
#define _8f3db010_blendConstants(value) value
#else
typedef struct _8f3db010_address { _8f3db010_address(RedTypeProcedureCallSetDynamicBlendConstants value): value(value) {}; RedTypeProcedureCallSetDynamicBlendConstants value; _8f3db010_address(const _8f3db010_address &) = delete; } _8f3db010_address;
typedef struct _8f3db010_calls { _8f3db010_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _8f3db010_calls(const _8f3db010_calls &) = delete; } _8f3db010_calls;
typedef struct _8f3db010_blendConstants { _8f3db010_blendConstants(float* value): value(value) {}; float* value; _8f3db010_blendConstants(const _8f3db010_blendConstants &) = delete; } _8f3db010_blendConstants;
void np_redCallSetDynamicBlendConstants(_8f3db010_address & address, _8f3db010_calls & calls, _8f3db010_blendConstants & blendConstants) {
  address.value(calls.value, blendConstants.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicViewport redCallSetDynamicViewport
#define _4f3a2630_address(value) value
#define _4f3a2630_calls(value) value
#define _4f3a2630_x(value) value
#define _4f3a2630_y(value) value
#define _4f3a2630_width(value) value
#define _4f3a2630_height(value) value
#define _4f3a2630_depthMin(value) value
#define _4f3a2630_depthMax(value) value
#else
typedef struct _4f3a2630_address { _4f3a2630_address(RedTypeProcedureAddressCallSetDynamicViewport value): value(value) {}; RedTypeProcedureAddressCallSetDynamicViewport value; _4f3a2630_address(const _4f3a2630_address &) = delete; } _4f3a2630_address;
typedef struct _4f3a2630_calls { _4f3a2630_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _4f3a2630_calls(const _4f3a2630_calls &) = delete; } _4f3a2630_calls;
typedef struct _4f3a2630_x { _4f3a2630_x(float value): value(value) {}; float value; _4f3a2630_x(const _4f3a2630_x &) = delete; } _4f3a2630_x;
typedef struct _4f3a2630_y { _4f3a2630_y(float value): value(value) {}; float value; _4f3a2630_y(const _4f3a2630_y &) = delete; } _4f3a2630_y;
typedef struct _4f3a2630_width { _4f3a2630_width(float value): value(value) {}; float value; _4f3a2630_width(const _4f3a2630_width &) = delete; } _4f3a2630_width;
typedef struct _4f3a2630_height { _4f3a2630_height(float value): value(value) {}; float value; _4f3a2630_height(const _4f3a2630_height &) = delete; } _4f3a2630_height;
typedef struct _4f3a2630_depthMin { _4f3a2630_depthMin(float value): value(value) {}; float value; _4f3a2630_depthMin(const _4f3a2630_depthMin &) = delete; } _4f3a2630_depthMin;
typedef struct _4f3a2630_depthMax { _4f3a2630_depthMax(float value): value(value) {}; float value; _4f3a2630_depthMax(const _4f3a2630_depthMax &) = delete; } _4f3a2630_depthMax;
void np_redCallSetDynamicViewport(_4f3a2630_address & address, _4f3a2630_calls & calls, _4f3a2630_x & x, _4f3a2630_y & y, _4f3a2630_width & width, _4f3a2630_height & height, _4f3a2630_depthMin & depthMin, _4f3a2630_depthMax & depthMax) {
  redCallSetDynamicViewport(address.value, calls.value, x.value, y.value, width.value, height.value, depthMin.value, depthMax.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetDynamicScissor redCallSetDynamicScissor
#define _e2155dcb_address(value) value
#define _e2155dcb_calls(value) value
#define _e2155dcb_x(value) value
#define _e2155dcb_y(value) value
#define _e2155dcb_width(value) value
#define _e2155dcb_height(value) value
#else
typedef struct _e2155dcb_address { _e2155dcb_address(RedTypeProcedureAddressCallSetDynamicScissor value): value(value) {}; RedTypeProcedureAddressCallSetDynamicScissor value; _e2155dcb_address(const _e2155dcb_address &) = delete; } _e2155dcb_address;
typedef struct _e2155dcb_calls { _e2155dcb_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _e2155dcb_calls(const _e2155dcb_calls &) = delete; } _e2155dcb_calls;
typedef struct _e2155dcb_x { _e2155dcb_x(int value): value(value) {}; int value; _e2155dcb_x(const _e2155dcb_x &) = delete; } _e2155dcb_x;
typedef struct _e2155dcb_y { _e2155dcb_y(int value): value(value) {}; int value; _e2155dcb_y(const _e2155dcb_y &) = delete; } _e2155dcb_y;
typedef struct _e2155dcb_width { _e2155dcb_width(unsigned value): value(value) {}; unsigned value; _e2155dcb_width(const _e2155dcb_width &) = delete; } _e2155dcb_width;
typedef struct _e2155dcb_height { _e2155dcb_height(unsigned value): value(value) {}; unsigned value; _e2155dcb_height(const _e2155dcb_height &) = delete; } _e2155dcb_height;
void np_redCallSetDynamicScissor(_e2155dcb_address & address, _e2155dcb_calls & calls, _e2155dcb_x & x, _e2155dcb_y & y, _e2155dcb_width & width, _e2155dcb_height & height) {
  redCallSetDynamicScissor(address.value, calls.value, x.value, y.value, width.value, height.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetStructsMemory redCallSetStructsMemory
#define _e5f0da72_address(value) value
#define _e5f0da72_calls(value) value
#define _e5f0da72_structsMemory(value) value
#define _e5f0da72_structsMemorySamplers(value) value
#else
typedef struct _e5f0da72_address { _e5f0da72_address(RedTypeProcedureAddressCallSetStructsMemory value): value(value) {}; RedTypeProcedureAddressCallSetStructsMemory value; _e5f0da72_address(const _e5f0da72_address &) = delete; } _e5f0da72_address;
typedef struct _e5f0da72_calls { _e5f0da72_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _e5f0da72_calls(const _e5f0da72_calls &) = delete; } _e5f0da72_calls;
typedef struct _e5f0da72_structsMemory { _e5f0da72_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _e5f0da72_structsMemory(const _e5f0da72_structsMemory &) = delete; } _e5f0da72_structsMemory;
typedef struct _e5f0da72_structsMemorySamplers { _e5f0da72_structsMemorySamplers(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _e5f0da72_structsMemorySamplers(const _e5f0da72_structsMemorySamplers &) = delete; } _e5f0da72_structsMemorySamplers;
void np_redCallSetStructsMemory(_e5f0da72_address & address, _e5f0da72_calls & calls, _e5f0da72_structsMemory & structsMemory, _e5f0da72_structsMemorySamplers & structsMemorySamplers) {
  redCallSetStructsMemory(address.value, calls.value, structsMemory.value, structsMemorySamplers.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedureParameters redCallSetProcedureParameters
#define _a823169a_address(value) value
#define _a823169a_calls(value) value
#define _a823169a_procedureType(value) value
#define _a823169a_procedureParameters(value) value
#else
typedef struct _a823169a_address { _a823169a_address(RedTypeProcedureAddressCallSetProcedureParameters value): value(value) {}; RedTypeProcedureAddressCallSetProcedureParameters value; _a823169a_address(const _a823169a_address &) = delete; } _a823169a_address;
typedef struct _a823169a_calls { _a823169a_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _a823169a_calls(const _a823169a_calls &) = delete; } _a823169a_calls;
typedef struct _a823169a_procedureType { _a823169a_procedureType(RedProcedureType value): value(value) {}; RedProcedureType value; _a823169a_procedureType(const _a823169a_procedureType &) = delete; } _a823169a_procedureType;
typedef struct _a823169a_procedureParameters { _a823169a_procedureParameters(RedHandleProcedureParameters value): value(value) {}; RedHandleProcedureParameters value; _a823169a_procedureParameters(const _a823169a_procedureParameters &) = delete; } _a823169a_procedureParameters;
void np_redCallSetProcedureParameters(_a823169a_address & address, _a823169a_calls & calls, _a823169a_procedureType & procedureType, _a823169a_procedureParameters & procedureParameters) {
  redCallSetProcedureParameters(address.value, calls.value, procedureType.value, procedureParameters.value);
}
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallSetProcedureOutput redCallSetProcedureOutput
#define _be0adeb6_address(value) value
#define _be0adeb6_calls(value) value
#define _be0adeb6_outputDeclaration(value) value
#define _be0adeb6_output(value) value
#define _be0adeb6_inlineOutput(value) value
#define _be0adeb6_outputWidth(value) value
#define _be0adeb6_outputHeight(value) value
#define _be0adeb6_outputDepthStencilEnable(value) value
#define _be0adeb6_outputColorsCount(value) value
#define _be0adeb6_depthClearValue(value) value
#define _be0adeb6_stencilClearValue(value) value
#define _be0adeb6_colorsClearValuesFloat(value) value
#define _be0adeb6_colorsClearValuesSint(value) value
#define _be0adeb6_colorsClearValuesUint(value) value
#else
typedef struct _be0adeb6_address { _be0adeb6_address(RedTypeProcedureAddressCallSetProcedureOutput value): value(value) {}; RedTypeProcedureAddressCallSetProcedureOutput value; _be0adeb6_address(const _be0adeb6_address &) = delete; } _be0adeb6_address;
typedef struct _be0adeb6_calls { _be0adeb6_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _be0adeb6_calls(const _be0adeb6_calls &) = delete; } _be0adeb6_calls;
typedef struct _be0adeb6_outputDeclaration { _be0adeb6_outputDeclaration(RedHandleOutputDeclaration value): value(value) {}; RedHandleOutputDeclaration value; _be0adeb6_outputDeclaration(const _be0adeb6_outputDeclaration &) = delete; } _be0adeb6_outputDeclaration;
typedef struct _be0adeb6_output { _be0adeb6_output(RedHandleOutput value): value(value) {}; RedHandleOutput value; _be0adeb6_output(const _be0adeb6_output &) = delete; } _be0adeb6_output;
typedef struct _be0adeb6_inlineOutput { _be0adeb6_inlineOutput(RedInlineOutput* value): value(value) {}; RedInlineOutput* value; _be0adeb6_inlineOutput(const _be0adeb6_inlineOutput &) = delete; } _be0adeb6_inlineOutput;
typedef struct _be0adeb6_outputWidth { _be0adeb6_outputWidth(unsigned value): value(value) {}; unsigned value; _be0adeb6_outputWidth(const _be0adeb6_outputWidth &) = delete; } _be0adeb6_outputWidth;
typedef struct _be0adeb6_outputHeight { _be0adeb6_outputHeight(unsigned value): value(value) {}; unsigned value; _be0adeb6_outputHeight(const _be0adeb6_outputHeight &) = delete; } _be0adeb6_outputHeight;
typedef struct _be0adeb6_outputDepthStencilEnable { _be0adeb6_outputDepthStencilEnable(RedBool32 value): value(value) {}; RedBool32 value; _be0adeb6_outputDepthStencilEnable(const _be0adeb6_outputDepthStencilEnable &) = delete; } _be0adeb6_outputDepthStencilEnable;
typedef struct _be0adeb6_outputColorsCount { _be0adeb6_outputColorsCount(unsigned value): value(value) {}; unsigned value; _be0adeb6_outputColorsCount(const _be0adeb6_outputColorsCount &) = delete; } _be0adeb6_outputColorsCount;
typedef struct _be0adeb6_depthClearValue { _be0adeb6_depthClearValue(float value): value(value) {}; float value; _be0adeb6_depthClearValue(const _be0adeb6_depthClearValue &) = delete; } _be0adeb6_depthClearValue;
typedef struct _be0adeb6_stencilClearValue { _be0adeb6_stencilClearValue(unsigned value): value(value) {}; unsigned value; _be0adeb6_stencilClearValue(const _be0adeb6_stencilClearValue &) = delete; } _be0adeb6_stencilClearValue;
typedef struct _be0adeb6_colorsClearValuesFloat { _be0adeb6_colorsClearValuesFloat(RedColorsClearValuesFloat* value): value(value) {}; RedColorsClearValuesFloat* value; _be0adeb6_colorsClearValuesFloat(const _be0adeb6_colorsClearValuesFloat &) = delete; } _be0adeb6_colorsClearValuesFloat;
typedef struct _be0adeb6_colorsClearValuesSint { _be0adeb6_colorsClearValuesSint(RedColorsClearValuesSint* value): value(value) {}; RedColorsClearValuesSint* value; _be0adeb6_colorsClearValuesSint(const _be0adeb6_colorsClearValuesSint &) = delete; } _be0adeb6_colorsClearValuesSint;
typedef struct _be0adeb6_colorsClearValuesUint { _be0adeb6_colorsClearValuesUint(RedColorsClearValuesUint* value): value(value) {}; RedColorsClearValuesUint* value; _be0adeb6_colorsClearValuesUint(const _be0adeb6_colorsClearValuesUint &) = delete; } _be0adeb6_colorsClearValuesUint;
void np_redCallSetProcedureOutput(_be0adeb6_address & address, _be0adeb6_calls & calls, _be0adeb6_outputDeclaration & outputDeclaration, _be0adeb6_output & output, _be0adeb6_inlineOutput & inlineOutput, _be0adeb6_outputWidth & outputWidth, _be0adeb6_outputHeight & outputHeight, _be0adeb6_outputDepthStencilEnable & outputDepthStencilEnable, _be0adeb6_outputColorsCount & outputColorsCount, _be0adeb6_depthClearValue & depthClearValue, _be0adeb6_stencilClearValue & stencilClearValue, _be0adeb6_colorsClearValuesFloat & colorsClearValuesFloat, _be0adeb6_colorsClearValuesSint & colorsClearValuesSint, _be0adeb6_colorsClearValuesUint & colorsClearValuesUint) {
  redCallSetProcedureOutput(address.value, calls.value, outputDeclaration.value, output.value, inlineOutput.value, outputWidth.value, outputHeight.value, outputDepthStencilEnable.value, outputColorsCount.value, depthClearValue.value, stencilClearValue.value, colorsClearValuesFloat.value, colorsClearValuesSint.value, colorsClearValuesUint.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallEndProcedureOutput redCallEndProcedureOutput
#define _0e351483_address(value) value
#define _0e351483_calls(value) value
#else
typedef struct _0e351483_address { _0e351483_address(RedTypeProcedureAddressCallEndProcedureOutput value): value(value) {}; RedTypeProcedureAddressCallEndProcedureOutput value; _0e351483_address(const _0e351483_address &) = delete; } _0e351483_address;
typedef struct _0e351483_calls { _0e351483_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _0e351483_calls(const _0e351483_calls &) = delete; } _0e351483_calls;
void np_redCallEndProcedureOutput(_0e351483_address & address, _0e351483_calls & calls) {
  redCallEndProcedureOutput(address.value, calls.value);
}
#endif
#endif

#ifndef REDGPU_USE_REDGPU_X
#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallUsageAliasOrderBarrier redCallUsageAliasOrderBarrier
#define _94990c3d_address(value) value
#define _94990c3d_calls(value) value
#define _94990c3d_context(value) value
#define _94990c3d_arrayUsagesCount(value) value
#define _94990c3d_arrayUsages(value) value
#define _94990c3d_imageUsagesCount(value) value
#define _94990c3d_imageUsages(value) value
#define _94990c3d_aliasesCount(value) value
#define _94990c3d_aliases(value) value
#define _94990c3d_ordersCount(value) value
#define _94990c3d_orders(value) value
#define _94990c3d_dependencyByRegion(value) value
#else
typedef struct _94990c3d_address { _94990c3d_address(RedTypeProcedureAddressCallUsageAliasOrderBarrier value): value(value) {}; RedTypeProcedureAddressCallUsageAliasOrderBarrier value; _94990c3d_address(const _94990c3d_address &) = delete; } _94990c3d_address;
typedef struct _94990c3d_calls { _94990c3d_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _94990c3d_calls(const _94990c3d_calls &) = delete; } _94990c3d_calls;
typedef struct _94990c3d_context { _94990c3d_context(RedContext value): value(value) {}; RedContext value; _94990c3d_context(const _94990c3d_context &) = delete; } _94990c3d_context;
typedef struct _94990c3d_arrayUsagesCount { _94990c3d_arrayUsagesCount(unsigned value): value(value) {}; unsigned value; _94990c3d_arrayUsagesCount(const _94990c3d_arrayUsagesCount &) = delete; } _94990c3d_arrayUsagesCount;
typedef struct _94990c3d_arrayUsages { _94990c3d_arrayUsages(RedUsageArray* value): value(value) {}; RedUsageArray* value; _94990c3d_arrayUsages(const _94990c3d_arrayUsages &) = delete; } _94990c3d_arrayUsages;
typedef struct _94990c3d_imageUsagesCount { _94990c3d_imageUsagesCount(unsigned value): value(value) {}; unsigned value; _94990c3d_imageUsagesCount(const _94990c3d_imageUsagesCount &) = delete; } _94990c3d_imageUsagesCount;
typedef struct _94990c3d_imageUsages { _94990c3d_imageUsages(RedUsageImage* value): value(value) {}; RedUsageImage* value; _94990c3d_imageUsages(const _94990c3d_imageUsages &) = delete; } _94990c3d_imageUsages;
typedef struct _94990c3d_aliasesCount { _94990c3d_aliasesCount(unsigned value): value(value) {}; unsigned value; _94990c3d_aliasesCount(const _94990c3d_aliasesCount &) = delete; } _94990c3d_aliasesCount;
typedef struct _94990c3d_aliases { _94990c3d_aliases(RedAlias* value): value(value) {}; RedAlias* value; _94990c3d_aliases(const _94990c3d_aliases &) = delete; } _94990c3d_aliases;
typedef struct _94990c3d_ordersCount { _94990c3d_ordersCount(unsigned value): value(value) {}; unsigned value; _94990c3d_ordersCount(const _94990c3d_ordersCount &) = delete; } _94990c3d_ordersCount;
typedef struct _94990c3d_orders { _94990c3d_orders(RedOrder* value): value(value) {}; RedOrder* value; _94990c3d_orders(const _94990c3d_orders &) = delete; } _94990c3d_orders;
typedef struct _94990c3d_dependencyByRegion { _94990c3d_dependencyByRegion(RedBool32 value): value(value) {}; RedBool32 value; _94990c3d_dependencyByRegion(const _94990c3d_dependencyByRegion &) = delete; } _94990c3d_dependencyByRegion;
void np_redCallUsageAliasOrderBarrier(_94990c3d_address & address, _94990c3d_calls & calls, _94990c3d_context & context, _94990c3d_arrayUsagesCount & arrayUsagesCount, _94990c3d_arrayUsages & arrayUsages, _94990c3d_imageUsagesCount & imageUsagesCount, _94990c3d_imageUsages & imageUsages, _94990c3d_aliasesCount & aliasesCount, _94990c3d_aliases & aliases, _94990c3d_ordersCount & ordersCount, _94990c3d_orders & orders, _94990c3d_dependencyByRegion & dependencyByRegion) {
  redCallUsageAliasOrderBarrier(address.value, calls.value, context.value, arrayUsagesCount.value, arrayUsages.value, imageUsagesCount.value, imageUsages.value, aliasesCount.value, aliases.value, ordersCount.value, orders.value, dependencyByRegion.value);
}
#endif
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallMark redCallMark
#define _df7c2ff8_address(value) value
#define _df7c2ff8_calls(value) value
#define _df7c2ff8_mark(value) value
#else
typedef struct _df7c2ff8_address { _df7c2ff8_address(RedTypeProcedureAddressCallMark value): value(value) {}; RedTypeProcedureAddressCallMark value; _df7c2ff8_address(const _df7c2ff8_address &) = delete; } _df7c2ff8_address;
typedef struct _df7c2ff8_calls { _df7c2ff8_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _df7c2ff8_calls(const _df7c2ff8_calls &) = delete; } _df7c2ff8_calls;
typedef struct _df7c2ff8_mark { _df7c2ff8_mark(char* value): value(value) {}; char* value; _df7c2ff8_mark(const _df7c2ff8_mark &) = delete; } _df7c2ff8_mark;
void np_redCallMark(_df7c2ff8_address & address, _df7c2ff8_calls & calls, _df7c2ff8_mark & mark) {
  redCallMark(address.value, calls.value, mark.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallMarkSet redCallMarkSet
#define _601d2b48_address(value) value
#define _601d2b48_calls(value) value
#define _601d2b48_mark(value) value
#else
typedef struct _601d2b48_address { _601d2b48_address(RedTypeProcedureAddressCallMarkSet value): value(value) {}; RedTypeProcedureAddressCallMarkSet value; _601d2b48_address(const _601d2b48_address &) = delete; } _601d2b48_address;
typedef struct _601d2b48_calls { _601d2b48_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _601d2b48_calls(const _601d2b48_calls &) = delete; } _601d2b48_calls;
typedef struct _601d2b48_mark { _601d2b48_mark(char* value): value(value) {}; char* value; _601d2b48_mark(const _601d2b48_mark &) = delete; } _601d2b48_mark;
void np_redCallMarkSet(_601d2b48_address & address, _601d2b48_calls & calls, _601d2b48_mark & mark) {
  redCallMarkSet(address.value, calls.value, mark.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redCallMarkEnd redCallMarkEnd
#define _013a0119_address(value) value
#define _013a0119_calls(value) value
#else
typedef struct _013a0119_address { _013a0119_address(RedTypeProcedureAddressCallMarkEnd value): value(value) {}; RedTypeProcedureAddressCallMarkEnd value; _013a0119_address(const _013a0119_address &) = delete; } _013a0119_address;
typedef struct _013a0119_calls { _013a0119_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _013a0119_calls(const _013a0119_calls &) = delete; } _013a0119_calls;
void np_redCallMarkEnd(_013a0119_address & address, _013a0119_calls & calls) {
  redCallMarkEnd(address.value, calls.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redQueueSubmit redQueueSubmit
#define _dcc70647_context(value) value
#define _dcc70647_gpu(value) value
#define _dcc70647_queue(value) value
#define _dcc70647_timelinesCount(value) value
#define _dcc70647_timelines(value) value
#define _dcc70647_signalCpuSignal(value) value
#define _dcc70647_outStatuses(value) value
#define _dcc70647_optionalFile(value) value
#define _dcc70647_optionalLine(value) value
#define _dcc70647_optionalUserData(value) value
#else
typedef struct _dcc70647_context { _dcc70647_context(RedContext value): value(value) {}; RedContext value; _dcc70647_context(const _dcc70647_context &) = delete; } _dcc70647_context;
typedef struct _dcc70647_gpu { _dcc70647_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _dcc70647_gpu(const _dcc70647_gpu &) = delete; } _dcc70647_gpu;
typedef struct _dcc70647_queue { _dcc70647_queue(RedHandleQueue value): value(value) {}; RedHandleQueue value; _dcc70647_queue(const _dcc70647_queue &) = delete; } _dcc70647_queue;
typedef struct _dcc70647_timelinesCount { _dcc70647_timelinesCount(unsigned value): value(value) {}; unsigned value; _dcc70647_timelinesCount(const _dcc70647_timelinesCount &) = delete; } _dcc70647_timelinesCount;
typedef struct _dcc70647_timelines { _dcc70647_timelines(RedGpuTimeline* value): value(value) {}; RedGpuTimeline* value; _dcc70647_timelines(const _dcc70647_timelines &) = delete; } _dcc70647_timelines;
typedef struct _dcc70647_signalCpuSignal { _dcc70647_signalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _dcc70647_signalCpuSignal(const _dcc70647_signalCpuSignal &) = delete; } _dcc70647_signalCpuSignal;
typedef struct _dcc70647_outStatuses { _dcc70647_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _dcc70647_outStatuses(const _dcc70647_outStatuses &) = delete; } _dcc70647_outStatuses;
typedef struct _dcc70647_optionalFile { _dcc70647_optionalFile(char* value): value(value) {}; char* value; _dcc70647_optionalFile(const _dcc70647_optionalFile &) = delete; } _dcc70647_optionalFile;
typedef struct _dcc70647_optionalLine { _dcc70647_optionalLine(int value): value(value) {}; int value; _dcc70647_optionalLine(const _dcc70647_optionalLine &) = delete; } _dcc70647_optionalLine;
typedef struct _dcc70647_optionalUserData { _dcc70647_optionalUserData(void* value): value(value) {}; void* value; _dcc70647_optionalUserData(const _dcc70647_optionalUserData &) = delete; } _dcc70647_optionalUserData;
void np_redQueueSubmit(_dcc70647_context & context, _dcc70647_gpu & gpu, _dcc70647_queue & queue, _dcc70647_timelinesCount & timelinesCount, _dcc70647_timelines & timelines, _dcc70647_signalCpuSignal & signalCpuSignal, _dcc70647_outStatuses & outStatuses, _dcc70647_optionalFile & optionalFile, _dcc70647_optionalLine & optionalLine, _dcc70647_optionalUserData & optionalUserData) {
  redQueueSubmit(context.value, gpu.value, queue.value, timelinesCount.value, timelines.value, signalCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMark redMark
#define _3fee9347_mark(value) value
#define _3fee9347_optionalFile(value) value
#define _3fee9347_optionalLine(value) value
#define _3fee9347_optionalUserData(value) value
#else
typedef struct _3fee9347_mark { _3fee9347_mark(char* value): value(value) {}; char* value; _3fee9347_mark(const _3fee9347_mark &) = delete; } _3fee9347_mark;
typedef struct _3fee9347_optionalFile { _3fee9347_optionalFile(char* value): value(value) {}; char* value; _3fee9347_optionalFile(const _3fee9347_optionalFile &) = delete; } _3fee9347_optionalFile;
typedef struct _3fee9347_optionalLine { _3fee9347_optionalLine(int value): value(value) {}; int value; _3fee9347_optionalLine(const _3fee9347_optionalLine &) = delete; } _3fee9347_optionalLine;
typedef struct _3fee9347_optionalUserData { _3fee9347_optionalUserData(void* value): value(value) {}; void* value; _3fee9347_optionalUserData(const _3fee9347_optionalUserData &) = delete; } _3fee9347_optionalUserData;
void np_redMark(_3fee9347_mark & mark, _3fee9347_optionalFile & optionalFile, _3fee9347_optionalLine & optionalLine, _3fee9347_optionalUserData & optionalUserData) {
  redMark(mark.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMarkSet redMarkSet
#define _cffa758d_mark(value) value
#define _cffa758d_optionalFile(value) value
#define _cffa758d_optionalLine(value) value
#define _cffa758d_optionalUserData(value) value
#else
typedef struct _cffa758d_mark { _cffa758d_mark(char* value): value(value) {}; char* value; _cffa758d_mark(const _cffa758d_mark &) = delete; } _cffa758d_mark;
typedef struct _cffa758d_optionalFile { _cffa758d_optionalFile(char* value): value(value) {}; char* value; _cffa758d_optionalFile(const _cffa758d_optionalFile &) = delete; } _cffa758d_optionalFile;
typedef struct _cffa758d_optionalLine { _cffa758d_optionalLine(int value): value(value) {}; int value; _cffa758d_optionalLine(const _cffa758d_optionalLine &) = delete; } _cffa758d_optionalLine;
typedef struct _cffa758d_optionalUserData { _cffa758d_optionalUserData(void* value): value(value) {}; void* value; _cffa758d_optionalUserData(const _cffa758d_optionalUserData &) = delete; } _cffa758d_optionalUserData;
void np_redMarkSet(_cffa758d_mark & mark, _cffa758d_optionalFile & optionalFile, _cffa758d_optionalLine & optionalLine, _cffa758d_optionalUserData & optionalUserData) {
  redMarkSet(mark.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redMarkEnd redMarkEnd
#define _62baadd3_optionalFile(value) value
#define _62baadd3_optionalLine(value) value
#define _62baadd3_optionalUserData(value) value
#else
typedef struct _62baadd3_optionalFile { _62baadd3_optionalFile(char* value): value(value) {}; char* value; _62baadd3_optionalFile(const _62baadd3_optionalFile &) = delete; } _62baadd3_optionalFile;
typedef struct _62baadd3_optionalLine { _62baadd3_optionalLine(int value): value(value) {}; int value; _62baadd3_optionalLine(const _62baadd3_optionalLine &) = delete; } _62baadd3_optionalLine;
typedef struct _62baadd3_optionalUserData { _62baadd3_optionalUserData(void* value): value(value) {}; void* value; _62baadd3_optionalUserData(const _62baadd3_optionalUserData &) = delete; } _62baadd3_optionalUserData;
void np_redMarkEnd(_62baadd3_optionalFile & optionalFile, _62baadd3_optionalLine & optionalLine, _62baadd3_optionalUserData & optionalUserData) {
  redMarkEnd(optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

