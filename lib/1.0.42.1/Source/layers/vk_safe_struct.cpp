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


#include "vk_safe_struct.h"
#include <string.h>


safe_VkApplicationInfo::safe_VkApplicationInfo(const VkApplicationInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pApplicationName(in_struct->pApplicationName),
    applicationVersion(in_struct->applicationVersion),
    pEngineName(in_struct->pEngineName),
    engineVersion(in_struct->engineVersion),
    apiVersion(in_struct->apiVersion)
{
}

safe_VkApplicationInfo::safe_VkApplicationInfo()
{}

safe_VkApplicationInfo::safe_VkApplicationInfo(const safe_VkApplicationInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pApplicationName = src.pApplicationName;
    applicationVersion = src.applicationVersion;
    pEngineName = src.pEngineName;
    engineVersion = src.engineVersion;
    apiVersion = src.apiVersion;
}

safe_VkApplicationInfo::~safe_VkApplicationInfo()
{
}

void safe_VkApplicationInfo::initialize(const VkApplicationInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pApplicationName = in_struct->pApplicationName;
    applicationVersion = in_struct->applicationVersion;
    pEngineName = in_struct->pEngineName;
    engineVersion = in_struct->engineVersion;
    apiVersion = in_struct->apiVersion;
}

void safe_VkApplicationInfo::initialize(const safe_VkApplicationInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pApplicationName = src->pApplicationName;
    applicationVersion = src->applicationVersion;
    pEngineName = src->pEngineName;
    engineVersion = src->engineVersion;
    apiVersion = src->apiVersion;
}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo(const VkInstanceCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    enabledLayerCount(in_struct->enabledLayerCount),
    ppEnabledLayerNames(in_struct->ppEnabledLayerNames),
    enabledExtensionCount(in_struct->enabledExtensionCount),
    ppEnabledExtensionNames(in_struct->ppEnabledExtensionNames)
{
    if (in_struct->pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(in_struct->pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo()
{}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo(const safe_VkInstanceCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    enabledLayerCount = src.enabledLayerCount;
    ppEnabledLayerNames = src.ppEnabledLayerNames;
    enabledExtensionCount = src.enabledExtensionCount;
    ppEnabledExtensionNames = src.ppEnabledExtensionNames;
    if (src.pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(*src.pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

safe_VkInstanceCreateInfo::~safe_VkInstanceCreateInfo()
{
    if (pApplicationInfo)
        delete pApplicationInfo;
}

void safe_VkInstanceCreateInfo::initialize(const VkInstanceCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    enabledLayerCount = in_struct->enabledLayerCount;
    ppEnabledLayerNames = in_struct->ppEnabledLayerNames;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    ppEnabledExtensionNames = in_struct->ppEnabledExtensionNames;
    if (in_struct->pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(in_struct->pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

void safe_VkInstanceCreateInfo::initialize(const safe_VkInstanceCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    enabledLayerCount = src->enabledLayerCount;
    ppEnabledLayerNames = src->ppEnabledLayerNames;
    enabledExtensionCount = src->enabledExtensionCount;
    ppEnabledExtensionNames = src->ppEnabledExtensionNames;
    if (src->pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(*src->pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks(const VkAllocationCallbacks* in_struct) :
    pUserData(in_struct->pUserData),
    pfnAllocation(in_struct->pfnAllocation),
    pfnReallocation(in_struct->pfnReallocation),
    pfnFree(in_struct->pfnFree),
    pfnInternalAllocation(in_struct->pfnInternalAllocation),
    pfnInternalFree(in_struct->pfnInternalFree)
{
}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks()
{}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks(const safe_VkAllocationCallbacks& src)
{
    pUserData = src.pUserData;
    pfnAllocation = src.pfnAllocation;
    pfnReallocation = src.pfnReallocation;
    pfnFree = src.pfnFree;
    pfnInternalAllocation = src.pfnInternalAllocation;
    pfnInternalFree = src.pfnInternalFree;
}

safe_VkAllocationCallbacks::~safe_VkAllocationCallbacks()
{
}

void safe_VkAllocationCallbacks::initialize(const VkAllocationCallbacks* in_struct)
{
    pUserData = in_struct->pUserData;
    pfnAllocation = in_struct->pfnAllocation;
    pfnReallocation = in_struct->pfnReallocation;
    pfnFree = in_struct->pfnFree;
    pfnInternalAllocation = in_struct->pfnInternalAllocation;
    pfnInternalFree = in_struct->pfnInternalFree;
}

void safe_VkAllocationCallbacks::initialize(const safe_VkAllocationCallbacks* src)
{
    pUserData = src->pUserData;
    pfnAllocation = src->pfnAllocation;
    pfnReallocation = src->pfnReallocation;
    pfnFree = src->pfnFree;
    pfnInternalAllocation = src->pfnInternalAllocation;
    pfnInternalFree = src->pfnInternalFree;
}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queueFamilyIndex(in_struct->queueFamilyIndex),
    queueCount(in_struct->queueCount),
    pQueuePriorities(nullptr)
{
    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy ((void *)pQueuePriorities, (void *)in_struct->pQueuePriorities, sizeof(float)*in_struct->queueCount);
    }
}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo() :
    pQueuePriorities(nullptr)
{}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo(const safe_VkDeviceQueueCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueFamilyIndex = src.queueFamilyIndex;
    queueCount = src.queueCount;
    pQueuePriorities = nullptr;
    if (src.pQueuePriorities) {
        pQueuePriorities = new float[src.queueCount];
        memcpy ((void *)pQueuePriorities, (void *)src.pQueuePriorities, sizeof(float)*src.queueCount);
    }
}

safe_VkDeviceQueueCreateInfo::~safe_VkDeviceQueueCreateInfo()
{
    if (pQueuePriorities)
        delete[] pQueuePriorities;
}

void safe_VkDeviceQueueCreateInfo::initialize(const VkDeviceQueueCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    queueCount = in_struct->queueCount;
    pQueuePriorities = nullptr;
    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy ((void *)pQueuePriorities, (void *)in_struct->pQueuePriorities, sizeof(float)*in_struct->queueCount);
    }
}

void safe_VkDeviceQueueCreateInfo::initialize(const safe_VkDeviceQueueCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queueFamilyIndex = src->queueFamilyIndex;
    queueCount = src->queueCount;
    pQueuePriorities = nullptr;
    if (src->pQueuePriorities) {
        pQueuePriorities = new float[src->queueCount];
        memcpy ((void *)pQueuePriorities, (void *)src->pQueuePriorities, sizeof(float)*src->queueCount);
    }
}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo(const VkDeviceCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queueCreateInfoCount(in_struct->queueCreateInfoCount),
    pQueueCreateInfos(nullptr),
    enabledLayerCount(in_struct->enabledLayerCount),
    ppEnabledLayerNames(in_struct->ppEnabledLayerNames),
    enabledExtensionCount(in_struct->enabledExtensionCount),
    ppEnabledExtensionNames(in_struct->ppEnabledExtensionNames),
    pEnabledFeatures(nullptr)
{
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }
    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo() :
    pQueueCreateInfos(nullptr),
    pEnabledFeatures(nullptr)
{}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo(const safe_VkDeviceCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueCreateInfoCount = src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = src.enabledLayerCount;
    ppEnabledLayerNames = src.ppEnabledLayerNames;
    enabledExtensionCount = src.enabledExtensionCount;
    ppEnabledExtensionNames = src.ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && src.pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&src.pQueueCreateInfos[i]);
        }
    }
    if (src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*src.pEnabledFeatures);
    }
}

safe_VkDeviceCreateInfo::~safe_VkDeviceCreateInfo()
{
    if (pQueueCreateInfos)
        delete[] pQueueCreateInfos;
    if (pEnabledFeatures)
        delete pEnabledFeatures;
}

void safe_VkDeviceCreateInfo::initialize(const VkDeviceCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queueCreateInfoCount = in_struct->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = in_struct->enabledLayerCount;
    ppEnabledLayerNames = in_struct->ppEnabledLayerNames;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    ppEnabledExtensionNames = in_struct->ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }
    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

void safe_VkDeviceCreateInfo::initialize(const safe_VkDeviceCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queueCreateInfoCount = src->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = src->enabledLayerCount;
    ppEnabledLayerNames = src->ppEnabledLayerNames;
    enabledExtensionCount = src->enabledExtensionCount;
    ppEnabledExtensionNames = src->ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && src->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&src->pQueueCreateInfos[i]);
        }
    }
    if (src->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*src->pEnabledFeatures);
    }
}

safe_VkSubmitInfo::safe_VkSubmitInfo(const VkSubmitInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphores(nullptr),
    pWaitDstStageMask(nullptr),
    commandBufferCount(in_struct->commandBufferCount),
    pCommandBuffers(nullptr),
    signalSemaphoreCount(in_struct->signalSemaphoreCount),
    pSignalSemaphores(nullptr)
{
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)in_struct->pWaitDstStageMask, sizeof(VkPipelineStageFlags)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)in_struct->pCommandBuffers, sizeof(VkCommandBuffer)*in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

safe_VkSubmitInfo::safe_VkSubmitInfo() :
    pWaitSemaphores(nullptr),
    pWaitDstStageMask(nullptr),
    pCommandBuffers(nullptr),
    pSignalSemaphores(nullptr)
{}

safe_VkSubmitInfo::safe_VkSubmitInfo(const safe_VkSubmitInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[src.waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)src.pWaitDstStageMask, sizeof(VkPipelineStageFlags)*src.waitSemaphoreCount);
    }
    if (src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[src.commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)src.pCommandBuffers, sizeof(VkCommandBuffer)*src.commandBufferCount);
    }
    if (signalSemaphoreCount && src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src.pSignalSemaphores[i];
        }
    }
}

safe_VkSubmitInfo::~safe_VkSubmitInfo()
{
    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pWaitDstStageMask)
        delete[] pWaitDstStageMask;
    if (pCommandBuffers)
        delete[] pCommandBuffers;
    if (pSignalSemaphores)
        delete[] pSignalSemaphores;
}

void safe_VkSubmitInfo::initialize(const VkSubmitInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)in_struct->pWaitDstStageMask, sizeof(VkPipelineStageFlags)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)in_struct->pCommandBuffers, sizeof(VkCommandBuffer)*in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void safe_VkSubmitInfo::initialize(const safe_VkSubmitInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = src->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src->pWaitSemaphores[i];
        }
    }
    if (src->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[src->waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)src->pWaitDstStageMask, sizeof(VkPipelineStageFlags)*src->waitSemaphoreCount);
    }
    if (src->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[src->commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)src->pCommandBuffers, sizeof(VkCommandBuffer)*src->commandBufferCount);
    }
    if (signalSemaphoreCount && src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src->pSignalSemaphores[i];
        }
    }
}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    allocationSize(in_struct->allocationSize),
    memoryTypeIndex(in_struct->memoryTypeIndex)
{
}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo()
{}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo(const safe_VkMemoryAllocateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    allocationSize = src.allocationSize;
    memoryTypeIndex = src.memoryTypeIndex;
}

safe_VkMemoryAllocateInfo::~safe_VkMemoryAllocateInfo()
{
}

void safe_VkMemoryAllocateInfo::initialize(const VkMemoryAllocateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    allocationSize = in_struct->allocationSize;
    memoryTypeIndex = in_struct->memoryTypeIndex;
}

void safe_VkMemoryAllocateInfo::initialize(const safe_VkMemoryAllocateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    allocationSize = src->allocationSize;
    memoryTypeIndex = src->memoryTypeIndex;
}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange(const VkMappedMemoryRange* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memory(in_struct->memory),
    offset(in_struct->offset),
    size(in_struct->size)
{
}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange()
{}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange(const safe_VkMappedMemoryRange& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    offset = src.offset;
    size = src.size;
}

safe_VkMappedMemoryRange::~safe_VkMappedMemoryRange()
{
}

void safe_VkMappedMemoryRange::initialize(const VkMappedMemoryRange* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memory = in_struct->memory;
    offset = in_struct->offset;
    size = in_struct->size;
}

void safe_VkMappedMemoryRange::initialize(const safe_VkMappedMemoryRange* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memory = src->memory;
    offset = src->offset;
    size = src->size;
}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct) :
    buffer(in_struct->buffer),
    bindCount(in_struct->bindCount),
    pBinds(nullptr)
{
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo() :
    pBinds(nullptr)
{}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo(const safe_VkSparseBufferMemoryBindInfo& src)
{
    buffer = src.buffer;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }
}

safe_VkSparseBufferMemoryBindInfo::~safe_VkSparseBufferMemoryBindInfo()
{
    if (pBinds)
        delete[] pBinds;
}

