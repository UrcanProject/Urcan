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

#ifndef PARAMETER_VALIDATION_H
#define PARAMETER_VALIDATION_H 1

#include <string>

#include "vulkan/vulkan.h"
#include "vk_layer_extension_utils.h"
#include "parameter_validation_utils.h"

#ifndef UNUSED_PARAMETER
#define UNUSED_PARAMETER(x) (void)(x)
#endif // UNUSED_PARAMETER

namespace parameter_validation {

const uint32_t GeneratedHeaderVersion = 42;

const VkAccessFlags AllVkAccessFlagBits = VK_ACCESS_INDIRECT_COMMAND_READ_BIT|VK_ACCESS_INDEX_READ_BIT|VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT|VK_ACCESS_UNIFORM_READ_BIT|VK_ACCESS_INPUT_ATTACHMENT_READ_BIT|VK_ACCESS_SHADER_READ_BIT|VK_ACCESS_SHADER_WRITE_BIT|VK_ACCESS_COLOR_ATTACHMENT_READ_BIT|VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT|VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT|VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT|VK_ACCESS_TRANSFER_READ_BIT|VK_ACCESS_TRANSFER_WRITE_BIT|VK_ACCESS_HOST_READ_BIT|VK_ACCESS_HOST_WRITE_BIT|VK_ACCESS_MEMORY_READ_BIT|VK_ACCESS_MEMORY_WRITE_BIT|VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX|VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX;
const VkAttachmentDescriptionFlags AllVkAttachmentDescriptionFlagBits = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT;
const VkBufferCreateFlags AllVkBufferCreateFlagBits = VK_BUFFER_CREATE_SPARSE_BINDING_BIT|VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT|VK_BUFFER_CREATE_SPARSE_ALIASED_BIT;
const VkBufferUsageFlags AllVkBufferUsageFlagBits = VK_BUFFER_USAGE_TRANSFER_SRC_BIT|VK_BUFFER_USAGE_TRANSFER_DST_BIT|VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT|VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT|VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT|VK_BUFFER_USAGE_STORAGE_BUFFER_BIT|VK_BUFFER_USAGE_INDEX_BUFFER_BIT|VK_BUFFER_USAGE_VERTEX_BUFFER_BIT|VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT;
const VkColorComponentFlags AllVkColorComponentFlagBits = VK_COLOR_COMPONENT_R_BIT|VK_COLOR_COMPONENT_G_BIT|VK_COLOR_COMPONENT_B_BIT|VK_COLOR_COMPONENT_A_BIT;
const VkCommandBufferResetFlags AllVkCommandBufferResetFlagBits = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT;
const VkCommandBufferUsageFlags AllVkCommandBufferUsageFlagBits = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT|VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT|VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
const VkCommandPoolCreateFlags AllVkCommandPoolCreateFlagBits = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT|VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
const VkCommandPoolResetFlags AllVkCommandPoolResetFlagBits = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT;
const VkCullModeFlags AllVkCullModeFlagBits = VK_CULL_MODE_NONE|VK_CULL_MODE_FRONT_BIT|VK_CULL_MODE_BACK_BIT|VK_CULL_MODE_FRONT_AND_BACK;
const VkDependencyFlags AllVkDependencyFlagBits = VK_DEPENDENCY_BY_REGION_BIT|VK_DEPENDENCY_VIEW_LOCAL_BIT_KHX|VK_DEPENDENCY_DEVICE_GROUP_BIT_KHX;
const VkDescriptorPoolCreateFlags AllVkDescriptorPoolCreateFlagBits = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
const VkDescriptorSetLayoutCreateFlags AllVkDescriptorSetLayoutCreateFlagBits = VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR;
const VkFenceCreateFlags AllVkFenceCreateFlagBits = VK_FENCE_CREATE_SIGNALED_BIT;
const VkFormatFeatureFlags AllVkFormatFeatureFlagBits = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_BLIT_SRC_BIT|VK_FORMAT_FEATURE_BLIT_DST_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG|VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR|VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR;
const VkImageAspectFlags AllVkImageAspectFlagBits = VK_IMAGE_ASPECT_COLOR_BIT|VK_IMAGE_ASPECT_DEPTH_BIT|VK_IMAGE_ASPECT_STENCIL_BIT|VK_IMAGE_ASPECT_METADATA_BIT;
const VkImageCreateFlags AllVkImageCreateFlagBits = VK_IMAGE_CREATE_SPARSE_BINDING_BIT|VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT|VK_IMAGE_CREATE_SPARSE_ALIASED_BIT|VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT|VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT|VK_IMAGE_CREATE_BIND_SFR_BIT_KHX|VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;
const VkImageUsageFlags AllVkImageUsageFlagBits = VK_IMAGE_USAGE_TRANSFER_SRC_BIT|VK_IMAGE_USAGE_TRANSFER_DST_BIT|VK_IMAGE_USAGE_SAMPLED_BIT|VK_IMAGE_USAGE_STORAGE_BIT|VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT|VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT|VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
const VkMemoryHeapFlags AllVkMemoryHeapFlagBits = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT|VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHX;
const VkMemoryPropertyFlags AllVkMemoryPropertyFlagBits = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT|VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT|VK_MEMORY_PROPERTY_HOST_CACHED_BIT|VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT;
const VkPipelineCreateFlags AllVkPipelineCreateFlagBits = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT|VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT|VK_PIPELINE_CREATE_DERIVATIVE_BIT|VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHX|VK_PIPELINE_CREATE_DISPATCH_BASE_KHX;
const VkPipelineStageFlags AllVkPipelineStageFlagBits = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT|VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT|VK_PIPELINE_STAGE_VERTEX_INPUT_BIT|VK_PIPELINE_STAGE_VERTEX_SHADER_BIT|VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT|VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT|VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT|VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT|VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT|VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT|VK_PIPELINE_STAGE_TRANSFER_BIT|VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT|VK_PIPELINE_STAGE_HOST_BIT|VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT|VK_PIPELINE_STAGE_ALL_COMMANDS_BIT|VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX;
const VkQueryControlFlags AllVkQueryControlFlagBits = VK_QUERY_CONTROL_PRECISE_BIT;
const VkQueryPipelineStatisticFlags AllVkQueryPipelineStatisticFlagBits = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT|VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT|VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT;
const VkQueryResultFlags AllVkQueryResultFlagBits = VK_QUERY_RESULT_64_BIT|VK_QUERY_RESULT_WAIT_BIT|VK_QUERY_RESULT_WITH_AVAILABILITY_BIT|VK_QUERY_RESULT_PARTIAL_BIT;
const VkQueueFlags AllVkQueueFlagBits = VK_QUEUE_GRAPHICS_BIT|VK_QUEUE_COMPUTE_BIT|VK_QUEUE_TRANSFER_BIT|VK_QUEUE_SPARSE_BINDING_BIT;
const VkSampleCountFlags AllVkSampleCountFlagBits = VK_SAMPLE_COUNT_1_BIT|VK_SAMPLE_COUNT_2_BIT|VK_SAMPLE_COUNT_4_BIT|VK_SAMPLE_COUNT_8_BIT|VK_SAMPLE_COUNT_16_BIT|VK_SAMPLE_COUNT_32_BIT|VK_SAMPLE_COUNT_64_BIT;
const VkShaderStageFlags AllVkShaderStageFlagBits = VK_SHADER_STAGE_VERTEX_BIT|VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT|VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT|VK_SHADER_STAGE_GEOMETRY_BIT|VK_SHADER_STAGE_FRAGMENT_BIT|VK_SHADER_STAGE_COMPUTE_BIT|VK_SHADER_STAGE_ALL_GRAPHICS|VK_SHADER_STAGE_ALL;
const VkSparseImageFormatFlags AllVkSparseImageFormatFlagBits = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT|VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT|VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
const VkSparseMemoryBindFlags AllVkSparseMemoryBindFlagBits = VK_SPARSE_MEMORY_BIND_METADATA_BIT;
const VkStencilFaceFlags AllVkStencilFaceFlagBits = VK_STENCIL_FACE_FRONT_BIT|VK_STENCIL_FACE_BACK_BIT|VK_STENCIL_FRONT_AND_BACK;
const VkSubpassDescriptionFlags AllVkSubpassDescriptionFlagBits = VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX|VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX;

static bool parameter_validation_vkCreateInstance(
    debug_report_data*                          report_data,
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateInstance", "pCreateInfo", "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_reserved_flags(report_data, "vkCreateInstance", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_struct_type(report_data, "vkCreateInstance", "pCreateInfo->pApplicationInfo", "VK_STRUCTURE_TYPE_APPLICATION_INFO", pCreateInfo->pApplicationInfo, VK_STRUCTURE_TYPE_APPLICATION_INFO, false);

        if (pCreateInfo->pApplicationInfo != NULL)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCreateInstance", "pCreateInfo->pApplicationInfo->pNext", NULL, pCreateInfo->pApplicationInfo->pNext, 0, NULL, GeneratedHeaderVersion);
        }

        skipCall |= validate_string_array(report_data, "vkCreateInstance", "pCreateInfo->enabledLayerCount", "pCreateInfo->ppEnabledLayerNames", pCreateInfo->enabledLayerCount, pCreateInfo->ppEnabledLayerNames, false, true);

        skipCall |= validate_string_array(report_data, "vkCreateInstance", "pCreateInfo->enabledExtensionCount", "pCreateInfo->ppEnabledExtensionNames", pCreateInfo->enabledExtensionCount, pCreateInfo->ppEnabledExtensionNames, false, true);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateInstance", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateInstance", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateInstance", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateInstance", "pInstance", pInstance);

    return skipCall;
}

static bool parameter_validation_vkDestroyInstance(
    debug_report_data*                          report_data,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyInstance", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyInstance", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyInstance", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkEnumeratePhysicalDevices(
    debug_report_data*                          report_data,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices)
{
    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkEnumeratePhysicalDevices", "pPhysicalDeviceCount", "pPhysicalDevices", pPhysicalDeviceCount, pPhysicalDevices, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceFeatures(
    debug_report_data*                          report_data,
    VkPhysicalDeviceFeatures*                   pFeatures)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceFeatures", "pFeatures", pFeatures);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceFormatProperties(
    debug_report_data*                          report_data,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceFormatProperties", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format);

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceFormatProperties", "pFormatProperties", pFormatProperties);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceImageFormatProperties(
    debug_report_data*                          report_data,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format);

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties", "type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, type);

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties", "tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, tiling);

    skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceImageFormatProperties", "usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, usage, true);

    skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceImageFormatProperties", "flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, flags, false);

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceImageFormatProperties", "pImageFormatProperties", pImageFormatProperties);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceProperties(
    debug_report_data*                          report_data,
    VkPhysicalDeviceProperties*                 pProperties)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceProperties", "pProperties", pProperties);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceQueueFamilyProperties(
    debug_report_data*                          report_data,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkGetPhysicalDeviceQueueFamilyProperties", "pQueueFamilyPropertyCount", "pQueueFamilyProperties", pQueueFamilyPropertyCount, pQueueFamilyProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceMemoryProperties(
    debug_report_data*                          report_data,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceMemoryProperties", "pMemoryProperties", pMemoryProperties);

    return skipCall;
}

static bool parameter_validation_vkCreateDevice(
    debug_report_data*                          report_data,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateDevice", "pCreateInfo", "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_reserved_flags(report_data, "vkCreateDevice", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_struct_type_array(report_data, "vkCreateDevice", "pCreateInfo->queueCreateInfoCount", "pCreateInfo->pQueueCreateInfos", "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO", pCreateInfo->queueCreateInfoCount, pCreateInfo->pQueueCreateInfos, VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO, true, true);

        if (pCreateInfo->pQueueCreateInfos != NULL)
        {
            for (uint32_t queueCreateInfoIndex = 0; queueCreateInfoIndex < pCreateInfo->queueCreateInfoCount; ++queueCreateInfoIndex)
            {
                skipCall |= validate_struct_pnext(report_data, "vkCreateDevice", ParameterName("pCreateInfo->pQueueCreateInfos[%i].pNext", ParameterName::IndexVector{ queueCreateInfoIndex }), NULL, pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion);

                skipCall |= validate_reserved_flags(report_data, "vkCreateDevice", ParameterName("pCreateInfo->pQueueCreateInfos[%i].flags", ParameterName::IndexVector{ queueCreateInfoIndex }), pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].flags);

                skipCall |= validate_array(report_data, "vkCreateDevice", ParameterName("pCreateInfo->pQueueCreateInfos[%i].queueCount", ParameterName::IndexVector{ queueCreateInfoIndex }), ParameterName("pCreateInfo->pQueueCreateInfos[%i].pQueuePriorities", ParameterName::IndexVector{ queueCreateInfoIndex }), pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].queueCount, pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].pQueuePriorities, true, true);
            }
        }

        skipCall |= validate_string_array(report_data, "vkCreateDevice", "pCreateInfo->enabledLayerCount", "pCreateInfo->ppEnabledLayerNames", pCreateInfo->enabledLayerCount, pCreateInfo->ppEnabledLayerNames, false, true);

        skipCall |= validate_string_array(report_data, "vkCreateDevice", "pCreateInfo->enabledExtensionCount", "pCreateInfo->ppEnabledExtensionNames", pCreateInfo->enabledExtensionCount, pCreateInfo->ppEnabledExtensionNames, false, true);

        if (pCreateInfo->pEnabledFeatures != NULL)
        {
            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->robustBufferAccess", pCreateInfo->pEnabledFeatures->robustBufferAccess);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->fullDrawIndexUint32", pCreateInfo->pEnabledFeatures->fullDrawIndexUint32);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->imageCubeArray", pCreateInfo->pEnabledFeatures->imageCubeArray);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->independentBlend", pCreateInfo->pEnabledFeatures->independentBlend);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->geometryShader", pCreateInfo->pEnabledFeatures->geometryShader);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->tessellationShader", pCreateInfo->pEnabledFeatures->tessellationShader);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sampleRateShading", pCreateInfo->pEnabledFeatures->sampleRateShading);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->dualSrcBlend", pCreateInfo->pEnabledFeatures->dualSrcBlend);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->logicOp", pCreateInfo->pEnabledFeatures->logicOp);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->multiDrawIndirect", pCreateInfo->pEnabledFeatures->multiDrawIndirect);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->drawIndirectFirstInstance", pCreateInfo->pEnabledFeatures->drawIndirectFirstInstance);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->depthClamp", pCreateInfo->pEnabledFeatures->depthClamp);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->depthBiasClamp", pCreateInfo->pEnabledFeatures->depthBiasClamp);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->fillModeNonSolid", pCreateInfo->pEnabledFeatures->fillModeNonSolid);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->depthBounds", pCreateInfo->pEnabledFeatures->depthBounds);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->wideLines", pCreateInfo->pEnabledFeatures->wideLines);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->largePoints", pCreateInfo->pEnabledFeatures->largePoints);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->alphaToOne", pCreateInfo->pEnabledFeatures->alphaToOne);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->multiViewport", pCreateInfo->pEnabledFeatures->multiViewport);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->samplerAnisotropy", pCreateInfo->pEnabledFeatures->samplerAnisotropy);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->textureCompressionETC2", pCreateInfo->pEnabledFeatures->textureCompressionETC2);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->textureCompressionASTC_LDR", pCreateInfo->pEnabledFeatures->textureCompressionASTC_LDR);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->textureCompressionBC", pCreateInfo->pEnabledFeatures->textureCompressionBC);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->occlusionQueryPrecise", pCreateInfo->pEnabledFeatures->occlusionQueryPrecise);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->pipelineStatisticsQuery", pCreateInfo->pEnabledFeatures->pipelineStatisticsQuery);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->vertexPipelineStoresAndAtomics", pCreateInfo->pEnabledFeatures->vertexPipelineStoresAndAtomics);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->fragmentStoresAndAtomics", pCreateInfo->pEnabledFeatures->fragmentStoresAndAtomics);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderTessellationAndGeometryPointSize", pCreateInfo->pEnabledFeatures->shaderTessellationAndGeometryPointSize);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderImageGatherExtended", pCreateInfo->pEnabledFeatures->shaderImageGatherExtended);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageExtendedFormats", pCreateInfo->pEnabledFeatures->shaderStorageImageExtendedFormats);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageMultisample", pCreateInfo->pEnabledFeatures->shaderStorageImageMultisample);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageReadWithoutFormat", pCreateInfo->pEnabledFeatures->shaderStorageImageReadWithoutFormat);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageWriteWithoutFormat", pCreateInfo->pEnabledFeatures->shaderStorageImageWriteWithoutFormat);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderUniformBufferArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderUniformBufferArrayDynamicIndexing);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderSampledImageArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderSampledImageArrayDynamicIndexing);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageBufferArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderStorageBufferArrayDynamicIndexing);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderStorageImageArrayDynamicIndexing);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderClipDistance", pCreateInfo->pEnabledFeatures->shaderClipDistance);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderCullDistance", pCreateInfo->pEnabledFeatures->shaderCullDistance);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderFloat64", pCreateInfo->pEnabledFeatures->shaderFloat64);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderInt64", pCreateInfo->pEnabledFeatures->shaderInt64);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderInt16", pCreateInfo->pEnabledFeatures->shaderInt16);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderResourceResidency", pCreateInfo->pEnabledFeatures->shaderResourceResidency);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderResourceMinLod", pCreateInfo->pEnabledFeatures->shaderResourceMinLod);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseBinding", pCreateInfo->pEnabledFeatures->sparseBinding);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyBuffer", pCreateInfo->pEnabledFeatures->sparseResidencyBuffer);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyImage2D", pCreateInfo->pEnabledFeatures->sparseResidencyImage2D);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyImage3D", pCreateInfo->pEnabledFeatures->sparseResidencyImage3D);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency2Samples", pCreateInfo->pEnabledFeatures->sparseResidency2Samples);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency4Samples", pCreateInfo->pEnabledFeatures->sparseResidency4Samples);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency8Samples", pCreateInfo->pEnabledFeatures->sparseResidency8Samples);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency16Samples", pCreateInfo->pEnabledFeatures->sparseResidency16Samples);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyAliased", pCreateInfo->pEnabledFeatures->sparseResidencyAliased);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->variableMultisampleRate", pCreateInfo->pEnabledFeatures->variableMultisampleRate);

            skipCall |= validate_bool32(report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->inheritedQueries", pCreateInfo->pEnabledFeatures->inheritedQueries);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateDevice", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateDevice", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateDevice", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateDevice", "pDevice", pDevice);

    return skipCall;
}

