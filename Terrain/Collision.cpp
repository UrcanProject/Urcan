//
// Created by diguie_t on 02/06/2017.
//

#include <glm/vec3.hpp>
#include <cmath>
#include <ostream>
#include "Camera.hh"
#include "UrcanApp.hh"
#include "Collision.hpp"

const uint32_t Collision::_cubeSize = 1;

bool Collision::cameraCollide() {
    static glm::vec3 last = Camera::getInstance()->position;
    const std::vector<std::vector<unsigned int>> &map = urcan::UrcanApp::getInstance()->getMapGenerator().getMap();
    glm::vec3 pos = Camera::getInstance()->position;

    if (pos != last) {
        glm::vec3 diff = pos - last;
        uint32_t maxCoord = static_cast<uint32_t>(std::abs(std::floor(std::max(diff.x, std::max(diff.y, diff.z)))));
        if (maxCoord == 0)
            maxCoord = 1;
        glm::vec3 step = glm::vec3(diff.x / maxCoord,
                                   diff.y / maxCoord,
                                   diff.z / maxCoord);
        glm::vec3 it = glm::vec3(0.0, 0.0, 0.0);
        for (uint32_t i = 0 ; i < maxCoord ; i++) {
            if (cubeCollide(map, pos.x + it.x, pos.y + it.y, pos.z + it.z)) {
                Camera::getInstance()->zVelocity = 0.0f;
                --pos.z;
                Camera::getInstance()->setPosition(pos);
            }
            if (cubeCollide(map, pos.x + it.x, pos.y + it.y, (pos.z + it.z) + 1)) {
                Camera::getInstance()->zVelocity = 0.0f;
                --pos.z;
                Camera::getInstance()->setPosition(pos);
            }
            it += step;
        }
    }
    last = pos;
    return (false);
}

bool Collision::cubeCollide(const std::vector<std::vector<uint32_t>> &map, double x, double y, double z) {
    x = std::floor(x / Collision::_cubeSize) * -1;
    y = std::floor(y / Collision::_cubeSize) * -1;
    z = std::ceil(z / Collision::_cubeSize) * -1;
    if (y >= 0 && y < map.size()) {
        if (x >= 0 && x < map[y].size()) {
            return (map[y][x] >= z);
        }
    }
    return (false);
}
