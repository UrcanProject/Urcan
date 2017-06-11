//
// Created by diguie_t on 11/06/2017.
//

#include <fstream>
#include <c++/4.8.3/sstream>
#include "MapGeneratorConfig.hh"

const std::string MapGeneratorConfig::_configPath = "../Config/map_generator.json";

MapGeneratorConfig::MapGeneratorConfig() {
    this->reload();
}

bool MapGeneratorConfig::reload() {
    std::ifstream config(MapGeneratorConfig::_configPath);
    if (config.is_open()) {
        std::stringstream ss;
        ss << config.rdbuf();
        config.close();
        ss >> this->_generator;
        ss >> this->_mapWidth;
        ss >> this->_mapDepth;
        ss >> this->_mapHeight;
        ss >> this->_nbPiles;
        ss >> this->_dispersion;
        ss >> this->_persistance;
        ss >> this->_octaves;
        return (true);
    }
    return (false);
}

uint32_t MapGeneratorConfig::getMapWidth() const {
    return _mapWidth;
}

uint32_t MapGeneratorConfig::getMapHeight() const {
    return _mapHeight;
}

uint32_t MapGeneratorConfig::getMapDepth() const {
    return _mapDepth;
}

uint32_t MapGeneratorConfig::getNbPiles() const {
    return _nbPiles;
}

float MapGeneratorConfig::getDispersion() const {
    return _dispersion;
}

float MapGeneratorConfig::getPersistance() const {
    return _persistance;
}

uint32_t MapGeneratorConfig::getOctaves() const {
    return _octaves;
}

uint32_t MapGeneratorConfig::getGenerator() const {
    return _generator;
}