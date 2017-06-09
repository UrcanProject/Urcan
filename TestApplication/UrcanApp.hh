//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_URCANAPP_HH
#define VULKAN_URCANAPP_HH

#include <GLFW/glfw3.h>
#include "IMapGenerator.hh"
#include "HeightToVertexConvertor.hh"
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
		IMapGenerator *_mapGenerator;
		HeightToVertexConvertor conv;
		bool meshUpdated;
		std::thread _rendering_thread;

		void renderingFunction();
		void mainLoop();
		void initApp();
		void renderingThread();

	public:
		UrcanApp();
		virtual ~UrcanApp();

	public:
		void run();
		const IMapGenerator &getMapGenerator() const;
        void regenMap();

        uint32_t getMapWidth() const;

        uint32_t getMapDepth() const;

        uint32_t getMapHeight() const;
    };
}


#endif //VULKAN_URCANAPP_HH
