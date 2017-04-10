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


#include "vk_struct_size_helper.h"
#include <string.h>
#include <assert.h>

// Function Definitions

size_t vk_size_vkapplicationinfo(const VkApplicationInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkApplicationInfo);
        struct_size += (struct_ptr->pApplicationName != NULL) ? sizeof(char)*(1+strlen(struct_ptr->pApplicationName)) : 0;
        struct_size += (struct_ptr->pEngineName != NULL) ? sizeof(char)*(1+strlen(struct_ptr->pEngineName)) : 0;
    }
    return struct_size;
}

size_t vk_size_vkinstancecreateinfo(const VkInstanceCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkInstanceCreateInfo);
        struct_size += vk_size_vkapplicationinfo(struct_ptr->pApplicationInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->enabledLayerCount; i++) {
            struct_size += (sizeof(char*) + (sizeof(char) * (1 + strlen(struct_ptr->ppEnabledLayerNames[i]))));
        }
        for (i = 0; i < struct_ptr->enabledExtensionCount; i++) {
            struct_size += (sizeof(char*) + (sizeof(char) * (1 + strlen(struct_ptr->ppEnabledExtensionNames[i]))));
        }
    }
    return struct_size;
}

size_t vk_size_vkallocationcallbacks(const VkAllocationCallbacks* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkAllocationCallbacks);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicefeatures(const VkPhysicalDeviceFeatures* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceFeatures);
    }
    return struct_size;
}

size_t vk_size_vkformatproperties(const VkFormatProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkFormatProperties);
    }
    return struct_size;
}

size_t vk_size_vkextent3d(const VkExtent3D* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExtent3D);
    }
    return struct_size;
}

size_t vk_size_vkimageformatproperties(const VkImageFormatProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageFormatProperties);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicelimits(const VkPhysicalDeviceLimits* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceLimits);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicesparseproperties(const VkPhysicalDeviceSparseProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceSparseProperties);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceproperties(const VkPhysicalDeviceProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceProperties);
    }
    return struct_size;
}

size_t vk_size_vkqueuefamilyproperties(const VkQueueFamilyProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkQueueFamilyProperties);
    }
    return struct_size;
}

size_t vk_size_vkmemorytype(const VkMemoryType* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryType);
    }
    return struct_size;
}

size_t vk_size_vkmemoryheap(const VkMemoryHeap* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryHeap);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicememoryproperties(const VkPhysicalDeviceMemoryProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceMemoryProperties);
    }
    return struct_size;
}

size_t vk_size_vkdevicequeuecreateinfo(const VkDeviceQueueCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceQueueCreateInfo);
        struct_size += struct_ptr->queueCount * sizeof(float);
    }
    return struct_size;
}

size_t vk_size_vkdevicecreateinfo(const VkDeviceCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->queueCreateInfoCount; i++) {
            struct_size += vk_size_vkdevicequeuecreateinfo(&struct_ptr->pQueueCreateInfos[i]);
        }
        for (i = 0; i < struct_ptr->enabledLayerCount; i++) {
            struct_size += (sizeof(char*) + (sizeof(char) * (1 + strlen(struct_ptr->ppEnabledLayerNames[i]))));
        }
        for (i = 0; i < struct_ptr->enabledExtensionCount; i++) {
            struct_size += (sizeof(char*) + (sizeof(char) * (1 + strlen(struct_ptr->ppEnabledExtensionNames[i]))));
        }
        struct_size += vk_size_vkphysicaldevicefeatures(struct_ptr->pEnabledFeatures);
    }
    return struct_size;
}

size_t vk_size_vkextensionproperties(const VkExtensionProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExtensionProperties);
    }
    return struct_size;
}

size_t vk_size_vklayerproperties(const VkLayerProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkLayerProperties);
    }
    return struct_size;
}

size_t vk_size_vksubmitinfo(const VkSubmitInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSubmitInfo);
        struct_size += struct_ptr->waitSemaphoreCount * sizeof(VkSemaphore);
        struct_size += struct_ptr->waitSemaphoreCount * sizeof(VkPipelineStageFlags);
        struct_size += struct_ptr->commandBufferCount * sizeof(VkCommandBuffer);
        struct_size += struct_ptr->signalSemaphoreCount * sizeof(VkSemaphore);
    }
    return struct_size;
}

size_t vk_size_vkmemoryallocateinfo(const VkMemoryAllocateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryAllocateInfo);
    }
    return struct_size;
}

size_t vk_size_vkmappedmemoryrange(const VkMappedMemoryRange* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMappedMemoryRange);
    }
    return struct_size;
}

size_t vk_size_vkmemoryrequirements(const VkMemoryRequirements* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryRequirements);
    }
    return struct_size;
}

size_t vk_size_vksparseimageformatproperties(const VkSparseImageFormatProperties* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseImageFormatProperties);
    }
    return struct_size;
}

size_t vk_size_vksparseimagememoryrequirements(const VkSparseImageMemoryRequirements* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseImageMemoryRequirements);
    }
    return struct_size;
}

size_t vk_size_vksparsememorybind(const VkSparseMemoryBind* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseMemoryBind);
    }
    return struct_size;
}

size_t vk_size_vksparsebuffermemorybindinfo(const VkSparseBufferMemoryBindInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseBufferMemoryBindInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->bindCount; i++) {
            struct_size += vk_size_vksparsememorybind(&struct_ptr->pBinds[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vksparseimageopaquememorybindinfo(const VkSparseImageOpaqueMemoryBindInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseImageOpaqueMemoryBindInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->bindCount; i++) {
            struct_size += vk_size_vksparsememorybind(&struct_ptr->pBinds[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkimagesubresource(const VkImageSubresource* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageSubresource);
    }
    return struct_size;
}

size_t vk_size_vkoffset3d(const VkOffset3D* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkOffset3D);
    }
    return struct_size;
}

size_t vk_size_vksparseimagememorybind(const VkSparseImageMemoryBind* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseImageMemoryBind);
    }
    return struct_size;
}

size_t vk_size_vksparseimagememorybindinfo(const VkSparseImageMemoryBindInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseImageMemoryBindInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->bindCount; i++) {
            struct_size += vk_size_vksparseimagememorybind(&struct_ptr->pBinds[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkbindsparseinfo(const VkBindSparseInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBindSparseInfo);
        struct_size += struct_ptr->waitSemaphoreCount * sizeof(VkSemaphore);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->bufferBindCount; i++) {
            struct_size += vk_size_vksparsebuffermemorybindinfo(&struct_ptr->pBufferBinds[i]);
        }
        for (i = 0; i < struct_ptr->imageOpaqueBindCount; i++) {
            struct_size += vk_size_vksparseimageopaquememorybindinfo(&struct_ptr->pImageOpaqueBinds[i]);
        }
        for (i = 0; i < struct_ptr->imageBindCount; i++) {
            struct_size += vk_size_vksparseimagememorybindinfo(&struct_ptr->pImageBinds[i]);
        }
        struct_size += struct_ptr->signalSemaphoreCount * sizeof(VkSemaphore);
    }
    return struct_size;
}

