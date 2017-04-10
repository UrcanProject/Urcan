
/* Copyright (c) 2015-2016 Valve Corporation
 * Copyright (c) 2015-2016 LunarG, Inc.
 * Copyright (c) 2015-2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Lenny Komow <lenny@lunarg.com>
 */
 
/*
 * This file is generated from the Khronos Vulkan XML API Registry.
 */
 
#pragma once
 
#include "api_dump.h"

std::ostream& dump_text_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkApplicationInfo(const VkApplicationInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkAllocationCallbacks(const VkAllocationCallbacks& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkObjectTableVertexBufferEntryNVX(const VkObjectTableVertexBufferEntryNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageFormatProperties2KHR(const VkImageFormatProperties2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceCreateInfo(const VkDeviceCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalMemoryImageCreateInfoKHX(const VkExternalMemoryImageCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkObjectTableIndexBufferEntryNVX(const VkObjectTableIndexBufferEntryNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkAcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMappedMemoryRange(const VkMappedMemoryRange& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkFenceCreateInfo(const VkFenceCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalMemoryBufferCreateInfoKHX(const VkExternalMemoryBufferCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkQueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkIndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkObjectTablePushConstantEntryNVX(const VkObjectTablePushConstantEntryNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseMemoryBind(const VkSparseMemoryBind& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkRect2D(const VkRect2D& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkRenderPassBeginInfo(const VkRenderPassBeginInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSamplerCreateInfo(const VkSamplerCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkViewport(const VkViewport& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExportMemoryAllocateInfoKHX(const VkExportMemoryAllocateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceProperties(const VkPhysicalDeviceProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBindSparseInfo(const VkBindSparseInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_MIR_KHR)
std::ostream& dump_text_VkMirSurfaceCreateInfoKHR(const VkMirSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_MIR_KHR
std::ostream& dump_text_VkSubresourceLayout(const VkSubresourceLayout& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkExportMemoryWin32HandleInfoKHX(const VkExportMemoryWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPresentInfoKHR(const VkPresentInfoKHR& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkImportMemoryWin32HandleInfoKHX(const VkImportMemoryWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkDeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExtensionProperties(const VkExtensionProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExtent2D(const VkExtent2D& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceLimits(const VkPhysicalDeviceLimits& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkOffset2D(const VkOffset2D& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkQueueFamilyProperties(const VkQueueFamilyProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImportSemaphoreFdInfoKHX(const VkImportSemaphoreFdInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceSparseProperties(const VkPhysicalDeviceSparseProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMemoryRequirements(const VkMemoryRequirements& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDispatchIndirectCommand(const VkDispatchIndirectCommand& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkMemoryWin32HandlePropertiesKHX(const VkMemoryWin32HandlePropertiesKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageViewCreateInfo(const VkImageViewCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageSubresourceRange(const VkImageSubresourceRange& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceMemoryProperties(const VkPhysicalDeviceMemoryProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkOffset3D(const VkOffset3D& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageSubresource(const VkImageSubresource& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseImageMemoryBind(const VkSparseImageMemoryBind& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDrawIndexedIndirectCommand(const VkDrawIndexedIndirectCommand& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkComponentMapping(const VkComponentMapping& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMemoryType(const VkMemoryType& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorPoolSize(const VkDescriptorPoolSize& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkViewportWScalingNV(const VkViewportWScalingNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDrawIndirectCommand(const VkDrawIndirectCommand& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMemoryHeap(const VkMemoryHeap& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseImageMemoryRequirements(const VkSparseImageMemoryRequirements& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBufferCopy(const VkBufferCopy& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMemoryFdPropertiesKHX(const VkMemoryFdPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceFeatures(const VkPhysicalDeviceFeatures& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkLayerProperties(const VkLayerProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSparseImageFormatProperties(const VkSparseImageFormatProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkEventCreateInfo(const VkEventCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImportMemoryFdInfoKHX(const VkImportMemoryFdInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageFormatProperties(const VkImageFormatProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExtent3D(const VkExtent3D& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkInstanceCreateInfo(const VkInstanceCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSubpassDescription(const VkSubpassDescription& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBufferMemoryBarrier(const VkBufferMemoryBarrier& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMemoryBarrier(const VkMemoryBarrier& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSurfaceCapabilitiesKHR(const VkSurfaceCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_XLIB_KHR)
std::ostream& dump_text_VkXlibSurfaceCreateInfoKHR(const VkXlibSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_XLIB_KHR
std::ostream& dump_text_VkFormatProperties(const VkFormatProperties& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorBufferInfo(const VkDescriptorBufferInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageCopy(const VkImageCopy& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorUpdateTemplateEntryKHR(const VkDescriptorUpdateTemplateEntryKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorImageInfo(const VkDescriptorImageInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBufferCreateInfo(const VkBufferCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkWriteDescriptorSet(const VkWriteDescriptorSet& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageSubresourceLayers(const VkImageSubresourceLayers& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageMemoryBarrier(const VkImageMemoryBarrier& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkIndirectCommandsTokenNVX(const VkIndirectCommandsTokenNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSubmitInfo(const VkSubmitInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkCopyDescriptorSet(const VkCopyDescriptorSet& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_VkD3D12FenceSubmitInfoKHX(const VkD3D12FenceSubmitInfoKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_VkClearDepthStencilValue(const VkClearDepthStencilValue& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkWin32KeyedMutexAcquireReleaseInfoKHX(const VkWin32KeyedMutexAcquireReleaseInfoKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
std::ostream& dump_text_VkAndroidSurfaceCreateInfoKHR(const VkAndroidSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_ANDROID_KHR
std::ostream& dump_text_VkExternalMemoryPropertiesKHX(const VkExternalMemoryPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkValidationFlagsEXT(const VkValidationFlagsEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceExternalImageFormatInfoKHX(const VkPhysicalDeviceExternalImageFormatInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkAttachmentReference(const VkAttachmentReference& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSpecializationInfo(const VkSpecializationInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_VI_NN)
std::ostream& dump_text_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_VI_NN
std::ostream& dump_text_VkSubpassDependency(const VkSubpassDependency& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSpecializationMapEntry(const VkSpecializationMapEntry& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkStencilOpState(const VkStencilOpState& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_IOS_MVK)
std::ostream& dump_text_VkIOSSurfaceCreateInfoMVK(const VkIOSSurfaceCreateInfoMVK& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_IOS_MVK
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkMemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkRenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBindBufferMemoryInfoKHX(const VkBindBufferMemoryInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalImageFormatPropertiesKHX(const VkExternalImageFormatPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkIndirectCommandsLayoutTokenNVX(const VkIndirectCommandsLayoutTokenNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSurfaceFormatKHR(const VkSurfaceFormatKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceExternalBufferInfoKHX(const VkPhysicalDeviceExternalBufferInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageBlit(const VkImageBlit& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkClearAttachment(const VkClearAttachment& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkClearRect(const VkClearRect& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBindImageMemoryInfoKHX(const VkBindImageMemoryInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkCmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBufferViewCreateInfo(const VkBufferViewCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalBufferPropertiesKHX(const VkExternalBufferPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
std::ostream& dump_text_VkWaylandSurfaceCreateInfoKHR(const VkWaylandSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
std::ostream& dump_text_VkCmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_MACOS_MVK)
std::ostream& dump_text_VkMacOSSurfaceCreateInfoMVK(const VkMacOSSurfaceCreateInfoMVK& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_MACOS_MVK
std::ostream& dump_text_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceIDPropertiesKHX(const VkPhysicalDeviceIDPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkViewportSwizzleNV(const VkViewportSwizzleNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayModeParametersKHR(const VkDisplayModeParametersKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceExternalSemaphoreInfoKHX(const VkPhysicalDeviceExternalSemaphoreInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkFramebufferCreateInfo(const VkFramebufferCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalSemaphorePropertiesKHX(const VkExternalSemaphorePropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkBufferImageCopy(const VkBufferImageCopy& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkVertexInputBindingDescription(const VkVertexInputBindingDescription& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceProperties2KHX(const VkPhysicalDeviceProperties2KHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageResolve(const VkImageResolve& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkFormatProperties2KHR(const VkFormatProperties2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExportSemaphoreCreateInfoKHX(const VkExportSemaphoreCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkVertexInputAttributeDescription(const VkVertexInputAttributeDescription& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_XCB_KHR)
std::ostream& dump_text_VkXcbSurfaceCreateInfoKHR(const VkXcbSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_XCB_KHR
std::ostream& dump_text_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayPlaneCapabilitiesKHR(const VkDisplayPlaneCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkWin32SurfaceCreateInfoKHR(const VkWin32SurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkDisplayModePropertiesKHR(const VkDisplayModePropertiesKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageFormatProperties2KHX(const VkImageFormatProperties2KHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkObjectTablePipelineEntryNVX(const VkObjectTablePipelineEntryNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkObjectTableEntryNVX(const VkObjectTableEntryNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkMemoryAllocateInfo(const VkMemoryAllocateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineColorBlendAttachmentState(const VkPipelineColorBlendAttachmentState& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_VkImportSemaphoreWin32HandleInfoKHX(const VkImportSemaphoreWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_VkObjectTableDescriptorSetEntryNVX(const VkObjectTableDescriptorSetEntryNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceImageFormatInfo2KHX(const VkPhysicalDeviceImageFormatInfo2KHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkImageCreateInfo(const VkImageCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayPlanePropertiesKHR(const VkDisplayPlanePropertiesKHR& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_VkExportSemaphoreWin32HandleInfoKHX(const VkExportSemaphoreWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPushConstantRange(const VkPushConstantRange& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkRenderPassCreateInfo(const VkRenderPassCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalImageFormatPropertiesNV(const VkExternalImageFormatPropertiesNV& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkAttachmentDescription(const VkAttachmentDescription& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents);


std::ostream& dump_text_VkClearValue(const VkClearValue& object, const ApiDumpSettings& settings, int indents);
std::ostream& dump_text_VkClearColorValue(const VkClearColorValue& object, const ApiDumpSettings& settings, int indents);

//=========================== Type Implementations ==========================//

inline std::ostream& dump_text_uint8_t(uint8_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << (uint32_t) object;
}
inline std::ostream& dump_text_uint32_t(uint32_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_size_t(size_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_uint64_t(uint64_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_char(char object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_float(float object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_int32_t(int32_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}

//========================= Basetype Implementations ========================//

inline std::ostream& dump_text_VkDeviceSize(VkDeviceSize object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkSampleMask(VkSampleMask object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkFlags(VkFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkBool32(VkBool32 object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}

//======================= System Type Implementations =======================//

#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_DWORD(const DWORD object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_HINSTANCE(const HINSTANCE object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_HANDLE(const HANDLE object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_HWND(const HWND object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline std::ostream& dump_text_xcb_window_t(const xcb_window_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline std::ostream& dump_text_Window(const Window object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_MIR_KHR)
inline std::ostream& dump_text_MirConnection(const MirConnection object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MIR_KHR
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
inline std::ostream& dump_text_ANativeWindow(const ANativeWindow* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline std::ostream& dump_text_xcb_visualid_t(const xcb_visualid_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_LPCWSTR(const LPCWSTR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline std::ostream& dump_text_xcb_connection_t(const xcb_connection_t* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
inline std::ostream& dump_text_wl_surface(const wl_surface object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline std::ostream& dump_text_VisualID(const VisualID object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_MIR_KHR)
inline std::ostream& dump_text_MirSurface(const MirSurface object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MIR_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_SECURITY_ATTRIBUTES(const SECURITY_ATTRIBUTES* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline std::ostream& dump_text_Display(const Display* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
inline std::ostream& dump_text_wl_display(const wl_display object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

//========================== Handle Implementations =========================//

inline std::ostream& dump_text_VkQueryPool(const VkQueryPool object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDisplayKHR(const VkDisplayKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkPipelineCache(const VkPipelineCache object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkQueue(const VkQueue object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkBufferView(const VkBufferView object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkFramebuffer(const VkFramebuffer object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkObjectTableNVX(const VkObjectTableNVX object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDevice(const VkDevice object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkSemaphore(const VkSemaphore object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDescriptorPool(const VkDescriptorPool object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkIndirectCommandsLayoutNVX(const VkIndirectCommandsLayoutNVX object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkPipeline(const VkPipeline object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkRenderPass(const VkRenderPass object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDisplayModeKHR(const VkDisplayModeKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkPhysicalDevice(const VkPhysicalDevice object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkCommandPool(const VkCommandPool object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDeviceMemory(const VkDeviceMemory object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkSwapchainKHR(const VkSwapchainKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkShaderModule(const VkShaderModule object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDescriptorSet(const VkDescriptorSet object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkSurfaceKHR(const VkSurfaceKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkImageView(const VkImageView object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDescriptorUpdateTemplateKHR(const VkDescriptorUpdateTemplateKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDebugReportCallbackEXT(const VkDebugReportCallbackEXT object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkEvent(const VkEvent object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkCommandBuffer(const VkCommandBuffer object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkDescriptorSetLayout(const VkDescriptorSetLayout object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkFence(const VkFence object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkImage(const VkImage object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkSampler(const VkSampler object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkPipelineLayout(const VkPipelineLayout object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkBuffer(const VkBuffer object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_VkInstance(const VkInstance object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}

//=========================== Enum Implementations ==========================//

std::ostream& dump_text_VkInternalAllocationType(VkInternalAllocationType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkImageViewType(VkImageViewType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_1D (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_2D (";
        break;
    case 2:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_3D (";
        break;
    case 3:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_CUBE (";
        break;
    case 4:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_1D_ARRAY (";
        break;
    case 5:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_2D_ARRAY (";
        break;
    case 6:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkFormat(VkFormat object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_FORMAT_UNDEFINED (";
        break;
    case 1:
        settings.stream() << "VK_FORMAT_R4G4_UNORM_PACK8 (";
        break;
    case 2:
        settings.stream() << "VK_FORMAT_R4G4B4A4_UNORM_PACK16 (";
        break;
    case 3:
        settings.stream() << "VK_FORMAT_B4G4R4A4_UNORM_PACK16 (";
        break;
    case 4:
        settings.stream() << "VK_FORMAT_R5G6B5_UNORM_PACK16 (";
        break;
    case 5:
        settings.stream() << "VK_FORMAT_B5G6R5_UNORM_PACK16 (";
        break;
    case 6:
        settings.stream() << "VK_FORMAT_R5G5B5A1_UNORM_PACK16 (";
        break;
    case 7:
        settings.stream() << "VK_FORMAT_B5G5R5A1_UNORM_PACK16 (";
        break;
    case 8:
        settings.stream() << "VK_FORMAT_A1R5G5B5_UNORM_PACK16 (";
        break;
    case 9:
        settings.stream() << "VK_FORMAT_R8_UNORM (";
        break;
    case 10:
        settings.stream() << "VK_FORMAT_R8_SNORM (";
        break;
    case 11:
        settings.stream() << "VK_FORMAT_R8_USCALED (";
        break;
    case 12:
        settings.stream() << "VK_FORMAT_R8_SSCALED (";
        break;
    case 13:
        settings.stream() << "VK_FORMAT_R8_UINT (";
        break;
    case 14:
        settings.stream() << "VK_FORMAT_R8_SINT (";
        break;
    case 15:
        settings.stream() << "VK_FORMAT_R8_SRGB (";
        break;
    case 16:
        settings.stream() << "VK_FORMAT_R8G8_UNORM (";
        break;
    case 17:
        settings.stream() << "VK_FORMAT_R8G8_SNORM (";
        break;
    case 18:
        settings.stream() << "VK_FORMAT_R8G8_USCALED (";
        break;
    case 19:
        settings.stream() << "VK_FORMAT_R8G8_SSCALED (";
        break;
    case 20:
        settings.stream() << "VK_FORMAT_R8G8_UINT (";
        break;
    case 21:
        settings.stream() << "VK_FORMAT_R8G8_SINT (";
        break;
    case 22:
        settings.stream() << "VK_FORMAT_R8G8_SRGB (";
        break;
    case 23:
        settings.stream() << "VK_FORMAT_R8G8B8_UNORM (";
        break;
    case 24:
        settings.stream() << "VK_FORMAT_R8G8B8_SNORM (";
        break;
    case 25:
        settings.stream() << "VK_FORMAT_R8G8B8_USCALED (";
        break;
    case 26:
        settings.stream() << "VK_FORMAT_R8G8B8_SSCALED (";
        break;
    case 27:
        settings.stream() << "VK_FORMAT_R8G8B8_UINT (";
        break;
    case 28:
        settings.stream() << "VK_FORMAT_R8G8B8_SINT (";
        break;
    case 29:
        settings.stream() << "VK_FORMAT_R8G8B8_SRGB (";
        break;
    case 30:
        settings.stream() << "VK_FORMAT_B8G8R8_UNORM (";
        break;
    case 31:
        settings.stream() << "VK_FORMAT_B8G8R8_SNORM (";
        break;
    case 32:
        settings.stream() << "VK_FORMAT_B8G8R8_USCALED (";
        break;
    case 33:
        settings.stream() << "VK_FORMAT_B8G8R8_SSCALED (";
        break;
    case 34:
        settings.stream() << "VK_FORMAT_B8G8R8_UINT (";
        break;
    case 35:
        settings.stream() << "VK_FORMAT_B8G8R8_SINT (";
        break;
    case 36:
        settings.stream() << "VK_FORMAT_B8G8R8_SRGB (";
        break;
    case 37:
        settings.stream() << "VK_FORMAT_R8G8B8A8_UNORM (";
        break;
    case 38:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SNORM (";
        break;
    case 39:
        settings.stream() << "VK_FORMAT_R8G8B8A8_USCALED (";
        break;
    case 40:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SSCALED (";
        break;
    case 41:
        settings.stream() << "VK_FORMAT_R8G8B8A8_UINT (";
        break;
    case 42:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SINT (";
        break;
    case 43:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SRGB (";
        break;
    case 44:
        settings.stream() << "VK_FORMAT_B8G8R8A8_UNORM (";
        break;
    case 45:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SNORM (";
        break;
    case 46:
        settings.stream() << "VK_FORMAT_B8G8R8A8_USCALED (";
        break;
    case 47:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SSCALED (";
        break;
    case 48:
        settings.stream() << "VK_FORMAT_B8G8R8A8_UINT (";
        break;
    case 49:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SINT (";
        break;
    case 50:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SRGB (";
        break;
    case 51:
        settings.stream() << "VK_FORMAT_A8B8G8R8_UNORM_PACK32 (";
        break;
    case 52:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SNORM_PACK32 (";
        break;
    case 53:
        settings.stream() << "VK_FORMAT_A8B8G8R8_USCALED_PACK32 (";
        break;
    case 54:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SSCALED_PACK32 (";
        break;
    case 55:
        settings.stream() << "VK_FORMAT_A8B8G8R8_UINT_PACK32 (";
        break;
    case 56:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SINT_PACK32 (";
        break;
    case 57:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SRGB_PACK32 (";
        break;
    case 58:
        settings.stream() << "VK_FORMAT_A2R10G10B10_UNORM_PACK32 (";
        break;
    case 59:
        settings.stream() << "VK_FORMAT_A2R10G10B10_SNORM_PACK32 (";
        break;
    case 60:
        settings.stream() << "VK_FORMAT_A2R10G10B10_USCALED_PACK32 (";
        break;
    case 61:
        settings.stream() << "VK_FORMAT_A2R10G10B10_SSCALED_PACK32 (";
        break;
    case 62:
        settings.stream() << "VK_FORMAT_A2R10G10B10_UINT_PACK32 (";
        break;
    case 63:
        settings.stream() << "VK_FORMAT_A2R10G10B10_SINT_PACK32 (";
        break;
    case 64:
        settings.stream() << "VK_FORMAT_A2B10G10R10_UNORM_PACK32 (";
        break;
    case 65:
        settings.stream() << "VK_FORMAT_A2B10G10R10_SNORM_PACK32 (";
        break;
    case 66:
        settings.stream() << "VK_FORMAT_A2B10G10R10_USCALED_PACK32 (";
        break;
    case 67:
        settings.stream() << "VK_FORMAT_A2B10G10R10_SSCALED_PACK32 (";
        break;
    case 68:
        settings.stream() << "VK_FORMAT_A2B10G10R10_UINT_PACK32 (";
        break;
    case 69:
        settings.stream() << "VK_FORMAT_A2B10G10R10_SINT_PACK32 (";
        break;
    case 70:
        settings.stream() << "VK_FORMAT_R16_UNORM (";
        break;
    case 71:
        settings.stream() << "VK_FORMAT_R16_SNORM (";
        break;
    case 72:
        settings.stream() << "VK_FORMAT_R16_USCALED (";
        break;
    case 73:
        settings.stream() << "VK_FORMAT_R16_SSCALED (";
        break;
    case 74:
        settings.stream() << "VK_FORMAT_R16_UINT (";
        break;
    case 75:
        settings.stream() << "VK_FORMAT_R16_SINT (";
        break;
    case 76:
        settings.stream() << "VK_FORMAT_R16_SFLOAT (";
        break;
    case 77:
        settings.stream() << "VK_FORMAT_R16G16_UNORM (";
        break;
    case 78:
        settings.stream() << "VK_FORMAT_R16G16_SNORM (";
        break;
    case 79:
        settings.stream() << "VK_FORMAT_R16G16_USCALED (";
        break;
    case 80:
        settings.stream() << "VK_FORMAT_R16G16_SSCALED (";
        break;
    case 81:
        settings.stream() << "VK_FORMAT_R16G16_UINT (";
        break;
    case 82:
        settings.stream() << "VK_FORMAT_R16G16_SINT (";
        break;
    case 83:
        settings.stream() << "VK_FORMAT_R16G16_SFLOAT (";
        break;
    case 84:
        settings.stream() << "VK_FORMAT_R16G16B16_UNORM (";
        break;
    case 85:
        settings.stream() << "VK_FORMAT_R16G16B16_SNORM (";
        break;
    case 86:
        settings.stream() << "VK_FORMAT_R16G16B16_USCALED (";
        break;
    case 87:
        settings.stream() << "VK_FORMAT_R16G16B16_SSCALED (";
        break;
    case 88:
        settings.stream() << "VK_FORMAT_R16G16B16_UINT (";
        break;
    case 89:
        settings.stream() << "VK_FORMAT_R16G16B16_SINT (";
        break;
    case 90:
        settings.stream() << "VK_FORMAT_R16G16B16_SFLOAT (";
        break;
    case 91:
        settings.stream() << "VK_FORMAT_R16G16B16A16_UNORM (";
        break;
    case 92:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SNORM (";
        break;
    case 93:
        settings.stream() << "VK_FORMAT_R16G16B16A16_USCALED (";
        break;
    case 94:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SSCALED (";
        break;
    case 95:
        settings.stream() << "VK_FORMAT_R16G16B16A16_UINT (";
        break;
    case 96:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SINT (";
        break;
    case 97:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SFLOAT (";
        break;
    case 98:
        settings.stream() << "VK_FORMAT_R32_UINT (";
        break;
    case 99:
        settings.stream() << "VK_FORMAT_R32_SINT (";
        break;
    case 100:
        settings.stream() << "VK_FORMAT_R32_SFLOAT (";
        break;
    case 101:
        settings.stream() << "VK_FORMAT_R32G32_UINT (";
        break;
    case 102:
        settings.stream() << "VK_FORMAT_R32G32_SINT (";
        break;
    case 103:
        settings.stream() << "VK_FORMAT_R32G32_SFLOAT (";
        break;
    case 104:
        settings.stream() << "VK_FORMAT_R32G32B32_UINT (";
        break;
    case 105:
        settings.stream() << "VK_FORMAT_R32G32B32_SINT (";
        break;
    case 106:
        settings.stream() << "VK_FORMAT_R32G32B32_SFLOAT (";
        break;
    case 107:
        settings.stream() << "VK_FORMAT_R32G32B32A32_UINT (";
        break;
    case 108:
        settings.stream() << "VK_FORMAT_R32G32B32A32_SINT (";
        break;
    case 109:
        settings.stream() << "VK_FORMAT_R32G32B32A32_SFLOAT (";
        break;
    case 110:
        settings.stream() << "VK_FORMAT_R64_UINT (";
        break;
    case 111:
        settings.stream() << "VK_FORMAT_R64_SINT (";
        break;
    case 112:
        settings.stream() << "VK_FORMAT_R64_SFLOAT (";
        break;
    case 113:
        settings.stream() << "VK_FORMAT_R64G64_UINT (";
        break;
    case 114:
        settings.stream() << "VK_FORMAT_R64G64_SINT (";
        break;
    case 115:
        settings.stream() << "VK_FORMAT_R64G64_SFLOAT (";
        break;
    case 116:
        settings.stream() << "VK_FORMAT_R64G64B64_UINT (";
        break;
    case 117:
        settings.stream() << "VK_FORMAT_R64G64B64_SINT (";
        break;
    case 118:
        settings.stream() << "VK_FORMAT_R64G64B64_SFLOAT (";
        break;
    case 119:
        settings.stream() << "VK_FORMAT_R64G64B64A64_UINT (";
        break;
    case 120:
        settings.stream() << "VK_FORMAT_R64G64B64A64_SINT (";
        break;
    case 121:
        settings.stream() << "VK_FORMAT_R64G64B64A64_SFLOAT (";
        break;
    case 122:
        settings.stream() << "VK_FORMAT_B10G11R11_UFLOAT_PACK32 (";
        break;
    case 123:
        settings.stream() << "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32 (";
        break;
    case 124:
        settings.stream() << "VK_FORMAT_D16_UNORM (";
        break;
    case 125:
        settings.stream() << "VK_FORMAT_X8_D24_UNORM_PACK32 (";
        break;
    case 126:
        settings.stream() << "VK_FORMAT_D32_SFLOAT (";
        break;
    case 127:
        settings.stream() << "VK_FORMAT_S8_UINT (";
        break;
    case 128:
        settings.stream() << "VK_FORMAT_D16_UNORM_S8_UINT (";
        break;
    case 129:
        settings.stream() << "VK_FORMAT_D24_UNORM_S8_UINT (";
        break;
    case 130:
        settings.stream() << "VK_FORMAT_D32_SFLOAT_S8_UINT (";
        break;
    case 131:
        settings.stream() << "VK_FORMAT_BC1_RGB_UNORM_BLOCK (";
        break;
    case 132:
        settings.stream() << "VK_FORMAT_BC1_RGB_SRGB_BLOCK (";
        break;
    case 133:
        settings.stream() << "VK_FORMAT_BC1_RGBA_UNORM_BLOCK (";
        break;
    case 134:
        settings.stream() << "VK_FORMAT_BC1_RGBA_SRGB_BLOCK (";
        break;
    case 135:
        settings.stream() << "VK_FORMAT_BC2_UNORM_BLOCK (";
        break;
    case 136:
        settings.stream() << "VK_FORMAT_BC2_SRGB_BLOCK (";
        break;
    case 137:
        settings.stream() << "VK_FORMAT_BC3_UNORM_BLOCK (";
        break;
    case 138:
        settings.stream() << "VK_FORMAT_BC3_SRGB_BLOCK (";
        break;
    case 139:
        settings.stream() << "VK_FORMAT_BC4_UNORM_BLOCK (";
        break;
    case 140:
        settings.stream() << "VK_FORMAT_BC4_SNORM_BLOCK (";
        break;
    case 141:
        settings.stream() << "VK_FORMAT_BC5_UNORM_BLOCK (";
        break;
    case 142:
        settings.stream() << "VK_FORMAT_BC5_SNORM_BLOCK (";
        break;
    case 143:
        settings.stream() << "VK_FORMAT_BC6H_UFLOAT_BLOCK (";
        break;
    case 144:
        settings.stream() << "VK_FORMAT_BC6H_SFLOAT_BLOCK (";
        break;
    case 145:
        settings.stream() << "VK_FORMAT_BC7_UNORM_BLOCK (";
        break;
    case 146:
        settings.stream() << "VK_FORMAT_BC7_SRGB_BLOCK (";
        break;
    case 147:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK (";
        break;
    case 148:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK (";
        break;
    case 149:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK (";
        break;
    case 150:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK (";
        break;
    case 151:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK (";
        break;
    case 152:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK (";
        break;
    case 153:
        settings.stream() << "VK_FORMAT_EAC_R11_UNORM_BLOCK (";
        break;
    case 154:
        settings.stream() << "VK_FORMAT_EAC_R11_SNORM_BLOCK (";
        break;
    case 155:
        settings.stream() << "VK_FORMAT_EAC_R11G11_UNORM_BLOCK (";
        break;
    case 156:
        settings.stream() << "VK_FORMAT_EAC_R11G11_SNORM_BLOCK (";
        break;
    case 157:
        settings.stream() << "VK_FORMAT_ASTC_4x4_UNORM_BLOCK (";
        break;
    case 158:
        settings.stream() << "VK_FORMAT_ASTC_4x4_SRGB_BLOCK (";
        break;
    case 159:
        settings.stream() << "VK_FORMAT_ASTC_5x4_UNORM_BLOCK (";
        break;
    case 160:
        settings.stream() << "VK_FORMAT_ASTC_5x4_SRGB_BLOCK (";
        break;
    case 161:
        settings.stream() << "VK_FORMAT_ASTC_5x5_UNORM_BLOCK (";
        break;
    case 162:
        settings.stream() << "VK_FORMAT_ASTC_5x5_SRGB_BLOCK (";
        break;
    case 163:
        settings.stream() << "VK_FORMAT_ASTC_6x5_UNORM_BLOCK (";
        break;
    case 164:
        settings.stream() << "VK_FORMAT_ASTC_6x5_SRGB_BLOCK (";
        break;
    case 165:
        settings.stream() << "VK_FORMAT_ASTC_6x6_UNORM_BLOCK (";
        break;
    case 166:
        settings.stream() << "VK_FORMAT_ASTC_6x6_SRGB_BLOCK (";
        break;
    case 167:
        settings.stream() << "VK_FORMAT_ASTC_8x5_UNORM_BLOCK (";
        break;
    case 168:
        settings.stream() << "VK_FORMAT_ASTC_8x5_SRGB_BLOCK (";
        break;
    case 169:
        settings.stream() << "VK_FORMAT_ASTC_8x6_UNORM_BLOCK (";
        break;
    case 170:
        settings.stream() << "VK_FORMAT_ASTC_8x6_SRGB_BLOCK (";
        break;
    case 171:
        settings.stream() << "VK_FORMAT_ASTC_8x8_UNORM_BLOCK (";
        break;
    case 172:
        settings.stream() << "VK_FORMAT_ASTC_8x8_SRGB_BLOCK (";
        break;
    case 173:
        settings.stream() << "VK_FORMAT_ASTC_10x5_UNORM_BLOCK (";
        break;
    case 174:
        settings.stream() << "VK_FORMAT_ASTC_10x5_SRGB_BLOCK (";
        break;
    case 175:
        settings.stream() << "VK_FORMAT_ASTC_10x6_UNORM_BLOCK (";
        break;
    case 176:
        settings.stream() << "VK_FORMAT_ASTC_10x6_SRGB_BLOCK (";
        break;
    case 177:
        settings.stream() << "VK_FORMAT_ASTC_10x8_UNORM_BLOCK (";
        break;
    case 178:
        settings.stream() << "VK_FORMAT_ASTC_10x8_SRGB_BLOCK (";
        break;
    case 179:
        settings.stream() << "VK_FORMAT_ASTC_10x10_UNORM_BLOCK (";
        break;
    case 180:
        settings.stream() << "VK_FORMAT_ASTC_10x10_SRGB_BLOCK (";
        break;
    case 181:
        settings.stream() << "VK_FORMAT_ASTC_12x10_UNORM_BLOCK (";
        break;
    case 182:
        settings.stream() << "VK_FORMAT_ASTC_12x10_SRGB_BLOCK (";
        break;
    case 183:
        settings.stream() << "VK_FORMAT_ASTC_12x12_UNORM_BLOCK (";
        break;
    case 184:
        settings.stream() << "VK_FORMAT_ASTC_12x12_SRGB_BLOCK (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkStencilOp(VkStencilOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_STENCIL_OP_KEEP (";
        break;
    case 1:
        settings.stream() << "VK_STENCIL_OP_ZERO (";
        break;
    case 2:
        settings.stream() << "VK_STENCIL_OP_REPLACE (";
        break;
    case 3:
        settings.stream() << "VK_STENCIL_OP_INCREMENT_AND_CLAMP (";
        break;
    case 4:
        settings.stream() << "VK_STENCIL_OP_DECREMENT_AND_CLAMP (";
        break;
    case 5:
        settings.stream() << "VK_STENCIL_OP_INVERT (";
        break;
    case 6:
        settings.stream() << "VK_STENCIL_OP_INCREMENT_AND_WRAP (";
        break;
    case 7:
        settings.stream() << "VK_STENCIL_OP_DECREMENT_AND_WRAP (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkPresentModeKHR(VkPresentModeKHR object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PRESENT_MODE_IMMEDIATE_KHR (";
        break;
    case 1:
        settings.stream() << "VK_PRESENT_MODE_MAILBOX_KHR (";
        break;
    case 2:
        settings.stream() << "VK_PRESENT_MODE_FIFO_KHR (";
        break;
    case 3:
        settings.stream() << "VK_PRESENT_MODE_FIFO_RELAXED_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkVertexInputRate(VkVertexInputRate object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_VERTEX_INPUT_RATE_VERTEX (";
        break;
    case 1:
        settings.stream() << "VK_VERTEX_INPUT_RATE_INSTANCE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkViewportCoordinateSwizzleNV(VkViewportCoordinateSwizzleNV object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV (";
        break;
    case 1:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV (";
        break;
    case 2:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV (";
        break;
    case 3:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV (";
        break;
    case 4:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV (";
        break;
    case 5:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV (";
        break;
    case 6:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV (";
        break;
    case 7:
        settings.stream() << "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDescriptorType(VkDescriptorType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DESCRIPTOR_TYPE_SAMPLER (";
        break;
    case 1:
        settings.stream() << "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER (";
        break;
    case 2:
        settings.stream() << "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE (";
        break;
    case 3:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE (";
        break;
    case 4:
        settings.stream() << "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER (";
        break;
    case 5:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER (";
        break;
    case 6:
        settings.stream() << "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER (";
        break;
    case 7:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER (";
        break;
    case 8:
        settings.stream() << "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC (";
        break;
    case 9:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC (";
        break;
    case 10:
        settings.stream() << "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDiscardRectangleModeEXT(VkDiscardRectangleModeEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT (";
        break;
    case 1:
        settings.stream() << "VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkImageTiling(VkImageTiling object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_TILING_OPTIMAL (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_TILING_LINEAR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkRasterizationOrderAMD(VkRasterizationOrderAMD object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_RASTERIZATION_ORDER_STRICT_AMD (";
        break;
    case 1:
        settings.stream() << "VK_RASTERIZATION_ORDER_RELAXED_AMD (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkPipelineBindPoint(VkPipelineBindPoint object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PIPELINE_BIND_POINT_GRAPHICS (";
        break;
    case 1:
        settings.stream() << "VK_PIPELINE_BIND_POINT_COMPUTE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkImageType(VkImageType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_TYPE_1D (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_TYPE_2D (";
        break;
    case 2:
        settings.stream() << "VK_IMAGE_TYPE_3D (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkCommandBufferLevel(VkCommandBufferLevel object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COMMAND_BUFFER_LEVEL_PRIMARY (";
        break;
    case 1:
        settings.stream() << "VK_COMMAND_BUFFER_LEVEL_SECONDARY (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkPolygonMode(VkPolygonMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_POLYGON_MODE_FILL (";
        break;
    case 1:
        settings.stream() << "VK_POLYGON_MODE_LINE (";
        break;
    case 2:
        settings.stream() << "VK_POLYGON_MODE_POINT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkIndexType(VkIndexType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_INDEX_TYPE_UINT16 (";
        break;
    case 1:
        settings.stream() << "VK_INDEX_TYPE_UINT32 (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDebugReportObjectTypeEXT(VkDebugReportObjectTypeEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT (";
        break;
    case 1:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT (";
        break;
    case 2:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT (";
        break;
    case 3:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT (";
        break;
    case 4:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT (";
        break;
    case 5:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT (";
        break;
    case 6:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT (";
        break;
    case 7:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT (";
        break;
    case 8:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT (";
        break;
    case 9:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT (";
        break;
    case 10:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT (";
        break;
    case 11:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT (";
        break;
    case 12:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT (";
        break;
    case 13:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT (";
        break;
    case 14:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT (";
        break;
    case 15:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT (";
        break;
    case 16:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT (";
        break;
    case 17:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT (";
        break;
    case 18:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT (";
        break;
    case 19:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT (";
        break;
    case 20:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT (";
        break;
    case 21:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT (";
        break;
    case 22:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT (";
        break;
    case 23:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT (";
        break;
    case 24:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT (";
        break;
    case 25:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT (";
        break;
    case 26:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT (";
        break;
    case 27:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT (";
        break;
    case 28:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT (";
        break;
    case 29:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT (";
        break;
    case 30:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT (";
        break;
    case 31:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT (";
        break;
    case 32:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkComponentSwizzle(VkComponentSwizzle object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COMPONENT_SWIZZLE_IDENTITY (";
        break;
    case 1:
        settings.stream() << "VK_COMPONENT_SWIZZLE_ZERO (";
        break;
    case 2:
        settings.stream() << "VK_COMPONENT_SWIZZLE_ONE (";
        break;
    case 3:
        settings.stream() << "VK_COMPONENT_SWIZZLE_R (";
        break;
    case 4:
        settings.stream() << "VK_COMPONENT_SWIZZLE_G (";
        break;
    case 5:
        settings.stream() << "VK_COMPONENT_SWIZZLE_B (";
        break;
    case 6:
        settings.stream() << "VK_COMPONENT_SWIZZLE_A (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkValidationCheckEXT(VkValidationCheckEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_VALIDATION_CHECK_ALL_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDeviceEventTypeEXT(VkDeviceEventTypeEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkBlendFactor(VkBlendFactor object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_BLEND_FACTOR_ZERO (";
        break;
    case 1:
        settings.stream() << "VK_BLEND_FACTOR_ONE (";
        break;
    case 2:
        settings.stream() << "VK_BLEND_FACTOR_SRC_COLOR (";
        break;
    case 3:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR (";
        break;
    case 4:
        settings.stream() << "VK_BLEND_FACTOR_DST_COLOR (";
        break;
    case 5:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR (";
        break;
    case 6:
        settings.stream() << "VK_BLEND_FACTOR_SRC_ALPHA (";
        break;
    case 7:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA (";
        break;
    case 8:
        settings.stream() << "VK_BLEND_FACTOR_DST_ALPHA (";
        break;
    case 9:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA (";
        break;
    case 10:
        settings.stream() << "VK_BLEND_FACTOR_CONSTANT_COLOR (";
        break;
    case 11:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR (";
        break;
    case 12:
        settings.stream() << "VK_BLEND_FACTOR_CONSTANT_ALPHA (";
        break;
    case 13:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA (";
        break;
    case 14:
        settings.stream() << "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE (";
        break;
    case 15:
        settings.stream() << "VK_BLEND_FACTOR_SRC1_COLOR (";
        break;
    case 16:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR (";
        break;
    case 17:
        settings.stream() << "VK_BLEND_FACTOR_SRC1_ALPHA (";
        break;
    case 18:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkBlendOp(VkBlendOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_BLEND_OP_ADD (";
        break;
    case 1:
        settings.stream() << "VK_BLEND_OP_SUBTRACT (";
        break;
    case 2:
        settings.stream() << "VK_BLEND_OP_REVERSE_SUBTRACT (";
        break;
    case 3:
        settings.stream() << "VK_BLEND_OP_MIN (";
        break;
    case 4:
        settings.stream() << "VK_BLEND_OP_MAX (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkSamplerMipmapMode(VkSamplerMipmapMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SAMPLER_MIPMAP_MODE_NEAREST (";
        break;
    case 1:
        settings.stream() << "VK_SAMPLER_MIPMAP_MODE_LINEAR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDebugReportErrorEXT(VkDebugReportErrorEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DEBUG_REPORT_ERROR_NONE_EXT (";
        break;
    case 1:
        settings.stream() << "VK_DEBUG_REPORT_ERROR_CALLBACK_REF_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkStructureType(VkStructureType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_STRUCTURE_TYPE_APPLICATION_INFO (";
        break;
    case 1:
        settings.stream() << "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO (";
        break;
    case 2:
        settings.stream() << "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO (";
        break;
    case 3:
        settings.stream() << "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO (";
        break;
    case 4:
        settings.stream() << "VK_STRUCTURE_TYPE_SUBMIT_INFO (";
        break;
    case 5:
        settings.stream() << "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO (";
        break;
    case 6:
        settings.stream() << "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE (";
        break;
    case 7:
        settings.stream() << "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO (";
        break;
    case 8:
        settings.stream() << "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO (";
        break;
    case 9:
        settings.stream() << "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO (";
        break;
    case 10:
        settings.stream() << "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO (";
        break;
    case 11:
        settings.stream() << "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO (";
        break;
    case 12:
        settings.stream() << "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO (";
        break;
    case 13:
        settings.stream() << "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO (";
        break;
    case 14:
        settings.stream() << "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO (";
        break;
    case 15:
        settings.stream() << "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO (";
        break;
    case 16:
        settings.stream() << "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO (";
        break;
    case 17:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO (";
        break;
    case 18:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO (";
        break;
    case 19:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO (";
        break;
    case 20:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO (";
        break;
    case 21:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO (";
        break;
    case 22:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO (";
        break;
    case 23:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO (";
        break;
    case 24:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO (";
        break;
    case 25:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO (";
        break;
    case 26:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO (";
        break;
    case 27:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO (";
        break;
    case 28:
        settings.stream() << "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO (";
        break;
    case 29:
        settings.stream() << "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO (";
        break;
    case 30:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO (";
        break;
    case 31:
        settings.stream() << "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO (";
        break;
    case 32:
        settings.stream() << "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO (";
        break;
    case 33:
        settings.stream() << "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO (";
        break;
    case 34:
        settings.stream() << "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO (";
        break;
    case 35:
        settings.stream() << "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET (";
        break;
    case 36:
        settings.stream() << "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET (";
        break;
    case 37:
        settings.stream() << "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO (";
        break;
    case 38:
        settings.stream() << "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO (";
        break;
    case 39:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO (";
        break;
    case 40:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO (";
        break;
    case 41:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO (";
        break;
    case 42:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO (";
        break;
    case 43:
        settings.stream() << "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO (";
        break;
    case 44:
        settings.stream() << "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER (";
        break;
    case 45:
        settings.stream() << "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER (";
        break;
    case 46:
        settings.stream() << "VK_STRUCTURE_TYPE_MEMORY_BARRIER (";
        break;
    case 47:
        settings.stream() << "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO (";
        break;
    case 48:
        settings.stream() << "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkSharingMode(VkSharingMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SHARING_MODE_EXCLUSIVE (";
        break;
    case 1:
        settings.stream() << "VK_SHARING_MODE_CONCURRENT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkImageLayout(VkImageLayout object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_LAYOUT_UNDEFINED (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_LAYOUT_GENERAL (";
        break;
    case 2:
        settings.stream() << "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL (";
        break;
    case 3:
        settings.stream() << "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL (";
        break;
    case 4:
        settings.stream() << "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL (";
        break;
    case 5:
        settings.stream() << "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL (";
        break;
    case 6:
        settings.stream() << "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL (";
        break;
    case 7:
        settings.stream() << "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL (";
        break;
    case 8:
        settings.stream() << "VK_IMAGE_LAYOUT_PREINITIALIZED (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkFilter(VkFilter object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_FILTER_NEAREST (";
        break;
    case 1:
        settings.stream() << "VK_FILTER_LINEAR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkSubpassContents(VkSubpassContents object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SUBPASS_CONTENTS_INLINE (";
        break;
    case 1:
        settings.stream() << "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkQueryType(VkQueryType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_QUERY_TYPE_OCCLUSION (";
        break;
    case 1:
        settings.stream() << "VK_QUERY_TYPE_PIPELINE_STATISTICS (";
        break;
    case 2:
        settings.stream() << "VK_QUERY_TYPE_TIMESTAMP (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDisplayEventTypeEXT(VkDisplayEventTypeEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkPrimitiveTopology(VkPrimitiveTopology object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_POINT_LIST (";
        break;
    case 1:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_LIST (";
        break;
    case 2:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP (";
        break;
    case 3:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST (";
        break;
    case 4:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP (";
        break;
    case 5:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN (";
        break;
    case 6:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY (";
        break;
    case 7:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY (";
        break;
    case 8:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY (";
        break;
    case 9:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY (";
        break;
    case 10:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkIndirectCommandsTokenTypeNVX(VkIndirectCommandsTokenTypeNVX object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_PIPELINE_NVX (";
        break;
    case 1:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_DESCRIPTOR_SET_NVX (";
        break;
    case 2:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_INDEX_BUFFER_NVX (";
        break;
    case 3:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_VERTEX_BUFFER_NVX (";
        break;
    case 4:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_PUSH_CONSTANT_NVX (";
        break;
    case 5:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_DRAW_INDEXED_NVX (";
        break;
    case 6:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_DRAW_NVX (";
        break;
    case 7:
        settings.stream() << "VK_INDIRECT_COMMANDS_TOKEN_DISPATCH_NVX (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkSamplerAddressMode(VkSamplerAddressMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_REPEAT (";
        break;
    case 1:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT (";
        break;
    case 2:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE (";
        break;
    case 3:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER (";
        break;
    case 4:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkObjectEntryTypeNVX(VkObjectEntryTypeNVX object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_OBJECT_ENTRY_DESCRIPTOR_SET_NVX (";
        break;
    case 1:
        settings.stream() << "VK_OBJECT_ENTRY_PIPELINE_NVX (";
        break;
    case 2:
        settings.stream() << "VK_OBJECT_ENTRY_INDEX_BUFFER_NVX (";
        break;
    case 3:
        settings.stream() << "VK_OBJECT_ENTRY_VERTEX_BUFFER_NVX (";
        break;
    case 4:
        settings.stream() << "VK_OBJECT_ENTRY_PUSH_CONSTANT_NVX (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkFrontFace(VkFrontFace object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_FRONT_FACE_COUNTER_CLOCKWISE (";
        break;
    case 1:
        settings.stream() << "VK_FRONT_FACE_CLOCKWISE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkSystemAllocationScope(VkSystemAllocationScope object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND (";
        break;
    case 1:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT (";
        break;
    case 2:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_CACHE (";
        break;
    case 3:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE (";
        break;
    case 4:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkBorderColor(VkBorderColor object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK (";
        break;
    case 1:
        settings.stream() << "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK (";
        break;
    case 2:
        settings.stream() << "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK (";
        break;
    case 3:
        settings.stream() << "VK_BORDER_COLOR_INT_OPAQUE_BLACK (";
        break;
    case 4:
        settings.stream() << "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE (";
        break;
    case 5:
        settings.stream() << "VK_BORDER_COLOR_INT_OPAQUE_WHITE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkCompareOp(VkCompareOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COMPARE_OP_NEVER (";
        break;
    case 1:
        settings.stream() << "VK_COMPARE_OP_LESS (";
        break;
    case 2:
        settings.stream() << "VK_COMPARE_OP_EQUAL (";
        break;
    case 3:
        settings.stream() << "VK_COMPARE_OP_LESS_OR_EQUAL (";
        break;
    case 4:
        settings.stream() << "VK_COMPARE_OP_GREATER (";
        break;
    case 5:
        settings.stream() << "VK_COMPARE_OP_NOT_EQUAL (";
        break;
    case 6:
        settings.stream() << "VK_COMPARE_OP_GREATER_OR_EQUAL (";
        break;
    case 7:
        settings.stream() << "VK_COMPARE_OP_ALWAYS (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkPhysicalDeviceType(VkPhysicalDeviceType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_OTHER (";
        break;
    case 1:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU (";
        break;
    case 2:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU (";
        break;
    case 3:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU (";
        break;
    case 4:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_CPU (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkPipelineCacheHeaderVersion(VkPipelineCacheHeaderVersion object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 1:
        settings.stream() << "VK_PIPELINE_CACHE_HEADER_VERSION_ONE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkAttachmentLoadOp(VkAttachmentLoadOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_ATTACHMENT_LOAD_OP_LOAD (";
        break;
    case 1:
        settings.stream() << "VK_ATTACHMENT_LOAD_OP_CLEAR (";
        break;
    case 2:
        settings.stream() << "VK_ATTACHMENT_LOAD_OP_DONT_CARE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDynamicState(VkDynamicState object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DYNAMIC_STATE_VIEWPORT (";
        break;
    case 1:
        settings.stream() << "VK_DYNAMIC_STATE_SCISSOR (";
        break;
    case 2:
        settings.stream() << "VK_DYNAMIC_STATE_LINE_WIDTH (";
        break;
    case 3:
        settings.stream() << "VK_DYNAMIC_STATE_DEPTH_BIAS (";
        break;
    case 4:
        settings.stream() << "VK_DYNAMIC_STATE_BLEND_CONSTANTS (";
        break;
    case 5:
        settings.stream() << "VK_DYNAMIC_STATE_DEPTH_BOUNDS (";
        break;
    case 6:
        settings.stream() << "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK (";
        break;
    case 7:
        settings.stream() << "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK (";
        break;
    case 8:
        settings.stream() << "VK_DYNAMIC_STATE_STENCIL_REFERENCE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkAttachmentStoreOp(VkAttachmentStoreOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_ATTACHMENT_STORE_OP_STORE (";
        break;
    case 1:
        settings.stream() << "VK_ATTACHMENT_STORE_OP_DONT_CARE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDescriptorUpdateTemplateTypeKHR(VkDescriptorUpdateTemplateTypeKHR object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR (";
        break;
    case 1:
        settings.stream() << "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkLogicOp(VkLogicOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_LOGIC_OP_CLEAR (";
        break;
    case 1:
        settings.stream() << "VK_LOGIC_OP_AND (";
        break;
    case 2:
        settings.stream() << "VK_LOGIC_OP_AND_REVERSE (";
        break;
    case 3:
        settings.stream() << "VK_LOGIC_OP_COPY (";
        break;
    case 4:
        settings.stream() << "VK_LOGIC_OP_AND_INVERTED (";
        break;
    case 5:
        settings.stream() << "VK_LOGIC_OP_NO_OP (";
        break;
    case 6:
        settings.stream() << "VK_LOGIC_OP_XOR (";
        break;
    case 7:
        settings.stream() << "VK_LOGIC_OP_OR (";
        break;
    case 8:
        settings.stream() << "VK_LOGIC_OP_NOR (";
        break;
    case 9:
        settings.stream() << "VK_LOGIC_OP_EQUIVALENT (";
        break;
    case 10:
        settings.stream() << "VK_LOGIC_OP_INVERT (";
        break;
    case 11:
        settings.stream() << "VK_LOGIC_OP_OR_REVERSE (";
        break;
    case 12:
        settings.stream() << "VK_LOGIC_OP_COPY_INVERTED (";
        break;
    case 13:
        settings.stream() << "VK_LOGIC_OP_OR_INVERTED (";
        break;
    case 14:
        settings.stream() << "VK_LOGIC_OP_NAND (";
        break;
    case 15:
        settings.stream() << "VK_LOGIC_OP_SET (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkColorSpaceKHR(VkColorSpaceKHR object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkResult(VkResult object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SUCCESS (";
        break;
    case 1:
        settings.stream() << "VK_NOT_READY (";
        break;
    case 2:
        settings.stream() << "VK_TIMEOUT (";
        break;
    case 3:
        settings.stream() << "VK_EVENT_SET (";
        break;
    case 4:
        settings.stream() << "VK_EVENT_RESET (";
        break;
    case 5:
        settings.stream() << "VK_INCOMPLETE (";
        break;
    case -1:
        settings.stream() << "VK_ERROR_OUT_OF_HOST_MEMORY (";
        break;
    case -2:
        settings.stream() << "VK_ERROR_OUT_OF_DEVICE_MEMORY (";
        break;
    case -3:
        settings.stream() << "VK_ERROR_INITIALIZATION_FAILED (";
        break;
    case -4:
        settings.stream() << "VK_ERROR_DEVICE_LOST (";
        break;
    case -5:
        settings.stream() << "VK_ERROR_MEMORY_MAP_FAILED (";
        break;
    case -6:
        settings.stream() << "VK_ERROR_LAYER_NOT_PRESENT (";
        break;
    case -7:
        settings.stream() << "VK_ERROR_EXTENSION_NOT_PRESENT (";
        break;
    case -8:
        settings.stream() << "VK_ERROR_FEATURE_NOT_PRESENT (";
        break;
    case -9:
        settings.stream() << "VK_ERROR_INCOMPATIBLE_DRIVER (";
        break;
    case -10:
        settings.stream() << "VK_ERROR_TOO_MANY_OBJECTS (";
        break;
    case -11:
        settings.stream() << "VK_ERROR_FORMAT_NOT_SUPPORTED (";
        break;
    case -12:
        settings.stream() << "VK_ERROR_FRAGMENTED_POOL (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
std::ostream& dump_text_VkDisplayPowerStateEXT(VkDisplayPowerStateEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DISPLAY_POWER_STATE_OFF_EXT (";
        break;
    case 1:
        settings.stream() << "VK_DISPLAY_POWER_STATE_SUSPEND_EXT (";
        break;
    case 2:
        settings.stream() << "VK_DISPLAY_POWER_STATE_ON_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}

//========================= Bitmask Implementations =========================//

std::ostream& dump_text_VkQueueFlagBits(VkQueueFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUEUE_GRAPHICS_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_QUEUE_COMPUTE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_QUEUE_TRANSFER_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_QUEUE_SPARSE_BINDING_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorSetLayoutCreateFlagBits(VkDescriptorSetLayoutCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkColorComponentFlagBits(VkColorComponentFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_R_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_G_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_B_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_A_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkBufferCreateFlagBits(VkBufferCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_BUFFER_CREATE_SPARSE_BINDING_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_BUFFER_CREATE_SPARSE_ALIASED_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkPipelineCreateFlagBits(VkPipelineCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_DERIVATIVE_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHX", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_DISPATCH_BASE_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSurfaceTransformFlagBitsKHR(VkSurfaceTransformFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkPeerMemoryFeatureFlagBitsKHX(VkPeerMemoryFeatureFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHX", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkCommandPoolResetFlagBits(VkCommandPoolResetFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkPipelineStageFlagBits(VkPipelineStageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_VERTEX_INPUT_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_VERTEX_SHADER_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT", settings.stream(), is_first);
    if(object & 2048)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT", settings.stream(), is_first);
    if(object & 4096)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TRANSFER_BIT", settings.stream(), is_first);
    if(object & 8192)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT", settings.stream(), is_first);
    if(object & 16384)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_HOST_BIT", settings.stream(), is_first);
    if(object & 32768)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT", settings.stream(), is_first);
    if(object & 65536)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_ALL_COMMANDS_BIT", settings.stream(), is_first);
    if(object & 131072)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkBufferUsageFlagBits(VkBufferUsageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_TRANSFER_SRC_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_TRANSFER_DST_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_STORAGE_BUFFER_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_INDEX_BUFFER_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_VERTEX_BUFFER_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkShaderStageFlagBits(VkShaderStageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_VERTEX_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_GEOMETRY_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_FRAGMENT_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_COMPUTE_BIT", settings.stream(), is_first);
    if(object & 0x0000001F)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_ALL_GRAPHICS", settings.stream(), is_first);
    if(object & 0x7FFFFFFF)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_ALL", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryFeatureFlagBitsKHX(VkExternalMemoryFeatureFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkImageUsageFlagBits(VkImageUsageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_TRANSFER_SRC_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_TRANSFER_DST_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_SAMPLED_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_STORAGE_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkMemoryAllocateFlagBitsKHX(VkMemoryAllocateFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkCompositeAlphaFlagBitsKHR(VkCompositeAlphaFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkIndirectCommandsLayoutUsageFlagBitsNVX(VkIndirectCommandsLayoutUsageFlagBitsNVX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkFenceCreateFlagBits(VkFenceCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_FENCE_CREATE_SIGNALED_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupPresentModeFlagBitsKHX(VkDeviceGroupPresentModeFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHX", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkMemoryPropertyFlagBits(VkMemoryPropertyFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_HOST_COHERENT_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_HOST_CACHED_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSubpassDescriptionFlagBits(VkSubpassDescriptionFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkCommandBufferResetFlagBits(VkCommandBufferResetFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkCullModeFlagBits(VkCullModeFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 0)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_NONE", settings.stream(), is_first);
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_FRONT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_BACK_BIT", settings.stream(), is_first);
    if(object & 0x00000003)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_FRONT_AND_BACK", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkDependencyFlagBits(VkDependencyFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DEPENDENCY_BY_REGION_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_DEPENDENCY_VIEW_LOCAL_BIT_KHX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_DEPENDENCY_DEVICE_GROUP_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkCommandPoolCreateFlagBits(VkCommandPoolCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_POOL_CREATE_TRANSIENT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkObjectEntryUsageFlagBitsNVX(VkObjectEntryUsageFlagBitsNVX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkFormatFeatureFlagBits(VkFormatFeatureFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_BLIT_SRC_BIT", settings.stream(), is_first);
    if(object & 2048)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_BLIT_DST_BIT", settings.stream(), is_first);
    if(object & 4096)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT", settings.stream(), is_first);
    if(object & 8192)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG", settings.stream(), is_first);
    if(object & 16384)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR", settings.stream(), is_first);
    if(object & 32768)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkDebugReportFlagBitsEXT(VkDebugReportFlagBitsEXT object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_INFORMATION_BIT_EXT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_WARNING_BIT_EXT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_ERROR_BIT_EXT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_DEBUG_BIT_EXT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryHandleTypeFlagBitsKHX(VkExternalMemoryHandleTypeFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHX", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHX", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHX", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHX", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkExternalSemaphoreHandleTypeFlagBitsKHX(VkExternalSemaphoreHandleTypeFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHX", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHX", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHX", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_FENCE_FD_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkQueryResultFlagBits(VkQueryResultFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_64_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_WAIT_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_WITH_AVAILABILITY_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_PARTIAL_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryFeatureFlagBitsNV(VkExternalMemoryFeatureFlagBitsNV object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorPoolCreateFlagBits(VkDescriptorPoolCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkQueryPipelineStatisticFlagBits(VkQueryPipelineStatisticFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkDisplayPlaneAlphaFlagBitsKHR(VkDisplayPlaneAlphaFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkImageCreateFlagBits(VkImageCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_SPARSE_BINDING_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_SPARSE_ALIASED_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_BIND_SFR_BIT_KHX", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryHandleTypeFlagBitsNV(VkExternalMemoryHandleTypeFlagBitsNV object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkImageAspectFlagBits(VkImageAspectFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_COLOR_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_DEPTH_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_STENCIL_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_METADATA_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSwapchainCreateFlagBitsKHR(VkSwapchainCreateFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SWAPCHAIN_CREATE_BIND_SFR_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkAttachmentDescriptionFlagBits(VkAttachmentDescriptionFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSparseMemoryBindFlagBits(VkSparseMemoryBindFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SPARSE_MEMORY_BIND_METADATA_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkStencilFaceFlagBits(VkStencilFaceFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_STENCIL_FACE_FRONT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_STENCIL_FACE_BACK_BIT", settings.stream(), is_first);
    if(object & 0x00000003)
        is_first = dump_text_bitmaskOption("VK_STENCIL_FRONT_AND_BACK", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSurfaceCounterFlagBitsEXT(VkSurfaceCounterFlagBitsEXT object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SURFACE_COUNTER_VBLANK_EXT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkMemoryHeapFlagBits(VkMemoryHeapFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_MEMORY_HEAP_DEVICE_LOCAL_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkCommandBufferUsageFlagBits(VkCommandBufferUsageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSparseImageFormatFlagBits(VkSparseImageFormatFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkAccessFlagBits(VkAccessFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_ACCESS_INDIRECT_COMMAND_READ_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_ACCESS_INDEX_READ_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_ACCESS_UNIFORM_READ_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_ACCESS_INPUT_ATTACHMENT_READ_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_ACCESS_SHADER_READ_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_ACCESS_SHADER_WRITE_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_ACCESS_COLOR_ATTACHMENT_READ_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT", settings.stream(), is_first);
    if(object & 2048)
        is_first = dump_text_bitmaskOption("VK_ACCESS_TRANSFER_READ_BIT", settings.stream(), is_first);
    if(object & 4096)
        is_first = dump_text_bitmaskOption("VK_ACCESS_TRANSFER_WRITE_BIT", settings.stream(), is_first);
    if(object & 8192)
        is_first = dump_text_bitmaskOption("VK_ACCESS_HOST_READ_BIT", settings.stream(), is_first);
    if(object & 16384)
        is_first = dump_text_bitmaskOption("VK_ACCESS_HOST_WRITE_BIT", settings.stream(), is_first);
    if(object & 32768)
        is_first = dump_text_bitmaskOption("VK_ACCESS_MEMORY_READ_BIT", settings.stream(), is_first);
    if(object & 65536)
        is_first = dump_text_bitmaskOption("VK_ACCESS_MEMORY_WRITE_BIT", settings.stream(), is_first);
    if(object & 131072)
        is_first = dump_text_bitmaskOption("VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX", settings.stream(), is_first);
    if(object & 262144)
        is_first = dump_text_bitmaskOption("VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkSampleCountFlagBits(VkSampleCountFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_1_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_2_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_4_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_8_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_16_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_32_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_64_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkQueryControlFlagBits(VkQueryControlFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUERY_CONTROL_PRECISE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
std::ostream& dump_text_VkExternalSemaphoreFeatureFlagBitsKHX(VkExternalSemaphoreFeatureFlagBitsKHX object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHX", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHX", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}

//=========================== Flag Implementations ==========================//

inline std::ostream& dump_text_VkSampleCountFlags(VkSampleCountFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSampleCountFlagBits((VkSampleCountFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkFenceCreateFlags(VkFenceCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkFenceCreateFlagBits((VkFenceCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkSparseMemoryBindFlags(VkSparseMemoryBindFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSparseMemoryBindFlagBits((VkSparseMemoryBindFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkQueueFlags(VkQueueFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueueFlagBits((VkQueueFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkMemoryPropertyFlags(VkMemoryPropertyFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkMemoryPropertyFlagBits((VkMemoryPropertyFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkImageUsageFlags(VkImageUsageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkImageUsageFlagBits((VkImageUsageFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkDescriptorPoolCreateFlags(VkDescriptorPoolCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDescriptorPoolCreateFlagBits((VkDescriptorPoolCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkCullModeFlags(VkCullModeFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCullModeFlagBits((VkCullModeFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkDebugReportFlagsEXT(VkDebugReportFlagsEXT object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDebugReportFlagBitsEXT((VkDebugReportFlagBitsEXT) object, settings, indents);
}
inline std::ostream& dump_text_VkMemoryHeapFlags(VkMemoryHeapFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkMemoryHeapFlagBits((VkMemoryHeapFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkImageCreateFlags(VkImageCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkImageCreateFlagBits((VkImageCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkImageAspectFlags(VkImageAspectFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkImageAspectFlagBits((VkImageAspectFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkSparseImageFormatFlags(VkSparseImageFormatFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSparseImageFormatFlagBits((VkSparseImageFormatFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkQueryControlFlags(VkQueryControlFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueryControlFlagBits((VkQueryControlFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkSurfaceTransformFlagsKHR(VkSurfaceTransformFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSurfaceTransformFlagBitsKHR((VkSurfaceTransformFlagBitsKHR) object, settings, indents);
}
inline std::ostream& dump_text_VkPipelineCreateFlags(VkPipelineCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkPipelineCreateFlagBits((VkPipelineCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkDescriptorSetLayoutCreateFlags(VkDescriptorSetLayoutCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDescriptorSetLayoutCreateFlagBits((VkDescriptorSetLayoutCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkExternalMemoryHandleTypeFlagsKHX(VkExternalMemoryHandleTypeFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalMemoryHandleTypeFlagBitsKHX((VkExternalMemoryHandleTypeFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkBufferCreateFlags(VkBufferCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkBufferCreateFlagBits((VkBufferCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkSubpassDescriptionFlags(VkSubpassDescriptionFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSubpassDescriptionFlagBits((VkSubpassDescriptionFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkPeerMemoryFeatureFlagsKHX(VkPeerMemoryFeatureFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkPeerMemoryFeatureFlagBitsKHX((VkPeerMemoryFeatureFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkBufferUsageFlags(VkBufferUsageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkBufferUsageFlagBits((VkBufferUsageFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkExternalMemoryFeatureFlagsKHX(VkExternalMemoryFeatureFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalMemoryFeatureFlagBitsKHX((VkExternalMemoryFeatureFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkPipelineStageFlags(VkPipelineStageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkPipelineStageFlagBits((VkPipelineStageFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkMemoryAllocateFlagsKHX(VkMemoryAllocateFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkMemoryAllocateFlagBitsKHX((VkMemoryAllocateFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkCompositeAlphaFlagsKHR(VkCompositeAlphaFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCompositeAlphaFlagBitsKHR((VkCompositeAlphaFlagBitsKHR) object, settings, indents);
}
inline std::ostream& dump_text_VkDeviceGroupPresentModeFlagsKHX(VkDeviceGroupPresentModeFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDeviceGroupPresentModeFlagBitsKHX((VkDeviceGroupPresentModeFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkCommandPoolCreateFlags(VkCommandPoolCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandPoolCreateFlagBits((VkCommandPoolCreateFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkCommandBufferResetFlags(VkCommandBufferResetFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandBufferResetFlagBits((VkCommandBufferResetFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkQueryPipelineStatisticFlags(VkQueryPipelineStatisticFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueryPipelineStatisticFlagBits((VkQueryPipelineStatisticFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkAccessFlags(VkAccessFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkAccessFlagBits((VkAccessFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkExternalSemaphoreHandleTypeFlagsKHX(VkExternalSemaphoreHandleTypeFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalSemaphoreHandleTypeFlagBitsKHX((VkExternalSemaphoreHandleTypeFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkDisplayPlaneAlphaFlagsKHR(VkDisplayPlaneAlphaFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDisplayPlaneAlphaFlagBitsKHR((VkDisplayPlaneAlphaFlagBitsKHR) object, settings, indents);
}
inline std::ostream& dump_text_VkSurfaceCounterFlagsEXT(VkSurfaceCounterFlagsEXT object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSurfaceCounterFlagBitsEXT((VkSurfaceCounterFlagBitsEXT) object, settings, indents);
}
inline std::ostream& dump_text_VkExternalSemaphoreFeatureFlagsKHX(VkExternalSemaphoreFeatureFlagsKHX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalSemaphoreFeatureFlagBitsKHX((VkExternalSemaphoreFeatureFlagBitsKHX) object, settings, indents);
}
inline std::ostream& dump_text_VkCommandPoolResetFlags(VkCommandPoolResetFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandPoolResetFlagBits((VkCommandPoolResetFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkColorComponentFlags(VkColorComponentFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkColorComponentFlagBits((VkColorComponentFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkIndirectCommandsLayoutUsageFlagsNVX(VkIndirectCommandsLayoutUsageFlagsNVX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkIndirectCommandsLayoutUsageFlagBitsNVX((VkIndirectCommandsLayoutUsageFlagBitsNVX) object, settings, indents);
}
inline std::ostream& dump_text_VkQueryResultFlags(VkQueryResultFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueryResultFlagBits((VkQueryResultFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkDependencyFlags(VkDependencyFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDependencyFlagBits((VkDependencyFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkExternalMemoryHandleTypeFlagsNV(VkExternalMemoryHandleTypeFlagsNV object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalMemoryHandleTypeFlagBitsNV((VkExternalMemoryHandleTypeFlagBitsNV) object, settings, indents);
}
inline std::ostream& dump_text_VkObjectEntryUsageFlagsNVX(VkObjectEntryUsageFlagsNVX object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkObjectEntryUsageFlagBitsNVX((VkObjectEntryUsageFlagBitsNVX) object, settings, indents);
}
inline std::ostream& dump_text_VkSwapchainCreateFlagsKHR(VkSwapchainCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSwapchainCreateFlagBitsKHR((VkSwapchainCreateFlagBitsKHR) object, settings, indents);
}
inline std::ostream& dump_text_VkExternalMemoryFeatureFlagsNV(VkExternalMemoryFeatureFlagsNV object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalMemoryFeatureFlagBitsNV((VkExternalMemoryFeatureFlagBitsNV) object, settings, indents);
}
inline std::ostream& dump_text_VkFormatFeatureFlags(VkFormatFeatureFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkFormatFeatureFlagBits((VkFormatFeatureFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkStencilFaceFlags(VkStencilFaceFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkStencilFaceFlagBits((VkStencilFaceFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkAttachmentDescriptionFlags(VkAttachmentDescriptionFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkAttachmentDescriptionFlagBits((VkAttachmentDescriptionFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkCommandBufferUsageFlags(VkCommandBufferUsageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandBufferUsageFlagBits((VkCommandBufferUsageFlagBits) object, settings, indents);
}
inline std::ostream& dump_text_VkShaderStageFlags(VkShaderStageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkShaderStageFlagBits((VkShaderStageFlagBits) object, settings, indents);
}


inline std::ostream& dump_text_VkMemoryMapFlags(VkMemoryMapFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineDiscardRectangleStateCreateFlagsEXT(VkPipelineDiscardRectangleStateCreateFlagsEXT object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineTessellationStateCreateFlags(VkPipelineTessellationStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkSamplerCreateFlags(VkSamplerCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkDeviceCreateFlags(VkDeviceCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkDeviceQueueCreateFlags(VkDeviceQueueCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkShaderModuleCreateFlags(VkShaderModuleCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineViewportStateCreateFlags(VkPipelineViewportStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
inline std::ostream& dump_text_VkMirSurfaceCreateFlagsKHR(VkMirSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MIR_KHR
inline std::ostream& dump_text_VkImageViewCreateFlags(VkImageViewCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineCacheCreateFlags(VkPipelineCacheCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkSemaphoreCreateFlags(VkSemaphoreCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineRasterizationStateCreateFlags(VkPipelineRasterizationStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkEventCreateFlags(VkEventCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkDescriptorUpdateTemplateCreateFlagsKHR(VkDescriptorUpdateTemplateCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline std::ostream& dump_text_VkXlibSurfaceCreateFlagsKHR(VkXlibSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
inline std::ostream& dump_text_VkDisplaySurfaceCreateFlagsKHR(VkDisplaySurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineShaderStageCreateFlags(VkPipelineShaderStageCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_VI_NN)
inline std::ostream& dump_text_VkViSurfaceCreateFlagsNN(VkViSurfaceCreateFlagsNN object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_VI_NN
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
inline std::ostream& dump_text_VkAndroidSurfaceCreateFlagsKHR(VkAndroidSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
#if defined(VK_USE_PLATFORM_IOS_MVK)
inline std::ostream& dump_text_VkIOSSurfaceCreateFlagsMVK(VkIOSSurfaceCreateFlagsMVK object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_IOS_MVK
inline std::ostream& dump_text_VkPipelineMultisampleStateCreateFlags(VkPipelineMultisampleStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkQueryPoolCreateFlags(VkQueryPoolCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineDepthStencilStateCreateFlags(VkPipelineDepthStencilStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
inline std::ostream& dump_text_VkWaylandSurfaceCreateFlagsKHR(VkWaylandSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_MACOS_MVK)
inline std::ostream& dump_text_VkMacOSSurfaceCreateFlagsMVK(VkMacOSSurfaceCreateFlagsMVK object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MACOS_MVK
inline std::ostream& dump_text_VkFramebufferCreateFlags(VkFramebufferCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline std::ostream& dump_text_VkXcbSurfaceCreateFlagsKHR(VkXcbSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
inline std::ostream& dump_text_VkBufferViewCreateFlags(VkBufferViewCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline std::ostream& dump_text_VkWin32SurfaceCreateFlagsKHR(VkWin32SurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
inline std::ostream& dump_text_VkPipelineVertexInputStateCreateFlags(VkPipelineVertexInputStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkDescriptorPoolResetFlags(VkDescriptorPoolResetFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkCommandPoolTrimFlagsKHR(VkCommandPoolTrimFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineViewportSwizzleStateCreateFlagsNV(VkPipelineViewportSwizzleStateCreateFlagsNV object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkDisplayModeCreateFlagsKHR(VkDisplayModeCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkRenderPassCreateFlags(VkRenderPassCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineInputAssemblyStateCreateFlags(VkPipelineInputAssemblyStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineLayoutCreateFlags(VkPipelineLayoutCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineDynamicStateCreateFlags(VkPipelineDynamicStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkInstanceCreateFlags(VkInstanceCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline std::ostream& dump_text_VkPipelineColorBlendStateCreateFlags(VkPipelineColorBlendStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}

//======================= Func Pointer Implementations ======================//

inline std::ostream& dump_text_PFN_vkDebugReportCallbackEXT(PFN_vkDebugReportCallbackEXT object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_PFN_vkInternalAllocationNotification(PFN_vkInternalAllocationNotification object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_PFN_vkAllocationFunction(PFN_vkAllocationFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_PFN_vkReallocationFunction(PFN_vkReallocationFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_PFN_vkInternalFreeNotification(PFN_vkInternalFreeNotification object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_PFN_vkFreeFunction(PFN_vkFreeFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline std::ostream& dump_text_PFN_vkVoidFunction(PFN_vkVoidFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}

//========================== Struct Implementations =========================//

std::ostream& dump_text_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceQueueCreateFlags>(object.flags, settings, "VkDeviceQueueCreateFlags", "flags", indents + 1, dump_text_VkDeviceQueueCreateFlags);
    dump_text_value<const uint32_t>(object.queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.queueCount, settings, "uint32_t", "queueCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const float>(object.pQueuePriorities, object.queueCount, settings, "const float*", "const float", "pQueuePriorities", indents + 1, dump_text_float);
    return settings.stream();
}
std::ostream& dump_text_VkApplicationInfo(const VkApplicationInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const char*>(object.pApplicationName, settings, "const char*", "pApplicationName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.applicationVersion, settings, "uint32_t", "applicationVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const char*>(object.pEngineName, settings, "const char*", "pEngineName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.engineVersion, settings, "uint32_t", "engineVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.apiVersion, settings, "uint32_t", "apiVersion", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkAllocationCallbacks(const VkAllocationCallbacks& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const void*>(object.pUserData, settings, "void*", "pUserData", indents + 1, dump_text_void);
    dump_text_value<const PFN_vkAllocationFunction>(object.pfnAllocation, settings, "PFN_vkAllocationFunction", "pfnAllocation", indents + 1, dump_text_PFN_vkAllocationFunction);
    dump_text_value<const PFN_vkReallocationFunction>(object.pfnReallocation, settings, "PFN_vkReallocationFunction", "pfnReallocation", indents + 1, dump_text_PFN_vkReallocationFunction);
    dump_text_value<const PFN_vkFreeFunction>(object.pfnFree, settings, "PFN_vkFreeFunction", "pfnFree", indents + 1, dump_text_PFN_vkFreeFunction);
    dump_text_value<const PFN_vkInternalAllocationNotification>(object.pfnInternalAllocation, settings, "PFN_vkInternalAllocationNotification", "pfnInternalAllocation", indents + 1, dump_text_PFN_vkInternalAllocationNotification);
    dump_text_value<const PFN_vkInternalFreeNotification>(object.pfnInternalFree, settings, "PFN_vkInternalFreeNotification", "pfnInternalFree", indents + 1, dump_text_PFN_vkInternalFreeNotification);
    return settings.stream();
}
std::ostream& dump_text_VkObjectTableVertexBufferEntryNVX(const VkObjectTableVertexBufferEntryNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkObjectEntryTypeNVX>(object.type, settings, "VkObjectEntryTypeNVX", "type", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_value<const VkObjectEntryUsageFlagsNVX>(object.flags, settings, "VkObjectEntryUsageFlagsNVX", "flags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    return settings.stream();
}
std::ostream& dump_text_VkImageFormatProperties2KHR(const VkImageFormatProperties2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImageFormatProperties>(object.imageFormatProperties, settings, "VkImageFormatProperties", "imageFormatProperties", indents + 1, dump_text_VkImageFormatProperties);
    return settings.stream();
}
std::ostream& dump_text_VkImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSwapchainKHR>(object.swapchain, settings, "VkSwapchainKHR", "swapchain", indents + 1, dump_text_VkSwapchainKHR);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceCreateInfo(const VkDeviceCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceCreateFlags>(object.flags, settings, "VkDeviceCreateFlags", "flags", indents + 1, dump_text_VkDeviceCreateFlags);
    dump_text_value<const uint32_t>(object.queueCreateInfoCount, settings, "uint32_t", "queueCreateInfoCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceQueueCreateInfo>(object.pQueueCreateInfos, object.queueCreateInfoCount, settings, "const VkDeviceQueueCreateInfo*", "const VkDeviceQueueCreateInfo", "pQueueCreateInfos", indents + 1, dump_text_VkDeviceQueueCreateInfo);
    dump_text_value<const uint32_t>(object.enabledLayerCount, settings, "uint32_t", "enabledLayerCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledLayerNames, object.enabledLayerCount, settings, "const char* const*", "const char* const", "ppEnabledLayerNames", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.enabledExtensionCount, settings, "uint32_t", "enabledExtensionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledExtensionNames, object.enabledExtensionCount, settings, "const char* const*", "const char* const", "ppEnabledExtensionNames", indents + 1, dump_text_cstring);
    dump_text_pointer<const VkPhysicalDeviceFeatures>(object.pEnabledFeatures, settings, "const VkPhysicalDeviceFeatures*", "pEnabledFeatures", indents + 1, dump_text_VkPhysicalDeviceFeatures);
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryImageCreateInfoKHX(const VkExternalMemoryImageCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsKHX>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsKHX", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkImageType>(object.type, settings, "VkImageType", "type", indents + 1, dump_text_VkImageType);
    dump_text_value<const VkImageTiling>(object.tiling, settings, "VkImageTiling", "tiling", indents + 1, dump_text_VkImageTiling);
    dump_text_value<const VkImageUsageFlags>(object.usage, settings, "VkImageUsageFlags", "usage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkImageCreateFlags>(object.flags, settings, "VkImageCreateFlags", "flags", indents + 1, dump_text_VkImageCreateFlags);
    return settings.stream();
}
std::ostream& dump_text_VkObjectTableIndexBufferEntryNVX(const VkObjectTableIndexBufferEntryNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkObjectEntryTypeNVX>(object.type, settings, "VkObjectEntryTypeNVX", "type", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_value<const VkObjectEntryUsageFlagsNVX>(object.flags, settings, "VkObjectEntryUsageFlagsNVX", "flags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkIndexType>(object.indexType, settings, "VkIndexType", "indexType", indents + 1, dump_text_VkIndexType);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineViewportStateCreateFlags>(object.flags, settings, "VkPipelineViewportStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineViewportStateCreateFlags);
    dump_text_value<const uint32_t>(object.viewportCount, settings, "uint32_t", "viewportCount", indents + 1, dump_text_uint32_t);
    if(false)
    dump_text_array<const VkViewport>(object.pViewports, object.viewportCount, settings, "const VkViewport*", "const VkViewport", "pViewports", indents + 1, dump_text_VkViewport);
    else
        dump_text_special("UNUSED", settings, "const VkViewport*", "pViewports", indents + 1);
    dump_text_value<const uint32_t>(object.scissorCount, settings, "uint32_t", "scissorCount", indents + 1, dump_text_uint32_t);
    if(false)
    dump_text_array<const VkRect2D>(object.pScissors, object.scissorCount, settings, "const VkRect2D*", "const VkRect2D", "pScissors", indents + 1, dump_text_VkRect2D);
    else
        dump_text_special("UNUSED", settings, "const VkRect2D*", "pScissors", indents + 1);
    return settings.stream();
}
std::ostream& dump_text_VkAcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSwapchainKHR>(object.swapchain, settings, "VkSwapchainKHR", "swapchain", indents + 1, dump_text_VkSwapchainKHR);
    dump_text_value<const uint64_t>(object.timeout, settings, "uint64_t", "timeout", indents + 1, dump_text_uint64_t);
    dump_text_value<const VkSemaphore>(object.semaphore, settings, "VkSemaphore", "semaphore", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const VkFence>(object.fence, settings, "VkFence", "fence", indents + 1, dump_text_VkFence);
    dump_text_value<const uint32_t>(object.deviceMask, settings, "uint32_t", "deviceMask", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkMappedMemoryRange(const VkMappedMemoryRange& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkFenceCreateInfo(const VkFenceCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFenceCreateFlags>(object.flags, settings, "VkFenceCreateFlags", "flags", indents + 1, dump_text_VkFenceCreateFlags);
    return settings.stream();
}
std::ostream& dump_text_VkBindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSwapchainKHR>(object.swapchain, settings, "VkSwapchainKHR", "swapchain", indents + 1, dump_text_VkSwapchainKHR);
    dump_text_value<const uint32_t>(object.imageIndex, settings, "uint32_t", "imageIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryBufferCreateInfoKHX(const VkExternalMemoryBufferCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsKHX>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsKHX", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkQueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkQueueFamilyProperties>(object.queueFamilyProperties, settings, "VkQueueFamilyProperties", "queueFamilyProperties", indents + 1, dump_text_VkQueueFamilyProperties);
    return settings.stream();
}
std::ostream& dump_text_VkIndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineBindPoint>(object.pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", indents + 1, dump_text_VkPipelineBindPoint);
    dump_text_value<const VkIndirectCommandsLayoutUsageFlagsNVX>(object.flags, settings, "VkIndirectCommandsLayoutUsageFlagsNVX", "flags", indents + 1, dump_text_VkIndirectCommandsLayoutUsageFlagsNVX);
    dump_text_value<const uint32_t>(object.tokenCount, settings, "uint32_t", "tokenCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkIndirectCommandsLayoutTokenNVX>(object.pTokens, object.tokenCount, settings, "const VkIndirectCommandsLayoutTokenNVX*", "const VkIndirectCommandsLayoutTokenNVX", "pTokens", indents + 1, dump_text_VkIndirectCommandsLayoutTokenNVX);
    return settings.stream();
}
std::ostream& dump_text_VkObjectTablePushConstantEntryNVX(const VkObjectTablePushConstantEntryNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkObjectEntryTypeNVX>(object.type, settings, "VkObjectEntryTypeNVX", "type", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_value<const VkObjectEntryUsageFlagsNVX>(object.flags, settings, "VkObjectEntryUsageFlagsNVX", "flags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    dump_text_value<const VkPipelineLayout>(object.pipelineLayout, settings, "VkPipelineLayout", "pipelineLayout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const VkShaderStageFlags>(object.stageFlags, settings, "VkShaderStageFlags", "stageFlags", indents + 1, dump_text_VkShaderStageFlags);
    return settings.stream();
}
std::ostream& dump_text_VkSparseMemoryBind(const VkSparseMemoryBind& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.resourceOffset, settings, "VkDeviceSize", "resourceOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.memoryOffset, settings, "VkDeviceSize", "memoryOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkSparseMemoryBindFlags>(object.flags, settings, "VkSparseMemoryBindFlags", "flags", indents + 1, dump_text_VkSparseMemoryBindFlags);
    return settings.stream();
}
std::ostream& dump_text_VkRect2D(const VkRect2D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkOffset2D>(object.offset, settings, "VkOffset2D", "offset", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkExtent2D>(object.extent, settings, "VkExtent2D", "extent", indents + 1, dump_text_VkExtent2D);
    return settings.stream();
}
std::ostream& dump_text_VkRenderPassBeginInfo(const VkRenderPassBeginInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const VkFramebuffer>(object.framebuffer, settings, "VkFramebuffer", "framebuffer", indents + 1, dump_text_VkFramebuffer);
    dump_text_value<const VkRect2D>(object.renderArea, settings, "VkRect2D", "renderArea", indents + 1, dump_text_VkRect2D);
    dump_text_value<const uint32_t>(object.clearValueCount, settings, "uint32_t", "clearValueCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkClearValue>(object.pClearValues, object.clearValueCount, settings, "const VkClearValue*", "const VkClearValue", "pClearValues", indents + 1, dump_text_VkClearValue);
    return settings.stream();
}
std::ostream& dump_text_VkSamplerCreateInfo(const VkSamplerCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSamplerCreateFlags>(object.flags, settings, "VkSamplerCreateFlags", "flags", indents + 1, dump_text_VkSamplerCreateFlags);
    dump_text_value<const VkFilter>(object.magFilter, settings, "VkFilter", "magFilter", indents + 1, dump_text_VkFilter);
    dump_text_value<const VkFilter>(object.minFilter, settings, "VkFilter", "minFilter", indents + 1, dump_text_VkFilter);
    dump_text_value<const VkSamplerMipmapMode>(object.mipmapMode, settings, "VkSamplerMipmapMode", "mipmapMode", indents + 1, dump_text_VkSamplerMipmapMode);
    dump_text_value<const VkSamplerAddressMode>(object.addressModeU, settings, "VkSamplerAddressMode", "addressModeU", indents + 1, dump_text_VkSamplerAddressMode);
    dump_text_value<const VkSamplerAddressMode>(object.addressModeV, settings, "VkSamplerAddressMode", "addressModeV", indents + 1, dump_text_VkSamplerAddressMode);
    dump_text_value<const VkSamplerAddressMode>(object.addressModeW, settings, "VkSamplerAddressMode", "addressModeW", indents + 1, dump_text_VkSamplerAddressMode);
    dump_text_value<const float>(object.mipLodBias, settings, "float", "mipLodBias", indents + 1, dump_text_float);
    dump_text_value<const VkBool32>(object.anisotropyEnable, settings, "VkBool32", "anisotropyEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.maxAnisotropy, settings, "float", "maxAnisotropy", indents + 1, dump_text_float);
    dump_text_value<const VkBool32>(object.compareEnable, settings, "VkBool32", "compareEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkCompareOp>(object.compareOp, settings, "VkCompareOp", "compareOp", indents + 1, dump_text_VkCompareOp);
    dump_text_value<const float>(object.minLod, settings, "float", "minLod", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxLod, settings, "float", "maxLod", indents + 1, dump_text_float);
    dump_text_value<const VkBorderColor>(object.borderColor, settings, "VkBorderColor", "borderColor", indents + 1, dump_text_VkBorderColor);
    dump_text_value<const VkBool32>(object.unnormalizedCoordinates, settings, "VkBool32", "unnormalizedCoordinates", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkViewport(const VkViewport& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const float>(object.x, settings, "float", "x", indents + 1, dump_text_float);
    dump_text_value<const float>(object.y, settings, "float", "y", indents + 1, dump_text_float);
    dump_text_value<const float>(object.width, settings, "float", "width", indents + 1, dump_text_float);
    dump_text_value<const float>(object.height, settings, "float", "height", indents + 1, dump_text_float);
    dump_text_value<const float>(object.minDepth, settings, "float", "minDepth", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxDepth, settings, "float", "maxDepth", indents + 1, dump_text_float);
    return settings.stream();
}
std::ostream& dump_text_VkExportMemoryAllocateInfoKHX(const VkExportMemoryAllocateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsKHX>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsKHX", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceProperties(const VkPhysicalDeviceProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.apiVersion, settings, "uint32_t", "apiVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.driverVersion, settings, "uint32_t", "driverVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.vendorID, settings, "uint32_t", "vendorID", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.deviceID, settings, "uint32_t", "deviceID", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkPhysicalDeviceType>(object.deviceType, settings, "VkPhysicalDeviceType", "deviceType", indents + 1, dump_text_VkPhysicalDeviceType);
    dump_text_value<const char*>(object.deviceName, settings, "char[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE]", "deviceName", indents + 1, dump_text_cstring);
    dump_text_array<const uint8_t>(object.pipelineCacheUUID, 16, settings, "uint8_t[VK_UUID_SIZE]", "uint8_t", "pipelineCacheUUID", indents + 1, dump_text_uint8_t);
    dump_text_value<const VkPhysicalDeviceLimits>(object.limits, settings, "VkPhysicalDeviceLimits", "limits", indents + 1, dump_text_VkPhysicalDeviceLimits);
    dump_text_value<const VkPhysicalDeviceSparseProperties>(object.sparseProperties, settings, "VkPhysicalDeviceSparseProperties", "sparseProperties", indents + 1, dump_text_VkPhysicalDeviceSparseProperties);
    return settings.stream();
}
std::ostream& dump_text_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const uint32_t>(object.bindCount, settings, "uint32_t", "bindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseMemoryBind>(object.pBinds, object.bindCount, settings, "const VkSparseMemoryBind*", "const VkSparseMemoryBind", "pBinds", indents + 1, dump_text_VkSparseMemoryBind);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.swapchainCount, settings, "uint32_t", "swapchainCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pDeviceMasks, object.swapchainCount, settings, "const uint32_t*", "const uint32_t", "pDeviceMasks", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDeviceGroupPresentModeFlagBitsKHX>(object.mode, settings, "VkDeviceGroupPresentModeFlagBitsKHX", "mode", indents + 1, dump_text_VkDeviceGroupPresentModeFlagBitsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkBindSparseInfo(const VkBindSparseInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pWaitSemaphores, object.waitSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pWaitSemaphores", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const uint32_t>(object.bufferBindCount, settings, "uint32_t", "bufferBindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseBufferMemoryBindInfo>(object.pBufferBinds, object.bufferBindCount, settings, "const VkSparseBufferMemoryBindInfo*", "const VkSparseBufferMemoryBindInfo", "pBufferBinds", indents + 1, dump_text_VkSparseBufferMemoryBindInfo);
    dump_text_value<const uint32_t>(object.imageOpaqueBindCount, settings, "uint32_t", "imageOpaqueBindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseImageOpaqueMemoryBindInfo>(object.pImageOpaqueBinds, object.imageOpaqueBindCount, settings, "const VkSparseImageOpaqueMemoryBindInfo*", "const VkSparseImageOpaqueMemoryBindInfo", "pImageOpaqueBinds", indents + 1, dump_text_VkSparseImageOpaqueMemoryBindInfo);
    dump_text_value<const uint32_t>(object.imageBindCount, settings, "uint32_t", "imageBindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseImageMemoryBindInfo>(object.pImageBinds, object.imageBindCount, settings, "const VkSparseImageMemoryBindInfo*", "const VkSparseImageMemoryBindInfo", "pImageBinds", indents + 1, dump_text_VkSparseImageMemoryBindInfo);
    dump_text_value<const uint32_t>(object.signalSemaphoreCount, settings, "uint32_t", "signalSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pSignalSemaphores, object.signalSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pSignalSemaphores", indents + 1, dump_text_VkSemaphore);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
std::ostream& dump_text_VkMirSurfaceCreateInfoKHR(const VkMirSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkMirSurfaceCreateFlagsKHR>(object.flags, settings, "VkMirSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkMirSurfaceCreateFlagsKHR);
    dump_text_pointer<const MirConnection>(object.connection, settings, "MirConnection*", "connection", indents + 1, dump_text_MirConnection);
    dump_text_pointer<const MirSurface>(object.mirSurface, settings, "MirSurface*", "mirSurface", indents + 1, dump_text_MirSurface);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_MIR_KHR
std::ostream& dump_text_VkSubresourceLayout(const VkSubresourceLayout& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.rowPitch, settings, "VkDeviceSize", "rowPitch", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.arrayPitch, settings, "VkDeviceSize", "arrayPitch", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.depthPitch, settings, "VkDeviceSize", "depthPitch", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPhysicalDeviceMemoryProperties>(object.memoryProperties, settings, "VkPhysicalDeviceMemoryProperties", "memoryProperties", indents + 1, dump_text_VkPhysicalDeviceMemoryProperties);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkExportMemoryWin32HandleInfoKHX(const VkExportMemoryWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const SECURITY_ATTRIBUTES*>(object.pAttributes, settings, "const SECURITY_ATTRIBUTES*", "pAttributes", indents + 1, dump_text_SECURITY_ATTRIBUTES);
    dump_text_value<const DWORD>(object.dwAccess, settings, "DWORD", "dwAccess", indents + 1, dump_text_DWORD);
    dump_text_value<const LPCWSTR>(object.name, settings, "LPCWSTR", "name", indents + 1, dump_text_LPCWSTR);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const uint32_t>(object.bindCount, settings, "uint32_t", "bindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseMemoryBind>(object.pBinds, object.bindCount, settings, "const VkSparseMemoryBind*", "const VkSparseMemoryBind", "pBinds", indents + 1, dump_text_VkSparseMemoryBind);
    return settings.stream();
}
std::ostream& dump_text_VkPresentInfoKHR(const VkPresentInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pWaitSemaphores, object.waitSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pWaitSemaphores", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const uint32_t>(object.swapchainCount, settings, "uint32_t", "swapchainCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSwapchainKHR>(object.pSwapchains, object.swapchainCount, settings, "const VkSwapchainKHR*", "const VkSwapchainKHR", "pSwapchains", indents + 1, dump_text_VkSwapchainKHR);
    dump_text_array<const uint32_t>(object.pImageIndices, object.swapchainCount, settings, "const uint32_t*", "const uint32_t", "pImageIndices", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkResult>(object.pResults, object.swapchainCount, settings, "VkResult*", "VkResult", "pResults", indents + 1, dump_text_VkResult);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkImportMemoryWin32HandleInfoKHX(const VkImportMemoryWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(object.handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
    dump_text_value<const HANDLE>(object.handle, settings, "HANDLE", "handle", indents + 1, dump_text_HANDLE);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkDeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceGroupPresentModeFlagsKHX>(object.modes, settings, "VkDeviceGroupPresentModeFlagsKHX", "modes", indents + 1, dump_text_VkDeviceGroupPresentModeFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkExtensionProperties(const VkExtensionProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const char*>(object.extensionName, settings, "char[VK_MAX_EXTENSION_NAME_SIZE]", "extensionName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.specVersion, settings, "uint32_t", "specVersion", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkExtent2D(const VkExtent2D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.width, settings, "uint32_t", "width", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.height, settings, "uint32_t", "height", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceLimits(const VkPhysicalDeviceLimits& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.maxImageDimension1D, settings, "uint32_t", "maxImageDimension1D", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageDimension2D, settings, "uint32_t", "maxImageDimension2D", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageDimension3D, settings, "uint32_t", "maxImageDimension3D", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageDimensionCube, settings, "uint32_t", "maxImageDimensionCube", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageArrayLayers, settings, "uint32_t", "maxImageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTexelBufferElements, settings, "uint32_t", "maxTexelBufferElements", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxUniformBufferRange, settings, "uint32_t", "maxUniformBufferRange", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxStorageBufferRange, settings, "uint32_t", "maxStorageBufferRange", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPushConstantsSize, settings, "uint32_t", "maxPushConstantsSize", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxMemoryAllocationCount, settings, "uint32_t", "maxMemoryAllocationCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxSamplerAllocationCount, settings, "uint32_t", "maxSamplerAllocationCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDeviceSize>(object.bufferImageGranularity, settings, "VkDeviceSize", "bufferImageGranularity", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.sparseAddressSpaceSize, settings, "VkDeviceSize", "sparseAddressSpaceSize", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.maxBoundDescriptorSets, settings, "uint32_t", "maxBoundDescriptorSets", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorSamplers, settings, "uint32_t", "maxPerStageDescriptorSamplers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorUniformBuffers, settings, "uint32_t", "maxPerStageDescriptorUniformBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorStorageBuffers, settings, "uint32_t", "maxPerStageDescriptorStorageBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorSampledImages, settings, "uint32_t", "maxPerStageDescriptorSampledImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorStorageImages, settings, "uint32_t", "maxPerStageDescriptorStorageImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorInputAttachments, settings, "uint32_t", "maxPerStageDescriptorInputAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageResources, settings, "uint32_t", "maxPerStageResources", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetSamplers, settings, "uint32_t", "maxDescriptorSetSamplers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetUniformBuffers, settings, "uint32_t", "maxDescriptorSetUniformBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetUniformBuffersDynamic, settings, "uint32_t", "maxDescriptorSetUniformBuffersDynamic", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetStorageBuffers, settings, "uint32_t", "maxDescriptorSetStorageBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetStorageBuffersDynamic, settings, "uint32_t", "maxDescriptorSetStorageBuffersDynamic", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetSampledImages, settings, "uint32_t", "maxDescriptorSetSampledImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetStorageImages, settings, "uint32_t", "maxDescriptorSetStorageImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetInputAttachments, settings, "uint32_t", "maxDescriptorSetInputAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputAttributes, settings, "uint32_t", "maxVertexInputAttributes", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputBindings, settings, "uint32_t", "maxVertexInputBindings", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputAttributeOffset, settings, "uint32_t", "maxVertexInputAttributeOffset", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputBindingStride, settings, "uint32_t", "maxVertexInputBindingStride", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexOutputComponents, settings, "uint32_t", "maxVertexOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationGenerationLevel, settings, "uint32_t", "maxTessellationGenerationLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationPatchSize, settings, "uint32_t", "maxTessellationPatchSize", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlPerVertexInputComponents, settings, "uint32_t", "maxTessellationControlPerVertexInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlPerVertexOutputComponents, settings, "uint32_t", "maxTessellationControlPerVertexOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlPerPatchOutputComponents, settings, "uint32_t", "maxTessellationControlPerPatchOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlTotalOutputComponents, settings, "uint32_t", "maxTessellationControlTotalOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationEvaluationInputComponents, settings, "uint32_t", "maxTessellationEvaluationInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationEvaluationOutputComponents, settings, "uint32_t", "maxTessellationEvaluationOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryShaderInvocations, settings, "uint32_t", "maxGeometryShaderInvocations", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryInputComponents, settings, "uint32_t", "maxGeometryInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryOutputComponents, settings, "uint32_t", "maxGeometryOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryOutputVertices, settings, "uint32_t", "maxGeometryOutputVertices", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryTotalOutputComponents, settings, "uint32_t", "maxGeometryTotalOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentInputComponents, settings, "uint32_t", "maxFragmentInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentOutputAttachments, settings, "uint32_t", "maxFragmentOutputAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentDualSrcAttachments, settings, "uint32_t", "maxFragmentDualSrcAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentCombinedOutputResources, settings, "uint32_t", "maxFragmentCombinedOutputResources", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxComputeSharedMemorySize, settings, "uint32_t", "maxComputeSharedMemorySize", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.maxComputeWorkGroupCount, 3, settings, "uint32_t[3]", "uint32_t", "maxComputeWorkGroupCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxComputeWorkGroupInvocations, settings, "uint32_t", "maxComputeWorkGroupInvocations", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.maxComputeWorkGroupSize, 3, settings, "uint32_t[3]", "uint32_t", "maxComputeWorkGroupSize", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.subPixelPrecisionBits, settings, "uint32_t", "subPixelPrecisionBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.subTexelPrecisionBits, settings, "uint32_t", "subTexelPrecisionBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.mipmapPrecisionBits, settings, "uint32_t", "mipmapPrecisionBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDrawIndexedIndexValue, settings, "uint32_t", "maxDrawIndexedIndexValue", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDrawIndirectCount, settings, "uint32_t", "maxDrawIndirectCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const float>(object.maxSamplerLodBias, settings, "float", "maxSamplerLodBias", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxSamplerAnisotropy, settings, "float", "maxSamplerAnisotropy", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.maxViewports, settings, "uint32_t", "maxViewports", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.maxViewportDimensions, 2, settings, "uint32_t[2]", "uint32_t", "maxViewportDimensions", indents + 1, dump_text_uint32_t);
    dump_text_array<const float>(object.viewportBoundsRange, 2, settings, "float[2]", "float", "viewportBoundsRange", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.viewportSubPixelBits, settings, "uint32_t", "viewportSubPixelBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const size_t>(object.minMemoryMapAlignment, settings, "size_t", "minMemoryMapAlignment", indents + 1, dump_text_size_t);
    dump_text_value<const VkDeviceSize>(object.minTexelBufferOffsetAlignment, settings, "VkDeviceSize", "minTexelBufferOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.minUniformBufferOffsetAlignment, settings, "VkDeviceSize", "minUniformBufferOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.minStorageBufferOffsetAlignment, settings, "VkDeviceSize", "minStorageBufferOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const int32_t>(object.minTexelOffset, settings, "int32_t", "minTexelOffset", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.maxTexelOffset, settings, "uint32_t", "maxTexelOffset", indents + 1, dump_text_uint32_t);
    dump_text_value<const int32_t>(object.minTexelGatherOffset, settings, "int32_t", "minTexelGatherOffset", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.maxTexelGatherOffset, settings, "uint32_t", "maxTexelGatherOffset", indents + 1, dump_text_uint32_t);
    dump_text_value<const float>(object.minInterpolationOffset, settings, "float", "minInterpolationOffset", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxInterpolationOffset, settings, "float", "maxInterpolationOffset", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.subPixelInterpolationOffsetBits, settings, "uint32_t", "subPixelInterpolationOffsetBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFramebufferWidth, settings, "uint32_t", "maxFramebufferWidth", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFramebufferHeight, settings, "uint32_t", "maxFramebufferHeight", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFramebufferLayers, settings, "uint32_t", "maxFramebufferLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlags>(object.framebufferColorSampleCounts, settings, "VkSampleCountFlags", "framebufferColorSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.framebufferDepthSampleCounts, settings, "VkSampleCountFlags", "framebufferDepthSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.framebufferStencilSampleCounts, settings, "VkSampleCountFlags", "framebufferStencilSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.framebufferNoAttachmentsSampleCounts, settings, "VkSampleCountFlags", "framebufferNoAttachmentsSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const uint32_t>(object.maxColorAttachments, settings, "uint32_t", "maxColorAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageColorSampleCounts, settings, "VkSampleCountFlags", "sampledImageColorSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageIntegerSampleCounts, settings, "VkSampleCountFlags", "sampledImageIntegerSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageDepthSampleCounts, settings, "VkSampleCountFlags", "sampledImageDepthSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageStencilSampleCounts, settings, "VkSampleCountFlags", "sampledImageStencilSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.storageImageSampleCounts, settings, "VkSampleCountFlags", "storageImageSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const uint32_t>(object.maxSampleMaskWords, settings, "uint32_t", "maxSampleMaskWords", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkBool32>(object.timestampComputeAndGraphics, settings, "VkBool32", "timestampComputeAndGraphics", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.timestampPeriod, settings, "float", "timestampPeriod", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.maxClipDistances, settings, "uint32_t", "maxClipDistances", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxCullDistances, settings, "uint32_t", "maxCullDistances", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxCombinedClipAndCullDistances, settings, "uint32_t", "maxCombinedClipAndCullDistances", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.discreteQueuePriorities, settings, "uint32_t", "discreteQueuePriorities", indents + 1, dump_text_uint32_t);
    dump_text_array<const float>(object.pointSizeRange, 2, settings, "float[2]", "float", "pointSizeRange", indents + 1, dump_text_float);
    dump_text_array<const float>(object.lineWidthRange, 2, settings, "float[2]", "float", "lineWidthRange", indents + 1, dump_text_float);
    dump_text_value<const float>(object.pointSizeGranularity, settings, "float", "pointSizeGranularity", indents + 1, dump_text_float);
    dump_text_value<const float>(object.lineWidthGranularity, settings, "float", "lineWidthGranularity", indents + 1, dump_text_float);
    dump_text_value<const VkBool32>(object.strictLines, settings, "VkBool32", "strictLines", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.standardSampleLocations, settings, "VkBool32", "standardSampleLocations", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkDeviceSize>(object.optimalBufferCopyOffsetAlignment, settings, "VkDeviceSize", "optimalBufferCopyOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.optimalBufferCopyRowPitchAlignment, settings, "VkDeviceSize", "optimalBufferCopyRowPitchAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.nonCoherentAtomSize, settings, "VkDeviceSize", "nonCoherentAtomSize", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkOffset2D(const VkOffset2D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const int32_t>(object.x, settings, "int32_t", "x", indents + 1, dump_text_int32_t);
    dump_text_value<const int32_t>(object.y, settings, "int32_t", "y", indents + 1, dump_text_int32_t);
    return settings.stream();
}
std::ostream& dump_text_VkQueueFamilyProperties(const VkQueueFamilyProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkQueueFlags>(object.queueFlags, settings, "VkQueueFlags", "queueFlags", indents + 1, dump_text_VkQueueFlags);
    dump_text_value<const uint32_t>(object.queueCount, settings, "uint32_t", "queueCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.timestampValidBits, settings, "uint32_t", "timestampValidBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkExtent3D>(object.minImageTransferGranularity, settings, "VkExtent3D", "minImageTransferGranularity", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
std::ostream& dump_text_VkSparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSparseImageFormatProperties>(object.properties, settings, "VkSparseImageFormatProperties", "properties", indents + 1, dump_text_VkSparseImageFormatProperties);
    return settings.stream();
}
std::ostream& dump_text_VkImportSemaphoreFdInfoKHX(const VkImportSemaphoreFdInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSemaphore>(object.semaphore, settings, "VkSemaphore", "semaphore", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const VkExternalSemaphoreHandleTypeFlagBitsKHX>(object.handleType, settings, "VkExternalSemaphoreHandleTypeFlagBitsKHX", "handleType", indents + 1, dump_text_VkExternalSemaphoreHandleTypeFlagBitsKHX);
    dump_text_value<const int>(object.fd, settings, "int", "fd", indents + 1, dump_text_int);
    return settings.stream();
}
std::ostream& dump_text_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDebugReportObjectTypeEXT>(object.objectType, settings, "VkDebugReportObjectTypeEXT", "objectType", indents + 1, dump_text_VkDebugReportObjectTypeEXT);
    dump_text_value<const uint64_t>(object.object, settings, "uint64_t", "object", indents + 1, dump_text_uint64_t);
    dump_text_value<const char*>(object.pObjectName, settings, "const char*", "pObjectName", indents + 1, dump_text_cstring);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceSparseProperties(const VkPhysicalDeviceSparseProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBool32>(object.residencyStandard2DBlockShape, settings, "VkBool32", "residencyStandard2DBlockShape", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyStandard2DMultisampleBlockShape, settings, "VkBool32", "residencyStandard2DMultisampleBlockShape", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyStandard3DBlockShape, settings, "VkBool32", "residencyStandard3DBlockShape", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyAlignedMipSize, settings, "VkBool32", "residencyAlignedMipSize", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyNonResidentStrict, settings, "VkBool32", "residencyNonResidentStrict", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkMemoryRequirements(const VkMemoryRequirements& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.alignment, settings, "VkDeviceSize", "alignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.memoryTypeBits, settings, "uint32_t", "memoryTypeBits", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const uint32_t>(object.bindCount, settings, "uint32_t", "bindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseImageMemoryBind>(object.pBinds, object.bindCount, settings, "const VkSparseImageMemoryBind*", "const VkSparseImageMemoryBind", "pBinds", indents + 1, dump_text_VkSparseImageMemoryBind);
    return settings.stream();
}
std::ostream& dump_text_VkDispatchIndirectCommand(const VkDispatchIndirectCommand& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.x, settings, "uint32_t", "x", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.y, settings, "uint32_t", "y", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.z, settings, "uint32_t", "z", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineRasterizationStateCreateFlags>(object.flags, settings, "VkPipelineRasterizationStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineRasterizationStateCreateFlags);
    dump_text_value<const VkBool32>(object.depthClampEnable, settings, "VkBool32", "depthClampEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.rasterizerDiscardEnable, settings, "VkBool32", "rasterizerDiscardEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkPolygonMode>(object.polygonMode, settings, "VkPolygonMode", "polygonMode", indents + 1, dump_text_VkPolygonMode);
    dump_text_value<const VkCullModeFlags>(object.cullMode, settings, "VkCullModeFlags", "cullMode", indents + 1, dump_text_VkCullModeFlags);
    dump_text_value<const VkFrontFace>(object.frontFace, settings, "VkFrontFace", "frontFace", indents + 1, dump_text_VkFrontFace);
    dump_text_value<const VkBool32>(object.depthBiasEnable, settings, "VkBool32", "depthBiasEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.depthBiasConstantFactor, settings, "float", "depthBiasConstantFactor", indents + 1, dump_text_float);
    dump_text_value<const float>(object.depthBiasClamp, settings, "float", "depthBiasClamp", indents + 1, dump_text_float);
    dump_text_value<const float>(object.depthBiasSlopeFactor, settings, "float", "depthBiasSlopeFactor", indents + 1, dump_text_float);
    dump_text_value<const float>(object.lineWidth, settings, "float", "lineWidth", indents + 1, dump_text_float);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkMemoryWin32HandlePropertiesKHX(const VkMemoryWin32HandlePropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.memoryTypeBits, settings, "uint32_t", "memoryTypeBits", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineCacheCreateFlags>(object.flags, settings, "VkPipelineCacheCreateFlags", "flags", indents + 1, dump_text_VkPipelineCacheCreateFlags);
    dump_text_value<const size_t>(object.initialDataSize, settings, "size_t", "initialDataSize", indents + 1, dump_text_size_t);
    dump_text_value<const void*>(object.pInitialData, settings, "const void*", "pInitialData", indents + 1, dump_text_void);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkImageType>(object.type, settings, "VkImageType", "type", indents + 1, dump_text_VkImageType);
    dump_text_value<const VkSampleCountFlagBits>(object.samples, settings, "VkSampleCountFlagBits", "samples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkImageUsageFlags>(object.usage, settings, "VkImageUsageFlags", "usage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkImageTiling>(object.tiling, settings, "VkImageTiling", "tiling", indents + 1, dump_text_VkImageTiling);
    return settings.stream();
}
std::ostream& dump_text_VkImageViewCreateInfo(const VkImageViewCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImageViewCreateFlags>(object.flags, settings, "VkImageViewCreateFlags", "flags", indents + 1, dump_text_VkImageViewCreateFlags);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkImageViewType>(object.viewType, settings, "VkImageViewType", "viewType", indents + 1, dump_text_VkImageViewType);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkComponentMapping>(object.components, settings, "VkComponentMapping", "components", indents + 1, dump_text_VkComponentMapping);
    dump_text_value<const VkImageSubresourceRange>(object.subresourceRange, settings, "VkImageSubresourceRange", "subresourceRange", indents + 1, dump_text_VkImageSubresourceRange);
    return settings.stream();
}
std::ostream& dump_text_VkImageSubresourceRange(const VkImageSubresourceRange& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.baseMipLevel, settings, "uint32_t", "baseMipLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.levelCount, settings, "uint32_t", "levelCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.baseArrayLayer, settings, "uint32_t", "baseArrayLayer", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layerCount, settings, "uint32_t", "layerCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDebugReportObjectTypeEXT>(object.objectType, settings, "VkDebugReportObjectTypeEXT", "objectType", indents + 1, dump_text_VkDebugReportObjectTypeEXT);
    dump_text_value<const uint64_t>(object.object, settings, "uint64_t", "object", indents + 1, dump_text_uint64_t);
    dump_text_value<const uint64_t>(object.tagName, settings, "uint64_t", "tagName", indents + 1, dump_text_uint64_t);
    dump_text_value<const size_t>(object.tagSize, settings, "size_t", "tagSize", indents + 1, dump_text_size_t);
    dump_text_value<const void*>(object.pTag, settings, "const void*", "pTag", indents + 1, dump_text_void);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceMemoryProperties(const VkPhysicalDeviceMemoryProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.memoryTypeCount, settings, "uint32_t", "memoryTypeCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkMemoryType>(object.memoryTypes, 32, settings, "VkMemoryType[VK_MAX_MEMORY_TYPES]", "VkMemoryType", "memoryTypes", indents + 1, dump_text_VkMemoryType);
    dump_text_value<const uint32_t>(object.memoryHeapCount, settings, "uint32_t", "memoryHeapCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkMemoryHeap>(object.memoryHeaps, 16, settings, "VkMemoryHeap[VK_MAX_MEMORY_HEAPS]", "VkMemoryHeap", "memoryHeaps", indents + 1, dump_text_VkMemoryHeap);
    return settings.stream();
}
std::ostream& dump_text_VkOffset3D(const VkOffset3D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const int32_t>(object.x, settings, "int32_t", "x", indents + 1, dump_text_int32_t);
    dump_text_value<const int32_t>(object.y, settings, "int32_t", "y", indents + 1, dump_text_int32_t);
    dump_text_value<const int32_t>(object.z, settings, "int32_t", "z", indents + 1, dump_text_int32_t);
    return settings.stream();
}
std::ostream& dump_text_VkImageSubresource(const VkImageSubresource& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.mipLevel, settings, "uint32_t", "mipLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.arrayLayer, settings, "uint32_t", "arrayLayer", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkSparseImageMemoryBind(const VkSparseImageMemoryBind& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresource>(object.subresource, settings, "VkImageSubresource", "subresource", indents + 1, dump_text_VkImageSubresource);
    dump_text_value<const VkOffset3D>(object.offset, settings, "VkOffset3D", "offset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.memoryOffset, settings, "VkDeviceSize", "memoryOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkSparseMemoryBindFlags>(object.flags, settings, "VkSparseMemoryBindFlags", "flags", indents + 1, dump_text_VkSparseMemoryBindFlags);
    return settings.stream();
}
std::ostream& dump_text_VkDrawIndexedIndirectCommand(const VkDrawIndexedIndirectCommand& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.indexCount, settings, "uint32_t", "indexCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.instanceCount, settings, "uint32_t", "instanceCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.firstIndex, settings, "uint32_t", "firstIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const int32_t>(object.vertexOffset, settings, "int32_t", "vertexOffset", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.firstInstance, settings, "uint32_t", "firstInstance", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkComponentMapping(const VkComponentMapping& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkComponentSwizzle>(object.r, settings, "VkComponentSwizzle", "r", indents + 1, dump_text_VkComponentSwizzle);
    dump_text_value<const VkComponentSwizzle>(object.g, settings, "VkComponentSwizzle", "g", indents + 1, dump_text_VkComponentSwizzle);
    dump_text_value<const VkComponentSwizzle>(object.b, settings, "VkComponentSwizzle", "b", indents + 1, dump_text_VkComponentSwizzle);
    dump_text_value<const VkComponentSwizzle>(object.a, settings, "VkComponentSwizzle", "a", indents + 1, dump_text_VkComponentSwizzle);
    return settings.stream();
}
std::ostream& dump_text_VkMemoryType(const VkMemoryType& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkMemoryPropertyFlags>(object.propertyFlags, settings, "VkMemoryPropertyFlags", "propertyFlags", indents + 1, dump_text_VkMemoryPropertyFlags);
    dump_text_value<const uint32_t>(object.heapIndex, settings, "uint32_t", "heapIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSemaphoreCreateFlags>(object.flags, settings, "VkSemaphoreCreateFlags", "flags", indents + 1, dump_text_VkSemaphoreCreateFlags);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorPoolSize(const VkDescriptorPoolSize& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDescriptorType>(object.type, settings, "VkDescriptorType", "type", indents + 1, dump_text_VkDescriptorType);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkViewportWScalingNV(const VkViewportWScalingNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const float>(object.xcoeff, settings, "float", "xcoeff", indents + 1, dump_text_float);
    dump_text_value<const float>(object.ycoeff, settings, "float", "ycoeff", indents + 1, dump_text_float);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.maxPushDescriptors, settings, "uint32_t", "maxPushDescriptors", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDebugReportFlagsEXT>(object.flags, settings, "VkDebugReportFlagsEXT", "flags", indents + 1, dump_text_VkDebugReportFlagsEXT);
    dump_text_value<const PFN_vkDebugReportCallbackEXT>(object.pfnCallback, settings, "PFN_vkDebugReportCallbackEXT", "pfnCallback", indents + 1, dump_text_PFN_vkDebugReportCallbackEXT);
    dump_text_value<const void*>(object.pUserData, settings, "void*", "pUserData", indents + 1, dump_text_void);
    return settings.stream();
}
std::ostream& dump_text_VkDrawIndirectCommand(const VkDrawIndirectCommand& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.vertexCount, settings, "uint32_t", "vertexCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.instanceCount, settings, "uint32_t", "instanceCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.firstVertex, settings, "uint32_t", "firstVertex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.firstInstance, settings, "uint32_t", "firstInstance", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkMemoryHeap(const VkMemoryHeap& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkMemoryHeapFlags>(object.flags, settings, "VkMemoryHeapFlags", "flags", indents + 1, dump_text_VkMemoryHeapFlags);
    return settings.stream();
}
std::ostream& dump_text_VkSparseImageMemoryRequirements(const VkSparseImageMemoryRequirements& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkSparseImageFormatProperties>(object.formatProperties, settings, "VkSparseImageFormatProperties", "formatProperties", indents + 1, dump_text_VkSparseImageFormatProperties);
    dump_text_value<const uint32_t>(object.imageMipTailFirstLod, settings, "uint32_t", "imageMipTailFirstLod", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDeviceSize>(object.imageMipTailSize, settings, "VkDeviceSize", "imageMipTailSize", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.imageMipTailOffset, settings, "VkDeviceSize", "imageMipTailOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.imageMipTailStride, settings, "VkDeviceSize", "imageMipTailStride", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkBufferCopy(const VkBufferCopy& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.srcOffset, settings, "VkDeviceSize", "srcOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.dstOffset, settings, "VkDeviceSize", "dstOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkMemoryFdPropertiesKHX(const VkMemoryFdPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.memoryTypeBits, settings, "uint32_t", "memoryTypeBits", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceFeatures(const VkPhysicalDeviceFeatures& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBool32>(object.robustBufferAccess, settings, "VkBool32", "robustBufferAccess", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.fullDrawIndexUint32, settings, "VkBool32", "fullDrawIndexUint32", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.imageCubeArray, settings, "VkBool32", "imageCubeArray", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.independentBlend, settings, "VkBool32", "independentBlend", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.geometryShader, settings, "VkBool32", "geometryShader", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.tessellationShader, settings, "VkBool32", "tessellationShader", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sampleRateShading, settings, "VkBool32", "sampleRateShading", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.dualSrcBlend, settings, "VkBool32", "dualSrcBlend", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.logicOp, settings, "VkBool32", "logicOp", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.multiDrawIndirect, settings, "VkBool32", "multiDrawIndirect", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.drawIndirectFirstInstance, settings, "VkBool32", "drawIndirectFirstInstance", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthClamp, settings, "VkBool32", "depthClamp", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthBiasClamp, settings, "VkBool32", "depthBiasClamp", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.fillModeNonSolid, settings, "VkBool32", "fillModeNonSolid", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthBounds, settings, "VkBool32", "depthBounds", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.wideLines, settings, "VkBool32", "wideLines", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.largePoints, settings, "VkBool32", "largePoints", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.alphaToOne, settings, "VkBool32", "alphaToOne", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.multiViewport, settings, "VkBool32", "multiViewport", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.samplerAnisotropy, settings, "VkBool32", "samplerAnisotropy", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.textureCompressionETC2, settings, "VkBool32", "textureCompressionETC2", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.textureCompressionASTC_LDR, settings, "VkBool32", "textureCompressionASTC_LDR", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.textureCompressionBC, settings, "VkBool32", "textureCompressionBC", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.occlusionQueryPrecise, settings, "VkBool32", "occlusionQueryPrecise", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.pipelineStatisticsQuery, settings, "VkBool32", "pipelineStatisticsQuery", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.vertexPipelineStoresAndAtomics, settings, "VkBool32", "vertexPipelineStoresAndAtomics", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.fragmentStoresAndAtomics, settings, "VkBool32", "fragmentStoresAndAtomics", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderTessellationAndGeometryPointSize, settings, "VkBool32", "shaderTessellationAndGeometryPointSize", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderImageGatherExtended, settings, "VkBool32", "shaderImageGatherExtended", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageExtendedFormats, settings, "VkBool32", "shaderStorageImageExtendedFormats", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageMultisample, settings, "VkBool32", "shaderStorageImageMultisample", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageReadWithoutFormat, settings, "VkBool32", "shaderStorageImageReadWithoutFormat", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageWriteWithoutFormat, settings, "VkBool32", "shaderStorageImageWriteWithoutFormat", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderUniformBufferArrayDynamicIndexing, settings, "VkBool32", "shaderUniformBufferArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderSampledImageArrayDynamicIndexing, settings, "VkBool32", "shaderSampledImageArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageBufferArrayDynamicIndexing, settings, "VkBool32", "shaderStorageBufferArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageArrayDynamicIndexing, settings, "VkBool32", "shaderStorageImageArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderClipDistance, settings, "VkBool32", "shaderClipDistance", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderCullDistance, settings, "VkBool32", "shaderCullDistance", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderFloat64, settings, "VkBool32", "shaderFloat64", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderInt64, settings, "VkBool32", "shaderInt64", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderInt16, settings, "VkBool32", "shaderInt16", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderResourceResidency, settings, "VkBool32", "shaderResourceResidency", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderResourceMinLod, settings, "VkBool32", "shaderResourceMinLod", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseBinding, settings, "VkBool32", "sparseBinding", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyBuffer, settings, "VkBool32", "sparseResidencyBuffer", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyImage2D, settings, "VkBool32", "sparseResidencyImage2D", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyImage3D, settings, "VkBool32", "sparseResidencyImage3D", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency2Samples, settings, "VkBool32", "sparseResidency2Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency4Samples, settings, "VkBool32", "sparseResidency4Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency8Samples, settings, "VkBool32", "sparseResidency8Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency16Samples, settings, "VkBool32", "sparseResidency16Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyAliased, settings, "VkBool32", "sparseResidencyAliased", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.variableMultisampleRate, settings, "VkBool32", "variableMultisampleRate", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.inheritedQueries, settings, "VkBool32", "inheritedQueries", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkLayerProperties(const VkLayerProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const char*>(object.layerName, settings, "char[VK_MAX_EXTENSION_NAME_SIZE]", "layerName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.specVersion, settings, "uint32_t", "specVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.implementationVersion, settings, "uint32_t", "implementationVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const char*>(object.description, settings, "char[VK_MAX_DESCRIPTION_SIZE]", "description", indents + 1, dump_text_cstring);
    return settings.stream();
}
std::ostream& dump_text_VkSparseImageFormatProperties(const VkSparseImageFormatProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const VkExtent3D>(object.imageGranularity, settings, "VkExtent3D", "imageGranularity", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const VkSparseImageFormatFlags>(object.flags, settings, "VkSparseImageFormatFlags", "flags", indents + 1, dump_text_VkSparseImageFormatFlags);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorPoolCreateFlags>(object.flags, settings, "VkDescriptorPoolCreateFlags", "flags", indents + 1, dump_text_VkDescriptorPoolCreateFlags);
    dump_text_value<const uint32_t>(object.maxSets, settings, "uint32_t", "maxSets", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.poolSizeCount, settings, "uint32_t", "poolSizeCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorPoolSize>(object.pPoolSizes, object.poolSizeCount, settings, "const VkDescriptorPoolSize*", "const VkDescriptorPoolSize", "pPoolSizes", indents + 1, dump_text_VkDescriptorPoolSize);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineMultisampleStateCreateFlags>(object.flags, settings, "VkPipelineMultisampleStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineMultisampleStateCreateFlags);
    dump_text_value<const VkSampleCountFlagBits>(object.rasterizationSamples, settings, "VkSampleCountFlagBits", "rasterizationSamples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkBool32>(object.sampleShadingEnable, settings, "VkBool32", "sampleShadingEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.minSampleShading, settings, "float", "minSampleShading", indents + 1, dump_text_float);
    dump_text_array<const VkSampleMask>(object.pSampleMask, object.rasterizationSamples / 32, settings, "const VkSampleMask*", "const VkSampleMask", "pSampleMask", indents + 1, dump_text_VkSampleMask);
    dump_text_value<const VkBool32>(object.alphaToCoverageEnable, settings, "VkBool32", "alphaToCoverageEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.alphaToOneEnable, settings, "VkBool32", "alphaToOneEnable", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkEventCreateInfo(const VkEventCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkEventCreateFlags>(object.flags, settings, "VkEventCreateFlags", "flags", indents + 1, dump_text_VkEventCreateFlags);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.viewportWScalingEnable, settings, "VkBool32", "viewportWScalingEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const uint32_t>(object.viewportCount, settings, "uint32_t", "viewportCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkViewportWScalingNV>(object.pViewportWScalings, object.viewportCount, settings, "const VkViewportWScalingNV*", "const VkViewportWScalingNV", "pViewportWScalings", indents + 1, dump_text_VkViewportWScalingNV);
    return settings.stream();
}
std::ostream& dump_text_VkImportMemoryFdInfoKHX(const VkImportMemoryFdInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(object.handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
    dump_text_value<const int>(object.fd, settings, "int", "fd", indents + 1, dump_text_int);
    return settings.stream();
}
std::ostream& dump_text_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const char*>(object.pMarkerName, settings, "const char*", "pMarkerName", indents + 1, dump_text_cstring);
    dump_text_array<const float>(object.color, 4, settings, "float[4]", "float", "color", indents + 1, dump_text_float);
    return settings.stream();
}
std::ostream& dump_text_VkImageFormatProperties(const VkImageFormatProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkExtent3D>(object.maxExtent, settings, "VkExtent3D", "maxExtent", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const uint32_t>(object.maxMipLevels, settings, "uint32_t", "maxMipLevels", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxArrayLayers, settings, "uint32_t", "maxArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlags>(object.sampleCounts, settings, "VkSampleCountFlags", "sampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkDeviceSize>(object.maxResourceSize, settings, "VkDeviceSize", "maxResourceSize", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkExtent3D(const VkExtent3D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.width, settings, "uint32_t", "width", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.height, settings, "uint32_t", "height", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.depth, settings, "uint32_t", "depth", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineCreateFlags>(object.flags, settings, "VkPipelineCreateFlags", "flags", indents + 1, dump_text_VkPipelineCreateFlags);
    dump_text_value<const uint32_t>(object.stageCount, settings, "uint32_t", "stageCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPipelineShaderStageCreateInfo>(object.pStages, object.stageCount, settings, "const VkPipelineShaderStageCreateInfo*", "const VkPipelineShaderStageCreateInfo", "pStages", indents + 1, dump_text_VkPipelineShaderStageCreateInfo);
    dump_text_pointer<const VkPipelineVertexInputStateCreateInfo>(object.pVertexInputState, settings, "const VkPipelineVertexInputStateCreateInfo*", "pVertexInputState", indents + 1, dump_text_VkPipelineVertexInputStateCreateInfo);
    dump_text_pointer<const VkPipelineInputAssemblyStateCreateInfo>(object.pInputAssemblyState, settings, "const VkPipelineInputAssemblyStateCreateInfo*", "pInputAssemblyState", indents + 1, dump_text_VkPipelineInputAssemblyStateCreateInfo);
    dump_text_pointer<const VkPipelineTessellationStateCreateInfo>(object.pTessellationState, settings, "const VkPipelineTessellationStateCreateInfo*", "pTessellationState", indents + 1, dump_text_VkPipelineTessellationStateCreateInfo);
    dump_text_pointer<const VkPipelineViewportStateCreateInfo>(object.pViewportState, settings, "const VkPipelineViewportStateCreateInfo*", "pViewportState", indents + 1, dump_text_VkPipelineViewportStateCreateInfo);
    dump_text_pointer<const VkPipelineRasterizationStateCreateInfo>(object.pRasterizationState, settings, "const VkPipelineRasterizationStateCreateInfo*", "pRasterizationState", indents + 1, dump_text_VkPipelineRasterizationStateCreateInfo);
    dump_text_pointer<const VkPipelineMultisampleStateCreateInfo>(object.pMultisampleState, settings, "const VkPipelineMultisampleStateCreateInfo*", "pMultisampleState", indents + 1, dump_text_VkPipelineMultisampleStateCreateInfo);
    dump_text_pointer<const VkPipelineDepthStencilStateCreateInfo>(object.pDepthStencilState, settings, "const VkPipelineDepthStencilStateCreateInfo*", "pDepthStencilState", indents + 1, dump_text_VkPipelineDepthStencilStateCreateInfo);
    dump_text_pointer<const VkPipelineColorBlendStateCreateInfo>(object.pColorBlendState, settings, "const VkPipelineColorBlendStateCreateInfo*", "pColorBlendState", indents + 1, dump_text_VkPipelineColorBlendStateCreateInfo);
    dump_text_pointer<const VkPipelineDynamicStateCreateInfo>(object.pDynamicState, settings, "const VkPipelineDynamicStateCreateInfo*", "pDynamicState", indents + 1, dump_text_VkPipelineDynamicStateCreateInfo);
    dump_text_value<const VkPipelineLayout>(object.layout, settings, "VkPipelineLayout", "layout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const uint32_t>(object.subpass, settings, "uint32_t", "subpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkPipeline>(object.basePipelineHandle, settings, "VkPipeline", "basePipelineHandle", indents + 1, dump_text_VkPipeline);
    dump_text_value<const int32_t>(object.basePipelineIndex, settings, "int32_t", "basePipelineIndex", indents + 1, dump_text_int32_t);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorSetLayoutCreateFlags>(object.flags, settings, "VkDescriptorSetLayoutCreateFlags", "flags", indents + 1, dump_text_VkDescriptorSetLayoutCreateFlags);
    dump_text_value<const uint32_t>(object.bindingCount, settings, "uint32_t", "bindingCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorSetLayoutBinding>(object.pBindings, object.bindingCount, settings, "const VkDescriptorSetLayoutBinding*", "const VkDescriptorSetLayoutBinding", "pBindings", indents + 1, dump_text_VkDescriptorSetLayoutBinding);
    return settings.stream();
}
std::ostream& dump_text_VkInstanceCreateInfo(const VkInstanceCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkInstanceCreateFlags>(object.flags, settings, "VkInstanceCreateFlags", "flags", indents + 1, dump_text_VkInstanceCreateFlags);
    dump_text_pointer<const VkApplicationInfo>(object.pApplicationInfo, settings, "const VkApplicationInfo*", "pApplicationInfo", indents + 1, dump_text_VkApplicationInfo);
    dump_text_value<const uint32_t>(object.enabledLayerCount, settings, "uint32_t", "enabledLayerCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledLayerNames, object.enabledLayerCount, settings, "const char* const*", "const char* const", "ppEnabledLayerNames", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.enabledExtensionCount, settings, "uint32_t", "enabledExtensionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledExtensionNames, object.enabledExtensionCount, settings, "const char* const*", "const char* const", "ppEnabledExtensionNames", indents + 1, dump_text_cstring);
    return settings.stream();
}
std::ostream& dump_text_VkSubpassDescription(const VkSubpassDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkSubpassDescriptionFlags>(object.flags, settings, "VkSubpassDescriptionFlags", "flags", indents + 1, dump_text_VkSubpassDescriptionFlags);
    dump_text_value<const VkPipelineBindPoint>(object.pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", indents + 1, dump_text_VkPipelineBindPoint);
    dump_text_value<const uint32_t>(object.inputAttachmentCount, settings, "uint32_t", "inputAttachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkAttachmentReference>(object.pInputAttachments, object.inputAttachmentCount, settings, "const VkAttachmentReference*", "const VkAttachmentReference", "pInputAttachments", indents + 1, dump_text_VkAttachmentReference);
    dump_text_value<const uint32_t>(object.colorAttachmentCount, settings, "uint32_t", "colorAttachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkAttachmentReference>(object.pColorAttachments, object.colorAttachmentCount, settings, "const VkAttachmentReference*", "const VkAttachmentReference", "pColorAttachments", indents + 1, dump_text_VkAttachmentReference);
    dump_text_array<const VkAttachmentReference>(object.pResolveAttachments, object.colorAttachmentCount, settings, "const VkAttachmentReference*", "const VkAttachmentReference", "pResolveAttachments", indents + 1, dump_text_VkAttachmentReference);
    dump_text_pointer<const VkAttachmentReference>(object.pDepthStencilAttachment, settings, "const VkAttachmentReference*", "pDepthStencilAttachment", indents + 1, dump_text_VkAttachmentReference);
    dump_text_value<const uint32_t>(object.preserveAttachmentCount, settings, "uint32_t", "preserveAttachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pPreserveAttachments, object.preserveAttachmentCount, settings, "const uint32_t*", "const uint32_t", "pPreserveAttachments", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkBufferMemoryBarrier(const VkBufferMemoryBarrier& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const uint32_t>(object.srcQueueFamilyIndex, settings, "uint32_t", "srcQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstQueueFamilyIndex, settings, "uint32_t", "dstQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDisplaySurfaceCreateFlagsKHR>(object.flags, settings, "VkDisplaySurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkDisplaySurfaceCreateFlagsKHR);
    dump_text_value<const VkDisplayModeKHR>(object.displayMode, settings, "VkDisplayModeKHR", "displayMode", indents + 1, dump_text_VkDisplayModeKHR);
    dump_text_value<const uint32_t>(object.planeIndex, settings, "uint32_t", "planeIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.planeStackIndex, settings, "uint32_t", "planeStackIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.transform, settings, "VkSurfaceTransformFlagBitsKHR", "transform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const float>(object.globalAlpha, settings, "float", "globalAlpha", indents + 1, dump_text_float);
    dump_text_value<const VkDisplayPlaneAlphaFlagBitsKHR>(object.alphaMode, settings, "VkDisplayPlaneAlphaFlagBitsKHR", "alphaMode", indents + 1, dump_text_VkDisplayPlaneAlphaFlagBitsKHR);
    dump_text_value<const VkExtent2D>(object.imageExtent, settings, "VkExtent2D", "imageExtent", indents + 1, dump_text_VkExtent2D);
    return settings.stream();
}
std::ostream& dump_text_VkMemoryBarrier(const VkMemoryBarrier& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    return settings.stream();
}
std::ostream& dump_text_VkSurfaceCapabilitiesKHR(const VkSurfaceCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.minImageCount, settings, "uint32_t", "minImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageCount, settings, "uint32_t", "maxImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkExtent2D>(object.currentExtent, settings, "VkExtent2D", "currentExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.minImageExtent, settings, "VkExtent2D", "minImageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxImageExtent, settings, "VkExtent2D", "maxImageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.maxImageArrayLayers, settings, "uint32_t", "maxImageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSurfaceTransformFlagsKHR>(object.supportedTransforms, settings, "VkSurfaceTransformFlagsKHR", "supportedTransforms", indents + 1, dump_text_VkSurfaceTransformFlagsKHR);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.currentTransform, settings, "VkSurfaceTransformFlagBitsKHR", "currentTransform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const VkCompositeAlphaFlagsKHR>(object.supportedCompositeAlpha, settings, "VkCompositeAlphaFlagsKHR", "supportedCompositeAlpha", indents + 1, dump_text_VkCompositeAlphaFlagsKHR);
    dump_text_value<const VkImageUsageFlags>(object.supportedUsageFlags, settings, "VkImageUsageFlags", "supportedUsageFlags", indents + 1, dump_text_VkImageUsageFlags);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
std::ostream& dump_text_VkXlibSurfaceCreateInfoKHR(const VkXlibSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkXlibSurfaceCreateFlagsKHR>(object.flags, settings, "VkXlibSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkXlibSurfaceCreateFlagsKHR);
    dump_text_value<const Display*>(object.dpy, settings, "Display*", "dpy", indents + 1, dump_text_Display);
    dump_text_value<const Window>(object.window, settings, "Window", "window", indents + 1, dump_text_Window);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XLIB_KHR
std::ostream& dump_text_VkFormatProperties(const VkFormatProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkFormatFeatureFlags>(object.linearTilingFeatures, settings, "VkFormatFeatureFlags", "linearTilingFeatures", indents + 1, dump_text_VkFormatFeatureFlags);
    dump_text_value<const VkFormatFeatureFlags>(object.optimalTilingFeatures, settings, "VkFormatFeatureFlags", "optimalTilingFeatures", indents + 1, dump_text_VkFormatFeatureFlags);
    dump_text_value<const VkFormatFeatureFlags>(object.bufferFeatures, settings, "VkFormatFeatureFlags", "bufferFeatures", indents + 1, dump_text_VkFormatFeatureFlags);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorBufferInfo(const VkDescriptorBufferInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.range, settings, "VkDeviceSize", "range", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkImageCopy(const VkImageCopy& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresourceLayers>(object.srcSubresource, settings, "VkImageSubresourceLayers", "srcSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.srcOffset, settings, "VkOffset3D", "srcOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkImageSubresourceLayers>(object.dstSubresource, settings, "VkImageSubresourceLayers", "dstSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.dstOffset, settings, "VkOffset3D", "dstOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorUpdateTemplateEntryKHR(const VkDescriptorUpdateTemplateEntryKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.dstBinding, settings, "uint32_t", "dstBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstArrayElement, settings, "uint32_t", "dstArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorType>(object.descriptorType, settings, "VkDescriptorType", "descriptorType", indents + 1, dump_text_VkDescriptorType);
    dump_text_value<const size_t>(object.offset, settings, "size_t", "offset", indents + 1, dump_text_size_t);
    dump_text_value<const size_t>(object.stride, settings, "size_t", "stride", indents + 1, dump_text_size_t);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.binding, settings, "uint32_t", "binding", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorType>(object.descriptorType, settings, "VkDescriptorType", "descriptorType", indents + 1, dump_text_VkDescriptorType);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkShaderStageFlags>(object.stageFlags, settings, "VkShaderStageFlags", "stageFlags", indents + 1, dump_text_VkShaderStageFlags);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER))
    dump_text_array<const VkSampler>(object.pImmutableSamplers, object.descriptorCount, settings, "const VkSampler*", "const VkSampler", "pImmutableSamplers", indents + 1, dump_text_VkSampler);
    else
        dump_text_special("UNUSED", settings, "const VkSampler*", "pImmutableSamplers", indents + 1);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorImageInfo(const VkDescriptorImageInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkSampler>(object.sampler, settings, "VkSampler", "sampler", indents + 1, dump_text_VkSampler);
    dump_text_value<const VkImageView>(object.imageView, settings, "VkImageView", "imageView", indents + 1, dump_text_VkImageView);
    dump_text_value<const VkImageLayout>(object.imageLayout, settings, "VkImageLayout", "imageLayout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorUpdateTemplateCreateFlagsKHR>(object.flags, settings, "VkDescriptorUpdateTemplateCreateFlagsKHR", "flags", indents + 1, dump_text_VkDescriptorUpdateTemplateCreateFlagsKHR);
    dump_text_value<const uint32_t>(object.descriptorUpdateEntryCount, settings, "uint32_t", "descriptorUpdateEntryCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorUpdateTemplateEntryKHR>(object.pDescriptorUpdateEntries, object.descriptorUpdateEntryCount, settings, "const VkDescriptorUpdateTemplateEntryKHR*", "const VkDescriptorUpdateTemplateEntryKHR", "pDescriptorUpdateEntries", indents + 1, dump_text_VkDescriptorUpdateTemplateEntryKHR);
    dump_text_value<const VkDescriptorUpdateTemplateTypeKHR>(object.templateType, settings, "VkDescriptorUpdateTemplateTypeKHR", "templateType", indents + 1, dump_text_VkDescriptorUpdateTemplateTypeKHR);
    dump_text_value<const VkDescriptorSetLayout>(object.descriptorSetLayout, settings, "VkDescriptorSetLayout", "descriptorSetLayout", indents + 1, dump_text_VkDescriptorSetLayout);
    dump_text_value<const VkPipelineBindPoint>(object.pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", indents + 1, dump_text_VkPipelineBindPoint);
    dump_text_value<const VkPipelineLayout>(object.pipelineLayout, settings, "VkPipelineLayout", "pipelineLayout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const uint32_t>(object.set, settings, "uint32_t", "set", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkBufferCreateInfo(const VkBufferCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBufferCreateFlags>(object.flags, settings, "VkBufferCreateFlags", "flags", indents + 1, dump_text_VkBufferCreateFlags);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkBufferUsageFlags>(object.usage, settings, "VkBufferUsageFlags", "usage", indents + 1, dump_text_VkBufferUsageFlags);
    dump_text_value<const VkSharingMode>(object.sharingMode, settings, "VkSharingMode", "sharingMode", indents + 1, dump_text_VkSharingMode);
    dump_text_value<const uint32_t>(object.queueFamilyIndexCount, settings, "uint32_t", "queueFamilyIndexCount", indents + 1, dump_text_uint32_t);
    if(object.sharingMode == VK_SHARING_MODE_CONCURRENT)
    dump_text_array<const uint32_t>(object.pQueueFamilyIndices, object.queueFamilyIndexCount, settings, "const uint32_t*", "const uint32_t", "pQueueFamilyIndices", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("UNUSED", settings, "const uint32_t*", "pQueueFamilyIndices", indents + 1);
    return settings.stream();
}
std::ostream& dump_text_VkWriteDescriptorSet(const VkWriteDescriptorSet& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorSet>(object.dstSet, settings, "VkDescriptorSet", "dstSet", indents + 1, dump_text_VkDescriptorSet);
    dump_text_value<const uint32_t>(object.dstBinding, settings, "uint32_t", "dstBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstArrayElement, settings, "uint32_t", "dstArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorType>(object.descriptorType, settings, "VkDescriptorType", "descriptorType", indents + 1, dump_text_VkDescriptorType);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) || (object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_IMAGE))
    dump_text_array<const VkDescriptorImageInfo>(object.pImageInfo, object.descriptorCount, settings, "const VkDescriptorImageInfo*", "const VkDescriptorImageInfo", "pImageInfo", indents + 1, dump_text_VkDescriptorImageInfo);
    else
        dump_text_special("UNUSED", settings, "const VkDescriptorImageInfo*", "pImageInfo", indents + 1);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) || (object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC))
    dump_text_array<const VkDescriptorBufferInfo>(object.pBufferInfo, object.descriptorCount, settings, "const VkDescriptorBufferInfo*", "const VkDescriptorBufferInfo", "pBufferInfo", indents + 1, dump_text_VkDescriptorBufferInfo);
    else
        dump_text_special("UNUSED", settings, "const VkDescriptorBufferInfo*", "pBufferInfo", indents + 1);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER))
    dump_text_array<const VkBufferView>(object.pTexelBufferView, object.descriptorCount, settings, "const VkBufferView*", "const VkBufferView", "pTexelBufferView", indents + 1, dump_text_VkBufferView);
    else
        dump_text_special("UNUSED", settings, "const VkBufferView*", "pTexelBufferView", indents + 1);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.maxIndirectCommandsLayoutTokenCount, settings, "uint32_t", "maxIndirectCommandsLayoutTokenCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxObjectEntryCounts, settings, "uint32_t", "maxObjectEntryCounts", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.minSequenceCountBufferOffsetAlignment, settings, "uint32_t", "minSequenceCountBufferOffsetAlignment", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.minSequenceIndexBufferOffsetAlignment, settings, "uint32_t", "minSequenceIndexBufferOffsetAlignment", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.minCommandsTokenBufferOffsetAlignment, settings, "uint32_t", "minCommandsTokenBufferOffsetAlignment", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkImageSubresourceLayers(const VkImageSubresourceLayers& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.mipLevel, settings, "uint32_t", "mipLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.baseArrayLayer, settings, "uint32_t", "baseArrayLayer", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layerCount, settings, "uint32_t", "layerCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineShaderStageCreateFlags>(object.flags, settings, "VkPipelineShaderStageCreateFlags", "flags", indents + 1, dump_text_VkPipelineShaderStageCreateFlags);
    dump_text_value<const VkShaderStageFlagBits>(object.stage, settings, "VkShaderStageFlagBits", "stage", indents + 1, dump_text_VkShaderStageFlagBits);
    dump_text_value<const VkShaderModule>(object.module, settings, "VkShaderModule", "module", indents + 1, dump_text_VkShaderModule);
    dump_text_value<const char*>(object.pName, settings, "const char*", "pName", indents + 1, dump_text_cstring);
    dump_text_pointer<const VkSpecializationInfo>(object.pSpecializationInfo, settings, "const VkSpecializationInfo*", "pSpecializationInfo", indents + 1, dump_text_VkSpecializationInfo);
    return settings.stream();
}
std::ostream& dump_text_VkImageMemoryBarrier(const VkImageMemoryBarrier& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkImageLayout>(object.oldLayout, settings, "VkImageLayout", "oldLayout", indents + 1, dump_text_VkImageLayout);
    dump_text_value<const VkImageLayout>(object.newLayout, settings, "VkImageLayout", "newLayout", indents + 1, dump_text_VkImageLayout);
    dump_text_value<const uint32_t>(object.srcQueueFamilyIndex, settings, "uint32_t", "srcQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstQueueFamilyIndex, settings, "uint32_t", "dstQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkImageSubresourceRange>(object.subresourceRange, settings, "VkImageSubresourceRange", "subresourceRange", indents + 1, dump_text_VkImageSubresourceRange);
    return settings.stream();
}
std::ostream& dump_text_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.dedicatedAllocation, settings, "VkBool32", "dedicatedAllocation", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineVertexInputStateCreateFlags>(object.flags, settings, "VkPipelineVertexInputStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineVertexInputStateCreateFlags);
    dump_text_value<const uint32_t>(object.vertexBindingDescriptionCount, settings, "uint32_t", "vertexBindingDescriptionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkVertexInputBindingDescription>(object.pVertexBindingDescriptions, object.vertexBindingDescriptionCount, settings, "const VkVertexInputBindingDescription*", "const VkVertexInputBindingDescription", "pVertexBindingDescriptions", indents + 1, dump_text_VkVertexInputBindingDescription);
    dump_text_value<const uint32_t>(object.vertexAttributeDescriptionCount, settings, "uint32_t", "vertexAttributeDescriptionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkVertexInputAttributeDescription>(object.pVertexAttributeDescriptions, object.vertexAttributeDescriptionCount, settings, "const VkVertexInputAttributeDescription*", "const VkVertexInputAttributeDescription", "pVertexAttributeDescriptions", indents + 1, dump_text_VkVertexInputAttributeDescription);
    return settings.stream();
}
std::ostream& dump_text_VkIndirectCommandsTokenNVX(const VkIndirectCommandsTokenNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkIndirectCommandsTokenTypeNVX>(object.tokenType, settings, "VkIndirectCommandsTokenTypeNVX", "tokenType", indents + 1, dump_text_VkIndirectCommandsTokenTypeNVX);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkSubmitInfo(const VkSubmitInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pWaitSemaphores, object.waitSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pWaitSemaphores", indents + 1, dump_text_VkSemaphore);
    dump_text_array<const VkPipelineStageFlags>(object.pWaitDstStageMask, object.waitSemaphoreCount, settings, "const VkPipelineStageFlags*", "const VkPipelineStageFlags", "pWaitDstStageMask", indents + 1, dump_text_VkPipelineStageFlags);
    dump_text_value<const uint32_t>(object.commandBufferCount, settings, "uint32_t", "commandBufferCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkCommandBuffer>(object.pCommandBuffers, object.commandBufferCount, settings, "const VkCommandBuffer*", "const VkCommandBuffer", "pCommandBuffers", indents + 1, dump_text_VkCommandBuffer);
    dump_text_value<const uint32_t>(object.signalSemaphoreCount, settings, "uint32_t", "signalSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pSignalSemaphores, object.signalSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pSignalSemaphores", indents + 1, dump_text_VkSemaphore);
    return settings.stream();
}
std::ostream& dump_text_VkCopyDescriptorSet(const VkCopyDescriptorSet& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorSet>(object.srcSet, settings, "VkDescriptorSet", "srcSet", indents + 1, dump_text_VkDescriptorSet);
    dump_text_value<const uint32_t>(object.srcBinding, settings, "uint32_t", "srcBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.srcArrayElement, settings, "uint32_t", "srcArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorSet>(object.dstSet, settings, "VkDescriptorSet", "dstSet", indents + 1, dump_text_VkDescriptorSet);
    dump_text_value<const uint32_t>(object.dstBinding, settings, "uint32_t", "dstBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstArrayElement, settings, "uint32_t", "dstArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_VkD3D12FenceSubmitInfoKHX(const VkD3D12FenceSubmitInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreValuesCount, settings, "uint32_t", "waitSemaphoreValuesCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint64_t>(object.pWaitSemaphoreValues, object.waitSemaphoreValuesCount, settings, "const uint64_t*", "const uint64_t", "pWaitSemaphoreValues", indents + 1, dump_text_uint64_t);
    dump_text_value<const uint32_t>(object.signalSemaphoreValuesCount, settings, "uint32_t", "signalSemaphoreValuesCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint64_t>(object.pSignalSemaphoreValues, object.signalSemaphoreValuesCount, settings, "const uint64_t*", "const uint64_t", "pSignalSemaphoreValues", indents + 1, dump_text_uint64_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_VkClearDepthStencilValue(const VkClearDepthStencilValue& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const float>(object.depth, settings, "float", "depth", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.stencil, settings, "uint32_t", "stencil", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkWin32KeyedMutexAcquireReleaseInfoKHX(const VkWin32KeyedMutexAcquireReleaseInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.acquireCount, settings, "uint32_t", "acquireCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceMemory>(object.pAcquireSyncs, object.acquireCount, settings, "const VkDeviceMemory*", "const VkDeviceMemory", "pAcquireSyncs", indents + 1, dump_text_VkDeviceMemory);
    dump_text_array<const uint64_t>(object.pAcquireKeys, object.acquireCount, settings, "const uint64_t*", "const uint64_t", "pAcquireKeys", indents + 1, dump_text_uint64_t);
    dump_text_array<const uint32_t>(object.pAcquireTimeouts, object.acquireCount, settings, "const uint32_t*", "const uint32_t", "pAcquireTimeouts", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.releaseCount, settings, "uint32_t", "releaseCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceMemory>(object.pReleaseSyncs, object.releaseCount, settings, "const VkDeviceMemory*", "const VkDeviceMemory", "pReleaseSyncs", indents + 1, dump_text_VkDeviceMemory);
    dump_text_array<const uint64_t>(object.pReleaseKeys, object.releaseCount, settings, "const uint64_t*", "const uint64_t", "pReleaseKeys", indents + 1, dump_text_uint64_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
std::ostream& dump_text_VkAndroidSurfaceCreateInfoKHR(const VkAndroidSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAndroidSurfaceCreateFlagsKHR>(object.flags, settings, "VkAndroidSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkAndroidSurfaceCreateFlagsKHR);
    dump_text_value<const ANativeWindow*>(object.window, settings, "ANativeWindow*", "window", indents + 1, dump_text_ANativeWindow);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
std::ostream& dump_text_VkExternalMemoryPropertiesKHX(const VkExternalMemoryPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkExternalMemoryFeatureFlagsKHX>(object.externalMemoryFeatures, settings, "VkExternalMemoryFeatureFlagsKHX", "externalMemoryFeatures", indents + 1, dump_text_VkExternalMemoryFeatureFlagsKHX);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsKHX>(object.exportFromImportedHandleTypes, settings, "VkExternalMemoryHandleTypeFlagsKHX", "exportFromImportedHandleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsKHX);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsKHX>(object.compatibleHandleTypes, settings, "VkExternalMemoryHandleTypeFlagsKHX", "compatibleHandleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineDepthStencilStateCreateFlags>(object.flags, settings, "VkPipelineDepthStencilStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineDepthStencilStateCreateFlags);
    dump_text_value<const VkBool32>(object.depthTestEnable, settings, "VkBool32", "depthTestEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthWriteEnable, settings, "VkBool32", "depthWriteEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkCompareOp>(object.depthCompareOp, settings, "VkCompareOp", "depthCompareOp", indents + 1, dump_text_VkCompareOp);
    dump_text_value<const VkBool32>(object.depthBoundsTestEnable, settings, "VkBool32", "depthBoundsTestEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.stencilTestEnable, settings, "VkBool32", "stencilTestEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkStencilOpState>(object.front, settings, "VkStencilOpState", "front", indents + 1, dump_text_VkStencilOpState);
    dump_text_value<const VkStencilOpState>(object.back, settings, "VkStencilOpState", "back", indents + 1, dump_text_VkStencilOpState);
    dump_text_value<const float>(object.minDepthBounds, settings, "float", "minDepthBounds", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxDepthBounds, settings, "float", "maxDepthBounds", indents + 1, dump_text_float);
    return settings.stream();
}
std::ostream& dump_text_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.dedicatedAllocation, settings, "VkBool32", "dedicatedAllocation", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.handleType, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleType", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    dump_text_value<const HANDLE>(object.handle, settings, "HANDLE", "handle", indents + 1, dump_text_HANDLE);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkValidationFlagsEXT(const VkValidationFlagsEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.disabledValidationCheckCount, settings, "uint32_t", "disabledValidationCheckCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkValidationCheckEXT>(object.pDisabledValidationChecks, object.disabledValidationCheckCount, settings, "VkValidationCheckEXT*", "VkValidationCheckEXT", "pDisabledValidationChecks", indents + 1, dump_text_VkValidationCheckEXT);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceExternalImageFormatInfoKHX(const VkPhysicalDeviceExternalImageFormatInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(object.handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkAttachmentReference(const VkAttachmentReference& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.attachment, settings, "uint32_t", "attachment", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImageLayout>(object.layout, settings, "VkImageLayout", "layout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
std::ostream& dump_text_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkQueryPoolCreateFlags>(object.flags, settings, "VkQueryPoolCreateFlags", "flags", indents + 1, dump_text_VkQueryPoolCreateFlags);
    dump_text_value<const VkQueryType>(object.queryType, settings, "VkQueryType", "queryType", indents + 1, dump_text_VkQueryType);
    dump_text_value<const uint32_t>(object.queryCount, settings, "uint32_t", "queryCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkQueryPipelineStatisticFlags>(object.pipelineStatistics, settings, "VkQueryPipelineStatisticFlags", "pipelineStatistics", indents + 1, dump_text_VkQueryPipelineStatisticFlags);
    return settings.stream();
}
std::ostream& dump_text_VkSpecializationInfo(const VkSpecializationInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.mapEntryCount, settings, "uint32_t", "mapEntryCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSpecializationMapEntry>(object.pMapEntries, object.mapEntryCount, settings, "const VkSpecializationMapEntry*", "const VkSpecializationMapEntry", "pMapEntries", indents + 1, dump_text_VkSpecializationMapEntry);
    dump_text_value<const size_t>(object.dataSize, settings, "size_t", "dataSize", indents + 1, dump_text_size_t);
    dump_text_value<const void*>(object.pData, settings, "const void*", "pData", indents + 1, dump_text_void);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_VI_NN)
std::ostream& dump_text_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkViSurfaceCreateFlagsNN>(object.flags, settings, "VkViSurfaceCreateFlagsNN", "flags", indents + 1, dump_text_VkViSurfaceCreateFlagsNN);
    dump_text_value<const void*>(object.window, settings, "void*", "window", indents + 1, dump_text_void);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_VI_NN
std::ostream& dump_text_VkSubpassDependency(const VkSubpassDependency& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.srcSubpass, settings, "uint32_t", "srcSubpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstSubpass, settings, "uint32_t", "dstSubpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkPipelineStageFlags>(object.srcStageMask, settings, "VkPipelineStageFlags", "srcStageMask", indents + 1, dump_text_VkPipelineStageFlags);
    dump_text_value<const VkPipelineStageFlags>(object.dstStageMask, settings, "VkPipelineStageFlags", "dstStageMask", indents + 1, dump_text_VkPipelineStageFlags);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkDependencyFlags>(object.dependencyFlags, settings, "VkDependencyFlags", "dependencyFlags", indents + 1, dump_text_VkDependencyFlags);
    return settings.stream();
}
std::ostream& dump_text_VkSpecializationMapEntry(const VkSpecializationMapEntry& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.constantID, settings, "uint32_t", "constantID", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.offset, settings, "uint32_t", "offset", indents + 1, dump_text_uint32_t);
    dump_text_value<const size_t>(object.size, settings, "size_t", "size", indents + 1, dump_text_size_t);
    return settings.stream();
}
std::ostream& dump_text_VkStencilOpState(const VkStencilOpState& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStencilOp>(object.failOp, settings, "VkStencilOp", "failOp", indents + 1, dump_text_VkStencilOp);
    dump_text_value<const VkStencilOp>(object.passOp, settings, "VkStencilOp", "passOp", indents + 1, dump_text_VkStencilOp);
    dump_text_value<const VkStencilOp>(object.depthFailOp, settings, "VkStencilOp", "depthFailOp", indents + 1, dump_text_VkStencilOp);
    dump_text_value<const VkCompareOp>(object.compareOp, settings, "VkCompareOp", "compareOp", indents + 1, dump_text_VkCompareOp);
    dump_text_value<const uint32_t>(object.compareMask, settings, "uint32_t", "compareMask", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.writeMask, settings, "uint32_t", "writeMask", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.reference, settings, "uint32_t", "reference", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkCommandPoolCreateFlags>(object.flags, settings, "VkCommandPoolCreateFlags", "flags", indents + 1, dump_text_VkCommandPoolCreateFlags);
    dump_text_value<const uint32_t>(object.queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_IOS_MVK)
std::ostream& dump_text_VkIOSSurfaceCreateInfoMVK(const VkIOSSurfaceCreateInfoMVK& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkIOSSurfaceCreateFlagsMVK>(object.flags, settings, "VkIOSSurfaceCreateFlagsMVK", "flags", indents + 1, dump_text_VkIOSSurfaceCreateFlagsMVK);
    dump_text_value<const void*>(object.pView, settings, "const void*", "pView", indents + 1, dump_text_void);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_IOS_MVK
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const SECURITY_ATTRIBUTES*>(object.pAttributes, settings, "const SECURITY_ATTRIBUTES*", "pAttributes", indents + 1, dump_text_SECURITY_ATTRIBUTES);
    dump_text_value<const DWORD>(object.dwAccess, settings, "DWORD", "dwAccess", indents + 1, dump_text_DWORD);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkMemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkMemoryAllocateFlagsKHX>(object.flags, settings, "VkMemoryAllocateFlagsKHX", "flags", indents + 1, dump_text_VkMemoryAllocateFlagsKHX);
    dump_text_value<const uint32_t>(object.deviceMask, settings, "uint32_t", "deviceMask", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkRenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.subpassCount, settings, "uint32_t", "subpassCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pViewMasks, object.subpassCount, settings, "const uint32_t*", "const uint32_t", "pViewMasks", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dependencyCount, settings, "uint32_t", "dependencyCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const int32_t>(object.pViewOffsets, object.dependencyCount, settings, "const int32_t*", "const int32_t", "pViewOffsets", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.correlationMaskCount, settings, "uint32_t", "correlationMaskCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pCorrelationMasks, object.correlationMaskCount, settings, "const uint32_t*", "const uint32_t", "pCorrelationMasks", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkBindBufferMemoryInfoKHX(const VkBindBufferMemoryInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.memoryOffset, settings, "VkDeviceSize", "memoryOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.deviceIndexCount, settings, "uint32_t", "deviceIndexCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pDeviceIndices, object.deviceIndexCount, settings, "const uint32_t*", "const uint32_t", "pDeviceIndices", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkExternalImageFormatPropertiesKHX(const VkExternalImageFormatPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryPropertiesKHX>(object.externalMemoryProperties, settings, "VkExternalMemoryPropertiesKHX", "externalMemoryProperties", indents + 1, dump_text_VkExternalMemoryPropertiesKHX);
    return settings.stream();
}
std::ostream& dump_text_VkIndirectCommandsLayoutTokenNVX(const VkIndirectCommandsLayoutTokenNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkIndirectCommandsTokenTypeNVX>(object.tokenType, settings, "VkIndirectCommandsTokenTypeNVX", "tokenType", indents + 1, dump_text_VkIndirectCommandsTokenTypeNVX);
    dump_text_value<const uint32_t>(object.bindingUnit, settings, "uint32_t", "bindingUnit", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dynamicCount, settings, "uint32_t", "dynamicCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.divisor, settings, "uint32_t", "divisor", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkSurfaceFormatKHR(const VkSurfaceFormatKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkColorSpaceKHR>(object.colorSpace, settings, "VkColorSpaceKHR", "colorSpace", indents + 1, dump_text_VkColorSpaceKHR);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceExternalBufferInfoKHX(const VkPhysicalDeviceExternalBufferInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBufferCreateFlags>(object.flags, settings, "VkBufferCreateFlags", "flags", indents + 1, dump_text_VkBufferCreateFlags);
    dump_text_value<const VkBufferUsageFlags>(object.usage, settings, "VkBufferUsageFlags", "usage", indents + 1, dump_text_VkBufferUsageFlags);
    dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(object.handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.perViewPositionAllComponents, settings, "VkBool32", "perViewPositionAllComponents", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkImageBlit(const VkImageBlit& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresourceLayers>(object.srcSubresource, settings, "VkImageSubresourceLayers", "srcSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_array<const VkOffset3D>(object.srcOffsets, 2, settings, "VkOffset3D[2]", "VkOffset3D", "srcOffsets", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkImageSubresourceLayers>(object.dstSubresource, settings, "VkImageSubresourceLayers", "dstSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_array<const VkOffset3D>(object.dstOffsets, 2, settings, "VkOffset3D[2]", "VkOffset3D", "dstOffsets", indents + 1, dump_text_VkOffset3D);
    return settings.stream();
}
std::ostream& dump_text_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    return settings.stream();
}
std::ostream& dump_text_VkClearAttachment(const VkClearAttachment& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.colorAttachment, settings, "uint32_t", "colorAttachment", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkClearValue>(object.clearValue, settings, "VkClearValue", "clearValue", indents + 1, dump_text_VkClearValue);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.acquireCount, settings, "uint32_t", "acquireCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceMemory>(object.pAcquireSyncs, object.acquireCount, settings, "const VkDeviceMemory*", "const VkDeviceMemory", "pAcquireSyncs", indents + 1, dump_text_VkDeviceMemory);
    dump_text_array<const uint64_t>(object.pAcquireKeys, object.acquireCount, settings, "const uint64_t*", "const uint64_t", "pAcquireKeys", indents + 1, dump_text_uint64_t);
    dump_text_array<const uint32_t>(object.pAcquireTimeoutMilliseconds, object.acquireCount, settings, "const uint32_t*", "const uint32_t", "pAcquireTimeoutMilliseconds", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.releaseCount, settings, "uint32_t", "releaseCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceMemory>(object.pReleaseSyncs, object.releaseCount, settings, "const VkDeviceMemory*", "const VkDeviceMemory", "pReleaseSyncs", indents + 1, dump_text_VkDeviceMemory);
    dump_text_array<const uint64_t>(object.pReleaseKeys, object.releaseCount, settings, "const uint64_t*", "const uint64_t", "pReleaseKeys", indents + 1, dump_text_uint64_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkClearRect(const VkClearRect& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkRect2D>(object.rect, settings, "VkRect2D", "rect", indents + 1, dump_text_VkRect2D);
    dump_text_value<const uint32_t>(object.baseArrayLayer, settings, "uint32_t", "baseArrayLayer", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layerCount, settings, "uint32_t", "layerCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.multiview, settings, "VkBool32", "multiview", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.multiviewGeometryShader, settings, "VkBool32", "multiviewGeometryShader", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.multiviewTessellationShader, settings, "VkBool32", "multiviewTessellationShader", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkBindImageMemoryInfoKHX(const VkBindImageMemoryInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.memoryOffset, settings, "VkDeviceSize", "memoryOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.deviceIndexCount, settings, "uint32_t", "deviceIndexCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pDeviceIndices, object.deviceIndexCount, settings, "const uint32_t*", "const uint32_t", "pDeviceIndices", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.SFRRectCount, settings, "uint32_t", "SFRRectCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkRect2D>(object.pSFRRects, object.SFRRectCount, settings, "const VkRect2D*", "const VkRect2D", "pSFRRects", indents + 1, dump_text_VkRect2D);
    return settings.stream();
}
std::ostream& dump_text_VkCmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkObjectTableNVX>(object.objectTable, settings, "VkObjectTableNVX", "objectTable", indents + 1, dump_text_VkObjectTableNVX);
    dump_text_value<const VkIndirectCommandsLayoutNVX>(object.indirectCommandsLayout, settings, "VkIndirectCommandsLayoutNVX", "indirectCommandsLayout", indents + 1, dump_text_VkIndirectCommandsLayoutNVX);
    dump_text_value<const uint32_t>(object.indirectCommandsTokenCount, settings, "uint32_t", "indirectCommandsTokenCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkIndirectCommandsTokenNVX>(object.pIndirectCommandsTokens, object.indirectCommandsTokenCount, settings, "const VkIndirectCommandsTokenNVX*", "const VkIndirectCommandsTokenNVX", "pIndirectCommandsTokens", indents + 1, dump_text_VkIndirectCommandsTokenNVX);
    dump_text_value<const uint32_t>(object.maxSequencesCount, settings, "uint32_t", "maxSequencesCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkCommandBuffer>(object.targetCommandBuffer, settings, "VkCommandBuffer", "targetCommandBuffer", indents + 1, dump_text_VkCommandBuffer);
    dump_text_value<const VkBuffer>(object.sequencesCountBuffer, settings, "VkBuffer", "sequencesCountBuffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.sequencesCountOffset, settings, "VkDeviceSize", "sequencesCountOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkBuffer>(object.sequencesIndexBuffer, settings, "VkBuffer", "sequencesIndexBuffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.sequencesIndexOffset, settings, "VkDeviceSize", "sequencesIndexOffset", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkBufferViewCreateInfo(const VkBufferViewCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBufferViewCreateFlags>(object.flags, settings, "VkBufferViewCreateFlags", "flags", indents + 1, dump_text_VkBufferViewCreateFlags);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.range, settings, "VkDeviceSize", "range", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
std::ostream& dump_text_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.minImageCount, settings, "uint32_t", "minImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageCount, settings, "uint32_t", "maxImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkExtent2D>(object.currentExtent, settings, "VkExtent2D", "currentExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.minImageExtent, settings, "VkExtent2D", "minImageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxImageExtent, settings, "VkExtent2D", "maxImageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.maxImageArrayLayers, settings, "uint32_t", "maxImageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSurfaceTransformFlagsKHR>(object.supportedTransforms, settings, "VkSurfaceTransformFlagsKHR", "supportedTransforms", indents + 1, dump_text_VkSurfaceTransformFlagsKHR);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.currentTransform, settings, "VkSurfaceTransformFlagBitsKHR", "currentTransform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const VkCompositeAlphaFlagsKHR>(object.supportedCompositeAlpha, settings, "VkCompositeAlphaFlagsKHR", "supportedCompositeAlpha", indents + 1, dump_text_VkCompositeAlphaFlagsKHR);
    dump_text_value<const VkImageUsageFlags>(object.supportedUsageFlags, settings, "VkImageUsageFlags", "supportedUsageFlags", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkSurfaceCounterFlagsEXT>(object.supportedSurfaceCounters, settings, "VkSurfaceCounterFlagsEXT", "supportedSurfaceCounters", indents + 1, dump_text_VkSurfaceCounterFlagsEXT);
    return settings.stream();
}
std::ostream& dump_text_VkExternalBufferPropertiesKHX(const VkExternalBufferPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryPropertiesKHX>(object.externalMemoryProperties, settings, "VkExternalMemoryPropertiesKHX", "externalMemoryProperties", indents + 1, dump_text_VkExternalMemoryPropertiesKHX);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineViewportSwizzleStateCreateFlagsNV>(object.flags, settings, "VkPipelineViewportSwizzleStateCreateFlagsNV", "flags", indents + 1, dump_text_VkPipelineViewportSwizzleStateCreateFlagsNV);
    dump_text_value<const uint32_t>(object.viewportCount, settings, "uint32_t", "viewportCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkViewportSwizzleNV>(object.pViewportSwizzles, object.viewportCount, settings, "const VkViewportSwizzleNV*", "const VkViewportSwizzleNV", "pViewportSwizzles", indents + 1, dump_text_VkViewportSwizzleNV);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
std::ostream& dump_text_VkWaylandSurfaceCreateInfoKHR(const VkWaylandSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkWaylandSurfaceCreateFlagsKHR>(object.flags, settings, "VkWaylandSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkWaylandSurfaceCreateFlagsKHR);
    dump_text_pointer<const wl_display>(object.display, settings, "struct wl_display*", "display", indents + 1, dump_text_wl_display);
    dump_text_pointer<const wl_surface>(object.surface, settings, "struct wl_surface*", "surface", indents + 1, dump_text_wl_surface);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
std::ostream& dump_text_VkCmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkObjectTableNVX>(object.objectTable, settings, "VkObjectTableNVX", "objectTable", indents + 1, dump_text_VkObjectTableNVX);
    dump_text_value<const VkIndirectCommandsLayoutNVX>(object.indirectCommandsLayout, settings, "VkIndirectCommandsLayoutNVX", "indirectCommandsLayout", indents + 1, dump_text_VkIndirectCommandsLayoutNVX);
    dump_text_value<const uint32_t>(object.maxSequencesCount, settings, "uint32_t", "maxSequencesCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.deviceMask, settings, "uint32_t", "deviceMask", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.deviceRenderAreaCount, settings, "uint32_t", "deviceRenderAreaCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkRect2D>(object.pDeviceRenderAreas, object.deviceRenderAreaCount, settings, "const VkRect2D*", "const VkRect2D", "pDeviceRenderAreas", indents + 1, dump_text_VkRect2D);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_MACOS_MVK)
std::ostream& dump_text_VkMacOSSurfaceCreateInfoMVK(const VkMacOSSurfaceCreateInfoMVK& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkMacOSSurfaceCreateFlagsMVK>(object.flags, settings, "VkMacOSSurfaceCreateFlagsMVK", "flags", indents + 1, dump_text_VkMacOSSurfaceCreateFlagsMVK);
    dump_text_value<const void*>(object.pView, settings, "const void*", "pView", indents + 1, dump_text_void);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_MACOS_MVK
std::ostream& dump_text_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayKHR>(object.display, settings, "VkDisplayKHR", "display", indents + 1, dump_text_VkDisplayKHR);
    dump_text_value<const char*>(object.displayName, settings, "const char*", "displayName", indents + 1, dump_text_cstring);
    dump_text_value<const VkExtent2D>(object.physicalDimensions, settings, "VkExtent2D", "physicalDimensions", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.physicalResolution, settings, "VkExtent2D", "physicalResolution", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkSurfaceTransformFlagsKHR>(object.supportedTransforms, settings, "VkSurfaceTransformFlagsKHR", "supportedTransforms", indents + 1, dump_text_VkSurfaceTransformFlagsKHR);
    dump_text_value<const VkBool32>(object.planeReorderPossible, settings, "VkBool32", "planeReorderPossible", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.persistentContent, settings, "VkBool32", "persistentContent", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceIDPropertiesKHX(const VkPhysicalDeviceIDPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_array<const uint8_t>(object.deviceUUID, 16, settings, "uint8_t[VK_UUID_SIZE]", "uint8_t", "deviceUUID", indents + 1, dump_text_uint8_t);
    dump_text_array<const uint8_t>(object.driverUUID, 16, settings, "uint8_t[VK_UUID_SIZE]", "uint8_t", "driverUUID", indents + 1, dump_text_uint8_t);
    dump_text_array<const uint8_t>(object.deviceLUID, 8, settings, "uint8_t[VK_LUID_SIZE_KHX]", "uint8_t", "deviceLUID", indents + 1, dump_text_uint8_t);
    dump_text_value<const VkBool32>(object.deviceLUIDValid, settings, "VkBool32", "deviceLUIDValid", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineColorBlendStateCreateFlags>(object.flags, settings, "VkPipelineColorBlendStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineColorBlendStateCreateFlags);
    dump_text_value<const VkBool32>(object.logicOpEnable, settings, "VkBool32", "logicOpEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkLogicOp>(object.logicOp, settings, "VkLogicOp", "logicOp", indents + 1, dump_text_VkLogicOp);
    dump_text_value<const uint32_t>(object.attachmentCount, settings, "uint32_t", "attachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPipelineColorBlendAttachmentState>(object.pAttachments, object.attachmentCount, settings, "const VkPipelineColorBlendAttachmentState*", "const VkPipelineColorBlendAttachmentState", "pAttachments", indents + 1, dump_text_VkPipelineColorBlendAttachmentState);
    dump_text_array<const float>(object.blendConstants, 4, settings, "float[4]", "float", "blendConstants", indents + 1, dump_text_float);
    return settings.stream();
}
std::ostream& dump_text_VkViewportSwizzleNV(const VkViewportSwizzleNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkViewportCoordinateSwizzleNV>(object.x, settings, "VkViewportCoordinateSwizzleNV", "x", indents + 1, dump_text_VkViewportCoordinateSwizzleNV);
    dump_text_value<const VkViewportCoordinateSwizzleNV>(object.y, settings, "VkViewportCoordinateSwizzleNV", "y", indents + 1, dump_text_VkViewportCoordinateSwizzleNV);
    dump_text_value<const VkViewportCoordinateSwizzleNV>(object.z, settings, "VkViewportCoordinateSwizzleNV", "z", indents + 1, dump_text_VkViewportCoordinateSwizzleNV);
    dump_text_value<const VkViewportCoordinateSwizzleNV>(object.w, settings, "VkViewportCoordinateSwizzleNV", "w", indents + 1, dump_text_VkViewportCoordinateSwizzleNV);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayModeParametersKHR(const VkDisplayModeParametersKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkExtent2D>(object.visibleRegion, settings, "VkExtent2D", "visibleRegion", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.refreshRate, settings, "uint32_t", "refreshRate", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceExternalSemaphoreInfoKHX(const VkPhysicalDeviceExternalSemaphoreInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalSemaphoreHandleTypeFlagBitsKHX>(object.handleType, settings, "VkExternalSemaphoreHandleTypeFlagBitsKHX", "handleType", indents + 1, dump_text_VkExternalSemaphoreHandleTypeFlagBitsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkFramebufferCreateInfo(const VkFramebufferCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFramebufferCreateFlags>(object.flags, settings, "VkFramebufferCreateFlags", "flags", indents + 1, dump_text_VkFramebufferCreateFlags);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const uint32_t>(object.attachmentCount, settings, "uint32_t", "attachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkImageView>(object.pAttachments, object.attachmentCount, settings, "const VkImageView*", "const VkImageView", "pAttachments", indents + 1, dump_text_VkImageView);
    dump_text_value<const uint32_t>(object.width, settings, "uint32_t", "width", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.height, settings, "uint32_t", "height", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layers, settings, "uint32_t", "layers", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkExternalSemaphorePropertiesKHX(const VkExternalSemaphorePropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalSemaphoreHandleTypeFlagsKHX>(object.exportFromImportedHandleTypes, settings, "VkExternalSemaphoreHandleTypeFlagsKHX", "exportFromImportedHandleTypes", indents + 1, dump_text_VkExternalSemaphoreHandleTypeFlagsKHX);
    dump_text_value<const VkExternalSemaphoreHandleTypeFlagsKHX>(object.compatibleHandleTypes, settings, "VkExternalSemaphoreHandleTypeFlagsKHX", "compatibleHandleTypes", indents + 1, dump_text_VkExternalSemaphoreHandleTypeFlagsKHX);
    dump_text_value<const VkExternalSemaphoreFeatureFlagsKHX>(object.externalSemaphoreFeatures, settings, "VkExternalSemaphoreFeatureFlagsKHX", "externalSemaphoreFeatures", indents + 1, dump_text_VkExternalSemaphoreFeatureFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkBufferImageCopy(const VkBufferImageCopy& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.bufferOffset, settings, "VkDeviceSize", "bufferOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.bufferRowLength, settings, "uint32_t", "bufferRowLength", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.bufferImageHeight, settings, "uint32_t", "bufferImageHeight", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImageSubresourceLayers>(object.imageSubresource, settings, "VkImageSubresourceLayers", "imageSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.imageOffset, settings, "VkOffset3D", "imageOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.imageExtent, settings, "VkExtent3D", "imageExtent", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.physicalDeviceCount, settings, "uint32_t", "physicalDeviceCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPhysicalDevice>(object.physicalDevices, 32, settings, "VkPhysicalDevice[VK_MAX_DEVICE_GROUP_SIZE_KHX]", "VkPhysicalDevice", "physicalDevices", indents + 1, dump_text_VkPhysicalDevice);
    dump_text_value<const VkBool32>(object.subsetAllocation, settings, "VkBool32", "subsetAllocation", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkVertexInputBindingDescription(const VkVertexInputBindingDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.binding, settings, "uint32_t", "binding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.stride, settings, "uint32_t", "stride", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkVertexInputRate>(object.inputRate, settings, "VkVertexInputRate", "inputRate", indents + 1, dump_text_VkVertexInputRate);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceProperties2KHX(const VkPhysicalDeviceProperties2KHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPhysicalDeviceProperties>(object.properties, settings, "VkPhysicalDeviceProperties", "properties", indents + 1, dump_text_VkPhysicalDeviceProperties);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineInputAssemblyStateCreateFlags>(object.flags, settings, "VkPipelineInputAssemblyStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineInputAssemblyStateCreateFlags);
    dump_text_value<const VkPrimitiveTopology>(object.topology, settings, "VkPrimitiveTopology", "topology", indents + 1, dump_text_VkPrimitiveTopology);
    dump_text_value<const VkBool32>(object.primitiveRestartEnable, settings, "VkBool32", "primitiveRestartEnable", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkImageResolve(const VkImageResolve& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresourceLayers>(object.srcSubresource, settings, "VkImageSubresourceLayers", "srcSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.srcOffset, settings, "VkOffset3D", "srcOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkImageSubresourceLayers>(object.dstSubresource, settings, "VkImageSubresourceLayers", "dstSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.dstOffset, settings, "VkOffset3D", "dstOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
std::ostream& dump_text_VkFormatProperties2KHR(const VkFormatProperties2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFormatProperties>(object.formatProperties, settings, "VkFormatProperties", "formatProperties", indents + 1, dump_text_VkFormatProperties);
    return settings.stream();
}
std::ostream& dump_text_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineCreateFlags>(object.flags, settings, "VkPipelineCreateFlags", "flags", indents + 1, dump_text_VkPipelineCreateFlags);
    dump_text_value<const VkPipelineShaderStageCreateInfo>(object.stage, settings, "VkPipelineShaderStageCreateInfo", "stage", indents + 1, dump_text_VkPipelineShaderStageCreateInfo);
    dump_text_value<const VkPipelineLayout>(object.layout, settings, "VkPipelineLayout", "layout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const VkPipeline>(object.basePipelineHandle, settings, "VkPipeline", "basePipelineHandle", indents + 1, dump_text_VkPipeline);
    dump_text_value<const int32_t>(object.basePipelineIndex, settings, "int32_t", "basePipelineIndex", indents + 1, dump_text_int32_t);
    return settings.stream();
}
std::ostream& dump_text_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkCommandPool>(object.commandPool, settings, "VkCommandPool", "commandPool", indents + 1, dump_text_VkCommandPool);
    dump_text_value<const VkCommandBufferLevel>(object.level, settings, "VkCommandBufferLevel", "level", indents + 1, dump_text_VkCommandBufferLevel);
    dump_text_value<const uint32_t>(object.commandBufferCount, settings, "uint32_t", "commandBufferCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkExportSemaphoreCreateInfoKHX(const VkExportSemaphoreCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalSemaphoreHandleTypeFlagsKHX>(object.handleTypes, settings, "VkExternalSemaphoreHandleTypeFlagsKHX", "handleTypes", indents + 1, dump_text_VkExternalSemaphoreHandleTypeFlagsKHX);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.deviceMask, settings, "uint32_t", "deviceMask", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkVertexInputAttributeDescription(const VkVertexInputAttributeDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.location, settings, "uint32_t", "location", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.binding, settings, "uint32_t", "binding", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const uint32_t>(object.offset, settings, "uint32_t", "offset", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineDynamicStateCreateFlags>(object.flags, settings, "VkPipelineDynamicStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineDynamicStateCreateFlags);
    dump_text_value<const uint32_t>(object.dynamicStateCount, settings, "uint32_t", "dynamicStateCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDynamicState>(object.pDynamicStates, object.dynamicStateCount, settings, "const VkDynamicState*", "const VkDynamicState", "pDynamicStates", indents + 1, dump_text_VkDynamicState);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.maxMultiviewViewCount, settings, "uint32_t", "maxMultiviewViewCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxMultiviewInstanceIndex, settings, "uint32_t", "maxMultiviewInstanceIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
std::ostream& dump_text_VkXcbSurfaceCreateInfoKHR(const VkXcbSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkXcbSurfaceCreateFlagsKHR>(object.flags, settings, "VkXcbSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkXcbSurfaceCreateFlagsKHR);
    dump_text_value<const xcb_connection_t*>(object.connection, settings, "xcb_connection_t*", "connection", indents + 1, dump_text_xcb_connection_t);
    dump_text_value<const xcb_window_t>(object.window, settings, "xcb_window_t", "window", indents + 1, dump_text_xcb_window_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XCB_KHR
std::ostream& dump_text_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSurfaceCounterFlagsEXT>(object.surfaceCounters, settings, "VkSurfaceCounterFlagsEXT", "surfaceCounters", indents + 1, dump_text_VkSurfaceCounterFlagsEXT);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRasterizationOrderAMD>(object.rasterizationOrder, settings, "VkRasterizationOrderAMD", "rasterizationOrder", indents + 1, dump_text_VkRasterizationOrderAMD);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayPlaneCapabilitiesKHR(const VkDisplayPlaneCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayPlaneAlphaFlagsKHR>(object.supportedAlpha, settings, "VkDisplayPlaneAlphaFlagsKHR", "supportedAlpha", indents + 1, dump_text_VkDisplayPlaneAlphaFlagsKHR);
    dump_text_value<const VkOffset2D>(object.minSrcPosition, settings, "VkOffset2D", "minSrcPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkOffset2D>(object.maxSrcPosition, settings, "VkOffset2D", "maxSrcPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkExtent2D>(object.minSrcExtent, settings, "VkExtent2D", "minSrcExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxSrcExtent, settings, "VkExtent2D", "maxSrcExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkOffset2D>(object.minDstPosition, settings, "VkOffset2D", "minDstPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkOffset2D>(object.maxDstPosition, settings, "VkOffset2D", "maxDstPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkExtent2D>(object.minDstExtent, settings, "VkExtent2D", "minDstExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxDstExtent, settings, "VkExtent2D", "maxDstExtent", indents + 1, dump_text_VkExtent2D);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_VkWin32SurfaceCreateInfoKHR(const VkWin32SurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkWin32SurfaceCreateFlagsKHR>(object.flags, settings, "VkWin32SurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkWin32SurfaceCreateFlagsKHR);
    dump_text_value<const HINSTANCE>(object.hinstance, settings, "HINSTANCE", "hinstance", indents + 1, dump_text_HINSTANCE);
    dump_text_value<const HWND>(object.hwnd, settings, "HWND", "hwnd", indents + 1, dump_text_HWND);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_VkDisplayModePropertiesKHR(const VkDisplayModePropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayModeKHR>(object.displayMode, settings, "VkDisplayModeKHR", "displayMode", indents + 1, dump_text_VkDisplayModeKHR);
    dump_text_value<const VkDisplayModeParametersKHR>(object.parameters, settings, "VkDisplayModeParametersKHR", "parameters", indents + 1, dump_text_VkDisplayModeParametersKHR);
    return settings.stream();
}
std::ostream& dump_text_VkObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.objectCount, settings, "uint32_t", "objectCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkObjectEntryTypeNVX>(object.pObjectEntryTypes, object.objectCount, settings, "const VkObjectEntryTypeNVX*", "const VkObjectEntryTypeNVX", "pObjectEntryTypes", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_array<const uint32_t>(object.pObjectEntryCounts, object.objectCount, settings, "const uint32_t*", "const uint32_t", "pObjectEntryCounts", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkObjectEntryUsageFlagsNVX>(object.pObjectEntryUsageFlags, object.objectCount, settings, "const VkObjectEntryUsageFlagsNVX*", "const VkObjectEntryUsageFlagsNVX", "pObjectEntryUsageFlags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    dump_text_value<const uint32_t>(object.maxUniformBuffersPerDescriptor, settings, "uint32_t", "maxUniformBuffersPerDescriptor", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxStorageBuffersPerDescriptor, settings, "uint32_t", "maxStorageBuffersPerDescriptor", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxStorageImagesPerDescriptor, settings, "uint32_t", "maxStorageImagesPerDescriptor", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxSampledImagesPerDescriptor, settings, "uint32_t", "maxSampledImagesPerDescriptor", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPipelineLayouts, settings, "uint32_t", "maxPipelineLayouts", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkImageFormatProperties2KHX(const VkImageFormatProperties2KHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImageFormatProperties>(object.imageFormatProperties, settings, "VkImageFormatProperties", "imageFormatProperties", indents + 1, dump_text_VkImageFormatProperties);
    return settings.stream();
}
std::ostream& dump_text_VkObjectTablePipelineEntryNVX(const VkObjectTablePipelineEntryNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkObjectEntryTypeNVX>(object.type, settings, "VkObjectEntryTypeNVX", "type", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_value<const VkObjectEntryUsageFlagsNVX>(object.flags, settings, "VkObjectEntryUsageFlagsNVX", "flags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    dump_text_value<const VkPipeline>(object.pipeline, settings, "VkPipeline", "pipeline", indents + 1, dump_text_VkPipeline);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pWaitSemaphoreDeviceIndices, object.waitSemaphoreCount, settings, "const uint32_t*", "const uint32_t", "pWaitSemaphoreDeviceIndices", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.commandBufferCount, settings, "uint32_t", "commandBufferCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pCommandBufferDeviceMasks, object.commandBufferCount, settings, "const uint32_t*", "const uint32_t", "pCommandBufferDeviceMasks", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.signalSemaphoreCount, settings, "uint32_t", "signalSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pSignalSemaphoreDeviceIndices, object.signalSemaphoreCount, settings, "const uint32_t*", "const uint32_t", "pSignalSemaphoreDeviceIndices", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkObjectTableEntryNVX(const VkObjectTableEntryNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkObjectEntryTypeNVX>(object.type, settings, "VkObjectEntryTypeNVX", "type", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_value<const VkObjectEntryUsageFlagsNVX>(object.flags, settings, "VkObjectEntryUsageFlagsNVX", "flags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    return settings.stream();
}
std::ostream& dump_text_VkMemoryAllocateInfo(const VkMemoryAllocateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceSize>(object.allocationSize, settings, "VkDeviceSize", "allocationSize", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.memoryTypeIndex, settings, "uint32_t", "memoryTypeIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorPool>(object.descriptorPool, settings, "VkDescriptorPool", "descriptorPool", indents + 1, dump_text_VkDescriptorPool);
    dump_text_value<const uint32_t>(object.descriptorSetCount, settings, "uint32_t", "descriptorSetCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorSetLayout>(object.pSetLayouts, object.descriptorSetCount, settings, "const VkDescriptorSetLayout*", "const VkDescriptorSetLayout", "pSetLayouts", indents + 1, dump_text_VkDescriptorSetLayout);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDisplayModeCreateFlagsKHR>(object.flags, settings, "VkDisplayModeCreateFlagsKHR", "flags", indents + 1, dump_text_VkDisplayModeCreateFlagsKHR);
    dump_text_value<const VkDisplayModeParametersKHR>(object.parameters, settings, "VkDisplayModeParametersKHR", "parameters", indents + 1, dump_text_VkDisplayModeParametersKHR);
    return settings.stream();
}
std::ostream& dump_text_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSwapchainCreateFlagsKHR>(object.flags, settings, "VkSwapchainCreateFlagsKHR", "flags", indents + 1, dump_text_VkSwapchainCreateFlagsKHR);
    dump_text_value<const VkSurfaceKHR>(object.surface, settings, "VkSurfaceKHR", "surface", indents + 1, dump_text_VkSurfaceKHR);
    dump_text_value<const uint32_t>(object.minImageCount, settings, "uint32_t", "minImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkFormat>(object.imageFormat, settings, "VkFormat", "imageFormat", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkColorSpaceKHR>(object.imageColorSpace, settings, "VkColorSpaceKHR", "imageColorSpace", indents + 1, dump_text_VkColorSpaceKHR);
    dump_text_value<const VkExtent2D>(object.imageExtent, settings, "VkExtent2D", "imageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.imageArrayLayers, settings, "uint32_t", "imageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImageUsageFlags>(object.imageUsage, settings, "VkImageUsageFlags", "imageUsage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkSharingMode>(object.imageSharingMode, settings, "VkSharingMode", "imageSharingMode", indents + 1, dump_text_VkSharingMode);
    dump_text_value<const uint32_t>(object.queueFamilyIndexCount, settings, "uint32_t", "queueFamilyIndexCount", indents + 1, dump_text_uint32_t);
    if(object.imageSharingMode == VK_SHARING_MODE_CONCURRENT)
    dump_text_array<const uint32_t>(object.pQueueFamilyIndices, object.queueFamilyIndexCount, settings, "const uint32_t*", "const uint32_t", "pQueueFamilyIndices", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("UNUSED", settings, "const uint32_t*", "pQueueFamilyIndices", indents + 1);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.preTransform, settings, "VkSurfaceTransformFlagBitsKHR", "preTransform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const VkCompositeAlphaFlagBitsKHR>(object.compositeAlpha, settings, "VkCompositeAlphaFlagBitsKHR", "compositeAlpha", indents + 1, dump_text_VkCompositeAlphaFlagBitsKHR);
    dump_text_value<const VkPresentModeKHR>(object.presentMode, settings, "VkPresentModeKHR", "presentMode", indents + 1, dump_text_VkPresentModeKHR);
    dump_text_value<const VkBool32>(object.clipped, settings, "VkBool32", "clipped", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkSwapchainKHR>(object.oldSwapchain, settings, "VkSwapchainKHR", "oldSwapchain", indents + 1, dump_text_VkSwapchainKHR);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRect2D>(object.srcRect, settings, "VkRect2D", "srcRect", indents + 1, dump_text_VkRect2D);
    dump_text_value<const VkRect2D>(object.dstRect, settings, "VkRect2D", "dstRect", indents + 1, dump_text_VkRect2D);
    dump_text_value<const VkBool32>(object.persistent, settings, "VkBool32", "persistent", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPhysicalDeviceFeatures>(object.features, settings, "VkPhysicalDeviceFeatures", "features", indents + 1, dump_text_VkPhysicalDeviceFeatures);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineColorBlendAttachmentState(const VkPipelineColorBlendAttachmentState& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBool32>(object.blendEnable, settings, "VkBool32", "blendEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBlendFactor>(object.srcColorBlendFactor, settings, "VkBlendFactor", "srcColorBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendFactor>(object.dstColorBlendFactor, settings, "VkBlendFactor", "dstColorBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendOp>(object.colorBlendOp, settings, "VkBlendOp", "colorBlendOp", indents + 1, dump_text_VkBlendOp);
    dump_text_value<const VkBlendFactor>(object.srcAlphaBlendFactor, settings, "VkBlendFactor", "srcAlphaBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendFactor>(object.dstAlphaBlendFactor, settings, "VkBlendFactor", "dstAlphaBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendOp>(object.alphaBlendOp, settings, "VkBlendOp", "alphaBlendOp", indents + 1, dump_text_VkBlendOp);
    dump_text_value<const VkColorComponentFlags>(object.colorWriteMask, settings, "VkColorComponentFlags", "colorWriteMask", indents + 1, dump_text_VkColorComponentFlags);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_array<const uint32_t>(object.presentMask, 32, settings, "uint32_t[VK_MAX_DEVICE_GROUP_SIZE_KHX]", "uint32_t", "presentMask", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDeviceGroupPresentModeFlagsKHX>(object.modes, settings, "VkDeviceGroupPresentModeFlagsKHX", "modes", indents + 1, dump_text_VkDeviceGroupPresentModeFlagsKHX);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_VkImportSemaphoreWin32HandleInfoKHX(const VkImportSemaphoreWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSemaphore>(object.semaphore, settings, "VkSemaphore", "semaphore", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const VkExternalSemaphoreHandleTypeFlagsKHX>(object.handleType, settings, "VkExternalSemaphoreHandleTypeFlagsKHX", "handleType", indents + 1, dump_text_VkExternalSemaphoreHandleTypeFlagsKHX);
    dump_text_value<const HANDLE>(object.handle, settings, "HANDLE", "handle", indents + 1, dump_text_HANDLE);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_VkObjectTableDescriptorSetEntryNVX(const VkObjectTableDescriptorSetEntryNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkObjectEntryTypeNVX>(object.type, settings, "VkObjectEntryTypeNVX", "type", indents + 1, dump_text_VkObjectEntryTypeNVX);
    dump_text_value<const VkObjectEntryUsageFlagsNVX>(object.flags, settings, "VkObjectEntryUsageFlagsNVX", "flags", indents + 1, dump_text_VkObjectEntryUsageFlagsNVX);
    dump_text_value<const VkPipelineLayout>(object.pipelineLayout, settings, "VkPipelineLayout", "pipelineLayout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const VkDescriptorSet>(object.descriptorSet, settings, "VkDescriptorSet", "descriptorSet", indents + 1, dump_text_VkDescriptorSet);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceImageFormatInfo2KHX(const VkPhysicalDeviceImageFormatInfo2KHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkImageType>(object.type, settings, "VkImageType", "type", indents + 1, dump_text_VkImageType);
    dump_text_value<const VkImageTiling>(object.tiling, settings, "VkImageTiling", "tiling", indents + 1, dump_text_VkImageTiling);
    dump_text_value<const VkImageUsageFlags>(object.usage, settings, "VkImageUsageFlags", "usage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkImageCreateFlags>(object.flags, settings, "VkImageCreateFlags", "flags", indents + 1, dump_text_VkImageCreateFlags);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDisplayPowerStateEXT>(object.powerState, settings, "VkDisplayPowerStateEXT", "powerState", indents + 1, dump_text_VkDisplayPowerStateEXT);
    return settings.stream();
}
std::ostream& dump_text_VkImageCreateInfo(const VkImageCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImageCreateFlags>(object.flags, settings, "VkImageCreateFlags", "flags", indents + 1, dump_text_VkImageCreateFlags);
    dump_text_value<const VkImageType>(object.imageType, settings, "VkImageType", "imageType", indents + 1, dump_text_VkImageType);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const uint32_t>(object.mipLevels, settings, "uint32_t", "mipLevels", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.arrayLayers, settings, "uint32_t", "arrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlagBits>(object.samples, settings, "VkSampleCountFlagBits", "samples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkImageTiling>(object.tiling, settings, "VkImageTiling", "tiling", indents + 1, dump_text_VkImageTiling);
    dump_text_value<const VkImageUsageFlags>(object.usage, settings, "VkImageUsageFlags", "usage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkSharingMode>(object.sharingMode, settings, "VkSharingMode", "sharingMode", indents + 1, dump_text_VkSharingMode);
    dump_text_value<const uint32_t>(object.queueFamilyIndexCount, settings, "uint32_t", "queueFamilyIndexCount", indents + 1, dump_text_uint32_t);
    if(object.sharingMode == VK_SHARING_MODE_CONCURRENT)
    dump_text_array<const uint32_t>(object.pQueueFamilyIndices, object.queueFamilyIndexCount, settings, "const uint32_t*", "const uint32_t", "pQueueFamilyIndices", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("UNUSED", settings, "const uint32_t*", "pQueueFamilyIndices", indents + 1);
    dump_text_value<const VkImageLayout>(object.initialLayout, settings, "VkImageLayout", "initialLayout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayPlanePropertiesKHR(const VkDisplayPlanePropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayKHR>(object.currentDisplay, settings, "VkDisplayKHR", "currentDisplay", indents + 1, dump_text_VkDisplayKHR);
    dump_text_value<const uint32_t>(object.currentStackIndex, settings, "uint32_t", "currentStackIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_VkExportSemaphoreWin32HandleInfoKHX(const VkExportSemaphoreWin32HandleInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const SECURITY_ATTRIBUTES*>(object.pAttributes, settings, "const SECURITY_ATTRIBUTES*", "pAttributes", indents + 1, dump_text_SECURITY_ATTRIBUTES);
    dump_text_value<const DWORD>(object.dwAccess, settings, "DWORD", "dwAccess", indents + 1, dump_text_DWORD);
    dump_text_value<const LPCWSTR>(object.name, settings, "LPCWSTR", "name", indents + 1, dump_text_LPCWSTR);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceEventTypeEXT>(object.deviceEvent, settings, "VkDeviceEventTypeEXT", "deviceEvent", indents + 1, dump_text_VkDeviceEventTypeEXT);
    return settings.stream();
}
std::ostream& dump_text_VkPushConstantRange(const VkPushConstantRange& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkShaderStageFlags>(object.stageFlags, settings, "VkShaderStageFlags", "stageFlags", indents + 1, dump_text_VkShaderStageFlags);
    dump_text_value<const uint32_t>(object.offset, settings, "uint32_t", "offset", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.size, settings, "uint32_t", "size", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkRenderPassCreateInfo(const VkRenderPassCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRenderPassCreateFlags>(object.flags, settings, "VkRenderPassCreateFlags", "flags", indents + 1, dump_text_VkRenderPassCreateFlags);
    dump_text_value<const uint32_t>(object.attachmentCount, settings, "uint32_t", "attachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkAttachmentDescription>(object.pAttachments, object.attachmentCount, settings, "const VkAttachmentDescription*", "const VkAttachmentDescription", "pAttachments", indents + 1, dump_text_VkAttachmentDescription);
    dump_text_value<const uint32_t>(object.subpassCount, settings, "uint32_t", "subpassCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSubpassDescription>(object.pSubpasses, object.subpassCount, settings, "const VkSubpassDescription*", "const VkSubpassDescription", "pSubpasses", indents + 1, dump_text_VkSubpassDescription);
    dump_text_value<const uint32_t>(object.dependencyCount, settings, "uint32_t", "dependencyCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSubpassDependency>(object.pDependencies, object.dependencyCount, settings, "const VkSubpassDependency*", "const VkSubpassDependency", "pDependencies", indents + 1, dump_text_VkSubpassDependency);
    return settings.stream();
}
std::ostream& dump_text_VkExternalImageFormatPropertiesNV(const VkExternalImageFormatPropertiesNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageFormatProperties>(object.imageFormatProperties, settings, "VkImageFormatProperties", "imageFormatProperties", indents + 1, dump_text_VkImageFormatProperties);
    dump_text_value<const VkExternalMemoryFeatureFlagsNV>(object.externalMemoryFeatures, settings, "VkExternalMemoryFeatureFlagsNV", "externalMemoryFeatures", indents + 1, dump_text_VkExternalMemoryFeatureFlagsNV);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.exportFromImportedHandleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "exportFromImportedHandleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.compatibleHandleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "compatibleHandleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    return settings.stream();
}
std::ostream& dump_text_VkAttachmentDescription(const VkAttachmentDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkAttachmentDescriptionFlags>(object.flags, settings, "VkAttachmentDescriptionFlags", "flags", indents + 1, dump_text_VkAttachmentDescriptionFlags);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkSampleCountFlagBits>(object.samples, settings, "VkSampleCountFlagBits", "samples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkAttachmentLoadOp>(object.loadOp, settings, "VkAttachmentLoadOp", "loadOp", indents + 1, dump_text_VkAttachmentLoadOp);
    dump_text_value<const VkAttachmentStoreOp>(object.storeOp, settings, "VkAttachmentStoreOp", "storeOp", indents + 1, dump_text_VkAttachmentStoreOp);
    dump_text_value<const VkAttachmentLoadOp>(object.stencilLoadOp, settings, "VkAttachmentLoadOp", "stencilLoadOp", indents + 1, dump_text_VkAttachmentLoadOp);
    dump_text_value<const VkAttachmentStoreOp>(object.stencilStoreOp, settings, "VkAttachmentStoreOp", "stencilStoreOp", indents + 1, dump_text_VkAttachmentStoreOp);
    dump_text_value<const VkImageLayout>(object.initialLayout, settings, "VkImageLayout", "initialLayout", indents + 1, dump_text_VkImageLayout);
    dump_text_value<const VkImageLayout>(object.finalLayout, settings, "VkImageLayout", "finalLayout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
std::ostream& dump_text_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkCommandBufferUsageFlags>(object.flags, settings, "VkCommandBufferUsageFlags", "flags", indents + 1, dump_text_VkCommandBufferUsageFlags);
    if(false)
    dump_text_pointer<const VkCommandBufferInheritanceInfo>(object.pInheritanceInfo, settings, "const VkCommandBufferInheritanceInfo*", "pInheritanceInfo", indents + 1, dump_text_VkCommandBufferInheritanceInfo);
    else
        dump_text_special("UNUSED", settings, "const VkCommandBufferInheritanceInfo*", "pInheritanceInfo", indents + 1);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineTessellationStateCreateFlags>(object.flags, settings, "VkPipelineTessellationStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineTessellationStateCreateFlags);
    dump_text_value<const uint32_t>(object.patchControlPoints, settings, "uint32_t", "patchControlPoints", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineLayoutCreateFlags>(object.flags, settings, "VkPipelineLayoutCreateFlags", "flags", indents + 1, dump_text_VkPipelineLayoutCreateFlags);
    dump_text_value<const uint32_t>(object.setLayoutCount, settings, "uint32_t", "setLayoutCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorSetLayout>(object.pSetLayouts, object.setLayoutCount, settings, "const VkDescriptorSetLayout*", "const VkDescriptorSetLayout", "pSetLayouts", indents + 1, dump_text_VkDescriptorSetLayout);
    dump_text_value<const uint32_t>(object.pushConstantRangeCount, settings, "uint32_t", "pushConstantRangeCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPushConstantRange>(object.pPushConstantRanges, object.pushConstantRangeCount, settings, "const VkPushConstantRange*", "const VkPushConstantRange", "pPushConstantRanges", indents + 1, dump_text_VkPushConstantRange);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPhysicalDeviceProperties>(object.properties, settings, "VkPhysicalDeviceProperties", "properties", indents + 1, dump_text_VkPhysicalDeviceProperties);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.resourceDeviceIndex, settings, "uint32_t", "resourceDeviceIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.memoryDeviceIndex, settings, "uint32_t", "memoryDeviceIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.physicalDeviceCount, settings, "uint32_t", "physicalDeviceCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPhysicalDevice>(object.pPhysicalDevices, object.physicalDeviceCount, settings, "const VkPhysicalDevice*", "const VkPhysicalDevice", "pPhysicalDevices", indents + 1, dump_text_VkPhysicalDevice);
    return settings.stream();
}
std::ostream& dump_text_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.maxDiscardRectangles, settings, "uint32_t", "maxDiscardRectangles", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
std::ostream& dump_text_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineDiscardRectangleStateCreateFlagsEXT>(object.flags, settings, "VkPipelineDiscardRectangleStateCreateFlagsEXT", "flags", indents + 1, dump_text_VkPipelineDiscardRectangleStateCreateFlagsEXT);
    dump_text_value<const VkDiscardRectangleModeEXT>(object.discardRectangleMode, settings, "VkDiscardRectangleModeEXT", "discardRectangleMode", indents + 1, dump_text_VkDiscardRectangleModeEXT);
    dump_text_value<const uint32_t>(object.discardRectangleCount, settings, "uint32_t", "discardRectangleCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkRect2D>(object.pDiscardRectangles, object.discardRectangleCount, settings, "const VkRect2D*", "const VkRect2D", "pDiscardRectangles", indents + 1, dump_text_VkRect2D);
    return settings.stream();
}
std::ostream& dump_text_VkDeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.computeBindingPointSupport, settings, "VkBool32", "computeBindingPointSupport", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
std::ostream& dump_text_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDisplayEventTypeEXT>(object.displayEvent, settings, "VkDisplayEventTypeEXT", "displayEvent", indents + 1, dump_text_VkDisplayEventTypeEXT);
    return settings.stream();
}
std::ostream& dump_text_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const uint32_t>(object.subpass, settings, "uint32_t", "subpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkFramebuffer>(object.framebuffer, settings, "VkFramebuffer", "framebuffer", indents + 1, dump_text_VkFramebuffer);
    dump_text_value<const VkBool32>(object.occlusionQueryEnable, settings, "VkBool32", "occlusionQueryEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkQueryControlFlags>(object.queryFlags, settings, "VkQueryControlFlags", "queryFlags", indents + 1, dump_text_VkQueryControlFlags);
    dump_text_value<const VkQueryPipelineStatisticFlags>(object.pipelineStatistics, settings, "VkQueryPipelineStatisticFlags", "pipelineStatistics", indents + 1, dump_text_VkQueryPipelineStatisticFlags);
    return settings.stream();
}
std::ostream& dump_text_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    return settings.stream();
}


std::ostream& dump_text_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkShaderModuleCreateFlags>(object.flags, settings, "VkShaderModuleCreateFlags", "flags", indents + 1, dump_text_VkShaderModuleCreateFlags);
    dump_text_value<const size_t>(object.codeSize, settings, "size_t", "codeSize", indents + 1, dump_text_size_t);
    if(settings.showShader())
        dump_text_array<const uint32_t>(object.pCode, object.codeSize / 4, settings, "const uint32_t*", "const uint32_t", "pCode", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("SHADER DATA", settings, "const uint32_t*", "pCode", indents + 1);
    return settings.stream();
}

//========================== Union Implementations ==========================//

std::ostream& dump_text_VkClearValue(const VkClearValue& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << " (Union):\n";
    else
        settings.stream() << "address (Union):\n";
    dump_text_value<const VkClearColorValue>(object.color, settings, "VkClearColorValue", "color", indents + 1, dump_text_VkClearColorValue);
    dump_text_value<const VkClearDepthStencilValue>(object.depthStencil, settings, "VkClearDepthStencilValue", "depthStencil", indents + 1, dump_text_VkClearDepthStencilValue);
    return settings.stream();
}
std::ostream& dump_text_VkClearColorValue(const VkClearColorValue& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << " (Union):\n";
    else
        settings.stream() << "address (Union):\n";
    dump_text_array<const float>(object.float32, 4, settings, "float[4]", "float", "float32", indents + 1, dump_text_float);
    dump_text_array<const int32_t>(object.int32, 4, settings, "int32_t[4]", "int32_t", "int32", indents + 1, dump_text_int32_t);
    dump_text_array<const uint32_t>(object.uint32, 4, settings, "uint32_t[4]", "uint32_t", "uint32", indents + 1, dump_text_uint32_t);
    return settings.stream();
}

//========================= Function Implementations ========================//

std::ostream& dump_text_vkGetDeviceProcAddr(ApiDumpInstance& dump_inst, PFN_vkVoidFunction result, VkDevice device, const char* pName)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceProcAddr(device, pName) returns PFN_vkVoidFunction ";
    dump_text_PFN_vkVoidFunction(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const char*>(pName, settings, "const char*", "pName", 1, dump_text_cstring);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkBindBufferMemory(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBindBufferMemory(device, buffer, memory, memoryOffset) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkDeviceSize>(memoryOffset, settings, "VkDeviceSize", "memoryOffset", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateDevice(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkDeviceCreateInfo>(pCreateInfo, settings, "const VkDeviceCreateInfo*", "pCreateInfo", 1, dump_text_VkDeviceCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDevice>(pDevice, settings, "VkDevice*", "pDevice", 1, dump_text_VkDevice);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_vkImportSemaphoreWin32HandleKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkImportSemaphoreWin32HandleInfoKHX* pImportSemaphoreWin32HandleInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkImportSemaphoreWin32HandleKHX(device, pImportSemaphoreWin32HandleInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkImportSemaphoreWin32HandleInfoKHX>(pImportSemaphoreWin32HandleInfo, settings, "const VkImportSemaphoreWin32HandleInfoKHX*", "pImportSemaphoreWin32HandleInfo", 1, dump_text_VkImportSemaphoreWin32HandleInfoKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_vkCreateShaderModule(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkShaderModuleCreateInfo>(pCreateInfo, settings, "const VkShaderModuleCreateInfo*", "pCreateInfo", 1, dump_text_VkShaderModuleCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkShaderModule>(pShaderModule, settings, "VkShaderModule*", "pShaderModule", 1, dump_text_VkShaderModule);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceImageFormatProperties2KHX(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2KHX* pImageFormatInfo, VkImageFormatProperties2KHX* pImageFormatProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceImageFormatProperties2KHX(physicalDevice, pImageFormatInfo, pImageFormatProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceImageFormatInfo2KHX>(pImageFormatInfo, settings, "const VkPhysicalDeviceImageFormatInfo2KHX*", "pImageFormatInfo", 1, dump_text_VkPhysicalDeviceImageFormatInfo2KHX);
        dump_text_pointer<const VkImageFormatProperties2KHX>(pImageFormatProperties, settings, "VkImageFormatProperties2KHX*", "pImageFormatProperties", 1, dump_text_VkImageFormatProperties2KHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkFlushMappedMemoryRanges(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(memoryRangeCount, settings, "uint32_t", "memoryRangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMappedMemoryRange>(pMemoryRanges, memoryRangeCount, settings, "const VkMappedMemoryRange*", "const VkMappedMemoryRange", "pMemoryRanges", 1, dump_text_VkMappedMemoryRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkQueueBindSparse(ApiDumpInstance& dump_inst, VkResult result, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
        dump_text_value<const uint32_t>(bindInfoCount, settings, "uint32_t", "bindInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBindSparseInfo>(pBindInfo, bindInfoCount, settings, "const VkBindSparseInfo*", "const VkBindSparseInfo", "pBindInfo", 1, dump_text_VkBindSparseInfo);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateSampler(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSampler(device, pCreateInfo, pAllocator, pSampler) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkSamplerCreateInfo>(pCreateInfo, settings, "const VkSamplerCreateInfo*", "pCreateInfo", 1, dump_text_VkSamplerCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSampler>(pSampler, settings, "VkSampler*", "pSampler", 1, dump_text_VkSampler);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetSwapchainImagesKHR(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_pointer<const uint32_t>(pSwapchainImageCount, settings, "uint32_t*", "pSwapchainImageCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImage>(pSwapchainImages, *pSwapchainImageCount, settings, "VkImage*", "VkImage", "pSwapchainImages", 1, dump_text_VkImage);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHX)
std::ostream& dump_text_vkGetSemaphoreWin32HandleKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, HANDLE* pHandle)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetSemaphoreWin32HandleKHX(device, semaphore, handleType, pHandle) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSemaphore>(semaphore, settings, "VkSemaphore", "semaphore", 1, dump_text_VkSemaphore);
        dump_text_value<const VkExternalSemaphoreHandleTypeFlagBitsKHX>(handleType, settings, "VkExternalSemaphoreHandleTypeFlagBitsKHX", "handleType", 1, dump_text_VkExternalSemaphoreHandleTypeFlagBitsKHX);
        dump_text_pointer<const HANDLE>(pHandle, settings, "HANDLE*", "pHandle", 1, dump_text_HANDLE);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHX
std::ostream& dump_text_vkGetFenceStatus(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkFence fence)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetFenceStatus(device, fence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkAcquireNextImageKHR(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_value<const uint64_t>(timeout, settings, "uint64_t", "timeout", 1, dump_text_uint64_t);
        dump_text_value<const VkSemaphore>(semaphore, settings, "VkSemaphore", "semaphore", 1, dump_text_VkSemaphore);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
        dump_text_pointer<const uint32_t>(pImageIndex, settings, "uint32_t*", "pImageIndex", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkQueuePresentKHR(ApiDumpInstance& dump_inst, VkResult result, VkQueue queue, const VkPresentInfoKHR* pPresentInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueuePresentKHR(queue, pPresentInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
        dump_text_pointer<const VkPresentInfoKHR>(pPresentInfo, settings, "const VkPresentInfoKHR*", "pPresentInfo", 1, dump_text_VkPresentInfoKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkInvalidateMappedMemoryRanges(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(memoryRangeCount, settings, "uint32_t", "memoryRangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMappedMemoryRange>(pMemoryRanges, memoryRangeCount, settings, "const VkMappedMemoryRange*", "const VkMappedMemoryRange", "pMemoryRanges", 1, dump_text_VkMappedMemoryRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
std::ostream& dump_text_vkCreateMirSurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkMirSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateMirSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkMirSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkMirSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkMirSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_MIR_KHR
std::ostream& dump_text_vkCreateImageView(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateImageView(device, pCreateInfo, pAllocator, pView) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkImageViewCreateInfo>(pCreateInfo, settings, "const VkImageViewCreateInfo*", "pCreateInfo", 1, dump_text_VkImageViewCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkImageView>(pView, settings, "VkImageView*", "pView", 1, dump_text_VkImageView);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateIndirectCommandsLayoutNVX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkIndirectCommandsLayoutCreateInfoNVX>(pCreateInfo, settings, "const VkIndirectCommandsLayoutCreateInfoNVX*", "pCreateInfo", 1, dump_text_VkIndirectCommandsLayoutCreateInfoNVX);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkIndirectCommandsLayoutNVX>(pIndirectCommandsLayout, settings, "VkIndirectCommandsLayoutNVX*", "pIndirectCommandsLayout", 1, dump_text_VkIndirectCommandsLayoutNVX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateObjectTableNVX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkObjectTableCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkObjectTableNVX* pObjectTable)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkObjectTableCreateInfoNVX>(pCreateInfo, settings, "const VkObjectTableCreateInfoNVX*", "pCreateInfo", 1, dump_text_VkObjectTableCreateInfoNVX);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkObjectTableNVX>(pObjectTable, settings, "VkObjectTableNVX*", "pObjectTable", 1, dump_text_VkObjectTableNVX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreatePipelineCache(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkPipelineCacheCreateInfo>(pCreateInfo, settings, "const VkPipelineCacheCreateInfo*", "pCreateInfo", 1, dump_text_VkPipelineCacheCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkPipelineCache>(pPipelineCache, settings, "VkPipelineCache*", "pPipelineCache", 1, dump_text_VkPipelineCache);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkResetFences(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t fenceCount, const VkFence* pFences)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetFences(device, fenceCount, pFences) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(fenceCount, settings, "uint32_t", "fenceCount", 1, dump_text_uint32_t);
        dump_text_array<const VkFence>(pFences, fenceCount, settings, "const VkFence*", "const VkFence", "pFences", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkRegisterObjectsNVX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectTableEntryNVX* const*    ppObjectTableEntries, const uint32_t* pObjectIndices)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkRegisterObjectsNVX(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkObjectTableNVX>(objectTable, settings, "VkObjectTableNVX", "objectTable", 1, dump_text_VkObjectTableNVX);
        dump_text_value<const uint32_t>(objectCount, settings, "uint32_t", "objectCount", 1, dump_text_uint32_t);
        dump_text_array<const uint32_t>(pObjectIndices, objectCount, settings, "const uint32_t*", "const uint32_t", "pObjectIndices", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkBindImageMemory(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBindImageMemory(device, image, memory, memoryOffset) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkDeviceSize>(memoryOffset, settings, "VkDeviceSize", "memoryOffset", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkWaitForFences(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(fenceCount, settings, "uint32_t", "fenceCount", 1, dump_text_uint32_t);
        dump_text_array<const VkFence>(pFences, fenceCount, settings, "const VkFence*", "const VkFence", "pFences", 1, dump_text_VkFence);
        dump_text_value<const VkBool32>(waitAll, settings, "VkBool32", "waitAll", 1, dump_text_VkBool32);
        dump_text_value<const uint64_t>(timeout, settings, "uint64_t", "timeout", 1, dump_text_uint64_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
std::ostream& dump_text_vkGetPhysicalDeviceMirPresentationSupportKHR(ApiDumpInstance& dump_inst, VkBool32 result, VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, MirConnection* connection)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceMirPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const MirConnection>(connection, settings, "MirConnection*", "connection", 1, dump_text_MirConnection);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_MIR_KHR
std::ostream& dump_text_vkCreateSemaphore(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkSemaphoreCreateInfo>(pCreateInfo, settings, "const VkSemaphoreCreateInfo*", "pCreateInfo", 1, dump_text_VkSemaphoreCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSemaphore>(pSemaphore, settings, "VkSemaphore*", "pSemaphore", 1, dump_text_VkSemaphore);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkEnumerateDeviceExtensionProperties(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const char*>(pLayerName, settings, "const char*", "pLayerName", 1, dump_text_cstring);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkExtensionProperties>(pProperties, *pPropertyCount, settings, "VkExtensionProperties*", "VkExtensionProperties", "pProperties", 1, dump_text_VkExtensionProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkImportSemaphoreFdKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkImportSemaphoreFdInfoKHX* pImportSemaphoreFdInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkImportSemaphoreFdKHX(device, pImportSemaphoreFdInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkImportSemaphoreFdInfoKHX>(pImportSemaphoreFdInfo, settings, "const VkImportSemaphoreFdInfoKHX*", "pImportSemaphoreFdInfo", 1, dump_text_VkImportSemaphoreFdInfoKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkUnregisterObjectsNVX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX* pObjectEntryTypes, const uint32_t* pObjectIndices)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkObjectTableNVX>(objectTable, settings, "VkObjectTableNVX", "objectTable", 1, dump_text_VkObjectTableNVX);
        dump_text_value<const uint32_t>(objectCount, settings, "uint32_t", "objectCount", 1, dump_text_uint32_t);
        dump_text_array<const VkObjectEntryTypeNVX>(pObjectEntryTypes, objectCount, settings, "const VkObjectEntryTypeNVX*", "const VkObjectEntryTypeNVX", "pObjectEntryTypes", 1, dump_text_VkObjectEntryTypeNVX);
        dump_text_array<const uint32_t>(pObjectIndices, objectCount, settings, "const uint32_t*", "const uint32_t", "pObjectIndices", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkEnumerateInstanceExtensionProperties(ApiDumpInstance& dump_inst, VkResult result, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const char*>(pLayerName, settings, "const char*", "pLayerName", 1, dump_text_cstring);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkExtensionProperties>(pProperties, *pPropertyCount, settings, "VkExtensionProperties*", "VkExtensionProperties", "pProperties", 1, dump_text_VkExtensionProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetInstanceProcAddr(ApiDumpInstance& dump_inst, PFN_vkVoidFunction result, VkInstance instance, const char* pName)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetInstanceProcAddr(instance, pName) returns PFN_vkVoidFunction ";
    dump_text_PFN_vkVoidFunction(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const char*>(pName, settings, "const char*", "pName", 1, dump_text_cstring);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateEvent(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateEvent(device, pCreateInfo, pAllocator, pEvent) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkEventCreateInfo>(pCreateInfo, settings, "const VkEventCreateInfo*", "pCreateInfo", 1, dump_text_VkEventCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkEvent>(pEvent, settings, "VkEvent*", "pEvent", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSurfaceSupportKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkBool32>(pSupported, settings, "VkBool32*", "pSupported", 1, dump_text_VkBool32);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_vkGetMemoryWin32HandleKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagBitsKHX handleType, HANDLE* pHandle)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetMemoryWin32HandleKHX(device, memory, handleType, pHandle) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
        dump_text_pointer<const HANDLE>(pHandle, settings, "HANDLE*", "pHandle", 1, dump_text_HANDLE);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_vkBindImageMemory2KHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfoKHX* pBindInfos)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBindImageMemory2KHX(device, bindInfoCount, pBindInfos) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(bindInfoCount, settings, "uint32_t", "bindInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBindImageMemoryInfoKHX>(pBindInfos, bindInfoCount, settings, "const VkBindImageMemoryInfoKHX*", "const VkBindImageMemoryInfoKHX", "pBindInfos", 1, dump_text_VkBindImageMemoryInfoKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetSemaphoreFdKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, int* pFd)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetSemaphoreFdKHX(device, semaphore, handleType, pFd) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSemaphore>(semaphore, settings, "VkSemaphore", "semaphore", 1, dump_text_VkSemaphore);
        dump_text_value<const VkExternalSemaphoreHandleTypeFlagBitsKHX>(handleType, settings, "VkExternalSemaphoreHandleTypeFlagBitsKHX", "handleType", 1, dump_text_VkExternalSemaphoreHandleTypeFlagBitsKHX);
        dump_text_pointer<const int>(pFd, settings, "int*", "pFd", 1, dump_text_int);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPipelineCacheData(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_pointer<const size_t>(pDataSize, settings, "size_t*", "pDataSize", 1, dump_text_size_t);
        dump_text_value<const void*>(pData, settings, "void*", "pData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateFence(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateFence(device, pCreateInfo, pAllocator, pFence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkFenceCreateInfo>(pCreateInfo, settings, "const VkFenceCreateInfo*", "pCreateInfo", 1, dump_text_VkFenceCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkFence>(pFence, settings, "VkFence*", "pFence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateDebugReportCallbackEXT(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkDebugReportCallbackCreateInfoEXT>(pCreateInfo, settings, "const VkDebugReportCallbackCreateInfoEXT*", "pCreateInfo", 1, dump_text_VkDebugReportCallbackCreateInfoEXT);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDebugReportCallbackEXT>(pCallback, settings, "VkDebugReportCallbackEXT*", "pCallback", 1, dump_text_VkDebugReportCallbackEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkBindBufferMemory2KHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfoKHX* pBindInfos)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBindBufferMemory2KHX(device, bindInfoCount, pBindInfos) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(bindInfoCount, settings, "uint32_t", "bindInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBindBufferMemoryInfoKHX>(pBindInfos, bindInfoCount, settings, "const VkBindBufferMemoryInfoKHX*", "const VkBindBufferMemoryInfoKHX", "pBindInfos", 1, dump_text_VkBindBufferMemoryInfoKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_vkGetMemoryWin32HandlePropertiesKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkExternalMemoryHandleTypeFlagBitsKHX handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHX* pMemoryWin32HandleProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetMemoryWin32HandlePropertiesKHX(device, handleType, handle, pMemoryWin32HandleProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
        dump_text_value<const HANDLE>(handle, settings, "HANDLE", "handle", 1, dump_text_HANDLE);
        dump_text_pointer<const VkMemoryWin32HandlePropertiesKHX>(pMemoryWin32HandleProperties, settings, "VkMemoryWin32HandlePropertiesKHX*", "pMemoryWin32HandleProperties", 1, dump_text_VkMemoryWin32HandlePropertiesKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_vkEnumerateInstanceLayerProperties(ApiDumpInstance& dump_inst, VkResult result, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumerateInstanceLayerProperties(pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkLayerProperties>(pProperties, *pPropertyCount, settings, "VkLayerProperties*", "VkLayerProperties", "pProperties", 1, dump_text_VkLayerProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkEnumeratePhysicalDevices(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const uint32_t>(pPhysicalDeviceCount, settings, "uint32_t*", "pPhysicalDeviceCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPhysicalDevice>(pPhysicalDevices, *pPhysicalDeviceCount, settings, "VkPhysicalDevice*", "VkPhysicalDevice", "pPhysicalDevices", 1, dump_text_VkPhysicalDevice);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDebugMarkerSetObjectTagEXT(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDebugMarkerObjectTagInfoEXT* pTagInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDebugMarkerSetObjectTagEXT(device, pTagInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDebugMarkerObjectTagInfoEXT>(pTagInfo, settings, "VkDebugMarkerObjectTagInfoEXT*", "pTagInfo", 1, dump_text_VkDebugMarkerObjectTagInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkMergePipelineCaches(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(dstCache, settings, "VkPipelineCache", "dstCache", 1, dump_text_VkPipelineCache);
        dump_text_value<const uint32_t>(srcCacheCount, settings, "uint32_t", "srcCacheCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPipelineCache>(pSrcCaches, srcCacheCount, settings, "const VkPipelineCache*", "const VkPipelineCache", "pSrcCaches", 1, dump_text_VkPipelineCache);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetDeviceGroupPresentCapabilitiesKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDeviceGroupPresentCapabilitiesKHX* pDeviceGroupPresentCapabilities)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceGroupPresentCapabilitiesKHX(device, pDeviceGroupPresentCapabilities) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDeviceGroupPresentCapabilitiesKHX>(pDeviceGroupPresentCapabilities, settings, "VkDeviceGroupPresentCapabilitiesKHX*", "pDeviceGroupPresentCapabilities", 1, dump_text_VkDeviceGroupPresentCapabilitiesKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceImageFormatProperties(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_value<const VkImageType>(type, settings, "VkImageType", "type", 1, dump_text_VkImageType);
        dump_text_value<const VkImageTiling>(tiling, settings, "VkImageTiling", "tiling", 1, dump_text_VkImageTiling);
        dump_text_value<const VkImageUsageFlags>(usage, settings, "VkImageUsageFlags", "usage", 1, dump_text_VkImageUsageFlags);
        dump_text_value<const VkImageCreateFlags>(flags, settings, "VkImageCreateFlags", "flags", 1, dump_text_VkImageCreateFlags);
        dump_text_pointer<const VkImageFormatProperties>(pImageFormatProperties, settings, "VkImageFormatProperties*", "pImageFormatProperties", 1, dump_text_VkImageFormatProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateGraphicsPipelines(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_value<const uint32_t>(createInfoCount, settings, "uint32_t", "createInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkGraphicsPipelineCreateInfo>(pCreateInfos, createInfoCount, settings, "const VkGraphicsPipelineCreateInfo*", "const VkGraphicsPipelineCreateInfo", "pCreateInfos", 1, dump_text_VkGraphicsPipelineCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_array<const VkPipeline>(pPipelines, createInfoCount, settings, "VkPipeline*", "VkPipeline", "pPipelines", 1, dump_text_VkPipeline);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSurfaceFormatsKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const uint32_t>(pSurfaceFormatCount, settings, "uint32_t*", "pSurfaceFormatCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSurfaceFormatKHR>(pSurfaceFormats, *pSurfaceFormatCount, settings, "VkSurfaceFormatKHR*", "VkSurfaceFormatKHR", "pSurfaceFormats", 1, dump_text_VkSurfaceFormatKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceImageFormatProperties2KHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2KHR* pImageFormatInfo, VkImageFormatProperties2KHR* pImageFormatProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceImageFormatInfo2KHR>(pImageFormatInfo, settings, "const VkPhysicalDeviceImageFormatInfo2KHR*", "pImageFormatInfo", 1, dump_text_VkPhysicalDeviceImageFormatInfo2KHR);
        dump_text_pointer<const VkImageFormatProperties2KHR>(pImageFormatProperties, settings, "VkImageFormatProperties2KHR*", "pImageFormatProperties", 1, dump_text_VkImageFormatProperties2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateDescriptorSetLayout(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorSetLayoutCreateInfo>(pCreateInfo, settings, "const VkDescriptorSetLayoutCreateInfo*", "pCreateInfo", 1, dump_text_VkDescriptorSetLayoutCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDescriptorSetLayout>(pSetLayout, settings, "VkDescriptorSetLayout*", "pSetLayout", 1, dump_text_VkDescriptorSetLayout);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetDeviceGroupSurfacePresentModesKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHX* pModes)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceGroupSurfacePresentModesKHX(device, surface, pModes) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkDeviceGroupPresentModeFlagsKHX>(pModes, settings, "VkDeviceGroupPresentModeFlagsKHX*", "pModes", 1, dump_text_VkDeviceGroupPresentModeFlagsKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateDescriptorPool(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorPoolCreateInfo>(pCreateInfo, settings, "const VkDescriptorPoolCreateInfo*", "pCreateInfo", 1, dump_text_VkDescriptorPoolCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDescriptorPool>(pDescriptorPool, settings, "VkDescriptorPool*", "pDescriptorPool", 1, dump_text_VkDescriptorPool);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkSurfaceCapabilitiesKHR>(pSurfaceCapabilities, settings, "VkSurfaceCapabilitiesKHR*", "pSurfaceCapabilities", 1, dump_text_VkSurfaceCapabilitiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateInstance(ApiDumpInstance& dump_inst, VkResult result, const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateInstance(pCreateInfo, pAllocator, pInstance) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_pointer<const VkInstanceCreateInfo>(pCreateInfo, settings, "const VkInstanceCreateInfo*", "pCreateInfo", 1, dump_text_VkInstanceCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkInstance>(pInstance, settings, "VkInstance*", "pInstance", 1, dump_text_VkInstance);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkAcquireNextImage2KHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkAcquireNextImageInfoKHX* pAcquireInfo, uint32_t* pImageIndex)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAcquireNextImage2KHX(device, pAcquireInfo, pImageIndex) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkAcquireNextImageInfoKHX>(pAcquireInfo, settings, "const VkAcquireNextImageInfoKHX*", "pAcquireInfo", 1, dump_text_VkAcquireNextImageInfoKHX);
        dump_text_pointer<const uint32_t>(pImageIndex, settings, "uint32_t*", "pImageIndex", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetMemoryFdKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagBitsKHX handleType, int* pFd)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetMemoryFdKHX(device, memory, handleType, pFd) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
        dump_text_pointer<const int>(pFd, settings, "int*", "pFd", 1, dump_text_int);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkEnumerateDeviceLayerProperties(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkLayerProperties>(pProperties, *pPropertyCount, settings, "VkLayerProperties*", "VkLayerProperties", "pProperties", 1, dump_text_VkLayerProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDevicePresentRectanglesKHX(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDevicePresentRectanglesKHX(physicalDevice, surface, pRectCount, pRects) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const uint32_t>(pRectCount, settings, "uint32_t*", "pRectCount", 1, dump_text_uint32_t);
        dump_text_array<const VkRect2D>(pRects, *pRectCount, settings, "VkRect2D*", "VkRect2D", "pRects", 1, dump_text_VkRect2D);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDebugMarkerSetObjectNameEXT(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDebugMarkerObjectNameInfoEXT* pNameInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDebugMarkerSetObjectNameEXT(device, pNameInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDebugMarkerObjectNameInfoEXT>(pNameInfo, settings, "VkDebugMarkerObjectNameInfoEXT*", "pNameInfo", 1, dump_text_VkDebugMarkerObjectNameInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkSetEvent(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkEvent event)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkSetEvent(device, event) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetDisplayPlaneSupportedDisplaysKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(planeIndex, settings, "uint32_t", "planeIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const uint32_t>(pDisplayCount, settings, "uint32_t*", "pDisplayCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayKHR>(pDisplays, *pDisplayCount, settings, "VkDisplayKHR*", "VkDisplayKHR", "pDisplays", 1, dump_text_VkDisplayKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkQueueSubmit(ApiDumpInstance& dump_inst, VkResult result, VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueueSubmit(queue, submitCount, pSubmits, fence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
        dump_text_value<const uint32_t>(submitCount, settings, "uint32_t", "submitCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSubmitInfo>(pSubmits, submitCount, settings, "const VkSubmitInfo*", "const VkSubmitInfo", "pSubmits", 1, dump_text_VkSubmitInfo);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetEventStatus(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkEvent event)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetEventStatus(device, event) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkReleaseDisplayEXT(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkDisplayKHR display)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkReleaseDisplayEXT(physicalDevice, display) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetMemoryFdPropertiesKHX(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkExternalMemoryHandleTypeFlagBitsKHX handleType, int fd, VkMemoryFdPropertiesKHX* pMemoryFdProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetMemoryFdPropertiesKHX(device, handleType, fd, pMemoryFdProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkExternalMemoryHandleTypeFlagBitsKHX>(handleType, settings, "VkExternalMemoryHandleTypeFlagBitsKHX", "handleType", 1, dump_text_VkExternalMemoryHandleTypeFlagBitsKHX);
        dump_text_value<const int>(fd, settings, "int", "fd", 1, dump_text_int);
        dump_text_pointer<const VkMemoryFdPropertiesKHX>(pMemoryFdProperties, settings, "VkMemoryFdPropertiesKHX*", "pMemoryFdProperties", 1, dump_text_VkMemoryFdPropertiesKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkRegisterDeviceEventEXT(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDeviceEventInfoEXT>(pDeviceEventInfo, settings, "const VkDeviceEventInfoEXT*", "pDeviceEventInfo", 1, dump_text_VkDeviceEventInfoEXT);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkFence>(pFence, settings, "VkFence*", "pFence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
std::ostream& dump_text_vkCreateXlibSurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkXlibSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkXlibSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkXlibSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
std::ostream& dump_text_vkCreateAndroidSurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkAndroidSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkAndroidSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkAndroidSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
std::ostream& dump_text_vkResetEvent(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkEvent event)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetEvent(device, event) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateCommandPool(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkCommandPoolCreateInfo>(pCreateInfo, settings, "const VkCommandPoolCreateInfo*", "pCreateInfo", 1, dump_text_VkCommandPoolCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkCommandPool>(pCommandPool, settings, "VkCommandPool*", "pCommandPool", 1, dump_text_VkCommandPool);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_vkGetMemoryWin32HandleNV(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(handleType, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleType", 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
        dump_text_pointer<const HANDLE>(pHandle, settings, "HANDLE*", "pHandle", 1, dump_text_HANDLE);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_vkCreateDescriptorUpdateTemplateKHR(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplateKHR* pDescriptorUpdateTemplate)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorUpdateTemplateCreateInfoKHR>(pCreateInfo, settings, "const VkDescriptorUpdateTemplateCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkDescriptorUpdateTemplateCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDescriptorUpdateTemplateKHR>(pDescriptorUpdateTemplate, settings, "VkDescriptorUpdateTemplateKHR*", "pDescriptorUpdateTemplate", 1, dump_text_VkDescriptorUpdateTemplateKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDisplayPowerControlEXT(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
        dump_text_pointer<const VkDisplayPowerInfoEXT>(pDisplayPowerInfo, settings, "const VkDisplayPowerInfoEXT*", "pDisplayPowerInfo", 1, dump_text_VkDisplayPowerInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateQueryPool(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkQueryPoolCreateInfo>(pCreateInfo, settings, "const VkQueryPoolCreateInfo*", "pCreateInfo", 1, dump_text_VkQueryPoolCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkQueryPool>(pQueryPool, settings, "VkQueryPool*", "pQueryPool", 1, dump_text_VkQueryPool);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
std::ostream& dump_text_vkGetPhysicalDeviceXlibPresentationSupportKHR(ApiDumpInstance& dump_inst, VkBool32 result, VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const Display*>(dpy, settings, "Display*", "dpy", 1, dump_text_Display);
        dump_text_value<const VisualID>(visualID, settings, "VisualID", "visualID", 1, dump_text_VisualID);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XLIB_KHR
std::ostream& dump_text_vkCreateComputePipelines(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_value<const uint32_t>(createInfoCount, settings, "uint32_t", "createInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkComputePipelineCreateInfo>(pCreateInfos, createInfoCount, settings, "const VkComputePipelineCreateInfo*", "const VkComputePipelineCreateInfo", "pCreateInfos", 1, dump_text_VkComputePipelineCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_array<const VkPipeline>(pPipelines, createInfoCount, settings, "VkPipeline*", "VkPipeline", "pPipelines", 1, dump_text_VkPipeline);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkRegisterDisplayEventEXT(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
        dump_text_pointer<const VkDisplayEventInfoEXT>(pDisplayEventInfo, settings, "const VkDisplayEventInfoEXT*", "pDisplayEventInfo", 1, dump_text_VkDisplayEventInfoEXT);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkFence>(pFence, settings, "VkFence*", "pFence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
std::ostream& dump_text_vkGetRandROutputDisplayEXT(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const Display*>(dpy, settings, "Display*", "dpy", 1, dump_text_Display);
        dump_text_value<const RROutput>(rrOutput, settings, "RROutput", "rrOutput", 1, dump_text_RROutput);
        dump_text_pointer<const VkDisplayKHR>(pDisplay, settings, "VkDisplayKHR*", "pDisplay", 1, dump_text_VkDisplayKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
std::ostream& dump_text_vkGetSwapchainCounterEXT(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_value<const VkSurfaceCounterFlagBitsEXT>(counter, settings, "VkSurfaceCounterFlagBitsEXT", "counter", 1, dump_text_VkSurfaceCounterFlagBitsEXT);
        dump_text_pointer<const uint64_t>(pCounterValue, settings, "uint64_t*", "pCounterValue", 1, dump_text_uint64_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceDisplayPropertiesKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayPropertiesKHR>(pProperties, *pPropertyCount, settings, "VkDisplayPropertiesKHR*", "VkDisplayPropertiesKHR", "pProperties", 1, dump_text_VkDisplayPropertiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateBufferView(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateBufferView(device, pCreateInfo, pAllocator, pView) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkBufferViewCreateInfo>(pCreateInfo, settings, "const VkBufferViewCreateInfo*", "pCreateInfo", 1, dump_text_VkBufferViewCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkBufferView>(pView, settings, "VkBufferView*", "pView", 1, dump_text_VkBufferView);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_VI_NN)
std::ostream& dump_text_vkCreateViSurfaceNN(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkViSurfaceCreateInfoNN>(pCreateInfo, settings, "const VkViSurfaceCreateInfoNN*", "pCreateInfo", 1, dump_text_VkViSurfaceCreateInfoNN);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_VI_NN
std::ostream& dump_text_vkResetCommandBuffer(ApiDumpInstance& dump_inst, VkResult result, VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetCommandBuffer(commandBuffer, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkCommandBufferResetFlags>(flags, settings, "VkCommandBufferResetFlags", "flags", 1, dump_text_VkCommandBufferResetFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayPlanePropertiesKHR>(pProperties, *pPropertyCount, settings, "VkDisplayPlanePropertiesKHR*", "VkDisplayPlanePropertiesKHR", "pProperties", 1, dump_text_VkDisplayPlanePropertiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
std::ostream& dump_text_vkAcquireXlibDisplayEXT(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAcquireXlibDisplayEXT(physicalDevice, dpy, display) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const Display*>(dpy, settings, "Display*", "dpy", 1, dump_text_Display);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
std::ostream& dump_text_vkCreateFramebuffer(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkFramebufferCreateInfo>(pCreateInfo, settings, "const VkFramebufferCreateInfo*", "pCreateInfo", 1, dump_text_VkFramebufferCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkFramebuffer>(pFramebuffer, settings, "VkFramebuffer*", "pFramebuffer", 1, dump_text_VkFramebuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_IOS_MVK)
std::ostream& dump_text_vkCreateIOSSurfaceMVK(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkIOSSurfaceCreateInfoMVK>(pCreateInfo, settings, "const VkIOSSurfaceCreateInfoMVK*", "pCreateInfo", 1, dump_text_VkIOSSurfaceCreateInfoMVK);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_IOS_MVK
std::ostream& dump_text_vkGetDisplayModePropertiesKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayModePropertiesKHR>(pProperties, *pPropertyCount, settings, "VkDisplayModePropertiesKHR*", "VkDisplayModePropertiesKHR", "pProperties", 1, dump_text_VkDisplayModePropertiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateDisplayModeKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
        dump_text_pointer<const VkDisplayModeCreateInfoKHR>(pCreateInfo, settings, "const VkDisplayModeCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkDisplayModeCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDisplayModeKHR>(pMode, settings, "VkDisplayModeKHR*", "pMode", 1, dump_text_VkDisplayModeKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSurfacePresentModesKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const uint32_t>(pPresentModeCount, settings, "uint32_t*", "pPresentModeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPresentModeKHR>(pPresentModes, *pPresentModeCount, settings, "VkPresentModeKHR*", "VkPresentModeKHR", "pPresentModes", 1, dump_text_VkPresentModeKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
std::ostream& dump_text_vkCreateWaylandSurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkWaylandSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkWaylandSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkWaylandSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_MACOS_MVK)
std::ostream& dump_text_vkCreateMacOSSurfaceMVK(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkMacOSSurfaceCreateInfoMVK>(pCreateInfo, settings, "const VkMacOSSurfaceCreateInfoMVK*", "pCreateInfo", 1, dump_text_VkMacOSSurfaceCreateInfoMVK);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_MACOS_MVK
std::ostream& dump_text_vkGetDisplayPlaneCapabilitiesKHR(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayModeKHR>(mode, settings, "VkDisplayModeKHR", "mode", 1, dump_text_VkDisplayModeKHR);
        dump_text_value<const uint32_t>(planeIndex, settings, "uint32_t", "planeIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const VkDisplayPlaneCapabilitiesKHR>(pCapabilities, settings, "VkDisplayPlaneCapabilitiesKHR*", "pCapabilities", 1, dump_text_VkDisplayPlaneCapabilitiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkResetCommandPool(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetCommandPool(device, commandPool, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_value<const VkCommandPoolResetFlags>(flags, settings, "VkCommandPoolResetFlags", "flags", 1, dump_text_VkCommandPoolResetFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkFreeDescriptorSets(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorPool>(descriptorPool, settings, "VkDescriptorPool", "descriptorPool", 1, dump_text_VkDescriptorPool);
        dump_text_value<const uint32_t>(descriptorSetCount, settings, "uint32_t", "descriptorSetCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDescriptorSet>(pDescriptorSets, descriptorSetCount, settings, "const VkDescriptorSet*", "const VkDescriptorSet", "pDescriptorSets", 1, dump_text_VkDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkQueueWaitIdle(ApiDumpInstance& dump_inst, VkResult result, VkQueue queue)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueueWaitIdle(queue) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateDisplayPlaneSurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkDisplaySurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkDisplaySurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkDisplaySurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkAllocateCommandBuffers(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkCommandBufferAllocateInfo>(pAllocateInfo, settings, "const VkCommandBufferAllocateInfo*", "pAllocateInfo", 1, dump_text_VkCommandBufferAllocateInfo);
        dump_text_array<const VkCommandBuffer>(pCommandBuffers, pAllocateInfo->commandBufferCount, settings, "VkCommandBuffer*", "VkCommandBuffer", "pCommandBuffers", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
std::ostream& dump_text_vkCreateXcbSurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkXcbSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkXcbSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkXcbSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XCB_KHR
std::ostream& dump_text_vkCreatePipelineLayout(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkPipelineLayoutCreateInfo>(pCreateInfo, settings, "const VkPipelineLayoutCreateInfo*", "pCreateInfo", 1, dump_text_VkPipelineLayoutCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkPipelineLayout>(pPipelineLayout, settings, "VkPipelineLayout*", "pPipelineLayout", 1, dump_text_VkPipelineLayout);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
std::ostream& dump_text_vkGetPhysicalDeviceWaylandPresentationSupportKHR(ApiDumpInstance& dump_inst, VkBool32 result, VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const wl_display>(display, settings, "struct wl_display*", "display", 1, dump_text_wl_display);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
std::ostream& dump_text_vkGetQueryPoolResults(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(firstQuery, settings, "uint32_t", "firstQuery", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queryCount, settings, "uint32_t", "queryCount", 1, dump_text_uint32_t);
        dump_text_value<const size_t>(dataSize, settings, "size_t", "dataSize", 1, dump_text_size_t);
        dump_text_value<const void*>(pData, settings, "void*", "pData", 1, dump_text_void);
        dump_text_value<const VkDeviceSize>(stride, settings, "VkDeviceSize", "stride", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkQueryResultFlags>(flags, settings, "VkQueryResultFlags", "flags", 1, dump_text_VkQueryResultFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_vkCreateWin32SurfaceKHR(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkWin32SurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkWin32SurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkWin32SurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_vkDeviceWaitIdle(ApiDumpInstance& dump_inst, VkResult result, VkDevice device)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDeviceWaitIdle(device) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateSwapchainKHR(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkSwapchainCreateInfoKHR>(pCreateInfo, settings, "const VkSwapchainCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkSwapchainCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSwapchainKHR>(pSwapchain, settings, "VkSwapchainKHR*", "pSwapchain", 1, dump_text_VkSwapchainKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSurfaceCapabilities2EXT(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkSurfaceCapabilities2EXT>(pSurfaceCapabilities, settings, "VkSurfaceCapabilities2EXT*", "pSurfaceCapabilities", 1, dump_text_VkSurfaceCapabilities2EXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateImage(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateImage(device, pCreateInfo, pAllocator, pImage) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkImageCreateInfo>(pCreateInfo, settings, "const VkImageCreateInfo*", "pCreateInfo", 1, dump_text_VkImageCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkImage>(pImage, settings, "VkImage*", "pImage", 1, dump_text_VkImage);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkResetDescriptorPool(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetDescriptorPool(device, descriptorPool, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorPool>(descriptorPool, settings, "VkDescriptorPool", "descriptorPool", 1, dump_text_VkDescriptorPool);
        dump_text_value<const VkDescriptorPoolResetFlags>(flags, settings, "VkDescriptorPoolResetFlags", "flags", 1, dump_text_VkDescriptorPoolResetFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkAllocateMemory(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkMemoryAllocateInfo>(pAllocateInfo, settings, "const VkMemoryAllocateInfo*", "pAllocateInfo", 1, dump_text_VkMemoryAllocateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDeviceMemory>(pMemory, settings, "VkDeviceMemory*", "pMemory", 1, dump_text_VkDeviceMemory);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateRenderPass(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkRenderPassCreateInfo>(pCreateInfo, settings, "const VkRenderPassCreateInfo*", "pCreateInfo", 1, dump_text_VkRenderPassCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkRenderPass>(pRenderPass, settings, "VkRenderPass*", "pRenderPass", 1, dump_text_VkRenderPass);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
std::ostream& dump_text_vkGetPhysicalDeviceXcbPresentationSupportKHR(ApiDumpInstance& dump_inst, VkBool32 result, VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const xcb_connection_t*>(connection, settings, "xcb_connection_t*", "connection", 1, dump_text_xcb_connection_t);
        dump_text_value<const xcb_visualid_t>(visual_id, settings, "xcb_visualid_t", "visual_id", 1, dump_text_xcb_visualid_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XCB_KHR
std::ostream& dump_text_vkAllocateDescriptorSets(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorSetAllocateInfo>(pAllocateInfo, settings, "const VkDescriptorSetAllocateInfo*", "pAllocateInfo", 1, dump_text_VkDescriptorSetAllocateInfo);
        dump_text_array<const VkDescriptorSet>(pDescriptorSets, pAllocateInfo->descriptorSetCount, settings, "VkDescriptorSet*", "VkDescriptorSet", "pDescriptorSets", 1, dump_text_VkDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
std::ostream& dump_text_vkGetPhysicalDeviceWin32PresentationSupportKHR(ApiDumpInstance& dump_inst, VkBool32 result, VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
std::ostream& dump_text_vkBeginCommandBuffer(ApiDumpInstance& dump_inst, VkResult result, VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBeginCommandBuffer(commandBuffer, pBeginInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkCommandBufferBeginInfo>(pBeginInfo, settings, "const VkCommandBufferBeginInfo*", "pBeginInfo", 1, dump_text_VkCommandBufferBeginInfo);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateBuffer(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkBufferCreateInfo>(pCreateInfo, settings, "const VkBufferCreateInfo*", "pCreateInfo", 1, dump_text_VkBufferCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkBuffer>(pBuffer, settings, "VkBuffer*", "pBuffer", 1, dump_text_VkBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(ApiDumpInstance& dump_inst, VkResult result, VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_value<const VkImageType>(type, settings, "VkImageType", "type", 1, dump_text_VkImageType);
        dump_text_value<const VkImageTiling>(tiling, settings, "VkImageTiling", "tiling", 1, dump_text_VkImageTiling);
        dump_text_value<const VkImageUsageFlags>(usage, settings, "VkImageUsageFlags", "usage", 1, dump_text_VkImageUsageFlags);
        dump_text_value<const VkImageCreateFlags>(flags, settings, "VkImageCreateFlags", "flags", 1, dump_text_VkImageCreateFlags);
        dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(externalHandleType, settings, "VkExternalMemoryHandleTypeFlagsNV", "externalHandleType", 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
        dump_text_pointer<const VkExternalImageFormatPropertiesNV>(pExternalImageFormatProperties, settings, "VkExternalImageFormatPropertiesNV*", "pExternalImageFormatProperties", 1, dump_text_VkExternalImageFormatPropertiesNV);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkEndCommandBuffer(ApiDumpInstance& dump_inst, VkResult result, VkCommandBuffer commandBuffer)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEndCommandBuffer(commandBuffer) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkMapMemory(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkMapMemory(device, memory, offset, size, flags, ppData) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(size, settings, "VkDeviceSize", "size", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkMemoryMapFlags>(flags, settings, "VkMemoryMapFlags", "flags", 1, dump_text_VkMemoryMapFlags);
        dump_text_pointer<const void*>(ppData, settings, "void**", "ppData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCreateSharedSwapchainsKHR(ApiDumpInstance& dump_inst, VkResult result, VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(swapchainCount, settings, "uint32_t", "swapchainCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSwapchainCreateInfoKHR>(pCreateInfos, swapchainCount, settings, "const VkSwapchainCreateInfoKHR*", "const VkSwapchainCreateInfoKHR", "pCreateInfos", 1, dump_text_VkSwapchainCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_array<const VkSwapchainKHR>(pSwapchains, swapchainCount, settings, "VkSwapchainKHR*", "VkSwapchainKHR", "pSwapchains", 1, dump_text_VkSwapchainKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkEnumeratePhysicalDeviceGroupsKHX(ApiDumpInstance& dump_inst, VkResult result, VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupPropertiesKHX* pPhysicalDeviceGroupProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumeratePhysicalDeviceGroupsKHX(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const uint32_t>(pPhysicalDeviceGroupCount, settings, "uint32_t*", "pPhysicalDeviceGroupCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPhysicalDeviceGroupPropertiesKHX>(pPhysicalDeviceGroupProperties, *pPhysicalDeviceGroupCount, settings, "VkPhysicalDeviceGroupPropertiesKHX*", "VkPhysicalDeviceGroupPropertiesKHX", "pPhysicalDeviceGroupProperties", 1, dump_text_VkPhysicalDeviceGroupPropertiesKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}


std::ostream& dump_text_vkCmdPushConstants(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineLayout>(layout, settings, "VkPipelineLayout", "layout", 1, dump_text_VkPipelineLayout);
        dump_text_value<const VkShaderStageFlags>(stageFlags, settings, "VkShaderStageFlags", "stageFlags", 1, dump_text_VkShaderStageFlags);
        dump_text_value<const uint32_t>(offset, settings, "uint32_t", "offset", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(size, settings, "uint32_t", "size", 1, dump_text_uint32_t);
        dump_text_value<const void*>(pValues, settings, "const void*", "pValues", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkUnmapMemory(ApiDumpInstance& dump_inst, VkDevice device, VkDeviceMemory memory)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkUnmapMemory(device, memory) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetDiscardRectangleEXT(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstDiscardRectangle, settings, "uint32_t", "firstDiscardRectangle", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(discardRectangleCount, settings, "uint32_t", "discardRectangleCount", 1, dump_text_uint32_t);
        dump_text_array<const VkRect2D>(pDiscardRectangles, discardRectangleCount, settings, "const VkRect2D*", "const VkRect2D", "pDiscardRectangles", 1, dump_text_VkRect2D);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBindDescriptorSets(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineBindPoint>(pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", 1, dump_text_VkPipelineBindPoint);
        dump_text_value<const VkPipelineLayout>(layout, settings, "VkPipelineLayout", "layout", 1, dump_text_VkPipelineLayout);
        dump_text_value<const uint32_t>(firstSet, settings, "uint32_t", "firstSet", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(descriptorSetCount, settings, "uint32_t", "descriptorSetCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDescriptorSet>(pDescriptorSets, descriptorSetCount, settings, "const VkDescriptorSet*", "const VkDescriptorSet", "pDescriptorSets", 1, dump_text_VkDescriptorSet);
        dump_text_value<const uint32_t>(dynamicOffsetCount, settings, "uint32_t", "dynamicOffsetCount", 1, dump_text_uint32_t);
        dump_text_array<const uint32_t>(pDynamicOffsets, dynamicOffsetCount, settings, "const uint32_t*", "const uint32_t", "pDynamicOffsets", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceProperties2KHX(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2KHX* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceProperties2KHX(physicalDevice, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceProperties2KHX>(pProperties, settings, "VkPhysicalDeviceProperties2KHX*", "pProperties", 1, dump_text_VkPhysicalDeviceProperties2KHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBindIndexBuffer(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkIndexType>(indexType, settings, "VkIndexType", "indexType", 1, dump_text_VkIndexType);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdProcessCommandsNVX(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkCmdProcessCommandsInfoNVX>(pProcessCommandsInfo, settings, "const VkCmdProcessCommandsInfoNVX*", "pProcessCommandsInfo", 1, dump_text_VkCmdProcessCommandsInfoNVX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdNextSubpass(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkSubpassContents contents)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdNextSubpass(commandBuffer, contents) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkSubpassContents>(contents, settings, "VkSubpassContents", "contents", 1, dump_text_VkSubpassContents);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceProperties(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceProperties(physicalDevice, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceProperties>(pProperties, settings, "VkPhysicalDeviceProperties*", "pProperties", 1, dump_text_VkPhysicalDeviceProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyDevice(ApiDumpInstance& dump_inst, VkDevice device, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDevice(device, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyImageView(ApiDumpInstance& dump_inst, VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyImageView(device, imageView, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImageView>(imageView, settings, "VkImageView", "imageView", 1, dump_text_VkImageView);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceMemoryProperties(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceMemoryProperties>(pMemoryProperties, settings, "VkPhysicalDeviceMemoryProperties*", "pMemoryProperties", 1, dump_text_VkPhysicalDeviceMemoryProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBindVertexBuffers(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstBinding, settings, "uint32_t", "firstBinding", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(bindingCount, settings, "uint32_t", "bindingCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBuffer>(pBuffers, bindingCount, settings, "const VkBuffer*", "const VkBuffer", "pBuffers", 1, dump_text_VkBuffer);
        dump_text_array<const VkDeviceSize>(pOffsets, bindingCount, settings, "const VkDeviceSize*", "const VkDeviceSize", "pOffsets", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBeginRenderPass(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkRenderPassBeginInfo>(pRenderPassBegin, settings, "const VkRenderPassBeginInfo*", "pRenderPassBegin", 1, dump_text_VkRenderPassBeginInfo);
        dump_text_value<const VkSubpassContents>(contents, settings, "VkSubpassContents", "contents", 1, dump_text_VkSubpassContents);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetImageSubresourceLayout(ApiDumpInstance& dump_inst, VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetImageSubresourceLayout(device, image, pSubresource, pLayout) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const VkImageSubresource>(pSubresource, settings, "const VkImageSubresource*", "pSubresource", 1, dump_text_VkImageSubresource);
        dump_text_pointer<const VkSubresourceLayout>(pLayout, settings, "VkSubresourceLayout*", "pLayout", 1, dump_text_VkSubresourceLayout);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdReserveSpaceForCommandsNVX(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkCmdReserveSpaceForCommandsInfoNVX>(pReserveSpaceInfo, settings, "const VkCmdReserveSpaceForCommandsInfoNVX*", "pReserveSpaceInfo", 1, dump_text_VkCmdReserveSpaceForCommandsInfoNVX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDraw(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(vertexCount, settings, "uint32_t", "vertexCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(instanceCount, settings, "uint32_t", "instanceCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(firstVertex, settings, "uint32_t", "firstVertex", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(firstInstance, settings, "uint32_t", "firstInstance", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetDeviceMemoryCommitment(ApiDumpInstance& dump_inst, VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_pointer<const VkDeviceSize>(pCommittedMemoryInBytes, settings, "VkDeviceSize*", "pCommittedMemoryInBytes", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyFence(ApiDumpInstance& dump_inst, VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyFence(device, fence, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDrawIndexed(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(indexCount, settings, "uint32_t", "indexCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(instanceCount, settings, "uint32_t", "instanceCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(firstIndex, settings, "uint32_t", "firstIndex", 1, dump_text_uint32_t);
        dump_text_value<const int32_t>(vertexOffset, settings, "int32_t", "vertexOffset", 1, dump_text_int32_t);
        dump_text_value<const uint32_t>(firstInstance, settings, "uint32_t", "firstInstance", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceQueueFamilyProperties(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pQueueFamilyPropertyCount, settings, "uint32_t*", "pQueueFamilyPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkQueueFamilyProperties>(pQueueFamilyProperties, *pQueueFamilyPropertyCount, settings, "VkQueueFamilyProperties*", "VkQueueFamilyProperties", "pQueueFamilyProperties", 1, dump_text_VkQueueFamilyProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyShaderModule(ApiDumpInstance& dump_inst, VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyShaderModule(device, shaderModule, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkShaderModule>(shaderModule, settings, "VkShaderModule", "shaderModule", 1, dump_text_VkShaderModule);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyIndirectCommandsLayoutNVX(ApiDumpInstance& dump_inst, VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkIndirectCommandsLayoutNVX>(indirectCommandsLayout, settings, "VkIndirectCommandsLayoutNVX", "indirectCommandsLayout", 1, dump_text_VkIndirectCommandsLayoutNVX);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdEndRenderPass(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdEndRenderPass(commandBuffer) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDrawIndirect(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(drawCount, settings, "uint32_t", "drawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdExecuteCommands(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(commandBufferCount, settings, "uint32_t", "commandBufferCount", 1, dump_text_uint32_t);
        dump_text_array<const VkCommandBuffer>(pCommandBuffers, commandBufferCount, settings, "const VkCommandBuffer*", "const VkCommandBuffer", "pCommandBuffers", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetDeviceGroupPeerMemoryFeaturesKHX(ApiDumpInstance& dump_inst, VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlagsKHX* pPeerMemoryFeatures)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceGroupPeerMemoryFeaturesKHX(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(heapIndex, settings, "uint32_t", "heapIndex", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(localDeviceIndex, settings, "uint32_t", "localDeviceIndex", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(remoteDeviceIndex, settings, "uint32_t", "remoteDeviceIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const VkPeerMemoryFeatureFlagsKHX>(pPeerMemoryFeatures, settings, "VkPeerMemoryFeatureFlagsKHX*", "pPeerMemoryFeatures", 1, dump_text_VkPeerMemoryFeatureFlagsKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetImageSparseMemoryRequirements(ApiDumpInstance& dump_inst, VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const uint32_t>(pSparseMemoryRequirementCount, settings, "uint32_t*", "pSparseMemoryRequirementCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSparseImageMemoryRequirements>(pSparseMemoryRequirements, *pSparseMemoryRequirementCount, settings, "VkSparseImageMemoryRequirements*", "VkSparseImageMemoryRequirements", "pSparseMemoryRequirements", 1, dump_text_VkSparseImageMemoryRequirements);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDrawIndexedIndirect(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(drawCount, settings, "uint32_t", "drawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceFeatures2KHR(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2KHR* pFeatures)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceFeatures2KHR>(pFeatures, settings, "VkPhysicalDeviceFeatures2KHR*", "pFeatures", 1, dump_text_VkPhysicalDeviceFeatures2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetDeviceMaskKHX(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t deviceMask)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetDeviceMaskKHX(commandBuffer, deviceMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(deviceMask, settings, "uint32_t", "deviceMask", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyObjectTableNVX(ApiDumpInstance& dump_inst, VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyObjectTableNVX(device, objectTable, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkObjectTableNVX>(objectTable, settings, "VkObjectTableNVX", "objectTable", 1, dump_text_VkObjectTableNVX);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetBufferMemoryRequirements(ApiDumpInstance& dump_inst, VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_pointer<const VkMemoryRequirements>(pMemoryRequirements, settings, "VkMemoryRequirements*", "pMemoryRequirements", 1, dump_text_VkMemoryRequirements);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDispatch(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(groupCountX, settings, "uint32_t", "groupCountX", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(groupCountY, settings, "uint32_t", "groupCountY", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(groupCountZ, settings, "uint32_t", "groupCountZ", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceProperties2KHR(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2KHR* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceProperties2KHR>(pProperties, settings, "VkPhysicalDeviceProperties2KHR*", "pProperties", 1, dump_text_VkPhysicalDeviceProperties2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetImageMemoryRequirements(ApiDumpInstance& dump_inst, VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetImageMemoryRequirements(device, image, pMemoryRequirements) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const VkMemoryRequirements>(pMemoryRequirements, settings, "VkMemoryRequirements*", "pMemoryRequirements", 1, dump_text_VkMemoryRequirements);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceFeatures(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceFeatures>(pFeatures, settings, "VkPhysicalDeviceFeatures*", "pFeatures", 1, dump_text_VkPhysicalDeviceFeatures);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyPipelineCache(ApiDumpInstance& dump_inst, VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyPipelineCache(device, pipelineCache, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdCopyBuffer(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(srcBuffer, settings, "VkBuffer", "srcBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferCopy>(pRegions, regionCount, settings, "const VkBufferCopy*", "const VkBufferCopy", "pRegions", 1, dump_text_VkBufferCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceMemoryProperties2KHR(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2KHR* pMemoryProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceMemoryProperties2KHR>(pMemoryProperties, settings, "VkPhysicalDeviceMemoryProperties2KHR*", "pMemoryProperties", 1, dump_text_VkPhysicalDeviceMemoryProperties2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdPushDescriptorSetKHR(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineBindPoint>(pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", 1, dump_text_VkPipelineBindPoint);
        dump_text_value<const VkPipelineLayout>(layout, settings, "VkPipelineLayout", "layout", 1, dump_text_VkPipelineLayout);
        dump_text_value<const uint32_t>(set, settings, "uint32_t", "set", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(descriptorWriteCount, settings, "uint32_t", "descriptorWriteCount", 1, dump_text_uint32_t);
        dump_text_array<const VkWriteDescriptorSet>(pDescriptorWrites, descriptorWriteCount, settings, "const VkWriteDescriptorSet*", "const VkWriteDescriptorSet", "pDescriptorWrites", 1, dump_text_VkWriteDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceFormatProperties2KHR(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2KHR* pFormatProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_pointer<const VkFormatProperties2KHR>(pFormatProperties, settings, "VkFormatProperties2KHR*", "pFormatProperties", 1, dump_text_VkFormatProperties2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetDeviceQueue(ApiDumpInstance& dump_inst, VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queueIndex, settings, "uint32_t", "queueIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const VkQueue>(pQueue, settings, "VkQueue*", "pQueue", 1, dump_text_VkQueue);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroySemaphore(ApiDumpInstance& dump_inst, VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySemaphore(device, semaphore, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSemaphore>(semaphore, settings, "VkSemaphore", "semaphore", 1, dump_text_VkSemaphore);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDispatchBaseKHX(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDispatchBaseKHX(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(baseGroupX, settings, "uint32_t", "baseGroupX", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(baseGroupY, settings, "uint32_t", "baseGroupY", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(baseGroupZ, settings, "uint32_t", "baseGroupZ", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(groupCountX, settings, "uint32_t", "groupCountX", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(groupCountY, settings, "uint32_t", "groupCountY", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(groupCountZ, settings, "uint32_t", "groupCountZ", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkDeviceGeneratedCommandsFeaturesNVX* pFeatures, VkDeviceGeneratedCommandsLimitsNVX* pLimits)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkDeviceGeneratedCommandsFeaturesNVX>(pFeatures, settings, "VkDeviceGeneratedCommandsFeaturesNVX*", "pFeatures", 1, dump_text_VkDeviceGeneratedCommandsFeaturesNVX);
        dump_text_pointer<const VkDeviceGeneratedCommandsLimitsNVX>(pLimits, settings, "VkDeviceGeneratedCommandsLimitsNVX*", "pLimits", 1, dump_text_VkDeviceGeneratedCommandsLimitsNVX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroySurfaceKHR(ApiDumpInstance& dump_inst, VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySurfaceKHR(instance, surface, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDispatchIndirect(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDispatchIndirect(commandBuffer, buffer, offset) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdCopyImage(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageCopy>(pRegions, regionCount, settings, "const VkImageCopy*", "const VkImageCopy", "pRegions", 1, dump_text_VkImageCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyInstance(ApiDumpInstance& dump_inst, VkInstance instance, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyInstance(instance, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2KHR* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2KHR* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceSparseImageFormatInfo2KHR>(pFormatInfo, settings, "const VkPhysicalDeviceSparseImageFormatInfo2KHR*", "pFormatInfo", 1, dump_text_VkPhysicalDeviceSparseImageFormatInfo2KHR);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSparseImageFormatProperties2KHR>(pProperties, *pPropertyCount, settings, "VkSparseImageFormatProperties2KHR*", "VkSparseImageFormatProperties2KHR", "pProperties", 1, dump_text_VkSparseImageFormatProperties2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyEvent(ApiDumpInstance& dump_inst, VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyEvent(device, event, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroySampler(ApiDumpInstance& dump_inst, VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySampler(device, sampler, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSampler>(sampler, settings, "VkSampler", "sampler", 1, dump_text_VkSampler);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceQueueFamilyProperties2KHR(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2KHR* pQueueFamilyProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pQueueFamilyPropertyCount, settings, "uint32_t*", "pQueueFamilyPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkQueueFamilyProperties2KHR>(pQueueFamilyProperties, *pQueueFamilyPropertyCount, settings, "VkQueueFamilyProperties2KHR*", "VkQueueFamilyProperties2KHR", "pQueueFamilyProperties", 1, dump_text_VkQueueFamilyProperties2KHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceSparseImageFormatProperties(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_value<const VkImageType>(type, settings, "VkImageType", "type", 1, dump_text_VkImageType);
        dump_text_value<const VkSampleCountFlagBits>(samples, settings, "VkSampleCountFlagBits", "samples", 1, dump_text_VkSampleCountFlagBits);
        dump_text_value<const VkImageUsageFlags>(usage, settings, "VkImageUsageFlags", "usage", 1, dump_text_VkImageUsageFlags);
        dump_text_value<const VkImageTiling>(tiling, settings, "VkImageTiling", "tiling", 1, dump_text_VkImageTiling);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSparseImageFormatProperties>(pProperties, *pPropertyCount, settings, "VkSparseImageFormatProperties*", "VkSparseImageFormatProperties", "pProperties", 1, dump_text_VkSparseImageFormatProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBlitImage(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageBlit>(pRegions, regionCount, settings, "const VkImageBlit*", "const VkImageBlit", "pRegions", 1, dump_text_VkImageBlit);
        dump_text_value<const VkFilter>(filter, settings, "VkFilter", "filter", 1, dump_text_VkFilter);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDebugReportMessageEXT(ApiDumpInstance& dump_inst, VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const VkDebugReportFlagsEXT>(flags, settings, "VkDebugReportFlagsEXT", "flags", 1, dump_text_VkDebugReportFlagsEXT);
        dump_text_value<const VkDebugReportObjectTypeEXT>(objectType, settings, "VkDebugReportObjectTypeEXT", "objectType", 1, dump_text_VkDebugReportObjectTypeEXT);
        dump_text_value<const uint64_t>(object, settings, "uint64_t", "object", 1, dump_text_uint64_t);
        dump_text_value<const size_t>(location, settings, "size_t", "location", 1, dump_text_size_t);
        dump_text_value<const int32_t>(messageCode, settings, "int32_t", "messageCode", 1, dump_text_int32_t);
        dump_text_value<const char*>(pLayerPrefix, settings, "const char*", "pLayerPrefix", 1, dump_text_cstring);
        dump_text_value<const char*>(pMessage, settings, "const char*", "pMessage", 1, dump_text_cstring);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetRenderAreaGranularity(ApiDumpInstance& dump_inst, VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetRenderAreaGranularity(device, renderPass, pGranularity) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkRenderPass>(renderPass, settings, "VkRenderPass", "renderPass", 1, dump_text_VkRenderPass);
        dump_text_pointer<const VkExtent2D>(pGranularity, settings, "VkExtent2D*", "pGranularity", 1, dump_text_VkExtent2D);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdClearDepthStencilImage(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(imageLayout, settings, "VkImageLayout", "imageLayout", 1, dump_text_VkImageLayout);
        dump_text_pointer<const VkClearDepthStencilValue>(pDepthStencil, settings, "const VkClearDepthStencilValue*", "pDepthStencil", 1, dump_text_VkClearDepthStencilValue);
        dump_text_value<const uint32_t>(rangeCount, settings, "uint32_t", "rangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageSubresourceRange>(pRanges, rangeCount, settings, "const VkImageSubresourceRange*", "const VkImageSubresourceRange", "pRanges", 1, dump_text_VkImageSubresourceRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDebugMarkerBeginEXT(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkDebugMarkerMarkerInfoEXT>(pMarkerInfo, settings, "VkDebugMarkerMarkerInfoEXT*", "pMarkerInfo", 1, dump_text_VkDebugMarkerMarkerInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyDebugReportCallbackEXT(ApiDumpInstance& dump_inst, VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const VkDebugReportCallbackEXT>(callback, settings, "VkDebugReportCallbackEXT", "callback", 1, dump_text_VkDebugReportCallbackEXT);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDebugMarkerEndEXT(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDebugMarkerEndEXT(commandBuffer) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDebugMarkerInsertEXT(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkDebugMarkerMarkerInfoEXT>(pMarkerInfo, settings, "VkDebugMarkerMarkerInfoEXT*", "pMarkerInfo", 1, dump_text_VkDebugMarkerMarkerInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdClearAttachments(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(attachmentCount, settings, "uint32_t", "attachmentCount", 1, dump_text_uint32_t);
        dump_text_array<const VkClearAttachment>(pAttachments, attachmentCount, settings, "const VkClearAttachment*", "const VkClearAttachment", "pAttachments", 1, dump_text_VkClearAttachment);
        dump_text_value<const uint32_t>(rectCount, settings, "uint32_t", "rectCount", 1, dump_text_uint32_t);
        dump_text_array<const VkClearRect>(pRects, rectCount, settings, "const VkClearRect*", "const VkClearRect", "pRects", 1, dump_text_VkClearRect);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdPipelineBarrier(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineStageFlags>(srcStageMask, settings, "VkPipelineStageFlags", "srcStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const VkPipelineStageFlags>(dstStageMask, settings, "VkPipelineStageFlags", "dstStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const VkDependencyFlags>(dependencyFlags, settings, "VkDependencyFlags", "dependencyFlags", 1, dump_text_VkDependencyFlags);
        dump_text_value<const uint32_t>(memoryBarrierCount, settings, "uint32_t", "memoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMemoryBarrier>(pMemoryBarriers, memoryBarrierCount, settings, "const VkMemoryBarrier*", "const VkMemoryBarrier", "pMemoryBarriers", 1, dump_text_VkMemoryBarrier);
        dump_text_value<const uint32_t>(bufferMemoryBarrierCount, settings, "uint32_t", "bufferMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferMemoryBarrier>(pBufferMemoryBarriers, bufferMemoryBarrierCount, settings, "const VkBufferMemoryBarrier*", "const VkBufferMemoryBarrier", "pBufferMemoryBarriers", 1, dump_text_VkBufferMemoryBarrier);
        dump_text_value<const uint32_t>(imageMemoryBarrierCount, settings, "uint32_t", "imageMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageMemoryBarrier>(pImageMemoryBarriers, imageMemoryBarrierCount, settings, "const VkImageMemoryBarrier*", "const VkImageMemoryBarrier", "pImageMemoryBarriers", 1, dump_text_VkImageMemoryBarrier);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkUpdateDescriptorSetWithTemplateKHR(ApiDumpInstance& dump_inst, VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const void* pData)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkUpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorSet>(descriptorSet, settings, "VkDescriptorSet", "descriptorSet", 1, dump_text_VkDescriptorSet);
        dump_text_value<const VkDescriptorUpdateTemplateKHR>(descriptorUpdateTemplate, settings, "VkDescriptorUpdateTemplateKHR", "descriptorUpdateTemplate", 1, dump_text_VkDescriptorUpdateTemplateKHR);
        dump_text_value<const void*>(pData, settings, "const void*", "pData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdCopyBufferToImage(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(srcBuffer, settings, "VkBuffer", "srcBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferImageCopy>(pRegions, regionCount, settings, "const VkBufferImageCopy*", "const VkBufferImageCopy", "pRegions", 1, dump_text_VkBufferImageCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetViewport(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstViewport, settings, "uint32_t", "firstViewport", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(viewportCount, settings, "uint32_t", "viewportCount", 1, dump_text_uint32_t);
        dump_text_array<const VkViewport>(pViewports, viewportCount, settings, "const VkViewport*", "const VkViewport", "pViewports", 1, dump_text_VkViewport);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBindPipeline(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineBindPoint>(pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", 1, dump_text_VkPipelineBindPoint);
        dump_text_value<const VkPipeline>(pipeline, settings, "VkPipeline", "pipeline", 1, dump_text_VkPipeline);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkFreeCommandBuffers(ApiDumpInstance& dump_inst, VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_value<const uint32_t>(commandBufferCount, settings, "uint32_t", "commandBufferCount", 1, dump_text_uint32_t);
        dump_text_array<const VkCommandBuffer>(pCommandBuffers, commandBufferCount, settings, "const VkCommandBuffer*", "const VkCommandBuffer", "pCommandBuffers", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetLineWidth(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, float lineWidth)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetLineWidth(commandBuffer, lineWidth) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const float>(lineWidth, settings, "float", "lineWidth", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetScissor(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstScissor, settings, "uint32_t", "firstScissor", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(scissorCount, settings, "uint32_t", "scissorCount", 1, dump_text_uint32_t);
        dump_text_array<const VkRect2D>(pScissors, scissorCount, settings, "const VkRect2D*", "const VkRect2D", "pScissors", 1, dump_text_VkRect2D);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyDescriptorUpdateTemplateKHR(ApiDumpInstance& dump_inst, VkDevice device, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorUpdateTemplateKHR>(descriptorUpdateTemplate, settings, "VkDescriptorUpdateTemplateKHR", "descriptorUpdateTemplate", 1, dump_text_VkDescriptorUpdateTemplateKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyDescriptorSetLayout(ApiDumpInstance& dump_inst, VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorSetLayout>(descriptorSetLayout, settings, "VkDescriptorSetLayout", "descriptorSetLayout", 1, dump_text_VkDescriptorSetLayout);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetDepthBias(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const float>(depthBiasConstantFactor, settings, "float", "depthBiasConstantFactor", 1, dump_text_float);
        dump_text_value<const float>(depthBiasClamp, settings, "float", "depthBiasClamp", 1, dump_text_float);
        dump_text_value<const float>(depthBiasSlopeFactor, settings, "float", "depthBiasSlopeFactor", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyCommandPool(ApiDumpInstance& dump_inst, VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyCommandPool(device, commandPool, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdPushDescriptorSetWithTemplateKHR(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkDescriptorUpdateTemplateKHR>(descriptorUpdateTemplate, settings, "VkDescriptorUpdateTemplateKHR", "descriptorUpdateTemplate", 1, dump_text_VkDescriptorUpdateTemplateKHR);
        dump_text_value<const VkPipelineLayout>(layout, settings, "VkPipelineLayout", "layout", 1, dump_text_VkPipelineLayout);
        dump_text_value<const uint32_t>(set, settings, "uint32_t", "set", 1, dump_text_uint32_t);
        dump_text_value<const void*>(pData, settings, "const void*", "pData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyBuffer(ApiDumpInstance& dump_inst, VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyBuffer(device, buffer, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdResolveImage(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageResolve>(pRegions, regionCount, settings, "const VkImageResolve*", "const VkImageResolve", "pRegions", 1, dump_text_VkImageResolve);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdCopyImageToBuffer(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferImageCopy>(pRegions, regionCount, settings, "const VkBufferImageCopy*", "const VkBufferImageCopy", "pRegions", 1, dump_text_VkBufferImageCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdBeginQuery(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBeginQuery(commandBuffer, queryPool, query, flags) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(query, settings, "uint32_t", "query", 1, dump_text_uint32_t);
        dump_text_value<const VkQueryControlFlags>(flags, settings, "VkQueryControlFlags", "flags", 1, dump_text_VkQueryControlFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetBlendConstants(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, const float blendConstants[4])
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetBlendConstants(commandBuffer, blendConstants) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_array<const float>(blendConstants, 4, settings, "const float[4]", "const float", "blendConstants", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdWaitEvents(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(eventCount, settings, "uint32_t", "eventCount", 1, dump_text_uint32_t);
        dump_text_array<const VkEvent>(pEvents, eventCount, settings, "const VkEvent*", "const VkEvent", "pEvents", 1, dump_text_VkEvent);
        dump_text_value<const VkPipelineStageFlags>(srcStageMask, settings, "VkPipelineStageFlags", "srcStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const VkPipelineStageFlags>(dstStageMask, settings, "VkPipelineStageFlags", "dstStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const uint32_t>(memoryBarrierCount, settings, "uint32_t", "memoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMemoryBarrier>(pMemoryBarriers, memoryBarrierCount, settings, "const VkMemoryBarrier*", "const VkMemoryBarrier", "pMemoryBarriers", 1, dump_text_VkMemoryBarrier);
        dump_text_value<const uint32_t>(bufferMemoryBarrierCount, settings, "uint32_t", "bufferMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferMemoryBarrier>(pBufferMemoryBarriers, bufferMemoryBarrierCount, settings, "const VkBufferMemoryBarrier*", "const VkBufferMemoryBarrier", "pBufferMemoryBarriers", 1, dump_text_VkBufferMemoryBarrier);
        dump_text_value<const uint32_t>(imageMemoryBarrierCount, settings, "uint32_t", "imageMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageMemoryBarrier>(pImageMemoryBarriers, imageMemoryBarrierCount, settings, "const VkImageMemoryBarrier*", "const VkImageMemoryBarrier", "pImageMemoryBarriers", 1, dump_text_VkImageMemoryBarrier);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDrawIndirectCountAMD(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkBuffer>(countBuffer, settings, "VkBuffer", "countBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(countBufferOffset, settings, "VkDeviceSize", "countBufferOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(maxDrawCount, settings, "uint32_t", "maxDrawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyDescriptorPool(ApiDumpInstance& dump_inst, VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDescriptorPool(device, descriptorPool, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorPool>(descriptorPool, settings, "VkDescriptorPool", "descriptorPool", 1, dump_text_VkDescriptorPool);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetStencilReference(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetStencilReference(commandBuffer, faceMask, reference) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkStencilFaceFlags>(faceMask, settings, "VkStencilFaceFlags", "faceMask", 1, dump_text_VkStencilFaceFlags);
        dump_text_value<const uint32_t>(reference, settings, "uint32_t", "reference", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceFormatProperties(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_pointer<const VkFormatProperties>(pFormatProperties, settings, "VkFormatProperties*", "pFormatProperties", 1, dump_text_VkFormatProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdDrawIndexedIndirectCountAMD(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkBuffer>(countBuffer, settings, "VkBuffer", "countBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(countBufferOffset, settings, "VkDeviceSize", "countBufferOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(maxDrawCount, settings, "uint32_t", "maxDrawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkTrimCommandPoolKHR(ApiDumpInstance& dump_inst, VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlagsKHR flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkTrimCommandPoolKHR(device, commandPool, flags) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_value<const VkCommandPoolTrimFlagsKHR>(flags, settings, "VkCommandPoolTrimFlagsKHR", "flags", 1, dump_text_VkCommandPoolTrimFlagsKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyQueryPool(ApiDumpInstance& dump_inst, VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyQueryPool(device, queryPool, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdResetQueryPool(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(firstQuery, settings, "uint32_t", "firstQuery", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queryCount, settings, "uint32_t", "queryCount", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdUpdateBuffer(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(dstOffset, settings, "VkDeviceSize", "dstOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(dataSize, settings, "VkDeviceSize", "dataSize", 1, dump_text_VkDeviceSize);
        dump_text_value<const void*>(pData, settings, "const void*", "pData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdEndQuery(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdEndQuery(commandBuffer, queryPool, query) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(query, settings, "uint32_t", "query", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceExternalSemaphorePropertiesKHX(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfoKHX* pExternalSemaphoreInfo, VkExternalSemaphorePropertiesKHX* pExternalSemaphoreProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceExternalSemaphorePropertiesKHX(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceExternalSemaphoreInfoKHX>(pExternalSemaphoreInfo, settings, "const VkPhysicalDeviceExternalSemaphoreInfoKHX*", "pExternalSemaphoreInfo", 1, dump_text_VkPhysicalDeviceExternalSemaphoreInfoKHX);
        dump_text_pointer<const VkExternalSemaphorePropertiesKHX>(pExternalSemaphoreProperties, settings, "VkExternalSemaphorePropertiesKHX*", "pExternalSemaphoreProperties", 1, dump_text_VkExternalSemaphorePropertiesKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetDepthBounds(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const float>(minDepthBounds, settings, "float", "minDepthBounds", 1, dump_text_float);
        dump_text_value<const float>(maxDepthBounds, settings, "float", "maxDepthBounds", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyBufferView(ApiDumpInstance& dump_inst, VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyBufferView(device, bufferView, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBufferView>(bufferView, settings, "VkBufferView", "bufferView", 1, dump_text_VkBufferView);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyFramebuffer(ApiDumpInstance& dump_inst, VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyFramebuffer(device, framebuffer, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkFramebuffer>(framebuffer, settings, "VkFramebuffer", "framebuffer", 1, dump_text_VkFramebuffer);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyRenderPass(ApiDumpInstance& dump_inst, VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyRenderPass(device, renderPass, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkRenderPass>(renderPass, settings, "VkRenderPass", "renderPass", 1, dump_text_VkRenderPass);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetStencilCompareMask(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkStencilFaceFlags>(faceMask, settings, "VkStencilFaceFlags", "faceMask", 1, dump_text_VkStencilFaceFlags);
        dump_text_value<const uint32_t>(compareMask, settings, "uint32_t", "compareMask", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyPipeline(ApiDumpInstance& dump_inst, VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyPipeline(device, pipeline, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipeline>(pipeline, settings, "VkPipeline", "pipeline", 1, dump_text_VkPipeline);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdWriteTimestamp(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineStageFlagBits>(pipelineStage, settings, "VkPipelineStageFlagBits", "pipelineStage", 1, dump_text_VkPipelineStageFlagBits);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(query, settings, "uint32_t", "query", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroySwapchainKHR(ApiDumpInstance& dump_inst, VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySwapchainKHR(device, swapchain, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyImage(ApiDumpInstance& dump_inst, VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyImage(device, image, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdFillBuffer(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(dstOffset, settings, "VkDeviceSize", "dstOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(size, settings, "VkDeviceSize", "size", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(data, settings, "uint32_t", "data", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetEvent(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetEvent(commandBuffer, event, stageMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
        dump_text_value<const VkPipelineStageFlags>(stageMask, settings, "VkPipelineStageFlags", "stageMask", 1, dump_text_VkPipelineStageFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdResetEvent(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdResetEvent(commandBuffer, event, stageMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
        dump_text_value<const VkPipelineStageFlags>(stageMask, settings, "VkPipelineStageFlags", "stageMask", 1, dump_text_VkPipelineStageFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkFreeMemory(ApiDumpInstance& dump_inst, VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFreeMemory(device, memory, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdClearColorImage(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(imageLayout, settings, "VkImageLayout", "imageLayout", 1, dump_text_VkImageLayout);
        dump_text_pointer<const VkClearColorValue>(pColor, settings, "const VkClearColorValue*", "pColor", 1, dump_text_VkClearColorValue);
        dump_text_value<const uint32_t>(rangeCount, settings, "uint32_t", "rangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageSubresourceRange>(pRanges, rangeCount, settings, "const VkImageSubresourceRange*", "const VkImageSubresourceRange", "pRanges", 1, dump_text_VkImageSubresourceRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkGetPhysicalDeviceExternalBufferPropertiesKHX(ApiDumpInstance& dump_inst, VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfoKHX* pExternalBufferInfo, VkExternalBufferPropertiesKHX* pExternalBufferProperties)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceExternalBufferPropertiesKHX(physicalDevice, pExternalBufferInfo, pExternalBufferProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceExternalBufferInfoKHX>(pExternalBufferInfo, settings, "const VkPhysicalDeviceExternalBufferInfoKHX*", "pExternalBufferInfo", 1, dump_text_VkPhysicalDeviceExternalBufferInfoKHX);
        dump_text_pointer<const VkExternalBufferPropertiesKHX>(pExternalBufferProperties, settings, "VkExternalBufferPropertiesKHX*", "pExternalBufferProperties", 1, dump_text_VkExternalBufferPropertiesKHX);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetViewportWScalingNV(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstViewport, settings, "uint32_t", "firstViewport", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(viewportCount, settings, "uint32_t", "viewportCount", 1, dump_text_uint32_t);
        dump_text_array<const VkViewportWScalingNV>(pViewportWScalings, viewportCount, settings, "const VkViewportWScalingNV*", "const VkViewportWScalingNV", "pViewportWScalings", 1, dump_text_VkViewportWScalingNV);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkDestroyPipelineLayout(ApiDumpInstance& dump_inst, VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyPipelineLayout(device, pipelineLayout, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineLayout>(pipelineLayout, settings, "VkPipelineLayout", "pipelineLayout", 1, dump_text_VkPipelineLayout);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdSetStencilWriteMask(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkStencilFaceFlags>(faceMask, settings, "VkStencilFaceFlags", "faceMask", 1, dump_text_VkStencilFaceFlags);
        dump_text_value<const uint32_t>(writeMask, settings, "uint32_t", "writeMask", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkCmdCopyQueryPoolResults(ApiDumpInstance& dump_inst, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(firstQuery, settings, "uint32_t", "firstQuery", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queryCount, settings, "uint32_t", "queryCount", 1, dump_text_uint32_t);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(dstOffset, settings, "VkDeviceSize", "dstOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(stride, settings, "VkDeviceSize", "stride", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkQueryResultFlags>(flags, settings, "VkQueryResultFlags", "flags", 1, dump_text_VkQueryResultFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}
std::ostream& dump_text_vkUpdateDescriptorSets(ApiDumpInstance& dump_inst, VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies)
{
    const ApiDumpSettings& settings(dump_inst.settings());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(descriptorWriteCount, settings, "uint32_t", "descriptorWriteCount", 1, dump_text_uint32_t);
        dump_text_array<const VkWriteDescriptorSet>(pDescriptorWrites, descriptorWriteCount, settings, "const VkWriteDescriptorSet*", "const VkWriteDescriptorSet", "pDescriptorWrites", 1, dump_text_VkWriteDescriptorSet);
        dump_text_value<const uint32_t>(descriptorCopyCount, settings, "uint32_t", "descriptorCopyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkCopyDescriptorSet>(pDescriptorCopies, descriptorCopyCount, settings, "const VkCopyDescriptorSet*", "const VkCopyDescriptorSet", "pDescriptorCopies", 1, dump_text_VkCopyDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    
    return settings.stream();
}


