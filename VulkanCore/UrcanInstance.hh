//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_URCANINSTANCE_HH
#define VULKAN_URCANINSTANCE_HH

#ifndef NDEBUG
const bool enableValidationLayers = true;
#else
const bool enableValidationLayers = false;
#endif

#include <memory>
#include <vulkan/vulkan.hpp>
#include <GLFW/glfw3.h>
#include "VDeleter.hpp"
#include "ScopeLock.hh"
#include "VCallback.hh"
#include "BasicConfiguration.hpp"
#include "GLFWCore.hh"

namespace urcan {
	struct QueueFamilyIndices {
		int graphicsFamily = -1;
		int presentFamily = -1;

		bool isComplete() {
			return graphicsFamily >= 0 && presentFamily >= 0;
		}
	};

	class UrcanInstance {
	private:
		static std::mutex _instanceMutex;
		static bool _fullyInitialized;
		static GLFWCore _glfwCore;

	private:
		VDeleter<vk::Instance, vk::InstanceDeleter> _instance;
		VDeleter<vk::Device, vk::DeviceDeleter> _device;
		VDeleterExtended<vk::SurfaceKHR, vk::SurfaceKHRDeleter, VDeleter<vk::Instance, vk::InstanceDeleter>> _surface {_instance};
		VCallback _callback;
		vk::PhysicalDevice _physicalDevice;
		vk::Queue _graphicsQueue;
		vk::Queue _presentQueue;

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
		void createLogicalDevice();
		void createSurface();

	private:
		bool checkValidationLayerSupport();
		std::vector<const char*> getRequiredExtensions();
		QueueFamilyIndices findQueueFamilies(vk::PhysicalDevice device);
		bool checkDeviceExtensionSupport(vk::PhysicalDevice device);

	public:
		static UrcanInstance* getInstance();
		static GLFWwindow* getWindow();
		static GLFWwindow* replaceWindow(GLFWwindow* win);
	};
}

#endif //VULKAN_URCANINSTANCE_HH
