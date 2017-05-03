//
// Created by Guillaume on 14/04/2017.
//

#include <GLFW/glfw3.h>
#include <chrono>
#include <HeightToVertexConvertor.hh>
#include "UrcanApp.hh"
#include "FallingSand.hh"
#include "BasicConfiguration.hpp"
/*
static const std::vector<Vertex> vertices = {
		{{-0.5f, -0.5f, 0.5f}, {1.0f, 0.0f, 0.0f}},
		{{0.5f, -0.5f, 0.5f}, {0.0f, 1.0f, 0.0f}},
		{{0.5f, 0.5f, 0.5f}, {0.0f, 0.0f, 1.0f}},
		{{-0.5f, 0.5f, 0.5f}, {1.0f, 1.0f, 1.0f}},

		{{-0.5f, -0.5f, -0.5f}, {0.0f, 0.0f, 1.0f}},
		{{0.5f, -0.5f, -0.5f}, {1.0f, 1.0f, 1.0f}},
		{{0.5f, 0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}},
		{{-0.5f, 0.5f, -0.5f}, {0.0f, 1.0f, 0.0f}}
};

static const std::vector<uint32_t> indices = {
		0, 1, 2, 2, 3, 0,
		6, 5, 4, 4, 7, 6,
		3, 7, 4, 4, 0, 3,
		1, 0, 4, 4, 5, 1,
		2, 1, 5, 5, 6, 2,
		3, 2, 6, 6, 7, 3
};
*/
urcan::UrcanApp::UrcanApp() {}

urcan::UrcanApp::~UrcanApp() {

}

/*static const std::vector<std::vector<uint32_t>> mapTest = {
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
		{0, 1, 2, 3, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0,0, 1, 2, 3, 2, 1, 0},
};*/

void urcan::UrcanApp::mainLoop() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	//FallingSand generator = FallingSand(100, 100, 0, 20, 50);
	const int size = 1000, heightMax = 100;

	FallingSand generator = FallingSand(size, size, 0, heightMax, 50);
	HeightToVertexConvertor conv;
	conv.feed(generator.getMap(), -1, -size / 2, heightMax);
	_context->updateMesh(conv.getVertices(), conv.getIndexes());
	while (!glfwWindowShouldClose(_window)) {
		start = std::chrono::system_clock::now();
		glfwPollEvents();
		_context->updateUniformBuffer();
		_context->drawFrame();
		end = std::chrono::system_clock::now();
		long long int elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
		long double fps = 1.0f / (static_cast<long double>(elapsed_milliseconds) / 1000.0f);
		std::cout << "elapsed time: " << elapsed_milliseconds << "s\n";
		std::cout << "fps: " << static_cast<int>(fps) << std::endl;
	}
	_context->waitIdle();
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