void safe_VkSparseBufferMemoryBindInfo::initialize(const VkSparseBufferMemoryBindInfo* in_struct)
{
    buffer = in_struct->buffer;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseBufferMemoryBindInfo::initialize(const safe_VkSparseBufferMemoryBindInfo* src)
{
    buffer = src->buffer;
    bindCount = src->bindCount;
    pBinds = nullptr;
    if (bindCount && src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src->pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct) :
    image(in_struct->image),
    bindCount(in_struct->bindCount),
    pBinds(nullptr)
{
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo() :
    pBinds(nullptr)
{}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo(const safe_VkSparseImageOpaqueMemoryBindInfo& src)
{
    image = src.image;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::~safe_VkSparseImageOpaqueMemoryBindInfo()
{
    if (pBinds)
        delete[] pBinds;
}

void safe_VkSparseImageOpaqueMemoryBindInfo::initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct)
{
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseImageOpaqueMemoryBindInfo::initialize(const safe_VkSparseImageOpaqueMemoryBindInfo* src)
{
    image = src->image;
    bindCount = src->bindCount;
    pBinds = nullptr;
    if (bindCount && src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src->pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct) :
    image(in_struct->image),
    bindCount(in_struct->bindCount),
    pBinds(nullptr)
{
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo() :
    pBinds(nullptr)
{}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo(const safe_VkSparseImageMemoryBindInfo& src)
{
    image = src.image;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::~safe_VkSparseImageMemoryBindInfo()
{
    if (pBinds)
        delete[] pBinds;
}

void safe_VkSparseImageMemoryBindInfo::initialize(const VkSparseImageMemoryBindInfo* in_struct)
{
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseImageMemoryBindInfo::initialize(const safe_VkSparseImageMemoryBindInfo* src)
{
    image = src->image;
    bindCount = src->bindCount;
    pBinds = nullptr;
    if (bindCount && src->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src->pBinds[i];
        }
    }
}

safe_VkBindSparseInfo::safe_VkBindSparseInfo(const VkBindSparseInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphores(nullptr),
    bufferBindCount(in_struct->bufferBindCount),
    pBufferBinds(nullptr),
    imageOpaqueBindCount(in_struct->imageOpaqueBindCount),
    pImageOpaqueBinds(nullptr),
    imageBindCount(in_struct->imageBindCount),
    pImageBinds(nullptr),
    signalSemaphoreCount(in_struct->signalSemaphoreCount),
    pSignalSemaphores(nullptr)
{
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

safe_VkBindSparseInfo::safe_VkBindSparseInfo() :
    pWaitSemaphores(nullptr),
    pBufferBinds(nullptr),
    pImageOpaqueBinds(nullptr),
    pImageBinds(nullptr),
    pSignalSemaphores(nullptr)
{}

safe_VkBindSparseInfo::safe_VkBindSparseInfo(const safe_VkBindSparseInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && src.pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && src.pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src.pSignalSemaphores[i];
        }
    }
}

safe_VkBindSparseInfo::~safe_VkBindSparseInfo()
{
    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pBufferBinds)
        delete[] pBufferBinds;
    if (pImageOpaqueBinds)
        delete[] pImageOpaqueBinds;
    if (pImageBinds)
        delete[] pImageBinds;
    if (pSignalSemaphores)
        delete[] pSignalSemaphores;
}

void safe_VkBindSparseInfo::initialize(const VkBindSparseInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = in_struct->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = in_struct->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = in_struct->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void safe_VkBindSparseInfo::initialize(const safe_VkBindSparseInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = src->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = src->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = src->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && src->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&src->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && src->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&src->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && src->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&src->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src->pSignalSemaphores[i];
        }
    }
}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo(const VkFenceCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo()
{}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo(const safe_VkFenceCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
}

safe_VkFenceCreateInfo::~safe_VkFenceCreateInfo()
{
}

void safe_VkFenceCreateInfo::initialize(const VkFenceCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
}

void safe_VkFenceCreateInfo::initialize(const safe_VkFenceCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo()
{}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo(const safe_VkSemaphoreCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
}

safe_VkSemaphoreCreateInfo::~safe_VkSemaphoreCreateInfo()
{
}

void safe_VkSemaphoreCreateInfo::initialize(const VkSemaphoreCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
}

void safe_VkSemaphoreCreateInfo::initialize(const safe_VkSemaphoreCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
}

safe_VkEventCreateInfo::safe_VkEventCreateInfo(const VkEventCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
}

safe_VkEventCreateInfo::safe_VkEventCreateInfo()
{}

safe_VkEventCreateInfo::safe_VkEventCreateInfo(const safe_VkEventCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
}

safe_VkEventCreateInfo::~safe_VkEventCreateInfo()
{
}

void safe_VkEventCreateInfo::initialize(const VkEventCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
}

void safe_VkEventCreateInfo::initialize(const safe_VkEventCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queryType(in_struct->queryType),
    queryCount(in_struct->queryCount),
    pipelineStatistics(in_struct->pipelineStatistics)
{
}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo()
{}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo(const safe_VkQueryPoolCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queryType = src.queryType;
    queryCount = src.queryCount;
    pipelineStatistics = src.pipelineStatistics;
}

safe_VkQueryPoolCreateInfo::~safe_VkQueryPoolCreateInfo()
{
}

void safe_VkQueryPoolCreateInfo::initialize(const VkQueryPoolCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queryType = in_struct->queryType;
    queryCount = in_struct->queryCount;
    pipelineStatistics = in_struct->pipelineStatistics;
}

void safe_VkQueryPoolCreateInfo::initialize(const safe_VkQueryPoolCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queryType = src->queryType;
    queryCount = src->queryCount;
    pipelineStatistics = src->pipelineStatistics;
}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo(const VkBufferCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    size(in_struct->size),
    usage(in_struct->usage),
    sharingMode(in_struct->sharingMode),
    queueFamilyIndexCount(in_struct->queueFamilyIndexCount),
    pQueueFamilyIndices(nullptr)
{
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo() :
    pQueueFamilyIndices(nullptr)
{}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo(const safe_VkBufferCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    size = src.size;
    usage = src.usage;
    sharingMode = src.sharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }
}

safe_VkBufferCreateInfo::~safe_VkBufferCreateInfo()
{
    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;
}

void safe_VkBufferCreateInfo::initialize(const VkBufferCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    size = in_struct->size;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

void safe_VkBufferCreateInfo::initialize(const safe_VkBufferCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    size = src->size;
    usage = src->usage;
    sharingMode = src->sharingMode;
    queueFamilyIndexCount = src->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src->pQueueFamilyIndices, sizeof(uint32_t)*src->queueFamilyIndexCount);
    }
}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    buffer(in_struct->buffer),
    format(in_struct->format),
    offset(in_struct->offset),
    range(in_struct->range)
{
}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo()
{}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo(const safe_VkBufferViewCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    buffer = src.buffer;
    format = src.format;
    offset = src.offset;
    range = src.range;
}

safe_VkBufferViewCreateInfo::~safe_VkBufferViewCreateInfo()
{
}

void safe_VkBufferViewCreateInfo::initialize(const VkBufferViewCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    buffer = in_struct->buffer;
    format = in_struct->format;
    offset = in_struct->offset;
    range = in_struct->range;
}

void safe_VkBufferViewCreateInfo::initialize(const safe_VkBufferViewCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    buffer = src->buffer;
    format = src->format;
    offset = src->offset;
    range = src->range;
}

safe_VkImageCreateInfo::safe_VkImageCreateInfo(const VkImageCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    imageType(in_struct->imageType),
    format(in_struct->format),
    extent(in_struct->extent),
    mipLevels(in_struct->mipLevels),
    arrayLayers(in_struct->arrayLayers),
    samples(in_struct->samples),
    tiling(in_struct->tiling),
    usage(in_struct->usage),
    sharingMode(in_struct->sharingMode),
    queueFamilyIndexCount(in_struct->queueFamilyIndexCount),
    pQueueFamilyIndices(nullptr),
    initialLayout(in_struct->initialLayout)
{
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

safe_VkImageCreateInfo::safe_VkImageCreateInfo() :
    pQueueFamilyIndices(nullptr)
{}

safe_VkImageCreateInfo::safe_VkImageCreateInfo(const safe_VkImageCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    imageType = src.imageType;
    format = src.format;
    extent = src.extent;
    mipLevels = src.mipLevels;
    arrayLayers = src.arrayLayers;
    samples = src.samples;
    tiling = src.tiling;
    usage = src.usage;
    sharingMode = src.sharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = src.initialLayout;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }
}

safe_VkImageCreateInfo::~safe_VkImageCreateInfo()
{
    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;
}

void safe_VkImageCreateInfo::initialize(const VkImageCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    imageType = in_struct->imageType;
    format = in_struct->format;
    extent = in_struct->extent;
    mipLevels = in_struct->mipLevels;
    arrayLayers = in_struct->arrayLayers;
    samples = in_struct->samples;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = in_struct->initialLayout;
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

void safe_VkImageCreateInfo::initialize(const safe_VkImageCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    imageType = src->imageType;
    format = src->format;
    extent = src->extent;
    mipLevels = src->mipLevels;
    arrayLayers = src->arrayLayers;
    samples = src->samples;
    tiling = src->tiling;
    usage = src->usage;
    sharingMode = src->sharingMode;
    queueFamilyIndexCount = src->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = src->initialLayout;
    if (src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src->pQueueFamilyIndices, sizeof(uint32_t)*src->queueFamilyIndexCount);
    }
}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo(const VkImageViewCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    image(in_struct->image),
    viewType(in_struct->viewType),
    format(in_struct->format),
    components(in_struct->components),
    subresourceRange(in_struct->subresourceRange)
{
}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo()
{}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo(const safe_VkImageViewCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    image = src.image;
    viewType = src.viewType;
    format = src.format;
    components = src.components;
    subresourceRange = src.subresourceRange;
}

safe_VkImageViewCreateInfo::~safe_VkImageViewCreateInfo()
{
}

void safe_VkImageViewCreateInfo::initialize(const VkImageViewCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    image = in_struct->image;
    viewType = in_struct->viewType;
    format = in_struct->format;
    components = in_struct->components;
    subresourceRange = in_struct->subresourceRange;
}

void safe_VkImageViewCreateInfo::initialize(const safe_VkImageViewCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    image = src->image;
    viewType = src->viewType;
    format = src->format;
    components = src->components;
    subresourceRange = src->subresourceRange;
}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    codeSize(in_struct->codeSize),
    pCode(nullptr)
{
    if (in_struct->pCode) {
        pCode = new uint32_t(*in_struct->pCode);
    }
}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo() :
    pCode(nullptr)
{}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo(const safe_VkShaderModuleCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    codeSize = src.codeSize;
    pCode = nullptr;
    if (src.pCode) {
        pCode = new uint32_t(*src.pCode);
    }
}

safe_VkShaderModuleCreateInfo::~safe_VkShaderModuleCreateInfo()
{
    if (pCode)
        delete pCode;
}

void safe_VkShaderModuleCreateInfo::initialize(const VkShaderModuleCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    codeSize = in_struct->codeSize;
    pCode = nullptr;
    if (in_struct->pCode) {
        pCode = new uint32_t(*in_struct->pCode);
    }
}

void safe_VkShaderModuleCreateInfo::initialize(const safe_VkShaderModuleCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    codeSize = src->codeSize;
    pCode = nullptr;
    if (src->pCode) {
        pCode = new uint32_t(*src->pCode);
    }
}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    initialDataSize(in_struct->initialDataSize),
    pInitialData(in_struct->pInitialData)
{
}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo()
{}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo(const safe_VkPipelineCacheCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    initialDataSize = src.initialDataSize;
    pInitialData = src.pInitialData;
}

safe_VkPipelineCacheCreateInfo::~safe_VkPipelineCacheCreateInfo()
{
}

void safe_VkPipelineCacheCreateInfo::initialize(const VkPipelineCacheCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
}

void safe_VkPipelineCacheCreateInfo::initialize(const safe_VkPipelineCacheCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    initialDataSize = src->initialDataSize;
    pInitialData = src->pInitialData;
}

safe_VkSpecializationInfo::safe_VkSpecializationInfo(const VkSpecializationInfo* in_struct) :
    mapEntryCount(in_struct->mapEntryCount),
    pMapEntries(nullptr),
    dataSize(in_struct->dataSize),
    pData(in_struct->pData)
{
    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry)*in_struct->mapEntryCount);
    }
}

safe_VkSpecializationInfo::safe_VkSpecializationInfo() :
    pMapEntries(nullptr)
{}

safe_VkSpecializationInfo::safe_VkSpecializationInfo(const safe_VkSpecializationInfo& src)
{
    mapEntryCount = src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = src.dataSize;
    pData = src.pData;
    if (src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[src.mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)src.pMapEntries, sizeof(VkSpecializationMapEntry)*src.mapEntryCount);
    }
}

safe_VkSpecializationInfo::~safe_VkSpecializationInfo()
{
    if (pMapEntries)
        delete[] pMapEntries;
}

void safe_VkSpecializationInfo::initialize(const VkSpecializationInfo* in_struct)
{
    mapEntryCount = in_struct->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = in_struct->dataSize;
    pData = in_struct->pData;
    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry)*in_struct->mapEntryCount);
    }
}

void safe_VkSpecializationInfo::initialize(const safe_VkSpecializationInfo* src)
{
    mapEntryCount = src->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = src->dataSize;
    pData = src->pData;
    if (src->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[src->mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)src->pMapEntries, sizeof(VkSpecializationMapEntry)*src->mapEntryCount);
    }
}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    stage(in_struct->stage),
    module(in_struct->module),
    pName(in_struct->pName)
{
    if (in_struct->pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo()
{}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo(const safe_VkPipelineShaderStageCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stage = src.stage;
    module = src.module;
    pName = src.pName;
    if (src.pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(*src.pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

safe_VkPipelineShaderStageCreateInfo::~safe_VkPipelineShaderStageCreateInfo()
{
    if (pSpecializationInfo)
        delete pSpecializationInfo;
}

void safe_VkPipelineShaderStageCreateInfo::initialize(const VkPipelineShaderStageCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    stage = in_struct->stage;
    module = in_struct->module;
    pName = in_struct->pName;
    if (in_struct->pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

void safe_VkPipelineShaderStageCreateInfo::initialize(const safe_VkPipelineShaderStageCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    stage = src->stage;
    module = src->module;
    pName = src->pName;
    if (src->pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(*src->pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    vertexBindingDescriptionCount(in_struct->vertexBindingDescriptionCount),
    pVertexBindingDescriptions(nullptr),
    vertexAttributeDescriptionCount(in_struct->vertexAttributeDescriptionCount),
    pVertexAttributeDescriptions(nullptr)
{
    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)in_struct->pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*in_struct->vertexBindingDescriptionCount);
    }
    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)in_struct->pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*in_struct->vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo() :
    pVertexBindingDescriptions(nullptr),
    pVertexAttributeDescriptions(nullptr)
{}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo(const safe_VkPipelineVertexInputStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    vertexBindingDescriptionCount = src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[src.vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)src.pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*src.vertexBindingDescriptionCount);
    }
    if (src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[src.vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)src.pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*src.vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineVertexInputStateCreateInfo::~safe_VkPipelineVertexInputStateCreateInfo()
{
    if (pVertexBindingDescriptions)
        delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions)
        delete[] pVertexAttributeDescriptions;
}

void safe_VkPipelineVertexInputStateCreateInfo::initialize(const VkPipelineVertexInputStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    vertexBindingDescriptionCount = in_struct->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = in_struct->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)in_struct->pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*in_struct->vertexBindingDescriptionCount);
    }
    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)in_struct->pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*in_struct->vertexAttributeDescriptionCount);
    }
}

void safe_VkPipelineVertexInputStateCreateInfo::initialize(const safe_VkPipelineVertexInputStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    vertexBindingDescriptionCount = src->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = src->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (src->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[src->vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)src->pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*src->vertexBindingDescriptionCount);
    }
    if (src->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[src->vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)src->pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*src->vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    topology(in_struct->topology),
    primitiveRestartEnable(in_struct->primitiveRestartEnable)
{
}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo()
{}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo(const safe_VkPipelineInputAssemblyStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    topology = src.topology;
    primitiveRestartEnable = src.primitiveRestartEnable;
}

safe_VkPipelineInputAssemblyStateCreateInfo::~safe_VkPipelineInputAssemblyStateCreateInfo()
{
}

void safe_VkPipelineInputAssemblyStateCreateInfo::initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    topology = in_struct->topology;
    primitiveRestartEnable = in_struct->primitiveRestartEnable;
}

void safe_VkPipelineInputAssemblyStateCreateInfo::initialize(const safe_VkPipelineInputAssemblyStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    topology = src->topology;
    primitiveRestartEnable = src->primitiveRestartEnable;
}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    patchControlPoints(in_struct->patchControlPoints)
{
}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo()
{}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo(const safe_VkPipelineTessellationStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    patchControlPoints = src.patchControlPoints;
}

safe_VkPipelineTessellationStateCreateInfo::~safe_VkPipelineTessellationStateCreateInfo()
{
}

void safe_VkPipelineTessellationStateCreateInfo::initialize(const VkPipelineTessellationStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    patchControlPoints = in_struct->patchControlPoints;
}

void safe_VkPipelineTessellationStateCreateInfo::initialize(const safe_VkPipelineTessellationStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    patchControlPoints = src->patchControlPoints;
}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    viewportCount(in_struct->viewportCount),
    pViewports(nullptr),
    scissorCount(in_struct->scissorCount),
    pScissors(nullptr)
{
    if (in_struct->pViewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy ((void *)pViewports, (void *)in_struct->pViewports, sizeof(VkViewport)*in_struct->viewportCount);
    }
    if (in_struct->pScissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy ((void *)pScissors, (void *)in_struct->pScissors, sizeof(VkRect2D)*in_struct->scissorCount);
    }
}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo() :
    pViewports(nullptr),
    pScissors(nullptr)
{}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo(const safe_VkPipelineViewportStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    viewportCount = src.viewportCount;
    pViewports = nullptr;
    scissorCount = src.scissorCount;
    pScissors = nullptr;
    if (src.pViewports) {
        pViewports = new VkViewport[src.viewportCount];
        memcpy ((void *)pViewports, (void *)src.pViewports, sizeof(VkViewport)*src.viewportCount);
    }
    if (src.pScissors) {
        pScissors = new VkRect2D[src.scissorCount];
        memcpy ((void *)pScissors, (void *)src.pScissors, sizeof(VkRect2D)*src.scissorCount);
    }
}

safe_VkPipelineViewportStateCreateInfo::~safe_VkPipelineViewportStateCreateInfo()
{
    if (pViewports)
        delete[] pViewports;
    if (pScissors)
        delete[] pScissors;
}

void safe_VkPipelineViewportStateCreateInfo::initialize(const VkPipelineViewportStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewports = nullptr;
    scissorCount = in_struct->scissorCount;
    pScissors = nullptr;
    if (in_struct->pViewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy ((void *)pViewports, (void *)in_struct->pViewports, sizeof(VkViewport)*in_struct->viewportCount);
    }
    if (in_struct->pScissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy ((void *)pScissors, (void *)in_struct->pScissors, sizeof(VkRect2D)*in_struct->scissorCount);
    }
}

void safe_VkPipelineViewportStateCreateInfo::initialize(const safe_VkPipelineViewportStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    viewportCount = src->viewportCount;
    pViewports = nullptr;
    scissorCount = src->scissorCount;
    pScissors = nullptr;
    if (src->pViewports) {
        pViewports = new VkViewport[src->viewportCount];
        memcpy ((void *)pViewports, (void *)src->pViewports, sizeof(VkViewport)*src->viewportCount);
    }
    if (src->pScissors) {
        pScissors = new VkRect2D[src->scissorCount];
        memcpy ((void *)pScissors, (void *)src->pScissors, sizeof(VkRect2D)*src->scissorCount);
    }
}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    depthClampEnable(in_struct->depthClampEnable),
    rasterizerDiscardEnable(in_struct->rasterizerDiscardEnable),
    polygonMode(in_struct->polygonMode),
    cullMode(in_struct->cullMode),
    frontFace(in_struct->frontFace),
    depthBiasEnable(in_struct->depthBiasEnable),
    depthBiasConstantFactor(in_struct->depthBiasConstantFactor),
    depthBiasClamp(in_struct->depthBiasClamp),
    depthBiasSlopeFactor(in_struct->depthBiasSlopeFactor),
    lineWidth(in_struct->lineWidth)
{
}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo()
{}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo(const safe_VkPipelineRasterizationStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    depthClampEnable = src.depthClampEnable;
    rasterizerDiscardEnable = src.rasterizerDiscardEnable;
    polygonMode = src.polygonMode;
    cullMode = src.cullMode;
    frontFace = src.frontFace;
    depthBiasEnable = src.depthBiasEnable;
    depthBiasConstantFactor = src.depthBiasConstantFactor;
    depthBiasClamp = src.depthBiasClamp;
    depthBiasSlopeFactor = src.depthBiasSlopeFactor;
    lineWidth = src.lineWidth;
}

safe_VkPipelineRasterizationStateCreateInfo::~safe_VkPipelineRasterizationStateCreateInfo()
{
}

void safe_VkPipelineRasterizationStateCreateInfo::initialize(const VkPipelineRasterizationStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    depthClampEnable = in_struct->depthClampEnable;
    rasterizerDiscardEnable = in_struct->rasterizerDiscardEnable;
    polygonMode = in_struct->polygonMode;
    cullMode = in_struct->cullMode;
    frontFace = in_struct->frontFace;
    depthBiasEnable = in_struct->depthBiasEnable;
    depthBiasConstantFactor = in_struct->depthBiasConstantFactor;
    depthBiasClamp = in_struct->depthBiasClamp;
    depthBiasSlopeFactor = in_struct->depthBiasSlopeFactor;
    lineWidth = in_struct->lineWidth;
}

void safe_VkPipelineRasterizationStateCreateInfo::initialize(const safe_VkPipelineRasterizationStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    depthClampEnable = src->depthClampEnable;
    rasterizerDiscardEnable = src->rasterizerDiscardEnable;
    polygonMode = src->polygonMode;
    cullMode = src->cullMode;
    frontFace = src->frontFace;
    depthBiasEnable = src->depthBiasEnable;
    depthBiasConstantFactor = src->depthBiasConstantFactor;
    depthBiasClamp = src->depthBiasClamp;
    depthBiasSlopeFactor = src->depthBiasSlopeFactor;
    lineWidth = src->lineWidth;
}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    rasterizationSamples(in_struct->rasterizationSamples),
    sampleShadingEnable(in_struct->sampleShadingEnable),
    minSampleShading(in_struct->minSampleShading),
    pSampleMask(nullptr),
    alphaToCoverageEnable(in_struct->alphaToCoverageEnable),
    alphaToOneEnable(in_struct->alphaToOneEnable)
{
    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo() :
    pSampleMask(nullptr)
{}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo(const safe_VkPipelineMultisampleStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    rasterizationSamples = src.rasterizationSamples;
    sampleShadingEnable = src.sampleShadingEnable;
    minSampleShading = src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = src.alphaToCoverageEnable;
    alphaToOneEnable = src.alphaToOneEnable;
    if (src.pSampleMask) {
        pSampleMask = new VkSampleMask(*src.pSampleMask);
    }
}

safe_VkPipelineMultisampleStateCreateInfo::~safe_VkPipelineMultisampleStateCreateInfo()
{
    if (pSampleMask)
        delete pSampleMask;
}

void safe_VkPipelineMultisampleStateCreateInfo::initialize(const VkPipelineMultisampleStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    rasterizationSamples = in_struct->rasterizationSamples;
    sampleShadingEnable = in_struct->sampleShadingEnable;
    minSampleShading = in_struct->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = in_struct->alphaToCoverageEnable;
    alphaToOneEnable = in_struct->alphaToOneEnable;
    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

void safe_VkPipelineMultisampleStateCreateInfo::initialize(const safe_VkPipelineMultisampleStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    rasterizationSamples = src->rasterizationSamples;
    sampleShadingEnable = src->sampleShadingEnable;
    minSampleShading = src->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = src->alphaToCoverageEnable;
    alphaToOneEnable = src->alphaToOneEnable;
    if (src->pSampleMask) {
        pSampleMask = new VkSampleMask(*src->pSampleMask);
    }
}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    depthTestEnable(in_struct->depthTestEnable),
    depthWriteEnable(in_struct->depthWriteEnable),
    depthCompareOp(in_struct->depthCompareOp),
    depthBoundsTestEnable(in_struct->depthBoundsTestEnable),
    stencilTestEnable(in_struct->stencilTestEnable),
    front(in_struct->front),
    back(in_struct->back),
    minDepthBounds(in_struct->minDepthBounds),
    maxDepthBounds(in_struct->maxDepthBounds)
{
}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo()
{}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo(const safe_VkPipelineDepthStencilStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    depthTestEnable = src.depthTestEnable;
    depthWriteEnable = src.depthWriteEnable;
    depthCompareOp = src.depthCompareOp;
    depthBoundsTestEnable = src.depthBoundsTestEnable;
    stencilTestEnable = src.stencilTestEnable;
    front = src.front;
    back = src.back;
    minDepthBounds = src.minDepthBounds;
    maxDepthBounds = src.maxDepthBounds;
}

safe_VkPipelineDepthStencilStateCreateInfo::~safe_VkPipelineDepthStencilStateCreateInfo()
{
}

void safe_VkPipelineDepthStencilStateCreateInfo::initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    depthTestEnable = in_struct->depthTestEnable;
    depthWriteEnable = in_struct->depthWriteEnable;
    depthCompareOp = in_struct->depthCompareOp;
    depthBoundsTestEnable = in_struct->depthBoundsTestEnable;
    stencilTestEnable = in_struct->stencilTestEnable;
    front = in_struct->front;
    back = in_struct->back;
    minDepthBounds = in_struct->minDepthBounds;
    maxDepthBounds = in_struct->maxDepthBounds;
}

void safe_VkPipelineDepthStencilStateCreateInfo::initialize(const safe_VkPipelineDepthStencilStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    depthTestEnable = src->depthTestEnable;
    depthWriteEnable = src->depthWriteEnable;
    depthCompareOp = src->depthCompareOp;
    depthBoundsTestEnable = src->depthBoundsTestEnable;
    stencilTestEnable = src->stencilTestEnable;
    front = src->front;
    back = src->back;
    minDepthBounds = src->minDepthBounds;
    maxDepthBounds = src->maxDepthBounds;
}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    logicOpEnable(in_struct->logicOpEnable),
    logicOp(in_struct->logicOp),
    attachmentCount(in_struct->attachmentCount),
    pAttachments(nullptr)
{
    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*in_struct->attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo() :
    pAttachments(nullptr)
{}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo(const safe_VkPipelineColorBlendStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    logicOpEnable = src.logicOpEnable;
    logicOp = src.logicOp;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    if (src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[src.attachmentCount];
        memcpy ((void *)pAttachments, (void *)src.pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*src.attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = src.blendConstants[i];
    }
}

safe_VkPipelineColorBlendStateCreateInfo::~safe_VkPipelineColorBlendStateCreateInfo()
{
    if (pAttachments)
        delete[] pAttachments;
}

void safe_VkPipelineColorBlendStateCreateInfo::initialize(const VkPipelineColorBlendStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    logicOpEnable = in_struct->logicOpEnable;
    logicOp = in_struct->logicOp;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*in_struct->attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

void safe_VkPipelineColorBlendStateCreateInfo::initialize(const safe_VkPipelineColorBlendStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    logicOpEnable = src->logicOpEnable;
    logicOp = src->logicOp;
    attachmentCount = src->attachmentCount;
    pAttachments = nullptr;
    if (src->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[src->attachmentCount];
        memcpy ((void *)pAttachments, (void *)src->pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*src->attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = src->blendConstants[i];
    }
}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    dynamicStateCount(in_struct->dynamicStateCount),
    pDynamicStates(nullptr)
{
    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)in_struct->pDynamicStates, sizeof(VkDynamicState)*in_struct->dynamicStateCount);
    }
}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo() :
    pDynamicStates(nullptr)
{}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo(const safe_VkPipelineDynamicStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    dynamicStateCount = src.dynamicStateCount;
    pDynamicStates = nullptr;
    if (src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[src.dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)src.pDynamicStates, sizeof(VkDynamicState)*src.dynamicStateCount);
    }
}

safe_VkPipelineDynamicStateCreateInfo::~safe_VkPipelineDynamicStateCreateInfo()
{
    if (pDynamicStates)
        delete[] pDynamicStates;
}

void safe_VkPipelineDynamicStateCreateInfo::initialize(const VkPipelineDynamicStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    dynamicStateCount = in_struct->dynamicStateCount;
    pDynamicStates = nullptr;
    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)in_struct->pDynamicStates, sizeof(VkDynamicState)*in_struct->dynamicStateCount);
    }
}

void safe_VkPipelineDynamicStateCreateInfo::initialize(const safe_VkPipelineDynamicStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    dynamicStateCount = src->dynamicStateCount;
    pDynamicStates = nullptr;
    if (src->pDynamicStates) {
        pDynamicStates = new VkDynamicState[src->dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)src->pDynamicStates, sizeof(VkDynamicState)*src->dynamicStateCount);
    }
}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    stageCount(in_struct->stageCount),
    pStages(nullptr),
    layout(in_struct->layout),
    renderPass(in_struct->renderPass),
    subpass(in_struct->subpass),
    basePipelineHandle(in_struct->basePipelineHandle),
    basePipelineIndex(in_struct->basePipelineIndex)
{
    if (stageCount && in_struct->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = NULL;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    if (in_struct->pTessellationState)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = NULL;
    if (in_struct->pViewportState)
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(in_struct->pViewportState);
    else
        pViewportState = NULL;
    if (in_struct->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = NULL;
    if (in_struct->pMultisampleState)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = NULL;
    if (in_struct->pDepthStencilState)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = NULL;
    if (in_struct->pColorBlendState)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = NULL;
    if (in_struct->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = NULL;
}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo() :
    pStages(nullptr)
{}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo(const safe_VkGraphicsPipelineCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stageCount = src.stageCount;
    pStages = nullptr;
    layout = src.layout;
    renderPass = src.renderPass;
    subpass = src.subpass;
    basePipelineHandle = src.basePipelineHandle;
    basePipelineIndex = src.basePipelineIndex;
    if (stageCount && src.pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&src.pStages[i]);
        }
    }
    if (src.pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*src.pVertexInputState);
    else
        pVertexInputState = NULL;
    if (src.pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*src.pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    if (src.pTessellationState)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*src.pTessellationState);
    else
        pTessellationState = NULL;
    if (src.pViewportState)
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*src.pViewportState);
    else
        pViewportState = NULL;
    if (src.pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*src.pRasterizationState);
    else
        pRasterizationState = NULL;
    if (src.pMultisampleState)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*src.pMultisampleState);
    else
        pMultisampleState = NULL;
    if (src.pDepthStencilState)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*src.pDepthStencilState);
    else
        pDepthStencilState = NULL;
    if (src.pColorBlendState)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*src.pColorBlendState);
    else
        pColorBlendState = NULL;
    if (src.pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*src.pDynamicState);
    else
        pDynamicState = NULL;
}

safe_VkGraphicsPipelineCreateInfo::~safe_VkGraphicsPipelineCreateInfo()
{
    if (pStages)
        delete[] pStages;
    if (pVertexInputState)
        delete pVertexInputState;
    if (pInputAssemblyState)
        delete pInputAssemblyState;
    if (pTessellationState)
        delete pTessellationState;
    if (pViewportState)
        delete pViewportState;
    if (pRasterizationState)
        delete pRasterizationState;
    if (pMultisampleState)
        delete pMultisampleState;
    if (pDepthStencilState)
        delete pDepthStencilState;
    if (pColorBlendState)
        delete pColorBlendState;
    if (pDynamicState)
        delete pDynamicState;
}

void safe_VkGraphicsPipelineCreateInfo::initialize(const VkGraphicsPipelineCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    layout = in_struct->layout;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    if (stageCount && in_struct->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = NULL;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    if (in_struct->pTessellationState)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = NULL;
    if (in_struct->pViewportState)
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(in_struct->pViewportState);
    else
        pViewportState = NULL;
    if (in_struct->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = NULL;
    if (in_struct->pMultisampleState)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = NULL;
    if (in_struct->pDepthStencilState)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = NULL;
    if (in_struct->pColorBlendState)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = NULL;
    if (in_struct->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = NULL;
}

void safe_VkGraphicsPipelineCreateInfo::initialize(const safe_VkGraphicsPipelineCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    stageCount = src->stageCount;
    pStages = nullptr;
    layout = src->layout;
    renderPass = src->renderPass;
    subpass = src->subpass;
    basePipelineHandle = src->basePipelineHandle;
    basePipelineIndex = src->basePipelineIndex;
    if (stageCount && src->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&src->pStages[i]);
        }
    }
    if (src->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*src->pVertexInputState);
    else
        pVertexInputState = NULL;
    if (src->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*src->pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    if (src->pTessellationState)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*src->pTessellationState);
    else
        pTessellationState = NULL;
    if (src->pViewportState)
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*src->pViewportState);
    else
        pViewportState = NULL;
    if (src->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*src->pRasterizationState);
    else
        pRasterizationState = NULL;
    if (src->pMultisampleState)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*src->pMultisampleState);
    else
        pMultisampleState = NULL;
    if (src->pDepthStencilState)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*src->pDepthStencilState);
    else
        pDepthStencilState = NULL;
    if (src->pColorBlendState)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*src->pColorBlendState);
    else
        pColorBlendState = NULL;
    if (src->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*src->pDynamicState);
    else
        pDynamicState = NULL;
}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    stage(&in_struct->stage),
    layout(in_struct->layout),
    basePipelineHandle(in_struct->basePipelineHandle),
    basePipelineIndex(in_struct->basePipelineIndex)
{
}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo()
{}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo(const safe_VkComputePipelineCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stage.initialize(&src.stage);
    layout = src.layout;
    basePipelineHandle = src.basePipelineHandle;
    basePipelineIndex = src.basePipelineIndex;
}

safe_VkComputePipelineCreateInfo::~safe_VkComputePipelineCreateInfo()
{
}

void safe_VkComputePipelineCreateInfo::initialize(const VkComputePipelineCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    stage.initialize(&in_struct->stage);
    layout = in_struct->layout;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
}

