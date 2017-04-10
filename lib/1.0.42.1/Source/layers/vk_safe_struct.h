// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See helper_file_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2015-2017 The Khronos Group Inc.
 * Copyright (c) 2015-2017 Valve Corporation
 * Copyright (c) 2015-2017 LunarG, Inc.
 * Copyright (c) 2015-2017 Google Inc.
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
 * Author: Mark Lobodzinski <mark@lunarg.com>
 * Author: Courtney Goeltzenleuchter <courtneygo@google.com>
 * Author: Tobin Ehlis <tobine@google.com>
 *
 ****************************************************************************/


#pragma once
#include <vulkan/vulkan.h>


struct safe_VkApplicationInfo {
    VkStructureType sType;
    const void* pNext;
    const char* pApplicationName;
    uint32_t applicationVersion;
    const char* pEngineName;
    uint32_t engineVersion;
    uint32_t apiVersion;
    safe_VkApplicationInfo(const VkApplicationInfo* in_struct);
    safe_VkApplicationInfo(const safe_VkApplicationInfo& src);
    safe_VkApplicationInfo();
    ~safe_VkApplicationInfo();
    void initialize(const VkApplicationInfo* in_struct);
    void initialize(const safe_VkApplicationInfo* src);
    VkApplicationInfo *ptr() { return reinterpret_cast<VkApplicationInfo *>(this); }
    VkApplicationInfo const *ptr() const { return reinterpret_cast<VkApplicationInfo const *>(this); }
};

struct safe_VkInstanceCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkInstanceCreateFlags flags;
    safe_VkApplicationInfo* pApplicationInfo;
    uint32_t enabledLayerCount;
    const char* const* ppEnabledLayerNames;
    uint32_t enabledExtensionCount;
    const char* const* ppEnabledExtensionNames;
    safe_VkInstanceCreateInfo(const VkInstanceCreateInfo* in_struct);
    safe_VkInstanceCreateInfo(const safe_VkInstanceCreateInfo& src);
    safe_VkInstanceCreateInfo();
    ~safe_VkInstanceCreateInfo();
    void initialize(const VkInstanceCreateInfo* in_struct);
    void initialize(const safe_VkInstanceCreateInfo* src);
    VkInstanceCreateInfo *ptr() { return reinterpret_cast<VkInstanceCreateInfo *>(this); }
    VkInstanceCreateInfo const *ptr() const { return reinterpret_cast<VkInstanceCreateInfo const *>(this); }
};

struct safe_VkAllocationCallbacks {
    void* pUserData;
    PFN_vkAllocationFunction pfnAllocation;
    PFN_vkReallocationFunction pfnReallocation;
    PFN_vkFreeFunction pfnFree;
    PFN_vkInternalAllocationNotification pfnInternalAllocation;
    PFN_vkInternalFreeNotification pfnInternalFree;
    safe_VkAllocationCallbacks(const VkAllocationCallbacks* in_struct);
    safe_VkAllocationCallbacks(const safe_VkAllocationCallbacks& src);
    safe_VkAllocationCallbacks();
    ~safe_VkAllocationCallbacks();
    void initialize(const VkAllocationCallbacks* in_struct);
    void initialize(const safe_VkAllocationCallbacks* src);
    VkAllocationCallbacks *ptr() { return reinterpret_cast<VkAllocationCallbacks *>(this); }
    VkAllocationCallbacks const *ptr() const { return reinterpret_cast<VkAllocationCallbacks const *>(this); }
};

struct safe_VkDeviceQueueCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDeviceQueueCreateFlags flags;
    uint32_t queueFamilyIndex;
    uint32_t queueCount;
    const float* pQueuePriorities;
    safe_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct);
    safe_VkDeviceQueueCreateInfo(const safe_VkDeviceQueueCreateInfo& src);
    safe_VkDeviceQueueCreateInfo();
    ~safe_VkDeviceQueueCreateInfo();
    void initialize(const VkDeviceQueueCreateInfo* in_struct);
    void initialize(const safe_VkDeviceQueueCreateInfo* src);
    VkDeviceQueueCreateInfo *ptr() { return reinterpret_cast<VkDeviceQueueCreateInfo *>(this); }
    VkDeviceQueueCreateInfo const *ptr() const { return reinterpret_cast<VkDeviceQueueCreateInfo const *>(this); }
};

struct safe_VkDeviceCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDeviceCreateFlags flags;
    uint32_t queueCreateInfoCount;
    safe_VkDeviceQueueCreateInfo* pQueueCreateInfos;
    uint32_t enabledLayerCount;
    const char* const* ppEnabledLayerNames;
    uint32_t enabledExtensionCount;
    const char* const* ppEnabledExtensionNames;
    const VkPhysicalDeviceFeatures* pEnabledFeatures;
    safe_VkDeviceCreateInfo(const VkDeviceCreateInfo* in_struct);
    safe_VkDeviceCreateInfo(const safe_VkDeviceCreateInfo& src);
    safe_VkDeviceCreateInfo();
    ~safe_VkDeviceCreateInfo();
    void initialize(const VkDeviceCreateInfo* in_struct);
    void initialize(const safe_VkDeviceCreateInfo* src);
    VkDeviceCreateInfo *ptr() { return reinterpret_cast<VkDeviceCreateInfo *>(this); }
    VkDeviceCreateInfo const *ptr() const { return reinterpret_cast<VkDeviceCreateInfo const *>(this); }
};

struct safe_VkSubmitInfo {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores;
    const VkPipelineStageFlags* pWaitDstStageMask;
    uint32_t commandBufferCount;
    VkCommandBuffer* pCommandBuffers;
    uint32_t signalSemaphoreCount;
    VkSemaphore* pSignalSemaphores;
    safe_VkSubmitInfo(const VkSubmitInfo* in_struct);
    safe_VkSubmitInfo(const safe_VkSubmitInfo& src);
    safe_VkSubmitInfo();
    ~safe_VkSubmitInfo();
    void initialize(const VkSubmitInfo* in_struct);
    void initialize(const safe_VkSubmitInfo* src);
    VkSubmitInfo *ptr() { return reinterpret_cast<VkSubmitInfo *>(this); }
    VkSubmitInfo const *ptr() const { return reinterpret_cast<VkSubmitInfo const *>(this); }
};

struct safe_VkMemoryAllocateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDeviceSize allocationSize;
    uint32_t memoryTypeIndex;
    safe_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct);
    safe_VkMemoryAllocateInfo(const safe_VkMemoryAllocateInfo& src);
    safe_VkMemoryAllocateInfo();
    ~safe_VkMemoryAllocateInfo();
    void initialize(const VkMemoryAllocateInfo* in_struct);
    void initialize(const safe_VkMemoryAllocateInfo* src);
    VkMemoryAllocateInfo *ptr() { return reinterpret_cast<VkMemoryAllocateInfo *>(this); }
    VkMemoryAllocateInfo const *ptr() const { return reinterpret_cast<VkMemoryAllocateInfo const *>(this); }
};

struct safe_VkMappedMemoryRange {
    VkStructureType sType;
    const void* pNext;
    VkDeviceMemory memory;
    VkDeviceSize offset;
    VkDeviceSize size;
    safe_VkMappedMemoryRange(const VkMappedMemoryRange* in_struct);
    safe_VkMappedMemoryRange(const safe_VkMappedMemoryRange& src);
    safe_VkMappedMemoryRange();
    ~safe_VkMappedMemoryRange();
    void initialize(const VkMappedMemoryRange* in_struct);
    void initialize(const safe_VkMappedMemoryRange* src);
    VkMappedMemoryRange *ptr() { return reinterpret_cast<VkMappedMemoryRange *>(this); }
    VkMappedMemoryRange const *ptr() const { return reinterpret_cast<VkMappedMemoryRange const *>(this); }
};

struct safe_VkSparseBufferMemoryBindInfo {
    VkBuffer buffer;
    uint32_t bindCount;
    VkSparseMemoryBind* pBinds;
    safe_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct);
    safe_VkSparseBufferMemoryBindInfo(const safe_VkSparseBufferMemoryBindInfo& src);
    safe_VkSparseBufferMemoryBindInfo();
    ~safe_VkSparseBufferMemoryBindInfo();
    void initialize(const VkSparseBufferMemoryBindInfo* in_struct);
    void initialize(const safe_VkSparseBufferMemoryBindInfo* src);
    VkSparseBufferMemoryBindInfo *ptr() { return reinterpret_cast<VkSparseBufferMemoryBindInfo *>(this); }
    VkSparseBufferMemoryBindInfo const *ptr() const { return reinterpret_cast<VkSparseBufferMemoryBindInfo const *>(this); }
};

struct safe_VkSparseImageOpaqueMemoryBindInfo {
    VkImage image;
    uint32_t bindCount;
    VkSparseMemoryBind* pBinds;
    safe_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct);
    safe_VkSparseImageOpaqueMemoryBindInfo(const safe_VkSparseImageOpaqueMemoryBindInfo& src);
    safe_VkSparseImageOpaqueMemoryBindInfo();
    ~safe_VkSparseImageOpaqueMemoryBindInfo();
    void initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct);
    void initialize(const safe_VkSparseImageOpaqueMemoryBindInfo* src);
    VkSparseImageOpaqueMemoryBindInfo *ptr() { return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo *>(this); }
    VkSparseImageOpaqueMemoryBindInfo const *ptr() const { return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo const *>(this); }
};

struct safe_VkSparseImageMemoryBindInfo {
    VkImage image;
    uint32_t bindCount;
    VkSparseImageMemoryBind* pBinds;
    safe_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct);
    safe_VkSparseImageMemoryBindInfo(const safe_VkSparseImageMemoryBindInfo& src);
    safe_VkSparseImageMemoryBindInfo();
    ~safe_VkSparseImageMemoryBindInfo();
    void initialize(const VkSparseImageMemoryBindInfo* in_struct);
    void initialize(const safe_VkSparseImageMemoryBindInfo* src);
    VkSparseImageMemoryBindInfo *ptr() { return reinterpret_cast<VkSparseImageMemoryBindInfo *>(this); }
    VkSparseImageMemoryBindInfo const *ptr() const { return reinterpret_cast<VkSparseImageMemoryBindInfo const *>(this); }
};

struct safe_VkBindSparseInfo {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores;
    uint32_t bufferBindCount;
    safe_VkSparseBufferMemoryBindInfo* pBufferBinds;
    uint32_t imageOpaqueBindCount;
    safe_VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds;
    uint32_t imageBindCount;
    safe_VkSparseImageMemoryBindInfo* pImageBinds;
    uint32_t signalSemaphoreCount;
    VkSemaphore* pSignalSemaphores;
    safe_VkBindSparseInfo(const VkBindSparseInfo* in_struct);
    safe_VkBindSparseInfo(const safe_VkBindSparseInfo& src);
    safe_VkBindSparseInfo();
    ~safe_VkBindSparseInfo();
    void initialize(const VkBindSparseInfo* in_struct);
    void initialize(const safe_VkBindSparseInfo* src);
    VkBindSparseInfo *ptr() { return reinterpret_cast<VkBindSparseInfo *>(this); }
    VkBindSparseInfo const *ptr() const { return reinterpret_cast<VkBindSparseInfo const *>(this); }
};

struct safe_VkFenceCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkFenceCreateFlags flags;
    safe_VkFenceCreateInfo(const VkFenceCreateInfo* in_struct);
    safe_VkFenceCreateInfo(const safe_VkFenceCreateInfo& src);
    safe_VkFenceCreateInfo();
    ~safe_VkFenceCreateInfo();
    void initialize(const VkFenceCreateInfo* in_struct);
    void initialize(const safe_VkFenceCreateInfo* src);
    VkFenceCreateInfo *ptr() { return reinterpret_cast<VkFenceCreateInfo *>(this); }
    VkFenceCreateInfo const *ptr() const { return reinterpret_cast<VkFenceCreateInfo const *>(this); }
};

struct safe_VkSemaphoreCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkSemaphoreCreateFlags flags;
    safe_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct);
    safe_VkSemaphoreCreateInfo(const safe_VkSemaphoreCreateInfo& src);
    safe_VkSemaphoreCreateInfo();
    ~safe_VkSemaphoreCreateInfo();
    void initialize(const VkSemaphoreCreateInfo* in_struct);
    void initialize(const safe_VkSemaphoreCreateInfo* src);
    VkSemaphoreCreateInfo *ptr() { return reinterpret_cast<VkSemaphoreCreateInfo *>(this); }
    VkSemaphoreCreateInfo const *ptr() const { return reinterpret_cast<VkSemaphoreCreateInfo const *>(this); }
};

struct safe_VkEventCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkEventCreateFlags flags;
    safe_VkEventCreateInfo(const VkEventCreateInfo* in_struct);
    safe_VkEventCreateInfo(const safe_VkEventCreateInfo& src);
    safe_VkEventCreateInfo();
    ~safe_VkEventCreateInfo();
    void initialize(const VkEventCreateInfo* in_struct);
    void initialize(const safe_VkEventCreateInfo* src);
    VkEventCreateInfo *ptr() { return reinterpret_cast<VkEventCreateInfo *>(this); }
    VkEventCreateInfo const *ptr() const { return reinterpret_cast<VkEventCreateInfo const *>(this); }
};

struct safe_VkQueryPoolCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkQueryPoolCreateFlags flags;
    VkQueryType queryType;
    uint32_t queryCount;
    VkQueryPipelineStatisticFlags pipelineStatistics;
    safe_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct);
    safe_VkQueryPoolCreateInfo(const safe_VkQueryPoolCreateInfo& src);
    safe_VkQueryPoolCreateInfo();
    ~safe_VkQueryPoolCreateInfo();
    void initialize(const VkQueryPoolCreateInfo* in_struct);
    void initialize(const safe_VkQueryPoolCreateInfo* src);
    VkQueryPoolCreateInfo *ptr() { return reinterpret_cast<VkQueryPoolCreateInfo *>(this); }
    VkQueryPoolCreateInfo const *ptr() const { return reinterpret_cast<VkQueryPoolCreateInfo const *>(this); }
};

struct safe_VkBufferCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkBufferCreateFlags flags;
    VkDeviceSize size;
    VkBufferUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices;
    safe_VkBufferCreateInfo(const VkBufferCreateInfo* in_struct);
    safe_VkBufferCreateInfo(const safe_VkBufferCreateInfo& src);
    safe_VkBufferCreateInfo();
    ~safe_VkBufferCreateInfo();
    void initialize(const VkBufferCreateInfo* in_struct);
    void initialize(const safe_VkBufferCreateInfo* src);
    VkBufferCreateInfo *ptr() { return reinterpret_cast<VkBufferCreateInfo *>(this); }
    VkBufferCreateInfo const *ptr() const { return reinterpret_cast<VkBufferCreateInfo const *>(this); }
};

struct safe_VkBufferViewCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkBufferViewCreateFlags flags;
    VkBuffer buffer;
    VkFormat format;
    VkDeviceSize offset;
    VkDeviceSize range;
    safe_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct);
    safe_VkBufferViewCreateInfo(const safe_VkBufferViewCreateInfo& src);
    safe_VkBufferViewCreateInfo();
    ~safe_VkBufferViewCreateInfo();
    void initialize(const VkBufferViewCreateInfo* in_struct);
    void initialize(const safe_VkBufferViewCreateInfo* src);
    VkBufferViewCreateInfo *ptr() { return reinterpret_cast<VkBufferViewCreateInfo *>(this); }
    VkBufferViewCreateInfo const *ptr() const { return reinterpret_cast<VkBufferViewCreateInfo const *>(this); }
};