size_t vk_size_vkfencecreateinfo(const VkFenceCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkFenceCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vksemaphorecreateinfo(const VkSemaphoreCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSemaphoreCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkeventcreateinfo(const VkEventCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkEventCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkquerypoolcreateinfo(const VkQueryPoolCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkQueryPoolCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkbuffercreateinfo(const VkBufferCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBufferCreateInfo);
        struct_size += struct_ptr->queueFamilyIndexCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkbufferviewcreateinfo(const VkBufferViewCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBufferViewCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkimagecreateinfo(const VkImageCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageCreateInfo);
        struct_size += struct_ptr->queueFamilyIndexCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vksubresourcelayout(const VkSubresourceLayout* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSubresourceLayout);
    }
    return struct_size;
}

size_t vk_size_vkcomponentmapping(const VkComponentMapping* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkComponentMapping);
    }
    return struct_size;
}

size_t vk_size_vkimagesubresourcerange(const VkImageSubresourceRange* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageSubresourceRange);
    }
    return struct_size;
}

size_t vk_size_vkimageviewcreateinfo(const VkImageViewCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageViewCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkshadermodulecreateinfo(const VkShaderModuleCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkShaderModuleCreateInfo);
        struct_size += struct_ptr->codeSize/4 * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkpipelinecachecreateinfo(const VkPipelineCacheCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineCacheCreateInfo);
        struct_size += struct_ptr->initialDataSize * sizeof(void*);
    }
    return struct_size;
}

size_t vk_size_vkspecializationmapentry(const VkSpecializationMapEntry* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSpecializationMapEntry);
    }
    return struct_size;
}

size_t vk_size_vkspecializationinfo(const VkSpecializationInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSpecializationInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->mapEntryCount; i++) {
            struct_size += vk_size_vkspecializationmapentry(&struct_ptr->pMapEntries[i]);
        }
        struct_size += struct_ptr->dataSize * sizeof(void*);
    }
    return struct_size;
}

size_t vk_size_vkpipelineshaderstagecreateinfo(const VkPipelineShaderStageCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineShaderStageCreateInfo);
        struct_size += (struct_ptr->pName != NULL) ? sizeof(char)*(1+strlen(struct_ptr->pName)) : 0;
        struct_size += vk_size_vkspecializationinfo(struct_ptr->pSpecializationInfo);
    }
    return struct_size;
}

size_t vk_size_vkvertexinputbindingdescription(const VkVertexInputBindingDescription* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkVertexInputBindingDescription);
    }
    return struct_size;
}

size_t vk_size_vkvertexinputattributedescription(const VkVertexInputAttributeDescription* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkVertexInputAttributeDescription);
    }
    return struct_size;
}

size_t vk_size_vkpipelinevertexinputstatecreateinfo(const VkPipelineVertexInputStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineVertexInputStateCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->vertexBindingDescriptionCount; i++) {
            struct_size += vk_size_vkvertexinputbindingdescription(&struct_ptr->pVertexBindingDescriptions[i]);
        }
        for (i = 0; i < struct_ptr->vertexAttributeDescriptionCount; i++) {
            struct_size += vk_size_vkvertexinputattributedescription(&struct_ptr->pVertexAttributeDescriptions[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkpipelineinputassemblystatecreateinfo(const VkPipelineInputAssemblyStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineInputAssemblyStateCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkpipelinetessellationstatecreateinfo(const VkPipelineTessellationStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineTessellationStateCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkviewport(const VkViewport* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkViewport);
    }
    return struct_size;
}

size_t vk_size_vkoffset2d(const VkOffset2D* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkOffset2D);
    }
    return struct_size;
}

size_t vk_size_vkextent2d(const VkExtent2D* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExtent2D);
    }
    return struct_size;
}

size_t vk_size_vkrect2d(const VkRect2D* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkRect2D);
    }
    return struct_size;
}

size_t vk_size_vkpipelineviewportstatecreateinfo(const VkPipelineViewportStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineViewportStateCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->viewportCount; i++) {
            struct_size += vk_size_vkviewport(&struct_ptr->pViewports[i]);
        }
        for (i = 0; i < struct_ptr->scissorCount; i++) {
            struct_size += vk_size_vkrect2d(&struct_ptr->pScissors[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkpipelinerasterizationstatecreateinfo(const VkPipelineRasterizationStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineRasterizationStateCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkpipelinemultisamplestatecreateinfo(const VkPipelineMultisampleStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineMultisampleStateCreateInfo);
        struct_size += struct_ptr->rasterizationSamples/32 * sizeof(VkSampleMask);
    }
    return struct_size;
}

size_t vk_size_vkstencilopstate(const VkStencilOpState* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkStencilOpState);
    }
    return struct_size;
}

size_t vk_size_vkpipelinedepthstencilstatecreateinfo(const VkPipelineDepthStencilStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineDepthStencilStateCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkpipelinecolorblendattachmentstate(const VkPipelineColorBlendAttachmentState* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineColorBlendAttachmentState);
    }
    return struct_size;
}

size_t vk_size_vkpipelinecolorblendstatecreateinfo(const VkPipelineColorBlendStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineColorBlendStateCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->attachmentCount; i++) {
            struct_size += vk_size_vkpipelinecolorblendattachmentstate(&struct_ptr->pAttachments[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkpipelinedynamicstatecreateinfo(const VkPipelineDynamicStateCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineDynamicStateCreateInfo);
        struct_size += struct_ptr->dynamicStateCount * sizeof(VkDynamicState);
    }
    return struct_size;
}

size_t vk_size_vkgraphicspipelinecreateinfo(const VkGraphicsPipelineCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkGraphicsPipelineCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->stageCount; i++) {
            struct_size += vk_size_vkpipelineshaderstagecreateinfo(&struct_ptr->pStages[i]);
        }
        struct_size += vk_size_vkpipelinevertexinputstatecreateinfo(struct_ptr->pVertexInputState);
        struct_size += vk_size_vkpipelineinputassemblystatecreateinfo(struct_ptr->pInputAssemblyState);
        struct_size += vk_size_vkpipelinetessellationstatecreateinfo(struct_ptr->pTessellationState);
        struct_size += vk_size_vkpipelineviewportstatecreateinfo(struct_ptr->pViewportState);
        struct_size += vk_size_vkpipelinerasterizationstatecreateinfo(struct_ptr->pRasterizationState);
        struct_size += vk_size_vkpipelinemultisamplestatecreateinfo(struct_ptr->pMultisampleState);
        struct_size += vk_size_vkpipelinedepthstencilstatecreateinfo(struct_ptr->pDepthStencilState);
        struct_size += vk_size_vkpipelinecolorblendstatecreateinfo(struct_ptr->pColorBlendState);
        struct_size += vk_size_vkpipelinedynamicstatecreateinfo(struct_ptr->pDynamicState);
    }
    return struct_size;
}

size_t vk_size_vkcomputepipelinecreateinfo(const VkComputePipelineCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkComputePipelineCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkpushconstantrange(const VkPushConstantRange* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPushConstantRange);
    }
    return struct_size;
}