void safe_VkComputePipelineCreateInfo::initialize(const safe_VkComputePipelineCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    stage.initialize(&src->stage);
    layout = src->layout;
    basePipelineHandle = src->basePipelineHandle;
    basePipelineIndex = src->basePipelineIndex;
}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    setLayoutCount(in_struct->setLayoutCount),
    pSetLayouts(nullptr),
    pushConstantRangeCount(in_struct->pushConstantRangeCount),
    pPushConstantRanges(nullptr)
{
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)in_struct->pPushConstantRanges, sizeof(VkPushConstantRange)*in_struct->pushConstantRangeCount);
    }
}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo() :
    pSetLayouts(nullptr),
    pPushConstantRanges(nullptr)
{}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo(const safe_VkPipelineLayoutCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    setLayoutCount = src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = src.pSetLayouts[i];
        }
    }
    if (src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[src.pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)src.pPushConstantRanges, sizeof(VkPushConstantRange)*src.pushConstantRangeCount);
    }
}

safe_VkPipelineLayoutCreateInfo::~safe_VkPipelineLayoutCreateInfo()
{
    if (pSetLayouts)
        delete[] pSetLayouts;
    if (pPushConstantRanges)
        delete[] pPushConstantRanges;
}

void safe_VkPipelineLayoutCreateInfo::initialize(const VkPipelineLayoutCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    setLayoutCount = in_struct->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = in_struct->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)in_struct->pPushConstantRanges, sizeof(VkPushConstantRange)*in_struct->pushConstantRangeCount);
    }
}

void safe_VkPipelineLayoutCreateInfo::initialize(const safe_VkPipelineLayoutCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    setLayoutCount = src->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = src->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = src->pSetLayouts[i];
        }
    }
    if (src->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[src->pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)src->pPushConstantRanges, sizeof(VkPushConstantRange)*src->pushConstantRangeCount);
    }
}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo(const VkSamplerCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    magFilter(in_struct->magFilter),
    minFilter(in_struct->minFilter),
    mipmapMode(in_struct->mipmapMode),
    addressModeU(in_struct->addressModeU),
    addressModeV(in_struct->addressModeV),
    addressModeW(in_struct->addressModeW),
    mipLodBias(in_struct->mipLodBias),
    anisotropyEnable(in_struct->anisotropyEnable),
    maxAnisotropy(in_struct->maxAnisotropy),
    compareEnable(in_struct->compareEnable),
    compareOp(in_struct->compareOp),
    minLod(in_struct->minLod),
    maxLod(in_struct->maxLod),
    borderColor(in_struct->borderColor),
    unnormalizedCoordinates(in_struct->unnormalizedCoordinates)
{
}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo()
{}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo(const safe_VkSamplerCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    magFilter = src.magFilter;
    minFilter = src.minFilter;
    mipmapMode = src.mipmapMode;
    addressModeU = src.addressModeU;
    addressModeV = src.addressModeV;
    addressModeW = src.addressModeW;
    mipLodBias = src.mipLodBias;
    anisotropyEnable = src.anisotropyEnable;
    maxAnisotropy = src.maxAnisotropy;
    compareEnable = src.compareEnable;
    compareOp = src.compareOp;
    minLod = src.minLod;
    maxLod = src.maxLod;
    borderColor = src.borderColor;
    unnormalizedCoordinates = src.unnormalizedCoordinates;
}

safe_VkSamplerCreateInfo::~safe_VkSamplerCreateInfo()
{
}

void safe_VkSamplerCreateInfo::initialize(const VkSamplerCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    magFilter = in_struct->magFilter;
    minFilter = in_struct->minFilter;
    mipmapMode = in_struct->mipmapMode;
    addressModeU = in_struct->addressModeU;
    addressModeV = in_struct->addressModeV;
    addressModeW = in_struct->addressModeW;
    mipLodBias = in_struct->mipLodBias;
    anisotropyEnable = in_struct->anisotropyEnable;
    maxAnisotropy = in_struct->maxAnisotropy;
    compareEnable = in_struct->compareEnable;
    compareOp = in_struct->compareOp;
    minLod = in_struct->minLod;
    maxLod = in_struct->maxLod;
    borderColor = in_struct->borderColor;
    unnormalizedCoordinates = in_struct->unnormalizedCoordinates;
}

void safe_VkSamplerCreateInfo::initialize(const safe_VkSamplerCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    magFilter = src->magFilter;
    minFilter = src->minFilter;
    mipmapMode = src->mipmapMode;
    addressModeU = src->addressModeU;
    addressModeV = src->addressModeV;
    addressModeW = src->addressModeW;
    mipLodBias = src->mipLodBias;
    anisotropyEnable = src->anisotropyEnable;
    maxAnisotropy = src->maxAnisotropy;
    compareEnable = src->compareEnable;
    compareOp = src->compareOp;
    minLod = src->minLod;
    maxLod = src->maxLod;
    borderColor = src->borderColor;
    unnormalizedCoordinates = src->unnormalizedCoordinates;
}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct) :
    binding(in_struct->binding),
    descriptorType(in_struct->descriptorType),
    descriptorCount(in_struct->descriptorCount),
    stageFlags(in_struct->stageFlags),
    pImmutableSamplers(nullptr)
{
    if (descriptorCount && in_struct->pImmutableSamplers) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding() :
    pImmutableSamplers(nullptr)
{}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding(const safe_VkDescriptorSetLayoutBinding& src)
{
    binding = src.binding;
    descriptorType = src.descriptorType;
    descriptorCount = src.descriptorCount;
    stageFlags = src.stageFlags;
    pImmutableSamplers = nullptr;
    if (descriptorCount && src.pImmutableSamplers) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = src.pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding::~safe_VkDescriptorSetLayoutBinding()
{
    if (pImmutableSamplers)
        delete[] pImmutableSamplers;
}

void safe_VkDescriptorSetLayoutBinding::initialize(const VkDescriptorSetLayoutBinding* in_struct)
{
    binding = in_struct->binding;
    descriptorType = in_struct->descriptorType;
    descriptorCount = in_struct->descriptorCount;
    stageFlags = in_struct->stageFlags;
    pImmutableSamplers = nullptr;
    if (descriptorCount && in_struct->pImmutableSamplers) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

void safe_VkDescriptorSetLayoutBinding::initialize(const safe_VkDescriptorSetLayoutBinding* src)
{
    binding = src->binding;
    descriptorType = src->descriptorType;
    descriptorCount = src->descriptorCount;
    stageFlags = src->stageFlags;
    pImmutableSamplers = nullptr;
    if (descriptorCount && src->pImmutableSamplers) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = src->pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    bindingCount(in_struct->bindingCount),
    pBindings(nullptr)
{
    if (bindingCount && in_struct->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo() :
    pBindings(nullptr)
{}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo(const safe_VkDescriptorSetLayoutCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    bindingCount = src.bindingCount;
    pBindings = nullptr;
    if (bindingCount && src.pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&src.pBindings[i]);
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::~safe_VkDescriptorSetLayoutCreateInfo()
{
    if (pBindings)
        delete[] pBindings;
}

void safe_VkDescriptorSetLayoutCreateInfo::initialize(const VkDescriptorSetLayoutCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    bindingCount = in_struct->bindingCount;
    pBindings = nullptr;
    if (bindingCount && in_struct->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

void safe_VkDescriptorSetLayoutCreateInfo::initialize(const safe_VkDescriptorSetLayoutCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    bindingCount = src->bindingCount;
    pBindings = nullptr;
    if (bindingCount && src->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&src->pBindings[i]);
        }
    }
}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    maxSets(in_struct->maxSets),
    poolSizeCount(in_struct->poolSizeCount),
    pPoolSizes(nullptr)
{
    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize)*in_struct->poolSizeCount);
    }
}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo() :
    pPoolSizes(nullptr)
{}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo(const safe_VkDescriptorPoolCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    maxSets = src.maxSets;
    poolSizeCount = src.poolSizeCount;
    pPoolSizes = nullptr;
    if (src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[src.poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)src.pPoolSizes, sizeof(VkDescriptorPoolSize)*src.poolSizeCount);
    }
}

safe_VkDescriptorPoolCreateInfo::~safe_VkDescriptorPoolCreateInfo()
{
    if (pPoolSizes)
        delete[] pPoolSizes;
}

void safe_VkDescriptorPoolCreateInfo::initialize(const VkDescriptorPoolCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    maxSets = in_struct->maxSets;
    poolSizeCount = in_struct->poolSizeCount;
    pPoolSizes = nullptr;
    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize)*in_struct->poolSizeCount);
    }
}

void safe_VkDescriptorPoolCreateInfo::initialize(const safe_VkDescriptorPoolCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    maxSets = src->maxSets;
    poolSizeCount = src->poolSizeCount;
    pPoolSizes = nullptr;
    if (src->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[src->poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)src->pPoolSizes, sizeof(VkDescriptorPoolSize)*src->poolSizeCount);
    }
}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    descriptorPool(in_struct->descriptorPool),
    descriptorSetCount(in_struct->descriptorSetCount),
    pSetLayouts(nullptr)
{
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo() :
    pSetLayouts(nullptr)
{}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo(const safe_VkDescriptorSetAllocateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    descriptorPool = src.descriptorPool;
    descriptorSetCount = src.descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = src.pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetAllocateInfo::~safe_VkDescriptorSetAllocateInfo()
{
    if (pSetLayouts)
        delete[] pSetLayouts;
}

void safe_VkDescriptorSetAllocateInfo::initialize(const VkDescriptorSetAllocateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    descriptorPool = in_struct->descriptorPool;
    descriptorSetCount = in_struct->descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

void safe_VkDescriptorSetAllocateInfo::initialize(const safe_VkDescriptorSetAllocateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    descriptorPool = src->descriptorPool;
    descriptorSetCount = src->descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = src->pSetLayouts[i];
        }
    }
}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet(const VkWriteDescriptorSet* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    dstSet(in_struct->dstSet),
    dstBinding(in_struct->dstBinding),
    dstArrayElement(in_struct->dstArrayElement),
    descriptorCount(in_struct->descriptorCount),
    descriptorType(in_struct->descriptorType),
    pImageInfo(nullptr),
    pBufferInfo(nullptr),
    pTexelBufferView(nullptr)
{
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && in_struct->pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = in_struct->pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && in_struct->pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = in_struct->pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && in_struct->pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = in_struct->pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet() :
    pImageInfo(nullptr),
    pBufferInfo(nullptr),
    pTexelBufferView(nullptr)
{}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet(const safe_VkWriteDescriptorSet& src)
{
    sType = src.sType;
    pNext = src.pNext;
    dstSet = src.dstSet;
    dstBinding = src.dstBinding;
    dstArrayElement = src.dstArrayElement;
    descriptorCount = src.descriptorCount;
    descriptorType = src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && src.pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = src.pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && src.pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = src.pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && src.pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = src.pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

safe_VkWriteDescriptorSet::~safe_VkWriteDescriptorSet()
{
    if (pImageInfo)
        delete[] pImageInfo;
    if (pBufferInfo)
        delete[] pBufferInfo;
    if (pTexelBufferView)
        delete[] pTexelBufferView;
}

void safe_VkWriteDescriptorSet::initialize(const VkWriteDescriptorSet* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
    descriptorType = in_struct->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && in_struct->pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = in_struct->pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && in_struct->pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = in_struct->pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && in_struct->pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = in_struct->pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

void safe_VkWriteDescriptorSet::initialize(const safe_VkWriteDescriptorSet* src)
{
    sType = src->sType;
    pNext = src->pNext;
    dstSet = src->dstSet;
    dstBinding = src->dstBinding;
    dstArrayElement = src->dstArrayElement;
    descriptorCount = src->descriptorCount;
    descriptorType = src->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && src->pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = src->pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && src->pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = src->pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && src->pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = src->pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet(const VkCopyDescriptorSet* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcSet(in_struct->srcSet),
    srcBinding(in_struct->srcBinding),
    srcArrayElement(in_struct->srcArrayElement),
    dstSet(in_struct->dstSet),
    dstBinding(in_struct->dstBinding),
    dstArrayElement(in_struct->dstArrayElement),
    descriptorCount(in_struct->descriptorCount)
{
}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet()
{}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet(const safe_VkCopyDescriptorSet& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcSet = src.srcSet;
    srcBinding = src.srcBinding;
    srcArrayElement = src.srcArrayElement;
    dstSet = src.dstSet;
    dstBinding = src.dstBinding;
    dstArrayElement = src.dstArrayElement;
    descriptorCount = src.descriptorCount;
}

safe_VkCopyDescriptorSet::~safe_VkCopyDescriptorSet()
{
}

void safe_VkCopyDescriptorSet::initialize(const VkCopyDescriptorSet* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcSet = in_struct->srcSet;
    srcBinding = in_struct->srcBinding;
    srcArrayElement = in_struct->srcArrayElement;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
}

void safe_VkCopyDescriptorSet::initialize(const safe_VkCopyDescriptorSet* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcSet = src->srcSet;
    srcBinding = src->srcBinding;
    srcArrayElement = src->srcArrayElement;
    dstSet = src->dstSet;
    dstBinding = src->dstBinding;
    dstArrayElement = src->dstArrayElement;
    descriptorCount = src->descriptorCount;
}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    renderPass(in_struct->renderPass),
    attachmentCount(in_struct->attachmentCount),
    pAttachments(nullptr),
    width(in_struct->width),
    height(in_struct->height),
    layers(in_struct->layers)
{
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo() :
    pAttachments(nullptr)
{}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo(const safe_VkFramebufferCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    renderPass = src.renderPass;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    width = src.width;
    height = src.height;
    layers = src.layers;
    if (attachmentCount && src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = src.pAttachments[i];
        }
    }
}

safe_VkFramebufferCreateInfo::~safe_VkFramebufferCreateInfo()
{
    if (pAttachments)
        delete[] pAttachments;
}

void safe_VkFramebufferCreateInfo::initialize(const VkFramebufferCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    renderPass = in_struct->renderPass;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    width = in_struct->width;
    height = in_struct->height;
    layers = in_struct->layers;
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

void safe_VkFramebufferCreateInfo::initialize(const safe_VkFramebufferCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    renderPass = src->renderPass;
    attachmentCount = src->attachmentCount;
    pAttachments = nullptr;
    width = src->width;
    height = src->height;
    layers = src->layers;
    if (attachmentCount && src->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = src->pAttachments[i];
        }
    }
}

safe_VkSubpassDescription::safe_VkSubpassDescription(const VkSubpassDescription* in_struct) :
    flags(in_struct->flags),
    pipelineBindPoint(in_struct->pipelineBindPoint),
    inputAttachmentCount(in_struct->inputAttachmentCount),
    pInputAttachments(nullptr),
    colorAttachmentCount(in_struct->colorAttachmentCount),
    pColorAttachments(nullptr),
    pResolveAttachments(nullptr),
    pDepthStencilAttachment(nullptr),
    preserveAttachmentCount(in_struct->preserveAttachmentCount),
    pPreserveAttachments(nullptr)
{
    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)in_struct->pInputAttachments, sizeof(VkAttachmentReference)*in_struct->inputAttachmentCount);
    }
    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)in_struct->pColorAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)in_struct->pResolveAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }
    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)in_struct->pPreserveAttachments, sizeof(uint32_t)*in_struct->preserveAttachmentCount);
    }
}

safe_VkSubpassDescription::safe_VkSubpassDescription() :
    pInputAttachments(nullptr),
    pColorAttachments(nullptr),
    pResolveAttachments(nullptr),
    pDepthStencilAttachment(nullptr),
    pPreserveAttachments(nullptr)
{}

safe_VkSubpassDescription::safe_VkSubpassDescription(const safe_VkSubpassDescription& src)
{
    flags = src.flags;
    pipelineBindPoint = src.pipelineBindPoint;
    inputAttachmentCount = src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[src.inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)src.pInputAttachments, sizeof(VkAttachmentReference)*src.inputAttachmentCount);
    }
    if (src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[src.colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)src.pColorAttachments, sizeof(VkAttachmentReference)*src.colorAttachmentCount);
    }
    if (src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[src.colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)src.pResolveAttachments, sizeof(VkAttachmentReference)*src.colorAttachmentCount);
    }
    if (src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*src.pDepthStencilAttachment);
    }
    if (src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[src.preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)src.pPreserveAttachments, sizeof(uint32_t)*src.preserveAttachmentCount);
    }
}

safe_VkSubpassDescription::~safe_VkSubpassDescription()
{
    if (pInputAttachments)
        delete[] pInputAttachments;
    if (pColorAttachments)
        delete[] pColorAttachments;
    if (pResolveAttachments)
        delete[] pResolveAttachments;
    if (pDepthStencilAttachment)
        delete pDepthStencilAttachment;
    if (pPreserveAttachments)
        delete[] pPreserveAttachments;
}

void safe_VkSubpassDescription::initialize(const VkSubpassDescription* in_struct)
{
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    inputAttachmentCount = in_struct->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = in_struct->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)in_struct->pInputAttachments, sizeof(VkAttachmentReference)*in_struct->inputAttachmentCount);
    }
    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)in_struct->pColorAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)in_struct->pResolveAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }
    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)in_struct->pPreserveAttachments, sizeof(uint32_t)*in_struct->preserveAttachmentCount);
    }
}

void safe_VkSubpassDescription::initialize(const safe_VkSubpassDescription* src)
{
    flags = src->flags;
    pipelineBindPoint = src->pipelineBindPoint;
    inputAttachmentCount = src->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = src->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (src->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[src->inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)src->pInputAttachments, sizeof(VkAttachmentReference)*src->inputAttachmentCount);
    }
    if (src->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[src->colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)src->pColorAttachments, sizeof(VkAttachmentReference)*src->colorAttachmentCount);
    }
    if (src->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[src->colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)src->pResolveAttachments, sizeof(VkAttachmentReference)*src->colorAttachmentCount);
    }
    if (src->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*src->pDepthStencilAttachment);
    }
    if (src->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[src->preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)src->pPreserveAttachments, sizeof(uint32_t)*src->preserveAttachmentCount);
    }
}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    attachmentCount(in_struct->attachmentCount),
    pAttachments(nullptr),
    subpassCount(in_struct->subpassCount),
    pSubpasses(nullptr),
    dependencyCount(in_struct->dependencyCount),
    pDependencies(nullptr)
{
    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkAttachmentDescription)*in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy ((void *)pDependencies, (void *)in_struct->pDependencies, sizeof(VkSubpassDependency)*in_struct->dependencyCount);
    }
}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo() :
    pAttachments(nullptr),
    pSubpasses(nullptr),
    pDependencies(nullptr)
{}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo(const safe_VkRenderPassCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = src.dependencyCount;
    pDependencies = nullptr;
    if (src.pAttachments) {
        pAttachments = new VkAttachmentDescription[src.attachmentCount];
        memcpy ((void *)pAttachments, (void *)src.pAttachments, sizeof(VkAttachmentDescription)*src.attachmentCount);
    }
    if (subpassCount && src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&src.pSubpasses[i]);
        }
    }
    if (src.pDependencies) {
        pDependencies = new VkSubpassDependency[src.dependencyCount];
        memcpy ((void *)pDependencies, (void *)src.pDependencies, sizeof(VkSubpassDependency)*src.dependencyCount);
    }
}

safe_VkRenderPassCreateInfo::~safe_VkRenderPassCreateInfo()
{
    if (pAttachments)
        delete[] pAttachments;
    if (pSubpasses)
        delete[] pSubpasses;
    if (pDependencies)
        delete[] pDependencies;
}

void safe_VkRenderPassCreateInfo::initialize(const VkRenderPassCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    subpassCount = in_struct->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pDependencies = nullptr;
    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkAttachmentDescription)*in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy ((void *)pDependencies, (void *)in_struct->pDependencies, sizeof(VkSubpassDependency)*in_struct->dependencyCount);
    }
}

void safe_VkRenderPassCreateInfo::initialize(const safe_VkRenderPassCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    attachmentCount = src->attachmentCount;
    pAttachments = nullptr;
    subpassCount = src->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = src->dependencyCount;
    pDependencies = nullptr;
    if (src->pAttachments) {
        pAttachments = new VkAttachmentDescription[src->attachmentCount];
        memcpy ((void *)pAttachments, (void *)src->pAttachments, sizeof(VkAttachmentDescription)*src->attachmentCount);
    }
    if (subpassCount && src->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&src->pSubpasses[i]);
        }
    }
    if (src->pDependencies) {
        pDependencies = new VkSubpassDependency[src->dependencyCount];
        memcpy ((void *)pDependencies, (void *)src->pDependencies, sizeof(VkSubpassDependency)*src->dependencyCount);
    }
}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queueFamilyIndex(in_struct->queueFamilyIndex)
{
}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo()
{}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo(const safe_VkCommandPoolCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueFamilyIndex = src.queueFamilyIndex;
}

safe_VkCommandPoolCreateInfo::~safe_VkCommandPoolCreateInfo()
{
}

void safe_VkCommandPoolCreateInfo::initialize(const VkCommandPoolCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
}

void safe_VkCommandPoolCreateInfo::initialize(const safe_VkCommandPoolCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queueFamilyIndex = src->queueFamilyIndex;
}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    commandPool(in_struct->commandPool),
    level(in_struct->level),
    commandBufferCount(in_struct->commandBufferCount)
{
}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo()
{}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo(const safe_VkCommandBufferAllocateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    commandPool = src.commandPool;
    level = src.level;
    commandBufferCount = src.commandBufferCount;
}

safe_VkCommandBufferAllocateInfo::~safe_VkCommandBufferAllocateInfo()
{
}

void safe_VkCommandBufferAllocateInfo::initialize(const VkCommandBufferAllocateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    commandPool = in_struct->commandPool;
    level = in_struct->level;
    commandBufferCount = in_struct->commandBufferCount;
}

void safe_VkCommandBufferAllocateInfo::initialize(const safe_VkCommandBufferAllocateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    commandPool = src->commandPool;
    level = src->level;
    commandBufferCount = src->commandBufferCount;
}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    renderPass(in_struct->renderPass),
    subpass(in_struct->subpass),
    framebuffer(in_struct->framebuffer),
    occlusionQueryEnable(in_struct->occlusionQueryEnable),
    queryFlags(in_struct->queryFlags),
    pipelineStatistics(in_struct->pipelineStatistics)
{
}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo()
{}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo(const safe_VkCommandBufferInheritanceInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    renderPass = src.renderPass;
    subpass = src.subpass;
    framebuffer = src.framebuffer;
    occlusionQueryEnable = src.occlusionQueryEnable;
    queryFlags = src.queryFlags;
    pipelineStatistics = src.pipelineStatistics;
}

safe_VkCommandBufferInheritanceInfo::~safe_VkCommandBufferInheritanceInfo()
{
}

void safe_VkCommandBufferInheritanceInfo::initialize(const VkCommandBufferInheritanceInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    framebuffer = in_struct->framebuffer;
    occlusionQueryEnable = in_struct->occlusionQueryEnable;
    queryFlags = in_struct->queryFlags;
    pipelineStatistics = in_struct->pipelineStatistics;
}

