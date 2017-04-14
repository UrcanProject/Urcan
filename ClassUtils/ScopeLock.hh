//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_SCOPELOCK_HH
#define VULKAN_SCOPELOCK_HH

#include <mutex>

class ScopeLock {
private:
	std::mutex &_mutex;

public:
	ScopeLock(std::mutex &mutex);
	virtual ~ScopeLock();
};


#endif //VULKAN_SCOPELOCK_HH