size_t vk_size_vkpipelinelayoutcreateinfo(const VkPipelineLayoutCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineLayoutCreateInfo);
        struct_size += struct_ptr->setLayoutCount * sizeof(VkDescriptorSetLayout);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->pushConstantRangeCount; i++) {
            struct_size += vk_size_vkpushconstantrange(&struct_ptr->pPushConstantRanges[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vksamplercreateinfo(const VkSamplerCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSamplerCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorsetlayoutbinding(const VkDescriptorSetLayoutBinding* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorSetLayoutBinding);
        struct_size += struct_ptr->descriptorCount * sizeof(VkSampler);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorsetlayoutcreateinfo(const VkDescriptorSetLayoutCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorSetLayoutCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->bindingCount; i++) {
            struct_size += vk_size_vkdescriptorsetlayoutbinding(&struct_ptr->pBindings[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkdescriptorpoolsize(const VkDescriptorPoolSize* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorPoolSize);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorpoolcreateinfo(const VkDescriptorPoolCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorPoolCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->poolSizeCount; i++) {
            struct_size += vk_size_vkdescriptorpoolsize(&struct_ptr->pPoolSizes[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkdescriptorsetallocateinfo(const VkDescriptorSetAllocateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorSetAllocateInfo);
        struct_size += struct_ptr->descriptorSetCount * sizeof(VkDescriptorSetLayout);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorimageinfo(const VkDescriptorImageInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorImageInfo);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorbufferinfo(const VkDescriptorBufferInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorBufferInfo);
    }
    return struct_size;
}

size_t vk_size_vkwritedescriptorset(const VkWriteDescriptorSet* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkWriteDescriptorSet);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->descriptorCount; i++) {
            struct_size += vk_size_vkdescriptorimageinfo(&struct_ptr->pImageInfo[i]);
        }
        for (i = 0; i < struct_ptr->descriptorCount; i++) {
            struct_size += vk_size_vkdescriptorbufferinfo(&struct_ptr->pBufferInfo[i]);
        }
        struct_size += struct_ptr->descriptorCount * sizeof(VkBufferView);
    }
    return struct_size;
}

size_t vk_size_vkcopydescriptorset(const VkCopyDescriptorSet* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCopyDescriptorSet);
    }
    return struct_size;
}

size_t vk_size_vkframebuffercreateinfo(const VkFramebufferCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkFramebufferCreateInfo);
        struct_size += struct_ptr->attachmentCount * sizeof(VkImageView);
    }
    return struct_size;
}

size_t vk_size_vkattachmentdescription(const VkAttachmentDescription* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkAttachmentDescription);
    }
    return struct_size;
}

size_t vk_size_vkattachmentreference(const VkAttachmentReference* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkAttachmentReference);
    }
    return struct_size;
}

size_t vk_size_vksubpassdescription(const VkSubpassDescription* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSubpassDescription);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->inputAttachmentCount; i++) {
            struct_size += vk_size_vkattachmentreference(&struct_ptr->pInputAttachments[i]);
        }
        for (i = 0; i < struct_ptr->colorAttachmentCount; i++) {
            struct_size += vk_size_vkattachmentreference(&struct_ptr->pColorAttachments[i]);
        }
        for (i = 0; i < struct_ptr->colorAttachmentCount; i++) {
            struct_size += vk_size_vkattachmentreference(&struct_ptr->pResolveAttachments[i]);
        }
        struct_size += vk_size_vkattachmentreference(struct_ptr->pDepthStencilAttachment);
        struct_size += struct_ptr->preserveAttachmentCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vksubpassdependency(const VkSubpassDependency* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSubpassDependency);
    }
    return struct_size;
}

size_t vk_size_vkrenderpasscreateinfo(const VkRenderPassCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkRenderPassCreateInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->attachmentCount; i++) {
            struct_size += vk_size_vkattachmentdescription(&struct_ptr->pAttachments[i]);
        }
        for (i = 0; i < struct_ptr->subpassCount; i++) {
            struct_size += vk_size_vksubpassdescription(&struct_ptr->pSubpasses[i]);
        }
        for (i = 0; i < struct_ptr->dependencyCount; i++) {
            struct_size += vk_size_vksubpassdependency(&struct_ptr->pDependencies[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkcommandpoolcreateinfo(const VkCommandPoolCreateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCommandPoolCreateInfo);
    }
    return struct_size;
}

size_t vk_size_vkcommandbufferallocateinfo(const VkCommandBufferAllocateInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCommandBufferAllocateInfo);
    }
    return struct_size;
}

size_t vk_size_vkcommandbufferinheritanceinfo(const VkCommandBufferInheritanceInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCommandBufferInheritanceInfo);
    }
    return struct_size;
}

size_t vk_size_vkcommandbufferbegininfo(const VkCommandBufferBeginInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCommandBufferBeginInfo);
        struct_size += vk_size_vkcommandbufferinheritanceinfo(struct_ptr->pInheritanceInfo);
    }
    return struct_size;
}

size_t vk_size_vkbuffercopy(const VkBufferCopy* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBufferCopy);
    }
    return struct_size;
}

size_t vk_size_vkimagesubresourcelayers(const VkImageSubresourceLayers* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageSubresourceLayers);
    }
    return struct_size;
}

size_t vk_size_vkimagecopy(const VkImageCopy* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageCopy);
    }
    return struct_size;
}

size_t vk_size_vkimageblit(const VkImageBlit* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageBlit);
    }
    return struct_size;
}

size_t vk_size_vkbufferimagecopy(const VkBufferImageCopy* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBufferImageCopy);
    }
    return struct_size;
}

size_t vk_size_vkclearcolorvalue(const VkClearColorValue* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkClearColorValue);
    }
    return struct_size;
}

size_t vk_size_vkcleardepthstencilvalue(const VkClearDepthStencilValue* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkClearDepthStencilValue);
    }
    return struct_size;
}

size_t vk_size_vkclearvalue(const VkClearValue* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkClearValue);
    }
    return struct_size;
}

size_t vk_size_vkclearattachment(const VkClearAttachment* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkClearAttachment);
    }
    return struct_size;
}

size_t vk_size_vkclearrect(const VkClearRect* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkClearRect);
    }
    return struct_size;
}

size_t vk_size_vkimageresolve(const VkImageResolve* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageResolve);
    }
    return struct_size;
}

size_t vk_size_vkmemorybarrier(const VkMemoryBarrier* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryBarrier);
    }
    return struct_size;
}

size_t vk_size_vkbuffermemorybarrier(const VkBufferMemoryBarrier* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBufferMemoryBarrier);
    }
    return struct_size;
}

size_t vk_size_vkimagememorybarrier(const VkImageMemoryBarrier* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageMemoryBarrier);
    }
    return struct_size;
}

size_t vk_size_vkrenderpassbegininfo(const VkRenderPassBeginInfo* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkRenderPassBeginInfo);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->clearValueCount; i++) {
            struct_size += vk_size_vkclearvalue(&struct_ptr->pClearValues[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkdispatchindirectcommand(const VkDispatchIndirectCommand* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDispatchIndirectCommand);
    }
    return struct_size;
}

size_t vk_size_vkdrawindexedindirectcommand(const VkDrawIndexedIndirectCommand* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDrawIndexedIndirectCommand);
    }
    return struct_size;
}

size_t vk_size_vkdrawindirectcommand(const VkDrawIndirectCommand* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDrawIndirectCommand);
    }
    return struct_size;
}

size_t vk_size_vksurfacecapabilitieskhr(const VkSurfaceCapabilitiesKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSurfaceCapabilitiesKHR);
    }
    return struct_size;
}

size_t vk_size_vksurfaceformatkhr(const VkSurfaceFormatKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSurfaceFormatKHR);
    }
    return struct_size;
}

size_t vk_size_vkswapchaincreateinfokhr(const VkSwapchainCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSwapchainCreateInfoKHR);
        struct_size += struct_ptr->queueFamilyIndexCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkpresentinfokhr(const VkPresentInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPresentInfoKHR);
        struct_size += struct_ptr->waitSemaphoreCount * sizeof(VkSemaphore);
        struct_size += struct_ptr->swapchainCount * sizeof(VkSwapchainKHR);
        struct_size += struct_ptr->swapchainCount * sizeof(uint32_t);
        struct_size += struct_ptr->swapchainCount * sizeof(VkResult);
    }
    return struct_size;
}

size_t vk_size_vkdisplaypropertieskhr(const VkDisplayPropertiesKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayPropertiesKHR);
        struct_size += (struct_ptr->displayName != NULL) ? sizeof(char)*(1+strlen(struct_ptr->displayName)) : 0;
    }
    return struct_size;
}

