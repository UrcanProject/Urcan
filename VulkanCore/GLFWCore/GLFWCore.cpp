//
// Created by Guillaume on 16/04/2017.
//

#include <synchapi.h>
#include <unordered_map>
#include "Collision.hpp"
#include "BasicConfiguration.hpp"
#include "GLFWCore.hh"
#include "Camera.hh"
#include "UrcanApp.hh"
#include "UrcanInstance.hh"

float rotateSpeed = 2.0f;

std::unordered_map<int, bool> keyHold = {
		{GLFW_KEY_W, false},
		{GLFW_KEY_A, false},
		{GLFW_KEY_S, false},
		{GLFW_KEY_D, false}
};

static std::ostream &operator<<(std::ostream &s, glm::vec3 v) {
    glm::vec3 disp = v;
    double lim = 0.00001f;
    if (disp.x > -lim && disp.x < lim)
        disp.x = 0;
    if (disp.y > -lim && disp.y < lim)
        disp.y = 0;
    if (disp.z > -lim && disp.z < lim)
        disp.z = 0;
	return s << "(" << disp.x << ";" << disp.y << ";" << disp.z << ")";
}

static void keyCallback(GLFWwindow *window, int key, int, int action, int) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, 1);
	}

	if (keyHold.find(key) != keyHold.end())
		keyHold[key] = (action == GLFW_PRESS ? true : (action == GLFW_RELEASE ? false : keyHold[key]));


	if (key == GLFW_KEY_E)
		Camera::getInstance()->rotate({0.0, 0.0, -1.0});
	if (key == GLFW_KEY_Q)
		Camera::getInstance()->rotate({0.0, 0.0, 1.0});

	if (key == GLFW_KEY_R && action == GLFW_PRESS)
		Camera::getInstance()->setRotation({0, Camera::getInstance()->rotation.y, 0});
	if (key == GLFW_KEY_U && action == GLFW_PRESS)
		Camera::getInstance()->rotate({45.0, 0.0, 0.0});
	if (key == GLFW_KEY_I && action == GLFW_PRESS)
		Camera::getInstance()->rotate({0.0, 0.0, 45.0});
	if (key == GLFW_KEY_J && action == GLFW_PRESS)
		Camera::getInstance()->rotate({-45.0, 0.0, 0.0});
	if (key == GLFW_KEY_K && action == GLFW_PRESS)
		Camera::getInstance()->rotate({0.0, 0.0, -45.0});
}

static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
	static bool updated = false;
    static const double xInitPos = urcan::WIDTH / 2;
    static const double yInitPos = urcan::HEIGHT / 2;
	const double rotFac = 0.1;
	double deltaY = fabs(ypos - yInitPos);
	double deltaX = fabs(xpos - xInitPos);

	if (updated) {
		if (xInitPos > 0.0 && yInitPos > 0.0) {
			if (ypos < yInitPos)
				Camera::getInstance()->rotate({rotateSpeed * rotFac * deltaY, 0.0, 0.0});
			if (ypos > yInitPos)
				Camera::getInstance()->rotate({-rotateSpeed * rotFac * deltaY, 0.0, 0.0});
			if (xpos < xInitPos)
				Camera::getInstance()->rotate({0.0, 0.0, rotateSpeed * rotFac * deltaX});
			if (xpos > xInitPos)
				Camera::getInstance()->rotate({0.0, 0.0, -rotateSpeed * rotFac * deltaX});
		}
	} else {
		updated = true;
	}

	glfwSetCursorPos(window, xInitPos, yInitPos);
}

void urcan::GLFWCore::moveTurn()
{
	static auto startTime = std::chrono::high_resolution_clock::now();
	auto currentTime = std::chrono::high_resolution_clock::now();
	float time = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count() / 1000.0f;

	glm::vec3 camFront;
	camFront.y = (float) (-sin(glm::radians(Camera::getInstance()->rotation.x)) *
	                      cos(glm::radians(Camera::getInstance()->rotation.z)));
	camFront.z = (float) -cos(glm::radians(Camera::getInstance()->rotation.x));
	camFront.x = (float) (-(sin(glm::radians(Camera::getInstance()->rotation.x)) *
	                        sin(glm::radians(Camera::getInstance()->rotation.z))));
	glm::vec3 unCamFront = camFront;
	camFront = glm::normalize(camFront);

	float moveSpeed = 50.0f * time;

	glm::vec3 trans({0.0f, 0.0f, 0.0f});
	if (keyHold[GLFW_KEY_W]) {
		trans += -(camFront * moveSpeed);
        Camera::getInstance()->zVelocity = -0.1f;
    }
	if (keyHold[GLFW_KEY_S]) {
		trans += camFront * moveSpeed;
        Camera::getInstance()->zVelocity = -0.1f;
    }
	if (keyHold[GLFW_KEY_A]) {
		trans += -(glm::normalize(glm::cross(camFront, glm::vec3(0, 0, 1))) * moveSpeed);
        Camera::getInstance()->zVelocity = -0.1f;
    }
	if (keyHold[GLFW_KEY_D]) {
		trans += glm::normalize(glm::cross(camFront, glm::vec3(0, 0, 1))) * moveSpeed;
        Camera::getInstance()->zVelocity = -0.1f;
    }
    if (keyHold[GLFW_KEY_SPACE]) {
        if (Camera::getInstance()->zVelocity == 0) {
            Camera::getInstance()->zVelocity = 60.0f;
        }
    }
    if (keyHold[GLFW_KEY_R]) {
        urcan::UrcanApp::getInstance()->regenMap();
    }
    trans -= glm::vec3(0, 0, Camera::getInstance()->zVelocity * time);
    if (Camera::getInstance()->zVelocity != 0.0)
        Camera::getInstance()->zVelocity -= Camera::getInstance()->gravity * time;
    glm::vec3 prevPos = Camera::getInstance()->position;
	Camera::getInstance()->translate(trans);

	if (Collision::cameraCollide()) {
		Camera::getInstance()->setPosition(prevPos);
	}
    startTime = currentTime;
}

urcan::GLFWCore::GLFWCore() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	_window = glfwCreateWindow(WIDTH, HEIGHT, "Urcan", nullptr, nullptr);
	glfwSetKeyCallback(_window, keyCallback);
	glfwSetWindowSizeCallback(_window, GLFWCore::onWindowResized);
    glfwSetInputMode(_window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	glfwSetCursorPosCallback(_window, cursor_position_callback);

	Camera::getInstance()->rotate({90.0, 0.0, 180.0});
	Camera::getInstance()->translate({0, 0, -80});
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
