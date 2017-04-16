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
	_context = urcan::UrcanInstance::getInstance();
	_window = urcan::UrcanInstance::getWindow();
}
