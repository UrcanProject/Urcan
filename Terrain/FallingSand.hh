//
// Created by diguie_t on 02/05/2017.
//

#ifndef SAND_FALLINGSAND_HPP
#define SAND_FALLINGSAND_HPP

#include <vector>

class FallingSand {
private:
    unsigned int _width;
    unsigned int _height;
    unsigned int _minHeight;
    unsigned int _maxHeight;
    unsigned int _density;
    std::vector<std::vector<unsigned int>> _map;

public:
    FallingSand(unsigned int width, unsigned int height,
                unsigned int minHeight, unsigned int maxHeight,
                unsigned int density);
    void fall(unsigned int x, unsigned int y, unsigned int height);
    void dump() const;
    const std::vector<std::vector<unsigned int>> &getMap() const;

};


#endif //SAND_FALLINGSAND_HPP