struct safe_VkImageCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkImageCreateFlags flags;
    VkImageType imageType;
    VkFormat format;
    VkExtent3D extent;
    uint32_t mipLevels;
    uint32_t arrayLayers;
    VkSampleCountFlagBits samples;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices;
    VkImageLayout initialLayout;
    safe_VkImageCreateInfo(const VkImageCreateInfo* in_struct);
    safe_VkImageCreateInfo(const safe_VkImageCreateInfo& src);
    safe_VkImageCreateInfo();
    ~safe_VkImageCreateInfo();
    void initialize(const VkImageCreateInfo* in_struct);
    void initialize(const safe_VkImageCreateInfo* src);
    VkImageCreateInfo *ptr() { return reinterpret_cast<VkImageCreateInfo *>(this); }
    VkImageCreateInfo const *ptr() const { return reinterpret_cast<VkImageCreateInfo const *>(this); }
};

struct safe_VkImageViewCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkImageViewCreateFlags flags;
    VkImage image;
    VkImageViewType viewType;
    VkFormat format;
    VkComponentMapping components;
    VkImageSubresourceRange subresourceRange;
    safe_VkImageViewCreateInfo(const VkImageViewCreateInfo* in_struct);
    safe_VkImageViewCreateInfo(const safe_VkImageViewCreateInfo& src);
    safe_VkImageViewCreateInfo();
    ~safe_VkImageViewCreateInfo();
    void initialize(const VkImageViewCreateInfo* in_struct);
    void initialize(const safe_VkImageViewCreateInfo* src);
    VkImageViewCreateInfo *ptr() { return reinterpret_cast<VkImageViewCreateInfo *>(this); }
    VkImageViewCreateInfo const *ptr() const { return reinterpret_cast<VkImageViewCreateInfo const *>(this); }
};

struct safe_VkShaderModuleCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkShaderModuleCreateFlags flags;
    size_t codeSize;
    const uint32_t* pCode;
    safe_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct);
    safe_VkShaderModuleCreateInfo(const safe_VkShaderModuleCreateInfo& src);
    safe_VkShaderModuleCreateInfo();
    ~safe_VkShaderModuleCreateInfo();
    void initialize(const VkShaderModuleCreateInfo* in_struct);
    void initialize(const safe_VkShaderModuleCreateInfo* src);
    VkShaderModuleCreateInfo *ptr() { return reinterpret_cast<VkShaderModuleCreateInfo *>(this); }
    VkShaderModuleCreateInfo const *ptr() const { return reinterpret_cast<VkShaderModuleCreateInfo const *>(this); }
};

struct safe_VkPipelineCacheCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCacheCreateFlags flags;
    size_t initialDataSize;
    const void* pInitialData;
    safe_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct);
    safe_VkPipelineCacheCreateInfo(const safe_VkPipelineCacheCreateInfo& src);
    safe_VkPipelineCacheCreateInfo();
    ~safe_VkPipelineCacheCreateInfo();
    void initialize(const VkPipelineCacheCreateInfo* in_struct);
    void initialize(const safe_VkPipelineCacheCreateInfo* src);
    VkPipelineCacheCreateInfo *ptr() { return reinterpret_cast<VkPipelineCacheCreateInfo *>(this); }
    VkPipelineCacheCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineCacheCreateInfo const *>(this); }
};

struct safe_VkSpecializationInfo {
    uint32_t mapEntryCount;
    const VkSpecializationMapEntry* pMapEntries;
    size_t dataSize;
    const void* pData;
    safe_VkSpecializationInfo(const VkSpecializationInfo* in_struct);
    safe_VkSpecializationInfo(const safe_VkSpecializationInfo& src);
    safe_VkSpecializationInfo();
    ~safe_VkSpecializationInfo();
    void initialize(const VkSpecializationInfo* in_struct);
    void initialize(const safe_VkSpecializationInfo* src);
    VkSpecializationInfo *ptr() { return reinterpret_cast<VkSpecializationInfo *>(this); }
    VkSpecializationInfo const *ptr() const { return reinterpret_cast<VkSpecializationInfo const *>(this); }
};

struct safe_VkPipelineShaderStageCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineShaderStageCreateFlags flags;
    VkShaderStageFlagBits stage;
    VkShaderModule module;
    const char* pName;
    safe_VkSpecializationInfo* pSpecializationInfo;
    safe_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct);
    safe_VkPipelineShaderStageCreateInfo(const safe_VkPipelineShaderStageCreateInfo& src);
    safe_VkPipelineShaderStageCreateInfo();
    ~safe_VkPipelineShaderStageCreateInfo();
    void initialize(const VkPipelineShaderStageCreateInfo* in_struct);
    void initialize(const safe_VkPipelineShaderStageCreateInfo* src);
    VkPipelineShaderStageCreateInfo *ptr() { return reinterpret_cast<VkPipelineShaderStageCreateInfo *>(this); }
    VkPipelineShaderStageCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineShaderStageCreateInfo const *>(this); }
};

struct safe_VkPipelineVertexInputStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineVertexInputStateCreateFlags flags;
    uint32_t vertexBindingDescriptionCount;
    const VkVertexInputBindingDescription* pVertexBindingDescriptions;
    uint32_t vertexAttributeDescriptionCount;
    const VkVertexInputAttributeDescription* pVertexAttributeDescriptions;
    safe_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* in_struct);
    safe_VkPipelineVertexInputStateCreateInfo(const safe_VkPipelineVertexInputStateCreateInfo& src);
    safe_VkPipelineVertexInputStateCreateInfo();
    ~safe_VkPipelineVertexInputStateCreateInfo();
    void initialize(const VkPipelineVertexInputStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineVertexInputStateCreateInfo* src);
    VkPipelineVertexInputStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineVertexInputStateCreateInfo *>(this); }
    VkPipelineVertexInputStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineVertexInputStateCreateInfo const *>(this); }
};

struct safe_VkPipelineInputAssemblyStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineInputAssemblyStateCreateFlags flags;
    VkPrimitiveTopology topology;
    VkBool32 primitiveRestartEnable;
    safe_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* in_struct);
    safe_VkPipelineInputAssemblyStateCreateInfo(const safe_VkPipelineInputAssemblyStateCreateInfo& src);
    safe_VkPipelineInputAssemblyStateCreateInfo();
    ~safe_VkPipelineInputAssemblyStateCreateInfo();
    void initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineInputAssemblyStateCreateInfo* src);
    VkPipelineInputAssemblyStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo *>(this); }
    VkPipelineInputAssemblyStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo const *>(this); }
};

struct safe_VkPipelineTessellationStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineTessellationStateCreateFlags flags;
    uint32_t patchControlPoints;
    safe_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* in_struct);
    safe_VkPipelineTessellationStateCreateInfo(const safe_VkPipelineTessellationStateCreateInfo& src);
    safe_VkPipelineTessellationStateCreateInfo();
    ~safe_VkPipelineTessellationStateCreateInfo();
    void initialize(const VkPipelineTessellationStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineTessellationStateCreateInfo* src);
    VkPipelineTessellationStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineTessellationStateCreateInfo *>(this); }
    VkPipelineTessellationStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineTessellationStateCreateInfo const *>(this); }
};

struct safe_VkPipelineViewportStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineViewportStateCreateFlags flags;
    uint32_t viewportCount;
    const VkViewport* pViewports;
    uint32_t scissorCount;
    const VkRect2D* pScissors;
    safe_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct);
    safe_VkPipelineViewportStateCreateInfo(const safe_VkPipelineViewportStateCreateInfo& src);
    safe_VkPipelineViewportStateCreateInfo();
    ~safe_VkPipelineViewportStateCreateInfo();
    void initialize(const VkPipelineViewportStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineViewportStateCreateInfo* src);
    VkPipelineViewportStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineViewportStateCreateInfo *>(this); }
    VkPipelineViewportStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineViewportStateCreateInfo const *>(this); }
};

struct safe_VkPipelineRasterizationStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineRasterizationStateCreateFlags flags;
    VkBool32 depthClampEnable;
    VkBool32 rasterizerDiscardEnable;
    VkPolygonMode polygonMode;
    VkCullModeFlags cullMode;
    VkFrontFace frontFace;
    VkBool32 depthBiasEnable;
    float depthBiasConstantFactor;
    float depthBiasClamp;
    float depthBiasSlopeFactor;
    float lineWidth;
    safe_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* in_struct);
    safe_VkPipelineRasterizationStateCreateInfo(const safe_VkPipelineRasterizationStateCreateInfo& src);
    safe_VkPipelineRasterizationStateCreateInfo();
    ~safe_VkPipelineRasterizationStateCreateInfo();
    void initialize(const VkPipelineRasterizationStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineRasterizationStateCreateInfo* src);
    VkPipelineRasterizationStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineRasterizationStateCreateInfo *>(this); }
    VkPipelineRasterizationStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineRasterizationStateCreateInfo const *>(this); }
};

struct safe_VkPipelineMultisampleStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineMultisampleStateCreateFlags flags;
    VkSampleCountFlagBits rasterizationSamples;
    VkBool32 sampleShadingEnable;
    float minSampleShading;
    const VkSampleMask* pSampleMask;
    VkBool32 alphaToCoverageEnable;
    VkBool32 alphaToOneEnable;
    safe_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* in_struct);
    safe_VkPipelineMultisampleStateCreateInfo(const safe_VkPipelineMultisampleStateCreateInfo& src);
    safe_VkPipelineMultisampleStateCreateInfo();
    ~safe_VkPipelineMultisampleStateCreateInfo();
    void initialize(const VkPipelineMultisampleStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineMultisampleStateCreateInfo* src);
    VkPipelineMultisampleStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineMultisampleStateCreateInfo *>(this); }
    VkPipelineMultisampleStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineMultisampleStateCreateInfo const *>(this); }
};

struct safe_VkPipelineDepthStencilStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineDepthStencilStateCreateFlags flags;
    VkBool32 depthTestEnable;
    VkBool32 depthWriteEnable;
    VkCompareOp depthCompareOp;
    VkBool32 depthBoundsTestEnable;
    VkBool32 stencilTestEnable;
    VkStencilOpState front;
    VkStencilOpState back;
    float minDepthBounds;
    float maxDepthBounds;
    safe_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* in_struct);
    safe_VkPipelineDepthStencilStateCreateInfo(const safe_VkPipelineDepthStencilStateCreateInfo& src);
    safe_VkPipelineDepthStencilStateCreateInfo();
    ~safe_VkPipelineDepthStencilStateCreateInfo();
    void initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineDepthStencilStateCreateInfo* src);
    VkPipelineDepthStencilStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo *>(this); }
    VkPipelineDepthStencilStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo const *>(this); }
};

struct safe_VkPipelineColorBlendStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineColorBlendStateCreateFlags flags;
    VkBool32 logicOpEnable;
    VkLogicOp logicOp;
    uint32_t attachmentCount;
    const VkPipelineColorBlendAttachmentState* pAttachments;
    float blendConstants[4];
    safe_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* in_struct);
    safe_VkPipelineColorBlendStateCreateInfo(const safe_VkPipelineColorBlendStateCreateInfo& src);
    safe_VkPipelineColorBlendStateCreateInfo();
    ~safe_VkPipelineColorBlendStateCreateInfo();
    void initialize(const VkPipelineColorBlendStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineColorBlendStateCreateInfo* src);
    VkPipelineColorBlendStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineColorBlendStateCreateInfo *>(this); }
    VkPipelineColorBlendStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineColorBlendStateCreateInfo const *>(this); }
};

struct safe_VkPipelineDynamicStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineDynamicStateCreateFlags flags;
    uint32_t dynamicStateCount;
    const VkDynamicState* pDynamicStates;
    safe_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct);
    safe_VkPipelineDynamicStateCreateInfo(const safe_VkPipelineDynamicStateCreateInfo& src);
    safe_VkPipelineDynamicStateCreateInfo();
    ~safe_VkPipelineDynamicStateCreateInfo();
    void initialize(const VkPipelineDynamicStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineDynamicStateCreateInfo* src);
    VkPipelineDynamicStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineDynamicStateCreateInfo *>(this); }
    VkPipelineDynamicStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineDynamicStateCreateInfo const *>(this); }
};

struct safe_VkGraphicsPipelineCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages;
    safe_VkPipelineVertexInputStateCreateInfo* pVertexInputState;
    safe_VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
    safe_VkPipelineTessellationStateCreateInfo* pTessellationState;
    safe_VkPipelineViewportStateCreateInfo* pViewportState;
    safe_VkPipelineRasterizationStateCreateInfo* pRasterizationState;
    safe_VkPipelineMultisampleStateCreateInfo* pMultisampleState;
    safe_VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
    safe_VkPipelineColorBlendStateCreateInfo* pColorBlendState;
    safe_VkPipelineDynamicStateCreateInfo* pDynamicState;
    VkPipelineLayout layout;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
    safe_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct);
    safe_VkGraphicsPipelineCreateInfo(const safe_VkGraphicsPipelineCreateInfo& src);
    safe_VkGraphicsPipelineCreateInfo();
    ~safe_VkGraphicsPipelineCreateInfo();
    void initialize(const VkGraphicsPipelineCreateInfo* in_struct);
    void initialize(const safe_VkGraphicsPipelineCreateInfo* src);
    VkGraphicsPipelineCreateInfo *ptr() { return reinterpret_cast<VkGraphicsPipelineCreateInfo *>(this); }
    VkGraphicsPipelineCreateInfo const *ptr() const { return reinterpret_cast<VkGraphicsPipelineCreateInfo const *>(this); }
};

struct safe_VkComputePipelineCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCreateFlags flags;
    safe_VkPipelineShaderStageCreateInfo stage;
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
    safe_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct);
    safe_VkComputePipelineCreateInfo(const safe_VkComputePipelineCreateInfo& src);
    safe_VkComputePipelineCreateInfo();
    ~safe_VkComputePipelineCreateInfo();
    void initialize(const VkComputePipelineCreateInfo* in_struct);
    void initialize(const safe_VkComputePipelineCreateInfo* src);
    VkComputePipelineCreateInfo *ptr() { return reinterpret_cast<VkComputePipelineCreateInfo *>(this); }
    VkComputePipelineCreateInfo const *ptr() const { return reinterpret_cast<VkComputePipelineCreateInfo const *>(this); }
};

struct safe_VkPipelineLayoutCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineLayoutCreateFlags flags;
    uint32_t setLayoutCount;
    VkDescriptorSetLayout* pSetLayouts;
    uint32_t pushConstantRangeCount;
    const VkPushConstantRange* pPushConstantRanges;
    safe_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct);
    safe_VkPipelineLayoutCreateInfo(const safe_VkPipelineLayoutCreateInfo& src);
    safe_VkPipelineLayoutCreateInfo();
    ~safe_VkPipelineLayoutCreateInfo();
    void initialize(const VkPipelineLayoutCreateInfo* in_struct);
    void initialize(const safe_VkPipelineLayoutCreateInfo* src);
    VkPipelineLayoutCreateInfo *ptr() { return reinterpret_cast<VkPipelineLayoutCreateInfo *>(this); }
    VkPipelineLayoutCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineLayoutCreateInfo const *>(this); }
};

struct safe_VkSamplerCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkSamplerCreateFlags flags;
    VkFilter magFilter;
    VkFilter minFilter;
    VkSamplerMipmapMode mipmapMode;
    VkSamplerAddressMode addressModeU;
    VkSamplerAddressMode addressModeV;
    VkSamplerAddressMode addressModeW;
    float mipLodBias;
    VkBool32 anisotropyEnable;
    float maxAnisotropy;
    VkBool32 compareEnable;
    VkCompareOp compareOp;
    float minLod;
    float maxLod;
    VkBorderColor borderColor;
    VkBool32 unnormalizedCoordinates;
    safe_VkSamplerCreateInfo(const VkSamplerCreateInfo* in_struct);
    safe_VkSamplerCreateInfo(const safe_VkSamplerCreateInfo& src);
    safe_VkSamplerCreateInfo();
    ~safe_VkSamplerCreateInfo();
    void initialize(const VkSamplerCreateInfo* in_struct);
    void initialize(const safe_VkSamplerCreateInfo* src);
    VkSamplerCreateInfo *ptr() { return reinterpret_cast<VkSamplerCreateInfo *>(this); }
    VkSamplerCreateInfo const *ptr() const { return reinterpret_cast<VkSamplerCreateInfo const *>(this); }
};

