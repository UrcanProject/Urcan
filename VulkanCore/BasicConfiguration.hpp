//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_BASIC_CONFIGURATION_HPP
# define VULKAN_BASIC_CONFIGURATION_HPP

namespace urcan {
	const int WIDTH = 800;
	const int HEIGHT = 600;
}

const std::vector<const char*> validationLayers = {
		"VK_LAYER_LUNARG_standard_validation"
};



template <class T, class U>
union uConverter
{
	T *src;
	U *dest;
};

/*
vk::Result CreateDebugReportCallbackEXT(vk::Instance instance, const vk::DebugReportCallbackCreateInfoEXT* pCreateInfo, const vk::AllocationCallbacks* pAllocator, vk::DebugReportCallbackEXT* pCallback) {
	auto func = (PFN_vkCreateDebugReportCallbackEXT) instance.getProcAddr("vkCreateDebugReportCallbackEXT");
	if (func != nullptr) {
		uConverter<vk::DebugReportCallbackEXT, VkDebugReportCallbackEXT> conv;
		conv.src = pCallback;
		VkDebugReportCallbackEXT*  ptr = nullptr;
		return static_cast<vk::Result>(func(instance, pCreateInfo, pAllocator, ptr));
	}
	return vk::Result::eErrorExtensionNotPresent;
}*/

#endif //VULKAN_BASIC_CONFIGURATION_HPP
