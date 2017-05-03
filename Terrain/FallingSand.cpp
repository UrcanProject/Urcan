//
// Created by diguie_t on 02/05/2017.
//

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "FallingSand.hh"

void FallingSand::fall(unsigned int x, unsigned int y, unsigned int height) {
    if (height > this->_minHeight) {
        if (x < this->_width) {
            if (y < this->_height) {
                if (this->_map[y][x] < height) {
                    this->_map[y][x] = height;
                    fall(x, y - 1, ((std::rand() % 6) / 5) + height - 1);
                    fall(x + 1, y, ((std::rand() % 6) / 5) + height - 1);
                    fall(x - 1, y, ((std::rand() % 6) / 5) + height - 1);
                    fall(x, y + 1, ((std::rand() % 6) / 5) + height - 1);
                }
            }
        }
    }
}

void FallingSand::dump() const {
    for (unsigned int y = 0 ; y < this->_height ; ++y) {
        for (unsigned int x = 0 ; x < this->_width; ++x) {
            std::cout << this->_map[y][x] << " ";
        }
        std::cout << std::endl;
    }
}

FallingSand::FallingSand(unsigned int width, unsigned int height,
                         unsigned int minHeight, unsigned int maxHeight, unsigned int density) {
    this->_width = width;
    this->_height = height;
    this->_minHeight = minHeight;
    this->_maxHeight = maxHeight;
    this->_density = density;

    this->_map.resize(this->_height);
    for (unsigned int i = 0 ; i < this->_height ; i++) {
        this->_map.at(i).resize(this->_width);
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (unsigned int i = 0 ; i < this->_density ; i++) {
        this->fall(rand() % this->_width, rand() % this->_height, (rand() % this->_maxHeight + 1) + this->_minHeight);
    }
}

const std::vector<std::vector<unsigned int>> &FallingSand::getMap() const {
    return (this->_map);
}
