//
// Created by Guillaume on 14/04/2017.
//

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

#ifndef VULKAN_URCANINSTANCE_HH
#define VULKAN_URCANINSTANCE_HH

#include <memory>
#include <vulkan/vulkan.hpp>
#include "VDeleter.hpp"
#include "ScopeLock.hh"
#include "VCallback.hh"
#include "BasicConfiguration.hpp"

void DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);

namespace urcan {
	class UrcanInstance {
	private:
		static std::mutex _instanceMutex;
		static bool _fullyInitialized;

	private:
		VDeleter<vk::Instance, vk::InstanceDeleter> _instance;
		VCallback _callback;

	private:
		UrcanInstance();
		virtual ~UrcanInstance();
		UrcanInstance(UrcanInstance const& src);
		UrcanInstance& operator=(UrcanInstance const& src);

	private:
		void initVulkan();
		void createInstance();
		void setupDebugCallback();

	private:
		bool checkValidationLayerSupport();
		std::vector<const char*> getRequiredExtensions();


	public:
		static UrcanInstance& get();
	};
}

#endif //VULKAN_URCANINSTANCE_HH
