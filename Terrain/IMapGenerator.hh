//
// Created by diguie_t on 07/06/2017.
//

#ifndef VULKAN_MAPGENERATOR_HH
#define VULKAN_MAPGENERATOR_HH

#include <vector>

class IMapGenerator {
private:

public:
    virtual ~IMapGenerator() {}
    virtual uint32_t getHighestHeight() const = 0;
    virtual uint32_t getLowestHeight() const = 0;
    virtual const std::vector<std::vector<unsigned int>> &getMap() const = 0;
};

#endif //VULKAN_MAPGENERATOR_HH
