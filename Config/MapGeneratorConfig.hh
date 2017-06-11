//
// Created by diguie_t on 11/06/2017.
//

#ifndef VULKAN_MAPGENERATORCONFIG_HH
#define VULKAN_MAPGENERATORCONFIG_HH

#include "Singleton.hpp"

class MapGeneratorConfig : public Singleton<MapGeneratorConfig> {
private:
    static const std::string _configPath;
    uint32_t _generator;
    uint32_t _mapWidth;
    uint32_t _mapDepth;
    uint32_t _mapHeight;
    uint32_t _nbPiles;
    float _dispersion;

    float _persistance;
    uint32_t _octaves;

public:
    MapGeneratorConfig();
    bool reload();
    uint32_t getMapWidth() const;
    uint32_t getMapHeight() const;
    uint32_t getMapDepth() const;
    uint32_t getNbPiles() const;
    float getDispersion() const;
    float getPersistance() const;
    uint32_t getOctaves() const;
    uint32_t getGenerator() const;
};


#endif //VULKAN_MAPGENERATORCONFIG_HH
