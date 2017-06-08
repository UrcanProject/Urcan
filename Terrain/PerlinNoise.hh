//
// Created by diguie_t on 07/06/2017.
//

#ifndef VULKAN_PERLINNOISE_HH
#define VULKAN_PERLINNOISE_HH

#include <vector>
#include "IMapGenerator.hh"

class PerlinNoise : public IMapGenerator {
private:
    std::vector<std::vector<int>> _primes;
    int _seed;
    std::vector<std::vector<unsigned int>> _map;
    int _prime;
    uint32_t _width;
    uint32_t _height;
    uint32_t _lowest;
    uint32_t _highest;
    uint32_t _nbOctaves;
    uint32_t _maxHeight;
    float _persistance;

public:
    static int maxPrime;

    PerlinNoise(uint32_t width, uint32_t height, uint32_t maxHeight, float persistence = 0.5, uint32_t octaves = 8);
    PerlinNoise(uint32_t width, uint32_t height, uint32_t maxHeight, int seed, float persistence = 0.5, uint32_t octaves = 8);
    uint32_t getHighestHeight() const override;
    uint32_t getLowestHeight() const override;
    const std::vector<std::vector<unsigned int>> &getMap() const override;
    float generateNoise(int i, float x, float y);
    static float lerp(float a, float b, float x);
    float cosineInterpolation(float a, float b, float x);
    float smoothNoise(int i, float x, float y);
    float interpolateNoise(int i, float x, float y);
    float perlinNoise(float x, float y);
};


#endif //VULKAN_PERLINNOISE_HH
