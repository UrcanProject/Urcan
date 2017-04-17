#define GLFW_INCLUDE_VULKAN

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE

#ifndef VULKAN_HPP_TYPESAFE_CONVERSION
# define VULKAN_HPP_TYPESAFE_CONVERSION
#endif /* VULKAN_HPP_TYPESAFE_CONVERSION */

#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

#include <vulkan/vulkan.hpp>
#include "UrcanApp.hh"

int main() {
	urcan::UrcanApp app;

	try {
		app.run();
	} catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}