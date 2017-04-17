//
// Created by Guillaume on 14/04/2017.
//

#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#include "UrcanInstance.hh"

std::mutex urcan::UrcanInstance::_instanceMutex;
bool urcan::UrcanInstance::_fullyInitialized = false;
urcan::GLFWCore urcan::UrcanInstance::_glfwCore;

urcan::UrcanInstance::UrcanInstance() {
}

urcan::UrcanInstance::~UrcanInstance() {
	_callback.del(static_cast<VkInstance>(vk::Instance(_instance)));
}

urcan::UrcanInstance* urcan::UrcanInstance::getInstance() {
	static urcan::UrcanInstance instance;
	ScopeLock lock(_instanceMutex);

	if (!_fullyInitialized) {
		instance.initVulkan();
	}
	return &instance;
}

GLFWwindow* urcan::UrcanInstance::getWindow() {
	return _glfwCore.getWindow();
}

GLFWwindow* urcan::UrcanInstance::replaceWindow(GLFWwindow* win) {
	return _glfwCore.replaceWindow(win);
}

void urcan::UrcanInstance::initVulkan() {
	createInstance();
	setupDebugCallback();
	createSurface();
	pickPhysicalDevice();
	createLogicalDevice();
	createSwapChain();
}

void urcan::UrcanInstance::createInstance() {
	if (enableValidationLayers && !checkValidationLayerSupport()) {
		throw std::runtime_error("validation layers requested, but not available!");
	}

	vk::ApplicationInfo appInfo("Hello Triangle", VK_MAKE_VERSION(1, 0, 0), "Urcan", VK_MAKE_VERSION(1, 0, 0), VK_API_VERSION_1_0);

	auto extensions = getRequiredExtensions();
	vk::InstanceCreateFlags createFlags = vk::InstanceCreateFlags();
	vk::InstanceCreateInfo createInfo(createFlags, &appInfo, enableValidationLayers ? validationLayers.size() : 0,
									  enableValidationLayers ? validationLayers.data() : nullptr, extensions.size(), extensions.data());

	vk::Result r;
	if ((r = vk::createInstance(&createInfo, nullptr, _instance.replace())) != vk::Result::eSuccess) {
		std::cout << (int) r << (int) vk::Result::eErrorExtensionNotPresent << std::endl;
		throw std::runtime_error("failed to create instance!");
	}
}

bool urcan::UrcanInstance::checkValidationLayerSupport() {
	uint32_t layerCount;
	vk::enumerateInstanceLayerProperties(&layerCount, nullptr);

	std::vector<vk::LayerProperties> availableLayers(layerCount);
	vk::enumerateInstanceLayerProperties(&layerCount, availableLayers.data());

	for (const char* layerName : validationLayers) {
		bool layerFound = false;

		for (const auto& layerProperties : availableLayers) {
			if (strcmp(layerName, layerProperties.layerName) == 0) {
				layerFound = true;
				break;
			}
		}

		if (!layerFound) {
			return false;
		}
	}

	return true;
}

std::vector<const char*> urcan::UrcanInstance::getRequiredExtensions() {
	std::vector<const char*> extensions;

	unsigned int glfwExtensionCount = 0;
	const char** glfwExtensions;
	glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

	for (unsigned int i = 0; i < glfwExtensionCount; i++) {
		extensions.push_back(glfwExtensions[i]);
	}

	if (enableValidationLayers) {
		extensions.push_back(VK_EXT_DEBUG_REPORT_EXTENSION_NAME);
	}

	return extensions;
}

void urcan::UrcanInstance::setupDebugCallback() {
	if (!enableValidationLayers)
		return;
	this->_callback.init(static_cast<VkInstance>(vk::Instance(_instance)));
}

void urcan::UrcanInstance::pickPhysicalDevice() {
	uint32_t deviceCount = 0;
	_instance.get().enumeratePhysicalDevices(&deviceCount, nullptr);
	if (deviceCount == 0) {
		throw std::runtime_error("failed to find GPUs with Vulkan support!");
	}
	std::vector<vk::PhysicalDevice> devices(deviceCount);
	_instance.get().enumeratePhysicalDevices(&deviceCount, devices.data());
	for (const auto& device : devices) {
		if (isDeviceSuitable(device)) {
			_physicalDevice = device;
			break;
		}
	}

	if (_physicalDevice == VK_NULL_HANDLE) {
		throw std::runtime_error("failed to find a suitable GPU!");
	}
}

