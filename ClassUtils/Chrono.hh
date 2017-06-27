//
// Created by Guillaume on 07/06/2017.
//

#ifndef VULKAN_CHRONO_HH
#define VULKAN_CHRONO_HH

#include <chrono>

namespace urcan {
	class Chrono {
	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> _startChrono;

	public:
		Chrono() = default;
		~Chrono() = default;

		void start();
		double getTime();
	};
}

#endif //VULKAN_CHRONO_HH
