//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include <FallingSand.hh>
#include "MapGeneratorConfig.hh"
#include "PerlinNoise.hh"
#include "HeightToVertexConvertor.hh"
#include "Chrono.hh"
#include "UrcanApp.hh"
#include "Camera.hh"

urcan::UrcanApp::UrcanApp() {
	meshUpdated = false;
    MapGeneratorConfig &config = *MapGeneratorConfig::getInstance();

	this->_width = config.getMapWidth();
	this->_height = config.getMapHeight();
	this->_depth = config.getMapDepth();
	//this->_mapGenerator = new FallingSand(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion);
    if (config.getGenerator() == 0) {
        this->_mapGenerator = new FallingSand(config.getMapWidth(), config.getMapDepth(), 0, config.getMapHeight(), config.getNbPiles(), config.getDispersion());
    } else {
        this->_mapGenerator = new PerlinNoise(config.getMapWidth(), config.getMapDepth(), config.getMapHeight(),
                                              config.getPersistance(), config.getOctaves());
    }
}

urcan::UrcanApp::~UrcanApp() {
    delete(this->_mapGenerator);
}

void urcan::UrcanApp::mainLoop() {
    const MapGeneratorConfig &config = *MapGeneratorConfig::getInstance();

    static const double fps_max = 600.0;
	conv.feed(this->_mapGenerator->getMap(), 0, 0, this->_mapGenerator->getLowestHeight(), this->_mapGenerator->getHighestHeight());
	_context->updateMesh(conv.getVertices(), conv.getIndexes());
	Camera::getInstance()->translate({-static_cast<int32_t>(config.getMapWidth() / 2), -static_cast<int32_t>(config.getMapDepth() / 2), -static_cast<int32_t>(this->_mapGenerator->getHighestHeight())});
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
    MapGeneratorConfig &config = *MapGeneratorConfig::getInstance();

    config.reload();
    //this->_mapGenerator = new FallingSand(_mapWidth, _mapDepth, 0, _mapHeight, _nbPiles, _dispersion);
    if (config.getGenerator() == 0) {
        this->_mapGenerator = new FallingSand(config.getMapWidth(), config.getMapDepth(), 0, config.getMapHeight(), config.getNbPiles(), config.getDispersion());
    } else {
        this->_mapGenerator = new PerlinNoise(config.getMapWidth(), config.getMapDepth(), config.getMapHeight(),
                                              config.getPersistance(), config.getOctaves());
    }
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
	return (_width);
}

uint32_t urcan::UrcanApp::getMapDepth() const {
	return (_depth);
}

uint32_t urcan::UrcanApp::getMapHeight() const {
	return (_height);
}