struct safe_VkDescriptorSetLayoutBinding {
    uint32_t binding;
    VkDescriptorType descriptorType;
    uint32_t descriptorCount;
    VkShaderStageFlags stageFlags;
    VkSampler* pImmutableSamplers;
    safe_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct);
    safe_VkDescriptorSetLayoutBinding(const safe_VkDescriptorSetLayoutBinding& src);
    safe_VkDescriptorSetLayoutBinding();
    ~safe_VkDescriptorSetLayoutBinding();
    void initialize(const VkDescriptorSetLayoutBinding* in_struct);
    void initialize(const safe_VkDescriptorSetLayoutBinding* src);
    VkDescriptorSetLayoutBinding *ptr() { return reinterpret_cast<VkDescriptorSetLayoutBinding *>(this); }
    VkDescriptorSetLayoutBinding const *ptr() const { return reinterpret_cast<VkDescriptorSetLayoutBinding const *>(this); }
};

struct safe_VkDescriptorSetLayoutCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorSetLayoutCreateFlags flags;
    uint32_t bindingCount;
    safe_VkDescriptorSetLayoutBinding* pBindings;
    safe_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct);
    safe_VkDescriptorSetLayoutCreateInfo(const safe_VkDescriptorSetLayoutCreateInfo& src);
    safe_VkDescriptorSetLayoutCreateInfo();
    ~safe_VkDescriptorSetLayoutCreateInfo();
    void initialize(const VkDescriptorSetLayoutCreateInfo* in_struct);
    void initialize(const safe_VkDescriptorSetLayoutCreateInfo* src);
    VkDescriptorSetLayoutCreateInfo *ptr() { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo *>(this); }
    VkDescriptorSetLayoutCreateInfo const *ptr() const { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo const *>(this); }
};

struct safe_VkDescriptorPoolCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorPoolCreateFlags flags;
    uint32_t maxSets;
    uint32_t poolSizeCount;
    const VkDescriptorPoolSize* pPoolSizes;
    safe_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct);
    safe_VkDescriptorPoolCreateInfo(const safe_VkDescriptorPoolCreateInfo& src);
    safe_VkDescriptorPoolCreateInfo();
    ~safe_VkDescriptorPoolCreateInfo();
    void initialize(const VkDescriptorPoolCreateInfo* in_struct);
    void initialize(const safe_VkDescriptorPoolCreateInfo* src);
    VkDescriptorPoolCreateInfo *ptr() { return reinterpret_cast<VkDescriptorPoolCreateInfo *>(this); }
    VkDescriptorPoolCreateInfo const *ptr() const { return reinterpret_cast<VkDescriptorPoolCreateInfo const *>(this); }
};

struct safe_VkDescriptorSetAllocateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorPool descriptorPool;
    uint32_t descriptorSetCount;
    VkDescriptorSetLayout* pSetLayouts;
    safe_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct);
    safe_VkDescriptorSetAllocateInfo(const safe_VkDescriptorSetAllocateInfo& src);
    safe_VkDescriptorSetAllocateInfo();
    ~safe_VkDescriptorSetAllocateInfo();
    void initialize(const VkDescriptorSetAllocateInfo* in_struct);
    void initialize(const safe_VkDescriptorSetAllocateInfo* src);
    VkDescriptorSetAllocateInfo *ptr() { return reinterpret_cast<VkDescriptorSetAllocateInfo *>(this); }
    VkDescriptorSetAllocateInfo const *ptr() const { return reinterpret_cast<VkDescriptorSetAllocateInfo const *>(this); }
};

struct safe_VkWriteDescriptorSet {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
    VkDescriptorType descriptorType;
    VkDescriptorImageInfo* pImageInfo;
    VkDescriptorBufferInfo* pBufferInfo;
    VkBufferView* pTexelBufferView;
    safe_VkWriteDescriptorSet(const VkWriteDescriptorSet* in_struct);
    safe_VkWriteDescriptorSet(const safe_VkWriteDescriptorSet& src);
    safe_VkWriteDescriptorSet();
    ~safe_VkWriteDescriptorSet();
    void initialize(const VkWriteDescriptorSet* in_struct);
    void initialize(const safe_VkWriteDescriptorSet* src);
    VkWriteDescriptorSet *ptr() { return reinterpret_cast<VkWriteDescriptorSet *>(this); }
    VkWriteDescriptorSet const *ptr() const { return reinterpret_cast<VkWriteDescriptorSet const *>(this); }
};

struct safe_VkCopyDescriptorSet {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorSet srcSet;
    uint32_t srcBinding;
    uint32_t srcArrayElement;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
    safe_VkCopyDescriptorSet(const VkCopyDescriptorSet* in_struct);
    safe_VkCopyDescriptorSet(const safe_VkCopyDescriptorSet& src);
    safe_VkCopyDescriptorSet();
    ~safe_VkCopyDescriptorSet();
    void initialize(const VkCopyDescriptorSet* in_struct);
    void initialize(const safe_VkCopyDescriptorSet* src);
    VkCopyDescriptorSet *ptr() { return reinterpret_cast<VkCopyDescriptorSet *>(this); }
    VkCopyDescriptorSet const *ptr() const { return reinterpret_cast<VkCopyDescriptorSet const *>(this); }
};

struct safe_VkFramebufferCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkFramebufferCreateFlags flags;
    VkRenderPass renderPass;
    uint32_t attachmentCount;
    VkImageView* pAttachments;
    uint32_t width;
    uint32_t height;
    uint32_t layers;
    safe_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct);
    safe_VkFramebufferCreateInfo(const safe_VkFramebufferCreateInfo& src);
    safe_VkFramebufferCreateInfo();
    ~safe_VkFramebufferCreateInfo();
    void initialize(const VkFramebufferCreateInfo* in_struct);
    void initialize(const safe_VkFramebufferCreateInfo* src);
    VkFramebufferCreateInfo *ptr() { return reinterpret_cast<VkFramebufferCreateInfo *>(this); }
    VkFramebufferCreateInfo const *ptr() const { return reinterpret_cast<VkFramebufferCreateInfo const *>(this); }
};

struct safe_VkSubpassDescription {
    VkSubpassDescriptionFlags flags;
    VkPipelineBindPoint pipelineBindPoint;
    uint32_t inputAttachmentCount;
    const VkAttachmentReference* pInputAttachments;
    uint32_t colorAttachmentCount;
    const VkAttachmentReference* pColorAttachments;
    const VkAttachmentReference* pResolveAttachments;
    const VkAttachmentReference* pDepthStencilAttachment;
    uint32_t preserveAttachmentCount;
    const uint32_t* pPreserveAttachments;
    safe_VkSubpassDescription(const VkSubpassDescription* in_struct);
    safe_VkSubpassDescription(const safe_VkSubpassDescription& src);
    safe_VkSubpassDescription();
    ~safe_VkSubpassDescription();
    void initialize(const VkSubpassDescription* in_struct);
    void initialize(const safe_VkSubpassDescription* src);
    VkSubpassDescription *ptr() { return reinterpret_cast<VkSubpassDescription *>(this); }
    VkSubpassDescription const *ptr() const { return reinterpret_cast<VkSubpassDescription const *>(this); }
};

struct safe_VkRenderPassCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkRenderPassCreateFlags flags;
    uint32_t attachmentCount;
    const VkAttachmentDescription* pAttachments;
    uint32_t subpassCount;
    safe_VkSubpassDescription* pSubpasses;
    uint32_t dependencyCount;
    const VkSubpassDependency* pDependencies;
    safe_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct);
    safe_VkRenderPassCreateInfo(const safe_VkRenderPassCreateInfo& src);
    safe_VkRenderPassCreateInfo();
    ~safe_VkRenderPassCreateInfo();
    void initialize(const VkRenderPassCreateInfo* in_struct);
    void initialize(const safe_VkRenderPassCreateInfo* src);
    VkRenderPassCreateInfo *ptr() { return reinterpret_cast<VkRenderPassCreateInfo *>(this); }
    VkRenderPassCreateInfo const *ptr() const { return reinterpret_cast<VkRenderPassCreateInfo const *>(this); }
};

struct safe_VkCommandPoolCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkCommandPoolCreateFlags flags;
    uint32_t queueFamilyIndex;
    safe_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct);
    safe_VkCommandPoolCreateInfo(const safe_VkCommandPoolCreateInfo& src);
    safe_VkCommandPoolCreateInfo();
    ~safe_VkCommandPoolCreateInfo();
    void initialize(const VkCommandPoolCreateInfo* in_struct);
    void initialize(const safe_VkCommandPoolCreateInfo* src);
    VkCommandPoolCreateInfo *ptr() { return reinterpret_cast<VkCommandPoolCreateInfo *>(this); }
    VkCommandPoolCreateInfo const *ptr() const { return reinterpret_cast<VkCommandPoolCreateInfo const *>(this); }
};

struct safe_VkCommandBufferAllocateInfo {
    VkStructureType sType;
    const void* pNext;
    VkCommandPool commandPool;
    VkCommandBufferLevel level;
    uint32_t commandBufferCount;
    safe_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct);
    safe_VkCommandBufferAllocateInfo(const safe_VkCommandBufferAllocateInfo& src);
    safe_VkCommandBufferAllocateInfo();
    ~safe_VkCommandBufferAllocateInfo();
    void initialize(const VkCommandBufferAllocateInfo* in_struct);
    void initialize(const safe_VkCommandBufferAllocateInfo* src);
    VkCommandBufferAllocateInfo *ptr() { return reinterpret_cast<VkCommandBufferAllocateInfo *>(this); }
    VkCommandBufferAllocateInfo const *ptr() const { return reinterpret_cast<VkCommandBufferAllocateInfo const *>(this); }
};

struct safe_VkCommandBufferInheritanceInfo {
    VkStructureType sType;
    const void* pNext;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkFramebuffer framebuffer;
    VkBool32 occlusionQueryEnable;
    VkQueryControlFlags queryFlags;
    VkQueryPipelineStatisticFlags pipelineStatistics;
    safe_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct);
    safe_VkCommandBufferInheritanceInfo(const safe_VkCommandBufferInheritanceInfo& src);
    safe_VkCommandBufferInheritanceInfo();
    ~safe_VkCommandBufferInheritanceInfo();
    void initialize(const VkCommandBufferInheritanceInfo* in_struct);
    void initialize(const safe_VkCommandBufferInheritanceInfo* src);
    VkCommandBufferInheritanceInfo *ptr() { return reinterpret_cast<VkCommandBufferInheritanceInfo *>(this); }
    VkCommandBufferInheritanceInfo const *ptr() const { return reinterpret_cast<VkCommandBufferInheritanceInfo const *>(this); }
};

struct safe_VkCommandBufferBeginInfo {
    VkStructureType sType;
    const void* pNext;
    VkCommandBufferUsageFlags flags;
    safe_VkCommandBufferInheritanceInfo* pInheritanceInfo;
    safe_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct);
    safe_VkCommandBufferBeginInfo(const safe_VkCommandBufferBeginInfo& src);
    safe_VkCommandBufferBeginInfo();
    ~safe_VkCommandBufferBeginInfo();
    void initialize(const VkCommandBufferBeginInfo* in_struct);
    void initialize(const safe_VkCommandBufferBeginInfo* src);
    VkCommandBufferBeginInfo *ptr() { return reinterpret_cast<VkCommandBufferBeginInfo *>(this); }
    VkCommandBufferBeginInfo const *ptr() const { return reinterpret_cast<VkCommandBufferBeginInfo const *>(this); }
};

struct safe_VkMemoryBarrier {
    VkStructureType sType;
    const void* pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    safe_VkMemoryBarrier(const VkMemoryBarrier* in_struct);
    safe_VkMemoryBarrier(const safe_VkMemoryBarrier& src);
    safe_VkMemoryBarrier();
    ~safe_VkMemoryBarrier();
    void initialize(const VkMemoryBarrier* in_struct);
    void initialize(const safe_VkMemoryBarrier* src);
    VkMemoryBarrier *ptr() { return reinterpret_cast<VkMemoryBarrier *>(this); }
    VkMemoryBarrier const *ptr() const { return reinterpret_cast<VkMemoryBarrier const *>(this); }
};

struct safe_VkBufferMemoryBarrier {
    VkStructureType sType;
    const void* pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
    safe_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct);
    safe_VkBufferMemoryBarrier(const safe_VkBufferMemoryBarrier& src);
    safe_VkBufferMemoryBarrier();
    ~safe_VkBufferMemoryBarrier();
    void initialize(const VkBufferMemoryBarrier* in_struct);
    void initialize(const safe_VkBufferMemoryBarrier* src);
    VkBufferMemoryBarrier *ptr() { return reinterpret_cast<VkBufferMemoryBarrier *>(this); }
    VkBufferMemoryBarrier const *ptr() const { return reinterpret_cast<VkBufferMemoryBarrier const *>(this); }
};

struct safe_VkImageMemoryBarrier {
    VkStructureType sType;
    const void* pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    VkImageLayout oldLayout;
    VkImageLayout newLayout;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkImage image;
    VkImageSubresourceRange subresourceRange;
    safe_VkImageMemoryBarrier(const VkImageMemoryBarrier* in_struct);
    safe_VkImageMemoryBarrier(const safe_VkImageMemoryBarrier& src);
    safe_VkImageMemoryBarrier();
    ~safe_VkImageMemoryBarrier();
    void initialize(const VkImageMemoryBarrier* in_struct);
    void initialize(const safe_VkImageMemoryBarrier* src);
    VkImageMemoryBarrier *ptr() { return reinterpret_cast<VkImageMemoryBarrier *>(this); }
    VkImageMemoryBarrier const *ptr() const { return reinterpret_cast<VkImageMemoryBarrier const *>(this); }
};

struct safe_VkRenderPassBeginInfo {
    VkStructureType sType;
    const void* pNext;
    VkRenderPass renderPass;
    VkFramebuffer framebuffer;
    VkRect2D renderArea;
    uint32_t clearValueCount;
    const VkClearValue* pClearValues;
    safe_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct);
    safe_VkRenderPassBeginInfo(const safe_VkRenderPassBeginInfo& src);
    safe_VkRenderPassBeginInfo();
    ~safe_VkRenderPassBeginInfo();
    void initialize(const VkRenderPassBeginInfo* in_struct);
    void initialize(const safe_VkRenderPassBeginInfo* src);
    VkRenderPassBeginInfo *ptr() { return reinterpret_cast<VkRenderPassBeginInfo *>(this); }
    VkRenderPassBeginInfo const *ptr() const { return reinterpret_cast<VkRenderPassBeginInfo const *>(this); }
};

struct safe_VkSwapchainCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainCreateFlagsKHR flags;
    VkSurfaceKHR surface;
    uint32_t minImageCount;
    VkFormat imageFormat;
    VkColorSpaceKHR imageColorSpace;
    VkExtent2D imageExtent;
    uint32_t imageArrayLayers;
    VkImageUsageFlags imageUsage;
    VkSharingMode imageSharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices;
    VkSurfaceTransformFlagBitsKHR preTransform;
    VkCompositeAlphaFlagBitsKHR compositeAlpha;
    VkPresentModeKHR presentMode;
    VkBool32 clipped;
    VkSwapchainKHR oldSwapchain;
    safe_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* in_struct);
    safe_VkSwapchainCreateInfoKHR(const safe_VkSwapchainCreateInfoKHR& src);
    safe_VkSwapchainCreateInfoKHR();
    ~safe_VkSwapchainCreateInfoKHR();
    void initialize(const VkSwapchainCreateInfoKHR* in_struct);
    void initialize(const safe_VkSwapchainCreateInfoKHR* src);
    VkSwapchainCreateInfoKHR *ptr() { return reinterpret_cast<VkSwapchainCreateInfoKHR *>(this); }
    VkSwapchainCreateInfoKHR const *ptr() const { return reinterpret_cast<VkSwapchainCreateInfoKHR const *>(this); }
};