bool urcan::UrcanInstance::isDeviceSuitable(vk::PhysicalDevice device) {
	QueueFamilyIndices indices = findQueueFamilies(device);

	bool extensionsSupported = checkDeviceExtensionSupport(device);

	bool swapChainAdequate = false;
	if (extensionsSupported) {
		SwapChainSupportDetails swapChainSupport = querySwapChainSupport(device);
		swapChainAdequate = !swapChainSupport.formats.empty() && !swapChainSupport.presentModes.empty();
	}

	return indices.isComplete() && extensionsSupported && swapChainAdequate;
}

urcan::UrcanInstance::QueueFamilyIndices urcan::UrcanInstance::findQueueFamilies(vk::PhysicalDevice device) {
	QueueFamilyIndices indices;

	uint32_t queueFamilyCount = 0;
	device.getQueueFamilyProperties(&queueFamilyCount, nullptr);

	std::vector<vk::QueueFamilyProperties> queueFamilies(queueFamilyCount);
	device.getQueueFamilyProperties(&queueFamilyCount, queueFamilies.data());

	int i = 0;
	for (const auto& queueFamily : queueFamilies) {
		if (queueFamily.queueCount > 0 && queueFamily.queueFlags & vk::QueueFlagBits::eGraphics) {
			indices.graphicsFamily = i;
		}

		vk::Bool32 presentSupport = VK_FALSE;
		device.getSurfaceSupportKHR(static_cast<uint32_t>(i), _surface, &presentSupport);

		if (queueFamily.queueCount > 0 && presentSupport) {
			indices.presentFamily = i;
		}

		if (indices.isComplete()) {
			break;
		}

		i++;
	}

	return indices;
}

