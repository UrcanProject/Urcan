//
// Created by Guillaume on 14/04/2017.
//

#include <iostream>
#include <cstring>
#include <GLFW/glfw3.h>
#include "UrcanInstance.hh"

std::mutex urcan::UrcanInstance::_instanceMutex;
bool urcan::UrcanInstance::_fullyInitialized = false;

urcan::UrcanInstance::UrcanInstance() {
}

urcan::UrcanInstance::~UrcanInstance() {
	_callback.del(static_cast<VkInstance>(vk::Instance(_instance)));
}

urcan::UrcanInstance& urcan::UrcanInstance::get() {
	static urcan::UrcanInstance instance;
	ScopeLock lock(_instanceMutex);

	if (!_fullyInitialized)
		instance.initVulkan();
	return instance;
}

void urcan::UrcanInstance::initVulkan() {
	createInstance();
	setupDebugCallback();
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