struct safe_VkPresentInfoKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores;
    uint32_t swapchainCount;
    VkSwapchainKHR* pSwapchains;
    const uint32_t* pImageIndices;
    VkResult* pResults;
    safe_VkPresentInfoKHR(const VkPresentInfoKHR* in_struct);
    safe_VkPresentInfoKHR(const safe_VkPresentInfoKHR& src);
    safe_VkPresentInfoKHR();
    ~safe_VkPresentInfoKHR();
    void initialize(const VkPresentInfoKHR* in_struct);
    void initialize(const safe_VkPresentInfoKHR* src);
    VkPresentInfoKHR *ptr() { return reinterpret_cast<VkPresentInfoKHR *>(this); }
    VkPresentInfoKHR const *ptr() const { return reinterpret_cast<VkPresentInfoKHR const *>(this); }
};

struct safe_VkDisplayPropertiesKHR {
    VkDisplayKHR display;
    const char* displayName;
    VkExtent2D physicalDimensions;
    VkExtent2D physicalResolution;
    VkSurfaceTransformFlagsKHR supportedTransforms;
    VkBool32 planeReorderPossible;
    VkBool32 persistentContent;
    safe_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR* in_struct);
    safe_VkDisplayPropertiesKHR(const safe_VkDisplayPropertiesKHR& src);
    safe_VkDisplayPropertiesKHR();
    ~safe_VkDisplayPropertiesKHR();
    void initialize(const VkDisplayPropertiesKHR* in_struct);
    void initialize(const safe_VkDisplayPropertiesKHR* src);
    VkDisplayPropertiesKHR *ptr() { return reinterpret_cast<VkDisplayPropertiesKHR *>(this); }
    VkDisplayPropertiesKHR const *ptr() const { return reinterpret_cast<VkDisplayPropertiesKHR const *>(this); }
};

struct safe_VkDisplayModeCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkDisplayModeCreateFlagsKHR flags;
    VkDisplayModeParametersKHR parameters;
    safe_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* in_struct);
    safe_VkDisplayModeCreateInfoKHR(const safe_VkDisplayModeCreateInfoKHR& src);
    safe_VkDisplayModeCreateInfoKHR();
    ~safe_VkDisplayModeCreateInfoKHR();
    void initialize(const VkDisplayModeCreateInfoKHR* in_struct);
    void initialize(const safe_VkDisplayModeCreateInfoKHR* src);
    VkDisplayModeCreateInfoKHR *ptr() { return reinterpret_cast<VkDisplayModeCreateInfoKHR *>(this); }
    VkDisplayModeCreateInfoKHR const *ptr() const { return reinterpret_cast<VkDisplayModeCreateInfoKHR const *>(this); }
};

struct safe_VkDisplaySurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkDisplaySurfaceCreateFlagsKHR flags;
    VkDisplayModeKHR displayMode;
    uint32_t planeIndex;
    uint32_t planeStackIndex;
    VkSurfaceTransformFlagBitsKHR transform;
    float globalAlpha;
    VkDisplayPlaneAlphaFlagBitsKHR alphaMode;
    VkExtent2D imageExtent;
    safe_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* in_struct);
    safe_VkDisplaySurfaceCreateInfoKHR(const safe_VkDisplaySurfaceCreateInfoKHR& src);
    safe_VkDisplaySurfaceCreateInfoKHR();
    ~safe_VkDisplaySurfaceCreateInfoKHR();
    void initialize(const VkDisplaySurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkDisplaySurfaceCreateInfoKHR* src);
    VkDisplaySurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR *>(this); }
    VkDisplaySurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR const *>(this); }
};

struct safe_VkDisplayPresentInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkRect2D srcRect;
    VkRect2D dstRect;
    VkBool32 persistent;
    safe_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* in_struct);
    safe_VkDisplayPresentInfoKHR(const safe_VkDisplayPresentInfoKHR& src);
    safe_VkDisplayPresentInfoKHR();
    ~safe_VkDisplayPresentInfoKHR();
    void initialize(const VkDisplayPresentInfoKHR* in_struct);
    void initialize(const safe_VkDisplayPresentInfoKHR* src);
    VkDisplayPresentInfoKHR *ptr() { return reinterpret_cast<VkDisplayPresentInfoKHR *>(this); }
    VkDisplayPresentInfoKHR const *ptr() const { return reinterpret_cast<VkDisplayPresentInfoKHR const *>(this); }
};

#ifdef VK_USE_PLATFORM_XLIB_KHR
struct safe_VkXlibSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkXlibSurfaceCreateFlagsKHR flags;
    Display* dpy;
    Window window;
    safe_VkXlibSurfaceCreateInfoKHR(const VkXlibSurfaceCreateInfoKHR* in_struct);
    safe_VkXlibSurfaceCreateInfoKHR(const safe_VkXlibSurfaceCreateInfoKHR& src);
    safe_VkXlibSurfaceCreateInfoKHR();
    ~safe_VkXlibSurfaceCreateInfoKHR();
    void initialize(const VkXlibSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkXlibSurfaceCreateInfoKHR* src);
    VkXlibSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkXlibSurfaceCreateInfoKHR *>(this); }
    VkXlibSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkXlibSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
struct safe_VkXcbSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkXcbSurfaceCreateFlagsKHR flags;
    xcb_connection_t* connection;
    xcb_window_t window;
    safe_VkXcbSurfaceCreateInfoKHR(const VkXcbSurfaceCreateInfoKHR* in_struct);
    safe_VkXcbSurfaceCreateInfoKHR(const safe_VkXcbSurfaceCreateInfoKHR& src);
    safe_VkXcbSurfaceCreateInfoKHR();
    ~safe_VkXcbSurfaceCreateInfoKHR();
    void initialize(const VkXcbSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkXcbSurfaceCreateInfoKHR* src);
    VkXcbSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkXcbSurfaceCreateInfoKHR *>(this); }
    VkXcbSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkXcbSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
struct safe_VkWaylandSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkWaylandSurfaceCreateFlagsKHR flags;
    struct wl_display* display;
    struct wl_surface* surface;
    safe_VkWaylandSurfaceCreateInfoKHR(const VkWaylandSurfaceCreateInfoKHR* in_struct);
    safe_VkWaylandSurfaceCreateInfoKHR(const safe_VkWaylandSurfaceCreateInfoKHR& src);
    safe_VkWaylandSurfaceCreateInfoKHR();
    ~safe_VkWaylandSurfaceCreateInfoKHR();
    void initialize(const VkWaylandSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkWaylandSurfaceCreateInfoKHR* src);
    VkWaylandSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkWaylandSurfaceCreateInfoKHR *>(this); }
    VkWaylandSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkWaylandSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR
struct safe_VkMirSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkMirSurfaceCreateFlagsKHR flags;
    MirConnection* connection;
    MirSurface* mirSurface;
    safe_VkMirSurfaceCreateInfoKHR(const VkMirSurfaceCreateInfoKHR* in_struct);
    safe_VkMirSurfaceCreateInfoKHR(const safe_VkMirSurfaceCreateInfoKHR& src);
    safe_VkMirSurfaceCreateInfoKHR();
    ~safe_VkMirSurfaceCreateInfoKHR();
    void initialize(const VkMirSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkMirSurfaceCreateInfoKHR* src);
    VkMirSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkMirSurfaceCreateInfoKHR *>(this); }
    VkMirSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkMirSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct safe_VkAndroidSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkAndroidSurfaceCreateFlagsKHR flags;
    ANativeWindow* window;
    safe_VkAndroidSurfaceCreateInfoKHR(const VkAndroidSurfaceCreateInfoKHR* in_struct);
    safe_VkAndroidSurfaceCreateInfoKHR(const safe_VkAndroidSurfaceCreateInfoKHR& src);
    safe_VkAndroidSurfaceCreateInfoKHR();
    ~safe_VkAndroidSurfaceCreateInfoKHR();
    void initialize(const VkAndroidSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkAndroidSurfaceCreateInfoKHR* src);
    VkAndroidSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkAndroidSurfaceCreateInfoKHR *>(this); }
    VkAndroidSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkAndroidSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32SurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkWin32SurfaceCreateFlagsKHR flags;
    HINSTANCE hinstance;
    HWND hwnd;
    safe_VkWin32SurfaceCreateInfoKHR(const VkWin32SurfaceCreateInfoKHR* in_struct);
    safe_VkWin32SurfaceCreateInfoKHR(const safe_VkWin32SurfaceCreateInfoKHR& src);
    safe_VkWin32SurfaceCreateInfoKHR();
    ~safe_VkWin32SurfaceCreateInfoKHR();
    void initialize(const VkWin32SurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkWin32SurfaceCreateInfoKHR* src);
    VkWin32SurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkWin32SurfaceCreateInfoKHR *>(this); }
    VkWin32SurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkWin32SurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkPhysicalDeviceFeatures2KHR {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceFeatures features;
    safe_VkPhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR* in_struct);
    safe_VkPhysicalDeviceFeatures2KHR(const safe_VkPhysicalDeviceFeatures2KHR& src);
    safe_VkPhysicalDeviceFeatures2KHR();
    ~safe_VkPhysicalDeviceFeatures2KHR();
    void initialize(const VkPhysicalDeviceFeatures2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceFeatures2KHR* src);
    VkPhysicalDeviceFeatures2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceFeatures2KHR *>(this); }
    VkPhysicalDeviceFeatures2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceFeatures2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceProperties properties;
    safe_VkPhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR* in_struct);
    safe_VkPhysicalDeviceProperties2KHR(const safe_VkPhysicalDeviceProperties2KHR& src);
    safe_VkPhysicalDeviceProperties2KHR();
    ~safe_VkPhysicalDeviceProperties2KHR();
    void initialize(const VkPhysicalDeviceProperties2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceProperties2KHR* src);
    VkPhysicalDeviceProperties2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceProperties2KHR *>(this); }
    VkPhysicalDeviceProperties2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceProperties2KHR const *>(this); }
};

struct safe_VkFormatProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkFormatProperties formatProperties;
    safe_VkFormatProperties2KHR(const VkFormatProperties2KHR* in_struct);
    safe_VkFormatProperties2KHR(const safe_VkFormatProperties2KHR& src);
    safe_VkFormatProperties2KHR();
    ~safe_VkFormatProperties2KHR();
    void initialize(const VkFormatProperties2KHR* in_struct);
    void initialize(const safe_VkFormatProperties2KHR* src);
    VkFormatProperties2KHR *ptr() { return reinterpret_cast<VkFormatProperties2KHR *>(this); }
    VkFormatProperties2KHR const *ptr() const { return reinterpret_cast<VkFormatProperties2KHR const *>(this); }
};

struct safe_VkImageFormatProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkImageFormatProperties imageFormatProperties;
    safe_VkImageFormatProperties2KHR(const VkImageFormatProperties2KHR* in_struct);
    safe_VkImageFormatProperties2KHR(const safe_VkImageFormatProperties2KHR& src);
    safe_VkImageFormatProperties2KHR();
    ~safe_VkImageFormatProperties2KHR();
    void initialize(const VkImageFormatProperties2KHR* in_struct);
    void initialize(const safe_VkImageFormatProperties2KHR* src);
    VkImageFormatProperties2KHR *ptr() { return reinterpret_cast<VkImageFormatProperties2KHR *>(this); }
    VkImageFormatProperties2KHR const *ptr() const { return reinterpret_cast<VkImageFormatProperties2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceImageFormatInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;
    safe_VkPhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct);
    safe_VkPhysicalDeviceImageFormatInfo2KHR(const safe_VkPhysicalDeviceImageFormatInfo2KHR& src);
    safe_VkPhysicalDeviceImageFormatInfo2KHR();
    ~safe_VkPhysicalDeviceImageFormatInfo2KHR();
    void initialize(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceImageFormatInfo2KHR* src);
    VkPhysicalDeviceImageFormatInfo2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHR *>(this); }
    VkPhysicalDeviceImageFormatInfo2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHR const *>(this); }
};

struct safe_VkQueueFamilyProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkQueueFamilyProperties queueFamilyProperties;
    safe_VkQueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR* in_struct);
    safe_VkQueueFamilyProperties2KHR(const safe_VkQueueFamilyProperties2KHR& src);
    safe_VkQueueFamilyProperties2KHR();
    ~safe_VkQueueFamilyProperties2KHR();
    void initialize(const VkQueueFamilyProperties2KHR* in_struct);
    void initialize(const safe_VkQueueFamilyProperties2KHR* src);
    VkQueueFamilyProperties2KHR *ptr() { return reinterpret_cast<VkQueueFamilyProperties2KHR *>(this); }
    VkQueueFamilyProperties2KHR const *ptr() const { return reinterpret_cast<VkQueueFamilyProperties2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceMemoryProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceMemoryProperties memoryProperties;
    safe_VkPhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR* in_struct);
    safe_VkPhysicalDeviceMemoryProperties2KHR(const safe_VkPhysicalDeviceMemoryProperties2KHR& src);
    safe_VkPhysicalDeviceMemoryProperties2KHR();
    ~safe_VkPhysicalDeviceMemoryProperties2KHR();
    void initialize(const VkPhysicalDeviceMemoryProperties2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceMemoryProperties2KHR* src);
    VkPhysicalDeviceMemoryProperties2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceMemoryProperties2KHR *>(this); }
    VkPhysicalDeviceMemoryProperties2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMemoryProperties2KHR const *>(this); }
};

struct safe_VkSparseImageFormatProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkSparseImageFormatProperties properties;
    safe_VkSparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR* in_struct);
    safe_VkSparseImageFormatProperties2KHR(const safe_VkSparseImageFormatProperties2KHR& src);
    safe_VkSparseImageFormatProperties2KHR();
    ~safe_VkSparseImageFormatProperties2KHR();
    void initialize(const VkSparseImageFormatProperties2KHR* in_struct);
    void initialize(const safe_VkSparseImageFormatProperties2KHR* src);
    VkSparseImageFormatProperties2KHR *ptr() { return reinterpret_cast<VkSparseImageFormatProperties2KHR *>(this); }
    VkSparseImageFormatProperties2KHR const *ptr() const { return reinterpret_cast<VkSparseImageFormatProperties2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceSparseImageFormatInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkFormat format;
    VkImageType type;
    VkSampleCountFlagBits samples;
    VkImageUsageFlags usage;
    VkImageTiling tiling;
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct);
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& src);
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR();
    ~safe_VkPhysicalDeviceSparseImageFormatInfo2KHR();
    void initialize(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR* src);
    VkPhysicalDeviceSparseImageFormatInfo2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2KHR *>(this); }
    VkPhysicalDeviceSparseImageFormatInfo2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2KHR const *>(this); }
};

struct safe_VkPhysicalDevicePushDescriptorPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    uint32_t maxPushDescriptors;
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& src);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR();
    ~safe_VkPhysicalDevicePushDescriptorPropertiesKHR();
    void initialize(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct);
    void initialize(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR* src);
    VkPhysicalDevicePushDescriptorPropertiesKHR *ptr() { return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR *>(this); }
    VkPhysicalDevicePushDescriptorPropertiesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR const *>(this); }
};