static bool parameter_validation_vkDestroyDevice(
    debug_report_data*                          report_data,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyDevice", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyDevice", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyDevice", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkEnumerateInstanceExtensionProperties(
    debug_report_data*                          report_data,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkEnumerateInstanceExtensionProperties", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkEnumerateDeviceExtensionProperties(
    debug_report_data*                          report_data,
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties)
{
    UNUSED_PARAMETER(pLayerName);

    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkEnumerateDeviceExtensionProperties", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetDeviceQueue(
    debug_report_data*                          report_data,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue)
{
    UNUSED_PARAMETER(queueFamilyIndex);
    UNUSED_PARAMETER(queueIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetDeviceQueue", "pQueue", pQueue);

    return skipCall;
}

static bool parameter_validation_vkQueueSubmit(
    debug_report_data*                          report_data,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence)
{
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkQueueSubmit", "submitCount", "pSubmits", "VK_STRUCTURE_TYPE_SUBMIT_INFO", submitCount, pSubmits, VK_STRUCTURE_TYPE_SUBMIT_INFO, false, true);

    if (pSubmits != NULL)
    {
        for (uint32_t submitIndex = 0; submitIndex < submitCount; ++submitIndex)
        {
            const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV, VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHX, VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHX, VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHX};

            skipCall |= validate_struct_pnext(report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].pNext", ParameterName::IndexVector{ submitIndex }), "VkWin32KeyedMutexAcquireReleaseInfoNV, VkWin32KeyedMutexAcquireReleaseInfoKHX, VkD3D12FenceSubmitInfoKHX, VkDeviceGroupSubmitInfoKHX", pSubmits[submitIndex].pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

            skipCall |= validate_array(report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].waitSemaphoreCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pWaitSemaphores", ParameterName::IndexVector{ submitIndex }), pSubmits[submitIndex].waitSemaphoreCount, pSubmits[submitIndex].pWaitSemaphores, false, true);

            skipCall |= validate_flags_array(report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].waitSemaphoreCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pWaitDstStageMask", ParameterName::IndexVector{ submitIndex }), "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pSubmits[submitIndex].waitSemaphoreCount, pSubmits[submitIndex].pWaitDstStageMask, false, true);

            skipCall |= validate_array(report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].commandBufferCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pCommandBuffers", ParameterName::IndexVector{ submitIndex }), pSubmits[submitIndex].commandBufferCount, pSubmits[submitIndex].pCommandBuffers, false, true);

            skipCall |= validate_array(report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].signalSemaphoreCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pSignalSemaphores", ParameterName::IndexVector{ submitIndex }), pSubmits[submitIndex].signalSemaphoreCount, pSubmits[submitIndex].pSignalSemaphores, false, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkAllocateMemory(
    debug_report_data*                          report_data,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkAllocateMemory", "pAllocateInfo", "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO", pAllocateInfo, VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, true);

    if (pAllocateInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV, VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkAllocateMemory", "pAllocateInfo->pNext", "VkDedicatedAllocationMemoryAllocateInfoNV, VkMemoryAllocateFlagsInfoKHX", pAllocateInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkAllocateMemory", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkAllocateMemory", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkAllocateMemory", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkAllocateMemory", "pMemory", pMemory);

    return skipCall;
}

static bool parameter_validation_vkFreeMemory(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(memory);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkFreeMemory", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkFreeMemory", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkFreeMemory", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkMapMemory(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(size);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkMapMemory", "memory", memory);

    skipCall |= validate_reserved_flags(report_data, "vkMapMemory", "flags", flags);

    skipCall |= validate_required_pointer(report_data, "vkMapMemory", "ppData", ppData);

    return skipCall;
}

static bool parameter_validation_vkUnmapMemory(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkUnmapMemory", "memory", memory);

    return skipCall;
}

static bool parameter_validation_vkFlushMappedMemoryRanges(
    debug_report_data*                          report_data,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkFlushMappedMemoryRanges", "memoryRangeCount", "pMemoryRanges", "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE", memoryRangeCount, pMemoryRanges, VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE, true, true);

    if (pMemoryRanges != NULL)
    {
        for (uint32_t memoryRangeIndex = 0; memoryRangeIndex < memoryRangeCount; ++memoryRangeIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkFlushMappedMemoryRanges", ParameterName("pMemoryRanges[%i].pNext", ParameterName::IndexVector{ memoryRangeIndex }), NULL, pMemoryRanges[memoryRangeIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_required_handle(report_data, "vkFlushMappedMemoryRanges", ParameterName("pMemoryRanges[%i].memory", ParameterName::IndexVector{ memoryRangeIndex }), pMemoryRanges[memoryRangeIndex].memory);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkInvalidateMappedMemoryRanges(
    debug_report_data*                          report_data,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkInvalidateMappedMemoryRanges", "memoryRangeCount", "pMemoryRanges", "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE", memoryRangeCount, pMemoryRanges, VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE, true, true);

    if (pMemoryRanges != NULL)
    {
        for (uint32_t memoryRangeIndex = 0; memoryRangeIndex < memoryRangeCount; ++memoryRangeIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkInvalidateMappedMemoryRanges", ParameterName("pMemoryRanges[%i].pNext", ParameterName::IndexVector{ memoryRangeIndex }), NULL, pMemoryRanges[memoryRangeIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_required_handle(report_data, "vkInvalidateMappedMemoryRanges", ParameterName("pMemoryRanges[%i].memory", ParameterName::IndexVector{ memoryRangeIndex }), pMemoryRanges[memoryRangeIndex].memory);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkGetDeviceMemoryCommitment(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetDeviceMemoryCommitment", "memory", memory);

    skipCall |= validate_required_pointer(report_data, "vkGetDeviceMemoryCommitment", "pCommittedMemoryInBytes", pCommittedMemoryInBytes);

    return skipCall;
}

static bool parameter_validation_vkBindBufferMemory(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    UNUSED_PARAMETER(memoryOffset);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkBindBufferMemory", "buffer", buffer);

    skipCall |= validate_required_handle(report_data, "vkBindBufferMemory", "memory", memory);

    return skipCall;
}

static bool parameter_validation_vkBindImageMemory(
    debug_report_data*                          report_data,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    UNUSED_PARAMETER(memoryOffset);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkBindImageMemory", "image", image);

    skipCall |= validate_required_handle(report_data, "vkBindImageMemory", "memory", memory);

    return skipCall;
}

static bool parameter_validation_vkGetBufferMemoryRequirements(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetBufferMemoryRequirements", "buffer", buffer);

    skipCall |= validate_required_pointer(report_data, "vkGetBufferMemoryRequirements", "pMemoryRequirements", pMemoryRequirements);

    return skipCall;
}

static bool parameter_validation_vkGetImageMemoryRequirements(
    debug_report_data*                          report_data,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetImageMemoryRequirements", "image", image);

    skipCall |= validate_required_pointer(report_data, "vkGetImageMemoryRequirements", "pMemoryRequirements", pMemoryRequirements);

    return skipCall;
}

static bool parameter_validation_vkGetImageSparseMemoryRequirements(
    debug_report_data*                          report_data,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetImageSparseMemoryRequirements", "image", image);

    skipCall |= validate_array(report_data, "vkGetImageSparseMemoryRequirements", "pSparseMemoryRequirementCount", "pSparseMemoryRequirements", pSparseMemoryRequirementCount, pSparseMemoryRequirements, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSparseImageFormatProperties(
    debug_report_data*                          report_data,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties)
{
    UNUSED_PARAMETER(samples);

    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format);

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, type);

    skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, usage, true);

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, tiling);

    skipCall |= validate_array(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkQueueBindSparse(
    debug_report_data*                          report_data,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence)
{
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkQueueBindSparse", "bindInfoCount", "pBindInfo", "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO", bindInfoCount, pBindInfo, VK_STRUCTURE_TYPE_BIND_SPARSE_INFO, false, true);

    if (pBindInfo != NULL)
    {
        for (uint32_t bindInfoIndex = 0; bindInfoIndex < bindInfoCount; ++bindInfoIndex)
        {
            const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHX};

            skipCall |= validate_struct_pnext(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pNext", ParameterName::IndexVector{ bindInfoIndex }), "VkDeviceGroupBindSparseInfoKHX", pBindInfo[bindInfoIndex].pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

            skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].waitSemaphoreCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pWaitSemaphores", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].waitSemaphoreCount, pBindInfo[bindInfoIndex].pWaitSemaphores, false, true);

            skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].bufferBindCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pBufferBinds", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].bufferBindCount, pBindInfo[bindInfoIndex].pBufferBinds, false, true);

            if (pBindInfo[bindInfoIndex].pBufferBinds != NULL)
            {
                for (uint32_t bufferBindIndex = 0; bufferBindIndex < pBindInfo[bindInfoIndex].bufferBindCount; ++bufferBindIndex)
                {
                    skipCall |= validate_required_handle(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pBufferBinds[%i].buffer", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex }), pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].buffer);

                    skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pBufferBinds[%i].bindCount", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex }), ParameterName("pBindInfo[%i].pBufferBinds[%i].pBinds", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex }), pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].bindCount, pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].pBinds, true, true);

                    if (pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].pBinds != NULL)
                    {
                        for (uint32_t bindIndex = 0; bindIndex < pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].bindCount; ++bindIndex)
                        {
                            skipCall |= validate_flags(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pBufferBinds[%i].pBinds[%i].flags", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex, bindIndex }), "VkSparseMemoryBindFlagBits", AllVkSparseMemoryBindFlagBits, pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].pBinds[bindIndex].flags, false);
                        }
                    }
                }
            }

            skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].imageOpaqueBindCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pImageOpaqueBinds", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].imageOpaqueBindCount, pBindInfo[bindInfoIndex].pImageOpaqueBinds, false, true);

            if (pBindInfo[bindInfoIndex].pImageOpaqueBinds != NULL)
            {
                for (uint32_t imageOpaqueBindIndex = 0; imageOpaqueBindIndex < pBindInfo[bindInfoIndex].imageOpaqueBindCount; ++imageOpaqueBindIndex)
                {
                    skipCall |= validate_required_handle(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].image", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex }), pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].image);

                    skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].bindCount", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex }), ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].pBinds", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex }), pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].bindCount, pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].pBinds, true, true);

                    if (pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].pBinds != NULL)
                    {
                        for (uint32_t bindIndex = 0; bindIndex < pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].bindCount; ++bindIndex)
                        {
                            skipCall |= validate_flags(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].pBinds[%i].flags", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex, bindIndex }), "VkSparseMemoryBindFlagBits", AllVkSparseMemoryBindFlagBits, pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].pBinds[bindIndex].flags, false);
                        }
                    }
                }
            }

            skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].imageBindCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pImageBinds", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].imageBindCount, pBindInfo[bindInfoIndex].pImageBinds, false, true);

            if (pBindInfo[bindInfoIndex].pImageBinds != NULL)
            {
                for (uint32_t imageBindIndex = 0; imageBindIndex < pBindInfo[bindInfoIndex].imageBindCount; ++imageBindIndex)
                {
                    skipCall |= validate_required_handle(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].image", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex }), pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].image);

                    skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].bindCount", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex }), ParameterName("pBindInfo[%i].pImageBinds[%i].pBinds", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex }), pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].bindCount, pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds, true, true);

                    if (pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds != NULL)
                    {
                        for (uint32_t bindIndex = 0; bindIndex < pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].bindCount; ++bindIndex)
                        {
                            skipCall |= validate_flags(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].pBinds[%i].subresource.aspectMask", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex, bindIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds[bindIndex].subresource.aspectMask, true);

                            skipCall |= validate_flags(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].pBinds[%i].flags", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex, bindIndex }), "VkSparseMemoryBindFlagBits", AllVkSparseMemoryBindFlagBits, pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds[bindIndex].flags, false);
                        }
                    }
                }
            }

            skipCall |= validate_array(report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].signalSemaphoreCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pSignalSemaphores", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].signalSemaphoreCount, pBindInfo[bindInfoIndex].pSignalSemaphores, false, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCreateFence(
    debug_report_data*                          report_data,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateFence", "pCreateInfo", "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateFence", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateFence", "pCreateInfo->flags", "VkFenceCreateFlagBits", AllVkFenceCreateFlagBits, pCreateInfo->flags, false);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateFence", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateFence", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateFence", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateFence", "pFence", pFence);

    return skipCall;
}

static bool parameter_validation_vkDestroyFence(
    debug_report_data*                          report_data,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyFence", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyFence", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyFence", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkResetFences(
    debug_report_data*                          report_data,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences)
{
    bool skipCall = false;

    skipCall |= validate_handle_array(report_data, "vkResetFences", "fenceCount", "pFences", fenceCount, pFences, true, true);

    return skipCall;
}

static bool parameter_validation_vkGetFenceStatus(
    debug_report_data*                          report_data,
    VkFence                                     fence)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetFenceStatus", "fence", fence);

    return skipCall;
}

static bool parameter_validation_vkWaitForFences(
    debug_report_data*                          report_data,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    UNUSED_PARAMETER(timeout);

    bool skipCall = false;

    skipCall |= validate_handle_array(report_data, "vkWaitForFences", "fenceCount", "pFences", fenceCount, pFences, true, true);

    skipCall |= validate_bool32(report_data, "vkWaitForFences", "waitAll", waitAll);

    return skipCall;
}

static bool parameter_validation_vkCreateSemaphore(
    debug_report_data*                          report_data,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateSemaphore", "pCreateInfo", "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateSemaphore", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateSemaphore", "pCreateInfo->flags", pCreateInfo->flags);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateSemaphore", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateSemaphore", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateSemaphore", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateSemaphore", "pSemaphore", pSemaphore);

    return skipCall;
}

static bool parameter_validation_vkDestroySemaphore(
    debug_report_data*                          report_data,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(semaphore);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroySemaphore", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroySemaphore", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroySemaphore", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateEvent(
    debug_report_data*                          report_data,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateEvent", "pCreateInfo", "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_EVENT_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateEvent", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateEvent", "pCreateInfo->flags", pCreateInfo->flags);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateEvent", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateEvent", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateEvent", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateEvent", "pEvent", pEvent);

    return skipCall;
}

static bool parameter_validation_vkDestroyEvent(
    debug_report_data*                          report_data,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(event);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyEvent", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyEvent", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyEvent", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkGetEventStatus(
    debug_report_data*                          report_data,
    VkEvent                                     event)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetEventStatus", "event", event);

    return skipCall;
}

static bool parameter_validation_vkSetEvent(
    debug_report_data*                          report_data,
    VkEvent                                     event)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkSetEvent", "event", event);

    return skipCall;
}

static bool parameter_validation_vkResetEvent(
    debug_report_data*                          report_data,
    VkEvent                                     event)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkResetEvent", "event", event);

    return skipCall;
}

static bool parameter_validation_vkCreateQueryPool(
    debug_report_data*                          report_data,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateQueryPool", "pCreateInfo", "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateQueryPool", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateQueryPool", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_ranged_enum(report_data, "vkCreateQueryPool", "pCreateInfo->queryType", "VkQueryType", VK_QUERY_TYPE_BEGIN_RANGE, VK_QUERY_TYPE_END_RANGE, pCreateInfo->queryType);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateQueryPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateQueryPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateQueryPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateQueryPool", "pQueryPool", pQueryPool);

    return skipCall;
}

static bool parameter_validation_vkDestroyQueryPool(
    debug_report_data*                          report_data,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(queryPool);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyQueryPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyQueryPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyQueryPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkGetQueryPoolResults(
    debug_report_data*                          report_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    UNUSED_PARAMETER(firstQuery);
    UNUSED_PARAMETER(queryCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetQueryPoolResults", "queryPool", queryPool);

    skipCall |= validate_array(report_data, "vkGetQueryPoolResults", "dataSize", "pData", dataSize, pData, true, true);

    skipCall |= validate_flags(report_data, "vkGetQueryPoolResults", "flags", "VkQueryResultFlagBits", AllVkQueryResultFlagBits, flags, false);

    return skipCall;
}

static bool parameter_validation_vkCreateBuffer(
    debug_report_data*                          report_data,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateBuffer", "pCreateInfo", "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV};

        skipCall |= validate_struct_pnext(report_data, "vkCreateBuffer", "pCreateInfo->pNext", "VkDedicatedAllocationBufferCreateInfoNV", pCreateInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateBuffer", "pCreateInfo->flags", "VkBufferCreateFlagBits", AllVkBufferCreateFlagBits, pCreateInfo->flags, false);

        skipCall |= validate_flags(report_data, "vkCreateBuffer", "pCreateInfo->usage", "VkBufferUsageFlagBits", AllVkBufferUsageFlagBits, pCreateInfo->usage, true);

        skipCall |= validate_ranged_enum(report_data, "vkCreateBuffer", "pCreateInfo->sharingMode", "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfo->sharingMode);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateBuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateBuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateBuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateBuffer", "pBuffer", pBuffer);

    return skipCall;
}

static bool parameter_validation_vkDestroyBuffer(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(buffer);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyBuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyBuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyBuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateBufferView(
    debug_report_data*                          report_data,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateBufferView", "pCreateInfo", "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateBufferView", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateBufferView", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_handle(report_data, "vkCreateBufferView", "pCreateInfo->buffer", pCreateInfo->buffer);

        skipCall |= validate_ranged_enum(report_data, "vkCreateBufferView", "pCreateInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->format);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateBufferView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateBufferView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateBufferView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateBufferView", "pView", pView);

    return skipCall;
}

static bool parameter_validation_vkDestroyBufferView(
    debug_report_data*                          report_data,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(bufferView);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyBufferView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyBufferView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyBufferView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateImage(
    debug_report_data*                          report_data,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateImage", "pCreateInfo", "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV, VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkCreateImage", "pCreateInfo->pNext", "VkDedicatedAllocationImageCreateInfoNV, VkImageSwapchainCreateInfoKHX", pCreateInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateImage", "pCreateInfo->flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, pCreateInfo->flags, false);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImage", "pCreateInfo->imageType", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pCreateInfo->imageType);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImage", "pCreateInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->format);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImage", "pCreateInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pCreateInfo->tiling);

        skipCall |= validate_flags(report_data, "vkCreateImage", "pCreateInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pCreateInfo->usage, true);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImage", "pCreateInfo->sharingMode", "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfo->sharingMode);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImage", "pCreateInfo->initialLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->initialLayout);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateImage", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateImage", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateImage", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateImage", "pImage", pImage);

    return skipCall;
}

static bool parameter_validation_vkDestroyImage(
    debug_report_data*                          report_data,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(image);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyImage", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyImage", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyImage", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkGetImageSubresourceLayout(
    debug_report_data*                          report_data,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetImageSubresourceLayout", "image", image);

    skipCall |= validate_required_pointer(report_data, "vkGetImageSubresourceLayout", "pSubresource", pSubresource);

    if (pSubresource != NULL)
    {
        skipCall |= validate_flags(report_data, "vkGetImageSubresourceLayout", "pSubresource->aspectMask", "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pSubresource->aspectMask, true);
    }

    skipCall |= validate_required_pointer(report_data, "vkGetImageSubresourceLayout", "pLayout", pLayout);

    return skipCall;
}

static bool parameter_validation_vkCreateImageView(
    debug_report_data*                          report_data,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateImageView", "pCreateInfo", "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateImageView", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateImageView", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_handle(report_data, "vkCreateImageView", "pCreateInfo->image", pCreateInfo->image);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImageView", "pCreateInfo->viewType", "VkImageViewType", VK_IMAGE_VIEW_TYPE_BEGIN_RANGE, VK_IMAGE_VIEW_TYPE_END_RANGE, pCreateInfo->viewType);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImageView", "pCreateInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->format);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImageView", "pCreateInfo->components.r", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.r);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImageView", "pCreateInfo->components.g", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.g);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImageView", "pCreateInfo->components.b", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.b);

        skipCall |= validate_ranged_enum(report_data, "vkCreateImageView", "pCreateInfo->components.a", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.a);

        skipCall |= validate_flags(report_data, "vkCreateImageView", "pCreateInfo->subresourceRange.aspectMask", "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pCreateInfo->subresourceRange.aspectMask, true);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateImageView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateImageView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateImageView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateImageView", "pView", pView);

    return skipCall;
}

static bool parameter_validation_vkDestroyImageView(
    debug_report_data*                          report_data,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(imageView);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyImageView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyImageView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyImageView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateShaderModule(
    debug_report_data*                          report_data,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateShaderModule", "pCreateInfo", "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateShaderModule", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateShaderModule", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_array(report_data, "vkCreateShaderModule", "pCreateInfo->codeSize", "pCreateInfo->pCode", pCreateInfo->codeSize, pCreateInfo->pCode, true, true);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateShaderModule", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateShaderModule", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateShaderModule", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateShaderModule", "pShaderModule", pShaderModule);

    return skipCall;
}

static bool parameter_validation_vkDestroyShaderModule(
    debug_report_data*                          report_data,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(shaderModule);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyShaderModule", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyShaderModule", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyShaderModule", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreatePipelineCache(
    debug_report_data*                          report_data,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreatePipelineCache", "pCreateInfo", "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreatePipelineCache", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreatePipelineCache", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_array(report_data, "vkCreatePipelineCache", "pCreateInfo->initialDataSize", "pCreateInfo->pInitialData", pCreateInfo->initialDataSize, pCreateInfo->pInitialData, false, true);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreatePipelineCache", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreatePipelineCache", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreatePipelineCache", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreatePipelineCache", "pPipelineCache", pPipelineCache);

    return skipCall;
}

