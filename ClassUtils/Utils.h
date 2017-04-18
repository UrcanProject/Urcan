//
// Created by Guillaume on 18/04/2017.
//

#ifndef VULKAN_UTILS_H
#define VULKAN_UTILS_H

#include <fstream>
#include <vector>
#include <string>

namespace urcan {
	namespace utils {
		std::vector<char> readFile(const std::string &filename);
	}
};


#endif //VULKAN_UTILS_H
