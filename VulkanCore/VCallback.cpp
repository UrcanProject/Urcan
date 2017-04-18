//
// Created by Guillaume on 14/04/2017.
//

#include "UrcanInstance.hh"
#include "VCallback.hh"

VkResult CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) {
	auto func = (PFN_vkCreateDebugReportCallbackEXT) vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
	if (func != nullptr) {
		return func(instance, pCreateInfo, pAllocator, pCallback);
	} else {
		return VK_ERROR_EXTENSION_NOT_PRESENT;
	}
}

void DestroyDebugReportCallbackEXT(VkInstance instance, vk::DebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) {
	auto func = (PFN_vkDestroyDebugReportCallbackEXT) vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
	if (func != nullptr) {
		func(instance, static_cast<VkDebugReportCallbackEXT>(callback), pAllocator);
	}
}

urcan::VCallback::VCallback(VDeleter<vk::Instance, vk::InstanceDeleter>& instance) : _instance(instance) {}

urcan::VCallback::~VCallback() {
	DestroyDebugReportCallbackEXT(static_cast<VkInstance>(_instance.get()), _callback, nullptr);
}

vk::DebugReportCallbackEXT& urcan::VCallback::getCallback() {
	return this->_callback;
}


VkBool32 VKAPI_CALL urcan::VCallback::debugCallback(VkDebugReportFlagsEXT , VkDebugReportObjectTypeEXT , uint64_t , size_t ,
														int32_t , const char* , const char* msg, void* ) {
	std::cerr << "validation layer: " << msg << std::endl;
	return VK_FALSE;
}

void urcan::VCallback::init() {
	if (!enableValidationLayers)
		return;
	vk::DebugReportCallbackCreateInfoEXT createInfo(vk::DebugReportFlagBitsEXT::eWarning | vk::DebugReportFlagBitsEXT::eError , debugCallback);
	VkDebugReportCallbackCreateInfoEXT tmpInfo = static_cast<VkDebugReportCallbackCreateInfoEXT>(createInfo);
	VkDebugReportCallbackEXT tmpCall;
	if (CreateDebugReportCallbackEXT(static_cast<VkInstance>(_instance.get()), &tmpInfo, nullptr, &tmpCall) != VK_SUCCESS) {
		throw std::runtime_error("failed to set up debug callback!");
	}
	_callback = vk::DebugReportCallbackEXT(tmpCall);
}