void safe_VkCommandBufferInheritanceInfo::initialize(const safe_VkCommandBufferInheritanceInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    renderPass = src->renderPass;
    subpass = src->subpass;
    framebuffer = src->framebuffer;
    occlusionQueryEnable = src->occlusionQueryEnable;
    queryFlags = src->queryFlags;
    pipelineStatistics = src->pipelineStatistics;
}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
    if (in_struct->pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo()
{}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo(const safe_VkCommandBufferBeginInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    if (src.pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*src.pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

safe_VkCommandBufferBeginInfo::~safe_VkCommandBufferBeginInfo()
{
    if (pInheritanceInfo)
        delete pInheritanceInfo;
}

void safe_VkCommandBufferBeginInfo::initialize(const VkCommandBufferBeginInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    if (in_struct->pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

void safe_VkCommandBufferBeginInfo::initialize(const safe_VkCommandBufferBeginInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    if (src->pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*src->pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

safe_VkMemoryBarrier::safe_VkMemoryBarrier(const VkMemoryBarrier* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcAccessMask(in_struct->srcAccessMask),
    dstAccessMask(in_struct->dstAccessMask)
{
}

safe_VkMemoryBarrier::safe_VkMemoryBarrier()
{}

safe_VkMemoryBarrier::safe_VkMemoryBarrier(const safe_VkMemoryBarrier& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
}

safe_VkMemoryBarrier::~safe_VkMemoryBarrier()
{
}

void safe_VkMemoryBarrier::initialize(const VkMemoryBarrier* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
}

void safe_VkMemoryBarrier::initialize(const safe_VkMemoryBarrier* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcAccessMask = src->srcAccessMask;
    dstAccessMask = src->dstAccessMask;
}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcAccessMask(in_struct->srcAccessMask),
    dstAccessMask(in_struct->dstAccessMask),
    srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
    dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
    buffer(in_struct->buffer),
    offset(in_struct->offset),
    size(in_struct->size)
{
}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier()
{}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier(const safe_VkBufferMemoryBarrier& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
    srcQueueFamilyIndex = src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = src.dstQueueFamilyIndex;
    buffer = src.buffer;
    offset = src.offset;
    size = src.size;
}

safe_VkBufferMemoryBarrier::~safe_VkBufferMemoryBarrier()
{
}

void safe_VkBufferMemoryBarrier::initialize(const VkBufferMemoryBarrier* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
}

void safe_VkBufferMemoryBarrier::initialize(const safe_VkBufferMemoryBarrier* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcAccessMask = src->srcAccessMask;
    dstAccessMask = src->dstAccessMask;
    srcQueueFamilyIndex = src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = src->dstQueueFamilyIndex;
    buffer = src->buffer;
    offset = src->offset;
    size = src->size;
}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier(const VkImageMemoryBarrier* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcAccessMask(in_struct->srcAccessMask),
    dstAccessMask(in_struct->dstAccessMask),
    oldLayout(in_struct->oldLayout),
    newLayout(in_struct->newLayout),
    srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
    dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
    image(in_struct->image),
    subresourceRange(in_struct->subresourceRange)
{
}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier()
{}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier(const safe_VkImageMemoryBarrier& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
    oldLayout = src.oldLayout;
    newLayout = src.newLayout;
    srcQueueFamilyIndex = src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = src.dstQueueFamilyIndex;
    image = src.image;
    subresourceRange = src.subresourceRange;
}

safe_VkImageMemoryBarrier::~safe_VkImageMemoryBarrier()
{
}

void safe_VkImageMemoryBarrier::initialize(const VkImageMemoryBarrier* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    image = in_struct->image;
    subresourceRange = in_struct->subresourceRange;
}

void safe_VkImageMemoryBarrier::initialize(const safe_VkImageMemoryBarrier* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcAccessMask = src->srcAccessMask;
    dstAccessMask = src->dstAccessMask;
    oldLayout = src->oldLayout;
    newLayout = src->newLayout;
    srcQueueFamilyIndex = src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = src->dstQueueFamilyIndex;
    image = src->image;
    subresourceRange = src->subresourceRange;
}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    renderPass(in_struct->renderPass),
    framebuffer(in_struct->framebuffer),
    renderArea(in_struct->renderArea),
    clearValueCount(in_struct->clearValueCount),
    pClearValues(nullptr)
{
    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy ((void *)pClearValues, (void *)in_struct->pClearValues, sizeof(VkClearValue)*in_struct->clearValueCount);
    }
}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo() :
    pClearValues(nullptr)
{}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo(const safe_VkRenderPassBeginInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    renderPass = src.renderPass;
    framebuffer = src.framebuffer;
    renderArea = src.renderArea;
    clearValueCount = src.clearValueCount;
    pClearValues = nullptr;
    if (src.pClearValues) {
        pClearValues = new VkClearValue[src.clearValueCount];
        memcpy ((void *)pClearValues, (void *)src.pClearValues, sizeof(VkClearValue)*src.clearValueCount);
    }
}

safe_VkRenderPassBeginInfo::~safe_VkRenderPassBeginInfo()
{
    if (pClearValues)
        delete[] pClearValues;
}

void safe_VkRenderPassBeginInfo::initialize(const VkRenderPassBeginInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    renderPass = in_struct->renderPass;
    framebuffer = in_struct->framebuffer;
    renderArea = in_struct->renderArea;
    clearValueCount = in_struct->clearValueCount;
    pClearValues = nullptr;
    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy ((void *)pClearValues, (void *)in_struct->pClearValues, sizeof(VkClearValue)*in_struct->clearValueCount);
    }
}

void safe_VkRenderPassBeginInfo::initialize(const safe_VkRenderPassBeginInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    renderPass = src->renderPass;
    framebuffer = src->framebuffer;
    renderArea = src->renderArea;
    clearValueCount = src->clearValueCount;
    pClearValues = nullptr;
    if (src->pClearValues) {
        pClearValues = new VkClearValue[src->clearValueCount];
        memcpy ((void *)pClearValues, (void *)src->pClearValues, sizeof(VkClearValue)*src->clearValueCount);
    }
}

safe_VkSwapchainCreateInfoKHR::safe_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    surface(in_struct->surface),
    minImageCount(in_struct->minImageCount),
    imageFormat(in_struct->imageFormat),
    imageColorSpace(in_struct->imageColorSpace),
    imageExtent(in_struct->imageExtent),
    imageArrayLayers(in_struct->imageArrayLayers),
    imageUsage(in_struct->imageUsage),
    imageSharingMode(in_struct->imageSharingMode),
    queueFamilyIndexCount(in_struct->queueFamilyIndexCount),
    pQueueFamilyIndices(nullptr),
    preTransform(in_struct->preTransform),
    compositeAlpha(in_struct->compositeAlpha),
    presentMode(in_struct->presentMode),
    clipped(in_struct->clipped),
    oldSwapchain(in_struct->oldSwapchain)
{
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

safe_VkSwapchainCreateInfoKHR::safe_VkSwapchainCreateInfoKHR() :
    pQueueFamilyIndices(nullptr)
{}

safe_VkSwapchainCreateInfoKHR::safe_VkSwapchainCreateInfoKHR(const safe_VkSwapchainCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    surface = src.surface;
    minImageCount = src.minImageCount;
    imageFormat = src.imageFormat;
    imageColorSpace = src.imageColorSpace;
    imageExtent = src.imageExtent;
    imageArrayLayers = src.imageArrayLayers;
    imageUsage = src.imageUsage;
    imageSharingMode = src.imageSharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = src.preTransform;
    compositeAlpha = src.compositeAlpha;
    presentMode = src.presentMode;
    clipped = src.clipped;
    oldSwapchain = src.oldSwapchain;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }
}

safe_VkSwapchainCreateInfoKHR::~safe_VkSwapchainCreateInfoKHR()
{
    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;
}

void safe_VkSwapchainCreateInfoKHR::initialize(const VkSwapchainCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    surface = in_struct->surface;
    minImageCount = in_struct->minImageCount;
    imageFormat = in_struct->imageFormat;
    imageColorSpace = in_struct->imageColorSpace;
    imageExtent = in_struct->imageExtent;
    imageArrayLayers = in_struct->imageArrayLayers;
    imageUsage = in_struct->imageUsage;
    imageSharingMode = in_struct->imageSharingMode;
    queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = in_struct->preTransform;
    compositeAlpha = in_struct->compositeAlpha;
    presentMode = in_struct->presentMode;
    clipped = in_struct->clipped;
    oldSwapchain = in_struct->oldSwapchain;
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

void safe_VkSwapchainCreateInfoKHR::initialize(const safe_VkSwapchainCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    surface = src->surface;
    minImageCount = src->minImageCount;
    imageFormat = src->imageFormat;
    imageColorSpace = src->imageColorSpace;
    imageExtent = src->imageExtent;
    imageArrayLayers = src->imageArrayLayers;
    imageUsage = src->imageUsage;
    imageSharingMode = src->imageSharingMode;
    queueFamilyIndexCount = src->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = src->preTransform;
    compositeAlpha = src->compositeAlpha;
    presentMode = src->presentMode;
    clipped = src->clipped;
    oldSwapchain = src->oldSwapchain;
    if (src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src->pQueueFamilyIndices, sizeof(uint32_t)*src->queueFamilyIndexCount);
    }
}

safe_VkPresentInfoKHR::safe_VkPresentInfoKHR(const VkPresentInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphores(nullptr),
    swapchainCount(in_struct->swapchainCount),
    pSwapchains(nullptr),
    pImageIndices(nullptr),
    pResults(nullptr)
{
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && in_struct->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = in_struct->pSwapchains[i];
        }
    }
    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pImageIndices, (void *)in_struct->pImageIndices, sizeof(uint32_t)*in_struct->swapchainCount);
    }
    if (in_struct->pResults) {
        pResults = new VkResult[in_struct->swapchainCount];
        memcpy ((void *)pResults, (void *)in_struct->pResults, sizeof(VkResult)*in_struct->swapchainCount);
    }
}

safe_VkPresentInfoKHR::safe_VkPresentInfoKHR() :
    pWaitSemaphores(nullptr),
    pSwapchains(nullptr),
    pImageIndices(nullptr),
    pResults(nullptr)
{}

safe_VkPresentInfoKHR::safe_VkPresentInfoKHR(const safe_VkPresentInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = src.swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (swapchainCount && src.pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = src.pSwapchains[i];
        }
    }
    if (src.pImageIndices) {
        pImageIndices = new uint32_t[src.swapchainCount];
        memcpy ((void *)pImageIndices, (void *)src.pImageIndices, sizeof(uint32_t)*src.swapchainCount);
    }
    if (src.pResults) {
        pResults = new VkResult[src.swapchainCount];
        memcpy ((void *)pResults, (void *)src.pResults, sizeof(VkResult)*src.swapchainCount);
    }
}

safe_VkPresentInfoKHR::~safe_VkPresentInfoKHR()
{
    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pSwapchains)
        delete[] pSwapchains;
    if (pImageIndices)
        delete[] pImageIndices;
    if (pResults)
        delete[] pResults;
}

void safe_VkPresentInfoKHR::initialize(const VkPresentInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = in_struct->swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && in_struct->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = in_struct->pSwapchains[i];
        }
    }
    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pImageIndices, (void *)in_struct->pImageIndices, sizeof(uint32_t)*in_struct->swapchainCount);
    }
    if (in_struct->pResults) {
        pResults = new VkResult[in_struct->swapchainCount];
        memcpy ((void *)pResults, (void *)in_struct->pResults, sizeof(VkResult)*in_struct->swapchainCount);
    }
}

void safe_VkPresentInfoKHR::initialize(const safe_VkPresentInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = src->swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && src->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = src->pSwapchains[i];
        }
    }
    if (src->pImageIndices) {
        pImageIndices = new uint32_t[src->swapchainCount];
        memcpy ((void *)pImageIndices, (void *)src->pImageIndices, sizeof(uint32_t)*src->swapchainCount);
    }
    if (src->pResults) {
        pResults = new VkResult[src->swapchainCount];
        memcpy ((void *)pResults, (void *)src->pResults, sizeof(VkResult)*src->swapchainCount);
    }
}

safe_VkDisplayPropertiesKHR::safe_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR* in_struct) :
    display(in_struct->display),
    displayName(in_struct->displayName),
    physicalDimensions(in_struct->physicalDimensions),
    physicalResolution(in_struct->physicalResolution),
    supportedTransforms(in_struct->supportedTransforms),
    planeReorderPossible(in_struct->planeReorderPossible),
    persistentContent(in_struct->persistentContent)
{
}

safe_VkDisplayPropertiesKHR::safe_VkDisplayPropertiesKHR()
{}

safe_VkDisplayPropertiesKHR::safe_VkDisplayPropertiesKHR(const safe_VkDisplayPropertiesKHR& src)
{
    display = src.display;
    displayName = src.displayName;
    physicalDimensions = src.physicalDimensions;
    physicalResolution = src.physicalResolution;
    supportedTransforms = src.supportedTransforms;
    planeReorderPossible = src.planeReorderPossible;
    persistentContent = src.persistentContent;
}

safe_VkDisplayPropertiesKHR::~safe_VkDisplayPropertiesKHR()
{
}

void safe_VkDisplayPropertiesKHR::initialize(const VkDisplayPropertiesKHR* in_struct)
{
    display = in_struct->display;
    displayName = in_struct->displayName;
    physicalDimensions = in_struct->physicalDimensions;
    physicalResolution = in_struct->physicalResolution;
    supportedTransforms = in_struct->supportedTransforms;
    planeReorderPossible = in_struct->planeReorderPossible;
    persistentContent = in_struct->persistentContent;
}

void safe_VkDisplayPropertiesKHR::initialize(const safe_VkDisplayPropertiesKHR* src)
{
    display = src->display;
    displayName = src->displayName;
    physicalDimensions = src->physicalDimensions;
    physicalResolution = src->physicalResolution;
    supportedTransforms = src->supportedTransforms;
    planeReorderPossible = src->planeReorderPossible;
    persistentContent = src->persistentContent;
}

safe_VkDisplayModeCreateInfoKHR::safe_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    parameters(in_struct->parameters)
{
}

safe_VkDisplayModeCreateInfoKHR::safe_VkDisplayModeCreateInfoKHR()
{}

safe_VkDisplayModeCreateInfoKHR::safe_VkDisplayModeCreateInfoKHR(const safe_VkDisplayModeCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    parameters = src.parameters;
}

safe_VkDisplayModeCreateInfoKHR::~safe_VkDisplayModeCreateInfoKHR()
{
}

void safe_VkDisplayModeCreateInfoKHR::initialize(const VkDisplayModeCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    parameters = in_struct->parameters;
}

void safe_VkDisplayModeCreateInfoKHR::initialize(const safe_VkDisplayModeCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    parameters = src->parameters;
}

safe_VkDisplaySurfaceCreateInfoKHR::safe_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    displayMode(in_struct->displayMode),
    planeIndex(in_struct->planeIndex),
    planeStackIndex(in_struct->planeStackIndex),
    transform(in_struct->transform),
    globalAlpha(in_struct->globalAlpha),
    alphaMode(in_struct->alphaMode),
    imageExtent(in_struct->imageExtent)
{
}

safe_VkDisplaySurfaceCreateInfoKHR::safe_VkDisplaySurfaceCreateInfoKHR()
{}

safe_VkDisplaySurfaceCreateInfoKHR::safe_VkDisplaySurfaceCreateInfoKHR(const safe_VkDisplaySurfaceCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    displayMode = src.displayMode;
    planeIndex = src.planeIndex;
    planeStackIndex = src.planeStackIndex;
    transform = src.transform;
    globalAlpha = src.globalAlpha;
    alphaMode = src.alphaMode;
    imageExtent = src.imageExtent;
}

safe_VkDisplaySurfaceCreateInfoKHR::~safe_VkDisplaySurfaceCreateInfoKHR()
{
}

void safe_VkDisplaySurfaceCreateInfoKHR::initialize(const VkDisplaySurfaceCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    displayMode = in_struct->displayMode;
    planeIndex = in_struct->planeIndex;
    planeStackIndex = in_struct->planeStackIndex;
    transform = in_struct->transform;
    globalAlpha = in_struct->globalAlpha;
    alphaMode = in_struct->alphaMode;
    imageExtent = in_struct->imageExtent;
}

void safe_VkDisplaySurfaceCreateInfoKHR::initialize(const safe_VkDisplaySurfaceCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    displayMode = src->displayMode;
    planeIndex = src->planeIndex;
    planeStackIndex = src->planeStackIndex;
    transform = src->transform;
    globalAlpha = src->globalAlpha;
    alphaMode = src->alphaMode;
    imageExtent = src->imageExtent;
}

safe_VkDisplayPresentInfoKHR::safe_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcRect(in_struct->srcRect),
    dstRect(in_struct->dstRect),
    persistent(in_struct->persistent)
{
}

safe_VkDisplayPresentInfoKHR::safe_VkDisplayPresentInfoKHR()
{}

safe_VkDisplayPresentInfoKHR::safe_VkDisplayPresentInfoKHR(const safe_VkDisplayPresentInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcRect = src.srcRect;
    dstRect = src.dstRect;
    persistent = src.persistent;
}

safe_VkDisplayPresentInfoKHR::~safe_VkDisplayPresentInfoKHR()
{
}

void safe_VkDisplayPresentInfoKHR::initialize(const VkDisplayPresentInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcRect = in_struct->srcRect;
    dstRect = in_struct->dstRect;
    persistent = in_struct->persistent;
}

void safe_VkDisplayPresentInfoKHR::initialize(const safe_VkDisplayPresentInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcRect = src->srcRect;
    dstRect = src->dstRect;
    persistent = src->persistent;
}

safe_VkPhysicalDeviceFeatures2KHR::safe_VkPhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    features(in_struct->features)
{
}

safe_VkPhysicalDeviceFeatures2KHR::safe_VkPhysicalDeviceFeatures2KHR()
{}

safe_VkPhysicalDeviceFeatures2KHR::safe_VkPhysicalDeviceFeatures2KHR(const safe_VkPhysicalDeviceFeatures2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    features = src.features;
}

safe_VkPhysicalDeviceFeatures2KHR::~safe_VkPhysicalDeviceFeatures2KHR()
{
}

void safe_VkPhysicalDeviceFeatures2KHR::initialize(const VkPhysicalDeviceFeatures2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    features = in_struct->features;
}

void safe_VkPhysicalDeviceFeatures2KHR::initialize(const safe_VkPhysicalDeviceFeatures2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    features = src->features;
}

safe_VkPhysicalDeviceProperties2KHR::safe_VkPhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    properties(in_struct->properties)
{
}

safe_VkPhysicalDeviceProperties2KHR::safe_VkPhysicalDeviceProperties2KHR()
{}

safe_VkPhysicalDeviceProperties2KHR::safe_VkPhysicalDeviceProperties2KHR(const safe_VkPhysicalDeviceProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;
}

safe_VkPhysicalDeviceProperties2KHR::~safe_VkPhysicalDeviceProperties2KHR()
{
}

void safe_VkPhysicalDeviceProperties2KHR::initialize(const VkPhysicalDeviceProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    properties = in_struct->properties;
}

void safe_VkPhysicalDeviceProperties2KHR::initialize(const safe_VkPhysicalDeviceProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    properties = src->properties;
}

