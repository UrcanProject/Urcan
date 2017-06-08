//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include <Chrono.hh>
#include "HeightToVertexConvertor.hh"
#include "UrcanApp.hh"
#include "Camera.hh"

const uint32_t urcan::UrcanApp::_mapWidth = 1000;
const uint32_t urcan::UrcanApp::_mapDepth = 1000;
const uint32_t urcan::UrcanApp::_mapHeight = 300;
const uint32_t urcan::UrcanApp::_nbPiles = 1000;
const float urcan::UrcanApp::_dispersion = 0.11;

urcan::UrcanApp::UrcanApp() : _mapGenerator(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion) {

}

urcan::UrcanApp::~UrcanApp() {

}

void urcan::UrcanApp::mainLoop() {
	HeightToVertexConvertor conv;
	conv.feed(this->_mapGenerator.getMap(), 0, 0, this->_mapGenerator.getLowestHeight(), this->_mapGenerator.getHighestHeight());
	_context->updateMesh(conv.getVertices(), conv.getIndexes());
	Camera::getInstance()->translate({0, 0, 0});
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

const FallingSand &urcan::UrcanApp::getMapGenerator() const {
    return (this->_mapGenerator);
}

void urcan::UrcanApp::regenMap() {
    HeightToVertexConvertor conv;

    this->_mapGenerator = FallingSand(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion);
    conv.feed(this->_mapGenerator.getMap(), 0, 0, this->_mapGenerator.getLowestHeight(), this->_mapGenerator.getHighestHeight());
    _context->updateMesh(conv.getVertices(), conv.getIndexes());
}
