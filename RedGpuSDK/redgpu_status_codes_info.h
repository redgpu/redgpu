#pragma once

#define REDGPU_STATUS_CODES_INFO \
  const char * REDGPUStatusCodesInfo[368]; \
  REDGPUStatusCodesInfo[0] = ""; \
  REDGPUStatusCodesInfo[1] = "redCallSetProcedureParametersHandles: internal query fail"; \
  REDGPUStatusCodesInfo[2] = "redCallSetProcedureParametersHandles: malloc returned NULL"; \
  REDGPUStatusCodesInfo[3] = "redCallSetProcedureParametersHandles: malloc returned NULL"; \
  REDGPUStatusCodesInfo[4] = "redCallSetProcedureParametersHandles: outStatuses.status != RED_STATUS_SUCCESS"; \
  REDGPUStatusCodesInfo[5] = "redCallSetProcedureParametersHandles: outStatuses.statusError != RED_STATUS_SUCCESS"; \
  REDGPUStatusCodesInfo[6] = "redCallSetProcedureParametersHandles: outStatuses.statusError != RED_STATUS_SUCCESS"; \
  REDGPUStatusCodesInfo[7] = "redCallSetProcedureParametersHandles: outStatuses.status != RED_STATUS_SUCCESS"; \
  REDGPUStatusCodesInfo[8] = "redCallSetProcedureParametersHandles: outStatuses.statusError != RED_STATUS_SUCCESS"; \
  REDGPUStatusCodesInfo[9] = "redCallSetProcedureParametersHandles: outStatuses.statusError != RED_STATUS_SUCCESS"; \
  REDGPUStatusCodesInfo[10] = "redCreateContext: can't find enumerate instance layer properties, enumerate instance extension properties, create instance procedure pointers"; \
  REDGPUStatusCodesInfo[11] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[12] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[13] = "redCreateContext: required extension get physical device properties 2 is not found"; \
  REDGPUStatusCodesInfo[14] = "redCreateContext: requested extension surface is not found"; \
  REDGPUStatusCodesInfo[15] = "redCreateContext: requested extension win32 surface is not found"; \
  REDGPUStatusCodesInfo[16] = "redCreateContext: requested extension xlib surface is not found"; \
  REDGPUStatusCodesInfo[17] = "redCreateContext: requested extension xcb surface is not found"; \
  REDGPUStatusCodesInfo[18] = "redCreateContext: create instance returned outContext->contextHandle == NULL"; \
  REDGPUStatusCodesInfo[19] = "redCreateContext: RedDriverProceduresAndAddresses::GetDeviceProcAddr == NULL"; \
  REDGPUStatusCodesInfo[20] = "redCreateContext: RedDriverProceduresAndAddresses::CreateDebugUtilsMessenger == NULL"; \
  REDGPUStatusCodesInfo[21] = "redCreateContext: RedDriverProceduresAndAddresses::EnumeratePhysicalDevices == NULL"; \
  REDGPUStatusCodesInfo[22] = "redCreateContext: RedDriverProceduresAndAddresses::EnumerateDeviceExtensionProperties == NULL"; \
  REDGPUStatusCodesInfo[23] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceMemoryProperties == NULL"; \
  REDGPUStatusCodesInfo[24] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceFeatures == NULL"; \
  REDGPUStatusCodesInfo[25] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceProperties == NULL"; \
  REDGPUStatusCodesInfo[26] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceQueueFamilyProperties == NULL"; \
  REDGPUStatusCodesInfo[27] = "redCreateContext: RedDriverProceduresAndAddresses::CreateDevice == NULL"; \
  REDGPUStatusCodesInfo[28] = "redCreateContext: RedDriverProceduresAndAddresses::GetDeviceQueue == NULL"; \
  REDGPUStatusCodesInfo[29] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceFormatProperties == NULL"; \
  REDGPUStatusCodesInfo[30] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyDevice == NULL"; \
  REDGPUStatusCodesInfo[31] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyDebugUtilsMessenger == NULL"; \
  REDGPUStatusCodesInfo[32] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyInstance == NULL"; \
  REDGPUStatusCodesInfo[33] = "redCreateContext: RedDriverProceduresAndAddresses::SetDebugUtilsObjectName == NULL"; \
  REDGPUStatusCodesInfo[34] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceImageFormatProperties == NULL"; \
  REDGPUStatusCodesInfo[35] = "redCreateContext: RedDriverProceduresAndAddresses::GetBufferMemoryRequirements == NULL"; \
  REDGPUStatusCodesInfo[36] = "redCreateContext: RedDriverProceduresAndAddresses::GetImageMemoryRequirements == NULL"; \
  REDGPUStatusCodesInfo[37] = "redCreateContext: RedDriverProceduresAndAddresses::AllocateMemory == NULL"; \
  REDGPUStatusCodesInfo[38] = "redCreateContext: RedDriverProceduresAndAddresses::FreeMemory == NULL"; \
  REDGPUStatusCodesInfo[39] = "redCreateContext: RedDriverProceduresAndAddresses::MapMemory == NULL"; \
  REDGPUStatusCodesInfo[40] = "redCreateContext: RedDriverProceduresAndAddresses::UnmapMemory == NULL"; \
  REDGPUStatusCodesInfo[41] = "redCreateContext: RedDriverProceduresAndAddresses::BindBufferMemory == NULL"; \
  REDGPUStatusCodesInfo[42] = "redCreateContext: RedDriverProceduresAndAddresses::BindImageMemory == NULL"; \
  REDGPUStatusCodesInfo[43] = "redCreateContext: RedDriverProceduresAndAddresses::FlushMappedMemoryRanges == NULL"; \
  REDGPUStatusCodesInfo[44] = "redCreateContext: RedDriverProceduresAndAddresses::InvalidateMappedMemoryRanges == NULL"; \
  REDGPUStatusCodesInfo[45] = "redCreateContext: RedDriverProceduresAndAddresses::CreateBuffer == NULL"; \
  REDGPUStatusCodesInfo[46] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyBuffer == NULL"; \
  REDGPUStatusCodesInfo[47] = "redCreateContext: RedDriverProceduresAndAddresses::CreateImage == NULL"; \
  REDGPUStatusCodesInfo[48] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyImage == NULL"; \
  REDGPUStatusCodesInfo[49] = "redCreateContext: RedDriverProceduresAndAddresses::CreateSampler == NULL"; \
  REDGPUStatusCodesInfo[50] = "redCreateContext: RedDriverProceduresAndAddresses::DestroySampler == NULL"; \
  REDGPUStatusCodesInfo[51] = "redCreateContext: RedDriverProceduresAndAddresses::CreateImageView == NULL"; \
  REDGPUStatusCodesInfo[52] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyImageView == NULL"; \
  REDGPUStatusCodesInfo[53] = "redCreateContext: RedDriverProceduresAndAddresses::CreateShaderModule == NULL"; \
  REDGPUStatusCodesInfo[54] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyShaderModule == NULL"; \
  REDGPUStatusCodesInfo[55] = "redCreateContext: RedDriverProceduresAndAddresses::CreateGraphicsPipelines == NULL"; \
  REDGPUStatusCodesInfo[56] = "redCreateContext: RedDriverProceduresAndAddresses::CreateComputePipelines == NULL"; \
  REDGPUStatusCodesInfo[57] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyPipeline == NULL"; \
  REDGPUStatusCodesInfo[58] = "redCreateContext: RedDriverProceduresAndAddresses::CreatePipelineCache == NULL"; \
  REDGPUStatusCodesInfo[59] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyPipelineCache == NULL"; \
  REDGPUStatusCodesInfo[60] = "redCreateContext: RedDriverProceduresAndAddresses::GetPipelineCacheData == NULL"; \
  REDGPUStatusCodesInfo[61] = "redCreateContext: RedDriverProceduresAndAddresses::MergePipelineCaches == NULL"; \
  REDGPUStatusCodesInfo[62] = "redCreateContext: RedDriverProceduresAndAddresses::CreatePipelineLayout == NULL"; \
  REDGPUStatusCodesInfo[63] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyPipelineLayout == NULL"; \
  REDGPUStatusCodesInfo[64] = "redCreateContext: RedDriverProceduresAndAddresses::CreateDescriptorSetLayout == NULL"; \
  REDGPUStatusCodesInfo[65] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyDescriptorSetLayout == NULL"; \
  REDGPUStatusCodesInfo[66] = "redCreateContext: RedDriverProceduresAndAddresses::CreateDescriptorPool == NULL"; \
  REDGPUStatusCodesInfo[67] = "redCreateContext: RedDriverProceduresAndAddresses::AllocateDescriptorSets == NULL"; \
  REDGPUStatusCodesInfo[68] = "redCreateContext: RedDriverProceduresAndAddresses::ResetDescriptorPool == NULL"; \
  REDGPUStatusCodesInfo[69] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyDescriptorPool == NULL"; \
  REDGPUStatusCodesInfo[70] = "redCreateContext: RedDriverProceduresAndAddresses::UpdateDescriptorSets == NULL"; \
  REDGPUStatusCodesInfo[71] = "redCreateContext: RedDriverProceduresAndAddresses::CreateRenderPass == NULL"; \
  REDGPUStatusCodesInfo[72] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyRenderPass == NULL"; \
  REDGPUStatusCodesInfo[73] = "redCreateContext: RedDriverProceduresAndAddresses::CreateFramebuffer == NULL"; \
  REDGPUStatusCodesInfo[74] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyFramebuffer == NULL"; \
  REDGPUStatusCodesInfo[75] = "redCreateContext: RedDriverProceduresAndAddresses::CreateFence == NULL"; \
  REDGPUStatusCodesInfo[76] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyFence == NULL"; \
  REDGPUStatusCodesInfo[77] = "redCreateContext: RedDriverProceduresAndAddresses::GetFenceStatus == NULL"; \
  REDGPUStatusCodesInfo[78] = "redCreateContext: RedDriverProceduresAndAddresses::WaitForFences == NULL"; \
  REDGPUStatusCodesInfo[79] = "redCreateContext: RedDriverProceduresAndAddresses::ResetFences == NULL"; \
  REDGPUStatusCodesInfo[80] = "redCreateContext: RedDriverProceduresAndAddresses::CreateSemaphore == NULL"; \
  REDGPUStatusCodesInfo[81] = "redCreateContext: RedDriverProceduresAndAddresses::DestroySemaphore == NULL"; \
  REDGPUStatusCodesInfo[82] = "redCreateContext: RedDriverProceduresAndAddresses::CreateEvent == NULL"; \
  REDGPUStatusCodesInfo[83] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyEvent == NULL"; \
  REDGPUStatusCodesInfo[84] = "redCreateContext: RedDriverProceduresAndAddresses::GetEventStatus == NULL"; \
  REDGPUStatusCodesInfo[85] = "redCreateContext: RedDriverProceduresAndAddresses::ResetEvent == NULL"; \
  REDGPUStatusCodesInfo[86] = "redCreateContext: RedDriverProceduresAndAddresses::CreateCommandPool == NULL"; \
  REDGPUStatusCodesInfo[87] = "redCreateContext: RedDriverProceduresAndAddresses::AllocateCommandBuffers == NULL"; \
  REDGPUStatusCodesInfo[88] = "redCreateContext: RedDriverProceduresAndAddresses::DestroyCommandPool == NULL"; \
  REDGPUStatusCodesInfo[89] = "redCreateContext: RedDriverProceduresAndAddresses::ResetCommandPool == NULL"; \
  REDGPUStatusCodesInfo[90] = "redCreateContext: RedDriverProceduresAndAddresses::BeginCommandBuffer == NULL"; \
  REDGPUStatusCodesInfo[91] = "redCreateContext: RedDriverProceduresAndAddresses::EndCommandBuffer == NULL"; \
  REDGPUStatusCodesInfo[92] = "redCreateContext: RedDriverProceduresAndAddresses::CmdInsertDebugUtilsLabel == NULL"; \
  REDGPUStatusCodesInfo[93] = "redCreateContext: RedDriverProceduresAndAddresses::CmdBeginDebugUtilsLabel == NULL"; \
  REDGPUStatusCodesInfo[94] = "redCreateContext: RedDriverProceduresAndAddresses::CmdEndDebugUtilsLabel == NULL"; \
  REDGPUStatusCodesInfo[95] = "redCreateContext: RedDriverProceduresAndAddresses::QueueSubmit == NULL"; \
  REDGPUStatusCodesInfo[96] = "redCreateContext: RedDriverProceduresAndAddresses::QueueWaitIdle == NULL"; \
  REDGPUStatusCodesInfo[97] = "redCreateContext: RedDriverProceduresAndAddresses::CreateWin32Surface == NULL"; \
  REDGPUStatusCodesInfo[98] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceWin32PresentationSupport == NULL"; \
  REDGPUStatusCodesInfo[99] = "redCreateContext: RedDriverProceduresAndAddresses::CreateXcbSurface == NULL"; \
  REDGPUStatusCodesInfo[100] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceXcbPresentationSupport == NULL"; \
  REDGPUStatusCodesInfo[101] = "redCreateContext: RedDriverProceduresAndAddresses::CreateXlibSurface == NULL"; \
  REDGPUStatusCodesInfo[102] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceXlibPresentationSupport == NULL"; \
  REDGPUStatusCodesInfo[103] = "redCreateContext: RedDriverProceduresAndAddresses::DestroySurface == NULL"; \
  REDGPUStatusCodesInfo[104] = "redCreateContext: RedDriverProceduresAndAddresses::CreateSwapchain == NULL"; \
  REDGPUStatusCodesInfo[105] = "redCreateContext: RedDriverProceduresAndAddresses::GetSwapchainImages == NULL"; \
  REDGPUStatusCodesInfo[106] = "redCreateContext: RedDriverProceduresAndAddresses::DestroySwapchain == NULL"; \
  REDGPUStatusCodesInfo[107] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceSurfaceSupport == NULL"; \
  REDGPUStatusCodesInfo[108] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceSurfaceFormats == NULL"; \
  REDGPUStatusCodesInfo[109] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceSurfaceCapabilities == NULL"; \
  REDGPUStatusCodesInfo[110] = "redCreateContext: RedDriverProceduresAndAddresses::GetPhysicalDeviceSurfacePresentModes == NULL"; \
  REDGPUStatusCodesInfo[111] = "redCreateContext: RedDriverProceduresAndAddresses::AcquireNextImage == NULL"; \
  REDGPUStatusCodesInfo[112] = "redCreateContext: RedDriverProceduresAndAddresses::QueuePresent == NULL"; \
  REDGPUStatusCodesInfo[113] = "redCreateContext: RedDriverProceduresAndAddresses::CreateRenderPass2 == NULL"; \
  REDGPUStatusCodesInfo[114] = "redCreateContext: RedDriverProceduresAndAddresses::SubmitDebugUtilsMessage == NULL"; \
  REDGPUStatusCodesInfo[115] = "redCreateContext: RedDriverProceduresAndAddresses::BindBufferMemory2 == NULL"; \
  REDGPUStatusCodesInfo[116] = "redCreateContext: RedDriverProceduresAndAddresses::BindImageMemory2 == NULL"; \
  REDGPUStatusCodesInfo[117] = "redCreateContext: RedDriverProceduresAndAddresses::SetEvent == NULL"; \
  REDGPUStatusCodesInfo[118] = "redCreateContext: RedDriverProceduresAndAddresses::CmdWaitEvents == NULL"; \
  REDGPUStatusCodesInfo[119] = "redCreateContext: RedDriverProceduresAndAddresses::CmdResetEvent == NULL"; \
  REDGPUStatusCodesInfo[120] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[121] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[122] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[123] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[124] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[125] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[126] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[127] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[128] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[129] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[130] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[131] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[132] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[133] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[134] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[135] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[136] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[137] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[138] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[139] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[140] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[141] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[142] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[143] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[144] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[145] = "redCreateContext: RedCallProceduresAndAddresses::redCallGpuToCpuSignalSignal == NULL"; \
  REDGPUStatusCodesInfo[146] = "redCreateContext: RedCallProceduresAndAddresses::redCallCopyArrayToArray == NULL"; \
  REDGPUStatusCodesInfo[147] = "redCreateContext: RedCallProceduresAndAddresses::redCallCopyImageToImage == NULL"; \
  REDGPUStatusCodesInfo[148] = "redCreateContext: RedCallProceduresAndAddresses::redCallCopyArrayToImage == NULL"; \
  REDGPUStatusCodesInfo[149] = "redCreateContext: RedCallProceduresAndAddresses::redCallCopyImageToArray == NULL"; \
  REDGPUStatusCodesInfo[150] = "redCreateContext: RedCallProceduresAndAddresses::redCallProcedure == NULL"; \
  REDGPUStatusCodesInfo[151] = "redCreateContext: RedCallProceduresAndAddresses::redCallProcedureIndexed == NULL"; \
  REDGPUStatusCodesInfo[152] = "redCreateContext: RedCallProceduresAndAddresses::redCallProcedureCompute == NULL"; \
  REDGPUStatusCodesInfo[153] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedure == NULL"; \
  REDGPUStatusCodesInfo[154] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureIndices == NULL"; \
  REDGPUStatusCodesInfo[155] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureParametersStructs == NULL"; \
  REDGPUStatusCodesInfo[156] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureParametersVariables == NULL"; \
  REDGPUStatusCodesInfo[157] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureParametersStructs == NULL"; \
  REDGPUStatusCodesInfo[158] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureParametersHandles == NULL"; \
  REDGPUStatusCodesInfo[159] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureParametersVariables == NULL"; \
  REDGPUStatusCodesInfo[160] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicDepthBias == NULL"; \
  REDGPUStatusCodesInfo[161] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicDepthBounds == NULL"; \
  REDGPUStatusCodesInfo[162] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicStencilCompareMask == NULL"; \
  REDGPUStatusCodesInfo[163] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicStencilWriteMask == NULL"; \
  REDGPUStatusCodesInfo[164] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicStencilReference == NULL"; \
  REDGPUStatusCodesInfo[165] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicBlendConstants == NULL"; \
  REDGPUStatusCodesInfo[166] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicViewport == NULL"; \
  REDGPUStatusCodesInfo[167] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetDynamicScissor == NULL"; \
  REDGPUStatusCodesInfo[168] = "redCreateContext: RedCallProceduresAndAddresses::redCallSetProcedureOutput == NULL"; \
  REDGPUStatusCodesInfo[169] = "redCreateContext: RedCallProceduresAndAddresses::redCallEndProcedureOutput == NULL"; \
  REDGPUStatusCodesInfo[170] = "redCreateContext: RedCallProceduresAndAddresses::redCallUsageOrderBarrier == NULL"; \
  REDGPUStatusCodesInfo[171] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[172] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[173] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[174] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[175] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[176] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[177] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[178] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[179] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[180] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[181] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[182] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[183] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[184] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[185] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[186] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[187] = "redCallsEnd: internal query fail"; \
  REDGPUStatusCodesInfo[188] = "redCallSetProcedureOutput: internal query fail"; \
  REDGPUStatusCodesInfo[189] = "redCallSetProcedureOutput: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[190] = "redCreateArray: create buffer status"; \
  REDGPUStatusCodesInfo[191] = "redCreateArray: set handle name status"; \
  REDGPUStatusCodesInfo[192] = "redMemoryAllocate: allocate memory status"; \
  REDGPUStatusCodesInfo[193] = "redMemoryAllocate: map memory status"; \
  REDGPUStatusCodesInfo[194] = "redMemoryAllocate: set handle name status"; \
  REDGPUStatusCodesInfo[195] = "redMemorySet: bind buffer memory 2 status"; \
  REDGPUStatusCodesInfo[196] = "redMemorySet: bind image memory 2 status"; \
  REDGPUStatusCodesInfo[197] = "redMemorySet: bind buffer memory status"; \
  REDGPUStatusCodesInfo[198] = "redMemorySet: bind image memory status"; \
  REDGPUStatusCodesInfo[199] = "redCreateGpuToCpuSignal: create event status"; \
  REDGPUStatusCodesInfo[200] = "redCreateGpuToCpuSignal: set handle name status"; \
  REDGPUStatusCodesInfo[201] = "redCreateCpuSignal: create fence status"; \
  REDGPUStatusCodesInfo[202] = "redCreateCpuSignal: set handle name status"; \
  REDGPUStatusCodesInfo[203] = "redCpuSignalUnsignal: reset fences status"; \
  REDGPUStatusCodesInfo[204] = "redMemoryGetBudget: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[205] = "redMemoryGetBudget: gpu.supportsMemoryGetBudget == 0"; \
  REDGPUStatusCodesInfo[206] = "redMemoryAllocate: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[207] = "redMemoryAllocate: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[208] = "redMemoryAllocate: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[209] = "redMemoryAllocate: allocate memory status"; \
  REDGPUStatusCodesInfo[210] = "redMemoryAllocate: map memory status"; \
  REDGPUStatusCodesInfo[211] = "redMemoryAllocate: set handle name status"; \
  REDGPUStatusCodesInfo[212] = "redMemorySet: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[213] = "redMemorySet: bind buffer memory status"; \
  REDGPUStatusCodesInfo[214] = "redMemorySet: bind image memory status"; \
  REDGPUStatusCodesInfo[215] = "redMemorySet: bind buffer memory 2 status"; \
  REDGPUStatusCodesInfo[216] = "redMemorySet: bind image memory 2 status"; \
  REDGPUStatusCodesInfo[217] = "redMemorySet: bind buffer memory status"; \
  REDGPUStatusCodesInfo[218] = "redMemorySet: bind image memory status"; \
  REDGPUStatusCodesInfo[219] = "redMemoryMap: map memory status"; \
  REDGPUStatusCodesInfo[220] = "redMemoryNonCoherentFlush: flush mapped memory ranges status"; \
  REDGPUStatusCodesInfo[221] = "redMemoryNonCoherentFlush: flush mapped memory ranges status"; \
  REDGPUStatusCodesInfo[222] = "redMemoryNonCoherentFlush: flush mapped memory ranges status"; \
  REDGPUStatusCodesInfo[223] = "redMemoryNonCoherentInvalidate: invalidate mapped memory ranges status"; \
  REDGPUStatusCodesInfo[224] = "redMemoryNonCoherentInvalidate: invalidate mapped memory ranges status"; \
  REDGPUStatusCodesInfo[225] = "redMemoryNonCoherentInvalidate: invalidate mapped memory ranges status"; \
  REDGPUStatusCodesInfo[226] = "redStructsMemoryAllocate: create descriptor pool status"; \
  REDGPUStatusCodesInfo[227] = "redStructsMemoryAllocate: set handle name status"; \
  REDGPUStatusCodesInfo[228] = "redStructsMemorySuballocateStructs: allocate descriptor sets status"; \
  REDGPUStatusCodesInfo[229] = "redStructsMemorySuballocateStructs: set handle name status"; \
  REDGPUStatusCodesInfo[230] = "redStructsMemoryReset: reset descriptor pool status"; \
  REDGPUStatusCodesInfo[231] = "redStructsMemoryAllocate: create descriptor pool status"; \
  REDGPUStatusCodesInfo[232] = "redStructsMemoryAllocate: set handle name status"; \
  REDGPUStatusCodesInfo[233] = "redStructsMemorySuballocateStructs: allocate descriptor sets status"; \
  REDGPUStatusCodesInfo[234] = "redStructsMemorySuballocateStructs: set handle name status"; \
  REDGPUStatusCodesInfo[235] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[236] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[237] = "redCreateContext: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[238] = "redCreateContext: enumerate instance layer properties status"; \
  REDGPUStatusCodesInfo[239] = "redCreateContext: enumerate instance layer properties status"; \
  REDGPUStatusCodesInfo[240] = "redCreateContext: requested layer lunarg standard validation is not found"; \
  REDGPUStatusCodesInfo[241] = "redCreateContext: requested layer khronos validation is not found"; \
  REDGPUStatusCodesInfo[242] = "redCreateContext: enumerate instance extension properties status"; \
  REDGPUStatusCodesInfo[243] = "redCreateContext: enumerate instance extension properties status"; \
  REDGPUStatusCodesInfo[244] = "redCreateContext: requested extension debug utils is not found"; \
  REDGPUStatusCodesInfo[245] = "redCreateContext: create instance status"; \
  REDGPUStatusCodesInfo[246] = "redCreateContext: create debug utils messenger status"; \
  REDGPUStatusCodesInfo[247] = "redCreateContext: enumerate physical devices status"; \
  REDGPUStatusCodesInfo[248] = "redCreateContext: enumerate physical devices status"; \
  REDGPUStatusCodesInfo[249] = "redCreateContext: enumerate device extension properties status"; \
  REDGPUStatusCodesInfo[250] = "redCreateContext: enumerate device extension properties status"; \
  REDGPUStatusCodesInfo[251] = "redCreateContext: required extension maintenance 1 is not found for a gpu"; \
  REDGPUStatusCodesInfo[252] = "redCreateContext: required extension maintenance 2 is not found for a gpu"; \
  REDGPUStatusCodesInfo[253] = "redCreateContext: required extension maintenance 3 is not found for a gpu"; \
  REDGPUStatusCodesInfo[254] = "redCreateContext: create device status"; \
  REDGPUStatusCodesInfo[255] = "redCreateContext: create debug array status"; \
  REDGPUStatusCodesInfo[256] = "redCreateContext: create debug array status"; \
  REDGPUStatusCodesInfo[257] = "redCreateContext: create debug array status"; \
  REDGPUStatusCodesInfo[258] = "redCreateContext: create debug array status"; \
  REDGPUStatusCodesInfo[259] = "redCreateArray: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[260] = "redCreateArray: create buffer status"; \
  REDGPUStatusCodesInfo[261] = "redCreateArray: set handle name status"; \
  REDGPUStatusCodesInfo[262] = "redCreateImage: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[263] = "redCreateImage: create image status"; \
  REDGPUStatusCodesInfo[264] = "redCreateImage: set handle name status"; \
  REDGPUStatusCodesInfo[265] = "redCreateSampler: create sampler status"; \
  REDGPUStatusCodesInfo[266] = "redCreateSampler: set handle name status"; \
  REDGPUStatusCodesInfo[267] = "redCreateTexture: create image view status"; \
  REDGPUStatusCodesInfo[268] = "redCreateTexture: set handle name status"; \
  REDGPUStatusCodesInfo[269] = "redCreateGpuCode: create shader module status"; \
  REDGPUStatusCodesInfo[270] = "redCreateGpuCode: set handle name status"; \
  REDGPUStatusCodesInfo[271] = "redCreateOutputDeclaration: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[272] = "redCreateOutputDeclaration: create render pass 2 status"; \
  REDGPUStatusCodesInfo[273] = "redCreateOutputDeclaration: create render pass status"; \
  REDGPUStatusCodesInfo[274] = "redCreateOutputDeclaration: set handle name status"; \
  REDGPUStatusCodesInfo[275] = "redCreateStructDeclaration: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[276] = "redCreateStructDeclaration: for a gpu with RedGpuInfoOptionalInfoProcedureParametersHandles::supportsProcedureParametersHandles == 0 and RedGpuInfoOptionalInfoProcedureParametersHandles::maxProcedureParametersHandlesCount == 8, requested a struct declaration with procedureParametersHandlesDeclaration == 1 and structDeclarationMembersCount > 8"; \
  REDGPUStatusCodesInfo[277] = "redCreateStructDeclaration: create descriptor set layout status"; \
  REDGPUStatusCodesInfo[278] = "redCreateStructDeclaration: set handle name status"; \
  REDGPUStatusCodesInfo[279] = "redCreateStructDeclaration: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[280] = "redCreateProcedureParameters: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[281] = "redCreateProcedureParameters: the count of all structs declarations is > 8"; \
  REDGPUStatusCodesInfo[282] = "redCreateProcedureParameters: create pipeline layout status"; \
  REDGPUStatusCodesInfo[283] = "redCreateProcedureParameters: set handle name status"; \
  REDGPUStatusCodesInfo[284] = "redCreateProcedureParameters: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[285] = "redCreateProcedureParameters: internal query fail"; \
  REDGPUStatusCodesInfo[286] = "redCreateProcedureCache: create pipeline cache status"; \
  REDGPUStatusCodesInfo[287] = "redCreateProcedureCache: set handle name status"; \
  REDGPUStatusCodesInfo[288] = "redCreateProcedure: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[289] = "redCreateProcedure: create graphics pipelines status"; \
  REDGPUStatusCodesInfo[290] = "redCreateProcedure: set handle name status"; \
  REDGPUStatusCodesInfo[291] = "redCreateProcedureCompute: create compute pipelines status"; \
  REDGPUStatusCodesInfo[292] = "redCreateProcedureCompute: set handle name status"; \
  REDGPUStatusCodesInfo[293] = "redCreateOutput: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[294] = "redCreateOutput: create framebuffer status"; \
  REDGPUStatusCodesInfo[295] = "redCreateOutput: set handle name status"; \
  REDGPUStatusCodesInfo[296] = "redCreateCpuSignal: create fence status"; \
  REDGPUStatusCodesInfo[297] = "redCreateCpuSignal: set handle name status"; \
  REDGPUStatusCodesInfo[298] = "redCreateGpuSignal: create semaphore status"; \
  REDGPUStatusCodesInfo[299] = "redCreateGpuSignal: set handle name status"; \
  REDGPUStatusCodesInfo[300] = "redCreateGpuToCpuSignal: create event status"; \
  REDGPUStatusCodesInfo[301] = "redCreateGpuToCpuSignal: set handle name status"; \
  REDGPUStatusCodesInfo[302] = "redCreateCalls: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[303] = "redCreateCalls: create command pool status"; \
  REDGPUStatusCodesInfo[304] = "redCreateCalls: allocate command buffers status"; \
  REDGPUStatusCodesInfo[305] = "redCreateCalls: set handle name status"; \
  REDGPUStatusCodesInfo[306] = "redCreateCalls: set handle name status"; \
  REDGPUStatusCodesInfo[307] = "redCreateCalls: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[308] = "redCreateCallsReusable: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[309] = "redCreateCallsReusable: create command pool status"; \
  REDGPUStatusCodesInfo[310] = "redCreateCallsReusable: allocate command buffers status"; \
  REDGPUStatusCodesInfo[311] = "redCreateCallsReusable: set handle name status"; \
  REDGPUStatusCodesInfo[312] = "redCreateCallsReusable: set handle name status"; \
  REDGPUStatusCodesInfo[313] = "redCreateCallsReusable: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[314] = "redDestroyCalls: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[315] = "redProcedureCacheGetBlob: get pipeline cache data status"; \
  REDGPUStatusCodesInfo[316] = "redProcedureCacheMergeCaches: merge pipeline caches status"; \
  REDGPUStatusCodesInfo[317] = "redCpuSignalWait: wait for fences status"; \
  REDGPUStatusCodesInfo[318] = "redCpuSignalUnsignal: reset fences status"; \
  REDGPUStatusCodesInfo[319] = "redGpuToCpuSignalUnsignal: reset event status"; \
  REDGPUStatusCodesInfo[320] = "redCallsSet: reset command pool status"; \
  REDGPUStatusCodesInfo[321] = "redCallsSet: begin command buffer status"; \
  REDGPUStatusCodesInfo[322] = "redCallsEnd: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[323] = "redCallsEnd: end command buffer status"; \
  REDGPUStatusCodesInfo[324] = "redGetCallProceduresAndAddresses: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[325] = "redCallSetProcedureOutput: user provided malloc returned NULL"; \
  REDGPUStatusCodesInfo[326] = "redQueueSubmit: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[327] = "redQueueSubmit: queue submit status"; \
  REDGPUStatusCodesInfo[328] = "redQueueSubmit: queue submit status"; \
  REDGPUStatusCodesInfo[329] = "redDebugArrayGetHandle: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[330] = "redDebugArrayGetHandle: gpu.debugArrayFeatureIsSupported == 0"; \
  REDGPUStatusCodesInfo[331] = "redDebugArrayCallPrint: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[332] = "redDebugArrayCallPrint: gpu.debugArrayFeatureIsSupported == 0"; \
  REDGPUStatusCodesInfo[333] = "redDebugArrayCallPrint: create xcb surface status"; \
  REDGPUStatusCodesInfo[334] = "redDebugArrayCallPrint: create xlib surface status"; \
  REDGPUStatusCodesInfo[335] = "redDebugArrayCallPrint: set handle name status"; \
  REDGPUStatusCodesInfo[336] = "redCreatePresent: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[337] = "redCreatePresent: create swapchain status"; \
  REDGPUStatusCodesInfo[338] = "redCreatePresent: get swapchain images status"; \
  REDGPUStatusCodesInfo[339] = "redCreatePresent: get swapchain images count != redCreatePresent::imagesCount"; \
  REDGPUStatusCodesInfo[340] = "redCreatePresent: get swapchain images status"; \
  REDGPUStatusCodesInfo[341] = "redCreatePresent: create image view status"; \
  REDGPUStatusCodesInfo[342] = "redCreatePresent: set handle name status"; \
  REDGPUStatusCodesInfo[343] = "redCreatePresent: set handle name status"; \
  REDGPUStatusCodesInfo[344] = "redQueueFamilyIndexGetSupportsPresent: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[345] = "redQueueFamilyIndexGetSupportsPresent: get physical device surface support status"; \
  REDGPUStatusCodesInfo[346] = "redSurfaceGetPresentFeatures: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[347] = "redSurfaceGetPresentFeatures: get physical device surface formats status"; \
  REDGPUStatusCodesInfo[348] = "redSurfaceGetPresentFeatures: get physical device surface formats status"; \
  REDGPUStatusCodesInfo[349] = "redSurfaceGetPresentFeatures: get physical device surface present modes status"; \
  REDGPUStatusCodesInfo[350] = "redSurfaceGetPresentFeatures: get physical device surface present modes status"; \
  REDGPUStatusCodesInfo[351] = "redSurfaceGetCurrentPropertiesAndPresentLimits: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[352] = "redSurfaceGetCurrentPropertiesAndPresentLimits: get physical device surface capabilities status"; \
  REDGPUStatusCodesInfo[353] = "redPresentGetImageIndex: acquire next image status"; \
  REDGPUStatusCodesInfo[354] = "redQueuePresent: queue present status"; \
  REDGPUStatusCodesInfo[355] = "redDebugArrayGetHandle: redDebugArrayGetHandle is not available, link against redgpu_debug library to use redDebugArrayGetHandle"; \
  REDGPUStatusCodesInfo[356] = "redDebugArrayCallPrint: redDebugArrayCallPrint is not available, link against redgpu_debug library to use redDebugArrayCallPrint"; \
  REDGPUStatusCodesInfo[357] = "redCreateSurfaceWin32: create win32 surface status"; \
  REDGPUStatusCodesInfo[358] = "redCreateSurfaceWin32: set handle name status"; \
  REDGPUStatusCodesInfo[359] = "redCreateSurfaceWin32: procedure is not available"; \
  REDGPUStatusCodesInfo[360] = "redCreatePresent: user provided gpu handle is unknown"; \
  REDGPUStatusCodesInfo[361] = "redCreatePresent: user provided queue handle is unknown"; \
  REDGPUStatusCodesInfo[362] = "redCreateSurfaceXlibOrXcb: procedure is not available"; \
  REDGPUStatusCodesInfo[363] = "redCreateContext: unsupported GPU driver with the max count of all structs declarations < 8"; \
  REDGPUStatusCodesInfo[364] = "redCreateContext: create debug array get memory type index status"; \
  REDGPUStatusCodesInfo[365] = "redQueueSubmit: debug array get fence status"; \
  REDGPUStatusCodesInfo[366] = "redQueueSubmit: debug array get fence status"; \
  REDGPUStatusCodesInfo[367] = "redQueueSubmit: debug array cpu signal unsignal status";