static bool parameter_validation_vkDestroyPipelineCache(
    debug_report_data*                          report_data,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pipelineCache);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyPipelineCache", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyPipelineCache", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyPipelineCache", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkGetPipelineCacheData(
    debug_report_data*                          report_data,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPipelineCacheData", "pipelineCache", pipelineCache);

    skipCall |= validate_array(report_data, "vkGetPipelineCacheData", "pDataSize", "pData", pDataSize, pData, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkMergePipelineCaches(
    debug_report_data*                          report_data,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkMergePipelineCaches", "dstCache", dstCache);

    skipCall |= validate_handle_array(report_data, "vkMergePipelineCaches", "srcCacheCount", "pSrcCaches", srcCacheCount, pSrcCaches, true, true);

    return skipCall;
}

static bool parameter_validation_vkCreateGraphicsPipelines(
    debug_report_data*                          report_data,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines)
{
    UNUSED_PARAMETER(pipelineCache);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkCreateGraphicsPipelines", "createInfoCount", "pCreateInfos", "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO", createInfoCount, pCreateInfos, VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO, true, true);

    if (pCreateInfos != NULL)
    {
        for (uint32_t createInfoIndex = 0; createInfoIndex < createInfoCount; ++createInfoIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].flags", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineCreateFlagBits", AllVkPipelineCreateFlagBits, pCreateInfos[createInfoIndex].flags, false);

            skipCall |= validate_struct_type_array(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].stageCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pStages", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO", pCreateInfos[createInfoIndex].stageCount, pCreateInfos[createInfoIndex].pStages, VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, true, true);

            if (pCreateInfos[createInfoIndex].pStages != NULL)
            {
                for (uint32_t stageIndex = 0; stageIndex < pCreateInfos[createInfoIndex].stageCount; ++stageIndex)
                {
                    skipCall |= validate_struct_pnext(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].pNext", ParameterName::IndexVector{ createInfoIndex, stageIndex }), NULL, pCreateInfos[createInfoIndex].pStages[stageIndex].pNext, 0, NULL, GeneratedHeaderVersion);

                    skipCall |= validate_reserved_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].flags", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].flags);

                    skipCall |= validate_required_handle(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].module", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].module);

                    skipCall |= validate_required_pointer(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].pName", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].pName);

                    if (pCreateInfos[createInfoIndex].pStages[stageIndex].pSpecializationInfo != NULL)
                    {
                        skipCall |= validate_array(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].pSpecializationInfo->dataSize", ParameterName::IndexVector{ createInfoIndex, stageIndex }), ParameterName("pCreateInfos[%i].pStages[%i].pSpecializationInfo->pData", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].pSpecializationInfo->dataSize, pCreateInfos[createInfoIndex].pStages[stageIndex].pSpecializationInfo->pData, false, true);
                    }
                }
            }

            skipCall |= validate_struct_type(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pVertexInputState, VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, true);

            if (pCreateInfos[createInfoIndex].pVertexInputState != NULL)
            {
                skipCall |= validate_struct_pnext(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pVertexInputState->pNext, 0, NULL, GeneratedHeaderVersion);

                skipCall |= validate_reserved_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pVertexInputState->flags);

                skipCall |= validate_array(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->vertexBindingDescriptionCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pVertexInputState->pVertexBindingDescriptions", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pVertexInputState->vertexBindingDescriptionCount, pCreateInfos[createInfoIndex].pVertexInputState->pVertexBindingDescriptions, false, true);

                if (pCreateInfos[createInfoIndex].pVertexInputState->pVertexBindingDescriptions != NULL)
                {
                    for (uint32_t vertexBindingDescriptionIndex = 0; vertexBindingDescriptionIndex < pCreateInfos[createInfoIndex].pVertexInputState->vertexBindingDescriptionCount; ++vertexBindingDescriptionIndex)
                    {
                        skipCall |= validate_ranged_enum(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->pVertexBindingDescriptions[%i].inputRate", ParameterName::IndexVector{ createInfoIndex, vertexBindingDescriptionIndex }), "VkVertexInputRate", VK_VERTEX_INPUT_RATE_BEGIN_RANGE, VK_VERTEX_INPUT_RATE_END_RANGE, pCreateInfos[createInfoIndex].pVertexInputState->pVertexBindingDescriptions[vertexBindingDescriptionIndex].inputRate);
                    }
                }

                skipCall |= validate_array(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->vertexAttributeDescriptionCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pVertexInputState->pVertexAttributeDescriptions", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pVertexInputState->vertexAttributeDescriptionCount, pCreateInfos[createInfoIndex].pVertexInputState->pVertexAttributeDescriptions, false, true);

                if (pCreateInfos[createInfoIndex].pVertexInputState->pVertexAttributeDescriptions != NULL)
                {
                    for (uint32_t vertexAttributeDescriptionIndex = 0; vertexAttributeDescriptionIndex < pCreateInfos[createInfoIndex].pVertexInputState->vertexAttributeDescriptionCount; ++vertexAttributeDescriptionIndex)
                    {
                        skipCall |= validate_ranged_enum(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->pVertexAttributeDescriptions[%i].format", ParameterName::IndexVector{ createInfoIndex, vertexAttributeDescriptionIndex }), "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfos[createInfoIndex].pVertexInputState->pVertexAttributeDescriptions[vertexAttributeDescriptionIndex].format);
                    }
                }
            }

            skipCall |= validate_struct_type(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pInputAssemblyState, VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO, true);

            if (pCreateInfos[createInfoIndex].pInputAssemblyState != NULL)
            {
                skipCall |= validate_struct_pnext(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pInputAssemblyState->pNext, 0, NULL, GeneratedHeaderVersion);

                skipCall |= validate_reserved_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pInputAssemblyState->flags);

                skipCall |= validate_ranged_enum(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->topology", ParameterName::IndexVector{ createInfoIndex }), "VkPrimitiveTopology", VK_PRIMITIVE_TOPOLOGY_BEGIN_RANGE, VK_PRIMITIVE_TOPOLOGY_END_RANGE, pCreateInfos[createInfoIndex].pInputAssemblyState->topology);

                skipCall |= validate_bool32(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->primitiveRestartEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pInputAssemblyState->primitiveRestartEnable);
            }

            skipCall |= validate_struct_type(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pRasterizationState, VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO, true);

            if (pCreateInfos[createInfoIndex].pRasterizationState != NULL)
            {
                const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD};

                skipCall |= validate_struct_pnext(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->pNext", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineRasterizationStateRasterizationOrderAMD", pCreateInfos[createInfoIndex].pRasterizationState->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

                skipCall |= validate_reserved_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->flags);

                skipCall |= validate_bool32(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->depthClampEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->depthClampEnable);

                skipCall |= validate_bool32(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->rasterizerDiscardEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->rasterizerDiscardEnable);

                skipCall |= validate_ranged_enum(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->polygonMode", ParameterName::IndexVector{ createInfoIndex }), "VkPolygonMode", VK_POLYGON_MODE_BEGIN_RANGE, VK_POLYGON_MODE_END_RANGE, pCreateInfos[createInfoIndex].pRasterizationState->polygonMode);

                skipCall |= validate_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->cullMode", ParameterName::IndexVector{ createInfoIndex }), "VkCullModeFlagBits", AllVkCullModeFlagBits, pCreateInfos[createInfoIndex].pRasterizationState->cullMode, false);

                skipCall |= validate_ranged_enum(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->frontFace", ParameterName::IndexVector{ createInfoIndex }), "VkFrontFace", VK_FRONT_FACE_BEGIN_RANGE, VK_FRONT_FACE_END_RANGE, pCreateInfos[createInfoIndex].pRasterizationState->frontFace);

                skipCall |= validate_bool32(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->depthBiasEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->depthBiasEnable);
            }

            skipCall |= validate_struct_type(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pDynamicState, VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO, false);

            if (pCreateInfos[createInfoIndex].pDynamicState != NULL)
            {
                skipCall |= validate_struct_pnext(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState->pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pDynamicState->pNext, 0, NULL, GeneratedHeaderVersion);

                skipCall |= validate_reserved_flags(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pDynamicState->flags);

                skipCall |= validate_ranged_enum_array(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState->dynamicStateCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pDynamicState->pDynamicStates", ParameterName::IndexVector{ createInfoIndex }), "VkDynamicState", VK_DYNAMIC_STATE_BEGIN_RANGE, VK_DYNAMIC_STATE_END_RANGE, pCreateInfos[createInfoIndex].pDynamicState->dynamicStateCount, pCreateInfos[createInfoIndex].pDynamicState->pDynamicStates, true, true);
            }

            skipCall |= validate_required_handle(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].layout", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].layout);

            skipCall |= validate_required_handle(report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].renderPass", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].renderPass);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateGraphicsPipelines", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateGraphicsPipelines", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateGraphicsPipelines", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_array(report_data, "vkCreateGraphicsPipelines", "createInfoCount", "pPipelines", createInfoCount, pPipelines, true, true);

    return skipCall;
}

static bool parameter_validation_vkCreateComputePipelines(
    debug_report_data*                          report_data,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines)
{
    UNUSED_PARAMETER(pipelineCache);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkCreateComputePipelines", "createInfoCount", "pCreateInfos", "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO", createInfoCount, pCreateInfos, VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO, true, true);

    if (pCreateInfos != NULL)
    {
        for (uint32_t createInfoIndex = 0; createInfoIndex < createInfoCount; ++createInfoIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].flags", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineCreateFlagBits", AllVkPipelineCreateFlagBits, pCreateInfos[createInfoIndex].flags, false);

            skipCall |= validate_struct_type(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO", &(pCreateInfos[createInfoIndex].stage), VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, false);

            skipCall |= validate_struct_pnext(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].stage.pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_reserved_flags(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.flags);

            skipCall |= validate_required_handle(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.module", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.module);

            skipCall |= validate_required_pointer(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.pName", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.pName);

            if (pCreateInfos[createInfoIndex].stage.pSpecializationInfo != NULL)
            {
                skipCall |= validate_array(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.pSpecializationInfo->dataSize", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].stage.pSpecializationInfo->pData", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.pSpecializationInfo->dataSize, pCreateInfos[createInfoIndex].stage.pSpecializationInfo->pData, false, true);
            }

            skipCall |= validate_required_handle(report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].layout", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].layout);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateComputePipelines", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateComputePipelines", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateComputePipelines", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_array(report_data, "vkCreateComputePipelines", "createInfoCount", "pPipelines", createInfoCount, pPipelines, true, true);

    return skipCall;
}

static bool parameter_validation_vkDestroyPipeline(
    debug_report_data*                          report_data,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pipeline);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyPipeline", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyPipeline", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyPipeline", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreatePipelineLayout(
    debug_report_data*                          report_data,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreatePipelineLayout", "pCreateInfo", "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreatePipelineLayout", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreatePipelineLayout", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_array(report_data, "vkCreatePipelineLayout", "pCreateInfo->setLayoutCount", "pCreateInfo->pSetLayouts", pCreateInfo->setLayoutCount, pCreateInfo->pSetLayouts, false, true);

        skipCall |= validate_array(report_data, "vkCreatePipelineLayout", "pCreateInfo->pushConstantRangeCount", "pCreateInfo->pPushConstantRanges", pCreateInfo->pushConstantRangeCount, pCreateInfo->pPushConstantRanges, false, true);

        if (pCreateInfo->pPushConstantRanges != NULL)
        {
            for (uint32_t pushConstantRangeIndex = 0; pushConstantRangeIndex < pCreateInfo->pushConstantRangeCount; ++pushConstantRangeIndex)
            {
                skipCall |= validate_flags(report_data, "vkCreatePipelineLayout", ParameterName("pCreateInfo->pPushConstantRanges[%i].stageFlags", ParameterName::IndexVector{ pushConstantRangeIndex }), "VkShaderStageFlagBits", AllVkShaderStageFlagBits, pCreateInfo->pPushConstantRanges[pushConstantRangeIndex].stageFlags, true);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreatePipelineLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreatePipelineLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreatePipelineLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreatePipelineLayout", "pPipelineLayout", pPipelineLayout);

    return skipCall;
}

static bool parameter_validation_vkDestroyPipelineLayout(
    debug_report_data*                          report_data,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pipelineLayout);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyPipelineLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyPipelineLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyPipelineLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateSampler(
    debug_report_data*                          report_data,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateSampler", "pCreateInfo", "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateSampler", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateSampler", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSampler", "pCreateInfo->magFilter", "VkFilter", VK_FILTER_BEGIN_RANGE, VK_FILTER_END_RANGE, pCreateInfo->magFilter);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSampler", "pCreateInfo->minFilter", "VkFilter", VK_FILTER_BEGIN_RANGE, VK_FILTER_END_RANGE, pCreateInfo->minFilter);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSampler", "pCreateInfo->mipmapMode", "VkSamplerMipmapMode", VK_SAMPLER_MIPMAP_MODE_BEGIN_RANGE, VK_SAMPLER_MIPMAP_MODE_END_RANGE, pCreateInfo->mipmapMode);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSampler", "pCreateInfo->addressModeU", "VkSamplerAddressMode", VK_SAMPLER_ADDRESS_MODE_BEGIN_RANGE, VK_SAMPLER_ADDRESS_MODE_END_RANGE, pCreateInfo->addressModeU);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSampler", "pCreateInfo->addressModeV", "VkSamplerAddressMode", VK_SAMPLER_ADDRESS_MODE_BEGIN_RANGE, VK_SAMPLER_ADDRESS_MODE_END_RANGE, pCreateInfo->addressModeV);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSampler", "pCreateInfo->addressModeW", "VkSamplerAddressMode", VK_SAMPLER_ADDRESS_MODE_BEGIN_RANGE, VK_SAMPLER_ADDRESS_MODE_END_RANGE, pCreateInfo->addressModeW);

        skipCall |= validate_bool32(report_data, "vkCreateSampler", "pCreateInfo->anisotropyEnable", pCreateInfo->anisotropyEnable);

        skipCall |= validate_bool32(report_data, "vkCreateSampler", "pCreateInfo->compareEnable", pCreateInfo->compareEnable);

        skipCall |= validate_bool32(report_data, "vkCreateSampler", "pCreateInfo->unnormalizedCoordinates", pCreateInfo->unnormalizedCoordinates);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateSampler", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateSampler", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateSampler", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateSampler", "pSampler", pSampler);

    return skipCall;
}

static bool parameter_validation_vkDestroySampler(
    debug_report_data*                          report_data,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(sampler);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroySampler", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroySampler", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroySampler", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateDescriptorSetLayout(
    debug_report_data*                          report_data,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateDescriptorSetLayout", "pCreateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateDescriptorSetLayout", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateDescriptorSetLayout", "pCreateInfo->flags", "VkDescriptorSetLayoutCreateFlagBits", AllVkDescriptorSetLayoutCreateFlagBits, pCreateInfo->flags, false);

        skipCall |= validate_array(report_data, "vkCreateDescriptorSetLayout", "pCreateInfo->bindingCount", "pCreateInfo->pBindings", pCreateInfo->bindingCount, pCreateInfo->pBindings, false, true);

        if (pCreateInfo->pBindings != NULL)
        {
            for (uint32_t bindingIndex = 0; bindingIndex < pCreateInfo->bindingCount; ++bindingIndex)
            {
                skipCall |= validate_ranged_enum(report_data, "vkCreateDescriptorSetLayout", ParameterName("pCreateInfo->pBindings[%i].descriptorType", ParameterName::IndexVector{ bindingIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pCreateInfo->pBindings[bindingIndex].descriptorType);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorSetLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorSetLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorSetLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorSetLayout", "pSetLayout", pSetLayout);

    return skipCall;
}

static bool parameter_validation_vkDestroyDescriptorSetLayout(
    debug_report_data*                          report_data,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(descriptorSetLayout);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyDescriptorSetLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyDescriptorSetLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyDescriptorSetLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateDescriptorPool(
    debug_report_data*                          report_data,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateDescriptorPool", "pCreateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateDescriptorPool", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateDescriptorPool", "pCreateInfo->flags", "VkDescriptorPoolCreateFlagBits", AllVkDescriptorPoolCreateFlagBits, pCreateInfo->flags, false);

        skipCall |= validate_array(report_data, "vkCreateDescriptorPool", "pCreateInfo->poolSizeCount", "pCreateInfo->pPoolSizes", pCreateInfo->poolSizeCount, pCreateInfo->pPoolSizes, true, true);

        if (pCreateInfo->pPoolSizes != NULL)
        {
            for (uint32_t poolSizeIndex = 0; poolSizeIndex < pCreateInfo->poolSizeCount; ++poolSizeIndex)
            {
                skipCall |= validate_ranged_enum(report_data, "vkCreateDescriptorPool", ParameterName("pCreateInfo->pPoolSizes[%i].type", ParameterName::IndexVector{ poolSizeIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pCreateInfo->pPoolSizes[poolSizeIndex].type);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorPool", "pDescriptorPool", pDescriptorPool);

    return skipCall;
}

static bool parameter_validation_vkDestroyDescriptorPool(
    debug_report_data*                          report_data,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(descriptorPool);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyDescriptorPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyDescriptorPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyDescriptorPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkResetDescriptorPool(
    debug_report_data*                          report_data,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkResetDescriptorPool", "descriptorPool", descriptorPool);

    skipCall |= validate_reserved_flags(report_data, "vkResetDescriptorPool", "flags", flags);

    return skipCall;
}

static bool parameter_validation_vkAllocateDescriptorSets(
    debug_report_data*                          report_data,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkAllocateDescriptorSets", "pAllocateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO", pAllocateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO, true);

    if (pAllocateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkAllocateDescriptorSets", "pAllocateInfo->pNext", NULL, pAllocateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkAllocateDescriptorSets", "pAllocateInfo->descriptorPool", pAllocateInfo->descriptorPool);

        skipCall |= validate_handle_array(report_data, "vkAllocateDescriptorSets", "pAllocateInfo->descriptorSetCount", "pAllocateInfo->pSetLayouts", pAllocateInfo->descriptorSetCount, pAllocateInfo->pSetLayouts, true, true);
    }

    if (pAllocateInfo != NULL) {
        skipCall |= validate_array(report_data, "vkAllocateDescriptorSets", "pAllocateInfo->descriptorSetCount", "pDescriptorSets", pAllocateInfo->descriptorSetCount, pDescriptorSets, true, true);
    }

    return skipCall;
}

static bool parameter_validation_vkFreeDescriptorSets(
    debug_report_data*                          report_data,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets)
{
    UNUSED_PARAMETER(pDescriptorSets);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkFreeDescriptorSets", "descriptorPool", descriptorPool);

    return skipCall;
}

static bool parameter_validation_vkUpdateDescriptorSets(
    debug_report_data*                          report_data,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkUpdateDescriptorSets", "descriptorWriteCount", "pDescriptorWrites", "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET", descriptorWriteCount, pDescriptorWrites, VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, false, true);

    if (pDescriptorWrites != NULL)
    {
        for (uint32_t descriptorWriteIndex = 0; descriptorWriteIndex < descriptorWriteCount; ++descriptorWriteIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorWrites[%i].pNext", ParameterName::IndexVector{ descriptorWriteIndex }), NULL, pDescriptorWrites[descriptorWriteIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_required_handle(report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorWrites[%i].dstSet", ParameterName::IndexVector{ descriptorWriteIndex }), pDescriptorWrites[descriptorWriteIndex].dstSet);

            skipCall |= validate_ranged_enum(report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorWrites[%i].descriptorType", ParameterName::IndexVector{ descriptorWriteIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pDescriptorWrites[descriptorWriteIndex].descriptorType);
        }
    }

    skipCall |= validate_struct_type_array(report_data, "vkUpdateDescriptorSets", "descriptorCopyCount", "pDescriptorCopies", "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET", descriptorCopyCount, pDescriptorCopies, VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET, false, true);

    if (pDescriptorCopies != NULL)
    {
        for (uint32_t descriptorCopyIndex = 0; descriptorCopyIndex < descriptorCopyCount; ++descriptorCopyIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorCopies[%i].pNext", ParameterName::IndexVector{ descriptorCopyIndex }), NULL, pDescriptorCopies[descriptorCopyIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_required_handle(report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorCopies[%i].srcSet", ParameterName::IndexVector{ descriptorCopyIndex }), pDescriptorCopies[descriptorCopyIndex].srcSet);

            skipCall |= validate_required_handle(report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorCopies[%i].dstSet", ParameterName::IndexVector{ descriptorCopyIndex }), pDescriptorCopies[descriptorCopyIndex].dstSet);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCreateFramebuffer(
    debug_report_data*                          report_data,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateFramebuffer", "pCreateInfo", "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateFramebuffer", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateFramebuffer", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_handle(report_data, "vkCreateFramebuffer", "pCreateInfo->renderPass", pCreateInfo->renderPass);

        skipCall |= validate_array(report_data, "vkCreateFramebuffer", "pCreateInfo->attachmentCount", "pCreateInfo->pAttachments", pCreateInfo->attachmentCount, pCreateInfo->pAttachments, false, true);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateFramebuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateFramebuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateFramebuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateFramebuffer", "pFramebuffer", pFramebuffer);

    return skipCall;
}

static bool parameter_validation_vkDestroyFramebuffer(
    debug_report_data*                          report_data,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(framebuffer);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyFramebuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyFramebuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyFramebuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkCreateRenderPass(
    debug_report_data*                          report_data,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateRenderPass", "pCreateInfo", "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateRenderPass", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateRenderPass", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_array(report_data, "vkCreateRenderPass", "pCreateInfo->attachmentCount", "pCreateInfo->pAttachments", pCreateInfo->attachmentCount, pCreateInfo->pAttachments, false, true);

        if (pCreateInfo->pAttachments != NULL)
        {
            for (uint32_t attachmentIndex = 0; attachmentIndex < pCreateInfo->attachmentCount; ++attachmentIndex)
            {
                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].flags", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentDescriptionFlagBits", AllVkAttachmentDescriptionFlagBits, pCreateInfo->pAttachments[attachmentIndex].flags, false);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].format", ParameterName::IndexVector{ attachmentIndex }), "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].format);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].loadOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentLoadOp", VK_ATTACHMENT_LOAD_OP_BEGIN_RANGE, VK_ATTACHMENT_LOAD_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].loadOp);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].storeOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentStoreOp", VK_ATTACHMENT_STORE_OP_BEGIN_RANGE, VK_ATTACHMENT_STORE_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].storeOp);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].stencilLoadOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentLoadOp", VK_ATTACHMENT_LOAD_OP_BEGIN_RANGE, VK_ATTACHMENT_LOAD_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].stencilLoadOp);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].stencilStoreOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentStoreOp", VK_ATTACHMENT_STORE_OP_BEGIN_RANGE, VK_ATTACHMENT_STORE_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].stencilStoreOp);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].initialLayout", ParameterName::IndexVector{ attachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].initialLayout);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].finalLayout", ParameterName::IndexVector{ attachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].finalLayout);
            }
        }

        skipCall |= validate_array(report_data, "vkCreateRenderPass", "pCreateInfo->subpassCount", "pCreateInfo->pSubpasses", pCreateInfo->subpassCount, pCreateInfo->pSubpasses, true, true);

        if (pCreateInfo->pSubpasses != NULL)
        {
            for (uint32_t subpassIndex = 0; subpassIndex < pCreateInfo->subpassCount; ++subpassIndex)
            {
                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].flags", ParameterName::IndexVector{ subpassIndex }), "VkSubpassDescriptionFlagBits", AllVkSubpassDescriptionFlagBits, pCreateInfo->pSubpasses[subpassIndex].flags, false);

                skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pipelineBindPoint", ParameterName::IndexVector{ subpassIndex }), "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pipelineBindPoint);

                skipCall |= validate_array(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].inputAttachmentCount", ParameterName::IndexVector{ subpassIndex }), ParameterName("pCreateInfo->pSubpasses[%i].pInputAttachments", ParameterName::IndexVector{ subpassIndex }), pCreateInfo->pSubpasses[subpassIndex].inputAttachmentCount, pCreateInfo->pSubpasses[subpassIndex].pInputAttachments, false, true);

                if (pCreateInfo->pSubpasses[subpassIndex].pInputAttachments != NULL)
                {
                    for (uint32_t inputAttachmentIndex = 0; inputAttachmentIndex < pCreateInfo->pSubpasses[subpassIndex].inputAttachmentCount; ++inputAttachmentIndex)
                    {
                        skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pInputAttachments[%i].layout", ParameterName::IndexVector{ subpassIndex, inputAttachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pInputAttachments[inputAttachmentIndex].layout);
                    }
                }

                skipCall |= validate_array(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].colorAttachmentCount", ParameterName::IndexVector{ subpassIndex }), ParameterName("pCreateInfo->pSubpasses[%i].pColorAttachments", ParameterName::IndexVector{ subpassIndex }), pCreateInfo->pSubpasses[subpassIndex].colorAttachmentCount, pCreateInfo->pSubpasses[subpassIndex].pColorAttachments, false, true);

                if (pCreateInfo->pSubpasses[subpassIndex].pColorAttachments != NULL)
                {
                    for (uint32_t colorAttachmentIndex = 0; colorAttachmentIndex < pCreateInfo->pSubpasses[subpassIndex].colorAttachmentCount; ++colorAttachmentIndex)
                    {
                        skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pColorAttachments[%i].layout", ParameterName::IndexVector{ subpassIndex, colorAttachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pColorAttachments[colorAttachmentIndex].layout);
                    }
                }

                if (pCreateInfo->pSubpasses[subpassIndex].pResolveAttachments != NULL)
                {
                    for (uint32_t colorAttachmentIndex = 0; colorAttachmentIndex < pCreateInfo->pSubpasses[subpassIndex].colorAttachmentCount; ++colorAttachmentIndex)
                    {
                        skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pResolveAttachments[%i].layout", ParameterName::IndexVector{ subpassIndex, colorAttachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pResolveAttachments[colorAttachmentIndex].layout);
                    }
                }

                if (pCreateInfo->pSubpasses[subpassIndex].pDepthStencilAttachment != NULL)
                {
                    skipCall |= validate_ranged_enum(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pDepthStencilAttachment->layout", ParameterName::IndexVector{ subpassIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pDepthStencilAttachment->layout);
                }

                skipCall |= validate_array(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].preserveAttachmentCount", ParameterName::IndexVector{ subpassIndex }), ParameterName("pCreateInfo->pSubpasses[%i].pPreserveAttachments", ParameterName::IndexVector{ subpassIndex }), pCreateInfo->pSubpasses[subpassIndex].preserveAttachmentCount, pCreateInfo->pSubpasses[subpassIndex].pPreserveAttachments, false, true);
            }
        }

        skipCall |= validate_array(report_data, "vkCreateRenderPass", "pCreateInfo->dependencyCount", "pCreateInfo->pDependencies", pCreateInfo->dependencyCount, pCreateInfo->pDependencies, false, true);

        if (pCreateInfo->pDependencies != NULL)
        {
            for (uint32_t dependencyIndex = 0; dependencyIndex < pCreateInfo->dependencyCount; ++dependencyIndex)
            {
                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].srcStageMask", ParameterName::IndexVector{ dependencyIndex }), "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pCreateInfo->pDependencies[dependencyIndex].srcStageMask, true);

                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].dstStageMask", ParameterName::IndexVector{ dependencyIndex }), "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pCreateInfo->pDependencies[dependencyIndex].dstStageMask, true);

                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].srcAccessMask", ParameterName::IndexVector{ dependencyIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pCreateInfo->pDependencies[dependencyIndex].srcAccessMask, false);

                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].dstAccessMask", ParameterName::IndexVector{ dependencyIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pCreateInfo->pDependencies[dependencyIndex].dstAccessMask, false);

                skipCall |= validate_flags(report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].dependencyFlags", ParameterName::IndexVector{ dependencyIndex }), "VkDependencyFlagBits", AllVkDependencyFlagBits, pCreateInfo->pDependencies[dependencyIndex].dependencyFlags, false);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateRenderPass", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateRenderPass", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateRenderPass", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateRenderPass", "pRenderPass", pRenderPass);

    return skipCall;
}