safe_VkFormatProperties2KHR::safe_VkFormatProperties2KHR(const VkFormatProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    formatProperties(in_struct->formatProperties)
{
}

safe_VkFormatProperties2KHR::safe_VkFormatProperties2KHR()
{}

safe_VkFormatProperties2KHR::safe_VkFormatProperties2KHR(const safe_VkFormatProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    formatProperties = src.formatProperties;
}

safe_VkFormatProperties2KHR::~safe_VkFormatProperties2KHR()
{
}

void safe_VkFormatProperties2KHR::initialize(const VkFormatProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    formatProperties = in_struct->formatProperties;
}

void safe_VkFormatProperties2KHR::initialize(const safe_VkFormatProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    formatProperties = src->formatProperties;
}

safe_VkImageFormatProperties2KHR::safe_VkImageFormatProperties2KHR(const VkImageFormatProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    imageFormatProperties(in_struct->imageFormatProperties)
{
}

safe_VkImageFormatProperties2KHR::safe_VkImageFormatProperties2KHR()
{}

safe_VkImageFormatProperties2KHR::safe_VkImageFormatProperties2KHR(const safe_VkImageFormatProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    imageFormatProperties = src.imageFormatProperties;
}

safe_VkImageFormatProperties2KHR::~safe_VkImageFormatProperties2KHR()
{
}

void safe_VkImageFormatProperties2KHR::initialize(const VkImageFormatProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    imageFormatProperties = in_struct->imageFormatProperties;
}

void safe_VkImageFormatProperties2KHR::initialize(const safe_VkImageFormatProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    imageFormatProperties = src->imageFormatProperties;
}

safe_VkPhysicalDeviceImageFormatInfo2KHR::safe_VkPhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    format(in_struct->format),
    type(in_struct->type),
    tiling(in_struct->tiling),
    usage(in_struct->usage),
    flags(in_struct->flags)
{
}

safe_VkPhysicalDeviceImageFormatInfo2KHR::safe_VkPhysicalDeviceImageFormatInfo2KHR()
{}

safe_VkPhysicalDeviceImageFormatInfo2KHR::safe_VkPhysicalDeviceImageFormatInfo2KHR(const safe_VkPhysicalDeviceImageFormatInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    tiling = src.tiling;
    usage = src.usage;
    flags = src.flags;
}

safe_VkPhysicalDeviceImageFormatInfo2KHR::~safe_VkPhysicalDeviceImageFormatInfo2KHR()
{
}

void safe_VkPhysicalDeviceImageFormatInfo2KHR::initialize(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    format = in_struct->format;
    type = in_struct->type;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    flags = in_struct->flags;
}

void safe_VkPhysicalDeviceImageFormatInfo2KHR::initialize(const safe_VkPhysicalDeviceImageFormatInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    format = src->format;
    type = src->type;
    tiling = src->tiling;
    usage = src->usage;
    flags = src->flags;
}

safe_VkQueueFamilyProperties2KHR::safe_VkQueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    queueFamilyProperties(in_struct->queueFamilyProperties)
{
}

safe_VkQueueFamilyProperties2KHR::safe_VkQueueFamilyProperties2KHR()
{}

safe_VkQueueFamilyProperties2KHR::safe_VkQueueFamilyProperties2KHR(const safe_VkQueueFamilyProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    queueFamilyProperties = src.queueFamilyProperties;
}

safe_VkQueueFamilyProperties2KHR::~safe_VkQueueFamilyProperties2KHR()
{
}

void safe_VkQueueFamilyProperties2KHR::initialize(const VkQueueFamilyProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    queueFamilyProperties = in_struct->queueFamilyProperties;
}

void safe_VkQueueFamilyProperties2KHR::initialize(const safe_VkQueueFamilyProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    queueFamilyProperties = src->queueFamilyProperties;
}

safe_VkPhysicalDeviceMemoryProperties2KHR::safe_VkPhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryProperties(in_struct->memoryProperties)
{
}

safe_VkPhysicalDeviceMemoryProperties2KHR::safe_VkPhysicalDeviceMemoryProperties2KHR()
{}

safe_VkPhysicalDeviceMemoryProperties2KHR::safe_VkPhysicalDeviceMemoryProperties2KHR(const safe_VkPhysicalDeviceMemoryProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryProperties = src.memoryProperties;
}

safe_VkPhysicalDeviceMemoryProperties2KHR::~safe_VkPhysicalDeviceMemoryProperties2KHR()
{
}

void safe_VkPhysicalDeviceMemoryProperties2KHR::initialize(const VkPhysicalDeviceMemoryProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryProperties = in_struct->memoryProperties;
}

void safe_VkPhysicalDeviceMemoryProperties2KHR::initialize(const safe_VkPhysicalDeviceMemoryProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryProperties = src->memoryProperties;
}

safe_VkSparseImageFormatProperties2KHR::safe_VkSparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    properties(in_struct->properties)
{
}

safe_VkSparseImageFormatProperties2KHR::safe_VkSparseImageFormatProperties2KHR()
{}

safe_VkSparseImageFormatProperties2KHR::safe_VkSparseImageFormatProperties2KHR(const safe_VkSparseImageFormatProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;
}

safe_VkSparseImageFormatProperties2KHR::~safe_VkSparseImageFormatProperties2KHR()
{
}

void safe_VkSparseImageFormatProperties2KHR::initialize(const VkSparseImageFormatProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    properties = in_struct->properties;
}

void safe_VkSparseImageFormatProperties2KHR::initialize(const safe_VkSparseImageFormatProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    properties = src->properties;
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    format(in_struct->format),
    type(in_struct->type),
    samples(in_struct->samples),
    usage(in_struct->usage),
    tiling(in_struct->tiling)
{
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::safe_VkPhysicalDeviceSparseImageFormatInfo2KHR()
{}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    samples = src.samples;
    usage = src.usage;
    tiling = src.tiling;
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::~safe_VkPhysicalDeviceSparseImageFormatInfo2KHR()
{
}

void safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::initialize(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    format = in_struct->format;
    type = in_struct->type;
    samples = in_struct->samples;
    usage = in_struct->usage;
    tiling = in_struct->tiling;
}

void safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::initialize(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    format = src->format;
    type = src->type;
    samples = src->samples;
    usage = src->usage;
    tiling = src->tiling;
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxPushDescriptors(in_struct->maxPushDescriptors)
{
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::safe_VkPhysicalDevicePushDescriptorPropertiesKHR()
{}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxPushDescriptors = src.maxPushDescriptors;
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::~safe_VkPhysicalDevicePushDescriptorPropertiesKHR()
{
}

void safe_VkPhysicalDevicePushDescriptorPropertiesKHR::initialize(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxPushDescriptors = in_struct->maxPushDescriptors;
}

void safe_VkPhysicalDevicePushDescriptorPropertiesKHR::initialize(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxPushDescriptors = src->maxPushDescriptors;
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::safe_VkDescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    descriptorUpdateEntryCount(in_struct->descriptorUpdateEntryCount),
    pDescriptorUpdateEntries(nullptr),
    templateType(in_struct->templateType),
    descriptorSetLayout(in_struct->descriptorSetLayout),
    pipelineBindPoint(in_struct->pipelineBindPoint),
    pipelineLayout(in_struct->pipelineLayout),
    set(in_struct->set)
{
    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[in_struct->descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)in_struct->pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*in_struct->descriptorUpdateEntryCount);
    }
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::safe_VkDescriptorUpdateTemplateCreateInfoKHR() :
    pDescriptorUpdateEntries(nullptr)
{}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::safe_VkDescriptorUpdateTemplateCreateInfoKHR(const safe_VkDescriptorUpdateTemplateCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    descriptorUpdateEntryCount = src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = src.templateType;
    descriptorSetLayout = src.descriptorSetLayout;
    pipelineBindPoint = src.pipelineBindPoint;
    pipelineLayout = src.pipelineLayout;
    set = src.set;
    if (src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[src.descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)src.pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*src.descriptorUpdateEntryCount);
    }
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::~safe_VkDescriptorUpdateTemplateCreateInfoKHR()
{
    if (pDescriptorUpdateEntries)
        delete[] pDescriptorUpdateEntries;
}

void safe_VkDescriptorUpdateTemplateCreateInfoKHR::initialize(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    descriptorUpdateEntryCount = in_struct->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = in_struct->templateType;
    descriptorSetLayout = in_struct->descriptorSetLayout;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipelineLayout = in_struct->pipelineLayout;
    set = in_struct->set;
    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[in_struct->descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)in_struct->pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*in_struct->descriptorUpdateEntryCount);
    }
}

void safe_VkDescriptorUpdateTemplateCreateInfoKHR::initialize(const safe_VkDescriptorUpdateTemplateCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    descriptorUpdateEntryCount = src->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = src->templateType;
    descriptorSetLayout = src->descriptorSetLayout;
    pipelineBindPoint = src->pipelineBindPoint;
    pipelineLayout = src->pipelineLayout;
    set = src->set;
    if (src->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[src->descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)src->pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*src->descriptorUpdateEntryCount);
    }
}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    pfnCallback(in_struct->pfnCallback),
    pUserData(in_struct->pUserData)
{
}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT()
{}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT(const safe_VkDebugReportCallbackCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pfnCallback = src.pfnCallback;
    pUserData = src.pUserData;
}

safe_VkDebugReportCallbackCreateInfoEXT::~safe_VkDebugReportCallbackCreateInfoEXT()
{
}

void safe_VkDebugReportCallbackCreateInfoEXT::initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    pfnCallback = in_struct->pfnCallback;
    pUserData = in_struct->pUserData;
}

void safe_VkDebugReportCallbackCreateInfoEXT::initialize(const safe_VkDebugReportCallbackCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    pfnCallback = src->pfnCallback;
    pUserData = src->pUserData;
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::safe_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    rasterizationOrder(in_struct->rasterizationOrder)
{
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::safe_VkPipelineRasterizationStateRasterizationOrderAMD()
{}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::safe_VkPipelineRasterizationStateRasterizationOrderAMD(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& src)
{
    sType = src.sType;
    pNext = src.pNext;
    rasterizationOrder = src.rasterizationOrder;
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::~safe_VkPipelineRasterizationStateRasterizationOrderAMD()
{
}

void safe_VkPipelineRasterizationStateRasterizationOrderAMD::initialize(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    rasterizationOrder = in_struct->rasterizationOrder;
}

void safe_VkPipelineRasterizationStateRasterizationOrderAMD::initialize(const safe_VkPipelineRasterizationStateRasterizationOrderAMD* src)
{
    sType = src->sType;
    pNext = src->pNext;
    rasterizationOrder = src->rasterizationOrder;
}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectType(in_struct->objectType),
    object(in_struct->object),
    pObjectName(in_struct->pObjectName)
{
}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT()
{}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT(const safe_VkDebugMarkerObjectNameInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectType = src.objectType;
    object = src.object;
    pObjectName = src.pObjectName;
}

safe_VkDebugMarkerObjectNameInfoEXT::~safe_VkDebugMarkerObjectNameInfoEXT()
{
}

void safe_VkDebugMarkerObjectNameInfoEXT::initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectType = in_struct->objectType;
    object = in_struct->object;
    pObjectName = in_struct->pObjectName;
}

void safe_VkDebugMarkerObjectNameInfoEXT::initialize(const safe_VkDebugMarkerObjectNameInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectType = src->objectType;
    object = src->object;
    pObjectName = src->pObjectName;
}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectType(in_struct->objectType),
    object(in_struct->object),
    tagName(in_struct->tagName),
    tagSize(in_struct->tagSize),
    pTag(in_struct->pTag)
{
}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT()
{}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT(const safe_VkDebugMarkerObjectTagInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectType = src.objectType;
    object = src.object;
    tagName = src.tagName;
    tagSize = src.tagSize;
    pTag = src.pTag;
}

safe_VkDebugMarkerObjectTagInfoEXT::~safe_VkDebugMarkerObjectTagInfoEXT()
{
}

void safe_VkDebugMarkerObjectTagInfoEXT::initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectType = in_struct->objectType;
    object = in_struct->object;
    tagName = in_struct->tagName;
    tagSize = in_struct->tagSize;
    pTag = in_struct->pTag;
}

void safe_VkDebugMarkerObjectTagInfoEXT::initialize(const safe_VkDebugMarkerObjectTagInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectType = src->objectType;
    object = src->object;
    tagName = src->tagName;
    tagSize = src->tagSize;
    pTag = src->pTag;
}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pMarkerName(in_struct->pMarkerName)
{
    for (uint32_t i=0; i<4; ++i) {
        color[i] = in_struct->color[i];
    }
}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT()
{}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT(const safe_VkDebugMarkerMarkerInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pMarkerName = src.pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = src.color[i];
    }
}

safe_VkDebugMarkerMarkerInfoEXT::~safe_VkDebugMarkerMarkerInfoEXT()
{
}

void safe_VkDebugMarkerMarkerInfoEXT::initialize(const VkDebugMarkerMarkerInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pMarkerName = in_struct->pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = in_struct->color[i];
    }
}

void safe_VkDebugMarkerMarkerInfoEXT::initialize(const safe_VkDebugMarkerMarkerInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pMarkerName = src->pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = src->color[i];
    }
}

safe_VkDedicatedAllocationImageCreateInfoNV::safe_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    dedicatedAllocation(in_struct->dedicatedAllocation)
{
}

safe_VkDedicatedAllocationImageCreateInfoNV::safe_VkDedicatedAllocationImageCreateInfoNV()
{}

safe_VkDedicatedAllocationImageCreateInfoNV::safe_VkDedicatedAllocationImageCreateInfoNV(const safe_VkDedicatedAllocationImageCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    dedicatedAllocation = src.dedicatedAllocation;
}

safe_VkDedicatedAllocationImageCreateInfoNV::~safe_VkDedicatedAllocationImageCreateInfoNV()
{
}

void safe_VkDedicatedAllocationImageCreateInfoNV::initialize(const VkDedicatedAllocationImageCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    dedicatedAllocation = in_struct->dedicatedAllocation;
}

void safe_VkDedicatedAllocationImageCreateInfoNV::initialize(const safe_VkDedicatedAllocationImageCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    dedicatedAllocation = src->dedicatedAllocation;
}

safe_VkDedicatedAllocationBufferCreateInfoNV::safe_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    dedicatedAllocation(in_struct->dedicatedAllocation)
{
}

safe_VkDedicatedAllocationBufferCreateInfoNV::safe_VkDedicatedAllocationBufferCreateInfoNV()
{}

safe_VkDedicatedAllocationBufferCreateInfoNV::safe_VkDedicatedAllocationBufferCreateInfoNV(const safe_VkDedicatedAllocationBufferCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    dedicatedAllocation = src.dedicatedAllocation;
}

safe_VkDedicatedAllocationBufferCreateInfoNV::~safe_VkDedicatedAllocationBufferCreateInfoNV()
{
}

void safe_VkDedicatedAllocationBufferCreateInfoNV::initialize(const VkDedicatedAllocationBufferCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    dedicatedAllocation = in_struct->dedicatedAllocation;
}

void safe_VkDedicatedAllocationBufferCreateInfoNV::initialize(const safe_VkDedicatedAllocationBufferCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    dedicatedAllocation = src->dedicatedAllocation;
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::safe_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image),
    buffer(in_struct->buffer)
{
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::safe_VkDedicatedAllocationMemoryAllocateInfoNV()
{}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::safe_VkDedicatedAllocationMemoryAllocateInfoNV(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    buffer = src.buffer;
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::~safe_VkDedicatedAllocationMemoryAllocateInfoNV()
{
}

void safe_VkDedicatedAllocationMemoryAllocateInfoNV::initialize(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
    buffer = in_struct->buffer;
}

void safe_VkDedicatedAllocationMemoryAllocateInfoNV::initialize(const safe_VkDedicatedAllocationMemoryAllocateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
    buffer = src->buffer;
}

safe_VkRenderPassMultiviewCreateInfoKHX::safe_VkRenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    subpassCount(in_struct->subpassCount),
    pViewMasks(nullptr),
    dependencyCount(in_struct->dependencyCount),
    pViewOffsets(nullptr),
    correlationMaskCount(in_struct->correlationMaskCount),
    pCorrelationMasks(nullptr)
{
    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy ((void *)pViewMasks, (void *)in_struct->pViewMasks, sizeof(uint32_t)*in_struct->subpassCount);
    }
    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)in_struct->pViewOffsets, sizeof(int32_t)*in_struct->dependencyCount);
    }
    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)in_struct->pCorrelationMasks, sizeof(uint32_t)*in_struct->correlationMaskCount);
    }
}

safe_VkRenderPassMultiviewCreateInfoKHX::safe_VkRenderPassMultiviewCreateInfoKHX() :
    pViewMasks(nullptr),
    pViewOffsets(nullptr),
    pCorrelationMasks(nullptr)
{}

safe_VkRenderPassMultiviewCreateInfoKHX::safe_VkRenderPassMultiviewCreateInfoKHX(const safe_VkRenderPassMultiviewCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    subpassCount = src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (src.pViewMasks) {
        pViewMasks = new uint32_t[src.subpassCount];
        memcpy ((void *)pViewMasks, (void *)src.pViewMasks, sizeof(uint32_t)*src.subpassCount);
    }
    if (src.pViewOffsets) {
        pViewOffsets = new int32_t[src.dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)src.pViewOffsets, sizeof(int32_t)*src.dependencyCount);
    }
    if (src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[src.correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)src.pCorrelationMasks, sizeof(uint32_t)*src.correlationMaskCount);
    }
}

safe_VkRenderPassMultiviewCreateInfoKHX::~safe_VkRenderPassMultiviewCreateInfoKHX()
{
    if (pViewMasks)
        delete[] pViewMasks;
    if (pViewOffsets)
        delete[] pViewOffsets;
    if (pCorrelationMasks)
        delete[] pCorrelationMasks;
}

void safe_VkRenderPassMultiviewCreateInfoKHX::initialize(const VkRenderPassMultiviewCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    subpassCount = in_struct->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = in_struct->correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy ((void *)pViewMasks, (void *)in_struct->pViewMasks, sizeof(uint32_t)*in_struct->subpassCount);
    }
    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)in_struct->pViewOffsets, sizeof(int32_t)*in_struct->dependencyCount);
    }
    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)in_struct->pCorrelationMasks, sizeof(uint32_t)*in_struct->correlationMaskCount);
    }
}

void safe_VkRenderPassMultiviewCreateInfoKHX::initialize(const safe_VkRenderPassMultiviewCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    subpassCount = src->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = src->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = src->correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (src->pViewMasks) {
        pViewMasks = new uint32_t[src->subpassCount];
        memcpy ((void *)pViewMasks, (void *)src->pViewMasks, sizeof(uint32_t)*src->subpassCount);
    }
    if (src->pViewOffsets) {
        pViewOffsets = new int32_t[src->dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)src->pViewOffsets, sizeof(int32_t)*src->dependencyCount);
    }
    if (src->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[src->correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)src->pCorrelationMasks, sizeof(uint32_t)*src->correlationMaskCount);
    }
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::safe_VkPhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    multiview(in_struct->multiview),
    multiviewGeometryShader(in_struct->multiviewGeometryShader),
    multiviewTessellationShader(in_struct->multiviewTessellationShader)
{
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::safe_VkPhysicalDeviceMultiviewFeaturesKHX()
{}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::safe_VkPhysicalDeviceMultiviewFeaturesKHX(const safe_VkPhysicalDeviceMultiviewFeaturesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    multiview = src.multiview;
    multiviewGeometryShader = src.multiviewGeometryShader;
    multiviewTessellationShader = src.multiviewTessellationShader;
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::~safe_VkPhysicalDeviceMultiviewFeaturesKHX()
{
}

void safe_VkPhysicalDeviceMultiviewFeaturesKHX::initialize(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    multiview = in_struct->multiview;
    multiviewGeometryShader = in_struct->multiviewGeometryShader;
    multiviewTessellationShader = in_struct->multiviewTessellationShader;
}

void safe_VkPhysicalDeviceMultiviewFeaturesKHX::initialize(const safe_VkPhysicalDeviceMultiviewFeaturesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    multiview = src->multiview;
    multiviewGeometryShader = src->multiviewGeometryShader;
    multiviewTessellationShader = src->multiviewTessellationShader;
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::safe_VkPhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxMultiviewViewCount(in_struct->maxMultiviewViewCount),
    maxMultiviewInstanceIndex(in_struct->maxMultiviewInstanceIndex)
{
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::safe_VkPhysicalDeviceMultiviewPropertiesKHX()
{}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::safe_VkPhysicalDeviceMultiviewPropertiesKHX(const safe_VkPhysicalDeviceMultiviewPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxMultiviewViewCount = src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = src.maxMultiviewInstanceIndex;
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::~safe_VkPhysicalDeviceMultiviewPropertiesKHX()
{
}

void safe_VkPhysicalDeviceMultiviewPropertiesKHX::initialize(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxMultiviewViewCount = in_struct->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = in_struct->maxMultiviewInstanceIndex;
}

void safe_VkPhysicalDeviceMultiviewPropertiesKHX::initialize(const safe_VkPhysicalDeviceMultiviewPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxMultiviewViewCount = src->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = src->maxMultiviewInstanceIndex;
}

safe_VkExternalMemoryImageCreateInfoNV::safe_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExternalMemoryImageCreateInfoNV::safe_VkExternalMemoryImageCreateInfoNV()
{}

safe_VkExternalMemoryImageCreateInfoNV::safe_VkExternalMemoryImageCreateInfoNV(const safe_VkExternalMemoryImageCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExternalMemoryImageCreateInfoNV::~safe_VkExternalMemoryImageCreateInfoNV()
{
}

void safe_VkExternalMemoryImageCreateInfoNV::initialize(const VkExternalMemoryImageCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExternalMemoryImageCreateInfoNV::initialize(const safe_VkExternalMemoryImageCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}

safe_VkExportMemoryAllocateInfoNV::safe_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportMemoryAllocateInfoNV::safe_VkExportMemoryAllocateInfoNV()
{}

safe_VkExportMemoryAllocateInfoNV::safe_VkExportMemoryAllocateInfoNV(const safe_VkExportMemoryAllocateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportMemoryAllocateInfoNV::~safe_VkExportMemoryAllocateInfoNV()
{
}

void safe_VkExportMemoryAllocateInfoNV::initialize(const VkExportMemoryAllocateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportMemoryAllocateInfoNV::initialize(const safe_VkExportMemoryAllocateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkImportMemoryWin32HandleInfoNV::safe_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    handle(in_struct->handle)
{
}

safe_VkImportMemoryWin32HandleInfoNV::safe_VkImportMemoryWin32HandleInfoNV()
{}

safe_VkImportMemoryWin32HandleInfoNV::safe_VkImportMemoryWin32HandleInfoNV(const safe_VkImportMemoryWin32HandleInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    handle = src.handle;
}

safe_VkImportMemoryWin32HandleInfoNV::~safe_VkImportMemoryWin32HandleInfoNV()
{
}

void safe_VkImportMemoryWin32HandleInfoNV::initialize(const VkImportMemoryWin32HandleInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
}

void safe_VkImportMemoryWin32HandleInfoNV::initialize(const safe_VkImportMemoryWin32HandleInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    handle = src->handle;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkExportMemoryWin32HandleInfoNV::safe_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoNV::safe_VkExportMemoryWin32HandleInfoNV() :
    pAttributes(nullptr)
{}

safe_VkExportMemoryWin32HandleInfoNV::safe_VkExportMemoryWin32HandleInfoNV(const safe_VkExportMemoryWin32HandleInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoNV::~safe_VkExportMemoryWin32HandleInfoNV()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportMemoryWin32HandleInfoNV::initialize(const VkExportMemoryWin32HandleInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportMemoryWin32HandleInfoNV::initialize(const safe_VkExportMemoryWin32HandleInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkWin32KeyedMutexAcquireReleaseInfoNV::safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    acquireCount(in_struct->acquireCount),
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeoutMilliseconds(nullptr),
    releaseCount(in_struct->releaseCount),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)in_struct->pAcquireTimeoutMilliseconds, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV::safe_VkWin32KeyedMutexAcquireReleaseInfoNV() :
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeoutMilliseconds(nullptr),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV::safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    acquireCount = src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src.pAcquireSyncs[i];
        }
    }
    if (src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[src.acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src.pAcquireKeys, sizeof(uint64_t)*src.acquireCount);
    }
    if (src.pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[src.acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)src.pAcquireTimeoutMilliseconds, sizeof(uint32_t)*src.acquireCount);
    }
    if (releaseCount && src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src.pReleaseSyncs[i];
        }
    }
    if (src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[src.releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src.pReleaseKeys, sizeof(uint64_t)*src.releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV::~safe_VkWin32KeyedMutexAcquireReleaseInfoNV()
{
    if (pAcquireSyncs)
        delete[] pAcquireSyncs;
    if (pAcquireKeys)
        delete[] pAcquireKeys;
    if (pAcquireTimeoutMilliseconds)
        delete[] pAcquireTimeoutMilliseconds;
    if (pReleaseSyncs)
        delete[] pReleaseSyncs;
    if (pReleaseKeys)
        delete[] pReleaseKeys;
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoNV::initialize(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    acquireCount = in_struct->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = in_struct->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)in_struct->pAcquireTimeoutMilliseconds, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoNV::initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    acquireCount = src->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = src->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src->pAcquireSyncs[i];
        }
    }
    if (src->pAcquireKeys) {
        pAcquireKeys = new uint64_t[src->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src->pAcquireKeys, sizeof(uint64_t)*src->acquireCount);
    }
    if (src->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[src->acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)src->pAcquireTimeoutMilliseconds, sizeof(uint32_t)*src->acquireCount);
    }
    if (releaseCount && src->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src->pReleaseSyncs[i];
        }
    }
    if (src->pReleaseKeys) {
        pReleaseKeys = new uint64_t[src->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src->pReleaseKeys, sizeof(uint64_t)*src->releaseCount);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkMemoryAllocateFlagsInfoKHX::safe_VkMemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    deviceMask(in_struct->deviceMask)
{
}

safe_VkMemoryAllocateFlagsInfoKHX::safe_VkMemoryAllocateFlagsInfoKHX()
{}

safe_VkMemoryAllocateFlagsInfoKHX::safe_VkMemoryAllocateFlagsInfoKHX(const safe_VkMemoryAllocateFlagsInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    deviceMask = src.deviceMask;
}

safe_VkMemoryAllocateFlagsInfoKHX::~safe_VkMemoryAllocateFlagsInfoKHX()
{
}

void safe_VkMemoryAllocateFlagsInfoKHX::initialize(const VkMemoryAllocateFlagsInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    deviceMask = in_struct->deviceMask;
}

void safe_VkMemoryAllocateFlagsInfoKHX::initialize(const safe_VkMemoryAllocateFlagsInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    deviceMask = src->deviceMask;
}

safe_VkBindBufferMemoryInfoKHX::safe_VkBindBufferMemoryInfoKHX(const VkBindBufferMemoryInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    buffer(in_struct->buffer),
    memory(in_struct->memory),
    memoryOffset(in_struct->memoryOffset),
    deviceIndexCount(in_struct->deviceIndexCount),
    pDeviceIndices(nullptr)
{
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
}

safe_VkBindBufferMemoryInfoKHX::safe_VkBindBufferMemoryInfoKHX() :
    pDeviceIndices(nullptr)
{}

safe_VkBindBufferMemoryInfoKHX::safe_VkBindBufferMemoryInfoKHX(const safe_VkBindBufferMemoryInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    buffer = src.buffer;
    memory = src.memory;
    memoryOffset = src.memoryOffset;
    deviceIndexCount = src.deviceIndexCount;
    pDeviceIndices = nullptr;
    if (src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[src.deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src.pDeviceIndices, sizeof(uint32_t)*src.deviceIndexCount);
    }
}

safe_VkBindBufferMemoryInfoKHX::~safe_VkBindBufferMemoryInfoKHX()
{
    if (pDeviceIndices)
        delete[] pDeviceIndices;
}

void safe_VkBindBufferMemoryInfoKHX::initialize(const VkBindBufferMemoryInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    buffer = in_struct->buffer;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
}

void safe_VkBindBufferMemoryInfoKHX::initialize(const safe_VkBindBufferMemoryInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    buffer = src->buffer;
    memory = src->memory;
    memoryOffset = src->memoryOffset;
    deviceIndexCount = src->deviceIndexCount;
    pDeviceIndices = nullptr;
    if (src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[src->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src->pDeviceIndices, sizeof(uint32_t)*src->deviceIndexCount);
    }
}

safe_VkBindImageMemoryInfoKHX::safe_VkBindImageMemoryInfoKHX(const VkBindImageMemoryInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image),
    memory(in_struct->memory),
    memoryOffset(in_struct->memoryOffset),
    deviceIndexCount(in_struct->deviceIndexCount),
    pDeviceIndices(nullptr),
    SFRRectCount(in_struct->SFRRectCount),
    pSFRRects(nullptr)
{
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
    if (in_struct->pSFRRects) {
        pSFRRects = new VkRect2D[in_struct->SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)in_struct->pSFRRects, sizeof(VkRect2D)*in_struct->SFRRectCount);
    }
}

safe_VkBindImageMemoryInfoKHX::safe_VkBindImageMemoryInfoKHX() :
    pDeviceIndices(nullptr),
    pSFRRects(nullptr)
{}

safe_VkBindImageMemoryInfoKHX::safe_VkBindImageMemoryInfoKHX(const safe_VkBindImageMemoryInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    memory = src.memory;
    memoryOffset = src.memoryOffset;
    deviceIndexCount = src.deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = src.SFRRectCount;
    pSFRRects = nullptr;
    if (src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[src.deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src.pDeviceIndices, sizeof(uint32_t)*src.deviceIndexCount);
    }
    if (src.pSFRRects) {
        pSFRRects = new VkRect2D[src.SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)src.pSFRRects, sizeof(VkRect2D)*src.SFRRectCount);
    }
}

safe_VkBindImageMemoryInfoKHX::~safe_VkBindImageMemoryInfoKHX()
{
    if (pDeviceIndices)
        delete[] pDeviceIndices;
    if (pSFRRects)
        delete[] pSFRRects;
}

void safe_VkBindImageMemoryInfoKHX::initialize(const VkBindImageMemoryInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = in_struct->SFRRectCount;
    pSFRRects = nullptr;
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
    if (in_struct->pSFRRects) {
        pSFRRects = new VkRect2D[in_struct->SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)in_struct->pSFRRects, sizeof(VkRect2D)*in_struct->SFRRectCount);
    }
}

void safe_VkBindImageMemoryInfoKHX::initialize(const safe_VkBindImageMemoryInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
    memory = src->memory;
    memoryOffset = src->memoryOffset;
    deviceIndexCount = src->deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = src->SFRRectCount;
    pSFRRects = nullptr;
    if (src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[src->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src->pDeviceIndices, sizeof(uint32_t)*src->deviceIndexCount);
    }
    if (src->pSFRRects) {
        pSFRRects = new VkRect2D[src->SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)src->pSFRRects, sizeof(VkRect2D)*src->SFRRectCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfoKHX::safe_VkDeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceMask(in_struct->deviceMask),
    deviceRenderAreaCount(in_struct->deviceRenderAreaCount),
    pDeviceRenderAreas(nullptr)
{
    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)in_struct->pDeviceRenderAreas, sizeof(VkRect2D)*in_struct->deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfoKHX::safe_VkDeviceGroupRenderPassBeginInfoKHX() :
    pDeviceRenderAreas(nullptr)
{}

safe_VkDeviceGroupRenderPassBeginInfoKHX::safe_VkDeviceGroupRenderPassBeginInfoKHX(const safe_VkDeviceGroupRenderPassBeginInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceMask = src.deviceMask;
    deviceRenderAreaCount = src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[src.deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)src.pDeviceRenderAreas, sizeof(VkRect2D)*src.deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfoKHX::~safe_VkDeviceGroupRenderPassBeginInfoKHX()
{
    if (pDeviceRenderAreas)
        delete[] pDeviceRenderAreas;
}

void safe_VkDeviceGroupRenderPassBeginInfoKHX::initialize(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceMask = in_struct->deviceMask;
    deviceRenderAreaCount = in_struct->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)in_struct->pDeviceRenderAreas, sizeof(VkRect2D)*in_struct->deviceRenderAreaCount);
    }
}

void safe_VkDeviceGroupRenderPassBeginInfoKHX::initialize(const safe_VkDeviceGroupRenderPassBeginInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceMask = src->deviceMask;
    deviceRenderAreaCount = src->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (src->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[src->deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)src->pDeviceRenderAreas, sizeof(VkRect2D)*src->deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::safe_VkDeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceMask(in_struct->deviceMask)
{
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::safe_VkDeviceGroupCommandBufferBeginInfoKHX()
{}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::safe_VkDeviceGroupCommandBufferBeginInfoKHX(const safe_VkDeviceGroupCommandBufferBeginInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceMask = src.deviceMask;
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::~safe_VkDeviceGroupCommandBufferBeginInfoKHX()
{
}

void safe_VkDeviceGroupCommandBufferBeginInfoKHX::initialize(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceMask = in_struct->deviceMask;
}

void safe_VkDeviceGroupCommandBufferBeginInfoKHX::initialize(const safe_VkDeviceGroupCommandBufferBeginInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceMask = src->deviceMask;
}

safe_VkDeviceGroupSubmitInfoKHX::safe_VkDeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphoreDeviceIndices(nullptr),
    commandBufferCount(in_struct->commandBufferCount),
    pCommandBufferDeviceMasks(nullptr),
    signalSemaphoreCount(in_struct->signalSemaphoreCount),
    pSignalSemaphoreDeviceIndices(nullptr)
{
    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)in_struct->pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)in_struct->pCommandBufferDeviceMasks, sizeof(uint32_t)*in_struct->commandBufferCount);
    }
    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)in_struct->pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->signalSemaphoreCount);
    }
}

safe_VkDeviceGroupSubmitInfoKHX::safe_VkDeviceGroupSubmitInfoKHX() :
    pWaitSemaphoreDeviceIndices(nullptr),
    pCommandBufferDeviceMasks(nullptr),
    pSignalSemaphoreDeviceIndices(nullptr)
{}

safe_VkDeviceGroupSubmitInfoKHX::safe_VkDeviceGroupSubmitInfoKHX(const safe_VkDeviceGroupSubmitInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[src.waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)src.pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*src.waitSemaphoreCount);
    }
    if (src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[src.commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)src.pCommandBufferDeviceMasks, sizeof(uint32_t)*src.commandBufferCount);
    }
    if (src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[src.signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)src.pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*src.signalSemaphoreCount);
    }
}