struct safe_VkDescriptorUpdateTemplateCreateInfoKHR {
    VkStructureType sType;
    void* pNext;
    VkDescriptorUpdateTemplateCreateFlagsKHR flags;
    uint32_t descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntryKHR* pDescriptorUpdateEntries;
    VkDescriptorUpdateTemplateTypeKHR templateType;
    VkDescriptorSetLayout descriptorSetLayout;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipelineLayout pipelineLayout;
    uint32_t set;
    safe_VkDescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct);
    safe_VkDescriptorUpdateTemplateCreateInfoKHR(const safe_VkDescriptorUpdateTemplateCreateInfoKHR& src);
    safe_VkDescriptorUpdateTemplateCreateInfoKHR();
    ~safe_VkDescriptorUpdateTemplateCreateInfoKHR();
    void initialize(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct);
    void initialize(const safe_VkDescriptorUpdateTemplateCreateInfoKHR* src);
    VkDescriptorUpdateTemplateCreateInfoKHR *ptr() { return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfoKHR *>(this); }
    VkDescriptorUpdateTemplateCreateInfoKHR const *ptr() const { return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfoKHR const *>(this); }
};

struct safe_VkDebugReportCallbackCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDebugReportFlagsEXT flags;
    PFN_vkDebugReportCallbackEXT pfnCallback;
    void* pUserData;
    safe_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT* in_struct);
    safe_VkDebugReportCallbackCreateInfoEXT(const safe_VkDebugReportCallbackCreateInfoEXT& src);
    safe_VkDebugReportCallbackCreateInfoEXT();
    ~safe_VkDebugReportCallbackCreateInfoEXT();
    void initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct);
    void initialize(const safe_VkDebugReportCallbackCreateInfoEXT* src);
    VkDebugReportCallbackCreateInfoEXT *ptr() { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT *>(this); }
    VkDebugReportCallbackCreateInfoEXT const *ptr() const { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT const *>(this); }
};

struct safe_VkPipelineRasterizationStateRasterizationOrderAMD {
    VkStructureType sType;
    const void* pNext;
    VkRasterizationOrderAMD rasterizationOrder;
    safe_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& src);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD();
    ~safe_VkPipelineRasterizationStateRasterizationOrderAMD();
    void initialize(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct);
    void initialize(const safe_VkPipelineRasterizationStateRasterizationOrderAMD* src);
    VkPipelineRasterizationStateRasterizationOrderAMD *ptr() { return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD *>(this); }
    VkPipelineRasterizationStateRasterizationOrderAMD const *ptr() const { return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD const *>(this); }
};

struct safe_VkDebugMarkerObjectNameInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    const char* pObjectName;
    safe_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct);
    safe_VkDebugMarkerObjectNameInfoEXT(const safe_VkDebugMarkerObjectNameInfoEXT& src);
    safe_VkDebugMarkerObjectNameInfoEXT();
    ~safe_VkDebugMarkerObjectNameInfoEXT();
    void initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct);
    void initialize(const safe_VkDebugMarkerObjectNameInfoEXT* src);
    VkDebugMarkerObjectNameInfoEXT *ptr() { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT *>(this); }
    VkDebugMarkerObjectNameInfoEXT const *ptr() const { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT const *>(this); }
};

struct safe_VkDebugMarkerObjectTagInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    uint64_t tagName;
    size_t tagSize;
    const void* pTag;
    safe_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct);
    safe_VkDebugMarkerObjectTagInfoEXT(const safe_VkDebugMarkerObjectTagInfoEXT& src);
    safe_VkDebugMarkerObjectTagInfoEXT();
    ~safe_VkDebugMarkerObjectTagInfoEXT();
    void initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct);
    void initialize(const safe_VkDebugMarkerObjectTagInfoEXT* src);
    VkDebugMarkerObjectTagInfoEXT *ptr() { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT *>(this); }
    VkDebugMarkerObjectTagInfoEXT const *ptr() const { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT const *>(this); }
};

struct safe_VkDebugMarkerMarkerInfoEXT {
    VkStructureType sType;
    const void* pNext;
    const char* pMarkerName;
    float color[4];
    safe_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct);
    safe_VkDebugMarkerMarkerInfoEXT(const safe_VkDebugMarkerMarkerInfoEXT& src);
    safe_VkDebugMarkerMarkerInfoEXT();
    ~safe_VkDebugMarkerMarkerInfoEXT();
    void initialize(const VkDebugMarkerMarkerInfoEXT* in_struct);
    void initialize(const safe_VkDebugMarkerMarkerInfoEXT* src);
    VkDebugMarkerMarkerInfoEXT *ptr() { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT *>(this); }
    VkDebugMarkerMarkerInfoEXT const *ptr() const { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT const *>(this); }
};

struct safe_VkDedicatedAllocationImageCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkBool32 dedicatedAllocation;
    safe_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV* in_struct);
    safe_VkDedicatedAllocationImageCreateInfoNV(const safe_VkDedicatedAllocationImageCreateInfoNV& src);
    safe_VkDedicatedAllocationImageCreateInfoNV();
    ~safe_VkDedicatedAllocationImageCreateInfoNV();
    void initialize(const VkDedicatedAllocationImageCreateInfoNV* in_struct);
    void initialize(const safe_VkDedicatedAllocationImageCreateInfoNV* src);
    VkDedicatedAllocationImageCreateInfoNV *ptr() { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV *>(this); }
    VkDedicatedAllocationImageCreateInfoNV const *ptr() const { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV const *>(this); }
};

struct safe_VkDedicatedAllocationBufferCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkBool32 dedicatedAllocation;
    safe_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV* in_struct);
    safe_VkDedicatedAllocationBufferCreateInfoNV(const safe_VkDedicatedAllocationBufferCreateInfoNV& src);
    safe_VkDedicatedAllocationBufferCreateInfoNV();
    ~safe_VkDedicatedAllocationBufferCreateInfoNV();
    void initialize(const VkDedicatedAllocationBufferCreateInfoNV* in_struct);
    void initialize(const safe_VkDedicatedAllocationBufferCreateInfoNV* src);
    VkDedicatedAllocationBufferCreateInfoNV *ptr() { return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV *>(this); }
    VkDedicatedAllocationBufferCreateInfoNV const *ptr() const { return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV const *>(this); }
};

struct safe_VkDedicatedAllocationMemoryAllocateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    VkBuffer buffer;
    safe_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& src);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV();
    ~safe_VkDedicatedAllocationMemoryAllocateInfoNV();
    void initialize(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct);
    void initialize(const safe_VkDedicatedAllocationMemoryAllocateInfoNV* src);
    VkDedicatedAllocationMemoryAllocateInfoNV *ptr() { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV *>(this); }
    VkDedicatedAllocationMemoryAllocateInfoNV const *ptr() const { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV const *>(this); }
};

struct safe_VkRenderPassMultiviewCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t subpassCount;
    const uint32_t* pViewMasks;
    uint32_t dependencyCount;
    const int32_t* pViewOffsets;
    uint32_t correlationMaskCount;
    const uint32_t* pCorrelationMasks;
    safe_VkRenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX* in_struct);
    safe_VkRenderPassMultiviewCreateInfoKHX(const safe_VkRenderPassMultiviewCreateInfoKHX& src);
    safe_VkRenderPassMultiviewCreateInfoKHX();
    ~safe_VkRenderPassMultiviewCreateInfoKHX();
    void initialize(const VkRenderPassMultiviewCreateInfoKHX* in_struct);
    void initialize(const safe_VkRenderPassMultiviewCreateInfoKHX* src);
    VkRenderPassMultiviewCreateInfoKHX *ptr() { return reinterpret_cast<VkRenderPassMultiviewCreateInfoKHX *>(this); }
    VkRenderPassMultiviewCreateInfoKHX const *ptr() const { return reinterpret_cast<VkRenderPassMultiviewCreateInfoKHX const *>(this); }
};

struct safe_VkPhysicalDeviceMultiviewFeaturesKHX {
    VkStructureType sType;
    void* pNext;
    VkBool32 multiview;
    VkBool32 multiviewGeometryShader;
    VkBool32 multiviewTessellationShader;
    safe_VkPhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct);
    safe_VkPhysicalDeviceMultiviewFeaturesKHX(const safe_VkPhysicalDeviceMultiviewFeaturesKHX& src);
    safe_VkPhysicalDeviceMultiviewFeaturesKHX();
    ~safe_VkPhysicalDeviceMultiviewFeaturesKHX();
    void initialize(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceMultiviewFeaturesKHX* src);
    VkPhysicalDeviceMultiviewFeaturesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewFeaturesKHX *>(this); }
    VkPhysicalDeviceMultiviewFeaturesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMultiviewFeaturesKHX const *>(this); }
};

struct safe_VkPhysicalDeviceMultiviewPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    uint32_t maxMultiviewViewCount;
    uint32_t maxMultiviewInstanceIndex;
    safe_VkPhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct);
    safe_VkPhysicalDeviceMultiviewPropertiesKHX(const safe_VkPhysicalDeviceMultiviewPropertiesKHX& src);
    safe_VkPhysicalDeviceMultiviewPropertiesKHX();
    ~safe_VkPhysicalDeviceMultiviewPropertiesKHX();
    void initialize(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceMultiviewPropertiesKHX* src);
    VkPhysicalDeviceMultiviewPropertiesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewPropertiesKHX *>(this); }
    VkPhysicalDeviceMultiviewPropertiesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMultiviewPropertiesKHX const *>(this); }
};

struct safe_VkExternalMemoryImageCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsNV handleTypes;
    safe_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV* in_struct);
    safe_VkExternalMemoryImageCreateInfoNV(const safe_VkExternalMemoryImageCreateInfoNV& src);
    safe_VkExternalMemoryImageCreateInfoNV();
    ~safe_VkExternalMemoryImageCreateInfoNV();
    void initialize(const VkExternalMemoryImageCreateInfoNV* in_struct);
    void initialize(const safe_VkExternalMemoryImageCreateInfoNV* src);
    VkExternalMemoryImageCreateInfoNV *ptr() { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV *>(this); }
    VkExternalMemoryImageCreateInfoNV const *ptr() const { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV const *>(this); }
};

struct safe_VkExportMemoryAllocateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsNV handleTypes;
    safe_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV* in_struct);
    safe_VkExportMemoryAllocateInfoNV(const safe_VkExportMemoryAllocateInfoNV& src);
    safe_VkExportMemoryAllocateInfoNV();
    ~safe_VkExportMemoryAllocateInfoNV();
    void initialize(const VkExportMemoryAllocateInfoNV* in_struct);
    void initialize(const safe_VkExportMemoryAllocateInfoNV* src);
    VkExportMemoryAllocateInfoNV *ptr() { return reinterpret_cast<VkExportMemoryAllocateInfoNV *>(this); }
    VkExportMemoryAllocateInfoNV const *ptr() const { return reinterpret_cast<VkExportMemoryAllocateInfoNV const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryWin32HandleInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsNV handleType;
    HANDLE handle;
    safe_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV* in_struct);
    safe_VkImportMemoryWin32HandleInfoNV(const safe_VkImportMemoryWin32HandleInfoNV& src);
    safe_VkImportMemoryWin32HandleInfoNV();
    ~safe_VkImportMemoryWin32HandleInfoNV();
    void initialize(const VkImportMemoryWin32HandleInfoNV* in_struct);
    void initialize(const safe_VkImportMemoryWin32HandleInfoNV* src);
    VkImportMemoryWin32HandleInfoNV *ptr() { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV *>(this); }
    VkImportMemoryWin32HandleInfoNV const *ptr() const { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkExportMemoryWin32HandleInfoNV {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    safe_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV* in_struct);
    safe_VkExportMemoryWin32HandleInfoNV(const safe_VkExportMemoryWin32HandleInfoNV& src);
    safe_VkExportMemoryWin32HandleInfoNV();
    ~safe_VkExportMemoryWin32HandleInfoNV();
    void initialize(const VkExportMemoryWin32HandleInfoNV* in_struct);
    void initialize(const safe_VkExportMemoryWin32HandleInfoNV* src);
    VkExportMemoryWin32HandleInfoNV *ptr() { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV *>(this); }
    VkExportMemoryWin32HandleInfoNV const *ptr() const { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32KeyedMutexAcquireReleaseInfoNV {
    VkStructureType sType;
    const void* pNext;
    uint32_t acquireCount;
    VkDeviceMemory* pAcquireSyncs;
    const uint64_t* pAcquireKeys;
    const uint32_t* pAcquireTimeoutMilliseconds;
    uint32_t releaseCount;
    VkDeviceMemory* pReleaseSyncs;
    const uint64_t* pReleaseKeys;
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV();
    ~safe_VkWin32KeyedMutexAcquireReleaseInfoNV();
    void initialize(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct);
    void initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV* src);
    VkWin32KeyedMutexAcquireReleaseInfoNV *ptr() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV *>(this); }
    VkWin32KeyedMutexAcquireReleaseInfoNV const *ptr() const { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkMemoryAllocateFlagsInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkMemoryAllocateFlagsKHX flags;
    uint32_t deviceMask;
    safe_VkMemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX* in_struct);
    safe_VkMemoryAllocateFlagsInfoKHX(const safe_VkMemoryAllocateFlagsInfoKHX& src);
    safe_VkMemoryAllocateFlagsInfoKHX();
    ~safe_VkMemoryAllocateFlagsInfoKHX();
    void initialize(const VkMemoryAllocateFlagsInfoKHX* in_struct);
    void initialize(const safe_VkMemoryAllocateFlagsInfoKHX* src);
    VkMemoryAllocateFlagsInfoKHX *ptr() { return reinterpret_cast<VkMemoryAllocateFlagsInfoKHX *>(this); }
    VkMemoryAllocateFlagsInfoKHX const *ptr() const { return reinterpret_cast<VkMemoryAllocateFlagsInfoKHX const *>(this); }
};

struct safe_VkBindBufferMemoryInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkBuffer buffer;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices;
    safe_VkBindBufferMemoryInfoKHX(const VkBindBufferMemoryInfoKHX* in_struct);
    safe_VkBindBufferMemoryInfoKHX(const safe_VkBindBufferMemoryInfoKHX& src);
    safe_VkBindBufferMemoryInfoKHX();
    ~safe_VkBindBufferMemoryInfoKHX();
    void initialize(const VkBindBufferMemoryInfoKHX* in_struct);
    void initialize(const safe_VkBindBufferMemoryInfoKHX* src);
    VkBindBufferMemoryInfoKHX *ptr() { return reinterpret_cast<VkBindBufferMemoryInfoKHX *>(this); }
    VkBindBufferMemoryInfoKHX const *ptr() const { return reinterpret_cast<VkBindBufferMemoryInfoKHX const *>(this); }
};

