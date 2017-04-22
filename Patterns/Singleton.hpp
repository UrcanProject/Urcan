//
// Created by Guillaume on 21/04/2017.
//

#ifndef VULKAN_SINGLETON_HPP
#define VULKAN_SINGLETON_HPP

#include <iostream>
#include <memory>

template <class T>
class Singleton {
protected:
	virtual ~Singleton() {

	};

public:
	static T* getInstance()
	{
		static T _instance;
		return &_instance;
	};
};

#endif //VULKAN_SINGLETON_HPP
