//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_URCANAPP_HH
#define VULKAN_URCANAPP_HH

#include <GLFW/glfw3.h>
#include "UrcanInstance.hh"

namespace urcan
{
	class UrcanApp {
	private:
		UrcanInstance &_context;
		GLFWwindow* _window;

	private:
		void mainLoop();
		void initWindow();

	public:
		static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

	public:
		UrcanApp();
		virtual ~UrcanApp();

	public:
		void run();
	};
}


#endif //VULKAN_URCANAPP_HH
