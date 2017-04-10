/*
** Copyright (c) 2015-2017 The Khronos Group Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

/*
** This header is generated from the Khronos Vulkan XML API Registry.
**
*/


namespace unique_objects {


// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateInstance(
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyInstance(
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetInstanceProcAddr(
    VkInstance                                  instance,
    const char*                                 pName);

// Declare only
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetDeviceProcAddr(
    VkDevice                                    device,
    const char*                                 pName);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateDevice(
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyDevice(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateInstanceExtensionProperties(
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateInstanceLayerProperties(
    uint32_t*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateDeviceLayerProperties(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);

VKAPI_ATTR VkResult VKAPI_CALL QueueSubmit(
    VkQueue                                     queue,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map);
    safe_VkSubmitInfo *local_pSubmits = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pSubmits) {
            local_pSubmits = new safe_VkSubmitInfo[submitCount];
            for (uint32_t index0 = 0; index0 < submitCount; ++index0) {
                local_pSubmits[index0].initialize(&pSubmits[index0]);
                if (local_pSubmits[index0].pWaitSemaphores) {
                    for (uint32_t index1 = 0; index1 < local_pSubmits[index0].waitSemaphoreCount; ++index1) {
                        local_pSubmits[index0].pWaitSemaphores[index1] = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pSubmits[index0].pWaitSemaphores[index1])];
                    }
                }
                if (local_pSubmits[index0].pSignalSemaphores) {
                    for (uint32_t index1 = 0; index1 < local_pSubmits[index0].signalSemaphoreCount; ++index1) {
                        local_pSubmits[index0].pSignalSemaphores[index1] = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pSubmits[index0].pSignalSemaphores[index1])];
                    }
                }
            }
        }
        fence = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(fence)];
    }
    VkResult result = dev_data->device_dispatch_table->QueueSubmit(queue, submitCount, (const VkSubmitInfo*)local_pSubmits, fence);
    if (local_pSubmits)
        delete[] local_pSubmits;
    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL AllocateMemory(
    VkDevice                                    device,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory);

VKAPI_ATTR void VKAPI_CALL FreeMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t memory_id = reinterpret_cast<uint64_t &>(memory);
    memory = (VkDeviceMemory)dev_data->unique_id_mapping[memory_id];
    dev_data->unique_id_mapping.erase(memory_id);
    lock.unlock();
    dev_data->device_dispatch_table->FreeMemory(device, memory, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL MapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    VkResult result = dev_data->device_dispatch_table->MapMemory(device, memory, offset, size, flags, ppData);

    return result;
}

VKAPI_ATTR void VKAPI_CALL UnmapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    dev_data->device_dispatch_table->UnmapMemory(device, memory);

}

VKAPI_ATTR VkResult VKAPI_CALL FlushMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkMappedMemoryRange *local_pMemoryRanges = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pMemoryRanges) {
            local_pMemoryRanges = new safe_VkMappedMemoryRange[memoryRangeCount];
            for (uint32_t index0 = 0; index0 < memoryRangeCount; ++index0) {
                local_pMemoryRanges[index0].initialize(&pMemoryRanges[index0]);
                if (pMemoryRanges[index0].memory) {
                    local_pMemoryRanges[index0].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pMemoryRanges[index0].memory)];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->FlushMappedMemoryRanges(device, memoryRangeCount, (const VkMappedMemoryRange*)local_pMemoryRanges);
    if (local_pMemoryRanges)
        delete[] local_pMemoryRanges;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL InvalidateMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkMappedMemoryRange *local_pMemoryRanges = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pMemoryRanges) {
            local_pMemoryRanges = new safe_VkMappedMemoryRange[memoryRangeCount];
            for (uint32_t index0 = 0; index0 < memoryRangeCount; ++index0) {
                local_pMemoryRanges[index0].initialize(&pMemoryRanges[index0]);
                if (pMemoryRanges[index0].memory) {
                    local_pMemoryRanges[index0].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pMemoryRanges[index0].memory)];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->InvalidateMappedMemoryRanges(device, memoryRangeCount, (const VkMappedMemoryRange*)local_pMemoryRanges);
    if (local_pMemoryRanges)
        delete[] local_pMemoryRanges;
    return result;
}

VKAPI_ATTR void VKAPI_CALL GetDeviceMemoryCommitment(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    dev_data->device_dispatch_table->GetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);

}

VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    VkResult result = dev_data->device_dispatch_table->BindBufferMemory(device, buffer, memory, memoryOffset);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory(
    VkDevice                                    device,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(image)];
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    VkResult result = dev_data->device_dispatch_table->BindImageMemory(device, image, memory, memoryOffset);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
    }
    dev_data->device_dispatch_table->GetBufferMemoryRequirements(device, buffer, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(image)];
    }
    dev_data->device_dispatch_table->GetImageMemoryRequirements(device, image, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(image)];
    }
    dev_data->device_dispatch_table->GetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);

}

