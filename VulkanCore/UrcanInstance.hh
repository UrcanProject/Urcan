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
	class UrcanInstance {
	private:
		struct QueueFamilyIndices {
			int graphicsFamily = -1;
			int presentFamily = -1;

			bool isComplete() {
				return graphicsFamily >= 0 && presentFamily >= 0;
			}
		};

		struct SwapChainSupportDetails {
			vk::SurfaceCapabilitiesKHR capabilities;
			std::vector<vk::SurfaceFormatKHR> formats;
			std::vector<vk::PresentModeKHR> presentModes;
		};

	private:
		static std::mutex _instanceMutex;
		static bool _fullyInitialized;
		static GLFWCore _glfwCore;

	private:
		VDeleter<vk::Instance, vk::InstanceDeleter> _instance;
		VDeleter<vk::Device, vk::DeviceDeleter> _device;
		VDeleterExtended<vk::SurfaceKHR, vk::SurfaceKHRDeleter, VDeleter<vk::Instance, vk::InstanceDeleter>> _surface {_instance};
		VDeleterExtended<vk::SwapchainKHR, vk::SwapchainKHRDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> _swapChain {_device};
		VDeleterExtended<vk::PipelineLayout, vk::PipelineLayoutDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> _pipelineLayout {_device};
		VDeleterExtended<vk::RenderPass, vk::RenderPassDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> _renderPass {_device};
		VDeleterExtended<vk::Pipeline, vk::PipelineDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> _graphicsPipeline {_device};
		VCallback _callback;
		vk::PhysicalDevice _physicalDevice;
		vk::Queue _graphicsQueue;
		vk::Queue _presentQueue;

	private:
		std::vector<vk::Image> _swapChainImages;
		vk::Format _swapChainImageFormat;
		vk::Extent2D _swapChainExtent;
		std::vector<VDeleterExtended<vk::ImageView, vk::ImageViewDeleter, VDeleter<vk::Device, vk::DeviceDeleter>>> _swapChainImageViews;
		std::vector<VDeleterExtended<vk::Framebuffer, vk::FramebufferDeleter, VDeleter<vk::Device, vk::DeviceDeleter>>> _swapChainFramebuffers;

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
		void createLogicalDevice();
		void createSurface();
		void createSwapChain();
		void createImageViews();
		void createGraphicsPipeline();
		void createRenderPass();
		void createFramebuffers();

	private:
		bool checkValidationLayerSupport();
		std::vector<const char*> getRequiredExtensions();

	private:
		bool isDeviceSuitable(vk::PhysicalDevice device);
		QueueFamilyIndices findQueueFamilies(vk::PhysicalDevice device);
		bool checkDeviceExtensionSupport(vk::PhysicalDevice device);
		SwapChainSupportDetails querySwapChainSupport(vk::PhysicalDevice device);

	private:
		vk::SurfaceFormatKHR chooseSwapSurfaceFormat(const std::vector<vk::SurfaceFormatKHR>& availableFormats);
		vk::PresentModeKHR chooseSwapPresentMode(const std::vector<vk::PresentModeKHR> availablePresentModes);
		vk::Extent2D chooseSwapExtent(const vk::SurfaceCapabilitiesKHR& capabilities);

	private:
		void createShaderModule(const std::vector<char>& code, urcan::VDeleterExtended<vk::ShaderModule, vk::ShaderModuleDeleter,
				VDeleter<vk::Device, vk::DeviceDeleter>>& shaderModule);

	public:
		static UrcanInstance* getInstance();
		static GLFWwindow* getWindow();
		static GLFWwindow* replaceWindow(GLFWwindow* win);
	};
}

#endif //VULKAN_URCANINSTANCE_HH