struct safe_VkBindImageMemoryInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices;
    uint32_t SFRRectCount;
    const VkRect2D* pSFRRects;
    safe_VkBindImageMemoryInfoKHX(const VkBindImageMemoryInfoKHX* in_struct);
    safe_VkBindImageMemoryInfoKHX(const safe_VkBindImageMemoryInfoKHX& src);
    safe_VkBindImageMemoryInfoKHX();
    ~safe_VkBindImageMemoryInfoKHX();
    void initialize(const VkBindImageMemoryInfoKHX* in_struct);
    void initialize(const safe_VkBindImageMemoryInfoKHX* src);
    VkBindImageMemoryInfoKHX *ptr() { return reinterpret_cast<VkBindImageMemoryInfoKHX *>(this); }
    VkBindImageMemoryInfoKHX const *ptr() const { return reinterpret_cast<VkBindImageMemoryInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupRenderPassBeginInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t deviceMask;
    uint32_t deviceRenderAreaCount;
    const VkRect2D* pDeviceRenderAreas;
    safe_VkDeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct);
    safe_VkDeviceGroupRenderPassBeginInfoKHX(const safe_VkDeviceGroupRenderPassBeginInfoKHX& src);
    safe_VkDeviceGroupRenderPassBeginInfoKHX();
    ~safe_VkDeviceGroupRenderPassBeginInfoKHX();
    void initialize(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupRenderPassBeginInfoKHX* src);
    VkDeviceGroupRenderPassBeginInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfoKHX *>(this); }
    VkDeviceGroupRenderPassBeginInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupCommandBufferBeginInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t deviceMask;
    safe_VkDeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct);
    safe_VkDeviceGroupCommandBufferBeginInfoKHX(const safe_VkDeviceGroupCommandBufferBeginInfoKHX& src);
    safe_VkDeviceGroupCommandBufferBeginInfoKHX();
    ~safe_VkDeviceGroupCommandBufferBeginInfoKHX();
    void initialize(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupCommandBufferBeginInfoKHX* src);
    VkDeviceGroupCommandBufferBeginInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfoKHX *>(this); }
    VkDeviceGroupCommandBufferBeginInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupSubmitInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    const uint32_t* pWaitSemaphoreDeviceIndices;
    uint32_t commandBufferCount;
    const uint32_t* pCommandBufferDeviceMasks;
    uint32_t signalSemaphoreCount;
    const uint32_t* pSignalSemaphoreDeviceIndices;
    safe_VkDeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX* in_struct);
    safe_VkDeviceGroupSubmitInfoKHX(const safe_VkDeviceGroupSubmitInfoKHX& src);
    safe_VkDeviceGroupSubmitInfoKHX();
    ~safe_VkDeviceGroupSubmitInfoKHX();
    void initialize(const VkDeviceGroupSubmitInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupSubmitInfoKHX* src);
    VkDeviceGroupSubmitInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupSubmitInfoKHX *>(this); }
    VkDeviceGroupSubmitInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupSubmitInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupBindSparseInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t resourceDeviceIndex;
    uint32_t memoryDeviceIndex;
    safe_VkDeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX* in_struct);
    safe_VkDeviceGroupBindSparseInfoKHX(const safe_VkDeviceGroupBindSparseInfoKHX& src);
    safe_VkDeviceGroupBindSparseInfoKHX();
    ~safe_VkDeviceGroupBindSparseInfoKHX();
    void initialize(const VkDeviceGroupBindSparseInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupBindSparseInfoKHX* src);
    VkDeviceGroupBindSparseInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupBindSparseInfoKHX *>(this); }
    VkDeviceGroupBindSparseInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupBindSparseInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupPresentCapabilitiesKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE_KHX];
    VkDeviceGroupPresentModeFlagsKHX modes;
    safe_VkDeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX* in_struct);
    safe_VkDeviceGroupPresentCapabilitiesKHX(const safe_VkDeviceGroupPresentCapabilitiesKHX& src);
    safe_VkDeviceGroupPresentCapabilitiesKHX();
    ~safe_VkDeviceGroupPresentCapabilitiesKHX();
    void initialize(const VkDeviceGroupPresentCapabilitiesKHX* in_struct);
    void initialize(const safe_VkDeviceGroupPresentCapabilitiesKHX* src);
    VkDeviceGroupPresentCapabilitiesKHX *ptr() { return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHX *>(this); }
    VkDeviceGroupPresentCapabilitiesKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHX const *>(this); }
};

struct safe_VkImageSwapchainCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainKHR swapchain;
    safe_VkImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX* in_struct);
    safe_VkImageSwapchainCreateInfoKHX(const safe_VkImageSwapchainCreateInfoKHX& src);
    safe_VkImageSwapchainCreateInfoKHX();
    ~safe_VkImageSwapchainCreateInfoKHX();
    void initialize(const VkImageSwapchainCreateInfoKHX* in_struct);
    void initialize(const safe_VkImageSwapchainCreateInfoKHX* src);
    VkImageSwapchainCreateInfoKHX *ptr() { return reinterpret_cast<VkImageSwapchainCreateInfoKHX *>(this); }
    VkImageSwapchainCreateInfoKHX const *ptr() const { return reinterpret_cast<VkImageSwapchainCreateInfoKHX const *>(this); }
};

struct safe_VkBindImageMemorySwapchainInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainKHR swapchain;
    uint32_t imageIndex;
    safe_VkBindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX* in_struct);
    safe_VkBindImageMemorySwapchainInfoKHX(const safe_VkBindImageMemorySwapchainInfoKHX& src);
    safe_VkBindImageMemorySwapchainInfoKHX();
    ~safe_VkBindImageMemorySwapchainInfoKHX();
    void initialize(const VkBindImageMemorySwapchainInfoKHX* in_struct);
    void initialize(const safe_VkBindImageMemorySwapchainInfoKHX* src);
    VkBindImageMemorySwapchainInfoKHX *ptr() { return reinterpret_cast<VkBindImageMemorySwapchainInfoKHX *>(this); }
    VkBindImageMemorySwapchainInfoKHX const *ptr() const { return reinterpret_cast<VkBindImageMemorySwapchainInfoKHX const *>(this); }
};

struct safe_VkAcquireNextImageInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainKHR swapchain;
    uint64_t timeout;
    VkSemaphore semaphore;
    VkFence fence;
    uint32_t deviceMask;
    safe_VkAcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX* in_struct);
    safe_VkAcquireNextImageInfoKHX(const safe_VkAcquireNextImageInfoKHX& src);
    safe_VkAcquireNextImageInfoKHX();
    ~safe_VkAcquireNextImageInfoKHX();
    void initialize(const VkAcquireNextImageInfoKHX* in_struct);
    void initialize(const safe_VkAcquireNextImageInfoKHX* src);
    VkAcquireNextImageInfoKHX *ptr() { return reinterpret_cast<VkAcquireNextImageInfoKHX *>(this); }
    VkAcquireNextImageInfoKHX const *ptr() const { return reinterpret_cast<VkAcquireNextImageInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupPresentInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t swapchainCount;
    const uint32_t* pDeviceMasks;
    VkDeviceGroupPresentModeFlagBitsKHX mode;
    safe_VkDeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX* in_struct);
    safe_VkDeviceGroupPresentInfoKHX(const safe_VkDeviceGroupPresentInfoKHX& src);
    safe_VkDeviceGroupPresentInfoKHX();
    ~safe_VkDeviceGroupPresentInfoKHX();
    void initialize(const VkDeviceGroupPresentInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupPresentInfoKHX* src);
    VkDeviceGroupPresentInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupPresentInfoKHX *>(this); }
    VkDeviceGroupPresentInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupPresentInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupSwapchainCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkDeviceGroupPresentModeFlagsKHX modes;
    safe_VkDeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct);
    safe_VkDeviceGroupSwapchainCreateInfoKHX(const safe_VkDeviceGroupSwapchainCreateInfoKHX& src);
    safe_VkDeviceGroupSwapchainCreateInfoKHX();
    ~safe_VkDeviceGroupSwapchainCreateInfoKHX();
    void initialize(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupSwapchainCreateInfoKHX* src);
    VkDeviceGroupSwapchainCreateInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHX *>(this); }
    VkDeviceGroupSwapchainCreateInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHX const *>(this); }
};

struct safe_VkValidationFlagsEXT {
    VkStructureType sType;
    const void* pNext;
    uint32_t disabledValidationCheckCount;
    VkValidationCheckEXT* pDisabledValidationChecks;
    safe_VkValidationFlagsEXT(const VkValidationFlagsEXT* in_struct);
    safe_VkValidationFlagsEXT(const safe_VkValidationFlagsEXT& src);
    safe_VkValidationFlagsEXT();
    ~safe_VkValidationFlagsEXT();
    void initialize(const VkValidationFlagsEXT* in_struct);
    void initialize(const safe_VkValidationFlagsEXT* src);
    VkValidationFlagsEXT *ptr() { return reinterpret_cast<VkValidationFlagsEXT *>(this); }
    VkValidationFlagsEXT const *ptr() const { return reinterpret_cast<VkValidationFlagsEXT const *>(this); }
};

#ifdef VK_USE_PLATFORM_VI_NN
struct safe_VkViSurfaceCreateInfoNN {
    VkStructureType sType;
    const void* pNext;
    VkViSurfaceCreateFlagsNN flags;
    void* window;
    safe_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN* in_struct);
    safe_VkViSurfaceCreateInfoNN(const safe_VkViSurfaceCreateInfoNN& src);
    safe_VkViSurfaceCreateInfoNN();
    ~safe_VkViSurfaceCreateInfoNN();
    void initialize(const VkViSurfaceCreateInfoNN* in_struct);
    void initialize(const safe_VkViSurfaceCreateInfoNN* src);
    VkViSurfaceCreateInfoNN *ptr() { return reinterpret_cast<VkViSurfaceCreateInfoNN *>(this); }
    VkViSurfaceCreateInfoNN const *ptr() const { return reinterpret_cast<VkViSurfaceCreateInfoNN const *>(this); }
};
#endif // VK_USE_PLATFORM_VI_NN

struct safe_VkPhysicalDeviceGroupPropertiesKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t physicalDeviceCount;
    VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE_KHX];
    VkBool32 subsetAllocation;
    safe_VkPhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX* in_struct);
    safe_VkPhysicalDeviceGroupPropertiesKHX(const safe_VkPhysicalDeviceGroupPropertiesKHX& src);
    safe_VkPhysicalDeviceGroupPropertiesKHX();
    ~safe_VkPhysicalDeviceGroupPropertiesKHX();
    void initialize(const VkPhysicalDeviceGroupPropertiesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceGroupPropertiesKHX* src);
    VkPhysicalDeviceGroupPropertiesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceGroupPropertiesKHX *>(this); }
    VkPhysicalDeviceGroupPropertiesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceGroupPropertiesKHX const *>(this); }
};

struct safe_VkDeviceGroupDeviceCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t physicalDeviceCount;
    VkPhysicalDevice* pPhysicalDevices;
    safe_VkDeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX* in_struct);
    safe_VkDeviceGroupDeviceCreateInfoKHX(const safe_VkDeviceGroupDeviceCreateInfoKHX& src);
    safe_VkDeviceGroupDeviceCreateInfoKHX();
    ~safe_VkDeviceGroupDeviceCreateInfoKHX();
    void initialize(const VkDeviceGroupDeviceCreateInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupDeviceCreateInfoKHX* src);
    VkDeviceGroupDeviceCreateInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupDeviceCreateInfoKHX *>(this); }
    VkDeviceGroupDeviceCreateInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupDeviceCreateInfoKHX const *>(this); }
};

struct safe_VkPhysicalDeviceExternalImageFormatInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHX handleType;
    safe_VkPhysicalDeviceExternalImageFormatInfoKHX(const VkPhysicalDeviceExternalImageFormatInfoKHX* in_struct);
    safe_VkPhysicalDeviceExternalImageFormatInfoKHX(const safe_VkPhysicalDeviceExternalImageFormatInfoKHX& src);
    safe_VkPhysicalDeviceExternalImageFormatInfoKHX();
    ~safe_VkPhysicalDeviceExternalImageFormatInfoKHX();
    void initialize(const VkPhysicalDeviceExternalImageFormatInfoKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalImageFormatInfoKHX* src);
    VkPhysicalDeviceExternalImageFormatInfoKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfoKHX *>(this); }
    VkPhysicalDeviceExternalImageFormatInfoKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfoKHX const *>(this); }
};

struct safe_VkExternalImageFormatPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    VkExternalMemoryPropertiesKHX externalMemoryProperties;
    safe_VkExternalImageFormatPropertiesKHX(const VkExternalImageFormatPropertiesKHX* in_struct);
    safe_VkExternalImageFormatPropertiesKHX(const safe_VkExternalImageFormatPropertiesKHX& src);
    safe_VkExternalImageFormatPropertiesKHX();
    ~safe_VkExternalImageFormatPropertiesKHX();
    void initialize(const VkExternalImageFormatPropertiesKHX* in_struct);
    void initialize(const safe_VkExternalImageFormatPropertiesKHX* src);
    VkExternalImageFormatPropertiesKHX *ptr() { return reinterpret_cast<VkExternalImageFormatPropertiesKHX *>(this); }
    VkExternalImageFormatPropertiesKHX const *ptr() const { return reinterpret_cast<VkExternalImageFormatPropertiesKHX const *>(this); }
};

struct safe_VkPhysicalDeviceExternalBufferInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkBufferCreateFlags flags;
    VkBufferUsageFlags usage;
    VkExternalMemoryHandleTypeFlagBitsKHX handleType;
    safe_VkPhysicalDeviceExternalBufferInfoKHX(const VkPhysicalDeviceExternalBufferInfoKHX* in_struct);
    safe_VkPhysicalDeviceExternalBufferInfoKHX(const safe_VkPhysicalDeviceExternalBufferInfoKHX& src);
    safe_VkPhysicalDeviceExternalBufferInfoKHX();
    ~safe_VkPhysicalDeviceExternalBufferInfoKHX();
    void initialize(const VkPhysicalDeviceExternalBufferInfoKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalBufferInfoKHX* src);
    VkPhysicalDeviceExternalBufferInfoKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalBufferInfoKHX *>(this); }
    VkPhysicalDeviceExternalBufferInfoKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalBufferInfoKHX const *>(this); }
};

struct safe_VkExternalBufferPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    VkExternalMemoryPropertiesKHX externalMemoryProperties;
    safe_VkExternalBufferPropertiesKHX(const VkExternalBufferPropertiesKHX* in_struct);
    safe_VkExternalBufferPropertiesKHX(const safe_VkExternalBufferPropertiesKHX& src);
    safe_VkExternalBufferPropertiesKHX();
    ~safe_VkExternalBufferPropertiesKHX();
    void initialize(const VkExternalBufferPropertiesKHX* in_struct);
    void initialize(const safe_VkExternalBufferPropertiesKHX* src);
    VkExternalBufferPropertiesKHX *ptr() { return reinterpret_cast<VkExternalBufferPropertiesKHX *>(this); }
    VkExternalBufferPropertiesKHX const *ptr() const { return reinterpret_cast<VkExternalBufferPropertiesKHX const *>(this); }
};

struct safe_VkPhysicalDeviceIDPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    uint8_t deviceUUID[VK_UUID_SIZE];
    uint8_t driverUUID[VK_UUID_SIZE];
    uint8_t deviceLUID[VK_LUID_SIZE_KHX];
    VkBool32 deviceLUIDValid;
    safe_VkPhysicalDeviceIDPropertiesKHX(const VkPhysicalDeviceIDPropertiesKHX* in_struct);
    safe_VkPhysicalDeviceIDPropertiesKHX(const safe_VkPhysicalDeviceIDPropertiesKHX& src);
    safe_VkPhysicalDeviceIDPropertiesKHX();
    ~safe_VkPhysicalDeviceIDPropertiesKHX();
    void initialize(const VkPhysicalDeviceIDPropertiesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceIDPropertiesKHX* src);
    VkPhysicalDeviceIDPropertiesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceIDPropertiesKHX *>(this); }
    VkPhysicalDeviceIDPropertiesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceIDPropertiesKHX const *>(this); }
};

struct safe_VkPhysicalDeviceProperties2KHX {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceProperties properties;
    safe_VkPhysicalDeviceProperties2KHX(const VkPhysicalDeviceProperties2KHX* in_struct);
    safe_VkPhysicalDeviceProperties2KHX(const safe_VkPhysicalDeviceProperties2KHX& src);
    safe_VkPhysicalDeviceProperties2KHX();
    ~safe_VkPhysicalDeviceProperties2KHX();
    void initialize(const VkPhysicalDeviceProperties2KHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceProperties2KHX* src);
    VkPhysicalDeviceProperties2KHX *ptr() { return reinterpret_cast<VkPhysicalDeviceProperties2KHX *>(this); }
    VkPhysicalDeviceProperties2KHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceProperties2KHX const *>(this); }
};

