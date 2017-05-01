//
// Created by Guillaume on 14/04/2017.
//


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <chrono>
#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#include "UrcanInstance.hh"
#include "Utils.h"
#include "Buffers/UniformBufferObject.hh"

std::mutex urcan::UrcanInstance::_instanceMutex;
bool urcan::UrcanInstance::_fullyInitialized = false;
urcan::GLFWCore urcan::UrcanInstance::_glfwCore;

urcan::UrcanInstance::UrcanInstance() : _callback(_instance) {
}

urcan::UrcanInstance::~UrcanInstance() {
	this->_fullyInitialized = false;
}

urcan::UrcanInstance *urcan::UrcanInstance::getOrCreateInstance() {
	if (!_fullyInitialized) {
		ScopeLock lock(_instanceMutex);
		if (!_fullyInitialized) {
			getInstance()->initVulkan();
		}
	}
	return getInstance();
}

GLFWwindow *urcan::UrcanInstance::getWindow() {
	return _glfwCore.getWindow();
}

GLFWwindow *urcan::UrcanInstance::replaceWindow(GLFWwindow *win) {
	_glfwCore.replaceWindow(win);
	UrcanInstance::getInstance()->notifyWindowChange();
	return win;
}

void urcan::UrcanInstance::initVulkan() {
	createInstance();
	setupDebugCallback();
	createSurface();
	pickPhysicalDevice();
	createLogicalDevice();
	createSwapChain();
	createImageViews();
	createRenderPass();
	createDescriptorSetLayout();
	createGraphicsPipeline();
	createFramebuffers();
	createCommandPool();
	createVertexBuffer();
	createIndexBuffer();
	createUniformBuffer();
	createDescriptorPool();
	createDescriptorSet();
	createCommandBuffers();
	createSemaphores();
	_fullyInitialized = true;
}

