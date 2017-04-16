//
// Created by Guillaume on 16/04/2017.
//

#include "BasicConfiguration.hpp"
#include "GLFWCore.hh"

static void keyCallback(GLFWwindow* window, int key, int, int action, int) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, 1);
}

urcan::GLFWCore::GLFWCore() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	_window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
	glfwSetKeyCallback(_window, keyCallback);
}

urcan::GLFWCore::~GLFWCore() {
	glfwDestroyWindow(_window);

	glfwTerminate();
}

GLFWwindow* urcan::GLFWCore::getWindow() {
	return _window;
}

