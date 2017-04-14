//
// Created by Guillaume on 14/04/2017.
//

#include <iostream>
#include "UrcanInstance.hh"

std::mutex urcan::UrcanInstance::_instanceMutex;
bool urcan::UrcanInstance::_fullyInitialized = false;

urcan::UrcanInstance::UrcanInstance() {
}

urcan::UrcanInstance::~UrcanInstance() {

}

urcan::UrcanInstance& urcan::UrcanInstance::get() {
	static urcan::UrcanInstance instance;
	ScopeLock lock(_instanceMutex);

	if (!_fullyInitialized)
		instance.initVulkan();
	return instance;
}

void urcan::UrcanInstance::initVulkan() {

}

void urcan::UrcanInstance::mainLoop() {

}

void urcan::UrcanInstance::run() {

}