static bool parameter_validation_vkDestroyRenderPass(
    debug_report_data*                          report_data,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(renderPass);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyRenderPass", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyRenderPass", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyRenderPass", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkGetRenderAreaGranularity(
    debug_report_data*                          report_data,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetRenderAreaGranularity", "renderPass", renderPass);

    skipCall |= validate_required_pointer(report_data, "vkGetRenderAreaGranularity", "pGranularity", pGranularity);

    return skipCall;
}

static bool parameter_validation_vkCreateCommandPool(
    debug_report_data*                          report_data,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateCommandPool", "pCreateInfo", "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateCommandPool", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateCommandPool", "pCreateInfo->flags", "VkCommandPoolCreateFlagBits", AllVkCommandPoolCreateFlagBits, pCreateInfo->flags, false);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkCreateCommandPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateCommandPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkCreateCommandPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateCommandPool", "pCommandPool", pCommandPool);

    return skipCall;
}

static bool parameter_validation_vkDestroyCommandPool(
    debug_report_data*                          report_data,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(commandPool);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(report_data, "vkDestroyCommandPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyCommandPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation));

        skipCall |= validate_required_pointer(report_data, "vkDestroyCommandPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree));
    }

    return skipCall;
}

static bool parameter_validation_vkResetCommandPool(
    debug_report_data*                          report_data,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkResetCommandPool", "commandPool", commandPool);

    skipCall |= validate_flags(report_data, "vkResetCommandPool", "flags", "VkCommandPoolResetFlagBits", AllVkCommandPoolResetFlagBits, flags, false);

    return skipCall;
}

static bool parameter_validation_vkAllocateCommandBuffers(
    debug_report_data*                          report_data,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkAllocateCommandBuffers", "pAllocateInfo", "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO", pAllocateInfo, VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, true);

    if (pAllocateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkAllocateCommandBuffers", "pAllocateInfo->pNext", NULL, pAllocateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkAllocateCommandBuffers", "pAllocateInfo->commandPool", pAllocateInfo->commandPool);

        skipCall |= validate_ranged_enum(report_data, "vkAllocateCommandBuffers", "pAllocateInfo->level", "VkCommandBufferLevel", VK_COMMAND_BUFFER_LEVEL_BEGIN_RANGE, VK_COMMAND_BUFFER_LEVEL_END_RANGE, pAllocateInfo->level);
    }

    if (pAllocateInfo != NULL) {
        skipCall |= validate_array(report_data, "vkAllocateCommandBuffers", "pAllocateInfo->commandBufferCount", "pCommandBuffers", pAllocateInfo->commandBufferCount, pCommandBuffers, true, true);
    }

    return skipCall;
}

static bool parameter_validation_vkFreeCommandBuffers(
    debug_report_data*                          report_data,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers)
{
    UNUSED_PARAMETER(pCommandBuffers);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkFreeCommandBuffers", "commandPool", commandPool);

    return skipCall;
}

static bool parameter_validation_vkBeginCommandBuffer(
    debug_report_data*                          report_data,
    const VkCommandBufferBeginInfo*             pBeginInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkBeginCommandBuffer", "pBeginInfo", "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO", pBeginInfo, VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, true);

    if (pBeginInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkBeginCommandBuffer", "pBeginInfo->pNext", "VkDeviceGroupCommandBufferBeginInfoKHX", pBeginInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkBeginCommandBuffer", "pBeginInfo->flags", "VkCommandBufferUsageFlagBits", AllVkCommandBufferUsageFlagBits, pBeginInfo->flags, false);
    }

    return skipCall;
}

static bool parameter_validation_vkResetCommandBuffer(
    debug_report_data*                          report_data,
    VkCommandBufferResetFlags                   flags)
{
    bool skipCall = false;

    skipCall |= validate_flags(report_data, "vkResetCommandBuffer", "flags", "VkCommandBufferResetFlagBits", AllVkCommandBufferResetFlagBits, flags, false);

    return skipCall;
}

static bool parameter_validation_vkCmdBindPipeline(
    debug_report_data*                          report_data,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkCmdBindPipeline", "pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pipelineBindPoint);

    skipCall |= validate_required_handle(report_data, "vkCmdBindPipeline", "pipeline", pipeline);

    return skipCall;
}

static bool parameter_validation_vkCmdSetScissor(
    debug_report_data*                          report_data,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const VkRect2D*                             pScissors)
{
    UNUSED_PARAMETER(firstScissor);

    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkCmdSetScissor", "scissorCount", "pScissors", scissorCount, pScissors, true, true);

    return skipCall;
}

static bool parameter_validation_vkCmdSetBlendConstants(
    debug_report_data*                          report_data,
    const float                                 blendConstants[4])
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkCmdSetBlendConstants", "blendConstants", blendConstants);

    return skipCall;
}

static bool parameter_validation_vkCmdSetStencilCompareMask(
    debug_report_data*                          report_data,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    UNUSED_PARAMETER(compareMask);

    bool skipCall = false;

    skipCall |= validate_flags(report_data, "vkCmdSetStencilCompareMask", "faceMask", "VkStencilFaceFlagBits", AllVkStencilFaceFlagBits, faceMask, true);

    return skipCall;
}

static bool parameter_validation_vkCmdSetStencilWriteMask(
    debug_report_data*                          report_data,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    UNUSED_PARAMETER(writeMask);

    bool skipCall = false;

    skipCall |= validate_flags(report_data, "vkCmdSetStencilWriteMask", "faceMask", "VkStencilFaceFlagBits", AllVkStencilFaceFlagBits, faceMask, true);

    return skipCall;
}

static bool parameter_validation_vkCmdSetStencilReference(
    debug_report_data*                          report_data,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    UNUSED_PARAMETER(reference);

    bool skipCall = false;

    skipCall |= validate_flags(report_data, "vkCmdSetStencilReference", "faceMask", "VkStencilFaceFlagBits", AllVkStencilFaceFlagBits, faceMask, true);

    return skipCall;
}

static bool parameter_validation_vkCmdBindDescriptorSets(
    debug_report_data*                          report_data,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets)
{
    UNUSED_PARAMETER(firstSet);

    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkCmdBindDescriptorSets", "pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pipelineBindPoint);

    skipCall |= validate_required_handle(report_data, "vkCmdBindDescriptorSets", "layout", layout);

    skipCall |= validate_handle_array(report_data, "vkCmdBindDescriptorSets", "descriptorSetCount", "pDescriptorSets", descriptorSetCount, pDescriptorSets, true, true);

    skipCall |= validate_array(report_data, "vkCmdBindDescriptorSets", "dynamicOffsetCount", "pDynamicOffsets", dynamicOffsetCount, pDynamicOffsets, false, true);

    return skipCall;
}

static bool parameter_validation_vkCmdBindIndexBuffer(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    UNUSED_PARAMETER(offset);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdBindIndexBuffer", "buffer", buffer);

    skipCall |= validate_ranged_enum(report_data, "vkCmdBindIndexBuffer", "indexType", "VkIndexType", VK_INDEX_TYPE_BEGIN_RANGE, VK_INDEX_TYPE_END_RANGE, indexType);

    return skipCall;
}

static bool parameter_validation_vkCmdBindVertexBuffers(
    debug_report_data*                          report_data,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets)
{
    UNUSED_PARAMETER(firstBinding);

    bool skipCall = false;

    skipCall |= validate_handle_array(report_data, "vkCmdBindVertexBuffers", "bindingCount", "pBuffers", bindingCount, pBuffers, true, true);

    skipCall |= validate_array(report_data, "vkCmdBindVertexBuffers", "bindingCount", "pOffsets", bindingCount, pOffsets, true, true);

    return skipCall;
}

