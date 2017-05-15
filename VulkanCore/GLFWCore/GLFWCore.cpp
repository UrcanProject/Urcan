//
// Created by Guillaume on 16/04/2017.
//

#include <UrcanInstance.hh>
#include <Camera.hh>
#include <synchapi.h>
#include "BasicConfiguration.hpp"
#include "GLFWCore.hh"

static void keyCallback(GLFWwindow* window, int key, int, int action, int) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		std::cout << "HELLO" << std::endl;
		glfwSetWindowShouldClose(window, 1);
	}
	if (key == GLFW_KEY_Q) {
		std::cout << "HELLO" << std::endl;
		Camera::getInstance()->rotate({1.0, 0.0, 0.0});
	}
	if (key == GLFW_KEY_S)
		Camera::getInstance()->rotate({0.0, 1.0, 0.0});
	if (key == GLFW_KEY_D)
		Camera::getInstance()->rotate({0.0, 0.0, 1.0});
}

urcan::GLFWCore::GLFWCore() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	_window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
	glfwSetKeyCallback(_window, keyCallback);
	glfwSetWindowSizeCallback(_window, GLFWCore::onWindowResized);
}

urcan::GLFWCore::~GLFWCore() {
	glfwDestroyWindow(_window);

	glfwTerminate();
}

GLFWwindow* urcan::GLFWCore::getWindow() {
	return _window;
}

void urcan::GLFWCore::setWindow(GLFWwindow* win) {
	this->_window = win;
}

GLFWwindow* urcan::GLFWCore::replaceWindow(GLFWwindow* win) {
	glfwDestroyWindow(_window);
	this->_window = win;
	return this->_window;
}

void urcan::GLFWCore::onWindowResized(GLFWwindow*, int width, int height) {
	if (width == 0 || height == 0) return;

	urcan::UrcanInstance::getInstance()->notifyWindowChange();
}
