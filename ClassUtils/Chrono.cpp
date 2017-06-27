//
// Created by Guillaume on 07/06/2017.
//

#include "Chrono.hh"

void urcan::Chrono::start() {
	this->_startChrono = std::chrono::high_resolution_clock::now();
}

double urcan::Chrono::getTime() {
	auto now = std::chrono::high_resolution_clock::now();
	return (std::chrono::duration_cast<std::chrono::milliseconds>(now - this->_startChrono).count() / 10000.0f);
}