VKAPI_ATTR VkResult VKAPI_CALL QueueBindSparse(
    VkQueue                                     queue,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map);
    safe_VkBindSparseInfo *local_pBindInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pBindInfo) {
            local_pBindInfo = new safe_VkBindSparseInfo[bindInfoCount];
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                local_pBindInfo[index0].initialize(&pBindInfo[index0]);
                if (local_pBindInfo[index0].pWaitSemaphores) {
                    for (uint32_t index1 = 0; index1 < local_pBindInfo[index0].waitSemaphoreCount; ++index1) {
                        local_pBindInfo[index0].pWaitSemaphores[index1] = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pBindInfo[index0].pWaitSemaphores[index1])];
                    }
                }
                if (local_pBindInfo[index0].pBufferBinds) {
                    for (uint32_t index1 = 0; index1 < local_pBindInfo[index0].bufferBindCount; ++index1) {
                        if (pBindInfo[index0].pBufferBinds[index1].buffer) {
                            local_pBindInfo[index0].pBufferBinds[index1].buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfo[index0].pBufferBinds[index1].buffer)];
                        }
                        if (local_pBindInfo[index0].pBufferBinds[index1].pBinds) {
                            for (uint32_t index2 = 0; index2 < local_pBindInfo[index0].pBufferBinds[index1].bindCount; ++index2) {
                                if (pBindInfo[index0].pBufferBinds[index1].pBinds[index2].memory) {
                                    local_pBindInfo[index0].pBufferBinds[index1].pBinds[index2].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfo[index0].pBufferBinds[index1].pBinds[index2].memory)];
                                }
                            }
                        }
                    }
                }
                if (local_pBindInfo[index0].pImageOpaqueBinds) {
                    for (uint32_t index1 = 0; index1 < local_pBindInfo[index0].imageOpaqueBindCount; ++index1) {
                        if (pBindInfo[index0].pImageOpaqueBinds[index1].image) {
                            local_pBindInfo[index0].pImageOpaqueBinds[index1].image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfo[index0].pImageOpaqueBinds[index1].image)];
                        }
                        if (local_pBindInfo[index0].pImageOpaqueBinds[index1].pBinds) {
                            for (uint32_t index2 = 0; index2 < local_pBindInfo[index0].pImageOpaqueBinds[index1].bindCount; ++index2) {
                                if (pBindInfo[index0].pImageOpaqueBinds[index1].pBinds[index2].memory) {
                                    local_pBindInfo[index0].pImageOpaqueBinds[index1].pBinds[index2].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfo[index0].pImageOpaqueBinds[index1].pBinds[index2].memory)];
                                }
                            }
                        }
                    }
                }
                if (local_pBindInfo[index0].pImageBinds) {
                    for (uint32_t index1 = 0; index1 < local_pBindInfo[index0].imageBindCount; ++index1) {
                        if (pBindInfo[index0].pImageBinds[index1].image) {
                            local_pBindInfo[index0].pImageBinds[index1].image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfo[index0].pImageBinds[index1].image)];
                        }
                        if (local_pBindInfo[index0].pImageBinds[index1].pBinds) {
                            for (uint32_t index2 = 0; index2 < local_pBindInfo[index0].pImageBinds[index1].bindCount; ++index2) {
                                if (pBindInfo[index0].pImageBinds[index1].pBinds[index2].memory) {
                                    local_pBindInfo[index0].pImageBinds[index1].pBinds[index2].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfo[index0].pImageBinds[index1].pBinds[index2].memory)];
                                }
                            }
                        }
                    }
                }
                if (local_pBindInfo[index0].pSignalSemaphores) {
                    for (uint32_t index1 = 0; index1 < local_pBindInfo[index0].signalSemaphoreCount; ++index1) {
                        local_pBindInfo[index0].pSignalSemaphores[index1] = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pBindInfo[index0].pSignalSemaphores[index1])];
                    }
                }
            }
        }
        fence = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(fence)];
    }
    VkResult result = dev_data->device_dispatch_table->QueueBindSparse(queue, bindInfoCount, (const VkBindSparseInfo*)local_pBindInfo, fence);
    if (local_pBindInfo)
        delete[] local_pBindInfo;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateFence(
    VkDevice                                    device,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateFence(device, pCreateInfo, pAllocator, pFence);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pFence);
        *pFence = reinterpret_cast<VkFence&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyFence(
    VkDevice                                    device,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t fence_id = reinterpret_cast<uint64_t &>(fence);
    fence = (VkFence)dev_data->unique_id_mapping[fence_id];
    dev_data->unique_id_mapping.erase(fence_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyFence(device, fence, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL ResetFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkFence *local_pFences = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pFences) {
            local_pFences = new VkFence[fenceCount];
            for (uint32_t index0 = 0; index0 < fenceCount; ++index0) {
                local_pFences[index0] = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pFences[index0])];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->ResetFences(device, fenceCount, (const VkFence*)local_pFences);
    if (local_pFences)
        delete[] local_pFences;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetFenceStatus(
    VkDevice                                    device,
    VkFence                                     fence)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        fence = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(fence)];
    }
    VkResult result = dev_data->device_dispatch_table->GetFenceStatus(device, fence);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL WaitForFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkFence *local_pFences = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pFences) {
            local_pFences = new VkFence[fenceCount];
            for (uint32_t index0 = 0; index0 < fenceCount; ++index0) {
                local_pFences[index0] = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pFences[index0])];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->WaitForFences(device, fenceCount, (const VkFence*)local_pFences, waitAll, timeout);
    if (local_pFences)
        delete[] local_pFences;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateSemaphore(
    VkDevice                                    device,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSemaphore);
        *pSemaphore = reinterpret_cast<VkSemaphore&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySemaphore(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t semaphore_id = reinterpret_cast<uint64_t &>(semaphore);
    semaphore = (VkSemaphore)dev_data->unique_id_mapping[semaphore_id];
    dev_data->unique_id_mapping.erase(semaphore_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroySemaphore(device, semaphore, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateEvent(
    VkDevice                                    device,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateEvent(device, pCreateInfo, pAllocator, pEvent);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pEvent);
        *pEvent = reinterpret_cast<VkEvent&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyEvent(
    VkDevice                                    device,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t event_id = reinterpret_cast<uint64_t &>(event);
    event = (VkEvent)dev_data->unique_id_mapping[event_id];
    dev_data->unique_id_mapping.erase(event_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyEvent(device, event, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetEventStatus(
    VkDevice                                    device,
    VkEvent                                     event)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        event = (VkEvent)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(event)];
    }
    VkResult result = dev_data->device_dispatch_table->GetEventStatus(device, event);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL SetEvent(
    VkDevice                                    device,
    VkEvent                                     event)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        event = (VkEvent)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(event)];
    }
    VkResult result = dev_data->device_dispatch_table->SetEvent(device, event);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL ResetEvent(
    VkDevice                                    device,
    VkEvent                                     event)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        event = (VkEvent)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(event)];
    }
    VkResult result = dev_data->device_dispatch_table->ResetEvent(device, event);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateQueryPool(
    VkDevice                                    device,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pQueryPool);
        *pQueryPool = reinterpret_cast<VkQueryPool&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyQueryPool(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t queryPool_id = reinterpret_cast<uint64_t &>(queryPool);
    queryPool = (VkQueryPool)dev_data->unique_id_mapping[queryPool_id];
    dev_data->unique_id_mapping.erase(queryPool_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyQueryPool(device, queryPool, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetQueryPoolResults(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        queryPool = (VkQueryPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(queryPool)];
    }
    VkResult result = dev_data->device_dispatch_table->GetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateBuffer(
    VkDevice                                    device,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pBuffer);
        *pBuffer = reinterpret_cast<VkBuffer&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyBuffer(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t buffer_id = reinterpret_cast<uint64_t &>(buffer);
    buffer = (VkBuffer)dev_data->unique_id_mapping[buffer_id];
    dev_data->unique_id_mapping.erase(buffer_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyBuffer(device, buffer, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateBufferView(
    VkDevice                                    device,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkBufferViewCreateInfo *local_pCreateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pCreateInfo) {
            local_pCreateInfo = new safe_VkBufferViewCreateInfo(pCreateInfo);
            if (pCreateInfo->buffer) {
                local_pCreateInfo->buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pCreateInfo->buffer)];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->CreateBufferView(device, (const VkBufferViewCreateInfo*)local_pCreateInfo, pAllocator, pView);
    if (local_pCreateInfo)
        delete local_pCreateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pView);
        *pView = reinterpret_cast<VkBufferView&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyBufferView(
    VkDevice                                    device,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t bufferView_id = reinterpret_cast<uint64_t &>(bufferView);
    bufferView = (VkBufferView)dev_data->unique_id_mapping[bufferView_id];
    dev_data->unique_id_mapping.erase(bufferView_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyBufferView(device, bufferView, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateImage(
    VkDevice                                    device,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateImage(device, pCreateInfo, pAllocator, pImage);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pImage);
        *pImage = reinterpret_cast<VkImage&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyImage(
    VkDevice                                    device,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t image_id = reinterpret_cast<uint64_t &>(image);
    image = (VkImage)dev_data->unique_id_mapping[image_id];
    dev_data->unique_id_mapping.erase(image_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyImage(device, image, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL GetImageSubresourceLayout(
    VkDevice                                    device,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(image)];
    }
    dev_data->device_dispatch_table->GetImageSubresourceLayout(device, image, pSubresource, pLayout);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateImageView(
    VkDevice                                    device,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkImageViewCreateInfo *local_pCreateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pCreateInfo) {
            local_pCreateInfo = new safe_VkImageViewCreateInfo(pCreateInfo);
            if (pCreateInfo->image) {
                local_pCreateInfo->image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pCreateInfo->image)];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->CreateImageView(device, (const VkImageViewCreateInfo*)local_pCreateInfo, pAllocator, pView);
    if (local_pCreateInfo)
        delete local_pCreateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pView);
        *pView = reinterpret_cast<VkImageView&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyImageView(
    VkDevice                                    device,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t imageView_id = reinterpret_cast<uint64_t &>(imageView);
    imageView = (VkImageView)dev_data->unique_id_mapping[imageView_id];
    dev_data->unique_id_mapping.erase(imageView_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyImageView(device, imageView, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateShaderModule(
    VkDevice                                    device,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pShaderModule);
        *pShaderModule = reinterpret_cast<VkShaderModule&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyShaderModule(
    VkDevice                                    device,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t shaderModule_id = reinterpret_cast<uint64_t &>(shaderModule);
    shaderModule = (VkShaderModule)dev_data->unique_id_mapping[shaderModule_id];
    dev_data->unique_id_mapping.erase(shaderModule_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyShaderModule(device, shaderModule, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineCache(
    VkDevice                                    device,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pPipelineCache);
        *pPipelineCache = reinterpret_cast<VkPipelineCache&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyPipelineCache(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t pipelineCache_id = reinterpret_cast<uint64_t &>(pipelineCache);
    pipelineCache = (VkPipelineCache)dev_data->unique_id_mapping[pipelineCache_id];
    dev_data->unique_id_mapping.erase(pipelineCache_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyPipelineCache(device, pipelineCache, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPipelineCacheData(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        pipelineCache = (VkPipelineCache)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(pipelineCache)];
    }
    VkResult result = dev_data->device_dispatch_table->GetPipelineCacheData(device, pipelineCache, pDataSize, pData);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL MergePipelineCaches(
    VkDevice                                    device,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkPipelineCache *local_pSrcCaches = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        dstCache = (VkPipelineCache)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstCache)];
        if (pSrcCaches) {
            local_pSrcCaches = new VkPipelineCache[srcCacheCount];
            for (uint32_t index0 = 0; index0 < srcCacheCount; ++index0) {
                local_pSrcCaches[index0] = (VkPipelineCache)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pSrcCaches[index0])];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->MergePipelineCaches(device, dstCache, srcCacheCount, (const VkPipelineCache*)local_pSrcCaches);
    if (local_pSrcCaches)
        delete[] local_pSrcCaches;
    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateGraphicsPipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateComputePipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

VKAPI_ATTR void VKAPI_CALL DestroyPipeline(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t pipeline_id = reinterpret_cast<uint64_t &>(pipeline);
    pipeline = (VkPipeline)dev_data->unique_id_mapping[pipeline_id];
    dev_data->unique_id_mapping.erase(pipeline_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyPipeline(device, pipeline, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineLayout(
    VkDevice                                    device,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkPipelineLayoutCreateInfo *local_pCreateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pCreateInfo) {
            local_pCreateInfo = new safe_VkPipelineLayoutCreateInfo(pCreateInfo);
            if (local_pCreateInfo->pSetLayouts) {
                for (uint32_t index1 = 0; index1 < local_pCreateInfo->setLayoutCount; ++index1) {
                    local_pCreateInfo->pSetLayouts[index1] = (VkDescriptorSetLayout)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pCreateInfo->pSetLayouts[index1])];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->CreatePipelineLayout(device, (const VkPipelineLayoutCreateInfo*)local_pCreateInfo, pAllocator, pPipelineLayout);
    if (local_pCreateInfo)
        delete local_pCreateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pPipelineLayout);
        *pPipelineLayout = reinterpret_cast<VkPipelineLayout&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyPipelineLayout(
    VkDevice                                    device,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t pipelineLayout_id = reinterpret_cast<uint64_t &>(pipelineLayout);
    pipelineLayout = (VkPipelineLayout)dev_data->unique_id_mapping[pipelineLayout_id];
    dev_data->unique_id_mapping.erase(pipelineLayout_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyPipelineLayout(device, pipelineLayout, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateSampler(
    VkDevice                                    device,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateSampler(device, pCreateInfo, pAllocator, pSampler);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSampler);
        *pSampler = reinterpret_cast<VkSampler&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySampler(
    VkDevice                                    device,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t sampler_id = reinterpret_cast<uint64_t &>(sampler);
    sampler = (VkSampler)dev_data->unique_id_mapping[sampler_id];
    dev_data->unique_id_mapping.erase(sampler_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroySampler(device, sampler, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorSetLayout(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkDescriptorSetLayoutCreateInfo *local_pCreateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pCreateInfo) {
            local_pCreateInfo = new safe_VkDescriptorSetLayoutCreateInfo(pCreateInfo);
            if (local_pCreateInfo->pBindings) {
                for (uint32_t index1 = 0; index1 < local_pCreateInfo->bindingCount; ++index1) {
                    if (local_pCreateInfo->pBindings[index1].pImmutableSamplers) {
                        for (uint32_t index2 = 0; index2 < local_pCreateInfo->pBindings[index1].descriptorCount; ++index2) {
                            local_pCreateInfo->pBindings[index1].pImmutableSamplers[index2] = (VkSampler)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pCreateInfo->pBindings[index1].pImmutableSamplers[index2])];
                        }
                    }
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->CreateDescriptorSetLayout(device, (const VkDescriptorSetLayoutCreateInfo*)local_pCreateInfo, pAllocator, pSetLayout);
    if (local_pCreateInfo)
        delete local_pCreateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSetLayout);
        *pSetLayout = reinterpret_cast<VkDescriptorSetLayout&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorSetLayout(
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t descriptorSetLayout_id = reinterpret_cast<uint64_t &>(descriptorSetLayout);
    descriptorSetLayout = (VkDescriptorSetLayout)dev_data->unique_id_mapping[descriptorSetLayout_id];
    dev_data->unique_id_mapping.erase(descriptorSetLayout_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorPool(
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pDescriptorPool);
        *pDescriptorPool = reinterpret_cast<VkDescriptorPool&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t descriptorPool_id = reinterpret_cast<uint64_t &>(descriptorPool);
    descriptorPool = (VkDescriptorPool)dev_data->unique_id_mapping[descriptorPool_id];
    dev_data->unique_id_mapping.erase(descriptorPool_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyDescriptorPool(device, descriptorPool, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL ResetDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        descriptorPool = (VkDescriptorPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(descriptorPool)];
    }
    VkResult result = dev_data->device_dispatch_table->ResetDescriptorPool(device, descriptorPool, flags);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL AllocateDescriptorSets(
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkDescriptorSetAllocateInfo *local_pAllocateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pAllocateInfo) {
            local_pAllocateInfo = new safe_VkDescriptorSetAllocateInfo(pAllocateInfo);
            if (pAllocateInfo->descriptorPool) {
                local_pAllocateInfo->descriptorPool = (VkDescriptorPool)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pAllocateInfo->descriptorPool)];
            }
            if (local_pAllocateInfo->pSetLayouts) {
                for (uint32_t index1 = 0; index1 < local_pAllocateInfo->descriptorSetCount; ++index1) {
                    local_pAllocateInfo->pSetLayouts[index1] = (VkDescriptorSetLayout)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pAllocateInfo->pSetLayouts[index1])];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->AllocateDescriptorSets(device, (const VkDescriptorSetAllocateInfo*)local_pAllocateInfo, pDescriptorSets);
    if (local_pAllocateInfo)
        delete local_pAllocateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        for (uint32_t index0 = 0; index0 < pAllocateInfo->descriptorSetCount; index0++) {
            uint64_t unique_id = global_unique_id++;
            dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(pDescriptorSets[index0]);
            pDescriptorSets[index0] = reinterpret_cast<VkDescriptorSet&>(unique_id);
        }
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL FreeDescriptorSets(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkDescriptorSet *local_pDescriptorSets = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        descriptorPool = (VkDescriptorPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(descriptorPool)];
        if (pDescriptorSets) {
            local_pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
            for (uint32_t index0 = 0; index0 < descriptorSetCount; ++index0) {
                local_pDescriptorSets[index0] = (VkDescriptorSet)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorSets[index0])];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->FreeDescriptorSets(device, descriptorPool, descriptorSetCount, (const VkDescriptorSet*)local_pDescriptorSets);
    if (local_pDescriptorSets)
        delete[] local_pDescriptorSets;
    if ((VK_SUCCESS == result) && (pDescriptorSets)) {
        std::unique_lock<std::mutex> lock(global_lock);
        for (uint32_t index0 = 0; index0 < descriptorSetCount; index0++) {
            VkDescriptorSet handle = pDescriptorSets[index0];
            uint64_t unique_id = reinterpret_cast<uint64_t &>(handle);
            dev_data->unique_id_mapping.erase(unique_id);
        }
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSets(
    VkDevice                                    device,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkWriteDescriptorSet *local_pDescriptorWrites = NULL;
    safe_VkCopyDescriptorSet *local_pDescriptorCopies = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pDescriptorWrites) {
            local_pDescriptorWrites = new safe_VkWriteDescriptorSet[descriptorWriteCount];
            for (uint32_t index0 = 0; index0 < descriptorWriteCount; ++index0) {
                local_pDescriptorWrites[index0].initialize(&pDescriptorWrites[index0]);
                if (pDescriptorWrites[index0].dstSet) {
                    local_pDescriptorWrites[index0].dstSet = (VkDescriptorSet)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorWrites[index0].dstSet)];
                }
                if (local_pDescriptorWrites[index0].pImageInfo) {
                    for (uint32_t index1 = 0; index1 < local_pDescriptorWrites[index0].descriptorCount; ++index1) {
                        if (pDescriptorWrites[index0].pImageInfo[index1].sampler) {
                            local_pDescriptorWrites[index0].pImageInfo[index1].sampler = (VkSampler)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorWrites[index0].pImageInfo[index1].sampler)];
                        }
                        if (pDescriptorWrites[index0].pImageInfo[index1].imageView) {
                            local_pDescriptorWrites[index0].pImageInfo[index1].imageView = (VkImageView)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorWrites[index0].pImageInfo[index1].imageView)];
                        }
                    }
                }
                if (local_pDescriptorWrites[index0].pBufferInfo) {
                    for (uint32_t index1 = 0; index1 < local_pDescriptorWrites[index0].descriptorCount; ++index1) {
                        if (pDescriptorWrites[index0].pBufferInfo[index1].buffer) {
                            local_pDescriptorWrites[index0].pBufferInfo[index1].buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorWrites[index0].pBufferInfo[index1].buffer)];
                        }
                    }
                }
                if (local_pDescriptorWrites[index0].pTexelBufferView) {
                    for (uint32_t index1 = 0; index1 < local_pDescriptorWrites[index0].descriptorCount; ++index1) {
                        local_pDescriptorWrites[index0].pTexelBufferView[index1] = (VkBufferView)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pDescriptorWrites[index0].pTexelBufferView[index1])];
                    }
                }
            }
        }
        if (pDescriptorCopies) {
            local_pDescriptorCopies = new safe_VkCopyDescriptorSet[descriptorCopyCount];
            for (uint32_t index0 = 0; index0 < descriptorCopyCount; ++index0) {
                local_pDescriptorCopies[index0].initialize(&pDescriptorCopies[index0]);
                if (pDescriptorCopies[index0].srcSet) {
                    local_pDescriptorCopies[index0].srcSet = (VkDescriptorSet)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorCopies[index0].srcSet)];
                }
                if (pDescriptorCopies[index0].dstSet) {
                    local_pDescriptorCopies[index0].dstSet = (VkDescriptorSet)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorCopies[index0].dstSet)];
                }
            }
        }
    }
    dev_data->device_dispatch_table->UpdateDescriptorSets(device, descriptorWriteCount, (const VkWriteDescriptorSet*)local_pDescriptorWrites, descriptorCopyCount, (const VkCopyDescriptorSet*)local_pDescriptorCopies);
    if (local_pDescriptorWrites)
        delete[] local_pDescriptorWrites;
    if (local_pDescriptorCopies)
        delete[] local_pDescriptorCopies;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateFramebuffer(
    VkDevice                                    device,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkFramebufferCreateInfo *local_pCreateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pCreateInfo) {
            local_pCreateInfo = new safe_VkFramebufferCreateInfo(pCreateInfo);
            if (pCreateInfo->renderPass) {
                local_pCreateInfo->renderPass = (VkRenderPass)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pCreateInfo->renderPass)];
            }
            if (local_pCreateInfo->pAttachments) {
                for (uint32_t index1 = 0; index1 < local_pCreateInfo->attachmentCount; ++index1) {
                    local_pCreateInfo->pAttachments[index1] = (VkImageView)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pCreateInfo->pAttachments[index1])];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->CreateFramebuffer(device, (const VkFramebufferCreateInfo*)local_pCreateInfo, pAllocator, pFramebuffer);
    if (local_pCreateInfo)
        delete local_pCreateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pFramebuffer);
        *pFramebuffer = reinterpret_cast<VkFramebuffer&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyFramebuffer(
    VkDevice                                    device,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t framebuffer_id = reinterpret_cast<uint64_t &>(framebuffer);
    framebuffer = (VkFramebuffer)dev_data->unique_id_mapping[framebuffer_id];
    dev_data->unique_id_mapping.erase(framebuffer_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyFramebuffer(device, framebuffer, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateRenderPass(
    VkDevice                                    device,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pRenderPass);
        *pRenderPass = reinterpret_cast<VkRenderPass&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyRenderPass(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t renderPass_id = reinterpret_cast<uint64_t &>(renderPass);
    renderPass = (VkRenderPass)dev_data->unique_id_mapping[renderPass_id];
    dev_data->unique_id_mapping.erase(renderPass_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyRenderPass(device, renderPass, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL GetRenderAreaGranularity(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        renderPass = (VkRenderPass)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(renderPass)];
    }
    dev_data->device_dispatch_table->GetRenderAreaGranularity(device, renderPass, pGranularity);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateCommandPool(
    VkDevice                                    device,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pCommandPool);
        *pCommandPool = reinterpret_cast<VkCommandPool&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t commandPool_id = reinterpret_cast<uint64_t &>(commandPool);
    commandPool = (VkCommandPool)dev_data->unique_id_mapping[commandPool_id];
    dev_data->unique_id_mapping.erase(commandPool_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyCommandPool(device, commandPool, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL ResetCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        commandPool = (VkCommandPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(commandPool)];
    }
    VkResult result = dev_data->device_dispatch_table->ResetCommandPool(device, commandPool, flags);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL AllocateCommandBuffers(
    VkDevice                                    device,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkCommandBufferAllocateInfo *local_pAllocateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pAllocateInfo) {
            local_pAllocateInfo = new safe_VkCommandBufferAllocateInfo(pAllocateInfo);
            if (pAllocateInfo->commandPool) {
                local_pAllocateInfo->commandPool = (VkCommandPool)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pAllocateInfo->commandPool)];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->AllocateCommandBuffers(device, (const VkCommandBufferAllocateInfo*)local_pAllocateInfo, pCommandBuffers);
    if (local_pAllocateInfo)
        delete local_pAllocateInfo;
    return result;
}

VKAPI_ATTR void VKAPI_CALL FreeCommandBuffers(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        commandPool = (VkCommandPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(commandPool)];
    }
    dev_data->device_dispatch_table->FreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);

}

VKAPI_ATTR VkResult VKAPI_CALL BeginCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    const VkCommandBufferBeginInfo*             pBeginInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    safe_VkCommandBufferBeginInfo *local_pBeginInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pBeginInfo) {
            local_pBeginInfo = new safe_VkCommandBufferBeginInfo(pBeginInfo);
            if (local_pBeginInfo->pInheritanceInfo) {
                if (pBeginInfo->pInheritanceInfo->renderPass) {
                    local_pBeginInfo->pInheritanceInfo->renderPass = (VkRenderPass)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBeginInfo->pInheritanceInfo->renderPass)];
                }
                if (pBeginInfo->pInheritanceInfo->framebuffer) {
                    local_pBeginInfo->pInheritanceInfo->framebuffer = (VkFramebuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBeginInfo->pInheritanceInfo->framebuffer)];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->BeginCommandBuffer(commandBuffer, (const VkCommandBufferBeginInfo*)local_pBeginInfo);
    if (local_pBeginInfo)
        delete local_pBeginInfo;
    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdBindPipeline(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        pipeline = (VkPipeline)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(pipeline)];
    }
    dev_data->device_dispatch_table->CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);

}

VKAPI_ATTR void VKAPI_CALL CmdBindDescriptorSets(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    VkDescriptorSet *local_pDescriptorSets = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        layout = (VkPipelineLayout)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(layout)];
        if (pDescriptorSets) {
            local_pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
            for (uint32_t index0 = 0; index0 < descriptorSetCount; ++index0) {
                local_pDescriptorSets[index0] = (VkDescriptorSet)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pDescriptorSets[index0])];
            }
        }
    }
    dev_data->device_dispatch_table->CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, (const VkDescriptorSet*)local_pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
    if (local_pDescriptorSets)
        delete[] local_pDescriptorSets;
}

VKAPI_ATTR void VKAPI_CALL CmdBindIndexBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
    }
    dev_data->device_dispatch_table->CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);

}

VKAPI_ATTR void VKAPI_CALL CmdBindVertexBuffers(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    VkBuffer *local_pBuffers = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pBuffers) {
            local_pBuffers = new VkBuffer[bindingCount];
            for (uint32_t index0 = 0; index0 < bindingCount; ++index0) {
                local_pBuffers[index0] = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBuffers[index0])];
            }
        }
    }
    dev_data->device_dispatch_table->CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, (const VkBuffer*)local_pBuffers, pOffsets);
    if (local_pBuffers)
        delete[] local_pBuffers;
}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
    }
    dev_data->device_dispatch_table->CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
    }
    dev_data->device_dispatch_table->CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDispatchIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
    }
    dev_data->device_dispatch_table->CmdDispatchIndirect(commandBuffer, buffer, offset);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        srcBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(srcBuffer)];
        dstBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstBuffer)];
    }
    dev_data->device_dispatch_table->CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        srcImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(srcImage)];
        dstImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstImage)];
    }
    dev_data->device_dispatch_table->CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdBlitImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        srcImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(srcImage)];
        dstImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstImage)];
    }
    dev_data->device_dispatch_table->CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyBufferToImage(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        srcBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(srcBuffer)];
        dstImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstImage)];
    }
    dev_data->device_dispatch_table->CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyImageToBuffer(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        srcImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(srcImage)];
        dstBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstBuffer)];
    }
    dev_data->device_dispatch_table->CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdUpdateBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        dstBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstBuffer)];
    }
    dev_data->device_dispatch_table->CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);

}