size_t vk_size_vkdisplaymodeparameterskhr(const VkDisplayModeParametersKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayModeParametersKHR);
    }
    return struct_size;
}

size_t vk_size_vkdisplaymodepropertieskhr(const VkDisplayModePropertiesKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayModePropertiesKHR);
    }
    return struct_size;
}

size_t vk_size_vkdisplaymodecreateinfokhr(const VkDisplayModeCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayModeCreateInfoKHR);
    }
    return struct_size;
}

size_t vk_size_vkdisplayplanecapabilitieskhr(const VkDisplayPlaneCapabilitiesKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayPlaneCapabilitiesKHR);
    }
    return struct_size;
}

size_t vk_size_vkdisplayplanepropertieskhr(const VkDisplayPlanePropertiesKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayPlanePropertiesKHR);
    }
    return struct_size;
}

size_t vk_size_vkdisplaysurfacecreateinfokhr(const VkDisplaySurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplaySurfaceCreateInfoKHR);
    }
    return struct_size;
}

size_t vk_size_vkdisplaypresentinfokhr(const VkDisplayPresentInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayPresentInfoKHR);
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_XLIB_KHR
size_t vk_size_vkxlibsurfacecreateinfokhr(const VkXlibSurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkXlibSurfaceCreateInfoKHR);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
size_t vk_size_vkxcbsurfacecreateinfokhr(const VkXcbSurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkXcbSurfaceCreateInfoKHR);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
size_t vk_size_vkwaylandsurfacecreateinfokhr(const VkWaylandSurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkWaylandSurfaceCreateInfoKHR);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR
size_t vk_size_vkmirsurfacecreateinfokhr(const VkMirSurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMirSurfaceCreateInfoKHR);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
size_t vk_size_vkandroidsurfacecreateinfokhr(const VkAndroidSurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkAndroidSurfaceCreateInfoKHR);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkwin32surfacecreateinfokhr(const VkWin32SurfaceCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkWin32SurfaceCreateInfoKHR);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

size_t vk_size_vkphysicaldevicefeatures2khr(const VkPhysicalDeviceFeatures2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceFeatures2KHR);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceproperties2khr(const VkPhysicalDeviceProperties2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceProperties2KHR);
    }
    return struct_size;
}

size_t vk_size_vkformatproperties2khr(const VkFormatProperties2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkFormatProperties2KHR);
    }
    return struct_size;
}

size_t vk_size_vkimageformatproperties2khr(const VkImageFormatProperties2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageFormatProperties2KHR);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceimageformatinfo2khr(const VkPhysicalDeviceImageFormatInfo2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceImageFormatInfo2KHR);
    }
    return struct_size;
}

size_t vk_size_vkqueuefamilyproperties2khr(const VkQueueFamilyProperties2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkQueueFamilyProperties2KHR);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicememoryproperties2khr(const VkPhysicalDeviceMemoryProperties2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceMemoryProperties2KHR);
    }
    return struct_size;
}

size_t vk_size_vksparseimageformatproperties2khr(const VkSparseImageFormatProperties2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSparseImageFormatProperties2KHR);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicesparseimageformatinfo2khr(const VkPhysicalDeviceSparseImageFormatInfo2KHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceSparseImageFormatInfo2KHR);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicepushdescriptorpropertieskhr(const VkPhysicalDevicePushDescriptorPropertiesKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDevicePushDescriptorPropertiesKHR);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorupdatetemplateentrykhr(const VkDescriptorUpdateTemplateEntryKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorUpdateTemplateEntryKHR);
    }
    return struct_size;
}

size_t vk_size_vkdescriptorupdatetemplatecreateinfokhr(const VkDescriptorUpdateTemplateCreateInfoKHR* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDescriptorUpdateTemplateCreateInfoKHR);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->descriptorUpdateEntryCount; i++) {
            struct_size += vk_size_vkdescriptorupdatetemplateentrykhr(&struct_ptr->pDescriptorUpdateEntries[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkdebugreportcallbackcreateinfoext(const VkDebugReportCallbackCreateInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDebugReportCallbackCreateInfoEXT);
    }
    return struct_size;
}

size_t vk_size_vkpipelinerasterizationstaterasterizationorderamd(const VkPipelineRasterizationStateRasterizationOrderAMD* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineRasterizationStateRasterizationOrderAMD);
    }
    return struct_size;
}

size_t vk_size_vkdebugmarkerobjectnameinfoext(const VkDebugMarkerObjectNameInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDebugMarkerObjectNameInfoEXT);
        struct_size += (struct_ptr->pObjectName != NULL) ? sizeof(char)*(1+strlen(struct_ptr->pObjectName)) : 0;
    }
    return struct_size;
}

size_t vk_size_vkdebugmarkerobjecttaginfoext(const VkDebugMarkerObjectTagInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDebugMarkerObjectTagInfoEXT);
        struct_size += struct_ptr->tagSize * sizeof(void*);
    }
    return struct_size;
}

size_t vk_size_vkdebugmarkermarkerinfoext(const VkDebugMarkerMarkerInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDebugMarkerMarkerInfoEXT);
        struct_size += (struct_ptr->pMarkerName != NULL) ? sizeof(char)*(1+strlen(struct_ptr->pMarkerName)) : 0;
    }
    return struct_size;
}

size_t vk_size_vkdedicatedallocationimagecreateinfonv(const VkDedicatedAllocationImageCreateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDedicatedAllocationImageCreateInfoNV);
    }
    return struct_size;
}

size_t vk_size_vkdedicatedallocationbuffercreateinfonv(const VkDedicatedAllocationBufferCreateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDedicatedAllocationBufferCreateInfoNV);
    }
    return struct_size;
}

size_t vk_size_vkdedicatedallocationmemoryallocateinfonv(const VkDedicatedAllocationMemoryAllocateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDedicatedAllocationMemoryAllocateInfoNV);
    }
    return struct_size;
}

size_t vk_size_vkrenderpassmultiviewcreateinfokhx(const VkRenderPassMultiviewCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkRenderPassMultiviewCreateInfoKHX);
        struct_size += struct_ptr->subpassCount * sizeof(uint32_t);
        struct_size += struct_ptr->dependencyCount * sizeof(int32_t);
        struct_size += struct_ptr->correlationMaskCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicemultiviewfeatureskhx(const VkPhysicalDeviceMultiviewFeaturesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceMultiviewFeaturesKHX);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicemultiviewpropertieskhx(const VkPhysicalDeviceMultiviewPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceMultiviewPropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkexternalimageformatpropertiesnv(const VkExternalImageFormatPropertiesNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalImageFormatPropertiesNV);
    }
    return struct_size;
}

size_t vk_size_vkexternalmemoryimagecreateinfonv(const VkExternalMemoryImageCreateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalMemoryImageCreateInfoNV);
    }
    return struct_size;
}

size_t vk_size_vkexportmemoryallocateinfonv(const VkExportMemoryAllocateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExportMemoryAllocateInfoNV);
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportmemorywin32handleinfonv(const VkImportMemoryWin32HandleInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImportMemoryWin32HandleInfoNV);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkexportmemorywin32handleinfonv(const VkExportMemoryWin32HandleInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExportMemoryWin32HandleInfoNV);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkwin32keyedmutexacquirereleaseinfonv(const VkWin32KeyedMutexAcquireReleaseInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkWin32KeyedMutexAcquireReleaseInfoNV);
        struct_size += struct_ptr->acquireCount * sizeof(VkDeviceMemory);
        struct_size += struct_ptr->acquireCount * sizeof(uint64_t);
        struct_size += struct_ptr->acquireCount * sizeof(uint32_t);
        struct_size += struct_ptr->releaseCount * sizeof(VkDeviceMemory);
        struct_size += struct_ptr->releaseCount * sizeof(uint64_t);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