safe_VkDeviceGroupSubmitInfoKHX::~safe_VkDeviceGroupSubmitInfoKHX()
{
    if (pWaitSemaphoreDeviceIndices)
        delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks)
        delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices)
        delete[] pSignalSemaphoreDeviceIndices;
}

void safe_VkDeviceGroupSubmitInfoKHX::initialize(const VkDeviceGroupSubmitInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)in_struct->pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)in_struct->pCommandBufferDeviceMasks, sizeof(uint32_t)*in_struct->commandBufferCount);
    }
    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)in_struct->pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->signalSemaphoreCount);
    }
}

void safe_VkDeviceGroupSubmitInfoKHX::initialize(const safe_VkDeviceGroupSubmitInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = src->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = src->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (src->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[src->waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)src->pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*src->waitSemaphoreCount);
    }
    if (src->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[src->commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)src->pCommandBufferDeviceMasks, sizeof(uint32_t)*src->commandBufferCount);
    }
    if (src->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[src->signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)src->pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*src->signalSemaphoreCount);
    }
}

safe_VkDeviceGroupBindSparseInfoKHX::safe_VkDeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    resourceDeviceIndex(in_struct->resourceDeviceIndex),
    memoryDeviceIndex(in_struct->memoryDeviceIndex)
{
}

safe_VkDeviceGroupBindSparseInfoKHX::safe_VkDeviceGroupBindSparseInfoKHX()
{}

safe_VkDeviceGroupBindSparseInfoKHX::safe_VkDeviceGroupBindSparseInfoKHX(const safe_VkDeviceGroupBindSparseInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    resourceDeviceIndex = src.resourceDeviceIndex;
    memoryDeviceIndex = src.memoryDeviceIndex;
}

safe_VkDeviceGroupBindSparseInfoKHX::~safe_VkDeviceGroupBindSparseInfoKHX()
{
}

void safe_VkDeviceGroupBindSparseInfoKHX::initialize(const VkDeviceGroupBindSparseInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    resourceDeviceIndex = in_struct->resourceDeviceIndex;
    memoryDeviceIndex = in_struct->memoryDeviceIndex;
}

void safe_VkDeviceGroupBindSparseInfoKHX::initialize(const safe_VkDeviceGroupBindSparseInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    resourceDeviceIndex = src->resourceDeviceIndex;
    memoryDeviceIndex = src->memoryDeviceIndex;
}

safe_VkDeviceGroupPresentCapabilitiesKHX::safe_VkDeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    modes(in_struct->modes)
{
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = in_struct->presentMask[i];
    }
}

safe_VkDeviceGroupPresentCapabilitiesKHX::safe_VkDeviceGroupPresentCapabilitiesKHX()
{}

safe_VkDeviceGroupPresentCapabilitiesKHX::safe_VkDeviceGroupPresentCapabilitiesKHX(const safe_VkDeviceGroupPresentCapabilitiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    modes = src.modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = src.presentMask[i];
    }
}

safe_VkDeviceGroupPresentCapabilitiesKHX::~safe_VkDeviceGroupPresentCapabilitiesKHX()
{
}

void safe_VkDeviceGroupPresentCapabilitiesKHX::initialize(const VkDeviceGroupPresentCapabilitiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    modes = in_struct->modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = in_struct->presentMask[i];
    }
}

void safe_VkDeviceGroupPresentCapabilitiesKHX::initialize(const safe_VkDeviceGroupPresentCapabilitiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    modes = src->modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = src->presentMask[i];
    }
}

safe_VkImageSwapchainCreateInfoKHX::safe_VkImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchain(in_struct->swapchain)
{
}

safe_VkImageSwapchainCreateInfoKHX::safe_VkImageSwapchainCreateInfoKHX()
{}

safe_VkImageSwapchainCreateInfoKHX::safe_VkImageSwapchainCreateInfoKHX(const safe_VkImageSwapchainCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
}

safe_VkImageSwapchainCreateInfoKHX::~safe_VkImageSwapchainCreateInfoKHX()
{
}

void safe_VkImageSwapchainCreateInfoKHX::initialize(const VkImageSwapchainCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchain = in_struct->swapchain;
}

void safe_VkImageSwapchainCreateInfoKHX::initialize(const safe_VkImageSwapchainCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchain = src->swapchain;
}

safe_VkBindImageMemorySwapchainInfoKHX::safe_VkBindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchain(in_struct->swapchain),
    imageIndex(in_struct->imageIndex)
{
}

safe_VkBindImageMemorySwapchainInfoKHX::safe_VkBindImageMemorySwapchainInfoKHX()
{}

safe_VkBindImageMemorySwapchainInfoKHX::safe_VkBindImageMemorySwapchainInfoKHX(const safe_VkBindImageMemorySwapchainInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
    imageIndex = src.imageIndex;
}

safe_VkBindImageMemorySwapchainInfoKHX::~safe_VkBindImageMemorySwapchainInfoKHX()
{
}

void safe_VkBindImageMemorySwapchainInfoKHX::initialize(const VkBindImageMemorySwapchainInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchain = in_struct->swapchain;
    imageIndex = in_struct->imageIndex;
}

void safe_VkBindImageMemorySwapchainInfoKHX::initialize(const safe_VkBindImageMemorySwapchainInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchain = src->swapchain;
    imageIndex = src->imageIndex;
}

safe_VkAcquireNextImageInfoKHX::safe_VkAcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchain(in_struct->swapchain),
    timeout(in_struct->timeout),
    semaphore(in_struct->semaphore),
    fence(in_struct->fence),
    deviceMask(in_struct->deviceMask)
{
}

safe_VkAcquireNextImageInfoKHX::safe_VkAcquireNextImageInfoKHX()
{}

safe_VkAcquireNextImageInfoKHX::safe_VkAcquireNextImageInfoKHX(const safe_VkAcquireNextImageInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
    timeout = src.timeout;
    semaphore = src.semaphore;
    fence = src.fence;
    deviceMask = src.deviceMask;
}

safe_VkAcquireNextImageInfoKHX::~safe_VkAcquireNextImageInfoKHX()
{
}

void safe_VkAcquireNextImageInfoKHX::initialize(const VkAcquireNextImageInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchain = in_struct->swapchain;
    timeout = in_struct->timeout;
    semaphore = in_struct->semaphore;
    fence = in_struct->fence;
    deviceMask = in_struct->deviceMask;
}

void safe_VkAcquireNextImageInfoKHX::initialize(const safe_VkAcquireNextImageInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchain = src->swapchain;
    timeout = src->timeout;
    semaphore = src->semaphore;
    fence = src->fence;
    deviceMask = src->deviceMask;
}

safe_VkDeviceGroupPresentInfoKHX::safe_VkDeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchainCount(in_struct->swapchainCount),
    pDeviceMasks(nullptr),
    mode(in_struct->mode)
{
    if (in_struct->pDeviceMasks) {
        pDeviceMasks = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)in_struct->pDeviceMasks, sizeof(uint32_t)*in_struct->swapchainCount);
    }
}

safe_VkDeviceGroupPresentInfoKHX::safe_VkDeviceGroupPresentInfoKHX() :
    pDeviceMasks(nullptr)
{}

safe_VkDeviceGroupPresentInfoKHX::safe_VkDeviceGroupPresentInfoKHX(const safe_VkDeviceGroupPresentInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pDeviceMasks = nullptr;
    mode = src.mode;
    if (src.pDeviceMasks) {
        pDeviceMasks = new uint32_t[src.swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)src.pDeviceMasks, sizeof(uint32_t)*src.swapchainCount);
    }
}

safe_VkDeviceGroupPresentInfoKHX::~safe_VkDeviceGroupPresentInfoKHX()
{
    if (pDeviceMasks)
        delete[] pDeviceMasks;
}

void safe_VkDeviceGroupPresentInfoKHX::initialize(const VkDeviceGroupPresentInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchainCount = in_struct->swapchainCount;
    pDeviceMasks = nullptr;
    mode = in_struct->mode;
    if (in_struct->pDeviceMasks) {
        pDeviceMasks = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)in_struct->pDeviceMasks, sizeof(uint32_t)*in_struct->swapchainCount);
    }
}

void safe_VkDeviceGroupPresentInfoKHX::initialize(const safe_VkDeviceGroupPresentInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchainCount = src->swapchainCount;
    pDeviceMasks = nullptr;
    mode = src->mode;
    if (src->pDeviceMasks) {
        pDeviceMasks = new uint32_t[src->swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)src->pDeviceMasks, sizeof(uint32_t)*src->swapchainCount);
    }
}

safe_VkDeviceGroupSwapchainCreateInfoKHX::safe_VkDeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    modes(in_struct->modes)
{
}

safe_VkDeviceGroupSwapchainCreateInfoKHX::safe_VkDeviceGroupSwapchainCreateInfoKHX()
{}

safe_VkDeviceGroupSwapchainCreateInfoKHX::safe_VkDeviceGroupSwapchainCreateInfoKHX(const safe_VkDeviceGroupSwapchainCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    modes = src.modes;
}

safe_VkDeviceGroupSwapchainCreateInfoKHX::~safe_VkDeviceGroupSwapchainCreateInfoKHX()
{
}

void safe_VkDeviceGroupSwapchainCreateInfoKHX::initialize(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    modes = in_struct->modes;
}

void safe_VkDeviceGroupSwapchainCreateInfoKHX::initialize(const safe_VkDeviceGroupSwapchainCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    modes = src->modes;
}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT(const VkValidationFlagsEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    disabledValidationCheckCount(in_struct->disabledValidationCheckCount),
    pDisabledValidationChecks(nullptr)
{
    if (in_struct->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[in_struct->disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)in_struct->pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*in_struct->disabledValidationCheckCount);
    }
}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT() :
    pDisabledValidationChecks(nullptr)
{}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT(const safe_VkValidationFlagsEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    disabledValidationCheckCount = src.disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (src.pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[src.disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)src.pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*src.disabledValidationCheckCount);
    }
}

safe_VkValidationFlagsEXT::~safe_VkValidationFlagsEXT()
{
    if (pDisabledValidationChecks)
        delete[] pDisabledValidationChecks;
}

void safe_VkValidationFlagsEXT::initialize(const VkValidationFlagsEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    disabledValidationCheckCount = in_struct->disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (in_struct->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[in_struct->disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)in_struct->pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*in_struct->disabledValidationCheckCount);
    }
}

void safe_VkValidationFlagsEXT::initialize(const safe_VkValidationFlagsEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    disabledValidationCheckCount = src->disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (src->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[src->disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)src->pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*src->disabledValidationCheckCount);
    }
}
#ifdef VK_USE_PLATFORM_VI_NN


safe_VkViSurfaceCreateInfoNN::safe_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    window(in_struct->window)
{
}

safe_VkViSurfaceCreateInfoNN::safe_VkViSurfaceCreateInfoNN()
{}

safe_VkViSurfaceCreateInfoNN::safe_VkViSurfaceCreateInfoNN(const safe_VkViSurfaceCreateInfoNN& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    window = src.window;
}

safe_VkViSurfaceCreateInfoNN::~safe_VkViSurfaceCreateInfoNN()
{
}

void safe_VkViSurfaceCreateInfoNN::initialize(const VkViSurfaceCreateInfoNN* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    window = in_struct->window;
}

void safe_VkViSurfaceCreateInfoNN::initialize(const safe_VkViSurfaceCreateInfoNN* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    window = src->window;
}
#endif // VK_USE_PLATFORM_VI_NN


safe_VkPhysicalDeviceGroupPropertiesKHX::safe_VkPhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    physicalDeviceCount(in_struct->physicalDeviceCount),
    subsetAllocation(in_struct->subsetAllocation)
{
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

safe_VkPhysicalDeviceGroupPropertiesKHX::safe_VkPhysicalDeviceGroupPropertiesKHX()
{}

safe_VkPhysicalDeviceGroupPropertiesKHX::safe_VkPhysicalDeviceGroupPropertiesKHX(const safe_VkPhysicalDeviceGroupPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    physicalDeviceCount = src.physicalDeviceCount;
    subsetAllocation = src.subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = src.physicalDevices[i];
    }
}

safe_VkPhysicalDeviceGroupPropertiesKHX::~safe_VkPhysicalDeviceGroupPropertiesKHX()
{
}

void safe_VkPhysicalDeviceGroupPropertiesKHX::initialize(const VkPhysicalDeviceGroupPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    subsetAllocation = in_struct->subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

void safe_VkPhysicalDeviceGroupPropertiesKHX::initialize(const safe_VkPhysicalDeviceGroupPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    physicalDeviceCount = src->physicalDeviceCount;
    subsetAllocation = src->subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = src->physicalDevices[i];
    }
}

safe_VkDeviceGroupDeviceCreateInfoKHX::safe_VkDeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    physicalDeviceCount(in_struct->physicalDeviceCount),
    pPhysicalDevices(nullptr)
{
    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)in_struct->pPhysicalDevices, sizeof(VkPhysicalDevice)*in_struct->physicalDeviceCount);
    }
}

safe_VkDeviceGroupDeviceCreateInfoKHX::safe_VkDeviceGroupDeviceCreateInfoKHX() :
    pPhysicalDevices(nullptr)
{}

safe_VkDeviceGroupDeviceCreateInfoKHX::safe_VkDeviceGroupDeviceCreateInfoKHX(const safe_VkDeviceGroupDeviceCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    physicalDeviceCount = src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[src.physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)src.pPhysicalDevices, sizeof(VkPhysicalDevice)*src.physicalDeviceCount);
    }
}

safe_VkDeviceGroupDeviceCreateInfoKHX::~safe_VkDeviceGroupDeviceCreateInfoKHX()
{
    if (pPhysicalDevices)
        delete[] pPhysicalDevices;
}

void safe_VkDeviceGroupDeviceCreateInfoKHX::initialize(const VkDeviceGroupDeviceCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)in_struct->pPhysicalDevices, sizeof(VkPhysicalDevice)*in_struct->physicalDeviceCount);
    }
}

