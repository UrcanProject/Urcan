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
    const std::vector<std::vector<unsigned int>> &map = urcan::UrcanApp::getInstance()->getMapGenerator().getMap();
    glm::vec3 pos = Camera::getInstance()->position;

    return (cubeCollide(map, pos.x, pos.y, pos.z));
}

bool Collision::cubeCollide(const std::vector<std::vector<uint32_t>> &map, double x, double y, double z) {
    x = std::floor(x / Collision::_cubeSize);
    y = std::floor((y + y * 0.1) / Collision::_cubeSize) * -1;
    z = std::floor(z / Collision::_cubeSize) * -1;
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
    if (y >= 0 && y < map.size()) {
        if (x >= 0 && x < map[y].size()) {
            std::cout << map[y][x] << " == " << z << std::endl;
            return (map[y][x] == z);
        }
    }
    return (false);
}
