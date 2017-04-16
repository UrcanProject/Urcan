//
// Created by Guillaume on 14/04/2017.
//

#include <iostream>
#include <cstring>
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

void urcan::UrcanInstance::initVulkan() {
	createInstance();
	setupDebugCallback();
	createSurface();
	pickPhysicalDevice();
	createLogicalDevice();
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
			physicalDevice = device;
			break;
		}
	}

	if (physicalDevice == VK_NULL_HANDLE) {
		throw std::runtime_error("failed to find a suitable GPU!");
	}
}

bool urcan::UrcanInstance::isDeviceSuitable(vk::PhysicalDevice device) {
	QueueFamilyIndices indices = findQueueFamilies(device);

	return indices.isComplete();
}

urcan::QueueFamilyIndices urcan::UrcanInstance::findQueueFamilies(vk::PhysicalDevice device) {
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

		if (indices.isComplete()) {
			break;
		}

		i++;
	}

	return indices;
}

void urcan::UrcanInstance::createLogicalDevice() {
	QueueFamilyIndices indices = findQueueFamilies(physicalDevice);

	float queuePriority = 1.0f;
	vk::DeviceQueueCreateInfo queueCreateInfo = {vk::DeviceQueueCreateFlagBits(), static_cast<uint32_t>(indices.graphicsFamily), 1, &queuePriority};
	vk::PhysicalDeviceFeatures deviceFeatures = {};
	vk::DeviceCreateInfo createInfo = {vk::DeviceCreateFlags(), 1, &queueCreateInfo, 0, nullptr, 0, nullptr, &deviceFeatures};
	if (enableValidationLayers) {

		createInfo.enabledLayerCount = validationLayers.size();
		createInfo.ppEnabledLayerNames = validationLayers.data();
	} else {
		createInfo.enabledLayerCount = 0;
	}
	if (physicalDevice.createDevice(&createInfo, nullptr, _device.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create logical device!");
	}
	_device.get().getQueue(static_cast<uint32_t>(indices.graphicsFamily), 0, &graphicsQueue);
}

void urcan::UrcanInstance::createSurface() {
	VkSurfaceKHR tmpSurface;
	if (glfwCreateWindowSurface(static_cast<VkInstance>(_instance.get()), _glfwCore.getWindow(), nullptr, &tmpSurface) != VK_SUCCESS) {
		throw std::runtime_error("failed to create window surface!");
	}
	*_surface.replace() = vk::SurfaceKHR(tmpSurface);
}
