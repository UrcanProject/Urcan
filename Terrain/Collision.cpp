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
const float Collision::_outerCubeBoundary = Collision::_cubeSize / 10.0f;

void Collision::handleCamera(const glm::vec3 &lastPos, const glm::vec3 &newPos) {
    const std::vector<std::vector<unsigned int>> &map = urcan::UrcanApp::getInstance()->getMapGenerator().getMap();
    glm::vec3 tmp = newPos;

    if (newPos != lastPos) {
        glm::vec3 diff = newPos - lastPos;
        uint32_t maxCoord = static_cast<uint32_t>(std::abs(std::floor(std::max(diff.x, std::max(diff.y, diff.z)))));
        if (maxCoord == 0)
            maxCoord = 1;
        glm::vec3 step = glm::vec3(diff.x / maxCoord,
                                   diff.y / maxCoord,
                                   diff.z / maxCoord);
        glm::vec3 it = glm::vec3(0.0, 0.0, 0.0);
        for (uint32_t i = 0 ; i < maxCoord ; i++) {
            if (isOutSideMap(lastPos)) {
                Camera::getInstance()->setPosition(lastPos);
                return ;
            }
            if (cubeCollide(map, tmp.x + it.x, tmp.y + it.y, tmp.z + it.z)) {
                Collision::onCameraCollision(map, lastPos, glm::vec3(tmp.x + it.x, tmp.y + it.y, tmp.z + it.z), false);
                return ;
            }
            if (cubeCollide(map, tmp.x + it.x, tmp.y + it.y, (tmp.z + it.z) + 1)) {
                Collision::onCameraCollision(map, lastPos, glm::vec3(tmp.x + it.x, tmp.y + it.y, tmp.z + it.z + 1), true);
                return ;
            }
            it += step;
        }
    }
}

bool Collision::cubeCollide(const std::vector<std::vector<uint32_t>> &map, double x, double y, double z) {
    x = - std::floor(x / Collision::_cubeSize);
    y = - std::floor(y / Collision::_cubeSize);
    z = - std::ceil(z / Collision::_cubeSize);
    if (y >= 0 && y < map.size()) {
        if (x >= 0 && x < map[y].size()) {
            return (map[y][x] >= z);
        }
    }
    return (false);
}

void Collision::onCameraCollision(const std::vector<std::vector<uint32_t>> &map, const glm::vec3 &lastPos,
                                  const glm::vec3 &collisionAt, bool isFoot) {
    if (isFoot) {
        glm::vec3 tmp = collisionAt;
        tmp.z = std::floor(tmp.z) - (1 + Collision::_outerCubeBoundary * 2);
        Camera::getInstance()->setPosition(tmp);
        if (!cubeCollide(map, tmp.x, tmp.y, tmp.z)) {
            return ;
        }
        if (!cubeCollide(map, collisionAt.x, collisionAt.y, lastPos.z)) {
            tmp = glm::vec3(collisionAt.x, collisionAt.y, lastPos.z);
            Camera::getInstance()->setPosition(tmp);
            return ;
        }
    }
    Camera::getInstance()->zVelocity = 0.0f;
    Camera::getInstance()->setPosition(lastPos);
}

bool Collision::isOutSideMap(const glm::vec3 &newPos) {
    const urcan::UrcanApp *instance = urcan::UrcanApp::getInstance();

    if ((- std::floor(newPos.x)) < Collision::_outerCubeBoundary || (- std::floor(newPos.x)) >= (instance->getMapWidth() - Collision::_outerCubeBoundary ))
        return (true);
    if ((- std::floor(newPos.y)) < Collision::_outerCubeBoundary  || (- std::floor(newPos.y)) >= (instance->getMapDepth() - Collision::_outerCubeBoundary ))
        return (true);
    return (false);
}
