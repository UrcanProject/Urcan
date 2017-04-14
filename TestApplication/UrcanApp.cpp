//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include "UrcanApp.hh"
#include "BasicConfiguration.hpp"

urcan::UrcanApp::UrcanApp() : _context(urcan::UrcanInstance::get()) {}

urcan::UrcanApp::~UrcanApp() {

}

void urcan::UrcanApp::mainLoop() {
	/*while (!glfwWindowShouldClose(_window)) {
		glfwPollEvents();
	}*/

	glfwDestroyWindow(_window);

	glfwTerminate();
}

void urcan::UrcanApp::run() {
	mainLoop();
}

void urcan::UrcanApp::initWindow() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	_window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
	glfwSetKeyCallback(_window, keyCallback);
}

void urcan::UrcanApp::keyCallback(GLFWwindow* window, int key, int, int action, int) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, 1);
}
