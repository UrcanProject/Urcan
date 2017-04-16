//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_BASIC_CONFIGURATION_HPP
# define VULKAN_BASIC_CONFIGURATION_HPP

#include <vector>

namespace urcan {
	const int WIDTH = 800;
	const int HEIGHT = 600;
}

const std::vector<const char*> validationLayers = {
		"VK_LAYER_LUNARG_standard_validation"
};

template <class T, class U>
union uConverter
{
	T *src;
	U *dest;
};

#endif //VULKAN_BASIC_CONFIGURATION_HPP
