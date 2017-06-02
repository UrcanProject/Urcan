//
// Created by diguie_t on 02/06/2017.
//

#ifndef VULKAN_COLLISION_HPP
#define VULKAN_COLLISION_HPP


#include <cstdint>
#include <vector>

class Collision {
private:
    static const uint32_t _cubeSize;
public:
    static bool cubeCollide(const std::vector<std::vector<uint32_t>> &map, double x, double y, double z);
    static bool cameraCollide();
};


#endif //VULKAN_COLLISION_HPP