size_t vk_size_vkmemoryallocateflagsinfokhx(const VkMemoryAllocateFlagsInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryAllocateFlagsInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkbindbuffermemoryinfokhx(const VkBindBufferMemoryInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBindBufferMemoryInfoKHX);
        struct_size += struct_ptr->deviceIndexCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkbindimagememoryinfokhx(const VkBindImageMemoryInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBindImageMemoryInfoKHX);
        struct_size += struct_ptr->deviceIndexCount * sizeof(uint32_t);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->SFRRectCount; i++) {
            struct_size += vk_size_vkrect2d(&struct_ptr->pSFRRects[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkdevicegrouprenderpassbegininfokhx(const VkDeviceGroupRenderPassBeginInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupRenderPassBeginInfoKHX);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->deviceRenderAreaCount; i++) {
            struct_size += vk_size_vkrect2d(&struct_ptr->pDeviceRenderAreas[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkdevicegroupcommandbufferbegininfokhx(const VkDeviceGroupCommandBufferBeginInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupCommandBufferBeginInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkdevicegroupsubmitinfokhx(const VkDeviceGroupSubmitInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupSubmitInfoKHX);
        struct_size += struct_ptr->waitSemaphoreCount * sizeof(uint32_t);
        struct_size += struct_ptr->commandBufferCount * sizeof(uint32_t);
        struct_size += struct_ptr->signalSemaphoreCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkdevicegroupbindsparseinfokhx(const VkDeviceGroupBindSparseInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupBindSparseInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkdevicegrouppresentcapabilitieskhx(const VkDeviceGroupPresentCapabilitiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupPresentCapabilitiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkimageswapchaincreateinfokhx(const VkImageSwapchainCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageSwapchainCreateInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkbindimagememoryswapchaininfokhx(const VkBindImageMemorySwapchainInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkBindImageMemorySwapchainInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkacquirenextimageinfokhx(const VkAcquireNextImageInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkAcquireNextImageInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkdevicegrouppresentinfokhx(const VkDeviceGroupPresentInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupPresentInfoKHX);
        struct_size += struct_ptr->swapchainCount * sizeof(uint32_t);
    }
    return struct_size;
}

size_t vk_size_vkdevicegroupswapchaincreateinfokhx(const VkDeviceGroupSwapchainCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupSwapchainCreateInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkvalidationflagsext(const VkValidationFlagsEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkValidationFlagsEXT);
        struct_size += struct_ptr->disabledValidationCheckCount * sizeof(VkValidationCheckEXT);
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_VI_NN
size_t vk_size_vkvisurfacecreateinfonn(const VkViSurfaceCreateInfoNN* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkViSurfaceCreateInfoNN);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_VI_NN

size_t vk_size_vkphysicaldevicegrouppropertieskhx(const VkPhysicalDeviceGroupPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceGroupPropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkdevicegroupdevicecreateinfokhx(const VkDeviceGroupDeviceCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGroupDeviceCreateInfoKHX);
        struct_size += struct_ptr->physicalDeviceCount * sizeof(VkPhysicalDevice);
    }
    return struct_size;
}

size_t vk_size_vkexternalmemorypropertieskhx(const VkExternalMemoryPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalMemoryPropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceexternalimageformatinfokhx(const VkPhysicalDeviceExternalImageFormatInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceExternalImageFormatInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkexternalimageformatpropertieskhx(const VkExternalImageFormatPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalImageFormatPropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceexternalbufferinfokhx(const VkPhysicalDeviceExternalBufferInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceExternalBufferInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkexternalbufferpropertieskhx(const VkExternalBufferPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalBufferPropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceidpropertieskhx(const VkPhysicalDeviceIDPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceIDPropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceproperties2khx(const VkPhysicalDeviceProperties2KHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceProperties2KHX);
    }
    return struct_size;
}

size_t vk_size_vkimageformatproperties2khx(const VkImageFormatProperties2KHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImageFormatProperties2KHX);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldeviceimageformatinfo2khx(const VkPhysicalDeviceImageFormatInfo2KHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceImageFormatInfo2KHX);
    }
    return struct_size;
}

size_t vk_size_vkexternalmemoryimagecreateinfokhx(const VkExternalMemoryImageCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalMemoryImageCreateInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkexternalmemorybuffercreateinfokhx(const VkExternalMemoryBufferCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalMemoryBufferCreateInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkexportmemoryallocateinfokhx(const VkExportMemoryAllocateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExportMemoryAllocateInfoKHX);
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportmemorywin32handleinfokhx(const VkImportMemoryWin32HandleInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImportMemoryWin32HandleInfoKHX);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkexportmemorywin32handleinfokhx(const VkExportMemoryWin32HandleInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExportMemoryWin32HandleInfoKHX);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkmemorywin32handlepropertieskhx(const VkMemoryWin32HandlePropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryWin32HandlePropertiesKHX);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

size_t vk_size_vkimportmemoryfdinfokhx(const VkImportMemoryFdInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImportMemoryFdInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkmemoryfdpropertieskhx(const VkMemoryFdPropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMemoryFdPropertiesKHX);
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkwin32keyedmutexacquirereleaseinfokhx(const VkWin32KeyedMutexAcquireReleaseInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkWin32KeyedMutexAcquireReleaseInfoKHX);
        struct_size += struct_ptr->acquireCount * sizeof(VkDeviceMemory);
        struct_size += struct_ptr->acquireCount * sizeof(uint64_t);
        struct_size += struct_ptr->acquireCount * sizeof(uint32_t);
        struct_size += struct_ptr->releaseCount * sizeof(VkDeviceMemory);
        struct_size += struct_ptr->releaseCount * sizeof(uint64_t);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

size_t vk_size_vkphysicaldeviceexternalsemaphoreinfokhx(const VkPhysicalDeviceExternalSemaphoreInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceExternalSemaphoreInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkexternalsemaphorepropertieskhx(const VkExternalSemaphorePropertiesKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExternalSemaphorePropertiesKHX);
    }
    return struct_size;
}

size_t vk_size_vkexportsemaphorecreateinfokhx(const VkExportSemaphoreCreateInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExportSemaphoreCreateInfoKHX);
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_WIN32_KHX
size_t vk_size_vkimportsemaphorewin32handleinfokhx(const VkImportSemaphoreWin32HandleInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImportSemaphoreWin32HandleInfoKHX);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHX

#ifdef VK_USE_PLATFORM_WIN32_KHX
size_t vk_size_vkexportsemaphorewin32handleinfokhx(const VkExportSemaphoreWin32HandleInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkExportSemaphoreWin32HandleInfoKHX);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHX

#ifdef VK_USE_PLATFORM_WIN32_KHX
size_t vk_size_vkd3d12fencesubmitinfokhx(const VkD3D12FenceSubmitInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkD3D12FenceSubmitInfoKHX);
        struct_size += struct_ptr->waitSemaphoreValuesCount * sizeof(uint64_t);
        struct_size += struct_ptr->signalSemaphoreValuesCount * sizeof(uint64_t);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_WIN32_KHX

size_t vk_size_vkimportsemaphorefdinfokhx(const VkImportSemaphoreFdInfoKHX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkImportSemaphoreFdInfoKHX);
    }
    return struct_size;
}

size_t vk_size_vkdevicegeneratedcommandsfeaturesnvx(const VkDeviceGeneratedCommandsFeaturesNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGeneratedCommandsFeaturesNVX);
    }
    return struct_size;
}

size_t vk_size_vkdevicegeneratedcommandslimitsnvx(const VkDeviceGeneratedCommandsLimitsNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceGeneratedCommandsLimitsNVX);
    }
    return struct_size;
}

size_t vk_size_vkindirectcommandstokennvx(const VkIndirectCommandsTokenNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkIndirectCommandsTokenNVX);
    }
    return struct_size;
}

size_t vk_size_vkindirectcommandslayouttokennvx(const VkIndirectCommandsLayoutTokenNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkIndirectCommandsLayoutTokenNVX);
    }
    return struct_size;
}

size_t vk_size_vkindirectcommandslayoutcreateinfonvx(const VkIndirectCommandsLayoutCreateInfoNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkIndirectCommandsLayoutCreateInfoNVX);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->tokenCount; i++) {
            struct_size += vk_size_vkindirectcommandslayouttokennvx(&struct_ptr->pTokens[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkcmdprocesscommandsinfonvx(const VkCmdProcessCommandsInfoNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCmdProcessCommandsInfoNVX);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->indirectCommandsTokenCount; i++) {
            struct_size += vk_size_vkindirectcommandstokennvx(&struct_ptr->pIndirectCommandsTokens[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkcmdreservespaceforcommandsinfonvx(const VkCmdReserveSpaceForCommandsInfoNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkCmdReserveSpaceForCommandsInfoNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttablecreateinfonvx(const VkObjectTableCreateInfoNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTableCreateInfoNVX);
        struct_size += struct_ptr->objectCount * sizeof(VkObjectEntryTypeNVX);
        struct_size += struct_ptr->objectCount * sizeof(uint32_t);
        struct_size += struct_ptr->objectCount * sizeof(VkObjectEntryUsageFlagsNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttableentrynvx(const VkObjectTableEntryNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTableEntryNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttablepipelineentrynvx(const VkObjectTablePipelineEntryNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTablePipelineEntryNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttabledescriptorsetentrynvx(const VkObjectTableDescriptorSetEntryNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTableDescriptorSetEntryNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttablevertexbufferentrynvx(const VkObjectTableVertexBufferEntryNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTableVertexBufferEntryNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttableindexbufferentrynvx(const VkObjectTableIndexBufferEntryNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTableIndexBufferEntryNVX);
    }
    return struct_size;
}

size_t vk_size_vkobjecttablepushconstantentrynvx(const VkObjectTablePushConstantEntryNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkObjectTablePushConstantEntryNVX);
    }
    return struct_size;
}

size_t vk_size_vkviewportwscalingnv(const VkViewportWScalingNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkViewportWScalingNV);
    }
    return struct_size;
}

size_t vk_size_vkpipelineviewportwscalingstatecreateinfonv(const VkPipelineViewportWScalingStateCreateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineViewportWScalingStateCreateInfoNV);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->viewportCount; i++) {
            struct_size += vk_size_vkviewportwscalingnv(&struct_ptr->pViewportWScalings[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vksurfacecapabilities2ext(const VkSurfaceCapabilities2EXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSurfaceCapabilities2EXT);
    }
    return struct_size;
}

size_t vk_size_vkdisplaypowerinfoext(const VkDisplayPowerInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayPowerInfoEXT);
    }
    return struct_size;
}

size_t vk_size_vkdeviceeventinfoext(const VkDeviceEventInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDeviceEventInfoEXT);
    }
    return struct_size;
}

size_t vk_size_vkdisplayeventinfoext(const VkDisplayEventInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkDisplayEventInfoEXT);
    }
    return struct_size;
}

size_t vk_size_vkswapchaincountercreateinfoext(const VkSwapchainCounterCreateInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkSwapchainCounterCreateInfoEXT);
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicemultiviewperviewattributespropertiesnvx(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX);
    }
    return struct_size;
}