static bool parameter_validation_vkCmdDrawIndirect(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(drawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdDrawIndirect", "buffer", buffer);

    return skipCall;
}

static bool parameter_validation_vkCmdDrawIndexedIndirect(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(drawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdDrawIndexedIndirect", "buffer", buffer);

    return skipCall;
}

static bool parameter_validation_vkCmdDispatchIndirect(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset)
{
    UNUSED_PARAMETER(offset);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdDispatchIndirect", "buffer", buffer);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyBuffer(
    debug_report_data*                          report_data,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdCopyBuffer", "srcBuffer", srcBuffer);

    skipCall |= validate_required_handle(report_data, "vkCmdCopyBuffer", "dstBuffer", dstBuffer);

    skipCall |= validate_array(report_data, "vkCmdCopyBuffer", "regionCount", "pRegions", regionCount, pRegions, true, true);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyImage(
    debug_report_data*                          report_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdCopyImage", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdCopyImage", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout);

    skipCall |= validate_required_handle(report_data, "vkCmdCopyImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdCopyImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout);

    skipCall |= validate_array(report_data, "vkCmdCopyImage", "regionCount", "pRegions", regionCount, pRegions, true, true);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdCopyImage", ParameterName("pRegions[%i].srcSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].srcSubresource.aspectMask, true);

            skipCall |= validate_flags(report_data, "vkCmdCopyImage", ParameterName("pRegions[%i].dstSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].dstSubresource.aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdBlitImage(
    debug_report_data*                          report_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdBlitImage", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdBlitImage", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout);

    skipCall |= validate_required_handle(report_data, "vkCmdBlitImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdBlitImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout);

    skipCall |= validate_array(report_data, "vkCmdBlitImage", "regionCount", "pRegions", regionCount, pRegions, true, true);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdBlitImage", ParameterName("pRegions[%i].srcSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].srcSubresource.aspectMask, true);

            skipCall |= validate_flags(report_data, "vkCmdBlitImage", ParameterName("pRegions[%i].dstSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].dstSubresource.aspectMask, true);
        }
    }

    skipCall |= validate_ranged_enum(report_data, "vkCmdBlitImage", "filter", "VkFilter", VK_FILTER_BEGIN_RANGE, VK_FILTER_END_RANGE, filter);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyBufferToImage(
    debug_report_data*                          report_data,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdCopyBufferToImage", "srcBuffer", srcBuffer);

    skipCall |= validate_required_handle(report_data, "vkCmdCopyBufferToImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdCopyBufferToImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout);

    skipCall |= validate_array(report_data, "vkCmdCopyBufferToImage", "regionCount", "pRegions", regionCount, pRegions, true, true);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdCopyBufferToImage", ParameterName("pRegions[%i].imageSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].imageSubresource.aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdCopyImageToBuffer(
    debug_report_data*                          report_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdCopyImageToBuffer", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdCopyImageToBuffer", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout);

    skipCall |= validate_required_handle(report_data, "vkCmdCopyImageToBuffer", "dstBuffer", dstBuffer);

    skipCall |= validate_array(report_data, "vkCmdCopyImageToBuffer", "regionCount", "pRegions", regionCount, pRegions, true, true);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdCopyImageToBuffer", ParameterName("pRegions[%i].imageSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].imageSubresource.aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdUpdateBuffer(
    debug_report_data*                          report_data,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData)
{
    UNUSED_PARAMETER(dstOffset);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdUpdateBuffer", "dstBuffer", dstBuffer);

    skipCall |= validate_array(report_data, "vkCmdUpdateBuffer", "dataSize", "pData", dataSize, pData, true, true);

    return skipCall;
}

static bool parameter_validation_vkCmdFillBuffer(
    debug_report_data*                          report_data,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    UNUSED_PARAMETER(dstOffset);
    UNUSED_PARAMETER(size);
    UNUSED_PARAMETER(data);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdFillBuffer", "dstBuffer", dstBuffer);

    return skipCall;
}

static bool parameter_validation_vkCmdClearColorImage(
    debug_report_data*                          report_data,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdClearColorImage", "image", image);

    skipCall |= validate_ranged_enum(report_data, "vkCmdClearColorImage", "imageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, imageLayout);

    skipCall |= validate_required_pointer(report_data, "vkCmdClearColorImage", "pColor", pColor);

    skipCall |= validate_array(report_data, "vkCmdClearColorImage", "rangeCount", "pRanges", rangeCount, pRanges, true, true);

    if (pRanges != NULL)
    {
        for (uint32_t rangeIndex = 0; rangeIndex < rangeCount; ++rangeIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdClearColorImage", ParameterName("pRanges[%i].aspectMask", ParameterName::IndexVector{ rangeIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRanges[rangeIndex].aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdClearDepthStencilImage(
    debug_report_data*                          report_data,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdClearDepthStencilImage", "image", image);

    skipCall |= validate_ranged_enum(report_data, "vkCmdClearDepthStencilImage", "imageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, imageLayout);

    skipCall |= validate_required_pointer(report_data, "vkCmdClearDepthStencilImage", "pDepthStencil", pDepthStencil);

    skipCall |= validate_array(report_data, "vkCmdClearDepthStencilImage", "rangeCount", "pRanges", rangeCount, pRanges, true, true);

    if (pRanges != NULL)
    {
        for (uint32_t rangeIndex = 0; rangeIndex < rangeCount; ++rangeIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdClearDepthStencilImage", ParameterName("pRanges[%i].aspectMask", ParameterName::IndexVector{ rangeIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRanges[rangeIndex].aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdClearAttachments(
    debug_report_data*                          report_data,
    uint32_t                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    uint32_t                                    rectCount,
    const VkClearRect*                          pRects)
{
    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkCmdClearAttachments", "attachmentCount", "pAttachments", attachmentCount, pAttachments, true, true);

    if (pAttachments != NULL)
    {
        for (uint32_t attachmentIndex = 0; attachmentIndex < attachmentCount; ++attachmentIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdClearAttachments", ParameterName("pAttachments[%i].aspectMask", ParameterName::IndexVector{ attachmentIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pAttachments[attachmentIndex].aspectMask, true);
        }
    }

    skipCall |= validate_array(report_data, "vkCmdClearAttachments", "rectCount", "pRects", rectCount, pRects, true, true);

    return skipCall;
}

static bool parameter_validation_vkCmdResolveImage(
    debug_report_data*                          report_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdResolveImage", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdResolveImage", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout);

    skipCall |= validate_required_handle(report_data, "vkCmdResolveImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(report_data, "vkCmdResolveImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout);

    skipCall |= validate_array(report_data, "vkCmdResolveImage", "regionCount", "pRegions", regionCount, pRegions, true, true);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(report_data, "vkCmdResolveImage", ParameterName("pRegions[%i].srcSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].srcSubresource.aspectMask, true);

            skipCall |= validate_flags(report_data, "vkCmdResolveImage", ParameterName("pRegions[%i].dstSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].dstSubresource.aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdSetEvent(
    debug_report_data*                          report_data,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdSetEvent", "event", event);

    skipCall |= validate_flags(report_data, "vkCmdSetEvent", "stageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, stageMask, true);

    return skipCall;
}

static bool parameter_validation_vkCmdResetEvent(
    debug_report_data*                          report_data,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdResetEvent", "event", event);

    skipCall |= validate_flags(report_data, "vkCmdResetEvent", "stageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, stageMask, true);

    return skipCall;
}

static bool parameter_validation_vkCmdWaitEvents(
    debug_report_data*                          report_data,
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
    bool skipCall = false;

    skipCall |= validate_handle_array(report_data, "vkCmdWaitEvents", "eventCount", "pEvents", eventCount, pEvents, true, true);

    skipCall |= validate_flags(report_data, "vkCmdWaitEvents", "srcStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, srcStageMask, true);

    skipCall |= validate_flags(report_data, "vkCmdWaitEvents", "dstStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, dstStageMask, true);

    skipCall |= validate_struct_type_array(report_data, "vkCmdWaitEvents", "memoryBarrierCount", "pMemoryBarriers", "VK_STRUCTURE_TYPE_MEMORY_BARRIER", memoryBarrierCount, pMemoryBarriers, VK_STRUCTURE_TYPE_MEMORY_BARRIER, false, true);

    if (pMemoryBarriers != NULL)
    {
        for (uint32_t memoryBarrierIndex = 0; memoryBarrierIndex < memoryBarrierCount; ++memoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCmdWaitEvents", ParameterName("pMemoryBarriers[%i].pNext", ParameterName::IndexVector{ memoryBarrierIndex }), NULL, pMemoryBarriers[memoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].srcAccessMask, false);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].dstAccessMask, false);
        }
    }

    skipCall |= validate_struct_type_array(report_data, "vkCmdWaitEvents", "bufferMemoryBarrierCount", "pBufferMemoryBarriers", "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER", bufferMemoryBarrierCount, pBufferMemoryBarriers, VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, false, true);

    if (pBufferMemoryBarriers != NULL)
    {
        for (uint32_t bufferMemoryBarrierIndex = 0; bufferMemoryBarrierIndex < bufferMemoryBarrierCount; ++bufferMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].pNext", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), NULL, pBufferMemoryBarriers[bufferMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].srcAccessMask, false);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].dstAccessMask, false);

            skipCall |= validate_required_handle(report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].buffer", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), pBufferMemoryBarriers[bufferMemoryBarrierIndex].buffer);
        }
    }

    skipCall |= validate_struct_type_array(report_data, "vkCmdWaitEvents", "imageMemoryBarrierCount", "pImageMemoryBarriers", "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER", imageMemoryBarrierCount, pImageMemoryBarriers, VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, false, true);

    if (pImageMemoryBarriers != NULL)
    {
        for (uint32_t imageMemoryBarrierIndex = 0; imageMemoryBarrierIndex < imageMemoryBarrierCount; ++imageMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].pNext", ParameterName::IndexVector{ imageMemoryBarrierIndex }), NULL, pImageMemoryBarriers[imageMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].srcAccessMask, false);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].dstAccessMask, false);

            skipCall |= validate_ranged_enum(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].oldLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].oldLayout);

            skipCall |= validate_ranged_enum(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].newLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].newLayout);

            skipCall |= validate_required_handle(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].image", ParameterName::IndexVector{ imageMemoryBarrierIndex }), pImageMemoryBarriers[imageMemoryBarrierIndex].image);

            skipCall |= validate_flags(report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].subresourceRange.aspectMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].subresourceRange.aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdPipelineBarrier(
    debug_report_data*                          report_data,
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
    bool skipCall = false;

    skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", "srcStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, srcStageMask, true);

    skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", "dstStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, dstStageMask, true);

    skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", "dependencyFlags", "VkDependencyFlagBits", AllVkDependencyFlagBits, dependencyFlags, false);

    skipCall |= validate_struct_type_array(report_data, "vkCmdPipelineBarrier", "memoryBarrierCount", "pMemoryBarriers", "VK_STRUCTURE_TYPE_MEMORY_BARRIER", memoryBarrierCount, pMemoryBarriers, VK_STRUCTURE_TYPE_MEMORY_BARRIER, false, true);

    if (pMemoryBarriers != NULL)
    {
        for (uint32_t memoryBarrierIndex = 0; memoryBarrierIndex < memoryBarrierCount; ++memoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCmdPipelineBarrier", ParameterName("pMemoryBarriers[%i].pNext", ParameterName::IndexVector{ memoryBarrierIndex }), NULL, pMemoryBarriers[memoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].srcAccessMask, false);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].dstAccessMask, false);
        }
    }

    skipCall |= validate_struct_type_array(report_data, "vkCmdPipelineBarrier", "bufferMemoryBarrierCount", "pBufferMemoryBarriers", "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER", bufferMemoryBarrierCount, pBufferMemoryBarriers, VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, false, true);

    if (pBufferMemoryBarriers != NULL)
    {
        for (uint32_t bufferMemoryBarrierIndex = 0; bufferMemoryBarrierIndex < bufferMemoryBarrierCount; ++bufferMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].pNext", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), NULL, pBufferMemoryBarriers[bufferMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].srcAccessMask, false);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].dstAccessMask, false);

            skipCall |= validate_required_handle(report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].buffer", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), pBufferMemoryBarriers[bufferMemoryBarrierIndex].buffer);
        }
    }

    skipCall |= validate_struct_type_array(report_data, "vkCmdPipelineBarrier", "imageMemoryBarrierCount", "pImageMemoryBarriers", "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER", imageMemoryBarrierCount, pImageMemoryBarriers, VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, false, true);

    if (pImageMemoryBarriers != NULL)
    {
        for (uint32_t imageMemoryBarrierIndex = 0; imageMemoryBarrierIndex < imageMemoryBarrierCount; ++imageMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].pNext", ParameterName::IndexVector{ imageMemoryBarrierIndex }), NULL, pImageMemoryBarriers[imageMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].srcAccessMask, false);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].dstAccessMask, false);

            skipCall |= validate_ranged_enum(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].oldLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].oldLayout);

            skipCall |= validate_ranged_enum(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].newLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].newLayout);

            skipCall |= validate_required_handle(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].image", ParameterName::IndexVector{ imageMemoryBarrierIndex }), pImageMemoryBarriers[imageMemoryBarrierIndex].image);

            skipCall |= validate_flags(report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].subresourceRange.aspectMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].subresourceRange.aspectMask, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdBeginQuery(
    debug_report_data*                          report_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    UNUSED_PARAMETER(query);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdBeginQuery", "queryPool", queryPool);

    skipCall |= validate_flags(report_data, "vkCmdBeginQuery", "flags", "VkQueryControlFlagBits", AllVkQueryControlFlagBits, flags, false);

    return skipCall;
}

static bool parameter_validation_vkCmdEndQuery(
    debug_report_data*                          report_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    UNUSED_PARAMETER(query);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdEndQuery", "queryPool", queryPool);

    return skipCall;
}

static bool parameter_validation_vkCmdResetQueryPool(
    debug_report_data*                          report_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    UNUSED_PARAMETER(firstQuery);
    UNUSED_PARAMETER(queryCount);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdResetQueryPool", "queryPool", queryPool);

    return skipCall;
}

static bool parameter_validation_vkCmdWriteTimestamp(
    debug_report_data*                          report_data,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    UNUSED_PARAMETER(pipelineStage);
    UNUSED_PARAMETER(query);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdWriteTimestamp", "queryPool", queryPool);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyQueryPoolResults(
    debug_report_data*                          report_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    UNUSED_PARAMETER(firstQuery);
    UNUSED_PARAMETER(queryCount);
    UNUSED_PARAMETER(dstOffset);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdCopyQueryPoolResults", "queryPool", queryPool);

    skipCall |= validate_required_handle(report_data, "vkCmdCopyQueryPoolResults", "dstBuffer", dstBuffer);

    skipCall |= validate_flags(report_data, "vkCmdCopyQueryPoolResults", "flags", "VkQueryResultFlagBits", AllVkQueryResultFlagBits, flags, false);

    return skipCall;
}

static bool parameter_validation_vkCmdPushConstants(
    debug_report_data*                          report_data,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues)
{
    UNUSED_PARAMETER(offset);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdPushConstants", "layout", layout);

    skipCall |= validate_flags(report_data, "vkCmdPushConstants", "stageFlags", "VkShaderStageFlagBits", AllVkShaderStageFlagBits, stageFlags, true);

    skipCall |= validate_array(report_data, "vkCmdPushConstants", "size", "pValues", size, pValues, true, true);

    return skipCall;
}

static bool parameter_validation_vkCmdBeginRenderPass(
    debug_report_data*                          report_data,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCmdBeginRenderPass", "pRenderPassBegin", "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO", pRenderPassBegin, VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO, true);

    if (pRenderPassBegin != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkCmdBeginRenderPass", "pRenderPassBegin->pNext", "VkDeviceGroupRenderPassBeginInfoKHX", pRenderPassBegin->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkCmdBeginRenderPass", "pRenderPassBegin->renderPass", pRenderPassBegin->renderPass);

        skipCall |= validate_required_handle(report_data, "vkCmdBeginRenderPass", "pRenderPassBegin->framebuffer", pRenderPassBegin->framebuffer);
    }

    skipCall |= validate_ranged_enum(report_data, "vkCmdBeginRenderPass", "contents", "VkSubpassContents", VK_SUBPASS_CONTENTS_BEGIN_RANGE, VK_SUBPASS_CONTENTS_END_RANGE, contents);

    return skipCall;
}

static bool parameter_validation_vkCmdNextSubpass(
    debug_report_data*                          report_data,
    VkSubpassContents                           contents)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkCmdNextSubpass", "contents", "VkSubpassContents", VK_SUBPASS_CONTENTS_BEGIN_RANGE, VK_SUBPASS_CONTENTS_END_RANGE, contents);

    return skipCall;
}

static bool parameter_validation_vkCmdExecuteCommands(
    debug_report_data*                          report_data,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers)
{
    bool skipCall = false;

    skipCall |= validate_handle_array(report_data, "vkCmdExecuteCommands", "commandBufferCount", "pCommandBuffers", commandBufferCount, pCommandBuffers, true, true);

    return skipCall;
}


const VkCompositeAlphaFlagsKHR AllVkCompositeAlphaFlagBitsKHR = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR|VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
const VkSurfaceTransformFlagsKHR AllVkSurfaceTransformFlagBitsKHR = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;

static bool parameter_validation_vkGetPhysicalDeviceSurfaceSupportKHR(
    debug_report_data*                          report_data,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported)
{
    UNUSED_PARAMETER(queueFamilyIndex);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPhysicalDeviceSurfaceSupportKHR", "surface", surface);

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceSurfaceSupportKHR", "pSupported", pSupported);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    debug_report_data*                          report_data,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", "surface", surface);

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", "pSurfaceCapabilities", pSurfaceCapabilities);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfaceFormatsKHR(
    debug_report_data*                          report_data,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPhysicalDeviceSurfaceFormatsKHR", "surface", surface);

    skipCall |= validate_array(report_data, "vkGetPhysicalDeviceSurfaceFormatsKHR", "pSurfaceFormatCount", "pSurfaceFormats", pSurfaceFormatCount, pSurfaceFormats, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfacePresentModesKHR(
    debug_report_data*                          report_data,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPhysicalDeviceSurfacePresentModesKHR", "surface", surface);

    skipCall |= validate_array(report_data, "vkGetPhysicalDeviceSurfacePresentModesKHR", "pPresentModeCount", "pPresentModes", pPresentModeCount, pPresentModes, true, false, false);

    return skipCall;
}


const VkSwapchainCreateFlagsKHR AllVkSwapchainCreateFlagBitsKHR = VK_SWAPCHAIN_CREATE_BIND_SFR_BIT_KHX;

static bool parameter_validation_vkCreateSwapchainKHR(
    debug_report_data*                          report_data,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateSwapchainKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkCreateSwapchainKHR", "pCreateInfo->pNext", "VkDeviceGroupSwapchainCreateInfoKHX", pCreateInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkCreateSwapchainKHR", "pCreateInfo->flags", "VkSwapchainCreateFlagBitsKHR", AllVkSwapchainCreateFlagBitsKHR, pCreateInfo->flags, false);

        skipCall |= validate_required_handle(report_data, "vkCreateSwapchainKHR", "pCreateInfo->surface", pCreateInfo->surface);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageFormat", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->imageFormat);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageColorSpace", "VkColorSpaceKHR", VK_COLOR_SPACE_BEGIN_RANGE_KHR, VK_COLOR_SPACE_END_RANGE_KHR, pCreateInfo->imageColorSpace);

        skipCall |= validate_flags(report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageUsage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pCreateInfo->imageUsage, true);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageSharingMode", "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfo->imageSharingMode);

        skipCall |= validate_ranged_enum(report_data, "vkCreateSwapchainKHR", "pCreateInfo->presentMode", "VkPresentModeKHR", VK_PRESENT_MODE_BEGIN_RANGE_KHR, VK_PRESENT_MODE_END_RANGE_KHR, pCreateInfo->presentMode);

        skipCall |= validate_bool32(report_data, "vkCreateSwapchainKHR", "pCreateInfo->clipped", pCreateInfo->clipped);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateSwapchainKHR", "pSwapchain", pSwapchain);

    return skipCall;
}

static bool parameter_validation_vkGetSwapchainImagesKHR(
    debug_report_data*                          report_data,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetSwapchainImagesKHR", "swapchain", swapchain);

    skipCall |= validate_array(report_data, "vkGetSwapchainImagesKHR", "pSwapchainImageCount", "pSwapchainImages", pSwapchainImageCount, pSwapchainImages, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkAcquireNextImageKHR(
    debug_report_data*                          report_data,
    VkSwapchainKHR                              swapchain,
    uint64_t                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    uint32_t*                                   pImageIndex)
{
    UNUSED_PARAMETER(timeout);
    UNUSED_PARAMETER(semaphore);
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkAcquireNextImageKHR", "swapchain", swapchain);

    skipCall |= validate_required_pointer(report_data, "vkAcquireNextImageKHR", "pImageIndex", pImageIndex);

    return skipCall;
}

static bool parameter_validation_vkQueuePresentKHR(
    debug_report_data*                          report_data,
    const VkPresentInfoKHR*                     pPresentInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkQueuePresentKHR", "pPresentInfo", "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR", pPresentInfo, VK_STRUCTURE_TYPE_PRESENT_INFO_KHR, true);

    if (pPresentInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkQueuePresentKHR", "pPresentInfo->pNext", "VkDeviceGroupPresentInfoKHX", pPresentInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_handle_array(report_data, "vkQueuePresentKHR", "pPresentInfo->swapchainCount", "pPresentInfo->pSwapchains", pPresentInfo->swapchainCount, pPresentInfo->pSwapchains, true, true);

        skipCall |= validate_array(report_data, "vkQueuePresentKHR", "pPresentInfo->swapchainCount", "pPresentInfo->pImageIndices", pPresentInfo->swapchainCount, pPresentInfo->pImageIndices, true, true);

        skipCall |= validate_array(report_data, "vkQueuePresentKHR", "pPresentInfo->swapchainCount", "pPresentInfo->pResults", pPresentInfo->swapchainCount, pPresentInfo->pResults, true, false);
    }

    return skipCall;
}


const VkDisplayPlaneAlphaFlagsKHR AllVkDisplayPlaneAlphaFlagBitsKHR = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;

static bool parameter_validation_vkGetPhysicalDeviceDisplayPropertiesKHR(
    debug_report_data*                          report_data,
    uint32_t*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkGetPhysicalDeviceDisplayPropertiesKHR", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    debug_report_data*                          report_data,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetDisplayPlaneSupportedDisplaysKHR(
    debug_report_data*                          report_data,
    uint32_t                                    planeIndex,
    uint32_t*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays)
{
    UNUSED_PARAMETER(planeIndex);

    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkGetDisplayPlaneSupportedDisplaysKHR", "pDisplayCount", "pDisplays", pDisplayCount, pDisplays, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetDisplayModePropertiesKHR(
    debug_report_data*                          report_data,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetDisplayModePropertiesKHR", "display", display);

    skipCall |= validate_array(report_data, "vkGetDisplayModePropertiesKHR", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkCreateDisplayModeKHR(
    debug_report_data*                          report_data,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCreateDisplayModeKHR", "display", display);

    skipCall |= validate_struct_type(report_data, "vkCreateDisplayModeKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateDisplayModeKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateDisplayModeKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateDisplayModeKHR", "pMode", pMode);

    return skipCall;
}

static bool parameter_validation_vkGetDisplayPlaneCapabilitiesKHR(
    debug_report_data*                          report_data,
    VkDisplayModeKHR                            mode,
    uint32_t                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities)
{
    UNUSED_PARAMETER(planeIndex);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetDisplayPlaneCapabilitiesKHR", "mode", mode);

    skipCall |= validate_required_pointer(report_data, "vkGetDisplayPlaneCapabilitiesKHR", "pCapabilities", pCapabilities);

    return skipCall;
}

static bool parameter_validation_vkCreateDisplayPlaneSurfaceKHR(
    debug_report_data*                          report_data,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_handle(report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->displayMode", pCreateInfo->displayMode);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateDisplayPlaneSurfaceKHR", "pSurface", pSurface);

    return skipCall;
}



static bool parameter_validation_vkCreateSharedSwapchainsKHR(
    debug_report_data*                          report_data,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkCreateSharedSwapchainsKHR", "swapchainCount", "pCreateInfos", swapchainCount, pCreateInfos, true, true);

    skipCall |= validate_array(report_data, "vkCreateSharedSwapchainsKHR", "swapchainCount", "pSwapchains", swapchainCount, pSwapchains, true, true);

    return skipCall;
}


#ifdef VK_USE_PLATFORM_XLIB_KHR

static bool parameter_validation_vkCreateXlibSurfaceKHR(
    debug_report_data*                          report_data,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateXlibSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateXlibSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateXlibSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateXlibSurfaceKHR", "pSurface", pSurface);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    debug_report_data*                          report_data,
    uint32_t                                    queueFamilyIndex,
    Display*                                    dpy,
    VisualID                                    visualID)
{
    UNUSED_PARAMETER(queueFamilyIndex);
    UNUSED_PARAMETER(visualID);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceXlibPresentationSupportKHR", "dpy", dpy);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_XLIB_KHR */

#ifdef VK_USE_PLATFORM_XCB_KHR

static bool parameter_validation_vkCreateXcbSurfaceKHR(
    debug_report_data*                          report_data,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateXcbSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateXcbSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateXcbSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateXcbSurfaceKHR", "pSurface", pSurface);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    debug_report_data*                          report_data,
    uint32_t                                    queueFamilyIndex,
    xcb_connection_t*                           connection,
    xcb_visualid_t                              visual_id)
{
    UNUSED_PARAMETER(queueFamilyIndex);
    UNUSED_PARAMETER(visual_id);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceXcbPresentationSupportKHR", "connection", connection);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_XCB_KHR */

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

static bool parameter_validation_vkCreateWaylandSurfaceKHR(
    debug_report_data*                          report_data,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateWaylandSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateWaylandSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateWaylandSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateWaylandSurfaceKHR", "pSurface", pSurface);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    debug_report_data*                          report_data,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display)
{
    UNUSED_PARAMETER(queueFamilyIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceWaylandPresentationSupportKHR", "display", display);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_WAYLAND_KHR */

#ifdef VK_USE_PLATFORM_MIR_KHR

static bool parameter_validation_vkCreateMirSurfaceKHR(
    debug_report_data*                          report_data,
    const VkMirSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateMirSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateMirSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateMirSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateMirSurfaceKHR", "pSurface", pSurface);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceMirPresentationSupportKHR(
    debug_report_data*                          report_data,
    uint32_t                                    queueFamilyIndex,
    MirConnection*                              connection)
{
    UNUSED_PARAMETER(queueFamilyIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceMirPresentationSupportKHR", "connection", connection);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_MIR_KHR */

#ifdef VK_USE_PLATFORM_ANDROID_KHR

static bool parameter_validation_vkCreateAndroidSurfaceKHR(
    debug_report_data*                          report_data,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateAndroidSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateAndroidSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateAndroidSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateAndroidSurfaceKHR", "pSurface", pSurface);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_ANDROID_KHR */

#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkCreateWin32SurfaceKHR(
    debug_report_data*                          report_data,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateWin32SurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateWin32SurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateWin32SurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateWin32SurfaceKHR", "pSurface", pSurface);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_WIN32_KHR */





static bool parameter_validation_vkGetPhysicalDeviceFeatures2KHR(
    debug_report_data*                          report_data,
    VkPhysicalDeviceFeatures2KHR*               pFeatures)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceFeatures2KHR", "pFeatures", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR", pFeatures, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceProperties2KHR(
    debug_report_data*                          report_data,
    VkPhysicalDeviceProperties2KHR*             pProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceProperties2KHR", "pProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR", pProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceFormatProperties2KHR(
    debug_report_data*                          report_data,
    VkFormat                                    format,
    VkFormatProperties2KHR*                     pFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceFormatProperties2KHR", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format);

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceFormatProperties2KHR", "pFormatProperties", "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR", pFormatProperties, VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceImageFormatProperties2KHR(
    debug_report_data*                          report_data,
    const VkPhysicalDeviceImageFormatInfo2KHR*  pImageFormatInfo,
    VkImageFormatProperties2KHR*                pImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR", pImageFormatInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR, true);

    if (pImageFormatInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->pNext", "VkPhysicalDeviceExternalImageFormatInfoKHX", pImageFormatInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pImageFormatInfo->format);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pImageFormatInfo->type);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pImageFormatInfo->tiling);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pImageFormatInfo->usage, true);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, pImageFormatInfo->flags, false);
    }

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatProperties", "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR", pImageFormatProperties, VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    debug_report_data*                          report_data,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2KHR*                pQueueFamilyProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkGetPhysicalDeviceQueueFamilyProperties2KHR", "pQueueFamilyPropertyCount", "pQueueFamilyProperties", "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR", pQueueFamilyPropertyCount, pQueueFamilyProperties, VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR, true, false, false);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceMemoryProperties2KHR(
    debug_report_data*                          report_data,
    VkPhysicalDeviceMemoryProperties2KHR*       pMemoryProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceMemoryProperties2KHR", "pMemoryProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR", pMemoryProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    debug_report_data*                          report_data,
    const VkPhysicalDeviceSparseImageFormatInfo2KHR* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2KHR*          pProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR", pFormatInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR, true);

    if (pFormatInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->pNext", NULL, pFormatInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pFormatInfo->format);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pFormatInfo->type);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pFormatInfo->usage, true);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pFormatInfo->tiling);
    }

    skipCall |= validate_struct_type_array(report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pPropertyCount", "pProperties", "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR", pPropertyCount, pProperties, VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR, true, false, false);

    return skipCall;
}






static bool parameter_validation_vkTrimCommandPoolKHR(
    debug_report_data*                          report_data,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlagsKHR                   flags)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkTrimCommandPoolKHR", "commandPool", commandPool);

    skipCall |= validate_reserved_flags(report_data, "vkTrimCommandPoolKHR", "flags", flags);

    return skipCall;
}



static bool parameter_validation_vkCmdPushDescriptorSetKHR(
    debug_report_data*                          report_data,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites)
{
    UNUSED_PARAMETER(set);

    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkCmdPushDescriptorSetKHR", "pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pipelineBindPoint);

    skipCall |= validate_required_handle(report_data, "vkCmdPushDescriptorSetKHR", "layout", layout);

    skipCall |= validate_array(report_data, "vkCmdPushDescriptorSetKHR", "descriptorWriteCount", "pDescriptorWrites", descriptorWriteCount, pDescriptorWrites, true, true);

    return skipCall;
}



static bool parameter_validation_vkCreateDescriptorUpdateTemplateKHR(
    debug_report_data*                          report_data,
    const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplateKHR*              pDescriptorUpdateTemplate)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_array(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->descriptorUpdateEntryCount", "pCreateInfo->pDescriptorUpdateEntries", pCreateInfo->descriptorUpdateEntryCount, pCreateInfo->pDescriptorUpdateEntries, true, true);

        if (pCreateInfo->pDescriptorUpdateEntries != NULL)
        {
            for (uint32_t descriptorUpdateEntryIndex = 0; descriptorUpdateEntryIndex < pCreateInfo->descriptorUpdateEntryCount; ++descriptorUpdateEntryIndex)
            {
                skipCall |= validate_ranged_enum(report_data, "vkCreateDescriptorUpdateTemplateKHR", ParameterName("pCreateInfo->pDescriptorUpdateEntries[%i].descriptorType", ParameterName::IndexVector{ descriptorUpdateEntryIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pCreateInfo->pDescriptorUpdateEntries[descriptorUpdateEntryIndex].descriptorType);
            }
        }

        skipCall |= validate_ranged_enum(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->templateType", "VkDescriptorUpdateTemplateTypeKHR", VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_BEGIN_RANGE_KHR, VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_END_RANGE_KHR, pCreateInfo->templateType);

        skipCall |= validate_ranged_enum(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pCreateInfo->pipelineBindPoint);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateDescriptorUpdateTemplateKHR", "pDescriptorUpdateTemplate", pDescriptorUpdateTemplate);

    return skipCall;
}

static bool parameter_validation_vkUpdateDescriptorSetWithTemplateKHR(
    debug_report_data*                          report_data,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const void*                                 pData)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkUpdateDescriptorSetWithTemplateKHR", "descriptorSet", descriptorSet);

    skipCall |= validate_required_handle(report_data, "vkUpdateDescriptorSetWithTemplateKHR", "descriptorUpdateTemplate", descriptorUpdateTemplate);

    skipCall |= validate_required_pointer(report_data, "vkUpdateDescriptorSetWithTemplateKHR", "pData", pData);

    return skipCall;
}

static bool parameter_validation_vkCmdPushDescriptorSetWithTemplateKHR(
    debug_report_data*                          report_data,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData)
{
    UNUSED_PARAMETER(set);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdPushDescriptorSetWithTemplateKHR", "descriptorUpdateTemplate", descriptorUpdateTemplate);

    skipCall |= validate_required_handle(report_data, "vkCmdPushDescriptorSetWithTemplateKHR", "layout", layout);

    skipCall |= validate_required_pointer(report_data, "vkCmdPushDescriptorSetWithTemplateKHR", "pData", pData);

    return skipCall;
}


const VkDebugReportFlagsEXT AllVkDebugReportFlagBitsEXT = VK_DEBUG_REPORT_INFORMATION_BIT_EXT|VK_DEBUG_REPORT_WARNING_BIT_EXT|VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT|VK_DEBUG_REPORT_ERROR_BIT_EXT|VK_DEBUG_REPORT_DEBUG_BIT_EXT;

static bool parameter_validation_vkDestroyDebugReportCallbackEXT(
    debug_report_data*                          report_data,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkDestroyDebugReportCallbackEXT", "callback", callback);

    return skipCall;
}


















static bool parameter_validation_vkDebugMarkerSetObjectTagEXT(
    debug_report_data*                          report_data,
    VkDebugMarkerObjectTagInfoEXT*              pTagInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkDebugMarkerSetObjectTagEXT", "pTagInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT", pTagInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT, true);

    return skipCall;
}

static bool parameter_validation_vkDebugMarkerSetObjectNameEXT(
    debug_report_data*                          report_data,
    VkDebugMarkerObjectNameInfoEXT*             pNameInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkDebugMarkerSetObjectNameEXT", "pNameInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT", pNameInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT, true);

    return skipCall;
}

static bool parameter_validation_vkCmdDebugMarkerBeginEXT(
    debug_report_data*                          report_data,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCmdDebugMarkerBeginEXT", "pMarkerInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT", pMarkerInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT, true);

    return skipCall;
}

static bool parameter_validation_vkCmdDebugMarkerInsertEXT(
    debug_report_data*                          report_data,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCmdDebugMarkerInsertEXT", "pMarkerInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT", pMarkerInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT, true);

    return skipCall;
}









static bool parameter_validation_vkCmdDrawIndirectCountAMD(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(countBufferOffset);
    UNUSED_PARAMETER(maxDrawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdDrawIndirectCountAMD", "buffer", buffer);

    skipCall |= validate_required_handle(report_data, "vkCmdDrawIndirectCountAMD", "countBuffer", countBuffer);

    return skipCall;
}

static bool parameter_validation_vkCmdDrawIndexedIndirectCountAMD(
    debug_report_data*                          report_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(countBufferOffset);
    UNUSED_PARAMETER(maxDrawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkCmdDrawIndexedIndirectCountAMD", "buffer", buffer);

    skipCall |= validate_required_handle(report_data, "vkCmdDrawIndexedIndirectCountAMD", "countBuffer", countBuffer);

    return skipCall;
}

















const VkExternalMemoryFeatureFlagsNV AllVkExternalMemoryFeatureFlagBitsNV = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV|VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV|VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV;
const VkExternalMemoryHandleTypeFlagsNV AllVkExternalMemoryHandleTypeFlagBitsNV = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;

static bool parameter_validation_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    debug_report_data*                          report_data,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format);

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, type);

    skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, tiling);

    skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, usage, true);

    skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, flags, false);

    skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "externalHandleType", "VkExternalMemoryHandleTypeFlagBitsNV", AllVkExternalMemoryHandleTypeFlagBitsNV, externalHandleType, false);

    skipCall |= validate_required_pointer(report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "pExternalImageFormatProperties", pExternalImageFormatProperties);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetMemoryWin32HandleNV(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetMemoryWin32HandleNV", "memory", memory);

    skipCall |= validate_flags(report_data, "vkGetMemoryWin32HandleNV", "handleType", "VkExternalMemoryHandleTypeFlagBitsNV", AllVkExternalMemoryHandleTypeFlagBitsNV, handleType, true);

    skipCall |= validate_required_pointer(report_data, "vkGetMemoryWin32HandleNV", "pHandle", pHandle);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_WIN32_KHR */

#ifdef VK_USE_PLATFORM_WIN32_KHR

#endif /* VK_USE_PLATFORM_WIN32_KHR */

const VkDeviceGroupPresentModeFlagsKHX AllVkDeviceGroupPresentModeFlagBitsKHX = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHX|VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHX|VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHX|VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHX;
const VkMemoryAllocateFlagsKHX AllVkMemoryAllocateFlagBitsKHX = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHX;
const VkPeerMemoryFeatureFlagsKHX AllVkPeerMemoryFeatureFlagBitsKHX = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHX|VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHX|VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHX|VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHX;

static bool parameter_validation_vkGetDeviceGroupPeerMemoryFeaturesKHX(
    debug_report_data*                          report_data,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlagsKHX*                pPeerMemoryFeatures)
{
    UNUSED_PARAMETER(heapIndex);
    UNUSED_PARAMETER(localDeviceIndex);
    UNUSED_PARAMETER(remoteDeviceIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetDeviceGroupPeerMemoryFeaturesKHX", "pPeerMemoryFeatures", pPeerMemoryFeatures);

    return skipCall;
}

static bool parameter_validation_vkBindBufferMemory2KHX(
    debug_report_data*                          report_data,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfoKHX*            pBindInfos)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkBindBufferMemory2KHX", "bindInfoCount", "pBindInfos", "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX", bindInfoCount, pBindInfos, VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX, true, true);

    if (pBindInfos != NULL)
    {
        for (uint32_t bindInfoIndex = 0; bindInfoIndex < bindInfoCount; ++bindInfoIndex)
        {
            skipCall |= validate_struct_pnext(report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].pNext", ParameterName::IndexVector{ bindInfoIndex }), NULL, pBindInfos[bindInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion);

            skipCall |= validate_required_handle(report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].buffer", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].buffer);

            skipCall |= validate_required_handle(report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].memory", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].memory);

            skipCall |= validate_array(report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].deviceIndexCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfos[%i].pDeviceIndices", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].deviceIndexCount, pBindInfos[bindInfoIndex].pDeviceIndices, false, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkBindImageMemory2KHX(
    debug_report_data*                          report_data,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfoKHX*             pBindInfos)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkBindImageMemory2KHX", "bindInfoCount", "pBindInfos", "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX", bindInfoCount, pBindInfos, VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX, true, true);

    if (pBindInfos != NULL)
    {
        for (uint32_t bindInfoIndex = 0; bindInfoIndex < bindInfoCount; ++bindInfoIndex)
        {
            const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHX};

            skipCall |= validate_struct_pnext(report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].pNext", ParameterName::IndexVector{ bindInfoIndex }), "VkBindImageMemorySwapchainInfoKHX", pBindInfos[bindInfoIndex].pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

            skipCall |= validate_required_handle(report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].image", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].image);

            skipCall |= validate_required_handle(report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].memory", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].memory);

            skipCall |= validate_array(report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].deviceIndexCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfos[%i].pDeviceIndices", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].deviceIndexCount, pBindInfos[bindInfoIndex].pDeviceIndices, false, true);

            skipCall |= validate_array(report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].SFRRectCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfos[%i].pSFRRects", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].SFRRectCount, pBindInfos[bindInfoIndex].pSFRRects, false, true);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkGetDeviceGroupPresentCapabilitiesKHX(
    debug_report_data*                          report_data,
    VkDeviceGroupPresentCapabilitiesKHX*        pDeviceGroupPresentCapabilities)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetDeviceGroupPresentCapabilitiesKHX", "pDeviceGroupPresentCapabilities", "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX", pDeviceGroupPresentCapabilities, VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX, true);

    return skipCall;
}

static bool parameter_validation_vkGetDeviceGroupSurfacePresentModesKHX(
    debug_report_data*                          report_data,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHX*           pModes)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetDeviceGroupSurfacePresentModesKHX", "surface", surface);

    skipCall |= validate_required_pointer(report_data, "vkGetDeviceGroupSurfacePresentModesKHX", "pModes", pModes);

    return skipCall;
}

static bool parameter_validation_vkAcquireNextImage2KHX(
    debug_report_data*                          report_data,
    const VkAcquireNextImageInfoKHX*            pAcquireInfo,
    uint32_t*                                   pImageIndex)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkAcquireNextImage2KHX", "pAcquireInfo", "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX", pAcquireInfo, VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX, true);

    if (pAcquireInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkAcquireNextImage2KHX", "pAcquireInfo->pNext", NULL, pAcquireInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkAcquireNextImage2KHX", "pAcquireInfo->swapchain", pAcquireInfo->swapchain);
    }

    skipCall |= validate_required_pointer(report_data, "vkAcquireNextImage2KHX", "pImageIndex", pImageIndex);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDevicePresentRectanglesKHX(
    debug_report_data*                          report_data,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPhysicalDevicePresentRectanglesKHX", "surface", surface);

    skipCall |= validate_array(report_data, "vkGetPhysicalDevicePresentRectanglesKHX", "pRectCount", "pRects", pRectCount, pRects, true, false, false);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_VI_NN

static bool parameter_validation_vkCreateViSurfaceNN(
    debug_report_data*                          report_data,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateViSurfaceNN", "pCreateInfo", "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN", pCreateInfo, VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateViSurfaceNN", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateViSurfaceNN", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_pointer(report_data, "vkCreateViSurfaceNN", "pCreateInfo->window", pCreateInfo->window);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateViSurfaceNN", "pSurface", pSurface);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_VI_NN */








static bool parameter_validation_vkEnumeratePhysicalDeviceGroupsKHX(
    debug_report_data*                          report_data,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupPropertiesKHX*         pPhysicalDeviceGroupProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(report_data, "vkEnumeratePhysicalDeviceGroupsKHX", "pPhysicalDeviceGroupCount", "pPhysicalDeviceGroupProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX", pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX, true, false, false);

    return skipCall;
}


const VkExternalMemoryFeatureFlagsKHX AllVkExternalMemoryFeatureFlagBitsKHX = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHX|VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHX|VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHX;
const VkExternalMemoryHandleTypeFlagsKHX AllVkExternalMemoryHandleTypeFlagBitsKHX = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHX|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHX|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHX|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHX|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHX|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHX|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHX;

static bool parameter_validation_vkGetPhysicalDeviceExternalBufferPropertiesKHX(
    debug_report_data*                          report_data,
    const VkPhysicalDeviceExternalBufferInfoKHX* pExternalBufferInfo,
    VkExternalBufferPropertiesKHX*              pExternalBufferProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHX", "pExternalBufferInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHX", pExternalBufferInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHX, true);

    if (pExternalBufferInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHX", "pExternalBufferInfo->pNext", NULL, pExternalBufferInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHX", "pExternalBufferInfo->flags", "VkBufferCreateFlagBits", AllVkBufferCreateFlagBits, pExternalBufferInfo->flags, false);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHX", "pExternalBufferInfo->usage", "VkBufferUsageFlagBits", AllVkBufferUsageFlagBits, pExternalBufferInfo->usage, true);
    }

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHX", "pExternalBufferProperties", "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHX", pExternalBufferProperties, VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHX, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceProperties2KHX(
    debug_report_data*                          report_data,
    VkPhysicalDeviceProperties2KHX*             pProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceProperties2KHX", "pProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHX", pProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHX, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceImageFormatProperties2KHX(
    debug_report_data*                          report_data,
    const VkPhysicalDeviceImageFormatInfo2KHX*  pImageFormatInfo,
    VkImageFormatProperties2KHX*                pImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHX", pImageFormatInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHX, true);

    if (pImageFormatInfo != NULL)
    {
        const VkStructureType allowedStructs[] = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHX};

        skipCall |= validate_struct_pnext(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo->pNext", "VkPhysicalDeviceExternalImageFormatInfoKHX", pImageFormatInfo->pNext, ARRAY_SIZE(allowedStructs), allowedStructs, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pImageFormatInfo->format);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo->type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pImageFormatInfo->type);

        skipCall |= validate_ranged_enum(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pImageFormatInfo->tiling);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pImageFormatInfo->usage, true);

        skipCall |= validate_flags(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatInfo->flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, pImageFormatInfo->flags, false);
    }

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceImageFormatProperties2KHX", "pImageFormatProperties", "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHX", pImageFormatProperties, VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHX, true);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetMemoryWin32HandleKHX(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    HANDLE*                                     pHandle)
{
    UNUSED_PARAMETER(handleType);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetMemoryWin32HandleKHX", "memory", memory);

    skipCall |= validate_required_pointer(report_data, "vkGetMemoryWin32HandleKHX", "pHandle", pHandle);

    return skipCall;
}

static bool parameter_validation_vkGetMemoryWin32HandlePropertiesKHX(
    debug_report_data*                          report_data,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    HANDLE                                      handle,
    VkMemoryWin32HandlePropertiesKHX*           pMemoryWin32HandleProperties)
{
    UNUSED_PARAMETER(handleType);
    UNUSED_PARAMETER(handle);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetMemoryWin32HandlePropertiesKHX", "pMemoryWin32HandleProperties", "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHX", pMemoryWin32HandleProperties, VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHX, true);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_WIN32_KHR */


static bool parameter_validation_vkGetMemoryFdKHX(
    debug_report_data*                          report_data,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    int*                                        pFd)
{
    UNUSED_PARAMETER(handleType);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetMemoryFdKHX", "memory", memory);

    skipCall |= validate_required_pointer(report_data, "vkGetMemoryFdKHX", "pFd", pFd);

    return skipCall;
}

static bool parameter_validation_vkGetMemoryFdPropertiesKHX(
    debug_report_data*                          report_data,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHX*                    pMemoryFdProperties)
{
    UNUSED_PARAMETER(handleType);
    UNUSED_PARAMETER(fd);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetMemoryFdPropertiesKHX", "pMemoryFdProperties", "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHX", pMemoryFdProperties, VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHX, true);

    return skipCall;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR

#endif /* VK_USE_PLATFORM_WIN32_KHR */

const VkExternalSemaphoreFeatureFlagsKHX AllVkExternalSemaphoreFeatureFlagBitsKHX = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHX|VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHX;
const VkExternalSemaphoreHandleTypeFlagsKHX AllVkExternalSemaphoreHandleTypeFlagBitsKHX = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHX|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHX|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHX|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHX|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_FENCE_FD_BIT_KHX;

static bool parameter_validation_vkGetPhysicalDeviceExternalSemaphorePropertiesKHX(
    debug_report_data*                          report_data,
    const VkPhysicalDeviceExternalSemaphoreInfoKHX* pExternalSemaphoreInfo,
    VkExternalSemaphorePropertiesKHX*           pExternalSemaphoreProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHX", "pExternalSemaphoreInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHX", pExternalSemaphoreInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHX, true);

    if (pExternalSemaphoreInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHX", "pExternalSemaphoreInfo->pNext", NULL, pExternalSemaphoreInfo->pNext, 0, NULL, GeneratedHeaderVersion);
    }

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHX", "pExternalSemaphoreProperties", "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHX", pExternalSemaphoreProperties, VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHX, true);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHX

static bool parameter_validation_vkImportSemaphoreWin32HandleKHX(
    debug_report_data*                          report_data,
    const VkImportSemaphoreWin32HandleInfoKHX*  pImportSemaphoreWin32HandleInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkImportSemaphoreWin32HandleKHX", "pImportSemaphoreWin32HandleInfo", "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHX", pImportSemaphoreWin32HandleInfo, VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHX, true);

    if (pImportSemaphoreWin32HandleInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkImportSemaphoreWin32HandleKHX", "pImportSemaphoreWin32HandleInfo->pNext", NULL, pImportSemaphoreWin32HandleInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkImportSemaphoreWin32HandleKHX", "pImportSemaphoreWin32HandleInfo->semaphore", pImportSemaphoreWin32HandleInfo->semaphore);

        skipCall |= validate_flags(report_data, "vkImportSemaphoreWin32HandleKHX", "pImportSemaphoreWin32HandleInfo->handleType", "VkExternalSemaphoreHandleTypeFlagBitsKHX", AllVkExternalSemaphoreHandleTypeFlagBitsKHX, pImportSemaphoreWin32HandleInfo->handleType, true);
    }

    return skipCall;
}

static bool parameter_validation_vkGetSemaphoreWin32HandleKHX(
    debug_report_data*                          report_data,
    VkSemaphore                                 semaphore,
    VkExternalSemaphoreHandleTypeFlagBitsKHX    handleType,
    HANDLE*                                     pHandle)
{
    UNUSED_PARAMETER(handleType);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetSemaphoreWin32HandleKHX", "semaphore", semaphore);

    skipCall |= validate_required_pointer(report_data, "vkGetSemaphoreWin32HandleKHX", "pHandle", pHandle);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_WIN32_KHX */


static bool parameter_validation_vkImportSemaphoreFdKHX(
    debug_report_data*                          report_data,
    const VkImportSemaphoreFdInfoKHX*           pImportSemaphoreFdInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkImportSemaphoreFdKHX", "pImportSemaphoreFdInfo", "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHX", pImportSemaphoreFdInfo, VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHX, true);

    if (pImportSemaphoreFdInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkImportSemaphoreFdKHX", "pImportSemaphoreFdInfo->pNext", NULL, pImportSemaphoreFdInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkImportSemaphoreFdKHX", "pImportSemaphoreFdInfo->semaphore", pImportSemaphoreFdInfo->semaphore);
    }

    return skipCall;
}

static bool parameter_validation_vkGetSemaphoreFdKHX(
    debug_report_data*                          report_data,
    VkSemaphore                                 semaphore,
    VkExternalSemaphoreHandleTypeFlagBitsKHX    handleType,
    int*                                        pFd)
{
    UNUSED_PARAMETER(handleType);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetSemaphoreFdKHX", "semaphore", semaphore);

    skipCall |= validate_required_pointer(report_data, "vkGetSemaphoreFdKHX", "pFd", pFd);

    return skipCall;
}


const VkIndirectCommandsLayoutUsageFlagsNVX AllVkIndirectCommandsLayoutUsageFlagBitsNVX = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX;
const VkObjectEntryUsageFlagsNVX AllVkObjectEntryUsageFlagBitsNVX = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX|VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX;

static bool parameter_validation_vkCmdProcessCommandsNVX(
    debug_report_data*                          report_data,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo", "VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX", pProcessCommandsInfo, VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX, true);

    if (pProcessCommandsInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->pNext", NULL, pProcessCommandsInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->objectTable", pProcessCommandsInfo->objectTable);

        skipCall |= validate_required_handle(report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->indirectCommandsLayout", pProcessCommandsInfo->indirectCommandsLayout);

        skipCall |= validate_array(report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->indirectCommandsTokenCount", "pProcessCommandsInfo->pIndirectCommandsTokens", pProcessCommandsInfo->indirectCommandsTokenCount, pProcessCommandsInfo->pIndirectCommandsTokens, true, true);

        if (pProcessCommandsInfo->pIndirectCommandsTokens != NULL)
        {
            for (uint32_t indirectCommandsTokenIndex = 0; indirectCommandsTokenIndex < pProcessCommandsInfo->indirectCommandsTokenCount; ++indirectCommandsTokenIndex)
            {
                skipCall |= validate_ranged_enum(report_data, "vkCmdProcessCommandsNVX", ParameterName("pProcessCommandsInfo->pIndirectCommandsTokens[%i].tokenType", ParameterName::IndexVector{ indirectCommandsTokenIndex }), "VkIndirectCommandsTokenTypeNVX", VK_INDIRECT_COMMANDS_TOKEN_TYPE_BEGIN_RANGE_NVX, VK_INDIRECT_COMMANDS_TOKEN_TYPE_END_RANGE_NVX, pProcessCommandsInfo->pIndirectCommandsTokens[indirectCommandsTokenIndex].tokenType);

                skipCall |= validate_required_handle(report_data, "vkCmdProcessCommandsNVX", ParameterName("pProcessCommandsInfo->pIndirectCommandsTokens[%i].buffer", ParameterName::IndexVector{ indirectCommandsTokenIndex }), pProcessCommandsInfo->pIndirectCommandsTokens[indirectCommandsTokenIndex].buffer);
            }
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdReserveSpaceForCommandsNVX(
    debug_report_data*                          report_data,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo", "VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX", pReserveSpaceInfo, VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX, true);

    if (pReserveSpaceInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo->pNext", NULL, pReserveSpaceInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_required_handle(report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo->objectTable", pReserveSpaceInfo->objectTable);

        skipCall |= validate_required_handle(report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo->indirectCommandsLayout", pReserveSpaceInfo->indirectCommandsLayout);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateIndirectCommandsLayoutNVX(
    debug_report_data*                          report_data,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo", "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX", pCreateInfo, VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pCreateInfo->pipelineBindPoint);

        skipCall |= validate_flags(report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->flags", "VkIndirectCommandsLayoutUsageFlagBitsNVX", AllVkIndirectCommandsLayoutUsageFlagBitsNVX, pCreateInfo->flags, true);

        skipCall |= validate_array(report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->tokenCount", "pCreateInfo->pTokens", pCreateInfo->tokenCount, pCreateInfo->pTokens, true, true);

        if (pCreateInfo->pTokens != NULL)
        {
            for (uint32_t tokenIndex = 0; tokenIndex < pCreateInfo->tokenCount; ++tokenIndex)
            {
                skipCall |= validate_ranged_enum(report_data, "vkCreateIndirectCommandsLayoutNVX", ParameterName("pCreateInfo->pTokens[%i].tokenType", ParameterName::IndexVector{ tokenIndex }), "VkIndirectCommandsTokenTypeNVX", VK_INDIRECT_COMMANDS_TOKEN_TYPE_BEGIN_RANGE_NVX, VK_INDIRECT_COMMANDS_TOKEN_TYPE_END_RANGE_NVX, pCreateInfo->pTokens[tokenIndex].tokenType);
            }
        }
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateIndirectCommandsLayoutNVX", "pIndirectCommandsLayout", pIndirectCommandsLayout);

    return skipCall;
}

static bool parameter_validation_vkDestroyIndirectCommandsLayoutNVX(
    debug_report_data*                          report_data,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkDestroyIndirectCommandsLayoutNVX", "indirectCommandsLayout", indirectCommandsLayout);

    return skipCall;
}

static bool parameter_validation_vkCreateObjectTableNVX(
    debug_report_data*                          report_data,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateObjectTableNVX", "pCreateInfo", "VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX", pCreateInfo, VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateObjectTableNVX", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum_array(report_data, "vkCreateObjectTableNVX", "pCreateInfo->objectCount", "pCreateInfo->pObjectEntryTypes", "VkObjectEntryTypeNVX", VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX, VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX, pCreateInfo->objectCount, pCreateInfo->pObjectEntryTypes, true, true);

        skipCall |= validate_array(report_data, "vkCreateObjectTableNVX", "pCreateInfo->objectCount", "pCreateInfo->pObjectEntryCounts", pCreateInfo->objectCount, pCreateInfo->pObjectEntryCounts, true, true);

        skipCall |= validate_flags_array(report_data, "vkCreateObjectTableNVX", "pCreateInfo->objectCount", "pCreateInfo->pObjectEntryUsageFlags", "VkObjectEntryUsageFlagBitsNVX", AllVkObjectEntryUsageFlagBitsNVX, pCreateInfo->objectCount, pCreateInfo->pObjectEntryUsageFlags, true, true);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateObjectTableNVX", "pObjectTable", pObjectTable);

    return skipCall;
}

static bool parameter_validation_vkDestroyObjectTableNVX(
    debug_report_data*                          report_data,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkDestroyObjectTableNVX", "objectTable", objectTable);

    return skipCall;
}

static bool parameter_validation_vkRegisterObjectsNVX(
    debug_report_data*                          report_data,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkRegisterObjectsNVX", "objectTable", objectTable);

    skipCall |= validate_array(report_data, "vkRegisterObjectsNVX", "objectCount", "ppObjectTableEntries", objectCount, ppObjectTableEntries, true, true);

    if (ppObjectTableEntries != NULL)
    {
        for (uint32_t objectIndex = 0; objectIndex < objectCount; ++objectIndex)
        {
            skipCall |= validate_ranged_enum(report_data, "vkRegisterObjectsNVX", ParameterName("ppObjectTableEntries[%i]->type", ParameterName::IndexVector{ objectIndex }), "VkObjectEntryTypeNVX", VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX, VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX, ppObjectTableEntries[objectIndex]->type);

            skipCall |= validate_flags(report_data, "vkRegisterObjectsNVX", ParameterName("ppObjectTableEntries[%i]->flags", ParameterName::IndexVector{ objectIndex }), "VkObjectEntryUsageFlagBitsNVX", AllVkObjectEntryUsageFlagBitsNVX, ppObjectTableEntries[objectIndex]->flags, true);
        }
    }

    skipCall |= validate_array(report_data, "vkRegisterObjectsNVX", "objectCount", "pObjectIndices", objectCount, pObjectIndices, true, true);

    return skipCall;
}

static bool parameter_validation_vkUnregisterObjectsNVX(
    debug_report_data*                          report_data,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkUnregisterObjectsNVX", "objectTable", objectTable);

    skipCall |= validate_ranged_enum_array(report_data, "vkUnregisterObjectsNVX", "objectCount", "pObjectEntryTypes", "VkObjectEntryTypeNVX", VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX, VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX, objectCount, pObjectEntryTypes, true, true);

    skipCall |= validate_array(report_data, "vkUnregisterObjectsNVX", "objectCount", "pObjectIndices", objectCount, pObjectIndices, true, true);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    debug_report_data*                          report_data,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", "pFeatures", "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX", pFeatures, VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX, true);

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", "pLimits", "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX", pLimits, VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX, true);

    return skipCall;
}






static bool parameter_validation_vkReleaseDisplayEXT(
    debug_report_data*                          report_data,
    VkDisplayKHR                                display)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkReleaseDisplayEXT", "display", display);

    return skipCall;
}


#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

static bool parameter_validation_vkAcquireXlibDisplayEXT(
    debug_report_data*                          report_data,
    Display*                                    dpy,
    VkDisplayKHR                                display)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkAcquireXlibDisplayEXT", "dpy", dpy);

    skipCall |= validate_required_handle(report_data, "vkAcquireXlibDisplayEXT", "display", display);

    return skipCall;
}

static bool parameter_validation_vkGetRandROutputDisplayEXT(
    debug_report_data*                          report_data,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay)
{
    UNUSED_PARAMETER(rrOutput);

    bool skipCall = false;

    skipCall |= validate_required_pointer(report_data, "vkGetRandROutputDisplayEXT", "dpy", dpy);

    skipCall |= validate_required_pointer(report_data, "vkGetRandROutputDisplayEXT", "pDisplay", pDisplay);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_XLIB_XRANDR_EXT */

const VkSurfaceCounterFlagsEXT AllVkSurfaceCounterFlagBitsEXT = VK_SURFACE_COUNTER_VBLANK_EXT;

static bool parameter_validation_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    debug_report_data*                          report_data,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", "surface", surface);

    skipCall |= validate_struct_type(report_data, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", "pSurfaceCapabilities", "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT", pSurfaceCapabilities, VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT, true);

    return skipCall;
}



static bool parameter_validation_vkDisplayPowerControlEXT(
    debug_report_data*                          report_data,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkDisplayPowerControlEXT", "display", display);

    skipCall |= validate_struct_type(report_data, "vkDisplayPowerControlEXT", "pDisplayPowerInfo", "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT", pDisplayPowerInfo, VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT, true);

    if (pDisplayPowerInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkDisplayPowerControlEXT", "pDisplayPowerInfo->pNext", NULL, pDisplayPowerInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkDisplayPowerControlEXT", "pDisplayPowerInfo->powerState", "VkDisplayPowerStateEXT", VK_DISPLAY_POWER_STATE_BEGIN_RANGE_EXT, VK_DISPLAY_POWER_STATE_END_RANGE_EXT, pDisplayPowerInfo->powerState);
    }

    return skipCall;
}

static bool parameter_validation_vkRegisterDeviceEventEXT(
    debug_report_data*                          report_data,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkRegisterDeviceEventEXT", "pDeviceEventInfo", "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT", pDeviceEventInfo, VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT, true);

    if (pDeviceEventInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkRegisterDeviceEventEXT", "pDeviceEventInfo->pNext", NULL, pDeviceEventInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkRegisterDeviceEventEXT", "pDeviceEventInfo->deviceEvent", "VkDeviceEventTypeEXT", VK_DEVICE_EVENT_TYPE_BEGIN_RANGE_EXT, VK_DEVICE_EVENT_TYPE_END_RANGE_EXT, pDeviceEventInfo->deviceEvent);
    }

    skipCall |= validate_required_pointer(report_data, "vkRegisterDeviceEventEXT", "pAllocator", pAllocator);

    skipCall |= validate_required_pointer(report_data, "vkRegisterDeviceEventEXT", "pFence", pFence);

    return skipCall;
}

static bool parameter_validation_vkRegisterDisplayEventEXT(
    debug_report_data*                          report_data,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkRegisterDisplayEventEXT", "display", display);

    skipCall |= validate_struct_type(report_data, "vkRegisterDisplayEventEXT", "pDisplayEventInfo", "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT", pDisplayEventInfo, VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT, true);

    if (pDisplayEventInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkRegisterDisplayEventEXT", "pDisplayEventInfo->pNext", NULL, pDisplayEventInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_ranged_enum(report_data, "vkRegisterDisplayEventEXT", "pDisplayEventInfo->displayEvent", "VkDisplayEventTypeEXT", VK_DISPLAY_EVENT_TYPE_BEGIN_RANGE_EXT, VK_DISPLAY_EVENT_TYPE_END_RANGE_EXT, pDisplayEventInfo->displayEvent);
    }

    skipCall |= validate_required_pointer(report_data, "vkRegisterDisplayEventEXT", "pAllocator", pAllocator);

    skipCall |= validate_required_pointer(report_data, "vkRegisterDisplayEventEXT", "pFence", pFence);

    return skipCall;
}

static bool parameter_validation_vkGetSwapchainCounterEXT(
    debug_report_data*                          report_data,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue)
{
    UNUSED_PARAMETER(counter);

    bool skipCall = false;

    skipCall |= validate_required_handle(report_data, "vkGetSwapchainCounterEXT", "swapchain", swapchain);

    skipCall |= validate_required_pointer(report_data, "vkGetSwapchainCounterEXT", "pCounterValue", pCounterValue);

    return skipCall;
}


















static bool parameter_validation_vkCmdSetDiscardRectangleEXT(
    debug_report_data*                          report_data,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles)
{
    UNUSED_PARAMETER(firstDiscardRectangle);

    bool skipCall = false;

    skipCall |= validate_array(report_data, "vkCmdSetDiscardRectangleEXT", "discardRectangleCount", "pDiscardRectangles", discardRectangleCount, pDiscardRectangles, true, true);

    return skipCall;
}


#ifdef VK_USE_PLATFORM_IOS_MVK

static bool parameter_validation_vkCreateIOSSurfaceMVK(
    debug_report_data*                          report_data,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo", "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK", pCreateInfo, VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_pointer(report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo->pView", pCreateInfo->pView);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateIOSSurfaceMVK", "pSurface", pSurface);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_IOS_MVK */

#ifdef VK_USE_PLATFORM_MACOS_MVK

static bool parameter_validation_vkCreateMacOSSurfaceMVK(
    debug_report_data*                          report_data,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    UNUSED_PARAMETER(pAllocator);

    bool skipCall = false;

    skipCall |= validate_struct_type(report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo", "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK", pCreateInfo, VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK, true);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion);

        skipCall |= validate_reserved_flags(report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo->flags", pCreateInfo->flags);

        skipCall |= validate_required_pointer(report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo->pView", pCreateInfo->pView);
    }

    skipCall |= validate_required_pointer(report_data, "vkCreateMacOSSurfaceMVK", "pSurface", pSurface);

    return skipCall;
}
#endif /* VK_USE_PLATFORM_MACOS_MVK */

// Declarations
VKAPI_ATTR VkResult VKAPI_CALL CreateInstance(
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);
VKAPI_ATTR void VKAPI_CALL DestroyInstance(
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDevices(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures*                   pFeatures);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties);
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetInstanceProcAddr(
    VkInstance                                  instance,
    const char*                                 pName);
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetDeviceProcAddr(
    VkDevice                                    device,
    const char*                                 pName);
VKAPI_ATTR VkResult VKAPI_CALL CreateDevice(
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);
VKAPI_ATTR void VKAPI_CALL DestroyDevice(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL EnumerateDeviceExtensionProperties(
    VkPhysicalDevice                            physicalDevice,
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);
VKAPI_ATTR void VKAPI_CALL GetDeviceQueue(
    VkDevice                                    device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue);
VKAPI_ATTR VkResult VKAPI_CALL QueueSubmit(
    VkQueue                                     queue,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence);
VKAPI_ATTR VkResult VKAPI_CALL QueueWaitIdle(
    VkQueue                                     queue);
VKAPI_ATTR VkResult VKAPI_CALL DeviceWaitIdle(
    VkDevice                                    device);
VKAPI_ATTR VkResult VKAPI_CALL AllocateMemory(
    VkDevice                                    device,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory);
VKAPI_ATTR void VKAPI_CALL FreeMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL MapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData);
VKAPI_ATTR void VKAPI_CALL UnmapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory);
VKAPI_ATTR VkResult VKAPI_CALL FlushMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);
VKAPI_ATTR VkResult VKAPI_CALL InvalidateMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);
VKAPI_ATTR void VKAPI_CALL GetDeviceMemoryCommitment(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes);
VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);
VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory(
    VkDevice                                    device,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);
VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties);
VKAPI_ATTR VkResult VKAPI_CALL QueueBindSparse(
    VkQueue                                     queue,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence);
VKAPI_ATTR VkResult VKAPI_CALL CreateFence(
    VkDevice                                    device,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VKAPI_ATTR void VKAPI_CALL DestroyFence(
    VkDevice                                    device,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL ResetFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences);
VKAPI_ATTR VkResult VKAPI_CALL GetFenceStatus(
    VkDevice                                    device,
    VkFence                                     fence);
VKAPI_ATTR VkResult VKAPI_CALL WaitForFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout);
VKAPI_ATTR VkResult VKAPI_CALL CreateSemaphore(
    VkDevice                                    device,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore);
VKAPI_ATTR void VKAPI_CALL DestroySemaphore(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateEvent(
    VkDevice                                    device,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent);
VKAPI_ATTR void VKAPI_CALL DestroyEvent(
    VkDevice                                    device,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetEventStatus(
    VkDevice                                    device,
    VkEvent                                     event);
VKAPI_ATTR VkResult VKAPI_CALL SetEvent(
    VkDevice                                    device,
    VkEvent                                     event);
VKAPI_ATTR VkResult VKAPI_CALL ResetEvent(
    VkDevice                                    device,
    VkEvent                                     event);
VKAPI_ATTR VkResult VKAPI_CALL CreateQueryPool(
    VkDevice                                    device,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool);
VKAPI_ATTR void VKAPI_CALL DestroyQueryPool(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetQueryPoolResults(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);
VKAPI_ATTR VkResult VKAPI_CALL CreateBuffer(
    VkDevice                                    device,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer);
VKAPI_ATTR void VKAPI_CALL DestroyBuffer(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateBufferView(
    VkDevice                                    device,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView);
VKAPI_ATTR void VKAPI_CALL DestroyBufferView(
    VkDevice                                    device,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateImage(
    VkDevice                                    device,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage);
VKAPI_ATTR void VKAPI_CALL DestroyImage(
    VkDevice                                    device,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL GetImageSubresourceLayout(
    VkDevice                                    device,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout);
VKAPI_ATTR VkResult VKAPI_CALL CreateImageView(
    VkDevice                                    device,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView);
VKAPI_ATTR void VKAPI_CALL DestroyImageView(
    VkDevice                                    device,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateShaderModule(
    VkDevice                                    device,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule);
VKAPI_ATTR void VKAPI_CALL DestroyShaderModule(
    VkDevice                                    device,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineCache(
    VkDevice                                    device,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache);
VKAPI_ATTR void VKAPI_CALL DestroyPipelineCache(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetPipelineCacheData(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData);
VKAPI_ATTR VkResult VKAPI_CALL MergePipelineCaches(
    VkDevice                                    device,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches);
VKAPI_ATTR VkResult VKAPI_CALL CreateGraphicsPipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);
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
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineLayout(
    VkDevice                                    device,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout);
VKAPI_ATTR void VKAPI_CALL DestroyPipelineLayout(
    VkDevice                                    device,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateSampler(
    VkDevice                                    device,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler);
VKAPI_ATTR void VKAPI_CALL DestroySampler(
    VkDevice                                    device,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorSetLayout(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout);
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorSetLayout(
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorPool(
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool);
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL ResetDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags);
VKAPI_ATTR VkResult VKAPI_CALL AllocateDescriptorSets(
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets);
VKAPI_ATTR VkResult VKAPI_CALL FreeDescriptorSets(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets);
VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSets(
    VkDevice                                    device,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies);
VKAPI_ATTR VkResult VKAPI_CALL CreateFramebuffer(
    VkDevice                                    device,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer);
VKAPI_ATTR void VKAPI_CALL DestroyFramebuffer(
    VkDevice                                    device,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateRenderPass(
    VkDevice                                    device,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);
VKAPI_ATTR void VKAPI_CALL DestroyRenderPass(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL GetRenderAreaGranularity(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity);
VKAPI_ATTR VkResult VKAPI_CALL CreateCommandPool(
    VkDevice                                    device,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool);
VKAPI_ATTR void VKAPI_CALL DestroyCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL ResetCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags);
VKAPI_ATTR VkResult VKAPI_CALL AllocateCommandBuffers(
    VkDevice                                    device,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers);
VKAPI_ATTR void VKAPI_CALL FreeCommandBuffers(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
VKAPI_ATTR VkResult VKAPI_CALL BeginCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    const VkCommandBufferBeginInfo*             pBeginInfo);
VKAPI_ATTR VkResult VKAPI_CALL EndCommandBuffer(
    VkCommandBuffer                             commandBuffer);
VKAPI_ATTR VkResult VKAPI_CALL ResetCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    VkCommandBufferResetFlags                   flags);
VKAPI_ATTR void VKAPI_CALL CmdBindPipeline(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline);
VKAPI_ATTR void VKAPI_CALL CmdSetViewport(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewport*                           pViewports);
VKAPI_ATTR void VKAPI_CALL CmdSetScissor(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const VkRect2D*                             pScissors);
VKAPI_ATTR void VKAPI_CALL CmdSetLineWidth(
    VkCommandBuffer                             commandBuffer,
    float                                       lineWidth);
VKAPI_ATTR void VKAPI_CALL CmdSetDepthBias(
    VkCommandBuffer                             commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor);
VKAPI_ATTR void VKAPI_CALL CmdSetBlendConstants(
    VkCommandBuffer                             commandBuffer,
    const float                                 blendConstants[4]);
VKAPI_ATTR void VKAPI_CALL CmdSetDepthBounds(
    VkCommandBuffer                             commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds);
VKAPI_ATTR void VKAPI_CALL CmdSetStencilCompareMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask);
VKAPI_ATTR void VKAPI_CALL CmdSetStencilWriteMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask);
VKAPI_ATTR void VKAPI_CALL CmdSetStencilReference(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference);
VKAPI_ATTR void VKAPI_CALL CmdBindDescriptorSets(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets);
VKAPI_ATTR void VKAPI_CALL CmdBindIndexBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType);
VKAPI_ATTR void VKAPI_CALL CmdBindVertexBuffers(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets);
VKAPI_ATTR void VKAPI_CALL CmdDraw(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndexed(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
VKAPI_ATTR void VKAPI_CALL CmdDispatch(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
VKAPI_ATTR void VKAPI_CALL CmdDispatchIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset);
VKAPI_ATTR void VKAPI_CALL CmdCopyBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions);
VKAPI_ATTR void VKAPI_CALL CmdCopyImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions);
VKAPI_ATTR void VKAPI_CALL CmdBlitImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter);
VKAPI_ATTR void VKAPI_CALL CmdCopyBufferToImage(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions);
VKAPI_ATTR void VKAPI_CALL CmdCopyImageToBuffer(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions);
VKAPI_ATTR void VKAPI_CALL CmdUpdateBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData);
VKAPI_ATTR void VKAPI_CALL CmdFillBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data);
VKAPI_ATTR void VKAPI_CALL CmdClearColorImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);
VKAPI_ATTR void VKAPI_CALL CmdClearDepthStencilImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);
VKAPI_ATTR void VKAPI_CALL CmdClearAttachments(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    uint32_t                                    rectCount,
    const VkClearRect*                          pRects);
VKAPI_ATTR void VKAPI_CALL CmdResolveImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions);
VKAPI_ATTR void VKAPI_CALL CmdSetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);
VKAPI_ATTR void VKAPI_CALL CmdResetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);
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
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);
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
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);
VKAPI_ATTR void VKAPI_CALL CmdBeginQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags);
VKAPI_ATTR void VKAPI_CALL CmdEndQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query);
VKAPI_ATTR void VKAPI_CALL CmdResetQueryPool(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount);
VKAPI_ATTR void VKAPI_CALL CmdWriteTimestamp(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query);
VKAPI_ATTR void VKAPI_CALL CmdCopyQueryPoolResults(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);
VKAPI_ATTR void VKAPI_CALL CmdPushConstants(
    VkCommandBuffer                             commandBuffer,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues);
VKAPI_ATTR void VKAPI_CALL CmdBeginRenderPass(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents);
VKAPI_ATTR void VKAPI_CALL CmdNextSubpass(
    VkCommandBuffer                             commandBuffer,
    VkSubpassContents                           contents);
VKAPI_ATTR void VKAPI_CALL CmdEndRenderPass(
    VkCommandBuffer                             commandBuffer);
VKAPI_ATTR void VKAPI_CALL CmdExecuteCommands(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
VKAPI_ATTR void VKAPI_CALL DestroySurfaceKHR(
    VkInstance                                  instance,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceFormatsKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfacePresentModesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes);
VKAPI_ATTR VkResult VKAPI_CALL CreateSwapchainKHR(
    VkDevice                                    device,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain);
VKAPI_ATTR void VKAPI_CALL DestroySwapchainKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator);
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
    uint32_t*                                   pImageIndex);
VKAPI_ATTR VkResult VKAPI_CALL QueuePresentKHR(
    VkQueue                                     queue,
    const VkPresentInfoKHR*                     pPresentInfo);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneSupportedDisplaysKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    planeIndex,
    uint32_t*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays);
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayModePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties);
VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayModeKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode);
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayModeKHR                            mode,
    uint32_t                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayPlaneSurfaceKHR(
    VkInstance                                  instance,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
VKAPI_ATTR VkResult VKAPI_CALL CreateSharedSwapchainsKHR(
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains);
#ifdef VK_USE_PLATFORM_XLIB_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateXlibSurfaceKHR(
    VkInstance                                  instance,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceXlibPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    Display*                                    dpy,
    VisualID                                    visualID);
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateXcbSurfaceKHR(
    VkInstance                                  instance,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceXcbPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    xcb_connection_t*                           connection,
    xcb_visualid_t                              visual_id);
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateWaylandSurfaceKHR(
    VkInstance                                  instance,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceWaylandPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display);
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateMirSurfaceKHR(
    VkInstance                                  instance,
    const VkMirSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceMirPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    MirConnection*                              connection);
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateAndroidSurfaceKHR(
    VkInstance                                  instance,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateWin32SurfaceKHR(
    VkInstance                                  instance,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceWin32PresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex);
#endif
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2KHR*               pFeatures);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2KHR*             pProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2KHR*                     pFormatProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2KHR*  pImageFormatInfo,
    VkImageFormatProperties2KHR*                pImageFormatProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2KHR*                pQueueFamilyProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2KHR*       pMemoryProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2KHR* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2KHR*          pProperties);
VKAPI_ATTR void VKAPI_CALL TrimCommandPoolKHR(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlagsKHR                   flags);
VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetKHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites);
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplateKHR*              pDescriptorUpdateTemplate);
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSetWithTemplateKHR(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const void*                                 pData);
VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData);
VKAPI_ATTR VkResult VKAPI_CALL CreateDebugReportCallbackEXT(
    VkInstance                                  instance,
    const VkDebugReportCallbackCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugReportCallbackEXT*                   pCallback);