void urcan::UrcanInstance::createInstance() {
	if (enableValidationLayers && !checkValidationLayerSupport()) {
		throw std::runtime_error("validation layers requested, but not available!");
	}

	vk::ApplicationInfo appInfo("Hello Triangle", VK_MAKE_VERSION(1, 0, 0), "Urcan", VK_MAKE_VERSION(1, 0, 0),
								VK_API_VERSION_1_0);

	auto extensions = getRequiredExtensions();
	vk::InstanceCreateFlags createFlags = vk::InstanceCreateFlags();
	vk::InstanceCreateInfo createInfo(createFlags, &appInfo, enableValidationLayers ? validationLayers.size() : 0,
									  enableValidationLayers ? validationLayers.data() : nullptr, extensions.size(),
									  extensions.data());

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

	for (const char *layerName : validationLayers) {
		bool layerFound = false;

		for (const auto &layerProperties : availableLayers) {
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

std::vector<const char *> urcan::UrcanInstance::getRequiredExtensions() {
	std::vector<const char *> extensions;

	unsigned int glfwExtensionCount = 0;
	const char **glfwExtensions;
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
	this->_callback.init();
}

void urcan::UrcanInstance::pickPhysicalDevice() {
	uint32_t deviceCount = 0;
	_instance.get().enumeratePhysicalDevices(&deviceCount, nullptr);
	if (deviceCount == 0) {
		throw std::runtime_error("failed to find GPUs with Vulkan support!");
	}
	std::vector<vk::PhysicalDevice> devices(deviceCount);
	_instance.get().enumeratePhysicalDevices(&deviceCount, devices.data());
	for (const auto &device : devices) {
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
	for (const auto &queueFamily : queueFamilies) {
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
		vk::DeviceQueueCreateInfo queueCreateInfo = {vk::DeviceQueueCreateFlags(), static_cast<uint32_t>(queueFamily),
													 1, &queuePriority};
		queueCreateInfos.push_back(queueCreateInfo);
	}

	vk::PhysicalDeviceFeatures deviceFeatures = {};

	vk::DeviceCreateInfo createInfo = {vk::DeviceCreateFlags(), static_cast<uint32_t>(queueCreateInfos.size()),
									   queueCreateInfos.data(),
									   enableValidationLayers ? validationLayers.size() : 0,
									   enableValidationLayers ? validationLayers.data() : nullptr,
									   deviceExtensions.size(), deviceExtensions.data(), &deviceFeatures};

	if (_physicalDevice.createDevice(&createInfo, nullptr, _device.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create logical device!");
	}

	_device.get().getQueue(static_cast<uint32_t>(indices.graphicsFamily), 0, &_graphicsQueue);
	_device.get().getQueue(static_cast<uint32_t>(indices.presentFamily), 0, &_presentQueue);
}

void urcan::UrcanInstance::createSurface() {
	VkSurfaceKHR tmpSurface;
	if (glfwCreateWindowSurface(static_cast<VkInstance>(_instance.get()), _glfwCore.getWindow(), nullptr,
								&tmpSurface) != VK_SUCCESS) {
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

	for (const auto &extension : availableExtensions) {
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

vk::SurfaceFormatKHR urcan::UrcanInstance::chooseSwapSurfaceFormat(const std::vector<vk::SurfaceFormatKHR> &availableFormats) {
	if (availableFormats.size() == 1 && availableFormats[0].format == vk::Format::eUndefined) {
		return {vk::Format::eB8G8R8A8Unorm, vk::ColorSpaceKHR::eSrgbNonlinear};
	}

	for (const auto &availableFormat : availableFormats) {
		if (availableFormat.format == vk::Format::eB8G8R8A8Unorm &&
			availableFormat.colorSpace == vk::ColorSpaceKHR::eSrgbNonlinear) {
			return availableFormat;
		}
	}

	return availableFormats[0];
}

vk::PresentModeKHR urcan::UrcanInstance::chooseSwapPresentMode(const std::vector<vk::PresentModeKHR> availablePresentModes) {
	vk::PresentModeKHR bestMode = vk::PresentModeKHR::eFifo;

	for (const auto &availablePresentMode : availablePresentModes) {
		if (availablePresentMode == vk::PresentModeKHR::eMailbox) {
			return availablePresentMode;
		}
		if (availablePresentMode == vk::PresentModeKHR::eImmediate) {
			bestMode = availablePresentMode;
		}
	}

	return bestMode;
}

vk::Extent2D urcan::UrcanInstance::chooseSwapExtent(const vk::SurfaceCapabilitiesKHR &capabilities) {
	if (capabilities.currentExtent.width != std::numeric_limits<uint32_t>::max()) {
		return capabilities.currentExtent;
	} else {
		int width, height;
		glfwGetWindowSize(_glfwCore.getWindow(), &width, &height);

		vk::Extent2D actualExtent = {static_cast<uint32_t>(width), static_cast<uint32_t>(height)};

		actualExtent.width = std::max(capabilities.minImageExtent.width,
									  std::min(capabilities.maxImageExtent.width, actualExtent.width));
		actualExtent.height = std::max(capabilities.minImageExtent.height,
									   std::min(capabilities.maxImageExtent.height, actualExtent.height));

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
											 surfaceFormat.colorSpace, extent, 1,
											 vk::ImageUsageFlagBits::eColorAttachment,
											 vk::SharingMode::eExclusive, 0, nullptr,
											 swapChainSupport.capabilities.currentTransform,
											 vk::CompositeAlphaFlagBitsKHR::eOpaque, presentMode, VK_TRUE,
											 VK_NULL_HANDLE};

	QueueFamilyIndices indices = findQueueFamilies(_physicalDevice);
	uint32_t queueFamilyIndices[] = {static_cast<uint32_t>(indices.graphicsFamily),
									 static_cast<uint32_t>(indices.presentFamily)};
	if (indices.graphicsFamily != indices.presentFamily) {
		createInfo.imageSharingMode = vk::SharingMode::eConcurrent;
		createInfo.queueFamilyIndexCount = 2;
		createInfo.pQueueFamilyIndices = queueFamilyIndices;
	}

	vk::SwapchainKHR oldSwapChain = _swapChain;
	createInfo.oldSwapchain = oldSwapChain;

	vk::SwapchainKHR newSwapChain;
	if (_device.get().createSwapchainKHR(&createInfo, nullptr, &newSwapChain) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create swap chain!");
	}

	_swapChain = newSwapChain;

	_device.get().getSwapchainImagesKHR(_swapChain, &imageCount, nullptr);
	_swapChainImages.resize(imageCount);
	_device.get().getSwapchainImagesKHR(_swapChain, &imageCount, _swapChainImages.data());
	_swapChainImageFormat = surfaceFormat.format;
	_swapChainExtent = extent;
}

void urcan::UrcanInstance::createImageViews() {
	_swapChainImageViews.clear();
	for (uint32_t i = 0; i < _swapChainImages.size(); i++)
		_swapChainImageViews.push_back(
				VDeleterExtended<vk::ImageView, vk::ImageViewDeleter, VDeleter<vk::Device, vk::DeviceDeleter>>{
						_device});
	for (uint32_t i = 0; i < _swapChainImages.size(); i++) {
		vk::ImageViewCreateInfo createInfo = {vk::ImageViewCreateFlags(), _swapChainImages[i], vk::ImageViewType::e2D,
											  _swapChainImageFormat, {}, {vk::ImageAspectFlagBits::eColor, 0, 1, 0, 1}};
		if (_device.get().createImageView(&createInfo, nullptr, _swapChainImageViews[i].replace()) !=
			vk::Result::eSuccess) {
			throw std::runtime_error("failed to create image views!");
		}
	}
}

void urcan::UrcanInstance::createGraphicsPipeline() {
	VDeleterExtended<vk::ShaderModule, vk::ShaderModuleDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> vertShaderModule{_device};
	VDeleterExtended<vk::ShaderModule, vk::ShaderModuleDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> fragShaderModule{_device};

	auto vertShaderCode = urcan::utils::readFile("../shaders/vert.spv");
	auto fragShaderCode = urcan::utils::readFile("../shaders/frag.spv");

	createShaderModule(vertShaderCode, vertShaderModule);
	createShaderModule(fragShaderCode, fragShaderModule);

	vk::PipelineShaderStageCreateInfo vertShaderStageInfo = {vk::PipelineShaderStageCreateFlags(),
															 vk::ShaderStageFlagBits::eVertex,
															 vertShaderModule, "main"};
	vk::PipelineShaderStageCreateInfo fragShaderStageInfo = {vk::PipelineShaderStageCreateFlags(),
															 vk::ShaderStageFlagBits::eFragment,
															 fragShaderModule, "main"};
	vk::PipelineShaderStageCreateInfo shaderStages[] = {vertShaderStageInfo, fragShaderStageInfo};

	vk::PipelineVertexInputStateCreateInfo vertexInputInfo;
	auto bindingDescription = Vertex::getBindingDescription();
	auto attributeDescriptions = Vertex::getAttributeDescriptions();

	vertexInputInfo.vertexBindingDescriptionCount = 1;
	vertexInputInfo.vertexAttributeDescriptionCount = attributeDescriptions.size();
	vertexInputInfo.pVertexBindingDescriptions = &bindingDescription;
	vertexInputInfo.pVertexAttributeDescriptions = attributeDescriptions.data();

	vk::PipelineInputAssemblyStateCreateInfo inputAssembly = {vk::PipelineInputAssemblyStateCreateFlags(),
															  vk::PrimitiveTopology::eTriangleList, VK_FALSE};

	vk::Viewport viewport = {0.0f, 0.0f, static_cast<float>( _swapChainExtent.width),
							 static_cast<float>( _swapChainExtent.height), 0.0f, 1.0f};
	vk::Rect2D scissor = {{0, 0}, _swapChainExtent};
	vk::PipelineViewportStateCreateInfo viewportState = {vk::PipelineViewportStateCreateFlags(), 1, &viewport, 1, &scissor};

	vk::PipelineRasterizationStateCreateInfo rasterizer = {vk::PipelineRasterizationStateCreateFlags(), VK_FALSE,
														   VK_FALSE, vk::PolygonMode::eFill, vk::CullModeFlagBits::eBack,
														   vk::FrontFace::eCounterClockwise, VK_FALSE, 0, 0, 0, 1.0};

	vk::PipelineMultisampleStateCreateInfo multisampling = {vk::PipelineMultisampleStateCreateFlags(), vk::SampleCountFlagBits::e1,
															VK_FALSE, 1.0f, nullptr, VK_FALSE, VK_FALSE};

	vk::PipelineColorBlendAttachmentState colorBlendAttachment = {VK_FALSE};
	colorBlendAttachment.colorWriteMask = vk::ColorComponentFlagBits::eR | vk::ColorComponentFlagBits::eG |
										  vk::ColorComponentFlagBits::eB | vk::ColorComponentFlagBits::eA;
	vk::PipelineColorBlendStateCreateInfo colorBlending = {vk::PipelineColorBlendStateCreateFlags(), VK_FALSE,
														   vk::LogicOp::eCopy, 1, &colorBlendAttachment};

	vk::DescriptorSetLayout setLayouts[] = {_descriptorSetLayout};
	vk::PipelineLayoutCreateInfo pipelineLayoutInfo = {vk::PipelineLayoutCreateFlags(), 1, setLayouts};
	if (_device.get().createPipelineLayout(&pipelineLayoutInfo, nullptr, _pipelineLayout.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create pipeline layout!");
	}

	vk::GraphicsPipelineCreateInfo pipelineInfo = {vk::PipelineCreateFlags(), 2, shaderStages, &vertexInputInfo, &inputAssembly, nullptr, &viewportState, &rasterizer,
												   &multisampling, nullptr, &colorBlending, nullptr, _pipelineLayout, _renderPass, 0, VK_NULL_HANDLE, -1};

	if (_device.get().createGraphicsPipelines(VK_NULL_HANDLE, 1, &pipelineInfo, nullptr, _graphicsPipeline.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create graphics pipeline!");
	}
}

void urcan::UrcanInstance::createShaderModule(const std::vector<char> &code,
											  urcan::VDeleterExtended<vk::ShaderModule, vk::ShaderModuleDeleter,
													  VDeleter<vk::Device, vk::DeviceDeleter>> &shaderModule) {

	std::vector<uint32_t> codeAligned(code.size() / sizeof(uint32_t) + 1);
	memcpy(codeAligned.data(), code.data(), code.size());
	vk::ShaderModuleCreateInfo createInfo = {vk::ShaderModuleCreateFlags(), code.size(), codeAligned.data()};

	if (_device.get().createShaderModule(&createInfo, nullptr, shaderModule.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create shader module!");
	}
}

void urcan::UrcanInstance::createRenderPass() {
	vk::AttachmentDescription colorAttachment = {vk::AttachmentDescriptionFlags(), _swapChainImageFormat, vk::SampleCountFlagBits::e1, vk::AttachmentLoadOp::eClear,
												 vk::AttachmentStoreOp::eStore, vk::AttachmentLoadOp::eDontCare, vk::AttachmentStoreOp::eDontCare,
												 vk::ImageLayout::eUndefined, vk::ImageLayout::ePresentSrcKHR};
	vk::AttachmentReference colorAttachmentRef = {0, vk::ImageLayout::eColorAttachmentOptimal};
	vk::SubpassDescription subpass = {vk::SubpassDescriptionFlags(), vk::PipelineBindPoint::eGraphics, 0, nullptr, 1, &colorAttachmentRef};

	vk::SubpassDependency dependency = {VK_SUBPASS_EXTERNAL, 0, vk::PipelineStageFlagBits::eColorAttachmentOutput, vk::PipelineStageFlagBits::eColorAttachmentOutput,
										vk::AccessFlags(), vk::AccessFlagBits::eColorAttachmentRead | vk::AccessFlagBits::eColorAttachmentWrite};

	vk::RenderPassCreateInfo renderPassInfo = {vk::RenderPassCreateFlags(), 1, &colorAttachment, 1, &subpass, 1, &dependency};
	if (_device.get().createRenderPass(&renderPassInfo, nullptr, _renderPass.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create render pass!");
	}
}

void urcan::UrcanInstance::createFramebuffers() {
	_swapChainFramebuffers.clear();
	for (size_t i = 0; i < _swapChainImageViews.size(); i++)
		_swapChainFramebuffers.push_back(VDeleterExtended<vk::Framebuffer, vk::FramebufferDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> {_device});
	for (size_t i = 0; i < _swapChainImageViews.size(); i++) {
		vk::ImageView attachments[] = {
				_swapChainImageViews[i].get()
		};

		vk::FramebufferCreateInfo framebufferInfo = {vk::FramebufferCreateFlags(), _renderPass, 1, attachments, _swapChainExtent.width, _swapChainExtent.height, 1};

		if (_device.get().createFramebuffer(&framebufferInfo, nullptr, _swapChainFramebuffers[i].replace()) != vk::Result::eSuccess) {
			throw std::runtime_error("failed to create framebuffer!");
		}
	}
}

void urcan::UrcanInstance::createCommandPool() {
	QueueFamilyIndices queueFamilyIndices = findQueueFamilies(_physicalDevice);

	vk::CommandPoolCreateInfo poolInfo = {vk::CommandPoolCreateFlags(), static_cast<uint32_t>(queueFamilyIndices.graphicsFamily)};
	if (_device.get().createCommandPool(&poolInfo, nullptr, _commandPool.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create command pool!");
	}
}

void urcan::UrcanInstance::createCommandBuffers() {
	if (_commandBuffers.size() > 0) {
		_device.get().freeCommandBuffers(_commandPool, _commandBuffers.size(), _commandBuffers.data());
	}

	_commandBuffers.resize(_swapChainFramebuffers.size());
	vk::CommandBufferAllocateInfo allocInfo = {_commandPool, vk::CommandBufferLevel::ePrimary, static_cast<uint32_t>(_commandBuffers.size())};

	if (_device.get().allocateCommandBuffers(&allocInfo, _commandBuffers.data()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to allocate command buffers!");
	}

	for (size_t i = 0; i < _commandBuffers.size(); i++) {
		vk::CommandBufferBeginInfo beginInfo = {vk::CommandBufferUsageFlagBits::eSimultaneousUse, nullptr};
		_commandBuffers[i].begin(&beginInfo);

		const std::array<float, 4> clearColorTmp {0.0f, 0.0f, 0.0f, 1.0f};
		vk::ClearValue clearColor (clearColorTmp);
		vk::RenderPassBeginInfo renderPassInfo = {_renderPass, _swapChainFramebuffers[i], {{0, 0}, _swapChainExtent}, 1, &clearColor};
		_commandBuffers[i].beginRenderPass(&renderPassInfo, vk::SubpassContents::eInline);
		_commandBuffers[i].bindPipeline(vk::PipelineBindPoint::eGraphics, _graphicsPipeline);
		vk::Buffer vertexBuffers[] = {_vertexBuffer};
		vk::DeviceSize offsets[] = {0};
		_commandBuffers[i].bindVertexBuffers(0, 1, vertexBuffers, offsets);
		_commandBuffers[i].bindIndexBuffer(_indexBuffer, 0, vk::IndexType::eUint16);
		_commandBuffers[i].bindDescriptorSets(vk::PipelineBindPoint::eGraphics, _pipelineLayout, 0, 1, &_descriptorSet, 0, nullptr);
		_commandBuffers[i].drawIndexed(indices.size(), 1, 0, 0, 0);
		_commandBuffers[i].endRenderPass();
		_commandBuffers[i].end();
	}
}

void urcan::UrcanInstance::createSemaphores() {
	vk::SemaphoreCreateInfo semaphoreInfo = {};
	if (_device.get().createSemaphore(&semaphoreInfo, nullptr, _imageAvailableSemaphore.replace()) != vk::Result::eSuccess ||
		_device.get().createSemaphore(&semaphoreInfo, nullptr, _renderFinishedSemaphore.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create semaphores!");
	}
}

void urcan::UrcanInstance::drawFrame() {
	uint32_t imageIndex;
	vk::Result result = _device.get().acquireNextImageKHR(_swapChain, std::numeric_limits<uint64_t>::max(), _imageAvailableSemaphore, VK_NULL_HANDLE, &imageIndex);

	if (result == vk::Result::eErrorOutOfDateKHR || result == vk::Result::eSuboptimalKHR) {
		recreateSwapChain();
		return;
	} else if (result != vk::Result::eSuccess) {
		throw std::runtime_error("failed to acquire swap chain image!");
	}

	vk::Semaphore waitSemaphores[] = {_imageAvailableSemaphore};
	vk::PipelineStageFlags waitStages[] = {vk::PipelineStageFlagBits::eColorAttachmentOutput};
	vk::Semaphore signalSemaphores[] = {_renderFinishedSemaphore};

	vk::SubmitInfo submitInfo = {1, waitSemaphores, waitStages, 1, &_commandBuffers[imageIndex], 1, signalSemaphores};
	if (_graphicsQueue.submit(1, &submitInfo, VK_NULL_HANDLE) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to submit draw command buffer!");
	}

	vk::SwapchainKHR swapChains[] = {_swapChain};
	vk::PresentInfoKHR presentInfo = {1, signalSemaphores, 1, swapChains, &imageIndex};
	_presentQueue.presentKHR(&presentInfo);
}

void urcan::UrcanInstance::waitIdle() {
	_device.get().waitIdle();
}

void urcan::UrcanInstance::recreateSwapChain() {
	_device.get().waitIdle();

	createSwapChain();
	createImageViews();
	createRenderPass();
	createGraphicsPipeline();
	createFramebuffers();
	createCommandBuffers();
}

void urcan::UrcanInstance::notifyWindowChange() {
	this->recreateSwapChain();
}

void urcan::UrcanInstance::createVertexBuffer() {

	vk::DeviceSize bufferSize = sizeof(vertices[0]) * vertices.size();
	VDeleterExtended<vk::Buffer, vk::BufferDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> stagingBuffer {_device};
	VDeleterExtended<vk::DeviceMemory, vk::DeviceMemoryDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> stagingBufferMemory {_device};
	createBuffer(bufferSize, vk::BufferUsageFlagBits::eTransferSrc,  vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent, stagingBuffer, stagingBufferMemory);

	void* data;
	_device.get().mapMemory(stagingBufferMemory, 0, bufferSize, static_cast<vk::MemoryMapFlagBits>(0), &data);
	memcpy(data, vertices.data(), static_cast<size_t>(bufferSize));
	_device.get().unmapMemory(stagingBufferMemory);

	createBuffer(bufferSize, vk::BufferUsageFlagBits::eTransferDst | vk::BufferUsageFlagBits::eVertexBuffer, vk::MemoryPropertyFlagBits::eDeviceLocal, _vertexBuffer, _vertexBufferMemory);
	copyBuffer(stagingBuffer, _vertexBuffer, bufferSize);
}

void urcan::UrcanInstance::createIndexBuffer() {
	vk::DeviceSize bufferSize = sizeof(indices[0]) * indices.size();
	VDeleterExtended<vk::Buffer, vk::BufferDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> stagingBuffer {_device};
	VDeleterExtended<vk::DeviceMemory, vk::DeviceMemoryDeleter, VDeleter<vk::Device, vk::DeviceDeleter>> stagingBufferMemory {_device};
	createBuffer(bufferSize, vk::BufferUsageFlagBits::eTransferSrc,  vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent, stagingBuffer, stagingBufferMemory);

	void* data;
	_device.get().mapMemory(stagingBufferMemory, 0, bufferSize, static_cast<vk::MemoryMapFlagBits>(0), &data);
	memcpy(data, indices.data(), static_cast<size_t>(bufferSize));
	_device.get().unmapMemory(stagingBufferMemory);

	createBuffer(bufferSize, vk::BufferUsageFlagBits::eTransferDst | vk::BufferUsageFlagBits::eIndexBuffer, vk::MemoryPropertyFlagBits::eDeviceLocal, _indexBuffer, _indexBufferMemory);
	copyBuffer(stagingBuffer, _indexBuffer, bufferSize);
}

uint32_t urcan::UrcanInstance::findMemoryType(uint32_t typeFilter, vk::MemoryPropertyFlags properties) {
	vk::PhysicalDeviceMemoryProperties memProperties;
	_physicalDevice.getMemoryProperties(&memProperties);

		for (uint32_t i = 0; i < memProperties.memoryTypeCount; i++) {
			if ((typeFilter & (1 << i)) && (memProperties.memoryTypes[i].propertyFlags & properties) == properties) {
				return i;
			}
		}

	throw std::runtime_error("failed to find suitable memory type!");
}

void urcan::UrcanInstance::createBuffer(vk::DeviceSize size,
										vk::BufferUsageFlags usage,
										vk::MemoryPropertyFlags properties,
										urcan::VDeleterExtended<vk::Buffer, vk::BufferDeleter, urcan::VDeleter<vk::Device, vk::DeviceDeleter>>& buffer,
										urcan::VDeleterExtended<vk::DeviceMemory, vk::DeviceMemoryDeleter, urcan::VDeleter<vk::Device, vk::DeviceDeleter>>& bufferMemory) {
	vk::BufferCreateInfo bufferInfo = {vk::BufferCreateFlags(), size, usage, vk::SharingMode::eExclusive};
	if (_device.get().createBuffer(&bufferInfo, nullptr, buffer.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create vertex buffer!");
	}

	vk::MemoryRequirements memRequirements;
	_device.get().getBufferMemoryRequirements(buffer, &memRequirements);

	vk::MemoryAllocateInfo allocInfo = {memRequirements.size, findMemoryType(memRequirements.memoryTypeBits, properties)};
	if (_device.get().allocateMemory(&allocInfo, nullptr, bufferMemory.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to allocate vertex buffer memory!");
	}
	_device.get().bindBufferMemory(buffer, bufferMemory, 0);
}

void urcan::UrcanInstance::copyBuffer(vk::Buffer srcBuffer, vk::Buffer dstBuffer, vk::DeviceSize size) {
	vk::CommandBufferAllocateInfo allocInfo = {_commandPool, vk::CommandBufferLevel::ePrimary, 1};
	vk::CommandBuffer commandBuffer;
	_device.get().allocateCommandBuffers(&allocInfo, &commandBuffer);

	vk::CommandBufferBeginInfo beginInfo = {vk::CommandBufferUsageFlagBits::eOneTimeSubmit};
	commandBuffer.begin(&beginInfo);

	vk::BufferCopy copyRegion = {0, 0, size};
	commandBuffer.copyBuffer(srcBuffer, dstBuffer, 1, &copyRegion);
	commandBuffer.end();

	vk::SubmitInfo submitInfo = {};
	submitInfo.commandBufferCount = 1;
	submitInfo.pCommandBuffers = &commandBuffer;
	_graphicsQueue.submit(1, &submitInfo, VK_NULL_HANDLE);
	_graphicsQueue.waitIdle();
	_device.get().freeCommandBuffers(_commandPool, 1, &commandBuffer);
}

void urcan::UrcanInstance::createDescriptorSetLayout() {
	vk::DescriptorSetLayoutBinding uboLayoutBinding = {0, vk::DescriptorType::eUniformBuffer, 1, vk::ShaderStageFlagBits::eVertex, nullptr};
	vk::DescriptorSetLayoutCreateInfo layoutInfo = {vk::DescriptorSetLayoutCreateFlags(), 1, &uboLayoutBinding};

	if (_device.get().createDescriptorSetLayout(&layoutInfo, nullptr, _descriptorSetLayout.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create descriptor set layout!");
	}
}

void urcan::UrcanInstance::createUniformBuffer() {
	vk::DeviceSize bufferSize = sizeof(UniformBufferObject);

	createBuffer(bufferSize, vk::BufferUsageFlagBits::eTransferSrc, vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent, _uniformStagingBuffer, _uniformStagingBufferMemory);
	createBuffer(bufferSize, vk::BufferUsageFlagBits::eTransferDst | vk::BufferUsageFlagBits::eUniformBuffer, vk::MemoryPropertyFlagBits::eDeviceLocal, _uniformBuffer, _uniformBufferMemory);
}

void urcan::UrcanInstance::updateUniformBuffer() {
	static auto startTime = std::chrono::high_resolution_clock::now();
	auto currentTime = std::chrono::high_resolution_clock::now();
	float time = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count() / 1000.0f;
	UniformBufferObject ubo;
	ubo.model = glm::rotate(glm::mat4(), time * glm::radians(90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	ubo.view = glm::lookAt(glm::vec3(2.0f, 2.0f, 2.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	ubo.proj = glm::perspective(glm::radians(45.0f), _swapChainExtent.width / static_cast<float>(_swapChainExtent.height), 0.1f, 10.0f);
	ubo.proj[1][1] *= -1;

	void* data;
	_device.get().mapMemory(_uniformStagingBufferMemory, 0, sizeof(ubo), static_cast<vk::MemoryMapFlagBits>(0), &data);
	memcpy(data, &ubo, sizeof(ubo));
	_device.get().unmapMemory(_uniformStagingBufferMemory);

	copyBuffer(_uniformStagingBuffer, _uniformBuffer, sizeof(ubo));
}

void urcan::UrcanInstance::createDescriptorPool() {
	vk::DescriptorPoolSize poolSize = {vk::DescriptorType::eUniformBuffer, 1};
	vk::DescriptorPoolCreateInfo poolInfo = {vk::DescriptorPoolCreateFlags(), 1, 1, &poolSize};
	if (_device.get().createDescriptorPool(&poolInfo, nullptr, _descriptorPool.replace()) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to create descriptor pool!");
	}
}

void urcan::UrcanInstance::createDescriptorSet() {
	vk::DescriptorSetLayout layouts[] = {_descriptorSetLayout};
	vk::DescriptorSetAllocateInfo allocInfo = {_descriptorPool, 1, layouts};
	if (_device.get().allocateDescriptorSets(&allocInfo, &_descriptorSet) != vk::Result::eSuccess) {
		throw std::runtime_error("failed to allocate descriptor set!");
	}
	vk::DescriptorBufferInfo bufferInfo = {_uniformBuffer, 0, sizeof(UniformBufferObject)};
	vk::WriteDescriptorSet descriptorWrite = {_descriptorSet, 0, 0, 1, vk::DescriptorType::eUniformBuffer, nullptr, &bufferInfo, nullptr};
	_device.get().updateDescriptorSets(1, &descriptorWrite, 0, nullptr);
}