void urcan::UrcanInstance::createLogicalDevice() {
	QueueFamilyIndices indices = findQueueFamilies(_physicalDevice);

	std::vector<vk::DeviceQueueCreateInfo> queueCreateInfos;
	std::set<int> uniqueQueueFamilies = {indices.graphicsFamily, indices.presentFamily};

	float queuePriority = 1.0f;
	for (int queueFamily : uniqueQueueFamilies) {
		vk::DeviceQueueCreateInfo queueCreateInfo = {vk::DeviceQueueCreateFlags(), static_cast<uint32_t>(queueFamily), 1, &queuePriority};
		queueCreateInfos.push_back(queueCreateInfo);
	}

	vk::PhysicalDeviceFeatures deviceFeatures = {};

	vk::DeviceCreateInfo createInfo = {vk::DeviceCreateFlags(), static_cast<uint32_t>(queueCreateInfos.size()), queueCreateInfos.data(),
									   enableValidationLayers ? validationLayers.size() : 0, enableValidationLayers ? validationLayers.data() : nullptr,
									   deviceExtensions.size(), deviceExtensions.data(), &deviceFeatures};

	if (_physicalDevice.createDevice(&createInfo, nullptr, _device.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create logical device!");
	}

	_device.get().getQueue(static_cast<uint32_t>(indices.graphicsFamily), 0, &_graphicsQueue);
	_device.get().getQueue(static_cast<uint32_t>(indices.presentFamily), 0, &_presentQueue);
}

void urcan::UrcanInstance::createSurface() {
	VkSurfaceKHR tmpSurface;
	if (glfwCreateWindowSurface(static_cast<VkInstance>(_instance.get()), _glfwCore.getWindow(), nullptr, &tmpSurface) != VK_SUCCESS) {
		throw std::runtime_error("failed to create window surface!");
	}
	*_surface.replace() = vk::SurfaceKHR(tmpSurface);
}

bool urcan::UrcanInstance::checkDeviceExtensionSupport(vk::PhysicalDevice device) {
	uint32_t extensionCount;
	device.enumerateDeviceExtensionProperties(nullptr, &extensionCount, nullptr);

	std::vector<vk::ExtensionProperties> availableExtensions(extensionCount);
	device.enumerateDeviceExtensionProperties(nullptr, &extensionCount, availableExtensions.data());

	std::set<std::string> requiredExtensions(deviceExtensions.begin(), deviceExtensions.end());

	for (const auto& extension : availableExtensions) {
		requiredExtensions.erase(extension.extensionName);
	}

	return requiredExtensions.empty();
}

urcan::UrcanInstance::SwapChainSupportDetails urcan::UrcanInstance::querySwapChainSupport(vk::PhysicalDevice device) {
	SwapChainSupportDetails details;

	device.getSurfaceCapabilitiesKHR(_surface, &details.capabilities);

	uint32_t formatCount;
	device.getSurfaceFormatsKHR(_surface, &formatCount, nullptr);

	if (formatCount != 0) {
		details.formats.resize(formatCount);
		device.getSurfaceFormatsKHR(_surface, &formatCount, details.formats.data());
	}

	uint32_t presentModeCount;
	device.getSurfacePresentModesKHR(_surface, &presentModeCount, nullptr);

	if (presentModeCount != 0) {
		details.presentModes.resize(presentModeCount);
		device.getSurfacePresentModesKHR(_surface, &presentModeCount, details.presentModes.data());
	}
	return details;
}

vk::SurfaceFormatKHR urcan::UrcanInstance::chooseSwapSurfaceFormat(const std::vector<vk::SurfaceFormatKHR>& availableFormats) {
	if (availableFormats.size() == 1 && availableFormats[0].format == vk::Format::eUndefined) {
		return {vk::Format::eB8G8R8A8Unorm, vk::ColorSpaceKHR::eSrgbNonlinear};
	}

	for (const auto& availableFormat : availableFormats) {
		if (availableFormat.format == vk::Format::eB8G8R8A8Unorm && availableFormat.colorSpace == vk::ColorSpaceKHR::eSrgbNonlinear) {
			return availableFormat;
		}
	}

	return availableFormats[0];
}

vk::PresentModeKHR urcan::UrcanInstance::chooseSwapPresentMode(const std::vector<vk::PresentModeKHR> availablePresentModes) {
	vk::PresentModeKHR bestMode = vk::PresentModeKHR::eFifo;

	for (const auto& availablePresentMode : availablePresentModes) {
		if (availablePresentMode == vk::PresentModeKHR::eMailbox) {
			return availablePresentMode;
		} else if (availablePresentMode == vk::PresentModeKHR::eImmediate) {
			bestMode = availablePresentMode;
		}
	}

	return bestMode;
}

vk::Extent2D urcan::UrcanInstance::chooseSwapExtent(const vk::SurfaceCapabilitiesKHR& capabilities) {
	if (capabilities.currentExtent.width != std::numeric_limits<uint32_t>::max()) {
		return capabilities.currentExtent;
	} else {
		vk::Extent2D actualExtent = {WIDTH, HEIGHT};

		actualExtent.width = std::max(capabilities.minImageExtent.width, std::min(capabilities.maxImageExtent.width, actualExtent.width));
		actualExtent.height = std::max(capabilities.minImageExtent.height, std::min(capabilities.maxImageExtent.height, actualExtent.height));

		return actualExtent;
	}
}

void urcan::UrcanInstance::createSwapChain() {
	SwapChainSupportDetails swapChainSupport = querySwapChainSupport(_physicalDevice);

	vk::SurfaceFormatKHR surfaceFormat = chooseSwapSurfaceFormat(swapChainSupport.formats);
	vk::PresentModeKHR presentMode = chooseSwapPresentMode(swapChainSupport.presentModes);
	vk::Extent2D extent = chooseSwapExtent(swapChainSupport.capabilities);
	uint32_t imageCount = swapChainSupport.capabilities.minImageCount + 1;
	if (swapChainSupport.capabilities.maxImageCount > 0 && imageCount > swapChainSupport.capabilities.maxImageCount) {
		imageCount = swapChainSupport.capabilities.maxImageCount;
	}

	vk::SwapchainCreateInfoKHR createInfo = {vk::SwapchainCreateFlagsKHR(), _surface, imageCount, surfaceFormat.format,
											 surfaceFormat.colorSpace, extent, 1, vk::ImageUsageFlagBits::eColorAttachment,
											 vk::SharingMode::eExclusive, 0, nullptr, swapChainSupport.capabilities.currentTransform,
											 vk::CompositeAlphaFlagBitsKHR::eOpaque, presentMode, VK_TRUE, VK_NULL_HANDLE};

	QueueFamilyIndices indices = findQueueFamilies(_physicalDevice);
	uint32_t queueFamilyIndices[] = {static_cast<uint32_t>(indices.graphicsFamily), static_cast<uint32_t>(indices.presentFamily)};
	if (indices.graphicsFamily != indices.presentFamily) {
		createInfo.imageSharingMode = vk::SharingMode::eConcurrent;
		createInfo.queueFamilyIndexCount = 2;
		createInfo.pQueueFamilyIndices = queueFamilyIndices;
	}

	if (_device.get().createSwapchainKHR(&createInfo, nullptr, _swapChain.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create swap chain!");
	}
}