size_t vk_size_vkviewportswizzlenv(const VkViewportSwizzleNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkViewportSwizzleNV);
    }
    return struct_size;
}

size_t vk_size_vkpipelineviewportswizzlestatecreateinfonv(const VkPipelineViewportSwizzleStateCreateInfoNV* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineViewportSwizzleStateCreateInfoNV);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->viewportCount; i++) {
            struct_size += vk_size_vkviewportswizzlenv(&struct_ptr->pViewportSwizzles[i]);
        }
    }
    return struct_size;
}

size_t vk_size_vkphysicaldevicediscardrectanglepropertiesext(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT);
    }
    return struct_size;
}

size_t vk_size_vkpipelinediscardrectanglestatecreateinfoext(const VkPipelineDiscardRectangleStateCreateInfoEXT* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT);
        uint32_t i = 0;
        for (i = 0; i < struct_ptr->discardRectangleCount; i++) {
            struct_size += vk_size_vkrect2d(&struct_ptr->pDiscardRectangles[i]);
        }
    }
    return struct_size;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
size_t vk_size_vkiossurfacecreateinfomvk(const VkIOSSurfaceCreateInfoMVK* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkIOSSurfaceCreateInfoMVK);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK
size_t vk_size_vkmacossurfacecreateinfomvk(const VkMacOSSurfaceCreateInfoMVK* struct_ptr) {
    size_t struct_size = 0;
    if (struct_ptr) {
        struct_size = sizeof(VkMacOSSurfaceCreateInfoMVK);
    }
    return struct_size;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

size_t get_struct_chain_size(const void* struct_ptr) {
    // Use VkApplicationInfo as struct until actual type is resolved
    VkApplicationInfo* pNext = (VkApplicationInfo*)struct_ptr;
    size_t struct_size = 0;
    while (pNext) {
        switch (pNext->sType) {
            case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
                struct_size += vk_size_vkapplicationinfo((VkApplicationInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
                struct_size += vk_size_vkinstancecreateinfo((VkInstanceCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
                struct_size += vk_size_vkdevicequeuecreateinfo((VkDeviceQueueCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
                struct_size += vk_size_vkdevicecreateinfo((VkDeviceCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
                struct_size += vk_size_vksubmitinfo((VkSubmitInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
                struct_size += vk_size_vkmemoryallocateinfo((VkMemoryAllocateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
                struct_size += vk_size_vkmappedmemoryrange((VkMappedMemoryRange*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
                struct_size += vk_size_vkbindsparseinfo((VkBindSparseInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
                struct_size += vk_size_vkfencecreateinfo((VkFenceCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
                struct_size += vk_size_vksemaphorecreateinfo((VkSemaphoreCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
                struct_size += vk_size_vkeventcreateinfo((VkEventCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
                struct_size += vk_size_vkquerypoolcreateinfo((VkQueryPoolCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
                struct_size += vk_size_vkbuffercreateinfo((VkBufferCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
                struct_size += vk_size_vkbufferviewcreateinfo((VkBufferViewCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
                struct_size += vk_size_vkimagecreateinfo((VkImageCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
                struct_size += vk_size_vkimageviewcreateinfo((VkImageViewCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
                struct_size += vk_size_vkshadermodulecreateinfo((VkShaderModuleCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinecachecreateinfo((VkPipelineCacheCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
                struct_size += vk_size_vkpipelineshaderstagecreateinfo((VkPipelineShaderStageCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinevertexinputstatecreateinfo((VkPipelineVertexInputStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelineinputassemblystatecreateinfo((VkPipelineInputAssemblyStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinetessellationstatecreateinfo((VkPipelineTessellationStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelineviewportstatecreateinfo((VkPipelineViewportStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinerasterizationstatecreateinfo((VkPipelineRasterizationStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinemultisamplestatecreateinfo((VkPipelineMultisampleStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinedepthstencilstatecreateinfo((VkPipelineDepthStencilStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinecolorblendstatecreateinfo((VkPipelineColorBlendStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
                struct_size += vk_size_vkpipelinedynamicstatecreateinfo((VkPipelineDynamicStateCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
                struct_size += vk_size_vkgraphicspipelinecreateinfo((VkGraphicsPipelineCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
                struct_size += vk_size_vkcomputepipelinecreateinfo((VkComputePipelineCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
                struct_size += vk_size_vkpipelinelayoutcreateinfo((VkPipelineLayoutCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
                struct_size += vk_size_vksamplercreateinfo((VkSamplerCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
                struct_size += vk_size_vkdescriptorsetlayoutcreateinfo((VkDescriptorSetLayoutCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
                struct_size += vk_size_vkdescriptorpoolcreateinfo((VkDescriptorPoolCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
                struct_size += vk_size_vkdescriptorsetallocateinfo((VkDescriptorSetAllocateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
                struct_size += vk_size_vkwritedescriptorset((VkWriteDescriptorSet*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
                struct_size += vk_size_vkcopydescriptorset((VkCopyDescriptorSet*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
                struct_size += vk_size_vkframebuffercreateinfo((VkFramebufferCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
                struct_size += vk_size_vkrenderpasscreateinfo((VkRenderPassCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
                struct_size += vk_size_vkcommandpoolcreateinfo((VkCommandPoolCreateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
                struct_size += vk_size_vkcommandbufferallocateinfo((VkCommandBufferAllocateInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
                struct_size += vk_size_vkcommandbufferinheritanceinfo((VkCommandBufferInheritanceInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
                struct_size += vk_size_vkcommandbufferbegininfo((VkCommandBufferBeginInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
                struct_size += vk_size_vkmemorybarrier((VkMemoryBarrier*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
                struct_size += vk_size_vkbuffermemorybarrier((VkBufferMemoryBarrier*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
                struct_size += vk_size_vkimagememorybarrier((VkImageMemoryBarrier*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
                struct_size += vk_size_vkrenderpassbegininfo((VkRenderPassBeginInfo*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
                struct_size += vk_size_vkswapchaincreateinfokhr((VkSwapchainCreateInfoKHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
                struct_size += vk_size_vkpresentinfokhr((VkPresentInfoKHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkdisplaymodecreateinfokhr((VkDisplayModeCreateInfoKHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkdisplaysurfacecreateinfokhr((VkDisplaySurfaceCreateInfoKHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
                struct_size += vk_size_vkdisplaypresentinfokhr((VkDisplayPresentInfoKHR*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_XLIB_KHR
            case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkxlibsurfacecreateinfokhr((VkXlibSurfaceCreateInfoKHR*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
            case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkxcbsurfacecreateinfokhr((VkXcbSurfaceCreateInfoKHR*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
            case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkwaylandsurfacecreateinfokhr((VkWaylandSurfaceCreateInfoKHR*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_MIR_KHR
            case VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkmirsurfacecreateinfokhr((VkMirSurfaceCreateInfoKHR*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_MIR_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkandroidsurfacecreateinfokhr((VkAndroidSurfaceCreateInfoKHR*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkwin32surfacecreateinfokhr((VkWin32SurfaceCreateInfoKHR*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR: {
                struct_size += vk_size_vkphysicaldevicefeatures2khr((VkPhysicalDeviceFeatures2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR: {
                struct_size += vk_size_vkphysicaldeviceproperties2khr((VkPhysicalDeviceProperties2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR: {
                struct_size += vk_size_vkformatproperties2khr((VkFormatProperties2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR: {
                struct_size += vk_size_vkimageformatproperties2khr((VkImageFormatProperties2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR: {
                struct_size += vk_size_vkphysicaldeviceimageformatinfo2khr((VkPhysicalDeviceImageFormatInfo2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR: {
                struct_size += vk_size_vkqueuefamilyproperties2khr((VkQueueFamilyProperties2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR: {
                struct_size += vk_size_vkphysicaldevicememoryproperties2khr((VkPhysicalDeviceMemoryProperties2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR: {
                struct_size += vk_size_vksparseimageformatproperties2khr((VkSparseImageFormatProperties2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR: {
                struct_size += vk_size_vkphysicaldevicesparseimageformatinfo2khr((VkPhysicalDeviceSparseImageFormatInfo2KHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
                struct_size += vk_size_vkphysicaldevicepushdescriptorpropertieskhr((VkPhysicalDevicePushDescriptorPropertiesKHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR: {
                struct_size += vk_size_vkdescriptorupdatetemplatecreateinfokhr((VkDescriptorUpdateTemplateCreateInfoKHR*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
                struct_size += vk_size_vkdebugreportcallbackcreateinfoext((VkDebugReportCallbackCreateInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
                struct_size += vk_size_vkpipelinerasterizationstaterasterizationorderamd((VkPipelineRasterizationStateRasterizationOrderAMD*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
                struct_size += vk_size_vkdebugmarkerobjectnameinfoext((VkDebugMarkerObjectNameInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
                struct_size += vk_size_vkdebugmarkerobjecttaginfoext((VkDebugMarkerObjectTagInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
                struct_size += vk_size_vkdebugmarkermarkerinfoext((VkDebugMarkerMarkerInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
                struct_size += vk_size_vkdedicatedallocationimagecreateinfonv((VkDedicatedAllocationImageCreateInfoNV*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
                struct_size += vk_size_vkdedicatedallocationbuffercreateinfonv((VkDedicatedAllocationBufferCreateInfoNV*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
                struct_size += vk_size_vkdedicatedallocationmemoryallocateinfonv((VkDedicatedAllocationMemoryAllocateInfoNV*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHX: {
                struct_size += vk_size_vkrenderpassmultiviewcreateinfokhx((VkRenderPassMultiviewCreateInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHX: {
                struct_size += vk_size_vkphysicaldevicemultiviewfeatureskhx((VkPhysicalDeviceMultiviewFeaturesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHX: {
                struct_size += vk_size_vkphysicaldevicemultiviewpropertieskhx((VkPhysicalDeviceMultiviewPropertiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
                struct_size += vk_size_vkexternalmemoryimagecreateinfonv((VkExternalMemoryImageCreateInfoNV*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
                struct_size += vk_size_vkexportmemoryallocateinfonv((VkExportMemoryAllocateInfoNV*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
                struct_size += vk_size_vkimportmemorywin32handleinfonv((VkImportMemoryWin32HandleInfoNV*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
                struct_size += vk_size_vkexportmemorywin32handleinfonv((VkExportMemoryWin32HandleInfoNV*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
                struct_size += vk_size_vkwin32keyedmutexacquirereleaseinfonv((VkWin32KeyedMutexAcquireReleaseInfoNV*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHX: {
                struct_size += vk_size_vkmemoryallocateflagsinfokhx((VkMemoryAllocateFlagsInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX: {
                struct_size += vk_size_vkbindbuffermemoryinfokhx((VkBindBufferMemoryInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX: {
                struct_size += vk_size_vkbindimagememoryinfokhx((VkBindImageMemoryInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHX: {
                struct_size += vk_size_vkdevicegrouprenderpassbegininfokhx((VkDeviceGroupRenderPassBeginInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHX: {
                struct_size += vk_size_vkdevicegroupcommandbufferbegininfokhx((VkDeviceGroupCommandBufferBeginInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHX: {
                struct_size += vk_size_vkdevicegroupsubmitinfokhx((VkDeviceGroupSubmitInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHX: {
                struct_size += vk_size_vkdevicegroupbindsparseinfokhx((VkDeviceGroupBindSparseInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX: {
                struct_size += vk_size_vkdevicegrouppresentcapabilitieskhx((VkDeviceGroupPresentCapabilitiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHX: {
                struct_size += vk_size_vkimageswapchaincreateinfokhx((VkImageSwapchainCreateInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHX: {
                struct_size += vk_size_vkbindimagememoryswapchaininfokhx((VkBindImageMemorySwapchainInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX: {
                struct_size += vk_size_vkacquirenextimageinfokhx((VkAcquireNextImageInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHX: {
                struct_size += vk_size_vkdevicegrouppresentinfokhx((VkDeviceGroupPresentInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX: {
                struct_size += vk_size_vkdevicegroupswapchaincreateinfokhx((VkDeviceGroupSwapchainCreateInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
                struct_size += vk_size_vkvalidationflagsext((VkValidationFlagsEXT*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_VI_NN
            case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
                struct_size += vk_size_vkvisurfacecreateinfonn((VkViSurfaceCreateInfoNN*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_VI_NN
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX: {
                struct_size += vk_size_vkphysicaldevicegrouppropertieskhx((VkPhysicalDeviceGroupPropertiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHX: {
                struct_size += vk_size_vkdevicegroupdevicecreateinfokhx((VkDeviceGroupDeviceCreateInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHX: {
                struct_size += vk_size_vkphysicaldeviceexternalimageformatinfokhx((VkPhysicalDeviceExternalImageFormatInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHX: {
                struct_size += vk_size_vkexternalimageformatpropertieskhx((VkExternalImageFormatPropertiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHX: {
                struct_size += vk_size_vkphysicaldeviceexternalbufferinfokhx((VkPhysicalDeviceExternalBufferInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHX: {
                struct_size += vk_size_vkexternalbufferpropertieskhx((VkExternalBufferPropertiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHX: {
                struct_size += vk_size_vkphysicaldeviceidpropertieskhx((VkPhysicalDeviceIDPropertiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHX: {
                struct_size += vk_size_vkphysicaldeviceproperties2khx((VkPhysicalDeviceProperties2KHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHX: {
                struct_size += vk_size_vkimageformatproperties2khx((VkImageFormatProperties2KHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHX: {
                struct_size += vk_size_vkphysicaldeviceimageformatinfo2khx((VkPhysicalDeviceImageFormatInfo2KHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHX: {
                struct_size += vk_size_vkexternalmemoryimagecreateinfokhx((VkExternalMemoryImageCreateInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHX: {
                struct_size += vk_size_vkexternalmemorybuffercreateinfokhx((VkExternalMemoryBufferCreateInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHX: {
                struct_size += vk_size_vkexportmemoryallocateinfokhx((VkExportMemoryAllocateInfoKHX*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHX: {
                struct_size += vk_size_vkimportmemorywin32handleinfokhx((VkImportMemoryWin32HandleInfoKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHX: {
                struct_size += vk_size_vkexportmemorywin32handleinfokhx((VkExportMemoryWin32HandleInfoKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHX: {
                struct_size += vk_size_vkmemorywin32handlepropertieskhx((VkMemoryWin32HandlePropertiesKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHX: {
                struct_size += vk_size_vkimportmemoryfdinfokhx((VkImportMemoryFdInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHX: {
                struct_size += vk_size_vkmemoryfdpropertieskhx((VkMemoryFdPropertiesKHX*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHX: {
                struct_size += vk_size_vkwin32keyedmutexacquirereleaseinfokhx((VkWin32KeyedMutexAcquireReleaseInfoKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHX: {
                struct_size += vk_size_vkphysicaldeviceexternalsemaphoreinfokhx((VkPhysicalDeviceExternalSemaphoreInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHX: {
                struct_size += vk_size_vkexternalsemaphorepropertieskhx((VkExternalSemaphorePropertiesKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHX: {
                struct_size += vk_size_vkexportsemaphorecreateinfokhx((VkExportSemaphoreCreateInfoKHX*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHX
            case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHX: {
                struct_size += vk_size_vkimportsemaphorewin32handleinfokhx((VkImportSemaphoreWin32HandleInfoKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHX
#ifdef VK_USE_PLATFORM_WIN32_KHX
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHX: {
                struct_size += vk_size_vkexportsemaphorewin32handleinfokhx((VkExportSemaphoreWin32HandleInfoKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHX
#ifdef VK_USE_PLATFORM_WIN32_KHX
            case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHX: {
                struct_size += vk_size_vkd3d12fencesubmitinfokhx((VkD3D12FenceSubmitInfoKHX*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_WIN32_KHX
            case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHX: {
                struct_size += vk_size_vkimportsemaphorefdinfokhx((VkImportSemaphoreFdInfoKHX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX: {
                struct_size += vk_size_vkdevicegeneratedcommandsfeaturesnvx((VkDeviceGeneratedCommandsFeaturesNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX: {
                struct_size += vk_size_vkdevicegeneratedcommandslimitsnvx((VkDeviceGeneratedCommandsLimitsNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX: {
                struct_size += vk_size_vkindirectcommandslayoutcreateinfonvx((VkIndirectCommandsLayoutCreateInfoNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX: {
                struct_size += vk_size_vkcmdprocesscommandsinfonvx((VkCmdProcessCommandsInfoNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX: {
                struct_size += vk_size_vkcmdreservespaceforcommandsinfonvx((VkCmdReserveSpaceForCommandsInfoNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX: {
                struct_size += vk_size_vkobjecttablecreateinfonvx((VkObjectTableCreateInfoNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
                struct_size += vk_size_vkpipelineviewportwscalingstatecreateinfonv((VkPipelineViewportWScalingStateCreateInfoNV*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT: {
                struct_size += vk_size_vksurfacecapabilities2ext((VkSurfaceCapabilities2EXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
                struct_size += vk_size_vkdisplaypowerinfoext((VkDisplayPowerInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
                struct_size += vk_size_vkdeviceeventinfoext((VkDeviceEventInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
                struct_size += vk_size_vkdisplayeventinfoext((VkDisplayEventInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
                struct_size += vk_size_vkswapchaincountercreateinfoext((VkSwapchainCounterCreateInfoEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
                struct_size += vk_size_vkphysicaldevicemultiviewperviewattributespropertiesnvx((VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
                struct_size += vk_size_vkpipelineviewportswizzlestatecreateinfonv((VkPipelineViewportSwizzleStateCreateInfoNV*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
                struct_size += vk_size_vkphysicaldevicediscardrectanglepropertiesext((VkPhysicalDeviceDiscardRectanglePropertiesEXT*)pNext);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
                struct_size += vk_size_vkpipelinediscardrectanglestatecreateinfoext((VkPipelineDiscardRectangleStateCreateInfoEXT*)pNext);
                break;
            }
#ifdef VK_USE_PLATFORM_IOS_MVK
            case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK: {
                struct_size += vk_size_vkiossurfacecreateinfomvk((VkIOSSurfaceCreateInfoMVK*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
            case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK: {
                struct_size += vk_size_vkmacossurfacecreateinfomvk((VkMacOSSurfaceCreateInfoMVK*)pNext);
                break;
            }
#endif // VK_USE_PLATFORM_MACOS_MVK
            default:
                assert(0);
                struct_size += 0;
        }
        pNext = (VkApplicationInfo*)pNext->pNext;
    }
    return struct_size;
}