struct safe_VkImageFormatProperties2KHX {
    VkStructureType sType;
    void* pNext;
    VkImageFormatProperties imageFormatProperties;
    safe_VkImageFormatProperties2KHX(const VkImageFormatProperties2KHX* in_struct);
    safe_VkImageFormatProperties2KHX(const safe_VkImageFormatProperties2KHX& src);
    safe_VkImageFormatProperties2KHX();
    ~safe_VkImageFormatProperties2KHX();
    void initialize(const VkImageFormatProperties2KHX* in_struct);
    void initialize(const safe_VkImageFormatProperties2KHX* src);
    VkImageFormatProperties2KHX *ptr() { return reinterpret_cast<VkImageFormatProperties2KHX *>(this); }
    VkImageFormatProperties2KHX const *ptr() const { return reinterpret_cast<VkImageFormatProperties2KHX const *>(this); }
};

struct safe_VkPhysicalDeviceImageFormatInfo2KHX {
    VkStructureType sType;
    const void* pNext;
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;
    safe_VkPhysicalDeviceImageFormatInfo2KHX(const VkPhysicalDeviceImageFormatInfo2KHX* in_struct);
    safe_VkPhysicalDeviceImageFormatInfo2KHX(const safe_VkPhysicalDeviceImageFormatInfo2KHX& src);
    safe_VkPhysicalDeviceImageFormatInfo2KHX();
    ~safe_VkPhysicalDeviceImageFormatInfo2KHX();
    void initialize(const VkPhysicalDeviceImageFormatInfo2KHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceImageFormatInfo2KHX* src);
    VkPhysicalDeviceImageFormatInfo2KHX *ptr() { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHX *>(this); }
    VkPhysicalDeviceImageFormatInfo2KHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHX const *>(this); }
};

struct safe_VkExternalMemoryImageCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsKHX handleTypes;
    safe_VkExternalMemoryImageCreateInfoKHX(const VkExternalMemoryImageCreateInfoKHX* in_struct);
    safe_VkExternalMemoryImageCreateInfoKHX(const safe_VkExternalMemoryImageCreateInfoKHX& src);
    safe_VkExternalMemoryImageCreateInfoKHX();
    ~safe_VkExternalMemoryImageCreateInfoKHX();
    void initialize(const VkExternalMemoryImageCreateInfoKHX* in_struct);
    void initialize(const safe_VkExternalMemoryImageCreateInfoKHX* src);
    VkExternalMemoryImageCreateInfoKHX *ptr() { return reinterpret_cast<VkExternalMemoryImageCreateInfoKHX *>(this); }
    VkExternalMemoryImageCreateInfoKHX const *ptr() const { return reinterpret_cast<VkExternalMemoryImageCreateInfoKHX const *>(this); }
};

struct safe_VkExternalMemoryBufferCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsKHX handleTypes;
    safe_VkExternalMemoryBufferCreateInfoKHX(const VkExternalMemoryBufferCreateInfoKHX* in_struct);
    safe_VkExternalMemoryBufferCreateInfoKHX(const safe_VkExternalMemoryBufferCreateInfoKHX& src);
    safe_VkExternalMemoryBufferCreateInfoKHX();
    ~safe_VkExternalMemoryBufferCreateInfoKHX();
    void initialize(const VkExternalMemoryBufferCreateInfoKHX* in_struct);
    void initialize(const safe_VkExternalMemoryBufferCreateInfoKHX* src);
    VkExternalMemoryBufferCreateInfoKHX *ptr() { return reinterpret_cast<VkExternalMemoryBufferCreateInfoKHX *>(this); }
    VkExternalMemoryBufferCreateInfoKHX const *ptr() const { return reinterpret_cast<VkExternalMemoryBufferCreateInfoKHX const *>(this); }
};

struct safe_VkExportMemoryAllocateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsKHX handleTypes;
    safe_VkExportMemoryAllocateInfoKHX(const VkExportMemoryAllocateInfoKHX* in_struct);
    safe_VkExportMemoryAllocateInfoKHX(const safe_VkExportMemoryAllocateInfoKHX& src);
    safe_VkExportMemoryAllocateInfoKHX();
    ~safe_VkExportMemoryAllocateInfoKHX();
    void initialize(const VkExportMemoryAllocateInfoKHX* in_struct);
    void initialize(const safe_VkExportMemoryAllocateInfoKHX* src);
    VkExportMemoryAllocateInfoKHX *ptr() { return reinterpret_cast<VkExportMemoryAllocateInfoKHX *>(this); }
    VkExportMemoryAllocateInfoKHX const *ptr() const { return reinterpret_cast<VkExportMemoryAllocateInfoKHX const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryWin32HandleInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHX handleType;
    HANDLE handle;
    safe_VkImportMemoryWin32HandleInfoKHX(const VkImportMemoryWin32HandleInfoKHX* in_struct);
    safe_VkImportMemoryWin32HandleInfoKHX(const safe_VkImportMemoryWin32HandleInfoKHX& src);
    safe_VkImportMemoryWin32HandleInfoKHX();
    ~safe_VkImportMemoryWin32HandleInfoKHX();
    void initialize(const VkImportMemoryWin32HandleInfoKHX* in_struct);
    void initialize(const safe_VkImportMemoryWin32HandleInfoKHX* src);
    VkImportMemoryWin32HandleInfoKHX *ptr() { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHX *>(this); }
    VkImportMemoryWin32HandleInfoKHX const *ptr() const { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkExportMemoryWin32HandleInfoKHX {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    LPCWSTR name;
    safe_VkExportMemoryWin32HandleInfoKHX(const VkExportMemoryWin32HandleInfoKHX* in_struct);
    safe_VkExportMemoryWin32HandleInfoKHX(const safe_VkExportMemoryWin32HandleInfoKHX& src);
    safe_VkExportMemoryWin32HandleInfoKHX();
    ~safe_VkExportMemoryWin32HandleInfoKHX();
    void initialize(const VkExportMemoryWin32HandleInfoKHX* in_struct);
    void initialize(const safe_VkExportMemoryWin32HandleInfoKHX* src);
    VkExportMemoryWin32HandleInfoKHX *ptr() { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHX *>(this); }
    VkExportMemoryWin32HandleInfoKHX const *ptr() const { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkMemoryWin32HandlePropertiesKHX {
    VkStructureType sType;
    void* pNext;
    uint32_t memoryTypeBits;
    safe_VkMemoryWin32HandlePropertiesKHX(const VkMemoryWin32HandlePropertiesKHX* in_struct);
    safe_VkMemoryWin32HandlePropertiesKHX(const safe_VkMemoryWin32HandlePropertiesKHX& src);
    safe_VkMemoryWin32HandlePropertiesKHX();
    ~safe_VkMemoryWin32HandlePropertiesKHX();
    void initialize(const VkMemoryWin32HandlePropertiesKHX* in_struct);
    void initialize(const safe_VkMemoryWin32HandlePropertiesKHX* src);
    VkMemoryWin32HandlePropertiesKHX *ptr() { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHX *>(this); }
    VkMemoryWin32HandlePropertiesKHX const *ptr() const { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkImportMemoryFdInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHX handleType;
    int fd;
    safe_VkImportMemoryFdInfoKHX(const VkImportMemoryFdInfoKHX* in_struct);
    safe_VkImportMemoryFdInfoKHX(const safe_VkImportMemoryFdInfoKHX& src);
    safe_VkImportMemoryFdInfoKHX();
    ~safe_VkImportMemoryFdInfoKHX();
    void initialize(const VkImportMemoryFdInfoKHX* in_struct);
    void initialize(const safe_VkImportMemoryFdInfoKHX* src);
    VkImportMemoryFdInfoKHX *ptr() { return reinterpret_cast<VkImportMemoryFdInfoKHX *>(this); }
    VkImportMemoryFdInfoKHX const *ptr() const { return reinterpret_cast<VkImportMemoryFdInfoKHX const *>(this); }
};

struct safe_VkMemoryFdPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    uint32_t memoryTypeBits;
    safe_VkMemoryFdPropertiesKHX(const VkMemoryFdPropertiesKHX* in_struct);
    safe_VkMemoryFdPropertiesKHX(const safe_VkMemoryFdPropertiesKHX& src);
    safe_VkMemoryFdPropertiesKHX();
    ~safe_VkMemoryFdPropertiesKHX();
    void initialize(const VkMemoryFdPropertiesKHX* in_struct);
    void initialize(const safe_VkMemoryFdPropertiesKHX* src);
    VkMemoryFdPropertiesKHX *ptr() { return reinterpret_cast<VkMemoryFdPropertiesKHX *>(this); }
    VkMemoryFdPropertiesKHX const *ptr() const { return reinterpret_cast<VkMemoryFdPropertiesKHX const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32KeyedMutexAcquireReleaseInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t acquireCount;
    VkDeviceMemory* pAcquireSyncs;
    const uint64_t* pAcquireKeys;
    const uint32_t* pAcquireTimeouts;
    uint32_t releaseCount;
    VkDeviceMemory* pReleaseSyncs;
    const uint64_t* pReleaseKeys;
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHX(const VkWin32KeyedMutexAcquireReleaseInfoKHX* in_struct);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHX(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHX& src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHX();
    ~safe_VkWin32KeyedMutexAcquireReleaseInfoKHX();
    void initialize(const VkWin32KeyedMutexAcquireReleaseInfoKHX* in_struct);
    void initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHX* src);
    VkWin32KeyedMutexAcquireReleaseInfoKHX *ptr() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHX *>(this); }
    VkWin32KeyedMutexAcquireReleaseInfoKHX const *ptr() const { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkPhysicalDeviceExternalSemaphoreInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalSemaphoreHandleTypeFlagBitsKHX handleType;
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHX(const VkPhysicalDeviceExternalSemaphoreInfoKHX* in_struct);
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHX(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHX& src);
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHX();
    ~safe_VkPhysicalDeviceExternalSemaphoreInfoKHX();
    void initialize(const VkPhysicalDeviceExternalSemaphoreInfoKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHX* src);
    VkPhysicalDeviceExternalSemaphoreInfoKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfoKHX *>(this); }
    VkPhysicalDeviceExternalSemaphoreInfoKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfoKHX const *>(this); }
};

struct safe_VkExternalSemaphorePropertiesKHX {
    VkStructureType sType;
    void* pNext;
    VkExternalSemaphoreHandleTypeFlagsKHX exportFromImportedHandleTypes;
    VkExternalSemaphoreHandleTypeFlagsKHX compatibleHandleTypes;
    VkExternalSemaphoreFeatureFlagsKHX externalSemaphoreFeatures;
    safe_VkExternalSemaphorePropertiesKHX(const VkExternalSemaphorePropertiesKHX* in_struct);
    safe_VkExternalSemaphorePropertiesKHX(const safe_VkExternalSemaphorePropertiesKHX& src);
    safe_VkExternalSemaphorePropertiesKHX();
    ~safe_VkExternalSemaphorePropertiesKHX();
    void initialize(const VkExternalSemaphorePropertiesKHX* in_struct);
    void initialize(const safe_VkExternalSemaphorePropertiesKHX* src);
    VkExternalSemaphorePropertiesKHX *ptr() { return reinterpret_cast<VkExternalSemaphorePropertiesKHX *>(this); }
    VkExternalSemaphorePropertiesKHX const *ptr() const { return reinterpret_cast<VkExternalSemaphorePropertiesKHX const *>(this); }
};

struct safe_VkExportSemaphoreCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkExternalSemaphoreHandleTypeFlagsKHX handleTypes;
    safe_VkExportSemaphoreCreateInfoKHX(const VkExportSemaphoreCreateInfoKHX* in_struct);
    safe_VkExportSemaphoreCreateInfoKHX(const safe_VkExportSemaphoreCreateInfoKHX& src);
    safe_VkExportSemaphoreCreateInfoKHX();
    ~safe_VkExportSemaphoreCreateInfoKHX();
    void initialize(const VkExportSemaphoreCreateInfoKHX* in_struct);
    void initialize(const safe_VkExportSemaphoreCreateInfoKHX* src);
    VkExportSemaphoreCreateInfoKHX *ptr() { return reinterpret_cast<VkExportSemaphoreCreateInfoKHX *>(this); }
    VkExportSemaphoreCreateInfoKHX const *ptr() const { return reinterpret_cast<VkExportSemaphoreCreateInfoKHX const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHX
struct safe_VkImportSemaphoreWin32HandleInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagsKHX handleType;
    HANDLE handle;
    safe_VkImportSemaphoreWin32HandleInfoKHX(const VkImportSemaphoreWin32HandleInfoKHX* in_struct);
    safe_VkImportSemaphoreWin32HandleInfoKHX(const safe_VkImportSemaphoreWin32HandleInfoKHX& src);
    safe_VkImportSemaphoreWin32HandleInfoKHX();
    ~safe_VkImportSemaphoreWin32HandleInfoKHX();
    void initialize(const VkImportSemaphoreWin32HandleInfoKHX* in_struct);
    void initialize(const safe_VkImportSemaphoreWin32HandleInfoKHX* src);
    VkImportSemaphoreWin32HandleInfoKHX *ptr() { return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHX *>(this); }
    VkImportSemaphoreWin32HandleInfoKHX const *ptr() const { return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHX

#ifdef VK_USE_PLATFORM_WIN32_KHX
struct safe_VkExportSemaphoreWin32HandleInfoKHX {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    LPCWSTR name;
    safe_VkExportSemaphoreWin32HandleInfoKHX(const VkExportSemaphoreWin32HandleInfoKHX* in_struct);
    safe_VkExportSemaphoreWin32HandleInfoKHX(const safe_VkExportSemaphoreWin32HandleInfoKHX& src);
    safe_VkExportSemaphoreWin32HandleInfoKHX();
    ~safe_VkExportSemaphoreWin32HandleInfoKHX();
    void initialize(const VkExportSemaphoreWin32HandleInfoKHX* in_struct);
    void initialize(const safe_VkExportSemaphoreWin32HandleInfoKHX* src);
    VkExportSemaphoreWin32HandleInfoKHX *ptr() { return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHX *>(this); }
    VkExportSemaphoreWin32HandleInfoKHX const *ptr() const { return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHX

#ifdef VK_USE_PLATFORM_WIN32_KHX
struct safe_VkD3D12FenceSubmitInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreValuesCount;
    const uint64_t* pWaitSemaphoreValues;
    uint32_t signalSemaphoreValuesCount;
    const uint64_t* pSignalSemaphoreValues;
    safe_VkD3D12FenceSubmitInfoKHX(const VkD3D12FenceSubmitInfoKHX* in_struct);
    safe_VkD3D12FenceSubmitInfoKHX(const safe_VkD3D12FenceSubmitInfoKHX& src);
    safe_VkD3D12FenceSubmitInfoKHX();
    ~safe_VkD3D12FenceSubmitInfoKHX();
    void initialize(const VkD3D12FenceSubmitInfoKHX* in_struct);
    void initialize(const safe_VkD3D12FenceSubmitInfoKHX* src);
    VkD3D12FenceSubmitInfoKHX *ptr() { return reinterpret_cast<VkD3D12FenceSubmitInfoKHX *>(this); }
    VkD3D12FenceSubmitInfoKHX const *ptr() const { return reinterpret_cast<VkD3D12FenceSubmitInfoKHX const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHX

struct safe_VkImportSemaphoreFdInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagBitsKHX handleType;
    int fd;
    safe_VkImportSemaphoreFdInfoKHX(const VkImportSemaphoreFdInfoKHX* in_struct);
    safe_VkImportSemaphoreFdInfoKHX(const safe_VkImportSemaphoreFdInfoKHX& src);
    safe_VkImportSemaphoreFdInfoKHX();
    ~safe_VkImportSemaphoreFdInfoKHX();
    void initialize(const VkImportSemaphoreFdInfoKHX* in_struct);
    void initialize(const safe_VkImportSemaphoreFdInfoKHX* src);
    VkImportSemaphoreFdInfoKHX *ptr() { return reinterpret_cast<VkImportSemaphoreFdInfoKHX *>(this); }
    VkImportSemaphoreFdInfoKHX const *ptr() const { return reinterpret_cast<VkImportSemaphoreFdInfoKHX const *>(this); }
};

struct safe_VkDeviceGeneratedCommandsFeaturesNVX {
    VkStructureType sType;
    const void* pNext;
    VkBool32 computeBindingPointSupport;
    safe_VkDeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct);
    safe_VkDeviceGeneratedCommandsFeaturesNVX(const safe_VkDeviceGeneratedCommandsFeaturesNVX& src);
    safe_VkDeviceGeneratedCommandsFeaturesNVX();
    ~safe_VkDeviceGeneratedCommandsFeaturesNVX();
    void initialize(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct);
    void initialize(const safe_VkDeviceGeneratedCommandsFeaturesNVX* src);
    VkDeviceGeneratedCommandsFeaturesNVX *ptr() { return reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX *>(this); }
    VkDeviceGeneratedCommandsFeaturesNVX const *ptr() const { return reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX const *>(this); }
};

struct safe_VkDeviceGeneratedCommandsLimitsNVX {
    VkStructureType sType;
    const void* pNext;
    uint32_t maxIndirectCommandsLayoutTokenCount;
    uint32_t maxObjectEntryCounts;
    uint32_t minSequenceCountBufferOffsetAlignment;
    uint32_t minSequenceIndexBufferOffsetAlignment;
    uint32_t minCommandsTokenBufferOffsetAlignment;
    safe_VkDeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX* in_struct);
    safe_VkDeviceGeneratedCommandsLimitsNVX(const safe_VkDeviceGeneratedCommandsLimitsNVX& src);
    safe_VkDeviceGeneratedCommandsLimitsNVX();
    ~safe_VkDeviceGeneratedCommandsLimitsNVX();
    void initialize(const VkDeviceGeneratedCommandsLimitsNVX* in_struct);
    void initialize(const safe_VkDeviceGeneratedCommandsLimitsNVX* src);
    VkDeviceGeneratedCommandsLimitsNVX *ptr() { return reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX *>(this); }
    VkDeviceGeneratedCommandsLimitsNVX const *ptr() const { return reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX const *>(this); }
};

struct safe_VkIndirectCommandsLayoutCreateInfoNVX {
    VkStructureType sType;
    const void* pNext;
    VkPipelineBindPoint pipelineBindPoint;
    VkIndirectCommandsLayoutUsageFlagsNVX flags;
    uint32_t tokenCount;
    const VkIndirectCommandsLayoutTokenNVX* pTokens;
    safe_VkIndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct);
    safe_VkIndirectCommandsLayoutCreateInfoNVX(const safe_VkIndirectCommandsLayoutCreateInfoNVX& src);
    safe_VkIndirectCommandsLayoutCreateInfoNVX();
    ~safe_VkIndirectCommandsLayoutCreateInfoNVX();
    void initialize(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct);
    void initialize(const safe_VkIndirectCommandsLayoutCreateInfoNVX* src);
    VkIndirectCommandsLayoutCreateInfoNVX *ptr() { return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX *>(this); }
    VkIndirectCommandsLayoutCreateInfoNVX const *ptr() const { return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX const *>(this); }
};

struct safe_VkCmdProcessCommandsInfoNVX {
    VkStructureType sType;
    const void* pNext;
    VkObjectTableNVX objectTable;
    VkIndirectCommandsLayoutNVX indirectCommandsLayout;
    uint32_t indirectCommandsTokenCount;
    VkIndirectCommandsTokenNVX* pIndirectCommandsTokens;
    uint32_t maxSequencesCount;
    VkCommandBuffer targetCommandBuffer;
    VkBuffer sequencesCountBuffer;
    VkDeviceSize sequencesCountOffset;
    VkBuffer sequencesIndexBuffer;
    VkDeviceSize sequencesIndexOffset;
    safe_VkCmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX* in_struct);
    safe_VkCmdProcessCommandsInfoNVX(const safe_VkCmdProcessCommandsInfoNVX& src);
    safe_VkCmdProcessCommandsInfoNVX();
    ~safe_VkCmdProcessCommandsInfoNVX();
    void initialize(const VkCmdProcessCommandsInfoNVX* in_struct);
    void initialize(const safe_VkCmdProcessCommandsInfoNVX* src);
    VkCmdProcessCommandsInfoNVX *ptr() { return reinterpret_cast<VkCmdProcessCommandsInfoNVX *>(this); }
    VkCmdProcessCommandsInfoNVX const *ptr() const { return reinterpret_cast<VkCmdProcessCommandsInfoNVX const *>(this); }
};

struct safe_VkCmdReserveSpaceForCommandsInfoNVX {
    VkStructureType sType;
    const void* pNext;
    VkObjectTableNVX objectTable;
    VkIndirectCommandsLayoutNVX indirectCommandsLayout;
    uint32_t maxSequencesCount;
    safe_VkCmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct);
    safe_VkCmdReserveSpaceForCommandsInfoNVX(const safe_VkCmdReserveSpaceForCommandsInfoNVX& src);
    safe_VkCmdReserveSpaceForCommandsInfoNVX();
    ~safe_VkCmdReserveSpaceForCommandsInfoNVX();
    void initialize(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct);
    void initialize(const safe_VkCmdReserveSpaceForCommandsInfoNVX* src);
    VkCmdReserveSpaceForCommandsInfoNVX *ptr() { return reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX *>(this); }
    VkCmdReserveSpaceForCommandsInfoNVX const *ptr() const { return reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX const *>(this); }
};

struct safe_VkObjectTableCreateInfoNVX {
    VkStructureType sType;
    const void* pNext;
    uint32_t objectCount;
    const VkObjectEntryTypeNVX* pObjectEntryTypes;
    const uint32_t* pObjectEntryCounts;
    const VkObjectEntryUsageFlagsNVX* pObjectEntryUsageFlags;
    uint32_t maxUniformBuffersPerDescriptor;
    uint32_t maxStorageBuffersPerDescriptor;
    uint32_t maxStorageImagesPerDescriptor;
    uint32_t maxSampledImagesPerDescriptor;
    uint32_t maxPipelineLayouts;
    safe_VkObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX* in_struct);
    safe_VkObjectTableCreateInfoNVX(const safe_VkObjectTableCreateInfoNVX& src);
    safe_VkObjectTableCreateInfoNVX();
    ~safe_VkObjectTableCreateInfoNVX();
    void initialize(const VkObjectTableCreateInfoNVX* in_struct);
    void initialize(const safe_VkObjectTableCreateInfoNVX* src);
    VkObjectTableCreateInfoNVX *ptr() { return reinterpret_cast<VkObjectTableCreateInfoNVX *>(this); }
    VkObjectTableCreateInfoNVX const *ptr() const { return reinterpret_cast<VkObjectTableCreateInfoNVX const *>(this); }
};

struct safe_VkPipelineViewportWScalingStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkBool32 viewportWScalingEnable;
    uint32_t viewportCount;
    const VkViewportWScalingNV* pViewportWScalings;
    safe_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct);
    safe_VkPipelineViewportWScalingStateCreateInfoNV(const safe_VkPipelineViewportWScalingStateCreateInfoNV& src);
    safe_VkPipelineViewportWScalingStateCreateInfoNV();
    ~safe_VkPipelineViewportWScalingStateCreateInfoNV();
    void initialize(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct);
    void initialize(const safe_VkPipelineViewportWScalingStateCreateInfoNV* src);
    VkPipelineViewportWScalingStateCreateInfoNV *ptr() { return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV *>(this); }
    VkPipelineViewportWScalingStateCreateInfoNV const *ptr() const { return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV const *>(this); }
};

