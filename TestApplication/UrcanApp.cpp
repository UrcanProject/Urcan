//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include "UrcanApp.hh"
#include "BasicConfiguration.hpp"

urcan::UrcanApp::UrcanApp() {}

urcan::UrcanApp::~UrcanApp() {

}

void urcan::UrcanApp::mainLoop() {
	while (!glfwWindowShouldClose(_window)) {
		glfwPollEvents();
	}
}

void urcan::UrcanApp::run() {
	initApp();
	mainLoop();
}

void urcan::UrcanApp::initApp() {
	_window = urcan::UrcanInstance::replaceWindow(glfwCreateWindow(WIDTH, HEIGHT, "Vulkan 2", nullptr, nullptr));
	_context = urcan::UrcanInstance::getInstance();
}