VKAPI_ATTR void VKAPI_CALL CmdFillBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        dstBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstBuffer)];
    }
    dev_data->device_dispatch_table->CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);

}

VKAPI_ATTR void VKAPI_CALL CmdClearColorImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(image)];
    }
    dev_data->device_dispatch_table->CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);

}

VKAPI_ATTR void VKAPI_CALL CmdClearDepthStencilImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(image)];
    }
    dev_data->device_dispatch_table->CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);

}

VKAPI_ATTR void VKAPI_CALL CmdResolveImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        srcImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(srcImage)];
        dstImage = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstImage)];
    }
    dev_data->device_dispatch_table->CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdSetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        event = (VkEvent)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(event)];
    }
    dev_data->device_dispatch_table->CmdSetEvent(commandBuffer, event, stageMask);

}

VKAPI_ATTR void VKAPI_CALL CmdResetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        event = (VkEvent)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(event)];
    }
    dev_data->device_dispatch_table->CmdResetEvent(commandBuffer, event, stageMask);

}

VKAPI_ATTR void VKAPI_CALL CmdWaitEvents(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    eventCount,
    const VkEvent*                              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    VkEvent *local_pEvents = NULL;
    safe_VkBufferMemoryBarrier *local_pBufferMemoryBarriers = NULL;
    safe_VkImageMemoryBarrier *local_pImageMemoryBarriers = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pEvents) {
            local_pEvents = new VkEvent[eventCount];
            for (uint32_t index0 = 0; index0 < eventCount; ++index0) {
                local_pEvents[index0] = (VkEvent)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pEvents[index0])];
            }
        }
        if (pBufferMemoryBarriers) {
            local_pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier[bufferMemoryBarrierCount];
            for (uint32_t index0 = 0; index0 < bufferMemoryBarrierCount; ++index0) {
                local_pBufferMemoryBarriers[index0].initialize(&pBufferMemoryBarriers[index0]);
                if (pBufferMemoryBarriers[index0].buffer) {
                    local_pBufferMemoryBarriers[index0].buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBufferMemoryBarriers[index0].buffer)];
                }
            }
        }
        if (pImageMemoryBarriers) {
            local_pImageMemoryBarriers = new safe_VkImageMemoryBarrier[imageMemoryBarrierCount];
            for (uint32_t index0 = 0; index0 < imageMemoryBarrierCount; ++index0) {
                local_pImageMemoryBarriers[index0].initialize(&pImageMemoryBarriers[index0]);
                if (pImageMemoryBarriers[index0].image) {
                    local_pImageMemoryBarriers[index0].image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pImageMemoryBarriers[index0].image)];
                }
            }
        }
    }
    dev_data->device_dispatch_table->CmdWaitEvents(commandBuffer, eventCount, (const VkEvent*)local_pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, (const VkBufferMemoryBarrier*)local_pBufferMemoryBarriers, imageMemoryBarrierCount, (const VkImageMemoryBarrier*)local_pImageMemoryBarriers);
    if (local_pEvents)
        delete[] local_pEvents;
    if (local_pBufferMemoryBarriers)
        delete[] local_pBufferMemoryBarriers;
    if (local_pImageMemoryBarriers)
        delete[] local_pImageMemoryBarriers;
}

