//
// Created by Guillaume on 30/04/2017.
//

#ifndef VULKAN_VERTEX_HH
#define VULKAN_VERTEX_HH

#include <glm/glm.hpp>
#include <vulkan/vulkan.hpp>

struct Vertex {
	glm::vec2 pos;
	glm::vec3 color;

	static vk::VertexInputBindingDescription getBindingDescription();
	static std::array<vk::VertexInputAttributeDescription, 2> getAttributeDescriptions();
};


#endif //VULKAN_VERTEX_HH
