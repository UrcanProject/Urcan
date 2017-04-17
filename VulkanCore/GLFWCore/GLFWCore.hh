//
// Created by Guillaume on 16/04/2017.
//

#ifndef VULKAN_GLFWCORE_HH
#define VULKAN_GLFWCORE_HH

#include <memory>
#include <GLFW/glfw3.h>

namespace urcan
{
	class GLFWCore {
	private:
		GLFWwindow* _window;

	public:
		GLFWCore();
		virtual ~GLFWCore();

	public:
		GLFWwindow* getWindow();
		void setWindow(GLFWwindow *win);
		GLFWwindow* replaceWindow(GLFWwindow *win);
	};
}


#endif //VULKAN_GLFWCORE_HH
