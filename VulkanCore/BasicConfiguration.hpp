//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_BASIC_CONFIGURATION_HPP
# define VULKAN_BASIC_CONFIGURATION_HPP

#include <vector>
#include <vulkan/vulkan.hpp>
#include "Buffers/Vertex.hh"

namespace urcan {
	const int WIDTH = 800;
	const int HEIGHT = 600;
}

const std::vector<const char*> validationLayers = {
		"VK_LAYER_LUNARG_standard_validation"
};

const std::vector<const char*> deviceExtensions = {
		VK_KHR_SWAPCHAIN_EXTENSION_NAME
};

template <class T, class U>
union uConverter
{
	T *src;
	U *dest;
};

const std::vector<Vertex> vertices = {
		{{-0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}},
		{{0.5f, -0.5f}, {0.0f, 1.0f, 0.0f}},
		{{0.5f, 0.5f}, {0.0f, 0.0f, 1.0f}},
		{{-0.5f, 0.5f}, {1.0f, 1.0f, 1.0f}}
};

const std::vector<uint16_t> indices = {
		0, 1, 2, 2, 3, 0
};

#endif //VULKAN_BASIC_CONFIGURATION_HPP