VKAPI_ATTR void VKAPI_CALL DestroyDebugReportCallbackEXT(
    VkInstance                                  instance,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL DebugReportMessageEXT(
    VkInstance                                  instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage);
VKAPI_ATTR VkResult VKAPI_CALL DebugMarkerSetObjectTagEXT(
    VkDevice                                    device,
    VkDebugMarkerObjectTagInfoEXT*              pTagInfo);
VKAPI_ATTR VkResult VKAPI_CALL DebugMarkerSetObjectNameEXT(
    VkDevice                                    device,
    VkDebugMarkerObjectNameInfoEXT*             pNameInfo);
VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerBeginEXT(
    VkCommandBuffer                             commandBuffer,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo);
VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerInsertEXT(
    VkCommandBuffer                             commandBuffer,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleNV(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle);
#endif
VKAPI_ATTR void VKAPI_CALL GetDeviceGroupPeerMemoryFeaturesKHX(
    VkDevice                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlagsKHX*                pPeerMemoryFeatures);
VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory2KHX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfoKHX*            pBindInfos);
VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory2KHX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfoKHX*             pBindInfos);
VKAPI_ATTR void VKAPI_CALL CmdSetDeviceMaskKHX(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    deviceMask);
VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupPresentCapabilitiesKHX(
    VkDevice                                    device,
    VkDeviceGroupPresentCapabilitiesKHX*        pDeviceGroupPresentCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupSurfacePresentModesKHX(
    VkDevice                                    device,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHX*           pModes);
VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImage2KHX(
    VkDevice                                    device,
    const VkAcquireNextImageInfoKHX*            pAcquireInfo,
    uint32_t*                                   pImageIndex);
VKAPI_ATTR void VKAPI_CALL CmdDispatchBaseKHX(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDevicePresentRectanglesKHX(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects);
#ifdef VK_USE_PLATFORM_VI_NN
VKAPI_ATTR VkResult VKAPI_CALL CreateViSurfaceNN(
    VkInstance                                  instance,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDeviceGroupsKHX(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupPropertiesKHX*         pPhysicalDeviceGroupProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalBufferPropertiesKHX(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfoKHX* pExternalBufferInfo,
    VkExternalBufferPropertiesKHX*              pExternalBufferProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties2KHX(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2KHX*             pProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties2KHX(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2KHX*  pImageFormatInfo,
    VkImageFormatProperties2KHX*                pImageFormatProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleKHX(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    HANDLE*                                     pHandle);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandlePropertiesKHX(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    HANDLE                                      handle,
    VkMemoryWin32HandlePropertiesKHX*           pMemoryWin32HandleProperties);
#endif
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdKHX(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    int*                                        pFd);
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdPropertiesKHX(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBitsKHX       handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHX*                    pMemoryFdProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalSemaphorePropertiesKHX(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfoKHX* pExternalSemaphoreInfo,
    VkExternalSemaphorePropertiesKHX*           pExternalSemaphoreProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHX
VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreWin32HandleKHX(
    VkDevice                                    device,
    const VkImportSemaphoreWin32HandleInfoKHX*  pImportSemaphoreWin32HandleInfo);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHX
VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreWin32HandleKHX(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    VkExternalSemaphoreHandleTypeFlagBitsKHX    handleType,
    HANDLE*                                     pHandle);
#endif
VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreFdKHX(
    VkDevice                                    device,
    const VkImportSemaphoreFdInfoKHX*           pImportSemaphoreFdInfo);
VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreFdKHX(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    VkExternalSemaphoreHandleTypeFlagBitsKHX    handleType,
    int*                                        pFd);
VKAPI_ATTR void VKAPI_CALL CmdProcessCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo);
VKAPI_ATTR void VKAPI_CALL CmdReserveSpaceForCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo);
VKAPI_ATTR VkResult VKAPI_CALL CreateIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout);
VKAPI_ATTR void VKAPI_CALL DestroyIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateObjectTableNVX(
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable);
VKAPI_ATTR void VKAPI_CALL DestroyObjectTableNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL RegisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices);
VKAPI_ATTR VkResult VKAPI_CALL UnregisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    VkPhysicalDevice                            physicalDevice,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits);
VKAPI_ATTR void VKAPI_CALL CmdSetViewportWScalingNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewportWScalingNV*                 pViewportWScalings);
VKAPI_ATTR VkResult VKAPI_CALL ReleaseDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display);
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
VKAPI_ATTR VkResult VKAPI_CALL AcquireXlibDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    VkDisplayKHR                                display);
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
VKAPI_ATTR VkResult VKAPI_CALL GetRandROutputDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay);
#endif
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL DisplayPowerControlEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo);
VKAPI_ATTR VkResult VKAPI_CALL RegisterDeviceEventEXT(
    VkDevice                                    device,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VKAPI_ATTR VkResult VKAPI_CALL RegisterDisplayEventEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainCounterEXT(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue);
VKAPI_ATTR void VKAPI_CALL CmdSetDiscardRectangleEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles);
#ifdef VK_USE_PLATFORM_IOS_MVK
VKAPI_ATTR VkResult VKAPI_CALL CreateIOSSurfaceMVK(
    VkInstance                                  instance,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
VKAPI_ATTR VkResult VKAPI_CALL CreateMacOSSurfaceMVK(
    VkInstance                                  instance,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
// Intercepts
struct { const char* name; PFN_vkVoidFunction pFunc;} procmap[] = {
    {"vkCreateInstance", reinterpret_cast<PFN_vkVoidFunction>(CreateInstance)},
    {"vkDestroyInstance", reinterpret_cast<PFN_vkVoidFunction>(DestroyInstance)},
    {"vkEnumeratePhysicalDevices", reinterpret_cast<PFN_vkVoidFunction>(EnumeratePhysicalDevices)},
    {"vkGetPhysicalDeviceFeatures", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceFeatures)},
    {"vkGetPhysicalDeviceFormatProperties", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceFormatProperties)},
    {"vkGetPhysicalDeviceImageFormatProperties", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceImageFormatProperties)},
    {"vkGetPhysicalDeviceProperties", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceProperties)},
    {"vkGetPhysicalDeviceQueueFamilyProperties", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceQueueFamilyProperties)},
    {"vkGetPhysicalDeviceMemoryProperties", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceMemoryProperties)},
    {"vkGetInstanceProcAddr", reinterpret_cast<PFN_vkVoidFunction>(GetInstanceProcAddr)},
    {"vkGetDeviceProcAddr", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceProcAddr)},
    {"vkCreateDevice", reinterpret_cast<PFN_vkVoidFunction>(CreateDevice)},
    {"vkDestroyDevice", reinterpret_cast<PFN_vkVoidFunction>(DestroyDevice)},
    {"vkEnumerateDeviceExtensionProperties", reinterpret_cast<PFN_vkVoidFunction>(EnumerateDeviceExtensionProperties)},
    {"vkGetDeviceQueue", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceQueue)},
    {"vkQueueSubmit", reinterpret_cast<PFN_vkVoidFunction>(QueueSubmit)},
    {"vkQueueWaitIdle", reinterpret_cast<PFN_vkVoidFunction>(QueueWaitIdle)},
    {"vkDeviceWaitIdle", reinterpret_cast<PFN_vkVoidFunction>(DeviceWaitIdle)},
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
    {"vkGetPhysicalDeviceSparseImageFormatProperties", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSparseImageFormatProperties)},
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
    {"vkEndCommandBuffer", reinterpret_cast<PFN_vkVoidFunction>(EndCommandBuffer)},
    {"vkResetCommandBuffer", reinterpret_cast<PFN_vkVoidFunction>(ResetCommandBuffer)},
    {"vkCmdBindPipeline", reinterpret_cast<PFN_vkVoidFunction>(CmdBindPipeline)},
    {"vkCmdSetViewport", reinterpret_cast<PFN_vkVoidFunction>(CmdSetViewport)},
    {"vkCmdSetScissor", reinterpret_cast<PFN_vkVoidFunction>(CmdSetScissor)},
    {"vkCmdSetLineWidth", reinterpret_cast<PFN_vkVoidFunction>(CmdSetLineWidth)},
    {"vkCmdSetDepthBias", reinterpret_cast<PFN_vkVoidFunction>(CmdSetDepthBias)},
    {"vkCmdSetBlendConstants", reinterpret_cast<PFN_vkVoidFunction>(CmdSetBlendConstants)},
    {"vkCmdSetDepthBounds", reinterpret_cast<PFN_vkVoidFunction>(CmdSetDepthBounds)},
    {"vkCmdSetStencilCompareMask", reinterpret_cast<PFN_vkVoidFunction>(CmdSetStencilCompareMask)},
    {"vkCmdSetStencilWriteMask", reinterpret_cast<PFN_vkVoidFunction>(CmdSetStencilWriteMask)},
    {"vkCmdSetStencilReference", reinterpret_cast<PFN_vkVoidFunction>(CmdSetStencilReference)},
    {"vkCmdBindDescriptorSets", reinterpret_cast<PFN_vkVoidFunction>(CmdBindDescriptorSets)},
    {"vkCmdBindIndexBuffer", reinterpret_cast<PFN_vkVoidFunction>(CmdBindIndexBuffer)},
    {"vkCmdBindVertexBuffers", reinterpret_cast<PFN_vkVoidFunction>(CmdBindVertexBuffers)},
    {"vkCmdDraw", reinterpret_cast<PFN_vkVoidFunction>(CmdDraw)},
    {"vkCmdDrawIndexed", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndexed)},
    {"vkCmdDrawIndirect", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndirect)},
    {"vkCmdDrawIndexedIndirect", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndexedIndirect)},
    {"vkCmdDispatch", reinterpret_cast<PFN_vkVoidFunction>(CmdDispatch)},
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
    {"vkCmdClearAttachments", reinterpret_cast<PFN_vkVoidFunction>(CmdClearAttachments)},
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
    {"vkCmdNextSubpass", reinterpret_cast<PFN_vkVoidFunction>(CmdNextSubpass)},
    {"vkCmdEndRenderPass", reinterpret_cast<PFN_vkVoidFunction>(CmdEndRenderPass)},
    {"vkCmdExecuteCommands", reinterpret_cast<PFN_vkVoidFunction>(CmdExecuteCommands)},
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
    {"vkGetPhysicalDeviceDisplayPropertiesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceDisplayPropertiesKHR)},
    {"vkGetPhysicalDeviceDisplayPlanePropertiesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceDisplayPlanePropertiesKHR)},
    {"vkGetDisplayPlaneSupportedDisplaysKHR", reinterpret_cast<PFN_vkVoidFunction>(GetDisplayPlaneSupportedDisplaysKHR)},
    {"vkGetDisplayModePropertiesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetDisplayModePropertiesKHR)},
    {"vkCreateDisplayModeKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateDisplayModeKHR)},
    {"vkGetDisplayPlaneCapabilitiesKHR", reinterpret_cast<PFN_vkVoidFunction>(GetDisplayPlaneCapabilitiesKHR)},
    {"vkCreateDisplayPlaneSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateDisplayPlaneSurfaceKHR)},
    {"vkCreateSharedSwapchainsKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateSharedSwapchainsKHR)},
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkCreateXlibSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateXlibSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkGetPhysicalDeviceXlibPresentationSupportKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceXlibPresentationSupportKHR)},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkCreateXcbSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateXcbSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkGetPhysicalDeviceXcbPresentationSupportKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceXcbPresentationSupportKHR)},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkCreateWaylandSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateWaylandSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkGetPhysicalDeviceWaylandPresentationSupportKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceWaylandPresentationSupportKHR)},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkCreateMirSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateMirSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkGetPhysicalDeviceMirPresentationSupportKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceMirPresentationSupportKHR)},
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    {"vkCreateAndroidSurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateAndroidSurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkCreateWin32SurfaceKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateWin32SurfaceKHR)},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetPhysicalDeviceWin32PresentationSupportKHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceWin32PresentationSupportKHR)},
#endif
    {"vkGetPhysicalDeviceFeatures2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceFeatures2KHR)},
    {"vkGetPhysicalDeviceProperties2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceProperties2KHR)},
    {"vkGetPhysicalDeviceFormatProperties2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceFormatProperties2KHR)},
    {"vkGetPhysicalDeviceImageFormatProperties2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceImageFormatProperties2KHR)},
    {"vkGetPhysicalDeviceQueueFamilyProperties2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceQueueFamilyProperties2KHR)},
    {"vkGetPhysicalDeviceMemoryProperties2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceMemoryProperties2KHR)},
    {"vkGetPhysicalDeviceSparseImageFormatProperties2KHR", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceSparseImageFormatProperties2KHR)},
    {"vkTrimCommandPoolKHR", reinterpret_cast<PFN_vkVoidFunction>(TrimCommandPoolKHR)},
    {"vkCmdPushDescriptorSetKHR", reinterpret_cast<PFN_vkVoidFunction>(CmdPushDescriptorSetKHR)},
    {"vkCreateDescriptorUpdateTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(CreateDescriptorUpdateTemplateKHR)},
    {"vkDestroyDescriptorUpdateTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(DestroyDescriptorUpdateTemplateKHR)},
    {"vkUpdateDescriptorSetWithTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(UpdateDescriptorSetWithTemplateKHR)},
    {"vkCmdPushDescriptorSetWithTemplateKHR", reinterpret_cast<PFN_vkVoidFunction>(CmdPushDescriptorSetWithTemplateKHR)},
    {"vkCreateDebugReportCallbackEXT", reinterpret_cast<PFN_vkVoidFunction>(CreateDebugReportCallbackEXT)},
    {"vkDestroyDebugReportCallbackEXT", reinterpret_cast<PFN_vkVoidFunction>(DestroyDebugReportCallbackEXT)},
    {"vkDebugReportMessageEXT", reinterpret_cast<PFN_vkVoidFunction>(DebugReportMessageEXT)},
    {"vkDebugMarkerSetObjectTagEXT", reinterpret_cast<PFN_vkVoidFunction>(DebugMarkerSetObjectTagEXT)},
    {"vkDebugMarkerSetObjectNameEXT", reinterpret_cast<PFN_vkVoidFunction>(DebugMarkerSetObjectNameEXT)},
    {"vkCmdDebugMarkerBeginEXT", reinterpret_cast<PFN_vkVoidFunction>(CmdDebugMarkerBeginEXT)},
    {"vkCmdDebugMarkerInsertEXT", reinterpret_cast<PFN_vkVoidFunction>(CmdDebugMarkerInsertEXT)},
    {"vkCmdDrawIndirectCountAMD", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndirectCountAMD)},
    {"vkCmdDrawIndexedIndirectCountAMD", reinterpret_cast<PFN_vkVoidFunction>(CmdDrawIndexedIndirectCountAMD)},
    {"vkGetPhysicalDeviceExternalImageFormatPropertiesNV", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceExternalImageFormatPropertiesNV)},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleNV", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryWin32HandleNV)},
#endif
    {"vkGetDeviceGroupPeerMemoryFeaturesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceGroupPeerMemoryFeaturesKHX)},
    {"vkBindBufferMemory2KHX", reinterpret_cast<PFN_vkVoidFunction>(BindBufferMemory2KHX)},
    {"vkBindImageMemory2KHX", reinterpret_cast<PFN_vkVoidFunction>(BindImageMemory2KHX)},
    {"vkCmdSetDeviceMaskKHX", reinterpret_cast<PFN_vkVoidFunction>(CmdSetDeviceMaskKHX)},
    {"vkGetDeviceGroupPresentCapabilitiesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceGroupPresentCapabilitiesKHX)},
    {"vkGetDeviceGroupSurfacePresentModesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetDeviceGroupSurfacePresentModesKHX)},
    {"vkAcquireNextImage2KHX", reinterpret_cast<PFN_vkVoidFunction>(AcquireNextImage2KHX)},
    {"vkCmdDispatchBaseKHX", reinterpret_cast<PFN_vkVoidFunction>(CmdDispatchBaseKHX)},
    {"vkGetPhysicalDevicePresentRectanglesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDevicePresentRectanglesKHX)},
#ifdef VK_USE_PLATFORM_VI_NN
    {"vkCreateViSurfaceNN", reinterpret_cast<PFN_vkVoidFunction>(CreateViSurfaceNN)},
#endif
    {"vkEnumeratePhysicalDeviceGroupsKHX", reinterpret_cast<PFN_vkVoidFunction>(EnumeratePhysicalDeviceGroupsKHX)},
    {"vkGetPhysicalDeviceExternalBufferPropertiesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceExternalBufferPropertiesKHX)},
    {"vkGetPhysicalDeviceProperties2KHX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceProperties2KHX)},
    {"vkGetPhysicalDeviceImageFormatProperties2KHX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceImageFormatProperties2KHX)},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleKHX", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryWin32HandleKHX)},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandlePropertiesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryWin32HandlePropertiesKHX)},
#endif
    {"vkGetMemoryFdKHX", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryFdKHX)},
    {"vkGetMemoryFdPropertiesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetMemoryFdPropertiesKHX)},
    {"vkGetPhysicalDeviceExternalSemaphorePropertiesKHX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceExternalSemaphorePropertiesKHX)},
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
    {"vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", reinterpret_cast<PFN_vkVoidFunction>(GetPhysicalDeviceGeneratedCommandsPropertiesNVX)},
    {"vkCmdSetViewportWScalingNV", reinterpret_cast<PFN_vkVoidFunction>(CmdSetViewportWScalingNV)},
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
    {"vkCmdSetDiscardRectangleEXT", reinterpret_cast<PFN_vkVoidFunction>(CmdSetDiscardRectangleEXT)},
#ifdef VK_USE_PLATFORM_IOS_MVK
    {"vkCreateIOSSurfaceMVK", reinterpret_cast<PFN_vkVoidFunction>(CreateIOSSurfaceMVK)},
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    {"vkCreateMacOSSurfaceMVK", reinterpret_cast<PFN_vkVoidFunction>(CreateMacOSSurfaceMVK)},
#endif
};


} // namespace parameter_validation

#endif
