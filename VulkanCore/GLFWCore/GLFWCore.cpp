//
// Created by Guillaume on 16/04/2017.
//

#include <UrcanInstance.hh>
#include <Camera.hh>
#include <synchapi.h>
#include "BasicConfiguration.hpp"
#include "GLFWCore.hh"

static std::ostream& operator<<(std::ostream &s, glm::vec3 v)
{
	return s << "(" << v.x << ";" << v.y << ";" << v.z << ")";
}

static void keyCallback(GLFWwindow* window, int key, int, int action, int) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, 1);
	}
	if (key == GLFW_KEY_Q) {
		Camera::getInstance()->rotate({1.0, 0.0, 0.0});
	}
	if (key == GLFW_KEY_S)
		Camera::getInstance()->rotate({0.0, 1.0, 0.0});
	if (key == GLFW_KEY_D)
		Camera::getInstance()->rotate({0.0, 0.0, 1.0});

	glm::vec3 camFront;
	camFront.x = (-cos(glm::radians(Camera::getInstance()->rotation.x)) * sin(glm::radians(Camera::getInstance()->rotation.y)));
	camFront.z = sin(glm::radians(Camera::getInstance()->rotation.x));
	camFront.y = -(cos(glm::radians(Camera::getInstance()->rotation.x)) * cos(glm::radians(Camera::getInstance()->rotation.y)));
	camFront = glm::normalize(camFront);

	std::cout << "Cam = " << camFront << std::endl;

	float moveSpeed = 0.03f;

	if (key == GLFW_KEY_LEFT) {
		std::cout << "Up Going to " << camFront * moveSpeed << std::endl;
		Camera::getInstance()->translate(camFront * moveSpeed);
	}
	if (key == GLFW_KEY_RIGHT) {
		std::cout << "Down Going to " << camFront * -moveSpeed << std::endl;
		Camera::getInstance()->translate(-(camFront * moveSpeed));
	}
	if (key == GLFW_KEY_UP) {
		std::cout << "Left Going to " << glm::normalize(glm::cross(camFront, glm::vec3(0.0f, 1.0f, 0.0f))) * -moveSpeed << std::endl;
		Camera::getInstance()->translate(-(glm::normalize(glm::cross(camFront, glm::vec3(0.0f, 1.0f, 0.0f))) * moveSpeed));
	}
	if (key == GLFW_KEY_DOWN) {
		std::cout << "Right Going to " << glm::normalize(glm::cross(camFront, glm::vec3(0.0f, 1.0f, 0.0f))) * moveSpeed << std::endl;
		Camera::getInstance()->translate(glm::normalize(glm::cross(camFront, glm::vec3(0.0f, 1.0f, 0.0f))) * moveSpeed);
	}
}

urcan::GLFWCore::GLFWCore() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	_window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
	glfwSetKeyCallback(_window, keyCallback);
	glfwSetWindowSizeCallback(_window, GLFWCore::onWindowResized);
}

urcan::GLFWCore::~GLFWCore() {
	glfwDestroyWindow(_window);

	glfwTerminate();
}

GLFWwindow* urcan::GLFWCore::getWindow() {
	return _window;
}

void urcan::GLFWCore::setWindow(GLFWwindow* win) {
	this->_window = win;
}

GLFWwindow* urcan::GLFWCore::replaceWindow(GLFWwindow* win) {
	glfwDestroyWindow(_window);
	this->_window = win;
	return this->_window;
}

void urcan::GLFWCore::onWindowResized(GLFWwindow*, int width, int height) {
	if (width == 0 || height == 0) return;

	urcan::UrcanInstance::getInstance()->notifyWindowChange();
}
