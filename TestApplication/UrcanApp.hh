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
		UrcanInstance* _context;
		GLFWwindow* _window;

	private:
		void mainLoop();
		void initApp();

	public:
		UrcanApp();
		virtual ~UrcanApp();

	public:
		void run();
	};
}


#endif //VULKAN_URCANAPP_HH
