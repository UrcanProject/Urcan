//
// Created by diguie_t on 02/06/2017.
//

#ifndef VULKAN_COLLISION_HPP
#define VULKAN_COLLISION_HPP


#include <cstdint>
#include <vector>
#include <glm/vec3.hpp>

class Collision {
private:
    static const uint32_t _cubeSize;
    static const float _outerCubeBoundary;
    static void onCameraCollision(const std::vector<std::vector<uint32_t>> &map, const glm::vec3 &lastPos, const glm::vec3 &collisionAt, bool isFoot);
public:
    static bool cubeCollide(const std::vector<std::vector<uint32_t>> &map, double x, double y, double z);
    static bool isOutSideMap(const glm::vec3 &newPos);
    static void handleCamera(const glm::vec3 &lastPos, const glm::vec3 &newPos);
};


#endif //VULKAN_COLLISION_HPP
