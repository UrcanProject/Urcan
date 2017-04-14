//
// Created by Guillaume on 14/04/2017.
//

#include "ScopeLock.hh"

ScopeLock::ScopeLock(std::mutex &mutex) : _mutex(mutex) {
	_mutex.lock();
}

ScopeLock::~ScopeLock() {
	_mutex.unlock();
}

