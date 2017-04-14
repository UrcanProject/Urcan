//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_URCANINSTANCE_HH
#define VULKAN_URCANINSTANCE_HH

#include <memory>
#include <vulkan/vulkan.hpp>
#include "VDeleter.hpp"
#include "ScopeLock.hh"
#include "BasicConfiguration.hh"

namespace urcan {
	class UrcanInstance {
	private:
		static std::mutex 	_instanceMutex;
		static bool			_fullyInitialized;

	private:
		VDeleter<vk::Instance, vk::InstanceDeleter> _instance;

	private:
		UrcanInstance();
		virtual ~UrcanInstance();
		UrcanInstance(UrcanInstance const &src);
		UrcanInstance &operator=(UrcanInstance const &src);

	private:
		void initVulkan();
		void mainLoop();

	public:
		static UrcanInstance &get();
		void run();
	};
}

#endif //VULKAN_URCANINSTANCE_HH
