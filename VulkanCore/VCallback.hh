//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_VCALLBACK_HH
#define VULKAN_VCALLBACK_HH

#include <vulkan/vulkan.hpp>
#include "BasicConfiguration.hpp"

namespace urcan {
	class VCallback {
	private:
		vk::DebugReportCallbackEXT _callback;
		VDeleter<vk::Instance, vk::InstanceDeleter>& _instance;

	public:
		VCallback(VDeleter<vk::Instance, vk::InstanceDeleter>& instance);
		virtual ~VCallback();

	public:
		vk::DebugReportCallbackEXT& getCallback() ;
		void init();
		static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objType, uint64_t obj,
															size_t location, int32_t code, const char* layerPrefix, const char* msg, void* userData);
	};
}

#endif //VULKAN_VCALLBACK_HH