void safe_VkDeviceGroupDeviceCreateInfoKHX::initialize(const safe_VkDeviceGroupDeviceCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    physicalDeviceCount = src->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (src->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[src->physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)src->pPhysicalDevices, sizeof(VkPhysicalDevice)*src->physicalDeviceCount);
    }
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHX::safe_VkPhysicalDeviceExternalImageFormatInfoKHX(const VkPhysicalDeviceExternalImageFormatInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHX::safe_VkPhysicalDeviceExternalImageFormatInfoKHX()
{}

safe_VkPhysicalDeviceExternalImageFormatInfoKHX::safe_VkPhysicalDeviceExternalImageFormatInfoKHX(const safe_VkPhysicalDeviceExternalImageFormatInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHX::~safe_VkPhysicalDeviceExternalImageFormatInfoKHX()
{
}

void safe_VkPhysicalDeviceExternalImageFormatInfoKHX::initialize(const VkPhysicalDeviceExternalImageFormatInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalImageFormatInfoKHX::initialize(const safe_VkPhysicalDeviceExternalImageFormatInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
}

safe_VkExternalImageFormatPropertiesKHX::safe_VkExternalImageFormatPropertiesKHX(const VkExternalImageFormatPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    externalMemoryProperties(in_struct->externalMemoryProperties)
{
}

safe_VkExternalImageFormatPropertiesKHX::safe_VkExternalImageFormatPropertiesKHX()
{}

safe_VkExternalImageFormatPropertiesKHX::safe_VkExternalImageFormatPropertiesKHX(const safe_VkExternalImageFormatPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    externalMemoryProperties = src.externalMemoryProperties;
}

safe_VkExternalImageFormatPropertiesKHX::~safe_VkExternalImageFormatPropertiesKHX()
{
}

void safe_VkExternalImageFormatPropertiesKHX::initialize(const VkExternalImageFormatPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    externalMemoryProperties = in_struct->externalMemoryProperties;
}

void safe_VkExternalImageFormatPropertiesKHX::initialize(const safe_VkExternalImageFormatPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    externalMemoryProperties = src->externalMemoryProperties;
}

safe_VkPhysicalDeviceExternalBufferInfoKHX::safe_VkPhysicalDeviceExternalBufferInfoKHX(const VkPhysicalDeviceExternalBufferInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    usage(in_struct->usage),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalBufferInfoKHX::safe_VkPhysicalDeviceExternalBufferInfoKHX()
{}

safe_VkPhysicalDeviceExternalBufferInfoKHX::safe_VkPhysicalDeviceExternalBufferInfoKHX(const safe_VkPhysicalDeviceExternalBufferInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    usage = src.usage;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalBufferInfoKHX::~safe_VkPhysicalDeviceExternalBufferInfoKHX()
{
}

void safe_VkPhysicalDeviceExternalBufferInfoKHX::initialize(const VkPhysicalDeviceExternalBufferInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    usage = in_struct->usage;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalBufferInfoKHX::initialize(const safe_VkPhysicalDeviceExternalBufferInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    usage = src->usage;
    handleType = src->handleType;
}

safe_VkExternalBufferPropertiesKHX::safe_VkExternalBufferPropertiesKHX(const VkExternalBufferPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    externalMemoryProperties(in_struct->externalMemoryProperties)
{
}

safe_VkExternalBufferPropertiesKHX::safe_VkExternalBufferPropertiesKHX()
{}

safe_VkExternalBufferPropertiesKHX::safe_VkExternalBufferPropertiesKHX(const safe_VkExternalBufferPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    externalMemoryProperties = src.externalMemoryProperties;
}

safe_VkExternalBufferPropertiesKHX::~safe_VkExternalBufferPropertiesKHX()
{
}

void safe_VkExternalBufferPropertiesKHX::initialize(const VkExternalBufferPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    externalMemoryProperties = in_struct->externalMemoryProperties;
}

void safe_VkExternalBufferPropertiesKHX::initialize(const safe_VkExternalBufferPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    externalMemoryProperties = src->externalMemoryProperties;
}

safe_VkPhysicalDeviceIDPropertiesKHX::safe_VkPhysicalDeviceIDPropertiesKHX(const VkPhysicalDeviceIDPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceLUIDValid(in_struct->deviceLUIDValid)
{
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHX; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

safe_VkPhysicalDeviceIDPropertiesKHX::safe_VkPhysicalDeviceIDPropertiesKHX()
{}

safe_VkPhysicalDeviceIDPropertiesKHX::safe_VkPhysicalDeviceIDPropertiesKHX(const safe_VkPhysicalDeviceIDPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceLUIDValid = src.deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = src.deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = src.driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHX; ++i) {
        deviceLUID[i] = src.deviceLUID[i];
    }
}

safe_VkPhysicalDeviceIDPropertiesKHX::~safe_VkPhysicalDeviceIDPropertiesKHX()
{
}

void safe_VkPhysicalDeviceIDPropertiesKHX::initialize(const VkPhysicalDeviceIDPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceLUIDValid = in_struct->deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHX; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

void safe_VkPhysicalDeviceIDPropertiesKHX::initialize(const safe_VkPhysicalDeviceIDPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceLUIDValid = src->deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = src->deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = src->driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHX; ++i) {
        deviceLUID[i] = src->deviceLUID[i];
    }
}

safe_VkPhysicalDeviceProperties2KHX::safe_VkPhysicalDeviceProperties2KHX(const VkPhysicalDeviceProperties2KHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    properties(in_struct->properties)
{
}

safe_VkPhysicalDeviceProperties2KHX::safe_VkPhysicalDeviceProperties2KHX()
{}

safe_VkPhysicalDeviceProperties2KHX::safe_VkPhysicalDeviceProperties2KHX(const safe_VkPhysicalDeviceProperties2KHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;
}

safe_VkPhysicalDeviceProperties2KHX::~safe_VkPhysicalDeviceProperties2KHX()
{
}

void safe_VkPhysicalDeviceProperties2KHX::initialize(const VkPhysicalDeviceProperties2KHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    properties = in_struct->properties;
}

void safe_VkPhysicalDeviceProperties2KHX::initialize(const safe_VkPhysicalDeviceProperties2KHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    properties = src->properties;
}

safe_VkImageFormatProperties2KHX::safe_VkImageFormatProperties2KHX(const VkImageFormatProperties2KHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    imageFormatProperties(in_struct->imageFormatProperties)
{
}

safe_VkImageFormatProperties2KHX::safe_VkImageFormatProperties2KHX()
{}

safe_VkImageFormatProperties2KHX::safe_VkImageFormatProperties2KHX(const safe_VkImageFormatProperties2KHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    imageFormatProperties = src.imageFormatProperties;
}

safe_VkImageFormatProperties2KHX::~safe_VkImageFormatProperties2KHX()
{
}

void safe_VkImageFormatProperties2KHX::initialize(const VkImageFormatProperties2KHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    imageFormatProperties = in_struct->imageFormatProperties;
}

void safe_VkImageFormatProperties2KHX::initialize(const safe_VkImageFormatProperties2KHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    imageFormatProperties = src->imageFormatProperties;
}

safe_VkPhysicalDeviceImageFormatInfo2KHX::safe_VkPhysicalDeviceImageFormatInfo2KHX(const VkPhysicalDeviceImageFormatInfo2KHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    format(in_struct->format),
    type(in_struct->type),
    tiling(in_struct->tiling),
    usage(in_struct->usage),
    flags(in_struct->flags)
{
}

safe_VkPhysicalDeviceImageFormatInfo2KHX::safe_VkPhysicalDeviceImageFormatInfo2KHX()
{}

safe_VkPhysicalDeviceImageFormatInfo2KHX::safe_VkPhysicalDeviceImageFormatInfo2KHX(const safe_VkPhysicalDeviceImageFormatInfo2KHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    tiling = src.tiling;
    usage = src.usage;
    flags = src.flags;
}

safe_VkPhysicalDeviceImageFormatInfo2KHX::~safe_VkPhysicalDeviceImageFormatInfo2KHX()
{
}

void safe_VkPhysicalDeviceImageFormatInfo2KHX::initialize(const VkPhysicalDeviceImageFormatInfo2KHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    format = in_struct->format;
    type = in_struct->type;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    flags = in_struct->flags;
}

void safe_VkPhysicalDeviceImageFormatInfo2KHX::initialize(const safe_VkPhysicalDeviceImageFormatInfo2KHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    format = src->format;
    type = src->type;
    tiling = src->tiling;
    usage = src->usage;
    flags = src->flags;
}

safe_VkExternalMemoryImageCreateInfoKHX::safe_VkExternalMemoryImageCreateInfoKHX(const VkExternalMemoryImageCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExternalMemoryImageCreateInfoKHX::safe_VkExternalMemoryImageCreateInfoKHX()
{}

safe_VkExternalMemoryImageCreateInfoKHX::safe_VkExternalMemoryImageCreateInfoKHX(const safe_VkExternalMemoryImageCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExternalMemoryImageCreateInfoKHX::~safe_VkExternalMemoryImageCreateInfoKHX()
{
}

void safe_VkExternalMemoryImageCreateInfoKHX::initialize(const VkExternalMemoryImageCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExternalMemoryImageCreateInfoKHX::initialize(const safe_VkExternalMemoryImageCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}

safe_VkExternalMemoryBufferCreateInfoKHX::safe_VkExternalMemoryBufferCreateInfoKHX(const VkExternalMemoryBufferCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExternalMemoryBufferCreateInfoKHX::safe_VkExternalMemoryBufferCreateInfoKHX()
{}

safe_VkExternalMemoryBufferCreateInfoKHX::safe_VkExternalMemoryBufferCreateInfoKHX(const safe_VkExternalMemoryBufferCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExternalMemoryBufferCreateInfoKHX::~safe_VkExternalMemoryBufferCreateInfoKHX()
{
}

void safe_VkExternalMemoryBufferCreateInfoKHX::initialize(const VkExternalMemoryBufferCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExternalMemoryBufferCreateInfoKHX::initialize(const safe_VkExternalMemoryBufferCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}

safe_VkExportMemoryAllocateInfoKHX::safe_VkExportMemoryAllocateInfoKHX(const VkExportMemoryAllocateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportMemoryAllocateInfoKHX::safe_VkExportMemoryAllocateInfoKHX()
{}

safe_VkExportMemoryAllocateInfoKHX::safe_VkExportMemoryAllocateInfoKHX(const safe_VkExportMemoryAllocateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportMemoryAllocateInfoKHX::~safe_VkExportMemoryAllocateInfoKHX()
{
}

void safe_VkExportMemoryAllocateInfoKHX::initialize(const VkExportMemoryAllocateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportMemoryAllocateInfoKHX::initialize(const safe_VkExportMemoryAllocateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkImportMemoryWin32HandleInfoKHX::safe_VkImportMemoryWin32HandleInfoKHX(const VkImportMemoryWin32HandleInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    handle(in_struct->handle)
{
}

safe_VkImportMemoryWin32HandleInfoKHX::safe_VkImportMemoryWin32HandleInfoKHX()
{}

safe_VkImportMemoryWin32HandleInfoKHX::safe_VkImportMemoryWin32HandleInfoKHX(const safe_VkImportMemoryWin32HandleInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    handle = src.handle;
}

safe_VkImportMemoryWin32HandleInfoKHX::~safe_VkImportMemoryWin32HandleInfoKHX()
{
}

void safe_VkImportMemoryWin32HandleInfoKHX::initialize(const VkImportMemoryWin32HandleInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
}

void safe_VkImportMemoryWin32HandleInfoKHX::initialize(const safe_VkImportMemoryWin32HandleInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    handle = src->handle;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkExportMemoryWin32HandleInfoKHX::safe_VkExportMemoryWin32HandleInfoKHX(const VkExportMemoryWin32HandleInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess),
    name(in_struct->name)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoKHX::safe_VkExportMemoryWin32HandleInfoKHX() :
    pAttributes(nullptr)
{}

safe_VkExportMemoryWin32HandleInfoKHX::safe_VkExportMemoryWin32HandleInfoKHX(const safe_VkExportMemoryWin32HandleInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoKHX::~safe_VkExportMemoryWin32HandleInfoKHX()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportMemoryWin32HandleInfoKHX::initialize(const VkExportMemoryWin32HandleInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportMemoryWin32HandleInfoKHX::initialize(const safe_VkExportMemoryWin32HandleInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    name = src->name;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkMemoryWin32HandlePropertiesKHX::safe_VkMemoryWin32HandlePropertiesKHX(const VkMemoryWin32HandlePropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryTypeBits(in_struct->memoryTypeBits)
{
}

safe_VkMemoryWin32HandlePropertiesKHX::safe_VkMemoryWin32HandlePropertiesKHX()
{}

safe_VkMemoryWin32HandlePropertiesKHX::safe_VkMemoryWin32HandlePropertiesKHX(const safe_VkMemoryWin32HandlePropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;
}

safe_VkMemoryWin32HandlePropertiesKHX::~safe_VkMemoryWin32HandlePropertiesKHX()
{
}

void safe_VkMemoryWin32HandlePropertiesKHX::initialize(const VkMemoryWin32HandlePropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryTypeBits = in_struct->memoryTypeBits;
}

void safe_VkMemoryWin32HandlePropertiesKHX::initialize(const safe_VkMemoryWin32HandlePropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryTypeBits = src->memoryTypeBits;
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkImportMemoryFdInfoKHX::safe_VkImportMemoryFdInfoKHX(const VkImportMemoryFdInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    fd(in_struct->fd)
{
}

safe_VkImportMemoryFdInfoKHX::safe_VkImportMemoryFdInfoKHX()
{}

safe_VkImportMemoryFdInfoKHX::safe_VkImportMemoryFdInfoKHX(const safe_VkImportMemoryFdInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    fd = src.fd;
}

safe_VkImportMemoryFdInfoKHX::~safe_VkImportMemoryFdInfoKHX()
{
}

void safe_VkImportMemoryFdInfoKHX::initialize(const VkImportMemoryFdInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
}

void safe_VkImportMemoryFdInfoKHX::initialize(const safe_VkImportMemoryFdInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    fd = src->fd;
}

safe_VkMemoryFdPropertiesKHX::safe_VkMemoryFdPropertiesKHX(const VkMemoryFdPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryTypeBits(in_struct->memoryTypeBits)
{
}

safe_VkMemoryFdPropertiesKHX::safe_VkMemoryFdPropertiesKHX()
{}

safe_VkMemoryFdPropertiesKHX::safe_VkMemoryFdPropertiesKHX(const safe_VkMemoryFdPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;
}

safe_VkMemoryFdPropertiesKHX::~safe_VkMemoryFdPropertiesKHX()
{
}

void safe_VkMemoryFdPropertiesKHX::initialize(const VkMemoryFdPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryTypeBits = in_struct->memoryTypeBits;
}

void safe_VkMemoryFdPropertiesKHX::initialize(const safe_VkMemoryFdPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryTypeBits = src->memoryTypeBits;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkWin32KeyedMutexAcquireReleaseInfoKHX::safe_VkWin32KeyedMutexAcquireReleaseInfoKHX(const VkWin32KeyedMutexAcquireReleaseInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    acquireCount(in_struct->acquireCount),
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeouts(nullptr),
    releaseCount(in_struct->releaseCount),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)in_struct->pAcquireTimeouts, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHX::safe_VkWin32KeyedMutexAcquireReleaseInfoKHX() :
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeouts(nullptr),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHX::safe_VkWin32KeyedMutexAcquireReleaseInfoKHX(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    acquireCount = src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src.pAcquireSyncs[i];
        }
    }
    if (src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[src.acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src.pAcquireKeys, sizeof(uint64_t)*src.acquireCount);
    }
    if (src.pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[src.acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)src.pAcquireTimeouts, sizeof(uint32_t)*src.acquireCount);
    }
    if (releaseCount && src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src.pReleaseSyncs[i];
        }
    }
    if (src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[src.releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src.pReleaseKeys, sizeof(uint64_t)*src.releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHX::~safe_VkWin32KeyedMutexAcquireReleaseInfoKHX()
{
    if (pAcquireSyncs)
        delete[] pAcquireSyncs;
    if (pAcquireKeys)
        delete[] pAcquireKeys;
    if (pAcquireTimeouts)
        delete[] pAcquireTimeouts;
    if (pReleaseSyncs)
        delete[] pReleaseSyncs;
    if (pReleaseKeys)
        delete[] pReleaseKeys;
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoKHX::initialize(const VkWin32KeyedMutexAcquireReleaseInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    acquireCount = in_struct->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = in_struct->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)in_struct->pAcquireTimeouts, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoKHX::initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    acquireCount = src->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = src->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src->pAcquireSyncs[i];
        }
    }
    if (src->pAcquireKeys) {
        pAcquireKeys = new uint64_t[src->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src->pAcquireKeys, sizeof(uint64_t)*src->acquireCount);
    }
    if (src->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[src->acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)src->pAcquireTimeouts, sizeof(uint32_t)*src->acquireCount);
    }
    if (releaseCount && src->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src->pReleaseSyncs[i];
        }
    }
    if (src->pReleaseKeys) {
        pReleaseKeys = new uint64_t[src->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src->pReleaseKeys, sizeof(uint64_t)*src->releaseCount);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkPhysicalDeviceExternalSemaphoreInfoKHX::safe_VkPhysicalDeviceExternalSemaphoreInfoKHX(const VkPhysicalDeviceExternalSemaphoreInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHX::safe_VkPhysicalDeviceExternalSemaphoreInfoKHX()
{}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHX::safe_VkPhysicalDeviceExternalSemaphoreInfoKHX(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHX::~safe_VkPhysicalDeviceExternalSemaphoreInfoKHX()
{
}

void safe_VkPhysicalDeviceExternalSemaphoreInfoKHX::initialize(const VkPhysicalDeviceExternalSemaphoreInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalSemaphoreInfoKHX::initialize(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
}

safe_VkExternalSemaphorePropertiesKHX::safe_VkExternalSemaphorePropertiesKHX(const VkExternalSemaphorePropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
    compatibleHandleTypes(in_struct->compatibleHandleTypes),
    externalSemaphoreFeatures(in_struct->externalSemaphoreFeatures)
{
}

safe_VkExternalSemaphorePropertiesKHX::safe_VkExternalSemaphorePropertiesKHX()
{}

safe_VkExternalSemaphorePropertiesKHX::safe_VkExternalSemaphorePropertiesKHX(const safe_VkExternalSemaphorePropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    exportFromImportedHandleTypes = src.exportFromImportedHandleTypes;
    compatibleHandleTypes = src.compatibleHandleTypes;
    externalSemaphoreFeatures = src.externalSemaphoreFeatures;
}

safe_VkExternalSemaphorePropertiesKHX::~safe_VkExternalSemaphorePropertiesKHX()
{
}

void safe_VkExternalSemaphorePropertiesKHX::initialize(const VkExternalSemaphorePropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalSemaphoreFeatures = in_struct->externalSemaphoreFeatures;
}

void safe_VkExternalSemaphorePropertiesKHX::initialize(const safe_VkExternalSemaphorePropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    exportFromImportedHandleTypes = src->exportFromImportedHandleTypes;
    compatibleHandleTypes = src->compatibleHandleTypes;
    externalSemaphoreFeatures = src->externalSemaphoreFeatures;
}

safe_VkExportSemaphoreCreateInfoKHX::safe_VkExportSemaphoreCreateInfoKHX(const VkExportSemaphoreCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportSemaphoreCreateInfoKHX::safe_VkExportSemaphoreCreateInfoKHX()
{}

safe_VkExportSemaphoreCreateInfoKHX::safe_VkExportSemaphoreCreateInfoKHX(const safe_VkExportSemaphoreCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportSemaphoreCreateInfoKHX::~safe_VkExportSemaphoreCreateInfoKHX()
{
}

void safe_VkExportSemaphoreCreateInfoKHX::initialize(const VkExportSemaphoreCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportSemaphoreCreateInfoKHX::initialize(const safe_VkExportSemaphoreCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHX


safe_VkImportSemaphoreWin32HandleInfoKHX::safe_VkImportSemaphoreWin32HandleInfoKHX(const VkImportSemaphoreWin32HandleInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    semaphore(in_struct->semaphore),
    handleType(in_struct->handleType),
    handle(in_struct->handle)
{
}

safe_VkImportSemaphoreWin32HandleInfoKHX::safe_VkImportSemaphoreWin32HandleInfoKHX()
{}

safe_VkImportSemaphoreWin32HandleInfoKHX::safe_VkImportSemaphoreWin32HandleInfoKHX(const safe_VkImportSemaphoreWin32HandleInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    handleType = src.handleType;
    handle = src.handle;
}

safe_VkImportSemaphoreWin32HandleInfoKHX::~safe_VkImportSemaphoreWin32HandleInfoKHX()
{
}

void safe_VkImportSemaphoreWin32HandleInfoKHX::initialize(const VkImportSemaphoreWin32HandleInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
}

void safe_VkImportSemaphoreWin32HandleInfoKHX::initialize(const safe_VkImportSemaphoreWin32HandleInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    semaphore = src->semaphore;
    handleType = src->handleType;
    handle = src->handle;
}
#endif // VK_USE_PLATFORM_WIN32_KHX

#ifdef VK_USE_PLATFORM_WIN32_KHX


safe_VkExportSemaphoreWin32HandleInfoKHX::safe_VkExportSemaphoreWin32HandleInfoKHX(const VkExportSemaphoreWin32HandleInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess),
    name(in_struct->name)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportSemaphoreWin32HandleInfoKHX::safe_VkExportSemaphoreWin32HandleInfoKHX() :
    pAttributes(nullptr)
{}

safe_VkExportSemaphoreWin32HandleInfoKHX::safe_VkExportSemaphoreWin32HandleInfoKHX(const safe_VkExportSemaphoreWin32HandleInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportSemaphoreWin32HandleInfoKHX::~safe_VkExportSemaphoreWin32HandleInfoKHX()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportSemaphoreWin32HandleInfoKHX::initialize(const VkExportSemaphoreWin32HandleInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportSemaphoreWin32HandleInfoKHX::initialize(const safe_VkExportSemaphoreWin32HandleInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    name = src->name;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHX

#ifdef VK_USE_PLATFORM_WIN32_KHX


safe_VkD3D12FenceSubmitInfoKHX::safe_VkD3D12FenceSubmitInfoKHX(const VkD3D12FenceSubmitInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreValuesCount(in_struct->waitSemaphoreValuesCount),
    pWaitSemaphoreValues(nullptr),
    signalSemaphoreValuesCount(in_struct->signalSemaphoreValuesCount),
    pSignalSemaphoreValues(nullptr)
{
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)in_struct->pWaitSemaphoreValues, sizeof(uint64_t)*in_struct->waitSemaphoreValuesCount);
    }
    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)in_struct->pSignalSemaphoreValues, sizeof(uint64_t)*in_struct->signalSemaphoreValuesCount);
    }
}

safe_VkD3D12FenceSubmitInfoKHX::safe_VkD3D12FenceSubmitInfoKHX() :
    pWaitSemaphoreValues(nullptr),
    pSignalSemaphoreValues(nullptr)
{}

safe_VkD3D12FenceSubmitInfoKHX::safe_VkD3D12FenceSubmitInfoKHX(const safe_VkD3D12FenceSubmitInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreValuesCount = src.waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = src.signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[src.waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)src.pWaitSemaphoreValues, sizeof(uint64_t)*src.waitSemaphoreValuesCount);
    }
    if (src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[src.signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)src.pSignalSemaphoreValues, sizeof(uint64_t)*src.signalSemaphoreValuesCount);
    }
}

safe_VkD3D12FenceSubmitInfoKHX::~safe_VkD3D12FenceSubmitInfoKHX()
{
    if (pWaitSemaphoreValues)
        delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues)
        delete[] pSignalSemaphoreValues;
}

void safe_VkD3D12FenceSubmitInfoKHX::initialize(const VkD3D12FenceSubmitInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreValuesCount = in_struct->waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = in_struct->signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)in_struct->pWaitSemaphoreValues, sizeof(uint64_t)*in_struct->waitSemaphoreValuesCount);
    }
    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)in_struct->pSignalSemaphoreValues, sizeof(uint64_t)*in_struct->signalSemaphoreValuesCount);
    }
}

void safe_VkD3D12FenceSubmitInfoKHX::initialize(const safe_VkD3D12FenceSubmitInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreValuesCount = src->waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = src->signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (src->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[src->waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)src->pWaitSemaphoreValues, sizeof(uint64_t)*src->waitSemaphoreValuesCount);
    }
    if (src->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[src->signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)src->pSignalSemaphoreValues, sizeof(uint64_t)*src->signalSemaphoreValuesCount);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHX


safe_VkImportSemaphoreFdInfoKHX::safe_VkImportSemaphoreFdInfoKHX(const VkImportSemaphoreFdInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    semaphore(in_struct->semaphore),
    handleType(in_struct->handleType),
    fd(in_struct->fd)
{
}

safe_VkImportSemaphoreFdInfoKHX::safe_VkImportSemaphoreFdInfoKHX()
{}

safe_VkImportSemaphoreFdInfoKHX::safe_VkImportSemaphoreFdInfoKHX(const safe_VkImportSemaphoreFdInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    handleType = src.handleType;
    fd = src.fd;
}

safe_VkImportSemaphoreFdInfoKHX::~safe_VkImportSemaphoreFdInfoKHX()
{
}

void safe_VkImportSemaphoreFdInfoKHX::initialize(const VkImportSemaphoreFdInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
}

void safe_VkImportSemaphoreFdInfoKHX::initialize(const safe_VkImportSemaphoreFdInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    semaphore = src->semaphore;
    handleType = src->handleType;
    fd = src->fd;
}

safe_VkDeviceGeneratedCommandsFeaturesNVX::safe_VkDeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    computeBindingPointSupport(in_struct->computeBindingPointSupport)
{
}

safe_VkDeviceGeneratedCommandsFeaturesNVX::safe_VkDeviceGeneratedCommandsFeaturesNVX()
{}

safe_VkDeviceGeneratedCommandsFeaturesNVX::safe_VkDeviceGeneratedCommandsFeaturesNVX(const safe_VkDeviceGeneratedCommandsFeaturesNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    computeBindingPointSupport = src.computeBindingPointSupport;
}

safe_VkDeviceGeneratedCommandsFeaturesNVX::~safe_VkDeviceGeneratedCommandsFeaturesNVX()
{
}

void safe_VkDeviceGeneratedCommandsFeaturesNVX::initialize(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    computeBindingPointSupport = in_struct->computeBindingPointSupport;
}

void safe_VkDeviceGeneratedCommandsFeaturesNVX::initialize(const safe_VkDeviceGeneratedCommandsFeaturesNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    computeBindingPointSupport = src->computeBindingPointSupport;
}

safe_VkDeviceGeneratedCommandsLimitsNVX::safe_VkDeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxIndirectCommandsLayoutTokenCount(in_struct->maxIndirectCommandsLayoutTokenCount),
    maxObjectEntryCounts(in_struct->maxObjectEntryCounts),
    minSequenceCountBufferOffsetAlignment(in_struct->minSequenceCountBufferOffsetAlignment),
    minSequenceIndexBufferOffsetAlignment(in_struct->minSequenceIndexBufferOffsetAlignment),
    minCommandsTokenBufferOffsetAlignment(in_struct->minCommandsTokenBufferOffsetAlignment)
{
}

safe_VkDeviceGeneratedCommandsLimitsNVX::safe_VkDeviceGeneratedCommandsLimitsNVX()
{}

safe_VkDeviceGeneratedCommandsLimitsNVX::safe_VkDeviceGeneratedCommandsLimitsNVX(const safe_VkDeviceGeneratedCommandsLimitsNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxIndirectCommandsLayoutTokenCount = src.maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = src.maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = src.minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = src.minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = src.minCommandsTokenBufferOffsetAlignment;
}

safe_VkDeviceGeneratedCommandsLimitsNVX::~safe_VkDeviceGeneratedCommandsLimitsNVX()
{
}

void safe_VkDeviceGeneratedCommandsLimitsNVX::initialize(const VkDeviceGeneratedCommandsLimitsNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxIndirectCommandsLayoutTokenCount = in_struct->maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = in_struct->maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = in_struct->minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = in_struct->minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = in_struct->minCommandsTokenBufferOffsetAlignment;
}

void safe_VkDeviceGeneratedCommandsLimitsNVX::initialize(const safe_VkDeviceGeneratedCommandsLimitsNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxIndirectCommandsLayoutTokenCount = src->maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = src->maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = src->minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = src->minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = src->minCommandsTokenBufferOffsetAlignment;
}

safe_VkIndirectCommandsLayoutCreateInfoNVX::safe_VkIndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pipelineBindPoint(in_struct->pipelineBindPoint),
    flags(in_struct->flags),
    tokenCount(in_struct->tokenCount),
    pTokens(nullptr)
{
    if (in_struct->pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[in_struct->tokenCount];
        memcpy ((void *)pTokens, (void *)in_struct->pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*in_struct->tokenCount);
    }
}

safe_VkIndirectCommandsLayoutCreateInfoNVX::safe_VkIndirectCommandsLayoutCreateInfoNVX() :
    pTokens(nullptr)
{}

safe_VkIndirectCommandsLayoutCreateInfoNVX::safe_VkIndirectCommandsLayoutCreateInfoNVX(const safe_VkIndirectCommandsLayoutCreateInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pipelineBindPoint = src.pipelineBindPoint;
    flags = src.flags;
    tokenCount = src.tokenCount;
    pTokens = nullptr;
    if (src.pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[src.tokenCount];
        memcpy ((void *)pTokens, (void *)src.pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*src.tokenCount);
    }
}

safe_VkIndirectCommandsLayoutCreateInfoNVX::~safe_VkIndirectCommandsLayoutCreateInfoNVX()
{
    if (pTokens)
        delete[] pTokens;
}

void safe_VkIndirectCommandsLayoutCreateInfoNVX::initialize(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    flags = in_struct->flags;
    tokenCount = in_struct->tokenCount;
    pTokens = nullptr;
    if (in_struct->pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[in_struct->tokenCount];
        memcpy ((void *)pTokens, (void *)in_struct->pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*in_struct->tokenCount);
    }
}

void safe_VkIndirectCommandsLayoutCreateInfoNVX::initialize(const safe_VkIndirectCommandsLayoutCreateInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pipelineBindPoint = src->pipelineBindPoint;
    flags = src->flags;
    tokenCount = src->tokenCount;
    pTokens = nullptr;
    if (src->pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[src->tokenCount];
        memcpy ((void *)pTokens, (void *)src->pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*src->tokenCount);
    }
}

safe_VkCmdProcessCommandsInfoNVX::safe_VkCmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectTable(in_struct->objectTable),
    indirectCommandsLayout(in_struct->indirectCommandsLayout),
    indirectCommandsTokenCount(in_struct->indirectCommandsTokenCount),
    pIndirectCommandsTokens(nullptr),
    maxSequencesCount(in_struct->maxSequencesCount),
    targetCommandBuffer(in_struct->targetCommandBuffer),
    sequencesCountBuffer(in_struct->sequencesCountBuffer),
    sequencesCountOffset(in_struct->sequencesCountOffset),
    sequencesIndexBuffer(in_struct->sequencesIndexBuffer),
    sequencesIndexOffset(in_struct->sequencesIndexOffset)
{
    if (indirectCommandsTokenCount && in_struct->pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = in_struct->pIndirectCommandsTokens[i];
        }
    }
}

safe_VkCmdProcessCommandsInfoNVX::safe_VkCmdProcessCommandsInfoNVX() :
    pIndirectCommandsTokens(nullptr)
{}

safe_VkCmdProcessCommandsInfoNVX::safe_VkCmdProcessCommandsInfoNVX(const safe_VkCmdProcessCommandsInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectTable = src.objectTable;
    indirectCommandsLayout = src.indirectCommandsLayout;
    indirectCommandsTokenCount = src.indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = src.maxSequencesCount;
    targetCommandBuffer = src.targetCommandBuffer;
    sequencesCountBuffer = src.sequencesCountBuffer;
    sequencesCountOffset = src.sequencesCountOffset;
    sequencesIndexBuffer = src.sequencesIndexBuffer;
    sequencesIndexOffset = src.sequencesIndexOffset;
    if (indirectCommandsTokenCount && src.pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = src.pIndirectCommandsTokens[i];
        }
    }
}

safe_VkCmdProcessCommandsInfoNVX::~safe_VkCmdProcessCommandsInfoNVX()
{
    if (pIndirectCommandsTokens)
        delete[] pIndirectCommandsTokens;
}

void safe_VkCmdProcessCommandsInfoNVX::initialize(const VkCmdProcessCommandsInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectTable = in_struct->objectTable;
    indirectCommandsLayout = in_struct->indirectCommandsLayout;
    indirectCommandsTokenCount = in_struct->indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = in_struct->maxSequencesCount;
    targetCommandBuffer = in_struct->targetCommandBuffer;
    sequencesCountBuffer = in_struct->sequencesCountBuffer;
    sequencesCountOffset = in_struct->sequencesCountOffset;
    sequencesIndexBuffer = in_struct->sequencesIndexBuffer;
    sequencesIndexOffset = in_struct->sequencesIndexOffset;
    if (indirectCommandsTokenCount && in_struct->pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = in_struct->pIndirectCommandsTokens[i];
        }
    }
}

void safe_VkCmdProcessCommandsInfoNVX::initialize(const safe_VkCmdProcessCommandsInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectTable = src->objectTable;
    indirectCommandsLayout = src->indirectCommandsLayout;
    indirectCommandsTokenCount = src->indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = src->maxSequencesCount;
    targetCommandBuffer = src->targetCommandBuffer;
    sequencesCountBuffer = src->sequencesCountBuffer;
    sequencesCountOffset = src->sequencesCountOffset;
    sequencesIndexBuffer = src->sequencesIndexBuffer;
    sequencesIndexOffset = src->sequencesIndexOffset;
    if (indirectCommandsTokenCount && src->pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = src->pIndirectCommandsTokens[i];
        }
    }
}

safe_VkCmdReserveSpaceForCommandsInfoNVX::safe_VkCmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectTable(in_struct->objectTable),
    indirectCommandsLayout(in_struct->indirectCommandsLayout),
    maxSequencesCount(in_struct->maxSequencesCount)
{
}

safe_VkCmdReserveSpaceForCommandsInfoNVX::safe_VkCmdReserveSpaceForCommandsInfoNVX()
{}

safe_VkCmdReserveSpaceForCommandsInfoNVX::safe_VkCmdReserveSpaceForCommandsInfoNVX(const safe_VkCmdReserveSpaceForCommandsInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectTable = src.objectTable;
    indirectCommandsLayout = src.indirectCommandsLayout;
    maxSequencesCount = src.maxSequencesCount;
}

safe_VkCmdReserveSpaceForCommandsInfoNVX::~safe_VkCmdReserveSpaceForCommandsInfoNVX()
{
}

void safe_VkCmdReserveSpaceForCommandsInfoNVX::initialize(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectTable = in_struct->objectTable;
    indirectCommandsLayout = in_struct->indirectCommandsLayout;
    maxSequencesCount = in_struct->maxSequencesCount;
}

void safe_VkCmdReserveSpaceForCommandsInfoNVX::initialize(const safe_VkCmdReserveSpaceForCommandsInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectTable = src->objectTable;
    indirectCommandsLayout = src->indirectCommandsLayout;
    maxSequencesCount = src->maxSequencesCount;
}

safe_VkObjectTableCreateInfoNVX::safe_VkObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectCount(in_struct->objectCount),
    pObjectEntryTypes(nullptr),
    pObjectEntryCounts(nullptr),
    pObjectEntryUsageFlags(nullptr),
    maxUniformBuffersPerDescriptor(in_struct->maxUniformBuffersPerDescriptor),
    maxStorageBuffersPerDescriptor(in_struct->maxStorageBuffersPerDescriptor),
    maxStorageImagesPerDescriptor(in_struct->maxStorageImagesPerDescriptor),
    maxSampledImagesPerDescriptor(in_struct->maxSampledImagesPerDescriptor),
    maxPipelineLayouts(in_struct->maxPipelineLayouts)
{
    if (in_struct->pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)in_struct->pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[in_struct->objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)in_struct->pObjectEntryCounts, sizeof(uint32_t)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)in_struct->pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*in_struct->objectCount);
    }
}

safe_VkObjectTableCreateInfoNVX::safe_VkObjectTableCreateInfoNVX() :
    pObjectEntryTypes(nullptr),
    pObjectEntryCounts(nullptr),
    pObjectEntryUsageFlags(nullptr)
{}

safe_VkObjectTableCreateInfoNVX::safe_VkObjectTableCreateInfoNVX(const safe_VkObjectTableCreateInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectCount = src.objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = src.maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = src.maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = src.maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = src.maxSampledImagesPerDescriptor;
    maxPipelineLayouts = src.maxPipelineLayouts;
    if (src.pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[src.objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)src.pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*src.objectCount);
    }
    if (src.pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[src.objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)src.pObjectEntryCounts, sizeof(uint32_t)*src.objectCount);
    }
    if (src.pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[src.objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)src.pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*src.objectCount);
    }
}

safe_VkObjectTableCreateInfoNVX::~safe_VkObjectTableCreateInfoNVX()
{
    if (pObjectEntryTypes)
        delete[] pObjectEntryTypes;
    if (pObjectEntryCounts)
        delete[] pObjectEntryCounts;
    if (pObjectEntryUsageFlags)
        delete[] pObjectEntryUsageFlags;
}

void safe_VkObjectTableCreateInfoNVX::initialize(const VkObjectTableCreateInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectCount = in_struct->objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = in_struct->maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = in_struct->maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = in_struct->maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = in_struct->maxSampledImagesPerDescriptor;
    maxPipelineLayouts = in_struct->maxPipelineLayouts;
    if (in_struct->pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)in_struct->pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[in_struct->objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)in_struct->pObjectEntryCounts, sizeof(uint32_t)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)in_struct->pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*in_struct->objectCount);
    }
}

void safe_VkObjectTableCreateInfoNVX::initialize(const safe_VkObjectTableCreateInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectCount = src->objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = src->maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = src->maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = src->maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = src->maxSampledImagesPerDescriptor;
    maxPipelineLayouts = src->maxPipelineLayouts;
    if (src->pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[src->objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)src->pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*src->objectCount);
    }
    if (src->pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[src->objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)src->pObjectEntryCounts, sizeof(uint32_t)*src->objectCount);
    }
    if (src->pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[src->objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)src->pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*src->objectCount);
    }
}

safe_VkPipelineViewportWScalingStateCreateInfoNV::safe_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    viewportWScalingEnable(in_struct->viewportWScalingEnable),
    viewportCount(in_struct->viewportCount),
    pViewportWScalings(nullptr)
{
    if (in_struct->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[in_struct->viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)in_struct->pViewportWScalings, sizeof(VkViewportWScalingNV)*in_struct->viewportCount);
    }
}

safe_VkPipelineViewportWScalingStateCreateInfoNV::safe_VkPipelineViewportWScalingStateCreateInfoNV() :
    pViewportWScalings(nullptr)
{}

safe_VkPipelineViewportWScalingStateCreateInfoNV::safe_VkPipelineViewportWScalingStateCreateInfoNV(const safe_VkPipelineViewportWScalingStateCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    viewportWScalingEnable = src.viewportWScalingEnable;
    viewportCount = src.viewportCount;
    pViewportWScalings = nullptr;
    if (src.pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[src.viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)src.pViewportWScalings, sizeof(VkViewportWScalingNV)*src.viewportCount);
    }
}

safe_VkPipelineViewportWScalingStateCreateInfoNV::~safe_VkPipelineViewportWScalingStateCreateInfoNV()
{
    if (pViewportWScalings)
        delete[] pViewportWScalings;
}

void safe_VkPipelineViewportWScalingStateCreateInfoNV::initialize(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    viewportWScalingEnable = in_struct->viewportWScalingEnable;
    viewportCount = in_struct->viewportCount;
    pViewportWScalings = nullptr;
    if (in_struct->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[in_struct->viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)in_struct->pViewportWScalings, sizeof(VkViewportWScalingNV)*in_struct->viewportCount);
    }
}

void safe_VkPipelineViewportWScalingStateCreateInfoNV::initialize(const safe_VkPipelineViewportWScalingStateCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    viewportWScalingEnable = src->viewportWScalingEnable;
    viewportCount = src->viewportCount;
    pViewportWScalings = nullptr;
    if (src->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[src->viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)src->pViewportWScalings, sizeof(VkViewportWScalingNV)*src->viewportCount);
    }
}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    minImageCount(in_struct->minImageCount),
    maxImageCount(in_struct->maxImageCount),
    currentExtent(in_struct->currentExtent),
    minImageExtent(in_struct->minImageExtent),
    maxImageExtent(in_struct->maxImageExtent),
    maxImageArrayLayers(in_struct->maxImageArrayLayers),
    supportedTransforms(in_struct->supportedTransforms),
    currentTransform(in_struct->currentTransform),
    supportedCompositeAlpha(in_struct->supportedCompositeAlpha),
    supportedUsageFlags(in_struct->supportedUsageFlags),
    supportedSurfaceCounters(in_struct->supportedSurfaceCounters)
{
}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT()
{}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT(const safe_VkSurfaceCapabilities2EXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    minImageCount = src.minImageCount;
    maxImageCount = src.maxImageCount;
    currentExtent = src.currentExtent;
    minImageExtent = src.minImageExtent;
    maxImageExtent = src.maxImageExtent;
    maxImageArrayLayers = src.maxImageArrayLayers;
    supportedTransforms = src.supportedTransforms;
    currentTransform = src.currentTransform;
    supportedCompositeAlpha = src.supportedCompositeAlpha;
    supportedUsageFlags = src.supportedUsageFlags;
    supportedSurfaceCounters = src.supportedSurfaceCounters;
}

safe_VkSurfaceCapabilities2EXT::~safe_VkSurfaceCapabilities2EXT()
{
}

void safe_VkSurfaceCapabilities2EXT::initialize(const VkSurfaceCapabilities2EXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    minImageCount = in_struct->minImageCount;
    maxImageCount = in_struct->maxImageCount;
    currentExtent = in_struct->currentExtent;
    minImageExtent = in_struct->minImageExtent;
    maxImageExtent = in_struct->maxImageExtent;
    maxImageArrayLayers = in_struct->maxImageArrayLayers;
    supportedTransforms = in_struct->supportedTransforms;
    currentTransform = in_struct->currentTransform;
    supportedCompositeAlpha = in_struct->supportedCompositeAlpha;
    supportedUsageFlags = in_struct->supportedUsageFlags;
    supportedSurfaceCounters = in_struct->supportedSurfaceCounters;
}

void safe_VkSurfaceCapabilities2EXT::initialize(const safe_VkSurfaceCapabilities2EXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    minImageCount = src->minImageCount;
    maxImageCount = src->maxImageCount;
    currentExtent = src->currentExtent;
    minImageExtent = src->minImageExtent;
    maxImageExtent = src->maxImageExtent;
    maxImageArrayLayers = src->maxImageArrayLayers;
    supportedTransforms = src->supportedTransforms;
    currentTransform = src->currentTransform;
    supportedCompositeAlpha = src->supportedCompositeAlpha;
    supportedUsageFlags = src->supportedUsageFlags;
    supportedSurfaceCounters = src->supportedSurfaceCounters;
}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    powerState(in_struct->powerState)
{
}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT()
{}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT(const safe_VkDisplayPowerInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    powerState = src.powerState;
}

safe_VkDisplayPowerInfoEXT::~safe_VkDisplayPowerInfoEXT()
{
}

void safe_VkDisplayPowerInfoEXT::initialize(const VkDisplayPowerInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    powerState = in_struct->powerState;
}

void safe_VkDisplayPowerInfoEXT::initialize(const safe_VkDisplayPowerInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    powerState = src->powerState;
}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceEvent(in_struct->deviceEvent)
{
}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT()
{}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT(const safe_VkDeviceEventInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceEvent = src.deviceEvent;
}

safe_VkDeviceEventInfoEXT::~safe_VkDeviceEventInfoEXT()
{
}

void safe_VkDeviceEventInfoEXT::initialize(const VkDeviceEventInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceEvent = in_struct->deviceEvent;
}

void safe_VkDeviceEventInfoEXT::initialize(const safe_VkDeviceEventInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceEvent = src->deviceEvent;
}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    displayEvent(in_struct->displayEvent)
{
}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT()
{}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT(const safe_VkDisplayEventInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    displayEvent = src.displayEvent;
}

safe_VkDisplayEventInfoEXT::~safe_VkDisplayEventInfoEXT()
{
}

void safe_VkDisplayEventInfoEXT::initialize(const VkDisplayEventInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    displayEvent = in_struct->displayEvent;
}

void safe_VkDisplayEventInfoEXT::initialize(const safe_VkDisplayEventInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    displayEvent = src->displayEvent;
}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    surfaceCounters(in_struct->surfaceCounters)
{
}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT()
{}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT(const safe_VkSwapchainCounterCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    surfaceCounters = src.surfaceCounters;
}

safe_VkSwapchainCounterCreateInfoEXT::~safe_VkSwapchainCounterCreateInfoEXT()
{
}

void safe_VkSwapchainCounterCreateInfoEXT::initialize(const VkSwapchainCounterCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    surfaceCounters = in_struct->surfaceCounters;
}

void safe_VkSwapchainCounterCreateInfoEXT::initialize(const safe_VkSwapchainCounterCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    surfaceCounters = src->surfaceCounters;
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    perViewPositionAllComponents(in_struct->perViewPositionAllComponents)
{
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX()
{}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    perViewPositionAllComponents = src.perViewPositionAllComponents;
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::~safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX()
{
}

void safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::initialize(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    perViewPositionAllComponents = in_struct->perViewPositionAllComponents;
}

void safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::initialize(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    perViewPositionAllComponents = src->perViewPositionAllComponents;
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::safe_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    viewportCount(in_struct->viewportCount),
    pViewportSwizzles(nullptr)
{
    if (in_struct->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[in_struct->viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)in_struct->pViewportSwizzles, sizeof(VkViewportSwizzleNV)*in_struct->viewportCount);
    }
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::safe_VkPipelineViewportSwizzleStateCreateInfoNV() :
    pViewportSwizzles(nullptr)
{}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::safe_VkPipelineViewportSwizzleStateCreateInfoNV(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    viewportCount = src.viewportCount;
    pViewportSwizzles = nullptr;
    if (src.pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[src.viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)src.pViewportSwizzles, sizeof(VkViewportSwizzleNV)*src.viewportCount);
    }
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::~safe_VkPipelineViewportSwizzleStateCreateInfoNV()
{
    if (pViewportSwizzles)
        delete[] pViewportSwizzles;
}

void safe_VkPipelineViewportSwizzleStateCreateInfoNV::initialize(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewportSwizzles = nullptr;
    if (in_struct->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[in_struct->viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)in_struct->pViewportSwizzles, sizeof(VkViewportSwizzleNV)*in_struct->viewportCount);
    }
}

void safe_VkPipelineViewportSwizzleStateCreateInfoNV::initialize(const safe_VkPipelineViewportSwizzleStateCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    viewportCount = src->viewportCount;
    pViewportSwizzles = nullptr;
    if (src->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[src->viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)src->pViewportSwizzles, sizeof(VkViewportSwizzleNV)*src->viewportCount);
    }
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxDiscardRectangles(in_struct->maxDiscardRectangles)
{
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT()
{}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxDiscardRectangles = src.maxDiscardRectangles;
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::~safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT()
{
}

void safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxDiscardRectangles = in_struct->maxDiscardRectangles;
}

void safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxDiscardRectangles = src->maxDiscardRectangles;
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    discardRectangleMode(in_struct->discardRectangleMode),
    discardRectangleCount(in_struct->discardRectangleCount),
    pDiscardRectangles(nullptr)
{
    if (in_struct->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[in_struct->discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)in_struct->pDiscardRectangles, sizeof(VkRect2D)*in_struct->discardRectangleCount);
    }
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT() :
    pDiscardRectangles(nullptr)
{}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    discardRectangleMode = src.discardRectangleMode;
    discardRectangleCount = src.discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (src.pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[src.discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)src.pDiscardRectangles, sizeof(VkRect2D)*src.discardRectangleCount);
    }
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::~safe_VkPipelineDiscardRectangleStateCreateInfoEXT()
{
    if (pDiscardRectangles)
        delete[] pDiscardRectangles;
}

void safe_VkPipelineDiscardRectangleStateCreateInfoEXT::initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    discardRectangleMode = in_struct->discardRectangleMode;
    discardRectangleCount = in_struct->discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (in_struct->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[in_struct->discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)in_struct->pDiscardRectangles, sizeof(VkRect2D)*in_struct->discardRectangleCount);
    }
}

void safe_VkPipelineDiscardRectangleStateCreateInfoEXT::initialize(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    discardRectangleMode = src->discardRectangleMode;
    discardRectangleCount = src->discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (src->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[src->discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)src->pDiscardRectangles, sizeof(VkRect2D)*src->discardRectangleCount);
    }
}
#ifdef VK_USE_PLATFORM_IOS_MVK


safe_VkIOSSurfaceCreateInfoMVK::safe_VkIOSSurfaceCreateInfoMVK(const VkIOSSurfaceCreateInfoMVK* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    pView(in_struct->pView)
{
}

safe_VkIOSSurfaceCreateInfoMVK::safe_VkIOSSurfaceCreateInfoMVK()
{}

safe_VkIOSSurfaceCreateInfoMVK::safe_VkIOSSurfaceCreateInfoMVK(const safe_VkIOSSurfaceCreateInfoMVK& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pView = src.pView;
}

safe_VkIOSSurfaceCreateInfoMVK::~safe_VkIOSSurfaceCreateInfoMVK()
{
}

void safe_VkIOSSurfaceCreateInfoMVK::initialize(const VkIOSSurfaceCreateInfoMVK* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    pView = in_struct->pView;
}

void safe_VkIOSSurfaceCreateInfoMVK::initialize(const safe_VkIOSSurfaceCreateInfoMVK* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    pView = src->pView;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK


safe_VkMacOSSurfaceCreateInfoMVK::safe_VkMacOSSurfaceCreateInfoMVK(const VkMacOSSurfaceCreateInfoMVK* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    pView(in_struct->pView)
{
}

safe_VkMacOSSurfaceCreateInfoMVK::safe_VkMacOSSurfaceCreateInfoMVK()
{}

safe_VkMacOSSurfaceCreateInfoMVK::safe_VkMacOSSurfaceCreateInfoMVK(const safe_VkMacOSSurfaceCreateInfoMVK& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pView = src.pView;
}

safe_VkMacOSSurfaceCreateInfoMVK::~safe_VkMacOSSurfaceCreateInfoMVK()
{
}

void safe_VkMacOSSurfaceCreateInfoMVK::initialize(const VkMacOSSurfaceCreateInfoMVK* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    pView = in_struct->pView;
}

void safe_VkMacOSSurfaceCreateInfoMVK::initialize(const safe_VkMacOSSurfaceCreateInfoMVK* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    pView = src->pView;
}
#endif // VK_USE_PLATFORM_MACOS_MVK