VKAPI_ATTR void VKAPI_CALL CmdPipelineBarrier(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    safe_VkBufferMemoryBarrier *local_pBufferMemoryBarriers = NULL;
    safe_VkImageMemoryBarrier *local_pImageMemoryBarriers = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pBufferMemoryBarriers) {
            local_pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier[bufferMemoryBarrierCount];
            for (uint32_t index0 = 0; index0 < bufferMemoryBarrierCount; ++index0) {
                local_pBufferMemoryBarriers[index0].initialize(&pBufferMemoryBarriers[index0]);
                if (pBufferMemoryBarriers[index0].buffer) {
                    local_pBufferMemoryBarriers[index0].buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBufferMemoryBarriers[index0].buffer)];
                }
            }
        }
        if (pImageMemoryBarriers) {
            local_pImageMemoryBarriers = new safe_VkImageMemoryBarrier[imageMemoryBarrierCount];
            for (uint32_t index0 = 0; index0 < imageMemoryBarrierCount; ++index0) {
                local_pImageMemoryBarriers[index0].initialize(&pImageMemoryBarriers[index0]);
                if (pImageMemoryBarriers[index0].image) {
                    local_pImageMemoryBarriers[index0].image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pImageMemoryBarriers[index0].image)];
                }
            }
        }
    }
    dev_data->device_dispatch_table->CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, (const VkBufferMemoryBarrier*)local_pBufferMemoryBarriers, imageMemoryBarrierCount, (const VkImageMemoryBarrier*)local_pImageMemoryBarriers);
    if (local_pBufferMemoryBarriers)
        delete[] local_pBufferMemoryBarriers;
    if (local_pImageMemoryBarriers)
        delete[] local_pImageMemoryBarriers;
}

VKAPI_ATTR void VKAPI_CALL CmdBeginQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        queryPool = (VkQueryPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(queryPool)];
    }
    dev_data->device_dispatch_table->CmdBeginQuery(commandBuffer, queryPool, query, flags);

}

VKAPI_ATTR void VKAPI_CALL CmdEndQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        queryPool = (VkQueryPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(queryPool)];
    }
    dev_data->device_dispatch_table->CmdEndQuery(commandBuffer, queryPool, query);

}

VKAPI_ATTR void VKAPI_CALL CmdResetQueryPool(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        queryPool = (VkQueryPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(queryPool)];
    }
    dev_data->device_dispatch_table->CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);

}

VKAPI_ATTR void VKAPI_CALL CmdWriteTimestamp(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        queryPool = (VkQueryPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(queryPool)];
    }
    dev_data->device_dispatch_table->CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyQueryPoolResults(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        queryPool = (VkQueryPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(queryPool)];
        dstBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(dstBuffer)];
    }
    dev_data->device_dispatch_table->CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);

}

VKAPI_ATTR void VKAPI_CALL CmdPushConstants(
    VkCommandBuffer                             commandBuffer,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        layout = (VkPipelineLayout)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(layout)];
    }
    dev_data->device_dispatch_table->CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);

}

VKAPI_ATTR void VKAPI_CALL CmdBeginRenderPass(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    safe_VkRenderPassBeginInfo *local_pRenderPassBegin = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pRenderPassBegin) {
            local_pRenderPassBegin = new safe_VkRenderPassBeginInfo(pRenderPassBegin);
            if (pRenderPassBegin->renderPass) {
                local_pRenderPassBegin->renderPass = (VkRenderPass)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pRenderPassBegin->renderPass)];
            }
            if (pRenderPassBegin->framebuffer) {
                local_pRenderPassBegin->framebuffer = (VkFramebuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pRenderPassBegin->framebuffer)];
            }
        }
    }
    dev_data->device_dispatch_table->CmdBeginRenderPass(commandBuffer, (const VkRenderPassBeginInfo*)local_pRenderPassBegin, contents);
    if (local_pRenderPassBegin)
        delete local_pRenderPassBegin;
}


VKAPI_ATTR void VKAPI_CALL DestroySurfaceKHR(
    VkInstance                                  instance,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t surface_id = reinterpret_cast<uint64_t &>(surface);
    surface = (VkSurfaceKHR)dev_data->unique_id_mapping[surface_id];
    dev_data->unique_id_mapping.erase(surface_id);
    lock.unlock();
    dev_data->instance_dispatch_table->DestroySurfaceKHR(instance, surface, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->instance_dispatch_table->GetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->instance_dispatch_table->GetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceFormatsKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->instance_dispatch_table->GetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfacePresentModesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->instance_dispatch_table->GetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);

    return result;
}


// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateSwapchainKHR(
    VkDevice                                    device,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain);

