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
const uint32_t urcan::UrcanApp::_mapHeight = 400;
const uint32_t urcan::UrcanApp::_nbPiles = 300;
const float urcan::UrcanApp::_dispersion = 0.2;

urcan::UrcanApp::UrcanApp() : _mapGenerator(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion) {

}

urcan::UrcanApp::~UrcanApp() {

}

void urcan::UrcanApp::mainLoop() {
	static const double fps_max = 600.0;
	HeightToVertexConvertor conv;
	conv.feed(this->_mapGenerator.getMap(), 0, 0, this->_mapGenerator.getLowestHeight(), this->_mapGenerator.getHighestHeight());
	_context->updateMesh(conv.getVertices(), conv.getIndexes());
	Camera::getInstance()->translate({-static_cast<int32_t>(_mapWidth / 2), -static_cast<int32_t>(_mapDepth / 2), -static_cast<int32_t>(this->_mapGenerator.getHighestHeight())});
	Chrono chrono;
    while (!glfwWindowShouldClose(_window)) {
	    chrono.start();
		glfwPollEvents();
		_context->updateUniformBuffer();
		_context->drawFrame();
	    while (chrono.getTime() < 1.0 / fps_max)
		    std::this_thread::__sleep_for(std::chrono::seconds(0), std::chrono::nanoseconds(
				    static_cast<int>(100000000 / fps_max)));
	    std::cout << "FPS: " << static_cast<int>(1.0 / chrono.getTime()) << std::endl;
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
