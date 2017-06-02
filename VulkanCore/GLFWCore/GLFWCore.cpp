//
// Created by Guillaume on 16/04/2017.
//

#include <synchapi.h>
#include "Collision.hpp"
#include "BasicConfiguration.hpp"
#include "GLFWCore.hh"
#include "Camera.hh"
#include "UrcanApp.hh"
#include "UrcanInstance.hh"

static std::ostream &operator<<(std::ostream &s, glm::vec3 v) {
	return s << "(" << v.x << ";" << v.y << ";" << v.z << ")";
}

static void keyCallback(GLFWwindow *window, int key, int, int action, int) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, 1);
	}

	float speed = 2.0f;

	if (key == GLFW_KEY_W)
		Camera::getInstance()->rotate({speed, 0.0, 0.0});
	if (key == GLFW_KEY_D)
		Camera::getInstance()->rotate({0.0, speed, 0.0});
	if (key == GLFW_KEY_S)
		Camera::getInstance()->rotate({-speed, 0.0, 0.0});
	if (key == GLFW_KEY_A)
		Camera::getInstance()->rotate({0.0, -speed, 0.0});

	if (key == GLFW_KEY_R && action == GLFW_PRESS)
		Camera::getInstance()->setRotation({0, 0, Camera::getInstance()->rotation.z});
	if (key == GLFW_KEY_U && action == GLFW_PRESS)
		Camera::getInstance()->rotate({45.0, 0.0, 0.0});
	if (key == GLFW_KEY_I && action == GLFW_PRESS)
		Camera::getInstance()->rotate({0.0, 45.0, 0.0});
	if (key == GLFW_KEY_J && action == GLFW_PRESS)
		Camera::getInstance()->rotate({-45.0, 0.0, 0.0});
	if (key == GLFW_KEY_K && action == GLFW_PRESS)
		Camera::getInstance()->rotate({0.0, -45.0, 0.0});


	if (key == GLFW_KEY_P && action == GLFW_PRESS) {
		std::cout << "Position is " << Camera::getInstance()->position << std::endl;
		std::cout << "Rotation is " << Camera::getInstance()->rotation << std::endl;
	}

	glm::vec3 camFront;
	camFront.x = (float) (cos(glm::radians(Camera::getInstance()->rotation.y)) *
						  sin(glm::radians(Camera::getInstance()->rotation.x)));
	camFront.y = (float) sin(glm::radians(Camera::getInstance()->rotation.y));
	camFront.z = (float) (-(cos(glm::radians(Camera::getInstance()->rotation.y)) *
						   cos(glm::radians(Camera::getInstance()->rotation.x))));
	camFront = glm::normalize(camFront);

	//std::cout << "Cam = " << camFront << std::endl;

	float moveSpeed = 2.0f;

	glm::vec3 trans({0.0f, 0.0f, 0.0f});
	if (key == GLFW_KEY_UP) {
		trans = -(camFront * moveSpeed);
	}
	if (key == GLFW_KEY_DOWN) {
		trans = camFront * moveSpeed;
		//Camera::getInstance()->translate(camFront * moveSpeed);
	}
	if (key == GLFW_KEY_LEFT) {
		trans = -(glm::normalize(glm::cross(camFront, glm::vec3(1, 0, 0))) * moveSpeed);
	}
	if (key == GLFW_KEY_RIGHT) {
		trans = glm::normalize(glm::cross(camFront, glm::vec3(1, 0, 0))) * moveSpeed;
	}
	glm::vec3 prevPos = Camera::getInstance()->position;
	Camera::getInstance()->translate(trans);
	if (Collision::cameraCollide()) {
		Camera::getInstance()->setPosition(prevPos);
	}
	//glm::rotate();
}

urcan::GLFWCore::GLFWCore() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	_window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
	glfwSetKeyCallback(_window, keyCallback);
	glfwSetWindowSizeCallback(_window, GLFWCore::onWindowResized);

	Camera::getInstance()->rotate({0.0, 0.0, 0.0});
	Camera::getInstance()->translate({-91, 0, 0});
}

urcan::GLFWCore::~GLFWCore() {
	glfwDestroyWindow(_window);

	glfwTerminate();
}

GLFWwindow *urcan::GLFWCore::getWindow() {
	return _window;
}

void urcan::GLFWCore::setWindow(GLFWwindow *win) {
	this->_window = win;
}

GLFWwindow *urcan::GLFWCore::replaceWindow(GLFWwindow *win) {
	glfwDestroyWindow(_window);
	this->_window = win;
	return this->_window;
}

void urcan::GLFWCore::onWindowResized(GLFWwindow *, int width, int height) {
	if (width == 0 || height == 0) return;

	urcan::UrcanInstance::getInstance()->notifyWindowChange();
}
