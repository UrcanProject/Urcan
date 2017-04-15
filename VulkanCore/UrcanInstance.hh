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
	struct QueueFamilyIndices {
		int graphicsFamily = -1;

		bool isComplete() {
			return graphicsFamily >= 0;
		}
	};

	class UrcanInstance {
	private:
		static std::mutex _instanceMutex;
		static bool _fullyInitialized;

	private:
		VDeleter<vk::Instance, vk::InstanceDeleter> _instance;
		VDeleter<vk::Device, vk::DeviceDeleter> _device;
		VDeleter<vk::SurfaceKHR, vk::SurfaceKHRDeleter> _surface {_instance};
		VCallback _callback;
		vk::PhysicalDevice physicalDevice;
		vk::Queue graphicsQueue;

	private:
		UrcanInstance();
		virtual ~UrcanInstance();
		UrcanInstance(UrcanInstance const& src);
		UrcanInstance& operator=(UrcanInstance const& src);

	private:
		void initVulkan();
		void createInstance();
		void setupDebugCallback();
		void pickPhysicalDevice();
		bool isDeviceSuitable(vk::PhysicalDevice device);
		QueueFamilyIndices findQueueFamilies(vk::PhysicalDevice device);
		void createLogicalDevice();

	private:
		bool checkValidationLayerSupport();
		std::vector<const char*> getRequiredExtensions();


	public:
		static UrcanInstance& get();
	};
}

#endif //VULKAN_URCANINSTANCE_HH