VKAPI_ATTR void VKAPI_CALL DestroySwapchainKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t swapchain_id = reinterpret_cast<uint64_t &>(swapchain);
    swapchain = (VkSwapchainKHR)dev_data->unique_id_mapping[swapchain_id];
    dev_data->unique_id_mapping.erase(swapchain_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroySwapchainKHR(device, swapchain, pAllocator);

}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainImagesKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages);

VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImageKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint64_t                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    uint32_t*                                   pImageIndex)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        swapchain = (VkSwapchainKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(swapchain)];
        semaphore = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(semaphore)];
        fence = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(fence)];
    }
    VkResult result = dev_data->device_dispatch_table->AcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL QueuePresentKHR(
    VkQueue                                     queue,
    const VkPresentInfoKHR*                     pPresentInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map);
    safe_VkPresentInfoKHR *local_pPresentInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pPresentInfo) {
            local_pPresentInfo = new safe_VkPresentInfoKHR(pPresentInfo);
            if (local_pPresentInfo->pWaitSemaphores) {
                for (uint32_t index1 = 0; index1 < local_pPresentInfo->waitSemaphoreCount; ++index1) {
                    local_pPresentInfo->pWaitSemaphores[index1] = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pPresentInfo->pWaitSemaphores[index1])];
                }
            }
            if (local_pPresentInfo->pSwapchains) {
                for (uint32_t index1 = 0; index1 < local_pPresentInfo->swapchainCount; ++index1) {
                    local_pPresentInfo->pSwapchains[index1] = (VkSwapchainKHR)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(local_pPresentInfo->pSwapchains[index1])];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->QueuePresentKHR(queue, (const VkPresentInfoKHR*)local_pPresentInfo);
    if (local_pPresentInfo)
        delete local_pPresentInfo;
    return result;
}


VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayModeKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pMode);
        *pMode = reinterpret_cast<VkDisplayModeKHR&>(unique_id);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayPlaneSurfaceKHR(
    VkInstance                                  instance,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    safe_VkDisplaySurfaceCreateInfoKHR *local_pCreateInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pCreateInfo) {
            local_pCreateInfo = new safe_VkDisplaySurfaceCreateInfoKHR(pCreateInfo);
            if (pCreateInfo->displayMode) {
                local_pCreateInfo->displayMode = (VkDisplayModeKHR)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pCreateInfo->displayMode)];
            }
        }
    }
    VkResult result = dev_data->instance_dispatch_table->CreateDisplayPlaneSurfaceKHR(instance, (const VkDisplaySurfaceCreateInfoKHR*)local_pCreateInfo, pAllocator, pSurface);
    if (local_pCreateInfo)
        delete local_pCreateInfo;
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}


VKAPI_ATTR VkResult VKAPI_CALL CreateSharedSwapchainsKHR(
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        for (uint32_t index0 = 0; index0 < swapchainCount; index0++) {
            uint64_t unique_id = global_unique_id++;
            dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(pSwapchains[index0]);
            pSwapchains[index0] = reinterpret_cast<VkSwapchainKHR&>(unique_id);
        }
    }
    return result;
}

#ifdef VK_USE_PLATFORM_XLIB_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateXlibSurfaceKHR(
    VkInstance                                  instance,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateXcbSurfaceKHR(
    VkInstance                                  instance,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateWaylandSurfaceKHR(
    VkInstance                                  instance,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateMirSurfaceKHR(
    VkInstance                                  instance,
    const VkMirSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateMirSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateAndroidSurfaceKHR(
    VkInstance                                  instance,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateWin32SurfaceKHR(
    VkInstance                                  instance,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR








VKAPI_ATTR void VKAPI_CALL TrimCommandPoolKHR(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlagsKHR                   flags)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        commandPool = (VkCommandPool)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(commandPool)];
    }
    dev_data->device_dispatch_table->TrimCommandPoolKHR(device, commandPool, flags);

}


VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetKHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        layout = (VkPipelineLayout)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(layout)];
    }
    dev_data->device_dispatch_table->CmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);

}


// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplateKHR*              pDescriptorUpdateTemplate);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSetWithTemplateKHR(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const void*                                 pData);

// Declare only
VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData);




















VKAPI_ATTR void VKAPI_CALL CmdDrawIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
        countBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(countBuffer)];
    }
    dev_data->device_dispatch_table->CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(buffer)];
        countBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(countBuffer)];
    }
    dev_data->device_dispatch_table->CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}















#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleNV(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    VkResult result = dev_data->device_dispatch_table->GetMemoryWin32HandleNV(device, memory, handleType, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

#endif // VK_USE_PLATFORM_WIN32_KHR


VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory2KHX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfoKHX*            pBindInfos)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkBindBufferMemoryInfoKHX *local_pBindInfos = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pBindInfos) {
            local_pBindInfos = new safe_VkBindBufferMemoryInfoKHX[bindInfoCount];
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                local_pBindInfos[index0].initialize(&pBindInfos[index0]);
                if (pBindInfos[index0].buffer) {
                    local_pBindInfos[index0].buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfos[index0].buffer)];
                }
                if (pBindInfos[index0].memory) {
                    local_pBindInfos[index0].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfos[index0].memory)];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->BindBufferMemory2KHX(device, bindInfoCount, (const VkBindBufferMemoryInfoKHX*)local_pBindInfos);
    if (local_pBindInfos)
        delete[] local_pBindInfos;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory2KHX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfoKHX*             pBindInfos)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkBindImageMemoryInfoKHX *local_pBindInfos = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pBindInfos) {
            local_pBindInfos = new safe_VkBindImageMemoryInfoKHX[bindInfoCount];
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                local_pBindInfos[index0].initialize(&pBindInfos[index0]);
                if (pBindInfos[index0].image) {
                    local_pBindInfos[index0].image = (VkImage)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfos[index0].image)];
                }
                if (pBindInfos[index0].memory) {
                    local_pBindInfos[index0].memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pBindInfos[index0].memory)];
                }
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->BindImageMemory2KHX(device, bindInfoCount, (const VkBindImageMemoryInfoKHX*)local_pBindInfos);
    if (local_pBindInfos)
        delete[] local_pBindInfos;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupSurfacePresentModesKHX(
    VkDevice                                    device,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHX*           pModes)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->device_dispatch_table->GetDeviceGroupSurfacePresentModesKHX(device, surface, pModes);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImage2KHX(
    VkDevice                                    device,
    const VkAcquireNextImageInfoKHX*            pAcquireInfo,
    uint32_t*                                   pImageIndex)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkAcquireNextImageInfoKHX *local_pAcquireInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pAcquireInfo) {
            local_pAcquireInfo = new safe_VkAcquireNextImageInfoKHX(pAcquireInfo);
            if (pAcquireInfo->swapchain) {
                local_pAcquireInfo->swapchain = (VkSwapchainKHR)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pAcquireInfo->swapchain)];
            }
            if (pAcquireInfo->semaphore) {
                local_pAcquireInfo->semaphore = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pAcquireInfo->semaphore)];
            }
            if (pAcquireInfo->fence) {
                local_pAcquireInfo->fence = (VkFence)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pAcquireInfo->fence)];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->AcquireNextImage2KHX(device, (const VkAcquireNextImageInfoKHX*)local_pAcquireInfo, pImageIndex);
    if (local_pAcquireInfo)
        delete local_pAcquireInfo;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDevicePresentRectanglesKHX(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->instance_dispatch_table->GetPhysicalDevicePresentRectanglesKHX(physicalDevice, surface, pRectCount, pRects);

    return result;
}



#ifdef VK_USE_PLATFORM_VI_NN

VKAPI_ATTR VkResult VKAPI_CALL CreateViSurfaceNN(
    VkInstance                                  instance,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_VI_NN











#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleKHX(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    HANDLE*                                     pHandle)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    VkResult result = dev_data->device_dispatch_table->GetMemoryWin32HandleKHX(device, memory, handleType, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR


VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdKHX(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    int*                                        pFd)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        memory = (VkDeviceMemory)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(memory)];
    }
    VkResult result = dev_data->device_dispatch_table->GetMemoryFdKHX(device, memory, handleType, pFd);

    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR

#endif // VK_USE_PLATFORM_WIN32_KHR





#ifdef VK_USE_PLATFORM_WIN32_KHX

VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreWin32HandleKHX(
    VkDevice                                    device,
    const VkImportSemaphoreWin32HandleInfoKHX*  pImportSemaphoreWin32HandleInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkImportSemaphoreWin32HandleInfoKHX *local_pImportSemaphoreWin32HandleInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pImportSemaphoreWin32HandleInfo) {
            local_pImportSemaphoreWin32HandleInfo = new safe_VkImportSemaphoreWin32HandleInfoKHX(pImportSemaphoreWin32HandleInfo);
            if (pImportSemaphoreWin32HandleInfo->semaphore) {
                local_pImportSemaphoreWin32HandleInfo->semaphore = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pImportSemaphoreWin32HandleInfo->semaphore)];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->ImportSemaphoreWin32HandleKHX(device, (const VkImportSemaphoreWin32HandleInfoKHX*)local_pImportSemaphoreWin32HandleInfo);
    if (local_pImportSemaphoreWin32HandleInfo)
        delete local_pImportSemaphoreWin32HandleInfo;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreWin32HandleKHX(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    VkExternalSemaphoreHandleTypeFlagBitsKHX    handleType,
    HANDLE*                                     pHandle)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        semaphore = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(semaphore)];
    }
    VkResult result = dev_data->device_dispatch_table->GetSemaphoreWin32HandleKHX(device, semaphore, handleType, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHX


VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreFdKHX(
    VkDevice                                    device,
    const VkImportSemaphoreFdInfoKHX*           pImportSemaphoreFdInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    safe_VkImportSemaphoreFdInfoKHX *local_pImportSemaphoreFdInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pImportSemaphoreFdInfo) {
            local_pImportSemaphoreFdInfo = new safe_VkImportSemaphoreFdInfoKHX(pImportSemaphoreFdInfo);
            if (pImportSemaphoreFdInfo->semaphore) {
                local_pImportSemaphoreFdInfo->semaphore = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pImportSemaphoreFdInfo->semaphore)];
            }
        }
    }
    VkResult result = dev_data->device_dispatch_table->ImportSemaphoreFdKHX(device, (const VkImportSemaphoreFdInfoKHX*)local_pImportSemaphoreFdInfo);
    if (local_pImportSemaphoreFdInfo)
        delete local_pImportSemaphoreFdInfo;
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreFdKHX(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    VkExternalSemaphoreHandleTypeFlagBitsKHX    handleType,
    int*                                        pFd)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        semaphore = (VkSemaphore)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(semaphore)];
    }
    VkResult result = dev_data->device_dispatch_table->GetSemaphoreFdKHX(device, semaphore, handleType, pFd);

    return result;
}


