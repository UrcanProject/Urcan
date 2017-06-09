//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include "PerlinNoise.hh"
#include "HeightToVertexConvertor.hh"
#include "Chrono.hh"
#include "UrcanApp.hh"
#include "Camera.hh"

const uint32_t urcan::UrcanApp::_mapWidth = 1000;
const uint32_t urcan::UrcanApp::_mapDepth = 1000;
const uint32_t urcan::UrcanApp::_mapHeight = 50;
const uint32_t urcan::UrcanApp::_nbPiles = 100;
const float urcan::UrcanApp::_dispersion = 0.3;

urcan::UrcanApp::UrcanApp() {
	meshUpdated = false;
	//this->_mapGenerator = new FallingSand(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion);
    this->_mapGenerator = new PerlinNoise(_mapWidth, _mapDepth, _mapHeight, 0.2f, 10);
}

urcan::UrcanApp::~UrcanApp() {
    delete(this->_mapGenerator);
}

void urcan::UrcanApp::mainLoop() {
	static const double fps_max = 600.0;
	conv.feed(this->_mapGenerator->getMap(), 0, 0, this->_mapGenerator->getLowestHeight(), this->_mapGenerator->getHighestHeight());
	_context->updateMesh(conv.getVertices(), conv.getIndexes());
	Camera::getInstance()->translate({-static_cast<int32_t>(_mapWidth / 2), -static_cast<int32_t>(_mapDepth / 2), -static_cast<int32_t>(this->_mapGenerator->getHighestHeight())});
	Chrono chrono;
    while (!glfwWindowShouldClose(_window)) {
	    chrono.start();
		glfwPollEvents();
		renderingThread();
	    while (chrono.getTime() < 1.0 / fps_max)
		    std::this_thread::__sleep_for(std::chrono::seconds(0), std::chrono::nanoseconds(
				    static_cast<int>(100000000 / fps_max)));
	    //std::cout << "FPS: " << static_cast<int>(1.0 / chrono.getTime()) << std::endl;
	}
	if (this->_rendering_thread.joinable())
		this->_rendering_thread.join();
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

const IMapGenerator &urcan::UrcanApp::getMapGenerator() const {
    return (*this->_mapGenerator);
}

void urcan::UrcanApp::regenMap() {
	this->_mapGenerator = new PerlinNoise(_mapWidth, _mapDepth, this->_mapHeight, 0.3f);
	conv.feed(this->_mapGenerator->getMap(), 0, 0, this->_mapGenerator->getLowestHeight(), this->_mapGenerator->getHighestHeight());
	meshUpdated = true;
}

void urcan::UrcanApp::renderingThread() {
	if (this->_rendering_thread.joinable())
		this->_rendering_thread.join();
	this->_rendering_thread = std::thread(&urcan::UrcanApp::renderingFunction, this);
}

void urcan::UrcanApp::renderingFunction() {
	if (meshUpdated) {
		_context->updateMesh(conv.getVertices(), conv.getIndexes());
		meshUpdated = false;
	}
	_context->updateUniformBuffer();
	_context->drawFrame();
}

uint32_t urcan::UrcanApp::getMapWidth() const {
    return (this->_mapWidth);
}

uint32_t urcan::UrcanApp::getMapDepth() const {
    return (this->_mapDepth);
}

uint32_t urcan::UrcanApp::getMapHeight() const {
    return (this->_mapHeight);
}
