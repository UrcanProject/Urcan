//
// Created by Guillaume on 01/05/2017.
//

#ifndef VULKAN_UNIFORMBUFFEROBJECT_HH
#define VULKAN_UNIFORMBUFFEROBJECT_HH

#include <glm/glm.hpp>

struct UniformBufferObject {
	glm::mat4 model;
	glm::mat4 view;
	glm::mat4 proj;
};


#endif //VULKAN_UNIFORMBUFFEROBJECT_HH
