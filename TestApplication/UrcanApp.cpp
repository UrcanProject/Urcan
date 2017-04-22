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
		_context->drawFrame();
	}
	std::cout << "End of the main loop" << std::endl;
	_context->waitIdle();
	std::cout << "Everything returned" << std::endl;
}

void urcan::UrcanApp::run() {
	initApp();
	mainLoop();
}

void urcan::UrcanApp::initApp() {
	//_window = urcan::UrcanInstance::replaceWindow(glfwCreateWindow(WIDTH, HEIGHT, "Vulkan 2", nullptr, nullptr));// => this works to change the window !
	_context = urcan::UrcanInstance::getOrCreateInstance();
	_window = urcan::UrcanInstance::getWindow();
}
