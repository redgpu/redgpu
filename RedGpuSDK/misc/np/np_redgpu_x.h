#pragma once

#ifndef REDGPU_NP_DECLSPEC
#define REDGPU_NP_DECLSPEC
#endif

#ifndef REDGPU_NP_API
#define REDGPU_NP_API
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXMemoryCallbackBudgetChangeRegister redXMemoryCallbackBudgetChangeRegister
#define _d1c66028_context(value) value
#define _d1c66028_gpu(value) value
#define _d1c66028_eventHandle(value) value
#define _d1c66028_outMemoryCallbackBudgetChange(value) value
#define _d1c66028_outStatuses(value) value
#define _d1c66028_optionalFile(value) value
#define _d1c66028_optionalLine(value) value
#define _d1c66028_optionalUserData(value) value
#else
typedef struct _d1c66028_context { _d1c66028_context(RedContext value): value(value) {}; RedContext value; _d1c66028_context(const _d1c66028_context &) = delete; } _d1c66028_context;
typedef struct _d1c66028_gpu { _d1c66028_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _d1c66028_gpu(const _d1c66028_gpu &) = delete; } _d1c66028_gpu;
typedef struct _d1c66028_eventHandle { _d1c66028_eventHandle(void* value): value(value) {}; void* value; _d1c66028_eventHandle(const _d1c66028_eventHandle &) = delete; } _d1c66028_eventHandle;
typedef struct _d1c66028_outMemoryCallbackBudgetChange { _d1c66028_outMemoryCallbackBudgetChange(RedXHandleMemoryCallbackBudgetChange* value): value(value) {}; RedXHandleMemoryCallbackBudgetChange* value; _d1c66028_outMemoryCallbackBudgetChange(const _d1c66028_outMemoryCallbackBudgetChange &) = delete; } _d1c66028_outMemoryCallbackBudgetChange;
typedef struct _d1c66028_outStatuses { _d1c66028_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _d1c66028_outStatuses(const _d1c66028_outStatuses &) = delete; } _d1c66028_outStatuses;
typedef struct _d1c66028_optionalFile { _d1c66028_optionalFile(char* value): value(value) {}; char* value; _d1c66028_optionalFile(const _d1c66028_optionalFile &) = delete; } _d1c66028_optionalFile;
typedef struct _d1c66028_optionalLine { _d1c66028_optionalLine(int value): value(value) {}; int value; _d1c66028_optionalLine(const _d1c66028_optionalLine &) = delete; } _d1c66028_optionalLine;
typedef struct _d1c66028_optionalUserData { _d1c66028_optionalUserData(void* value): value(value) {}; void* value; _d1c66028_optionalUserData(const _d1c66028_optionalUserData &) = delete; } _d1c66028_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXMemoryCallbackBudgetChangeRegister(_d1c66028_context & context, _d1c66028_gpu & gpu, _d1c66028_eventHandle & eventHandle, _d1c66028_outMemoryCallbackBudgetChange & outMemoryCallbackBudgetChange, _d1c66028_outStatuses & outStatuses, _d1c66028_optionalFile & optionalFile, _d1c66028_optionalLine & optionalLine, _d1c66028_optionalUserData & optionalUserData) {
  redXMemoryCallbackBudgetChangeRegister(context.value, gpu.value, eventHandle.value, outMemoryCallbackBudgetChange.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXMemoryCallbackBudgetChangeUnregister redXMemoryCallbackBudgetChangeUnregister
#define _56a79324_context(value) value
#define _56a79324_gpu(value) value
#define _56a79324_memoryCallbackBudgetChange(value) value
#define _56a79324_optionalFile(value) value
#define _56a79324_optionalLine(value) value
#define _56a79324_optionalUserData(value) value
#else
typedef struct _56a79324_context { _56a79324_context(RedContext value): value(value) {}; RedContext value; _56a79324_context(const _56a79324_context &) = delete; } _56a79324_context;
typedef struct _56a79324_gpu { _56a79324_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _56a79324_gpu(const _56a79324_gpu &) = delete; } _56a79324_gpu;
typedef struct _56a79324_memoryCallbackBudgetChange { _56a79324_memoryCallbackBudgetChange(RedXHandleMemoryCallbackBudgetChange value): value(value) {}; RedXHandleMemoryCallbackBudgetChange value; _56a79324_memoryCallbackBudgetChange(const _56a79324_memoryCallbackBudgetChange &) = delete; } _56a79324_memoryCallbackBudgetChange;
typedef struct _56a79324_optionalFile { _56a79324_optionalFile(char* value): value(value) {}; char* value; _56a79324_optionalFile(const _56a79324_optionalFile &) = delete; } _56a79324_optionalFile;
typedef struct _56a79324_optionalLine { _56a79324_optionalLine(int value): value(value) {}; int value; _56a79324_optionalLine(const _56a79324_optionalLine &) = delete; } _56a79324_optionalLine;
typedef struct _56a79324_optionalUserData { _56a79324_optionalUserData(void* value): value(value) {}; void* value; _56a79324_optionalUserData(const _56a79324_optionalUserData &) = delete; } _56a79324_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXMemoryCallbackBudgetChangeUnregister(_56a79324_context & context, _56a79324_gpu & gpu, _56a79324_memoryCallbackBudgetChange & memoryCallbackBudgetChange, _56a79324_optionalFile & optionalFile, _56a79324_optionalLine & optionalLine, _56a79324_optionalUserData & optionalUserData) {
  redXMemoryCallbackBudgetChangeUnregister(context.value, gpu.value, memoryCallbackBudgetChange.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXMemoryReserve redXMemoryReserve
#define _11967dfc_context(value) value
#define _11967dfc_gpu(value) value
#define _11967dfc_sharedMemory(value) value
#define _11967dfc_bytesCount(value) value
#define _11967dfc_outStatuses(value) value
#define _11967dfc_optionalFile(value) value
#define _11967dfc_optionalLine(value) value
#define _11967dfc_optionalUserData(value) value
#else
typedef struct _11967dfc_context { _11967dfc_context(RedContext value): value(value) {}; RedContext value; _11967dfc_context(const _11967dfc_context &) = delete; } _11967dfc_context;
typedef struct _11967dfc_gpu { _11967dfc_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _11967dfc_gpu(const _11967dfc_gpu &) = delete; } _11967dfc_gpu;
typedef struct _11967dfc_sharedMemory { _11967dfc_sharedMemory(RedBool32 value): value(value) {}; RedBool32 value; _11967dfc_sharedMemory(const _11967dfc_sharedMemory &) = delete; } _11967dfc_sharedMemory;
typedef struct _11967dfc_bytesCount { _11967dfc_bytesCount(uint64_t value): value(value) {}; uint64_t value; _11967dfc_bytesCount(const _11967dfc_bytesCount &) = delete; } _11967dfc_bytesCount;
typedef struct _11967dfc_outStatuses { _11967dfc_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _11967dfc_outStatuses(const _11967dfc_outStatuses &) = delete; } _11967dfc_outStatuses;
typedef struct _11967dfc_optionalFile { _11967dfc_optionalFile(char* value): value(value) {}; char* value; _11967dfc_optionalFile(const _11967dfc_optionalFile &) = delete; } _11967dfc_optionalFile;
typedef struct _11967dfc_optionalLine { _11967dfc_optionalLine(int value): value(value) {}; int value; _11967dfc_optionalLine(const _11967dfc_optionalLine &) = delete; } _11967dfc_optionalLine;
typedef struct _11967dfc_optionalUserData { _11967dfc_optionalUserData(void* value): value(value) {}; void* value; _11967dfc_optionalUserData(const _11967dfc_optionalUserData &) = delete; } _11967dfc_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXMemoryReserve(_11967dfc_context & context, _11967dfc_gpu & gpu, _11967dfc_sharedMemory & sharedMemory, _11967dfc_bytesCount & bytesCount, _11967dfc_outStatuses & outStatuses, _11967dfc_optionalFile & optionalFile, _11967dfc_optionalLine & optionalLine, _11967dfc_optionalUserData & optionalUserData) {
  redXMemoryReserve(context.value, gpu.value, sharedMemory.value, bytesCount.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetMemoryAddressArray redXGetMemoryAddressArray
#define _c3a4a9ac_context(value) value
#define _c3a4a9ac_gpu(value) value
#define _c3a4a9ac_array(value) value
#else
typedef struct _c3a4a9ac_context { _c3a4a9ac_context(RedContext value): value(value) {}; RedContext value; _c3a4a9ac_context(const _c3a4a9ac_context &) = delete; } _c3a4a9ac_context;
typedef struct _c3a4a9ac_gpu { _c3a4a9ac_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _c3a4a9ac_gpu(const _c3a4a9ac_gpu &) = delete; } _c3a4a9ac_gpu;
typedef struct _c3a4a9ac_array { _c3a4a9ac_array(RedHandleArray value): value(value) {}; RedHandleArray value; _c3a4a9ac_array(const _c3a4a9ac_array &) = delete; } _c3a4a9ac_array;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redXGetMemoryAddressArray(_c3a4a9ac_context & context, _c3a4a9ac_gpu & gpu, _c3a4a9ac_array & array) {
  return redXGetMemoryAddressArray(context.value, gpu.value, array.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetMemoryAddressSampler redXGetMemoryAddressSampler
#define _5f0744a2_context(value) value
#define _5f0744a2_gpu(value) value
#define _5f0744a2_sampler(value) value
#else
typedef struct _5f0744a2_context { _5f0744a2_context(RedContext value): value(value) {}; RedContext value; _5f0744a2_context(const _5f0744a2_context &) = delete; } _5f0744a2_context;
typedef struct _5f0744a2_gpu { _5f0744a2_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _5f0744a2_gpu(const _5f0744a2_gpu &) = delete; } _5f0744a2_gpu;
typedef struct _5f0744a2_sampler { _5f0744a2_sampler(RedHandleSampler value): value(value) {}; RedHandleSampler value; _5f0744a2_sampler(const _5f0744a2_sampler &) = delete; } _5f0744a2_sampler;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redXGetMemoryAddressSampler(_5f0744a2_context & context, _5f0744a2_gpu & gpu, _5f0744a2_sampler & sampler) {
  return redXGetMemoryAddressSampler(context.value, gpu.value, sampler.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetMemoryAddressTextureRO redXGetMemoryAddressTextureRO
#define _fd279291_context(value) value
#define _fd279291_gpu(value) value
#define _fd279291_texture(value) value
#else
typedef struct _fd279291_context { _fd279291_context(RedContext value): value(value) {}; RedContext value; _fd279291_context(const _fd279291_context &) = delete; } _fd279291_context;
typedef struct _fd279291_gpu { _fd279291_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _fd279291_gpu(const _fd279291_gpu &) = delete; } _fd279291_gpu;
typedef struct _fd279291_texture { _fd279291_texture(RedHandleTexture value): value(value) {}; RedHandleTexture value; _fd279291_texture(const _fd279291_texture &) = delete; } _fd279291_texture;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redXGetMemoryAddressTextureRO(_fd279291_context & context, _fd279291_gpu & gpu, _fd279291_texture & texture) {
  return redXGetMemoryAddressTextureRO(context.value, gpu.value, texture.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetMemoryAddressTextureRW redXGetMemoryAddressTextureRW
#define _09e23832_context(value) value
#define _09e23832_gpu(value) value
#define _09e23832_texture(value) value
#else
typedef struct _09e23832_context { _09e23832_context(RedContext value): value(value) {}; RedContext value; _09e23832_context(const _09e23832_context &) = delete; } _09e23832_context;
typedef struct _09e23832_gpu { _09e23832_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _09e23832_gpu(const _09e23832_gpu &) = delete; } _09e23832_gpu;
typedef struct _09e23832_texture { _09e23832_texture(RedHandleTexture value): value(value) {}; RedHandleTexture value; _09e23832_texture(const _09e23832_texture &) = delete; } _09e23832_texture;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redXGetMemoryAddressTextureRW(_09e23832_context & context, _09e23832_gpu & gpu, _09e23832_texture & texture) {
  return redXGetMemoryAddressTextureRW(context.value, gpu.value, texture.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetMemoryAddressStructMember redXGetMemoryAddressStructMember
#define _3519c0ae_context(value) value
#define _3519c0ae_gpu(value) value
#define _3519c0ae_structsMemory(value) value
#define _3519c0ae_structMemberIndex(value) value
#else
typedef struct _3519c0ae_context { _3519c0ae_context(RedContext value): value(value) {}; RedContext value; _3519c0ae_context(const _3519c0ae_context &) = delete; } _3519c0ae_context;
typedef struct _3519c0ae_gpu { _3519c0ae_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _3519c0ae_gpu(const _3519c0ae_gpu &) = delete; } _3519c0ae_gpu;
typedef struct _3519c0ae_structsMemory { _3519c0ae_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _3519c0ae_structsMemory(const _3519c0ae_structsMemory &) = delete; } _3519c0ae_structsMemory;
typedef struct _3519c0ae_structMemberIndex { _3519c0ae_structMemberIndex(unsigned value): value(value) {}; unsigned value; _3519c0ae_structMemberIndex(const _3519c0ae_structMemberIndex &) = delete; } _3519c0ae_structMemberIndex;
REDGPU_NP_DECLSPEC uint64_t REDGPU_NP_API np_redXGetMemoryAddressStructMember(_3519c0ae_context & context, _3519c0ae_gpu & gpu, _3519c0ae_structsMemory & structsMemory, _3519c0ae_structMemberIndex & structMemberIndex) {
  return redXGetMemoryAddressStructMember(context.value, gpu.value, structsMemory.value, structMemberIndex.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXStructsMemorySet redXStructsMemorySet
#define _63008855_context(value) value
#define _63008855_gpu(value) value
#define _63008855_copyingSamplers(value) value
#define _63008855_sourceCopiesCount(value) value
#define _63008855_sourceCopiesAddressFirst(value) value
#define _63008855_sourceCopiesAddressCount(value) value
#define _63008855_targetCopiesCount(value) value
#define _63008855_targetCopiesAddressFirst(value) value
#define _63008855_targetCopiesAddressCount(value) value
#define _63008855_outStatuses(value) value
#define _63008855_optionalFile(value) value
#define _63008855_optionalLine(value) value
#define _63008855_optionalUserData(value) value
#else
typedef struct _63008855_context { _63008855_context(RedContext value): value(value) {}; RedContext value; _63008855_context(const _63008855_context &) = delete; } _63008855_context;
typedef struct _63008855_gpu { _63008855_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _63008855_gpu(const _63008855_gpu &) = delete; } _63008855_gpu;
typedef struct _63008855_copyingSamplers { _63008855_copyingSamplers(RedBool32 value): value(value) {}; RedBool32 value; _63008855_copyingSamplers(const _63008855_copyingSamplers &) = delete; } _63008855_copyingSamplers;
typedef struct _63008855_sourceCopiesCount { _63008855_sourceCopiesCount(unsigned value): value(value) {}; unsigned value; _63008855_sourceCopiesCount(const _63008855_sourceCopiesCount &) = delete; } _63008855_sourceCopiesCount;
typedef struct _63008855_sourceCopiesAddressFirst { _63008855_sourceCopiesAddressFirst(RedXMemoryAddress* value): value(value) {}; RedXMemoryAddress* value; _63008855_sourceCopiesAddressFirst(const _63008855_sourceCopiesAddressFirst &) = delete; } _63008855_sourceCopiesAddressFirst;
typedef struct _63008855_sourceCopiesAddressCount { _63008855_sourceCopiesAddressCount(unsigned* value): value(value) {}; unsigned* value; _63008855_sourceCopiesAddressCount(const _63008855_sourceCopiesAddressCount &) = delete; } _63008855_sourceCopiesAddressCount;
typedef struct _63008855_targetCopiesCount { _63008855_targetCopiesCount(unsigned value): value(value) {}; unsigned value; _63008855_targetCopiesCount(const _63008855_targetCopiesCount &) = delete; } _63008855_targetCopiesCount;
typedef struct _63008855_targetCopiesAddressFirst { _63008855_targetCopiesAddressFirst(RedXMemoryAddress* value): value(value) {}; RedXMemoryAddress* value; _63008855_targetCopiesAddressFirst(const _63008855_targetCopiesAddressFirst &) = delete; } _63008855_targetCopiesAddressFirst;
typedef struct _63008855_targetCopiesAddressCount { _63008855_targetCopiesAddressCount(unsigned* value): value(value) {}; unsigned* value; _63008855_targetCopiesAddressCount(const _63008855_targetCopiesAddressCount &) = delete; } _63008855_targetCopiesAddressCount;
typedef struct _63008855_outStatuses { _63008855_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _63008855_outStatuses(const _63008855_outStatuses &) = delete; } _63008855_outStatuses;
typedef struct _63008855_optionalFile { _63008855_optionalFile(char* value): value(value) {}; char* value; _63008855_optionalFile(const _63008855_optionalFile &) = delete; } _63008855_optionalFile;
typedef struct _63008855_optionalLine { _63008855_optionalLine(int value): value(value) {}; int value; _63008855_optionalLine(const _63008855_optionalLine &) = delete; } _63008855_optionalLine;
typedef struct _63008855_optionalUserData { _63008855_optionalUserData(void* value): value(value) {}; void* value; _63008855_optionalUserData(const _63008855_optionalUserData &) = delete; } _63008855_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXStructsMemorySet(_63008855_context & context, _63008855_gpu & gpu, _63008855_copyingSamplers & copyingSamplers, _63008855_sourceCopiesCount & sourceCopiesCount, _63008855_sourceCopiesAddressFirst & sourceCopiesAddressFirst, _63008855_sourceCopiesAddressCount & sourceCopiesAddressCount, _63008855_targetCopiesCount & targetCopiesCount, _63008855_targetCopiesAddressFirst & targetCopiesAddressFirst, _63008855_targetCopiesAddressCount & targetCopiesAddressCount, _63008855_outStatuses & outStatuses, _63008855_optionalFile & optionalFile, _63008855_optionalLine & optionalLine, _63008855_optionalUserData & optionalUserData) {
  redXStructsMemorySet(context.value, gpu.value, copyingSamplers.value, sourceCopiesCount.value, sourceCopiesAddressFirst.value, sourceCopiesAddressCount.value, targetCopiesCount.value, targetCopiesAddressFirst.value, targetCopiesAddressCount.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetHandleStruct redXGetHandleStruct
#define _cc2292cb_context(value) value
#define _cc2292cb_gpu(value) value
#define _cc2292cb_structsMemory(value) value
#define _cc2292cb_structMemberIndex(value) value
#else
typedef struct _cc2292cb_context { _cc2292cb_context(RedContext value): value(value) {}; RedContext value; _cc2292cb_context(const _cc2292cb_context &) = delete; } _cc2292cb_context;
typedef struct _cc2292cb_gpu { _cc2292cb_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _cc2292cb_gpu(const _cc2292cb_gpu &) = delete; } _cc2292cb_gpu;
typedef struct _cc2292cb_structsMemory { _cc2292cb_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _cc2292cb_structsMemory(const _cc2292cb_structsMemory &) = delete; } _cc2292cb_structsMemory;
typedef struct _cc2292cb_structMemberIndex { _cc2292cb_structMemberIndex(unsigned value): value(value) {}; unsigned value; _cc2292cb_structMemberIndex(const _cc2292cb_structMemberIndex &) = delete; } _cc2292cb_structMemberIndex;
REDGPU_NP_DECLSPEC RedHandleStruct REDGPU_NP_API np_redXGetHandleStruct(_cc2292cb_context & context, _cc2292cb_gpu & gpu, _cc2292cb_structsMemory & structsMemory, _cc2292cb_structMemberIndex & structMemberIndex) {
  return redXGetHandleStruct(context.value, gpu.value, structsMemory.value, structMemberIndex.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCreateQueue redXCreateQueue
#define _cc3b86d6_context(value) value
#define _cc3b86d6_gpu(value) value
#define _cc3b86d6_handleName(value) value
#define _cc3b86d6_canCopy(value) value
#define _cc3b86d6_canDraw(value) value
#define _cc3b86d6_canCompute(value) value
#define _cc3b86d6_priority(value) value
#define _cc3b86d6_disableGpuTimeout(value) value
#define _cc3b86d6_outStatuses(value) value
#define _cc3b86d6_optionalFile(value) value
#define _cc3b86d6_optionalLine(value) value
#define _cc3b86d6_optionalUserData(value) value
#else
typedef struct _cc3b86d6_context { _cc3b86d6_context(RedContext value): value(value) {}; RedContext value; _cc3b86d6_context(const _cc3b86d6_context &) = delete; } _cc3b86d6_context;
typedef struct _cc3b86d6_gpu { _cc3b86d6_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _cc3b86d6_gpu(const _cc3b86d6_gpu &) = delete; } _cc3b86d6_gpu;
typedef struct _cc3b86d6_handleName { _cc3b86d6_handleName(char* value): value(value) {}; char* value; _cc3b86d6_handleName(const _cc3b86d6_handleName &) = delete; } _cc3b86d6_handleName;
typedef struct _cc3b86d6_canCopy { _cc3b86d6_canCopy(RedBool32 value): value(value) {}; RedBool32 value; _cc3b86d6_canCopy(const _cc3b86d6_canCopy &) = delete; } _cc3b86d6_canCopy;
typedef struct _cc3b86d6_canDraw { _cc3b86d6_canDraw(RedBool32 value): value(value) {}; RedBool32 value; _cc3b86d6_canDraw(const _cc3b86d6_canDraw &) = delete; } _cc3b86d6_canDraw;
typedef struct _cc3b86d6_canCompute { _cc3b86d6_canCompute(RedBool32 value): value(value) {}; RedBool32 value; _cc3b86d6_canCompute(const _cc3b86d6_canCompute &) = delete; } _cc3b86d6_canCompute;
typedef struct _cc3b86d6_priority { _cc3b86d6_priority(unsigned value): value(value) {}; unsigned value; _cc3b86d6_priority(const _cc3b86d6_priority &) = delete; } _cc3b86d6_priority;
typedef struct _cc3b86d6_disableGpuTimeout { _cc3b86d6_disableGpuTimeout(RedBool32 value): value(value) {}; RedBool32 value; _cc3b86d6_disableGpuTimeout(const _cc3b86d6_disableGpuTimeout &) = delete; } _cc3b86d6_disableGpuTimeout;
typedef struct _cc3b86d6_outStatuses { _cc3b86d6_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _cc3b86d6_outStatuses(const _cc3b86d6_outStatuses &) = delete; } _cc3b86d6_outStatuses;
typedef struct _cc3b86d6_optionalFile { _cc3b86d6_optionalFile(char* value): value(value) {}; char* value; _cc3b86d6_optionalFile(const _cc3b86d6_optionalFile &) = delete; } _cc3b86d6_optionalFile;
typedef struct _cc3b86d6_optionalLine { _cc3b86d6_optionalLine(int value): value(value) {}; int value; _cc3b86d6_optionalLine(const _cc3b86d6_optionalLine &) = delete; } _cc3b86d6_optionalLine;
typedef struct _cc3b86d6_optionalUserData { _cc3b86d6_optionalUserData(void* value): value(value) {}; void* value; _cc3b86d6_optionalUserData(const _cc3b86d6_optionalUserData &) = delete; } _cc3b86d6_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCreateQueue(_cc3b86d6_context & context, _cc3b86d6_gpu & gpu, _cc3b86d6_handleName & handleName, _cc3b86d6_canCopy & canCopy, _cc3b86d6_canDraw & canDraw, _cc3b86d6_canCompute & canCompute, _cc3b86d6_priority & priority, _cc3b86d6_disableGpuTimeout & disableGpuTimeout, _cc3b86d6_outStatuses & outStatuses, _cc3b86d6_optionalFile & optionalFile, _cc3b86d6_optionalLine & optionalLine, _cc3b86d6_optionalUserData & optionalUserData) {
  redXCreateQueue(context.value, gpu.value, handleName.value, canCopy.value, canDraw.value, canCompute.value, priority.value, disableGpuTimeout.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCreateImage redXCreateImage
#define _033c3ca1_context(value) value
#define _033c3ca1_gpu(value) value
#define _033c3ca1_handleName(value) value
#define _033c3ca1_dimensions(value) value
#define _033c3ca1_format(value) value
#define _033c3ca1_xformat(value) value
#define _033c3ca1_width(value) value
#define _033c3ca1_height(value) value
#define _033c3ca1_depth(value) value
#define _033c3ca1_levelsCount(value) value
#define _033c3ca1_layersCount(value) value
#define _033c3ca1_multisampleCount(value) value
#define _033c3ca1_restrictToAccess(value) value
#define _033c3ca1_initialAccess(value) value
#define _033c3ca1_initialQueueFamilyIndex(value) value
#define _033c3ca1_dedicate(value) value
#define _033c3ca1_outImage(value) value
#define _033c3ca1_outStatuses(value) value
#define _033c3ca1_optionalFile(value) value
#define _033c3ca1_optionalLine(value) value
#define _033c3ca1_optionalUserData(value) value
#else
typedef struct _033c3ca1_context { _033c3ca1_context(RedContext value): value(value) {}; RedContext value; _033c3ca1_context(const _033c3ca1_context &) = delete; } _033c3ca1_context;
typedef struct _033c3ca1_gpu { _033c3ca1_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _033c3ca1_gpu(const _033c3ca1_gpu &) = delete; } _033c3ca1_gpu;
typedef struct _033c3ca1_handleName { _033c3ca1_handleName(char* value): value(value) {}; char* value; _033c3ca1_handleName(const _033c3ca1_handleName &) = delete; } _033c3ca1_handleName;
typedef struct _033c3ca1_dimensions { _033c3ca1_dimensions(RedImageDimensions value): value(value) {}; RedImageDimensions value; _033c3ca1_dimensions(const _033c3ca1_dimensions &) = delete; } _033c3ca1_dimensions;
typedef struct _033c3ca1_format { _033c3ca1_format(RedFormat value): value(value) {}; RedFormat value; _033c3ca1_format(const _033c3ca1_format &) = delete; } _033c3ca1_format;
typedef struct _033c3ca1_xformat { _033c3ca1_xformat(unsigned value): value(value) {}; unsigned value; _033c3ca1_xformat(const _033c3ca1_xformat &) = delete; } _033c3ca1_xformat;
typedef struct _033c3ca1_width { _033c3ca1_width(unsigned value): value(value) {}; unsigned value; _033c3ca1_width(const _033c3ca1_width &) = delete; } _033c3ca1_width;
typedef struct _033c3ca1_height { _033c3ca1_height(unsigned value): value(value) {}; unsigned value; _033c3ca1_height(const _033c3ca1_height &) = delete; } _033c3ca1_height;
typedef struct _033c3ca1_depth { _033c3ca1_depth(unsigned value): value(value) {}; unsigned value; _033c3ca1_depth(const _033c3ca1_depth &) = delete; } _033c3ca1_depth;
typedef struct _033c3ca1_levelsCount { _033c3ca1_levelsCount(unsigned value): value(value) {}; unsigned value; _033c3ca1_levelsCount(const _033c3ca1_levelsCount &) = delete; } _033c3ca1_levelsCount;
typedef struct _033c3ca1_layersCount { _033c3ca1_layersCount(unsigned value): value(value) {}; unsigned value; _033c3ca1_layersCount(const _033c3ca1_layersCount &) = delete; } _033c3ca1_layersCount;
typedef struct _033c3ca1_multisampleCount { _033c3ca1_multisampleCount(RedMultisampleCountBitflag value): value(value) {}; RedMultisampleCountBitflag value; _033c3ca1_multisampleCount(const _033c3ca1_multisampleCount &) = delete; } _033c3ca1_multisampleCount;
typedef struct _033c3ca1_restrictToAccess { _033c3ca1_restrictToAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _033c3ca1_restrictToAccess(const _033c3ca1_restrictToAccess &) = delete; } _033c3ca1_restrictToAccess;
typedef struct _033c3ca1_initialAccess { _033c3ca1_initialAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _033c3ca1_initialAccess(const _033c3ca1_initialAccess &) = delete; } _033c3ca1_initialAccess;
typedef struct _033c3ca1_initialQueueFamilyIndex { _033c3ca1_initialQueueFamilyIndex(unsigned value): value(value) {}; unsigned value; _033c3ca1_initialQueueFamilyIndex(const _033c3ca1_initialQueueFamilyIndex &) = delete; } _033c3ca1_initialQueueFamilyIndex;
typedef struct _033c3ca1_dedicate { _033c3ca1_dedicate(RedBool32 value): value(value) {}; RedBool32 value; _033c3ca1_dedicate(const _033c3ca1_dedicate &) = delete; } _033c3ca1_dedicate;
typedef struct _033c3ca1_outImage { _033c3ca1_outImage(RedImage* value): value(value) {}; RedImage* value; _033c3ca1_outImage(const _033c3ca1_outImage &) = delete; } _033c3ca1_outImage;
typedef struct _033c3ca1_outStatuses { _033c3ca1_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _033c3ca1_outStatuses(const _033c3ca1_outStatuses &) = delete; } _033c3ca1_outStatuses;
typedef struct _033c3ca1_optionalFile { _033c3ca1_optionalFile(char* value): value(value) {}; char* value; _033c3ca1_optionalFile(const _033c3ca1_optionalFile &) = delete; } _033c3ca1_optionalFile;
typedef struct _033c3ca1_optionalLine { _033c3ca1_optionalLine(int value): value(value) {}; int value; _033c3ca1_optionalLine(const _033c3ca1_optionalLine &) = delete; } _033c3ca1_optionalLine;
typedef struct _033c3ca1_optionalUserData { _033c3ca1_optionalUserData(void* value): value(value) {}; void* value; _033c3ca1_optionalUserData(const _033c3ca1_optionalUserData &) = delete; } _033c3ca1_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCreateImage(_033c3ca1_context & context, _033c3ca1_gpu & gpu, _033c3ca1_handleName & handleName, _033c3ca1_dimensions & dimensions, _033c3ca1_format & format, _033c3ca1_xformat & xformat, _033c3ca1_width & width, _033c3ca1_height & height, _033c3ca1_depth & depth, _033c3ca1_levelsCount & levelsCount, _033c3ca1_layersCount & layersCount, _033c3ca1_multisampleCount & multisampleCount, _033c3ca1_restrictToAccess & restrictToAccess, _033c3ca1_initialAccess & initialAccess, _033c3ca1_initialQueueFamilyIndex & initialQueueFamilyIndex, _033c3ca1_dedicate & dedicate, _033c3ca1_outImage & outImage, _033c3ca1_outStatuses & outStatuses, _033c3ca1_optionalFile & optionalFile, _033c3ca1_optionalLine & optionalLine, _033c3ca1_optionalUserData & optionalUserData) {
  redXCreateImage(context.value, gpu.value, handleName.value, dimensions.value, format.value, xformat.value, width.value, height.value, depth.value, levelsCount.value, layersCount.value, multisampleCount.value, restrictToAccess.value, initialAccess.value, initialQueueFamilyIndex.value, dedicate.value, outImage.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCreateTexture redXCreateTexture
#define _855b929b_context(value) value
#define _855b929b_gpu(value) value
#define _855b929b_handleName(value) value
#define _855b929b_image(value) value
#define _855b929b_parts(value) value
#define _855b929b_dimensions(value) value
#define _855b929b_format(value) value
#define _855b929b_xformat(value) value
#define _855b929b_levelsFirst(value) value
#define _855b929b_levelsCount(value) value
#define _855b929b_layersFirst(value) value
#define _855b929b_layersCount(value) value
#define _855b929b_restrictToAccess(value) value
#define _855b929b_outTexture(value) value
#define _855b929b_outStatuses(value) value
#define _855b929b_optionalFile(value) value
#define _855b929b_optionalLine(value) value
#define _855b929b_optionalUserData(value) value
#else
typedef struct _855b929b_context { _855b929b_context(RedContext value): value(value) {}; RedContext value; _855b929b_context(const _855b929b_context &) = delete; } _855b929b_context;
typedef struct _855b929b_gpu { _855b929b_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _855b929b_gpu(const _855b929b_gpu &) = delete; } _855b929b_gpu;
typedef struct _855b929b_handleName { _855b929b_handleName(char* value): value(value) {}; char* value; _855b929b_handleName(const _855b929b_handleName &) = delete; } _855b929b_handleName;
typedef struct _855b929b_image { _855b929b_image(RedHandleImage value): value(value) {}; RedHandleImage value; _855b929b_image(const _855b929b_image &) = delete; } _855b929b_image;
typedef struct _855b929b_parts { _855b929b_parts(RedImagePartBitflags value): value(value) {}; RedImagePartBitflags value; _855b929b_parts(const _855b929b_parts &) = delete; } _855b929b_parts;
typedef struct _855b929b_dimensions { _855b929b_dimensions(RedTextureDimensions value): value(value) {}; RedTextureDimensions value; _855b929b_dimensions(const _855b929b_dimensions &) = delete; } _855b929b_dimensions;
typedef struct _855b929b_format { _855b929b_format(RedFormat value): value(value) {}; RedFormat value; _855b929b_format(const _855b929b_format &) = delete; } _855b929b_format;
typedef struct _855b929b_xformat { _855b929b_xformat(unsigned value): value(value) {}; unsigned value; _855b929b_xformat(const _855b929b_xformat &) = delete; } _855b929b_xformat;
typedef struct _855b929b_levelsFirst { _855b929b_levelsFirst(unsigned value): value(value) {}; unsigned value; _855b929b_levelsFirst(const _855b929b_levelsFirst &) = delete; } _855b929b_levelsFirst;
typedef struct _855b929b_levelsCount { _855b929b_levelsCount(unsigned value): value(value) {}; unsigned value; _855b929b_levelsCount(const _855b929b_levelsCount &) = delete; } _855b929b_levelsCount;
typedef struct _855b929b_layersFirst { _855b929b_layersFirst(unsigned value): value(value) {}; unsigned value; _855b929b_layersFirst(const _855b929b_layersFirst &) = delete; } _855b929b_layersFirst;
typedef struct _855b929b_layersCount { _855b929b_layersCount(unsigned value): value(value) {}; unsigned value; _855b929b_layersCount(const _855b929b_layersCount &) = delete; } _855b929b_layersCount;
typedef struct _855b929b_restrictToAccess { _855b929b_restrictToAccess(RedAccessBitflags value): value(value) {}; RedAccessBitflags value; _855b929b_restrictToAccess(const _855b929b_restrictToAccess &) = delete; } _855b929b_restrictToAccess;
typedef struct _855b929b_outTexture { _855b929b_outTexture(RedHandleTexture* value): value(value) {}; RedHandleTexture* value; _855b929b_outTexture(const _855b929b_outTexture &) = delete; } _855b929b_outTexture;
typedef struct _855b929b_outStatuses { _855b929b_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _855b929b_outStatuses(const _855b929b_outStatuses &) = delete; } _855b929b_outStatuses;
typedef struct _855b929b_optionalFile { _855b929b_optionalFile(char* value): value(value) {}; char* value; _855b929b_optionalFile(const _855b929b_optionalFile &) = delete; } _855b929b_optionalFile;
typedef struct _855b929b_optionalLine { _855b929b_optionalLine(int value): value(value) {}; int value; _855b929b_optionalLine(const _855b929b_optionalLine &) = delete; } _855b929b_optionalLine;
typedef struct _855b929b_optionalUserData { _855b929b_optionalUserData(void* value): value(value) {}; void* value; _855b929b_optionalUserData(const _855b929b_optionalUserData &) = delete; } _855b929b_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCreateTexture(_855b929b_context & context, _855b929b_gpu & gpu, _855b929b_handleName & handleName, _855b929b_image & image, _855b929b_parts & parts, _855b929b_dimensions & dimensions, _855b929b_format & format, _855b929b_xformat & xformat, _855b929b_levelsFirst & levelsFirst, _855b929b_levelsCount & levelsCount, _855b929b_layersFirst & layersFirst, _855b929b_layersCount & layersCount, _855b929b_restrictToAccess & restrictToAccess, _855b929b_outTexture & outTexture, _855b929b_outStatuses & outStatuses, _855b929b_optionalFile & optionalFile, _855b929b_optionalLine & optionalLine, _855b929b_optionalUserData & optionalUserData) {
  redXCreateTexture(context.value, gpu.value, handleName.value, image.value, parts.value, dimensions.value, format.value, xformat.value, levelsFirst.value, levelsCount.value, layersFirst.value, layersCount.value, restrictToAccess.value, outTexture.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetHandlePageableMemory redXGetHandlePageableMemory
#define _4b10fc38_context(value) value
#define _4b10fc38_gpu(value) value
#define _4b10fc38_memory(value) value
#else
typedef struct _4b10fc38_context { _4b10fc38_context(RedContext value): value(value) {}; RedContext value; _4b10fc38_context(const _4b10fc38_context &) = delete; } _4b10fc38_context;
typedef struct _4b10fc38_gpu { _4b10fc38_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _4b10fc38_gpu(const _4b10fc38_gpu &) = delete; } _4b10fc38_gpu;
typedef struct _4b10fc38_memory { _4b10fc38_memory(RedHandleMemory value): value(value) {}; RedHandleMemory value; _4b10fc38_memory(const _4b10fc38_memory &) = delete; } _4b10fc38_memory;
REDGPU_NP_DECLSPEC RedXHandlePageable REDGPU_NP_API np_redXGetHandlePageableMemory(_4b10fc38_context & context, _4b10fc38_gpu & gpu, _4b10fc38_memory & memory) {
  return redXGetHandlePageableMemory(context.value, gpu.value, memory.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetHandlePageableStructsMemory redXGetHandlePageableStructsMemory
#define _d029ff5f_context(value) value
#define _d029ff5f_gpu(value) value
#define _d029ff5f_structsMemory(value) value
#else
typedef struct _d029ff5f_context { _d029ff5f_context(RedContext value): value(value) {}; RedContext value; _d029ff5f_context(const _d029ff5f_context &) = delete; } _d029ff5f_context;
typedef struct _d029ff5f_gpu { _d029ff5f_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _d029ff5f_gpu(const _d029ff5f_gpu &) = delete; } _d029ff5f_gpu;
typedef struct _d029ff5f_structsMemory { _d029ff5f_structsMemory(RedHandleStructsMemory value): value(value) {}; RedHandleStructsMemory value; _d029ff5f_structsMemory(const _d029ff5f_structsMemory &) = delete; } _d029ff5f_structsMemory;
REDGPU_NP_DECLSPEC RedXHandlePageable REDGPU_NP_API np_redXGetHandlePageableStructsMemory(_d029ff5f_context & context, _d029ff5f_gpu & gpu, _d029ff5f_structsMemory & structsMemory) {
  return redXGetHandlePageableStructsMemory(context.value, gpu.value, structsMemory.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXPageableSetResidencyPriority redXPageableSetResidencyPriority
#define _c596452b_context(value) value
#define _c596452b_gpu(value) value
#define _c596452b_pageablesCount(value) value
#define _c596452b_pageables(value) value
#define _c596452b_pageablesResidencyPriority(value) value
#define _c596452b_outStatuses(value) value
#define _c596452b_optionalFile(value) value
#define _c596452b_optionalLine(value) value
#define _c596452b_optionalUserData(value) value
#else
typedef struct _c596452b_context { _c596452b_context(RedContext value): value(value) {}; RedContext value; _c596452b_context(const _c596452b_context &) = delete; } _c596452b_context;
typedef struct _c596452b_gpu { _c596452b_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _c596452b_gpu(const _c596452b_gpu &) = delete; } _c596452b_gpu;
typedef struct _c596452b_pageablesCount { _c596452b_pageablesCount(unsigned value): value(value) {}; unsigned value; _c596452b_pageablesCount(const _c596452b_pageablesCount &) = delete; } _c596452b_pageablesCount;
typedef struct _c596452b_pageables { _c596452b_pageables(RedXHandlePageable* value): value(value) {}; RedXHandlePageable* value; _c596452b_pageables(const _c596452b_pageables &) = delete; } _c596452b_pageables;
typedef struct _c596452b_pageablesResidencyPriority { _c596452b_pageablesResidencyPriority(RedXPageableResidencyPriorityBitflags* value): value(value) {}; RedXPageableResidencyPriorityBitflags* value; _c596452b_pageablesResidencyPriority(const _c596452b_pageablesResidencyPriority &) = delete; } _c596452b_pageablesResidencyPriority;
typedef struct _c596452b_outStatuses { _c596452b_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _c596452b_outStatuses(const _c596452b_outStatuses &) = delete; } _c596452b_outStatuses;
typedef struct _c596452b_optionalFile { _c596452b_optionalFile(char* value): value(value) {}; char* value; _c596452b_optionalFile(const _c596452b_optionalFile &) = delete; } _c596452b_optionalFile;
typedef struct _c596452b_optionalLine { _c596452b_optionalLine(int value): value(value) {}; int value; _c596452b_optionalLine(const _c596452b_optionalLine &) = delete; } _c596452b_optionalLine;
typedef struct _c596452b_optionalUserData { _c596452b_optionalUserData(void* value): value(value) {}; void* value; _c596452b_optionalUserData(const _c596452b_optionalUserData &) = delete; } _c596452b_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXPageableSetResidencyPriority(_c596452b_context & context, _c596452b_gpu & gpu, _c596452b_pageablesCount & pageablesCount, _c596452b_pageables & pageables, _c596452b_pageablesResidencyPriority & pageablesResidencyPriority, _c596452b_outStatuses & outStatuses, _c596452b_optionalFile & optionalFile, _c596452b_optionalLine & optionalLine, _c596452b_optionalUserData & optionalUserData) {
  redXPageableSetResidencyPriority(context.value, gpu.value, pageablesCount.value, pageables.value, pageablesResidencyPriority.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXPageableMakeResident redXPageableMakeResident
#define _1e8e0dfa_context(value) value
#define _1e8e0dfa_gpu(value) value
#define _1e8e0dfa_pageablesCount(value) value
#define _1e8e0dfa_pageables(value) value
#define _1e8e0dfa_denyOverbudget(value) value
#define _1e8e0dfa_signalCpuSignal(value) value
#define _1e8e0dfa_outStatuses(value) value
#define _1e8e0dfa_optionalFile(value) value
#define _1e8e0dfa_optionalLine(value) value
#define _1e8e0dfa_optionalUserData(value) value
#else
typedef struct _1e8e0dfa_context { _1e8e0dfa_context(RedContext value): value(value) {}; RedContext value; _1e8e0dfa_context(const _1e8e0dfa_context &) = delete; } _1e8e0dfa_context;
typedef struct _1e8e0dfa_gpu { _1e8e0dfa_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _1e8e0dfa_gpu(const _1e8e0dfa_gpu &) = delete; } _1e8e0dfa_gpu;
typedef struct _1e8e0dfa_pageablesCount { _1e8e0dfa_pageablesCount(unsigned value): value(value) {}; unsigned value; _1e8e0dfa_pageablesCount(const _1e8e0dfa_pageablesCount &) = delete; } _1e8e0dfa_pageablesCount;
typedef struct _1e8e0dfa_pageables { _1e8e0dfa_pageables(RedXHandlePageable* value): value(value) {}; RedXHandlePageable* value; _1e8e0dfa_pageables(const _1e8e0dfa_pageables &) = delete; } _1e8e0dfa_pageables;
typedef struct _1e8e0dfa_denyOverbudget { _1e8e0dfa_denyOverbudget(RedBool32 value): value(value) {}; RedBool32 value; _1e8e0dfa_denyOverbudget(const _1e8e0dfa_denyOverbudget &) = delete; } _1e8e0dfa_denyOverbudget;
typedef struct _1e8e0dfa_signalCpuSignal { _1e8e0dfa_signalCpuSignal(RedHandleCpuSignal value): value(value) {}; RedHandleCpuSignal value; _1e8e0dfa_signalCpuSignal(const _1e8e0dfa_signalCpuSignal &) = delete; } _1e8e0dfa_signalCpuSignal;
typedef struct _1e8e0dfa_outStatuses { _1e8e0dfa_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _1e8e0dfa_outStatuses(const _1e8e0dfa_outStatuses &) = delete; } _1e8e0dfa_outStatuses;
typedef struct _1e8e0dfa_optionalFile { _1e8e0dfa_optionalFile(char* value): value(value) {}; char* value; _1e8e0dfa_optionalFile(const _1e8e0dfa_optionalFile &) = delete; } _1e8e0dfa_optionalFile;
typedef struct _1e8e0dfa_optionalLine { _1e8e0dfa_optionalLine(int value): value(value) {}; int value; _1e8e0dfa_optionalLine(const _1e8e0dfa_optionalLine &) = delete; } _1e8e0dfa_optionalLine;
typedef struct _1e8e0dfa_optionalUserData { _1e8e0dfa_optionalUserData(void* value): value(value) {}; void* value; _1e8e0dfa_optionalUserData(const _1e8e0dfa_optionalUserData &) = delete; } _1e8e0dfa_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXPageableMakeResident(_1e8e0dfa_context & context, _1e8e0dfa_gpu & gpu, _1e8e0dfa_pageablesCount & pageablesCount, _1e8e0dfa_pageables & pageables, _1e8e0dfa_denyOverbudget & denyOverbudget, _1e8e0dfa_signalCpuSignal & signalCpuSignal, _1e8e0dfa_outStatuses & outStatuses, _1e8e0dfa_optionalFile & optionalFile, _1e8e0dfa_optionalLine & optionalLine, _1e8e0dfa_optionalUserData & optionalUserData) {
  redXPageableMakeResident(context.value, gpu.value, pageablesCount.value, pageables.value, denyOverbudget.value, signalCpuSignal.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXPageableEvict redXPageableEvict
#define _e2796761_context(value) value
#define _e2796761_gpu(value) value
#define _e2796761_pageablesCount(value) value
#define _e2796761_pageables(value) value
#define _e2796761_outStatuses(value) value
#define _e2796761_optionalFile(value) value
#define _e2796761_optionalLine(value) value
#define _e2796761_optionalUserData(value) value
#else
typedef struct _e2796761_context { _e2796761_context(RedContext value): value(value) {}; RedContext value; _e2796761_context(const _e2796761_context &) = delete; } _e2796761_context;
typedef struct _e2796761_gpu { _e2796761_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _e2796761_gpu(const _e2796761_gpu &) = delete; } _e2796761_gpu;
typedef struct _e2796761_pageablesCount { _e2796761_pageablesCount(unsigned value): value(value) {}; unsigned value; _e2796761_pageablesCount(const _e2796761_pageablesCount &) = delete; } _e2796761_pageablesCount;
typedef struct _e2796761_pageables { _e2796761_pageables(RedXHandlePageable* value): value(value) {}; RedXHandlePageable* value; _e2796761_pageables(const _e2796761_pageables &) = delete; } _e2796761_pageables;
typedef struct _e2796761_outStatuses { _e2796761_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _e2796761_outStatuses(const _e2796761_outStatuses &) = delete; } _e2796761_outStatuses;
typedef struct _e2796761_optionalFile { _e2796761_optionalFile(char* value): value(value) {}; char* value; _e2796761_optionalFile(const _e2796761_optionalFile &) = delete; } _e2796761_optionalFile;
typedef struct _e2796761_optionalLine { _e2796761_optionalLine(int value): value(value) {}; int value; _e2796761_optionalLine(const _e2796761_optionalLine &) = delete; } _e2796761_optionalLine;
typedef struct _e2796761_optionalUserData { _e2796761_optionalUserData(void* value): value(value) {}; void* value; _e2796761_optionalUserData(const _e2796761_optionalUserData &) = delete; } _e2796761_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXPageableEvict(_e2796761_context & context, _e2796761_gpu & gpu, _e2796761_pageablesCount & pageablesCount, _e2796761_pageables & pageables, _e2796761_outStatuses & outStatuses, _e2796761_optionalFile & optionalFile, _e2796761_optionalLine & optionalLine, _e2796761_optionalUserData & optionalUserData) {
  redXPageableEvict(context.value, gpu.value, pageablesCount.value, pageables.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetHandleResourceArray redXGetHandleResourceArray
#define _af230c46_context(value) value
#define _af230c46_gpu(value) value
#define _af230c46_array(value) value
#else
typedef struct _af230c46_context { _af230c46_context(RedContext value): value(value) {}; RedContext value; _af230c46_context(const _af230c46_context &) = delete; } _af230c46_context;
typedef struct _af230c46_gpu { _af230c46_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _af230c46_gpu(const _af230c46_gpu &) = delete; } _af230c46_gpu;
typedef struct _af230c46_array { _af230c46_array(RedHandleArray value): value(value) {}; RedHandleArray value; _af230c46_array(const _af230c46_array &) = delete; } _af230c46_array;
REDGPU_NP_DECLSPEC RedXHandleResource REDGPU_NP_API np_redXGetHandleResourceArray(_af230c46_context & context, _af230c46_gpu & gpu, _af230c46_array & array) {
  return redXGetHandleResourceArray(context.value, gpu.value, array.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXGetHandleResourceImage redXGetHandleResourceImage
#define _f49f94b5_context(value) value
#define _f49f94b5_gpu(value) value
#define _f49f94b5_image(value) value
#else
typedef struct _f49f94b5_context { _f49f94b5_context(RedContext value): value(value) {}; RedContext value; _f49f94b5_context(const _f49f94b5_context &) = delete; } _f49f94b5_context;
typedef struct _f49f94b5_gpu { _f49f94b5_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _f49f94b5_gpu(const _f49f94b5_gpu &) = delete; } _f49f94b5_gpu;
typedef struct _f49f94b5_image { _f49f94b5_image(RedHandleImage value): value(value) {}; RedHandleImage value; _f49f94b5_image(const _f49f94b5_image &) = delete; } _f49f94b5_image;
REDGPU_NP_DECLSPEC RedXHandleResource REDGPU_NP_API np_redXGetHandleResourceImage(_f49f94b5_context & context, _f49f94b5_gpu & gpu, _f49f94b5_image & image) {
  return redXGetHandleResourceImage(context.value, gpu.value, image.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCallSetProcedureOutput redXCallSetProcedureOutput
#define _c5f24e0c_calls(value) value
#define _c5f24e0c_depthStencil(value) value
#define _c5f24e0c_colorsCount(value) value
#define _c5f24e0c_colors(value) value
#define _c5f24e0c_depthSetProcedureOutputOp(value) value
#define _c5f24e0c_stencilSetProcedureOutputOp(value) value
#define _c5f24e0c_colorsSetProcedureOutputOp(value) value
#define _c5f24e0c_depthClearValue(value) value
#define _c5f24e0c_stencilClearValue(value) value
#define _c5f24e0c_colorsClearValuesFloat(value) value
#else
typedef struct _c5f24e0c_calls { _c5f24e0c_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _c5f24e0c_calls(const _c5f24e0c_calls &) = delete; } _c5f24e0c_calls;
typedef struct _c5f24e0c_depthStencil { _c5f24e0c_depthStencil(RedHandleTexture value): value(value) {}; RedHandleTexture value; _c5f24e0c_depthStencil(const _c5f24e0c_depthStencil &) = delete; } _c5f24e0c_depthStencil;
typedef struct _c5f24e0c_colorsCount { _c5f24e0c_colorsCount(unsigned value): value(value) {}; unsigned value; _c5f24e0c_colorsCount(const _c5f24e0c_colorsCount &) = delete; } _c5f24e0c_colorsCount;
typedef struct _c5f24e0c_colors { _c5f24e0c_colors(RedHandleTexture* value): value(value) {}; RedHandleTexture* value; _c5f24e0c_colors(const _c5f24e0c_colors &) = delete; } _c5f24e0c_colors;
typedef struct _c5f24e0c_depthSetProcedureOutputOp { _c5f24e0c_depthSetProcedureOutputOp(RedSetProcedureOutputOp value): value(value) {}; RedSetProcedureOutputOp value; _c5f24e0c_depthSetProcedureOutputOp(const _c5f24e0c_depthSetProcedureOutputOp &) = delete; } _c5f24e0c_depthSetProcedureOutputOp;
typedef struct _c5f24e0c_stencilSetProcedureOutputOp { _c5f24e0c_stencilSetProcedureOutputOp(RedSetProcedureOutputOp value): value(value) {}; RedSetProcedureOutputOp value; _c5f24e0c_stencilSetProcedureOutputOp(const _c5f24e0c_stencilSetProcedureOutputOp &) = delete; } _c5f24e0c_stencilSetProcedureOutputOp;
typedef struct _c5f24e0c_colorsSetProcedureOutputOp { _c5f24e0c_colorsSetProcedureOutputOp(RedSetProcedureOutputOp* value): value(value) {}; RedSetProcedureOutputOp* value; _c5f24e0c_colorsSetProcedureOutputOp(const _c5f24e0c_colorsSetProcedureOutputOp &) = delete; } _c5f24e0c_colorsSetProcedureOutputOp;
typedef struct _c5f24e0c_depthClearValue { _c5f24e0c_depthClearValue(float value): value(value) {}; float value; _c5f24e0c_depthClearValue(const _c5f24e0c_depthClearValue &) = delete; } _c5f24e0c_depthClearValue;
typedef struct _c5f24e0c_stencilClearValue { _c5f24e0c_stencilClearValue(unsigned value): value(value) {}; unsigned value; _c5f24e0c_stencilClearValue(const _c5f24e0c_stencilClearValue &) = delete; } _c5f24e0c_stencilClearValue;
typedef struct _c5f24e0c_colorsClearValuesFloat { _c5f24e0c_colorsClearValuesFloat(RedColorsClearValuesFloat* value): value(value) {}; RedColorsClearValuesFloat* value; _c5f24e0c_colorsClearValuesFloat(const _c5f24e0c_colorsClearValuesFloat &) = delete; } _c5f24e0c_colorsClearValuesFloat;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCallSetProcedureOutput(_c5f24e0c_calls & calls, _c5f24e0c_depthStencil & depthStencil, _c5f24e0c_colorsCount & colorsCount, _c5f24e0c_colors & colors, _c5f24e0c_depthSetProcedureOutputOp & depthSetProcedureOutputOp, _c5f24e0c_stencilSetProcedureOutputOp & stencilSetProcedureOutputOp, _c5f24e0c_colorsSetProcedureOutputOp & colorsSetProcedureOutputOp, _c5f24e0c_depthClearValue & depthClearValue, _c5f24e0c_stencilClearValue & stencilClearValue, _c5f24e0c_colorsClearValuesFloat & colorsClearValuesFloat) {
  redXCallSetProcedureOutput(calls.value, depthStencil.value, colorsCount.value, colors.value, depthSetProcedureOutputOp.value, stencilSetProcedureOutputOp.value, colorsSetProcedureOutputOp.value, depthClearValue.value, stencilClearValue.value, colorsClearValuesFloat.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCallEndProcedureOutput redXCallEndProcedureOutput
#define _3ac44cde_calls(value) value
#define _3ac44cde_resolveTargetColors(value) value
#define _3ac44cde_resolveTargetColorsFormat(value) value
#define _3ac44cde_depthEndProcedureOutputOp(value) value
#define _3ac44cde_stencilEndProcedureOutputOp(value) value
#define _3ac44cde_colorsEndProcedureOutputOp(value) value
#else
typedef struct _3ac44cde_calls { _3ac44cde_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _3ac44cde_calls(const _3ac44cde_calls &) = delete; } _3ac44cde_calls;
typedef struct _3ac44cde_resolveTargetColors { _3ac44cde_resolveTargetColors(RedHandleTexture* value): value(value) {}; RedHandleTexture* value; _3ac44cde_resolveTargetColors(const _3ac44cde_resolveTargetColors &) = delete; } _3ac44cde_resolveTargetColors;
typedef struct _3ac44cde_resolveTargetColorsFormat { _3ac44cde_resolveTargetColorsFormat(unsigned* value): value(value) {}; unsigned* value; _3ac44cde_resolveTargetColorsFormat(const _3ac44cde_resolveTargetColorsFormat &) = delete; } _3ac44cde_resolveTargetColorsFormat;
typedef struct _3ac44cde_depthEndProcedureOutputOp { _3ac44cde_depthEndProcedureOutputOp(RedEndProcedureOutputOp value): value(value) {}; RedEndProcedureOutputOp value; _3ac44cde_depthEndProcedureOutputOp(const _3ac44cde_depthEndProcedureOutputOp &) = delete; } _3ac44cde_depthEndProcedureOutputOp;
typedef struct _3ac44cde_stencilEndProcedureOutputOp { _3ac44cde_stencilEndProcedureOutputOp(RedEndProcedureOutputOp value): value(value) {}; RedEndProcedureOutputOp value; _3ac44cde_stencilEndProcedureOutputOp(const _3ac44cde_stencilEndProcedureOutputOp &) = delete; } _3ac44cde_stencilEndProcedureOutputOp;
typedef struct _3ac44cde_colorsEndProcedureOutputOp { _3ac44cde_colorsEndProcedureOutputOp(RedEndProcedureOutputOp* value): value(value) {}; RedEndProcedureOutputOp* value; _3ac44cde_colorsEndProcedureOutputOp(const _3ac44cde_colorsEndProcedureOutputOp &) = delete; } _3ac44cde_colorsEndProcedureOutputOp;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCallEndProcedureOutput(_3ac44cde_calls & calls, _3ac44cde_resolveTargetColors & resolveTargetColors, _3ac44cde_resolveTargetColorsFormat & resolveTargetColorsFormat, _3ac44cde_depthEndProcedureOutputOp & depthEndProcedureOutputOp, _3ac44cde_stencilEndProcedureOutputOp & stencilEndProcedureOutputOp, _3ac44cde_colorsEndProcedureOutputOp & colorsEndProcedureOutputOp) {
  redXCallEndProcedureOutput(calls.value, resolveTargetColors.value, resolveTargetColorsFormat.value, depthEndProcedureOutputOp.value, stencilEndProcedureOutputOp.value, colorsEndProcedureOutputOp.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCallUsageAliasOrderBarrier redXCallUsageAliasOrderBarrier
#define _c0b32403_calls(value) value
#define _c0b32403_barriersCount(value) value
#define _c0b32403_barriers(value) value
#else
typedef struct _c0b32403_calls { _c0b32403_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _c0b32403_calls(const _c0b32403_calls &) = delete; } _c0b32403_calls;
typedef struct _c0b32403_barriersCount { _c0b32403_barriersCount(unsigned value): value(value) {}; unsigned value; _c0b32403_barriersCount(const _c0b32403_barriersCount &) = delete; } _c0b32403_barriersCount;
typedef struct _c0b32403_barriers { _c0b32403_barriers(void* value): value(value) {}; void* value; _c0b32403_barriers(const _c0b32403_barriers &) = delete; } _c0b32403_barriers;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCallUsageAliasOrderBarrier(_c0b32403_calls & calls, _c0b32403_barriersCount & barriersCount, _c0b32403_barriers & barriers) {
  redXCallUsageAliasOrderBarrier(calls.value, barriersCount.value, barriers.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCallCopyImageRegion redXCallCopyImageRegion
#define _a52b038b_calls(value) value
#define _a52b038b_copiesCount(value) value
#define _a52b038b_copies(value) value
#else
typedef struct _a52b038b_calls { _a52b038b_calls(RedHandleCalls value): value(value) {}; RedHandleCalls value; _a52b038b_calls(const _a52b038b_calls &) = delete; } _a52b038b_calls;
typedef struct _a52b038b_copiesCount { _a52b038b_copiesCount(unsigned value): value(value) {}; unsigned value; _a52b038b_copiesCount(const _a52b038b_copiesCount &) = delete; } _a52b038b_copiesCount;
typedef struct _a52b038b_copies { _a52b038b_copies(void* value): value(value) {}; void* value; _a52b038b_copies(const _a52b038b_copies &) = delete; } _a52b038b_copies;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCallCopyImageRegion(_a52b038b_calls & calls, _a52b038b_copiesCount & copiesCount, _a52b038b_copies & copies) {
  redXCallCopyImageRegion(calls.value, copiesCount.value, copies.value);
}
#endif

#ifdef REDGPU_DISABLE_NAMED_PARAMETERS
#define np_redXCreateSurfaceWinRT redXCreateSurfaceWinRT
#define _07dfa0b7_context(value) value
#define _07dfa0b7_gpu(value) value
#define _07dfa0b7_handleName(value) value
#define _07dfa0b7_winrtIUnknownPointerCoreWindow(value) value
#define _07dfa0b7_outSurface(value) value
#define _07dfa0b7_outStatuses(value) value
#define _07dfa0b7_optionalFile(value) value
#define _07dfa0b7_optionalLine(value) value
#define _07dfa0b7_optionalUserData(value) value
#else
typedef struct _07dfa0b7_context { _07dfa0b7_context(RedContext value): value(value) {}; RedContext value; _07dfa0b7_context(const _07dfa0b7_context &) = delete; } _07dfa0b7_context;
typedef struct _07dfa0b7_gpu { _07dfa0b7_gpu(RedHandleGpu value): value(value) {}; RedHandleGpu value; _07dfa0b7_gpu(const _07dfa0b7_gpu &) = delete; } _07dfa0b7_gpu;
typedef struct _07dfa0b7_handleName { _07dfa0b7_handleName(char* value): value(value) {}; char* value; _07dfa0b7_handleName(const _07dfa0b7_handleName &) = delete; } _07dfa0b7_handleName;
typedef struct _07dfa0b7_winrtIUnknownPointerCoreWindow { _07dfa0b7_winrtIUnknownPointerCoreWindow(void* value): value(value) {}; void* value; _07dfa0b7_winrtIUnknownPointerCoreWindow(const _07dfa0b7_winrtIUnknownPointerCoreWindow &) = delete; } _07dfa0b7_winrtIUnknownPointerCoreWindow;
typedef struct _07dfa0b7_outSurface { _07dfa0b7_outSurface(RedHandleSurface* value): value(value) {}; RedHandleSurface* value; _07dfa0b7_outSurface(const _07dfa0b7_outSurface &) = delete; } _07dfa0b7_outSurface;
typedef struct _07dfa0b7_outStatuses { _07dfa0b7_outStatuses(RedStatuses* value): value(value) {}; RedStatuses* value; _07dfa0b7_outStatuses(const _07dfa0b7_outStatuses &) = delete; } _07dfa0b7_outStatuses;
typedef struct _07dfa0b7_optionalFile { _07dfa0b7_optionalFile(char* value): value(value) {}; char* value; _07dfa0b7_optionalFile(const _07dfa0b7_optionalFile &) = delete; } _07dfa0b7_optionalFile;
typedef struct _07dfa0b7_optionalLine { _07dfa0b7_optionalLine(int value): value(value) {}; int value; _07dfa0b7_optionalLine(const _07dfa0b7_optionalLine &) = delete; } _07dfa0b7_optionalLine;
typedef struct _07dfa0b7_optionalUserData { _07dfa0b7_optionalUserData(void* value): value(value) {}; void* value; _07dfa0b7_optionalUserData(const _07dfa0b7_optionalUserData &) = delete; } _07dfa0b7_optionalUserData;
REDGPU_NP_DECLSPEC void REDGPU_NP_API np_redXCreateSurfaceWinRT(_07dfa0b7_context & context, _07dfa0b7_gpu & gpu, _07dfa0b7_handleName & handleName, _07dfa0b7_winrtIUnknownPointerCoreWindow & winrtIUnknownPointerCoreWindow, _07dfa0b7_outSurface & outSurface, _07dfa0b7_outStatuses & outStatuses, _07dfa0b7_optionalFile & optionalFile, _07dfa0b7_optionalLine & optionalLine, _07dfa0b7_optionalUserData & optionalUserData) {
  redXCreateSurfaceWinRT(context.value, gpu.value, handleName.value, winrtIUnknownPointerCoreWindow.value, outSurface.value, outStatuses.value, optionalFile.value, optionalLine.value, optionalUserData.value);
}
#endif

