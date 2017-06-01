//
// Created by diguie_t on 01/06/2017.
//

#ifndef VULKAN_FASTRAND_HPP
#define VULKAN_FASTRAND_HPP

#include <cstdint>

// https://software.intel.com/en-us/articles/fast-random-number-generator-on-the-intel-pentiumr-4-processor/
class FastRand {
private:
    static uint32_t _seed;
    FastRand() = delete;
    FastRand(const FastRand &) = delete;
    FastRand & operator = (const FastRand &) = delete;

public:
    static inline  void fastSrand(int seed) {
        FastRand::_seed = static_cast<uint32_t>(seed);
    }

    static inline uint32_t fastRand() {
        FastRand::_seed = (214013 * FastRand::_seed + 2531011);

        return ((FastRand::_seed >> 16) & 0x7FFF);
    }

    static inline uint32_t randBetween(uint32_t min, uint32_t max) {
        return (min + FastRand::fastRand() % (max + 1 - min));
    }

    static inline int32_t randBetween(int32_t min, int32_t max) {
        return (min + FastRand::fastRand() % (max + 1 - min));
    }

};


#endif //VULKAN_FASTRAND_HPP
