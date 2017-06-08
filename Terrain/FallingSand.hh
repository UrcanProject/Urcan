//
// Created by diguie_t on 02/05/2017.
//

#ifndef SAND_FALLINGSAND_HPP
#define SAND_FALLINGSAND_HPP

#include <vector>
#include "IMapGenerator.hh"

class FallingSand : public IMapGenerator {
private:
    unsigned int _width;
    unsigned int _height;
    unsigned int _minHeight;
    unsigned int _maxHeight;
    unsigned int _density;
    float _dispertionProba;
    std::vector<std::vector<unsigned int>> _map;

public:
    FallingSand(unsigned int width, unsigned int height,
                unsigned int minHeight, unsigned int maxHeight,
                unsigned int density, float dispertion_proba_percent);
    void fall(unsigned int x, unsigned int y, unsigned int height);
    void dump() const;
    const std::vector<std::vector<unsigned int>> &getMap() const override;
    uint32_t getHighestHeight() const override;
    uint32_t getLowestHeight() const override;

};


#endif //SAND_FALLINGSAND_HPP