VKAPI_ATTR void VKAPI_CALL CmdProcessCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    safe_VkCmdProcessCommandsInfoNVX *local_pProcessCommandsInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pProcessCommandsInfo) {
            local_pProcessCommandsInfo = new safe_VkCmdProcessCommandsInfoNVX(pProcessCommandsInfo);
            if (pProcessCommandsInfo->objectTable) {
                local_pProcessCommandsInfo->objectTable = (VkObjectTableNVX)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pProcessCommandsInfo->objectTable)];
            }
            if (pProcessCommandsInfo->indirectCommandsLayout) {
                local_pProcessCommandsInfo->indirectCommandsLayout = (VkIndirectCommandsLayoutNVX)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pProcessCommandsInfo->indirectCommandsLayout)];
            }
            if (local_pProcessCommandsInfo->pIndirectCommandsTokens) {
                for (uint32_t index1 = 0; index1 < local_pProcessCommandsInfo->indirectCommandsTokenCount; ++index1) {
                    if (pProcessCommandsInfo->pIndirectCommandsTokens[index1].buffer) {
                        local_pProcessCommandsInfo->pIndirectCommandsTokens[index1].buffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pProcessCommandsInfo->pIndirectCommandsTokens[index1].buffer)];
                    }
                }
            }
            if (pProcessCommandsInfo->sequencesCountBuffer) {
                local_pProcessCommandsInfo->sequencesCountBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pProcessCommandsInfo->sequencesCountBuffer)];
            }
            if (pProcessCommandsInfo->sequencesIndexBuffer) {
                local_pProcessCommandsInfo->sequencesIndexBuffer = (VkBuffer)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pProcessCommandsInfo->sequencesIndexBuffer)];
            }
        }
    }
    dev_data->device_dispatch_table->CmdProcessCommandsNVX(commandBuffer, (const VkCmdProcessCommandsInfoNVX*)local_pProcessCommandsInfo);
    if (local_pProcessCommandsInfo)
        delete local_pProcessCommandsInfo;
}

VKAPI_ATTR void VKAPI_CALL CmdReserveSpaceForCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map);
    safe_VkCmdReserveSpaceForCommandsInfoNVX *local_pReserveSpaceInfo = NULL;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        if (pReserveSpaceInfo) {
            local_pReserveSpaceInfo = new safe_VkCmdReserveSpaceForCommandsInfoNVX(pReserveSpaceInfo);
            if (pReserveSpaceInfo->objectTable) {
                local_pReserveSpaceInfo->objectTable = (VkObjectTableNVX)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pReserveSpaceInfo->objectTable)];
            }
            if (pReserveSpaceInfo->indirectCommandsLayout) {
                local_pReserveSpaceInfo->indirectCommandsLayout = (VkIndirectCommandsLayoutNVX)dev_data->unique_id_mapping[reinterpret_cast<const uint64_t &>(pReserveSpaceInfo->indirectCommandsLayout)];
            }
        }
    }
    dev_data->device_dispatch_table->CmdReserveSpaceForCommandsNVX(commandBuffer, (const VkCmdReserveSpaceForCommandsInfoNVX*)local_pReserveSpaceInfo);
    if (local_pReserveSpaceInfo)
        delete local_pReserveSpaceInfo;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pIndirectCommandsLayout);
        *pIndirectCommandsLayout = reinterpret_cast<VkIndirectCommandsLayoutNVX&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t indirectCommandsLayout_id = reinterpret_cast<uint64_t &>(indirectCommandsLayout);
    indirectCommandsLayout = (VkIndirectCommandsLayoutNVX)dev_data->unique_id_mapping[indirectCommandsLayout_id];
    dev_data->unique_id_mapping.erase(indirectCommandsLayout_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateObjectTableNVX(
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->CreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pObjectTable);
        *pObjectTable = reinterpret_cast<VkObjectTableNVX&>(unique_id);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyObjectTableNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    std::unique_lock<std::mutex> lock(global_lock);
    uint64_t objectTable_id = reinterpret_cast<uint64_t &>(objectTable);
    objectTable = (VkObjectTableNVX)dev_data->unique_id_mapping[objectTable_id];
    dev_data->unique_id_mapping.erase(objectTable_id);
    lock.unlock();
    dev_data->device_dispatch_table->DestroyObjectTableNVX(device, objectTable, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL RegisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        objectTable = (VkObjectTableNVX)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(objectTable)];
    }
    VkResult result = dev_data->device_dispatch_table->RegisterObjectsNVX(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL UnregisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        objectTable = (VkObjectTableNVX)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(objectTable)];
    }
    VkResult result = dev_data->device_dispatch_table->UnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices);

    return result;
}




VKAPI_ATTR VkResult VKAPI_CALL ReleaseDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        display = (VkDisplayKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(display)];
    }
    VkResult result = dev_data->instance_dispatch_table->ReleaseDisplayEXT(physicalDevice, display);

    return result;
}

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

VKAPI_ATTR VkResult VKAPI_CALL AcquireXlibDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    VkDisplayKHR                                display)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        display = (VkDisplayKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(display)];
    }
    VkResult result = dev_data->instance_dispatch_table->AcquireXlibDisplayEXT(physicalDevice, dpy, display);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetRandROutputDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->GetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pDisplay);
        *pDisplay = reinterpret_cast<VkDisplayKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT


VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        surface = (VkSurfaceKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(surface)];
    }
    VkResult result = dev_data->instance_dispatch_table->GetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);

    return result;
}


VKAPI_ATTR VkResult VKAPI_CALL DisplayPowerControlEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        display = (VkDisplayKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(display)];
    }
    VkResult result = dev_data->device_dispatch_table->DisplayPowerControlEXT(device, display, pDisplayPowerInfo);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL RegisterDeviceEventEXT(
    VkDevice                                    device,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->RegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pFence);
        *pFence = reinterpret_cast<VkFence&>(unique_id);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL RegisterDisplayEventEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    VkResult result = dev_data->device_dispatch_table->RegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pFence);
        *pFence = reinterpret_cast<VkFence&>(unique_id);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainCounterEXT(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(device), layer_data_map);
    {
        std::lock_guard<std::mutex> lock(global_lock);
        swapchain = (VkSwapchainKHR)dev_data->unique_id_mapping[reinterpret_cast<uint64_t &>(swapchain)];
    }
    VkResult result = dev_data->device_dispatch_table->GetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);

    return result;
}













#ifdef VK_USE_PLATFORM_IOS_MVK

VKAPI_ATTR VkResult VKAPI_CALL CreateIOSSurfaceMVK(
    VkInstance                                  instance,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK

VKAPI_ATTR VkResult VKAPI_CALL CreateMacOSSurfaceMVK(
    VkInstance                                  instance,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    layer_data *dev_data = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map);
    VkResult result = dev_data->instance_dispatch_table->CreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        uint64_t unique_id = global_unique_id++;
        dev_data->unique_id_mapping[unique_id] = reinterpret_cast<uint64_t &>(*pSurface);
        *pSurface = reinterpret_cast<VkSurfaceKHR&>(unique_id);
    }
    return result;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

// Layer Device Extension Whitelist
static const char *kUniqueObjectsSupportedDeviceExtensions =
"VK_KHR_swapchain"
"VK_KHR_display_swapchain"
"VK_KHR_sampler_mirror_clamp_to_edge"
"VK_KHR_shader_draw_parameters"
"VK_KHR_maintenance1"
"VK_KHR_push_descriptor"
"VK_KHR_descriptor_update_template"
"VK_NV_glsl_shader"
"VK_IMG_filter_cubic"
"VK_AMD_rasterization_order"
"VK_AMD_shader_trinary_minmax"
"VK_AMD_shader_explicit_vertex_parameter"
"VK_EXT_debug_marker"
"VK_AMD_gcn_shader"
"VK_NV_dedicated_allocation"
"VK_AMD_draw_indirect_count"
"VK_AMD_negative_viewport_height"
"VK_AMD_gpu_shader_half_float"
"VK_AMD_shader_ballot"
"VK_KHX_multiview"
"VK_IMG_format_pvrtc"
"VK_NV_external_memory"
#ifdef VK_USE_PLATFORM_WIN32_KHR
"VK_NV_external_memory_win32"
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
"VK_NV_win32_keyed_mutex"
#endif
"VK_KHX_device_group"
"VK_EXT_shader_subgroup_ballot"
"VK_EXT_shader_subgroup_vote"
"VK_KHX_external_memory"
#ifdef VK_USE_PLATFORM_WIN32_KHR
"VK_KHX_external_memory_win32"
#endif
"VK_KHX_external_memory_fd"
#ifdef VK_USE_PLATFORM_WIN32_KHR
"VK_KHX_win32_keyed_mutex"
#endif
"VK_KHX_external_semaphore"
#ifdef VK_USE_PLATFORM_WIN32_KHX
"VK_KHX_external_semaphore_win32"
#endif
"VK_KHX_external_semaphore_fd"
"VK_NVX_device_generated_commands"
"VK_NV_clip_space_w_scaling"
"VK_EXT_display_control"
"VK_NV_sample_mask_override_coverage"
"VK_NV_geometry_shader_passthrough"
"VK_NV_viewport_array2"
"VK_NVX_multiview_per_view_attributes"
"VK_NV_viewport_swizzle"
"VK_EXT_discard_rectangles"
;


// Layer Instance Extension Whitelist
static const char *kUniqueObjectsSupportedInstanceExtensions =
"VK_KHR_surface"
"VK_KHR_display"
#ifdef VK_USE_PLATFORM_XLIB_KHR
"VK_KHR_xlib_surface"
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
"VK_KHR_xcb_surface"
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
"VK_KHR_wayland_surface"
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
"VK_KHR_mir_surface"
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
"VK_KHR_android_surface"
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
"VK_KHR_win32_surface"
#endif
"VK_KHR_get_physical_device_properties2"
"VK_EXT_debug_report"
"VK_NV_external_memory_capabilities"
"VK_EXT_validation_flags"
#ifdef VK_USE_PLATFORM_VI_NN
"VK_NN_vi_surface"
#endif
"VK_KHX_device_group_creation"
"VK_KHX_external_memory_capabilities"
"VK_KHX_external_semaphore_capabilities"
"VK_EXT_direct_mode_display"
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
"VK_EXT_acquire_xlib_display"
#endif
"VK_EXT_display_surface_counter"
#ifdef VK_USE_PLATFORM_IOS_MVK
"VK_MVK_ios_surface"
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
"VK_MVK_macos_surface"
#endif
;