struct safe_VkSurfaceCapabilities2EXT {
    VkStructureType sType;
    void* pNext;
    uint32_t minImageCount;
    uint32_t maxImageCount;
    VkExtent2D currentExtent;
    VkExtent2D minImageExtent;
    VkExtent2D maxImageExtent;
    uint32_t maxImageArrayLayers;
    VkSurfaceTransformFlagsKHR supportedTransforms;
    VkSurfaceTransformFlagBitsKHR currentTransform;
    VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
    VkImageUsageFlags supportedUsageFlags;
    VkSurfaceCounterFlagsEXT supportedSurfaceCounters;
    safe_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct);
    safe_VkSurfaceCapabilities2EXT(const safe_VkSurfaceCapabilities2EXT& src);
    safe_VkSurfaceCapabilities2EXT();
    ~safe_VkSurfaceCapabilities2EXT();
    void initialize(const VkSurfaceCapabilities2EXT* in_struct);
    void initialize(const safe_VkSurfaceCapabilities2EXT* src);
    VkSurfaceCapabilities2EXT *ptr() { return reinterpret_cast<VkSurfaceCapabilities2EXT *>(this); }
    VkSurfaceCapabilities2EXT const *ptr() const { return reinterpret_cast<VkSurfaceCapabilities2EXT const *>(this); }
};

struct safe_VkDisplayPowerInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDisplayPowerStateEXT powerState;
    safe_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct);
    safe_VkDisplayPowerInfoEXT(const safe_VkDisplayPowerInfoEXT& src);
    safe_VkDisplayPowerInfoEXT();
    ~safe_VkDisplayPowerInfoEXT();
    void initialize(const VkDisplayPowerInfoEXT* in_struct);
    void initialize(const safe_VkDisplayPowerInfoEXT* src);
    VkDisplayPowerInfoEXT *ptr() { return reinterpret_cast<VkDisplayPowerInfoEXT *>(this); }
    VkDisplayPowerInfoEXT const *ptr() const { return reinterpret_cast<VkDisplayPowerInfoEXT const *>(this); }
};

struct safe_VkDeviceEventInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDeviceEventTypeEXT deviceEvent;
    safe_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct);
    safe_VkDeviceEventInfoEXT(const safe_VkDeviceEventInfoEXT& src);
    safe_VkDeviceEventInfoEXT();
    ~safe_VkDeviceEventInfoEXT();
    void initialize(const VkDeviceEventInfoEXT* in_struct);
    void initialize(const safe_VkDeviceEventInfoEXT* src);
    VkDeviceEventInfoEXT *ptr() { return reinterpret_cast<VkDeviceEventInfoEXT *>(this); }
    VkDeviceEventInfoEXT const *ptr() const { return reinterpret_cast<VkDeviceEventInfoEXT const *>(this); }
};

struct safe_VkDisplayEventInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDisplayEventTypeEXT displayEvent;
    safe_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct);
    safe_VkDisplayEventInfoEXT(const safe_VkDisplayEventInfoEXT& src);
    safe_VkDisplayEventInfoEXT();
    ~safe_VkDisplayEventInfoEXT();
    void initialize(const VkDisplayEventInfoEXT* in_struct);
    void initialize(const safe_VkDisplayEventInfoEXT* src);
    VkDisplayEventInfoEXT *ptr() { return reinterpret_cast<VkDisplayEventInfoEXT *>(this); }
    VkDisplayEventInfoEXT const *ptr() const { return reinterpret_cast<VkDisplayEventInfoEXT const *>(this); }
};

struct safe_VkSwapchainCounterCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkSurfaceCounterFlagsEXT surfaceCounters;
    safe_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct);
    safe_VkSwapchainCounterCreateInfoEXT(const safe_VkSwapchainCounterCreateInfoEXT& src);
    safe_VkSwapchainCounterCreateInfoEXT();
    ~safe_VkSwapchainCounterCreateInfoEXT();
    void initialize(const VkSwapchainCounterCreateInfoEXT* in_struct);
    void initialize(const safe_VkSwapchainCounterCreateInfoEXT* src);
    VkSwapchainCounterCreateInfoEXT *ptr() { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT *>(this); }
    VkSwapchainCounterCreateInfoEXT const *ptr() const { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT const *>(this); }
};

struct safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
    VkStructureType sType;
    void* pNext;
    VkBool32 perViewPositionAllComponents;
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& src);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    ~safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    void initialize(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct);
    void initialize(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* src);
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(this); }
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const *>(this); }
};

struct safe_VkPipelineViewportSwizzleStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkPipelineViewportSwizzleStateCreateFlagsNV flags;
    uint32_t viewportCount;
    const VkViewportSwizzleNV* pViewportSwizzles;
    safe_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& src);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV();
    ~safe_VkPipelineViewportSwizzleStateCreateInfoNV();
    void initialize(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct);
    void initialize(const safe_VkPipelineViewportSwizzleStateCreateInfoNV* src);
    VkPipelineViewportSwizzleStateCreateInfoNV *ptr() { return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV *>(this); }
    VkPipelineViewportSwizzleStateCreateInfoNV const *ptr() const { return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV const *>(this); }
};

struct safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT {
    VkStructureType sType;
    const void* pNext;
    uint32_t maxDiscardRectangles;
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& src);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    ~safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    void initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT* src);
    VkPhysicalDeviceDiscardRectanglePropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(this); }
    VkPhysicalDeviceDiscardRectanglePropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT const *>(this); }
};

struct safe_VkPipelineDiscardRectangleStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
    VkDiscardRectangleModeEXT discardRectangleMode;
    uint32_t discardRectangleCount;
    const VkRect2D* pDiscardRectangles;
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& src);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT();
    ~safe_VkPipelineDiscardRectangleStateCreateInfoEXT();
    void initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct);
    void initialize(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT* src);
    VkPipelineDiscardRectangleStateCreateInfoEXT *ptr() { return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT *>(this); }
    VkPipelineDiscardRectangleStateCreateInfoEXT const *ptr() const { return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT const *>(this); }
};

#ifdef VK_USE_PLATFORM_IOS_MVK
struct safe_VkIOSSurfaceCreateInfoMVK {
    VkStructureType sType;
    const void* pNext;
    VkIOSSurfaceCreateFlagsMVK flags;
    const void* pView;
    safe_VkIOSSurfaceCreateInfoMVK(const VkIOSSurfaceCreateInfoMVK* in_struct);
    safe_VkIOSSurfaceCreateInfoMVK(const safe_VkIOSSurfaceCreateInfoMVK& src);
    safe_VkIOSSurfaceCreateInfoMVK();
    ~safe_VkIOSSurfaceCreateInfoMVK();
    void initialize(const VkIOSSurfaceCreateInfoMVK* in_struct);
    void initialize(const safe_VkIOSSurfaceCreateInfoMVK* src);
    VkIOSSurfaceCreateInfoMVK *ptr() { return reinterpret_cast<VkIOSSurfaceCreateInfoMVK *>(this); }
    VkIOSSurfaceCreateInfoMVK const *ptr() const { return reinterpret_cast<VkIOSSurfaceCreateInfoMVK const *>(this); }
};
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK
struct safe_VkMacOSSurfaceCreateInfoMVK {
    VkStructureType sType;
    const void* pNext;
    VkMacOSSurfaceCreateFlagsMVK flags;
    const void* pView;
    safe_VkMacOSSurfaceCreateInfoMVK(const VkMacOSSurfaceCreateInfoMVK* in_struct);
    safe_VkMacOSSurfaceCreateInfoMVK(const safe_VkMacOSSurfaceCreateInfoMVK& src);
    safe_VkMacOSSurfaceCreateInfoMVK();
    ~safe_VkMacOSSurfaceCreateInfoMVK();
    void initialize(const VkMacOSSurfaceCreateInfoMVK* in_struct);
    void initialize(const safe_VkMacOSSurfaceCreateInfoMVK* src);
    VkMacOSSurfaceCreateInfoMVK *ptr() { return reinterpret_cast<VkMacOSSurfaceCreateInfoMVK *>(this); }
    VkMacOSSurfaceCreateInfoMVK const *ptr() const { return reinterpret_cast<VkMacOSSurfaceCreateInfoMVK const *>(this); }
};
#endif // VK_USE_PLATFORM_MACOS_MVK
