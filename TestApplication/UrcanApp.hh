//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_URCANAPP_HH
#define VULKAN_URCANAPP_HH

#include <GLFW/glfw3.h>
#include "FallingSand.hh"
#include "UrcanInstance.hh"

namespace urcan
{
	class UrcanApp : public Singleton<UrcanApp> {
	private:
		UrcanInstance* _context;
		GLFWwindow* _window;
		static const uint32_t _mapWidth;
		static const uint32_t _mapDepth;
		static const uint32_t _mapHeight;
		static const uint32_t _nbPiles;
		static const float _dispersion;
		FallingSand _mapGenerator;

		void mainLoop();
		void initApp();

	public:
		UrcanApp();
		virtual ~UrcanApp();

	public:
		void run();
		const FallingSand &getMapGenerator() const;
        void regenMap();
	};
}


#endif //VULKAN_URCANAPP_HH