// intercepts
struct { const char* name; PFN_vkVoidFunction pFunc;} procmap[] = {
    {"vkCreateInstance", reinterpret_cast<PFN_vkVoidFunction>(CreateInstance)},
    {"vkDestroyInstance", reinterpret_cast<PFN_vkVoidFunction>(DestroyInstance)},
    {"vkGetInstanceProcAddr", reinterpret_cast<PFN_vkVoidFunction>(GetInstanceProcAddr)},
    {"vkGetDeviceProcAddr", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceProcAddr)},
    {"vkCreateDevice", reinterpret_cast<PFN_vkVoidFunction>(CreateDevice)},
    {"vkDestroyDevice", reinterpret_cast<PFN_vkVoidFunction>(DestroyDevice)},
    {"vkEnumerateInstanceExtensionProperties", reinterpret_cast<PFN_vkVoidFunction>(EnumerateInstanceExtensionProperties)},
    {"vkEnumerateInstanceLayerProperties", reinterpret_cast<PFN_vkVoidFunction>(EnumerateInstanceLayerProperties)},
    {"vkEnumerateDeviceLayerProperties", reinterpret_cast<PFN_vkVoidFunction>(EnumerateDeviceLayerProperties)},
    {"vkQueueSubmit", reinterpret_cast<PFN_vkVoidFunction>(QueueSubmit)},
    {"vkAllocateMemory", reinterpret_cast<PFN_vkVoidFunction>(AllocateMemory)},
    {"vkFreeMemory", reinterpret_cast<PFN_vkVoidFunction>(FreeMemory)},
    {"vkMapMemory", reinterpret_cast<PFN_vkVoidFunction>(MapMemory)},
    {"vkUnmapMemory", reinterpret_cast<PFN_vkVoidFunction>(UnmapMemory)},
    {"vkFlushMappedMemoryRanges", reinterpret_cast<PFN_vkVoidFunction>(FlushMappedMemoryRanges)},
    {"vkInvalidateMappedMemoryRanges", reinterpret_cast<PFN_vkVoidFunction>(InvalidateMappedMemoryRanges)},
    {"vkGetDeviceMemoryCommitment", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceMemoryCommitment)},
    {"vkBindBufferMemory", reinterpret_cast<PFN_vkVoidFunction>(BindBufferMemory)},
    {"vkBindImageMemory", reinterpret_cast<PFN_vkVoidFunction>(BindImageMemory)},
    {"vkGetBufferMemoryRequirements", reinterpret_cast<PFN_vkVoidFunction>(GetBufferMemoryRequirements)},
    {"vkGetImageMemoryRequirements", reinterpret_cast<PFN_vkVoidFunction>(GetImageMemoryRequirements)},
    {"vkGetImageSparseMemoryRequirements", reinterpret_cast<PFN_vkVoidFunction>(GetImageSparseMemoryRequirements)},
    {"vkQueueBindSparse", reinterpret_cast<PFN_vkVoidFunction>(QueueBindSparse)},
    {"vkCreateFence", reinterpret_cast<PFN_vkVoidFunction>(CreateFence)},
    {"vkDestroyFence", reinterpret_cast<PFN_vkVoidFunction>(DestroyFence)},
    {"vkResetFences", reinterpret_cast<PFN_vkVoidFunction>(ResetFences)},
    {"vkGetFenceStatus", reinterpret_cast<PFN_vkVoidFunction>(GetFenceStatus)},
    {"vkWaitForFences", reinterpret_cast<PFN_vkVoidFunction>(WaitForFences)},
    {"vkCreateSemaphore", reinterpret_cast<PFN_vkVoidFunction>(CreateSemaphore)},
    {"vkDestroySemaphore", reinterpret_cast<PFN_vkVoidFunction>(DestroySemaphore)},
    {"vkCreateEvent", reinterpret_cast<PFN_vkVoidFunction>(CreateEvent)},
    {"vkDestroyEvent", reinterpret_cast<PFN_vkVoidFunction>(DestroyEvent)},
    {"vkGetEventStatus", reinterpret_cast<PFN_vkVoidFunction>(GetEventStatus)},
    {"vkSetEvent", reinterpret_cast<PFN_vkVoidFunction>(SetEvent)},
    {"vkResetEvent", reinterpret_cast<PFN_vkVoidFunction>(ResetEvent)},
    {"vkCreateQueryPool", reinterpret_cast<PFN_vkVoidFunction>(CreateQueryPool)},
    {"vkDestroyQueryPool", reinterpret_cast<PFN_vkVoidFunction>(DestroyQueryPool)},
    {"vkGetQueryPoolResults", reinterpret_cast<PFN_vkVoidFunction>(GetQueryPoolResults)},
    {"vkCreateBuffer", reinterpret_cast<PFN_vkVoidFunction>(CreateBuffer)},
    {"vkDestroyBuffer", reinterpret_cast<PFN_vkVoidFunction>(DestroyBuffer)},
    {"vkCreateBufferView", reinterpret_cast<PFN_vkVoidFunction>(CreateBufferView)},
    {"vkDestroyBufferView", reinterpret_cast<PFN_vkVoidFunction>(DestroyBufferView)},
    {"vkCreateImage", reinterpret_cast<PFN_vkVoidFunction>(CreateImage)},
    {"vkDestroyImage", reinterpret_cast<PFN_vkVoidFunction>(DestroyImage)},
    {"vkGetImageSubresourceLayout", reinterpret_cast<PFN_vkVoidFunction>(GetImageSubresourceLayout)},
    {"vkCreateImageView", reinterpret_cast<PFN_vkVoidFunction>(CreateImageView)},
    {"vkDestroyImageView", reinterpret_cast<PFN_vkVoidFunction>(DestroyImageView)},
    {"vkCreateShaderModule", reinterpret_cast<PFN_vkVoidFunction>(CreateShaderModule)},
    {"vkDestroyShaderModule", reinterpret_cast<PFN_vkVoidFunction>(DestroyShaderModule)},
    {"vkCreatePipelineCache", reinterpret_cast<PFN_vkVoidFunction>(CreatePipelineCache)},
    {"vkDestroyPipelineCache", reinterpret_cast<PFN_vkVoidFunction>(DestroyPipelineCache)},
    {"vkGetPipelineCacheData", reinterpret_cast<PFN_vkVoidFunction>(GetPipelineCacheData)},
    {"vkMergePipelineCaches", reinterpret_cast<PFN_vkVoidFunction>(MergePipelineCaches)},
    {"vkCreateGraphicsPipelines", reinterpret_cast<PFN_vkVoidFunction>(CreateGraphicsPipelines)},
    {"vkCreateComputePipelines", reinterpret_cast<PFN_vkVoidFunction>(CreateComputePipelines)},
    {"vkDestroyPipeline", reinterpret_cast<PFN_vkVoidFunction>(DestroyPipeline)},
    {"vkCreatePipelineLayout", reinterpret_cast<PFN_vkVoidFunction>(CreatePipelineLayout)},
    {"vkDestroyPipelineLayout", reinterpret_cast<PFN_vkVoidFunction>(DestroyPipelineLayout)},
    {"vkCreateSampler", reinterpret_cast<PFN_vkVoidFunction>(CreateSampler)},
    {"vkDestroySampler", reinterpret_cast<PFN_vkVoidFunction>(DestroySampler)},
    {"vkCreateDescriptorSetLayout", reinterpret_cast<PFN_vkVoidFunction>(CreateDescriptorSetLayout)},
    {"vkDestroyDescriptorSetLayout", reinterpret_cast<PFN_vkVoidFunction>(DestroyDescriptorSetLayout)},
    {"vkCreateDescriptorPool", reinterpret_cast<PFN_vkVoidFunction>(CreateDescriptorPool)},
    {"vkDestroyDescriptorPool", reinterpret_cast<PFN_vkVoidFunction>(DestroyDescriptorPool)},
    {"vkResetDescriptorPool", reinterpret_cast<PFN_vkVoidFunction>(ResetDescriptorPool)},
    {"vkAllocateDescriptorSets", reinterpret_cast<PFN_vkVoidFunction>(AllocateDescriptorSets)},
    {"vkFreeDescriptorSets", reinterpret_cast<PFN_vkVoidFunction>(FreeDescriptorSets)},
    {"vkUpdateDescriptorSets", reinterpret_cast<PFN_vkVoidFunction>(UpdateDescriptorSets)},
    {"vkCreateFramebuffer", reinterpret_cast<PFN_vkVoidFunction>(CreateFramebuffer)},
    {"vkDestroyFramebuffer", reinterpret_cast<PFN_vkVoidFunction>(DestroyFramebuffer)},
    {"vkCreateRenderPass", reinterpret_cast<PFN_vkVoidFunction>(CreateRenderPass)},
    {"vkDestroyRenderPass", reinterpret_cast<PFN_vkVoidFunction>(DestroyRenderPass)},
    {"vkGetRenderAreaGranularity", reinterpret_cast<PFN_vkVoidFunction>(GetRenderAreaGranularity)},
    {"vkCreateCommandPool", reinterpret_cast<PFN_vkVoidFunction>(CreateCommandPool)},
    {"vkDestroyCommandPool", reinterpret_cast<PFN_vkVoidFunction>(DestroyCommandPool)},
    {"vkResetCommandPool", reinterpret_cast<PFN_vkVoidFunction>(ResetCommandPool)},
    {"vkAllocateCommandBuffers", reinterpret_cast<PFN_vkVoidFunction>(AllocateCommandBuffers)},
    {"vkFreeCommandBuffers", reinterpret_cast<PFN_vkVoidFunction>(FreeCommandBuffers)},
    {"vkBeginCommandBuffer", reinterpret_cast<PFN_vkVoidFunction>(BeginCommandBuffer)},
    {"vkCmdBindPipeline", reinterpret_cast<PFN_vkVoidFunction>(CmdBindPipeline)},
    {"vkCmdBindDescriptorSets", reinterpret_cast<PFN_vkVoidFunction>(CmdBindDescriptorSets)},
    {"vkCmdBindIndexBuffer", reinterpret_cast<PFN_vkVoidFunction>(CmdBindIndexBuffer)},
    {"vkCmdBindVertexBuffers", reinterpret_cast<PFN_vkVoidFunction>(CmdBindVertexBuffers)},
    {"vkCmdDrawIndirect", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndirect)},
    {"vkCmdDrawIndexedIndirect", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndexedIndirect)},
    {"vkCmdDispatchIndirect", reinterpret_cast<PFN_vkVoidFunction>(CmdDispatchIndirect)},
    {"vkCmdCopyBuffer", reinterpret_cast<PFN_vkVoidFunction>(CmdCopyBuffer)},
    {"vkCmdCopyImage", reinterpret_cast<PFN_vkVoidFunction>(CmdCopyImage)},
    {"vkCmdBlitImage", reinterpret_cast<PFN_vkVoidFunction>(CmdBlitImage)},
    {"vkCmdCopyBufferToImage", reinterpret_cast<PFN_vkVoidFunction>(CmdCopyBufferToImage)},
    {"vkCmdCopyImageToBuffer", reinterpret_cast<PFN_vkVoidFunction>(CmdCopyImageToBuffer)},
    {"vkCmdUpdateBuffer", reinterpret_cast<PFN_vkVoidFunction>(CmdUpdateBuffer)},
    {"vkCmdFillBuffer", reinterpret_cast<PFN_vkVoidFunction>(CmdFillBuffer)},
    {"vkCmdClearColorImage", reinterpret_cast<PFN_vkVoidFunction>(CmdClearColorImage)},
    {"vkCmdClearDepthStencilImage", reinterpret_cast<PFN_vkVoidFunction>(CmdClearDepthStencilImage)},
    {"vkCmdResolveImage", reinterpret_cast<PFN_vkVoidFunction>(CmdResolveImage)},
    {"vkCmdSetEvent", reinterpret_cast<PFN_vkVoidFunction>(CmdSetEvent)},
    {"vkCmdResetEvent", reinterpret_cast<PFN_vkVoidFunction>(CmdResetEvent)},
    {"vkCmdWaitEvents", reinterpret_cast<PFN_vkVoidFunction>(CmdWaitEvents)},
    {"vkCmdPipelineBarrier", reinterpret_cast<PFN_vkVoidFunction>(CmdPipelineBarrier)},
    {"vkCmdBeginQuery", reinterpret_cast<PFN_vkVoidFunction>(CmdBeginQuery)},
    {"vkCmdEndQuery", reinterpret_cast<PFN_vkVoidFunction>(CmdEndQuery)},
    {"vkCmdResetQueryPool", reinterpret_cast<PFN_vkVoidFunction>(CmdResetQueryPool)},
    {"vkCmdWriteTimestamp", reinterpret_cast<PFN_vkVoidFunction>(CmdWriteTimestamp)},
    {"vkCmdCopyQueryPoolResults", reinterpret_cast<PFN_vkVoidFunction>(CmdCopyQueryPoolResults)},
    {"vkCmdPushConstants", reinterpret_cast<PFN_vkVoidFunction>(CmdPushConstants)},
    {"vkCmdBeginRenderPass", reinterpret_cast<PFN_vkVoidFunction>(CmdBeginRenderPass)},
    {"vkDestroySurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(DestroySurfaceKHR)},
    {"vkGetPhysicalDeviceSurfaceSupportKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSurfaceSupportKHR)},
    {"vkGetPhysicalDeviceSurfaceCapabilitiesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSurfaceCapabilitiesKHR)},
    {"vkGetPhysicalDeviceSurfaceFormatsKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSurfaceFormatsKHR)},
    {"vkGetPhysicalDeviceSurfacePresentModesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSurfacePresentModesKHR)},
    {"vkCreateSwapchainKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateSwapchainKHR)},
    {"vkDestroySwapchainKHR", reinterpret_cast<PFN_vkVoidFunction>(DestroySwapchainKHR)},
    {"vkGetSwapchainImagesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetSwapchainImagesKHR)},
    {"vkAcquireNextImageKHR", reinterpret_cast<PFN_vkVoidFunction>(AcquireNextImageKHR)},
    {"vkQueuePresentKHR", reinterpret_cast<PFN_vkVoidFunction>(QueuePresentKHR)},
    {"vkCreateDisplayModeKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateDisplayModeKHR)},
    {"vkCreateDisplayPlaneSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateDisplayPlaneSurfaceKHR)},
    {"vkCreateSharedSwapchainsKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateSharedSwapchainsKHR)},
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkCreateXlibSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateXlibSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkCreateXcbSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateXcbSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkCreateWaylandSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateWaylandSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkCreateMirSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateMirSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    {"vkCreateAndroidSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateAndroidSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkCreateWin32SurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateWin32SurfaceKHR)},
#endif
    {"vkTrimCommandPoolKHR", reinterpret_cast<PFN_vkVoidFunction>(TrimCommandPoolKHR)},
    {"vkCmdPushDescriptorSetKHR", reinterpret_cast<PFN_vkVoidFunction>(CmdPushDescriptorSetKHR)},
    {"vkCreateDescriptorUpdateTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateDescriptorUpdateTemplateKHR)},
    {"vkDestroyDescriptorUpdateTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(DestroyDescriptorUpdateTemplateKHR)},
    {"vkUpdateDescriptorSetWithTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(UpdateDescriptorSetWithTemplateKHR)},
    {"vkCmdPushDescriptorSetWithTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(CmdPushDescriptorSetWithTemplateKHR)},
    {"vkCmdDrawIndirectCountAMD", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndirectCountAMD)},
    {"vkCmdDrawIndexedIndirectCountAMD", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndexedIndirectCountAMD)},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleNV", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryWin32HandleNV)},
#endif
    {"vkBindBufferMemory2KHX", reinterpret_cast<PFN_vkVoidFunction>(BindBufferMemory2KHX)},
    {"vkBindImageMemory2KHX", reinterpret_cast<PFN_vkVoidFunction>(BindImageMemory2KHX)},
    {"vkGetDeviceGroupSurfacePresentModesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceGroupSurfacePresentModesKHX)},
    {"vkAcquireNextImage2KHX", reinterpret_cast<PFN_vkVoidFunction>(AcquireNextImage2KHX)},
    {"vkGetPhysicalDevicePresentRectanglesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDevicePresentRectanglesKHX)},
#ifdef VK_USE_PLATFORM_VI_NN
    {"vkCreateViSurfaceNN", reinterpret_cast<PFN_vkVoidFunction>(CreateViSurfaceNN)},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleKHX", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryWin32HandleKHX)},
#endif
    {"vkGetMemoryFdKHX", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryFdKHX)},
#ifdef VK_USE_PLATFORM_WIN32_KHX
    {"vkImportSemaphoreWin32HandleKHX", reinterpret_cast<PFN_vkVoidFunction>(ImportSemaphoreWin32HandleKHX)},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHX
    {"vkGetSemaphoreWin32HandleKHX", reinterpret_cast<PFN_vkVoidFunction>(GetSemaphoreWin32HandleKHX)},
#endif
    {"vkImportSemaphoreFdKHX", reinterpret_cast<PFN_vkVoidFunction>(ImportSemaphoreFdKHX)},
    {"vkGetSemaphoreFdKHX", reinterpret_cast<PFN_vkVoidFunction>(GetSemaphoreFdKHX)},
    {"vkCmdProcessCommandsNVX", reinterpret_cast<PFN_vkVoidFunction>(CmdProcessCommandsNVX)},
    {"vkCmdReserveSpaceForCommandsNVX", reinterpret_cast<PFN_vkVoidFunction>(CmdReserveSpaceForCommandsNVX)},
    {"vkCreateIndirectCommandsLayoutNVX", reinterpret_cast<PFN_vkVoidFunction>(CreateIndirectCommandsLayoutNVX)},
    {"vkDestroyIndirectCommandsLayoutNVX", reinterpret_cast<PFN_vkVoidFunction>(DestroyIndirectCommandsLayoutNVX)},
    {"vkCreateObjectTableNVX", reinterpret_cast<PFN_vkVoidFunction>(CreateObjectTableNVX)},
    {"vkDestroyObjectTableNVX", reinterpret_cast<PFN_vkVoidFunction>(DestroyObjectTableNVX)},
    {"vkRegisterObjectsNVX", reinterpret_cast<PFN_vkVoidFunction>(RegisterObjectsNVX)},
    {"vkUnregisterObjectsNVX", reinterpret_cast<PFN_vkVoidFunction>(UnregisterObjectsNVX)},
    {"vkReleaseDisplayEXT", reinterpret_cast<PFN_vkVoidFunction>(ReleaseDisplayEXT)},
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    {"vkAcquireXlibDisplayEXT", reinterpret_cast<PFN_vkVoidFunction>(AcquireXlibDisplayEXT)},
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    {"vkGetRandROutputDisplayEXT", reinterpret_cast<PFN_vkVoidFunction>(GetRandROutputDisplayEXT)},
#endif
    {"vkGetPhysicalDeviceSurfaceCapabilities2EXT", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSurfaceCapabilities2EXT)},
    {"vkDisplayPowerControlEXT", reinterpret_cast<PFN_vkVoidFunction>(DisplayPowerControlEXT)},
    {"vkRegisterDeviceEventEXT", reinterpret_cast<PFN_vkVoidFunction>(RegisterDeviceEventEXT)},
    {"vkRegisterDisplayEventEXT", reinterpret_cast<PFN_vkVoidFunction>(RegisterDisplayEventEXT)},
    {"vkGetSwapchainCounterEXT", reinterpret_cast<PFN_vkVoidFunction>(GetSwapchainCounterEXT)},
#ifdef VK_USE_PLATFORM_IOS_MVK
    {"vkCreateIOSSurfaceMVK", reinterpret_cast<PFN_vkVoidFunction>(CreateIOSSurfaceMVK)},
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    {"vkCreateMacOSSurfaceMVK", reinterpret_cast<PFN_vkVoidFunction>(CreateMacOSSurfaceMVK)},
#endif
};


} // namespace unique_objects
