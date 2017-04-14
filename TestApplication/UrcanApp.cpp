//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include "UrcanApp.hh"
#include "BasicConfiguration.hh"

urcan::UrcanApp::UrcanApp() : _context(urcan::UrcanInstance::get()) {}

urcan::UrcanApp::~UrcanApp() {

}

void urcan::UrcanApp::mainLoop() {
	/*while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}*/

	glfwDestroyWindow(window);

	glfwTerminate();
}

void urcan::UrcanApp::run() {
	mainLoop();
}

void urcan::UrcanApp::initWindow() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}
