//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include "HeightToVertexConvertor.hh"
#include "UrcanApp.hh"

const uint32_t urcan::UrcanApp::_mapWidth = 300;
const uint32_t urcan::UrcanApp::_mapDepth = 300;
const uint32_t urcan::UrcanApp::_mapHeight = 100;
const uint32_t urcan::UrcanApp::_nbPiles = 10;
const float urcan::UrcanApp::_dispersion = 0.25;

urcan::UrcanApp::UrcanApp() : _mapGenerator(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion) {

}

urcan::UrcanApp::~UrcanApp() {

}

void urcan::UrcanApp::mainLoop() {
	HeightToVertexConvertor conv;

	conv.feed(this->_mapGenerator.getMap(), -10, -10, this->_mapGenerator.getLowestHeight(), this->_mapGenerator.getHighestHeight());
    _context->updateMesh(conv.getVertices(), conv.getIndexes());
    while (!glfwWindowShouldClose(_window)) {
		glfwPollEvents();
		_context->updateUniformBuffer();
		_context->drawFrame();
	}
	_context->waitIdle();
}

void urcan::UrcanApp::run() {
	initApp();
	mainLoop();
}

void urcan::UrcanApp::initApp() {
	_context = urcan::UrcanInstance::getOrCreateInstance();
	_window = urcan::UrcanInstance::getWindow();
}
