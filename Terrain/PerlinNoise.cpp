//
// Created by diguie_t on 07/06/2017.
//

#include <numeric>
#include <random>
#include <algorithm>
#include <chrono>
#include <c++/4.8.3/iostream>
#include "PerlinNoise.hh"

// https://stackoverflow.com/questions/29711668/perlin-noise-generation

// Two-dimensional value noise based on Hugo Elias's description:
//   http://freespace.virgin.net/hugo.elias/models/m_perlin.htm

int PerlinNoise::maxPrime = 10;

PerlinNoise::PerlinNoise(uint32_t width, uint32_t height, uint32_t maxHeight, float persistence, uint32_t octaves) {
    this->_primes = std::vector<std::vector<int>>({
        {995615039, 600173719, 701464987},
        {831731269, 162318869, 136250887},
        {174329291, 946737083, 245679977},
        {362489573, 795918041, 350777237},
        {457025711, 880830799, 909678923},
        {787070341, 177340217, 593320781},
        {405493717, 291031019, 391950901},
        {458904767, 676625681, 424452397},
        {531736441, 939683957, 810651871},
        {997169939, 842027887, 423882827}
    });

    this->_maxHeight = maxHeight;
    this->_seed = static_cast<int>(std::chrono::system_clock::now().time_since_epoch() / std::chrono::milliseconds(1));
    if (this->_seed > -2 && this->_seed < 2)
        this->_seed = 2;

    int count = 0;
    for (std::vector<int> &primes : this->_primes) {
        for (int &prime : primes) {
            if (count % 2)
                prime /= this->_seed / 2;
            else
                prime *= this->_seed / 2;
            ++count;
        }
    }

    this->_width = width;
    this->_height = height;
    this->_lowest = static_cast<uint32_t>(-1);
    this->_highest = 0;
    this->_persistance = persistence;
    this->_nbOctaves = octaves;
    this->_prime = std::abs(this->_seed) % PerlinNoise::maxPrime; // prime, an integer from 0 to 9, which determines which of the ten random-number generators is called first. Thus, you can get ten different results after fixing the values of the other four parameters.

    this->_map.resize(this->_height);
    for (unsigned int i = 0 ; i < this->_height ; i++) {
        this->_map.at(i).resize(this->_width);
    }

    for (unsigned int y = 0 ; y < this->_height ; y++) {
        for (unsigned int x = 0; x < this->_width; x++) {
            this->_map[y][x] = static_cast<uint32_t>(((std::abs(this->perlinNoise(x, y)) * 0.4) +
                    std::abs(this->perlinNoise(x + 20, y) * 0.15) +
                    std::abs(this->perlinNoise(x - 20, y) * 0.15) +
                    std::abs(this->perlinNoise(x, y + 20) * 0.15) +
                    std::abs(this->perlinNoise(x, y - 20) * 0.15)) * this->_maxHeight);
            if (this->_map[y][x] > this->_highest)
                this->_highest = this->_map[y][x];
            if (this->_map[y][x] < this->_lowest)
                this->_lowest = this->_map[y][x];
        }
    }
    std::cout << "lowest: " << this->_lowest << std::endl;
    std::cout << "highest: " << this->_highest << std::endl;
}

PerlinNoise::PerlinNoise(uint32_t width, uint32_t height, uint32_t maxHeight, int seed, float persistence, uint32_t octaves) {
    PerlinNoise::_seed = seed;
    PerlinNoise(width, height, maxHeight, persistence, octaves);
}

uint32_t PerlinNoise::getHighestHeight() const {
    return (this->_highest);
}

uint32_t PerlinNoise::getLowestHeight() const {
    return (this->_lowest);
}

const std::vector<std::vector<unsigned int>> &PerlinNoise::getMap() const {
    return (this->_map);
}

float PerlinNoise::generateNoise(int i, float x, float y) {
    int n = static_cast<int>(x + y * 57);

    n = (n << 13) ^ n;
    int a = this->_primes[i][0], b = this->_primes[i][1], c = this->_primes[i][2];
    int t = (n * (n * n * a + b) + c) & 0x7fffffff;
    return static_cast<float>(1.0 - (double)(t)/1073741824.0);
}

float PerlinNoise::lerp(float a, float b, float x) {
    return (a * (1 - x) + x * b);
}

float PerlinNoise::cosineInterpolation(float a, float b, float x) {
    float ft = static_cast<float>(x * 3.1415927);
    float f = static_cast<float>((1 - cos(ft)) * 0.5);
    return  (a * ( 1 - f) + b * f);
}

float PerlinNoise::smoothNoise(int i, float x, float y) {
    float corners = (this->generateNoise(i, x - 1, y - 1) + this->generateNoise(i, x + 1, y - 1) +
                     this->generateNoise(i, x - 1, y + 1) + this->generateNoise(i, x + 1, y + 1)) / 16;
    float sides = (this->generateNoise(i, x - 1, y) + this->generateNoise(i, x + 1, y) + this->generateNoise(i, x, y - 1) +
                   this->generateNoise(i, x, y + 1)) / 8;
    float center = this->generateNoise(i, x, y) / 4;
    return (corners + sides + center);
}

float PerlinNoise::interpolateNoise(int i, float x, float y) {
    int integer_X = static_cast<int>(x);
    int integer_Y = static_cast<int>(y);
    float fractional_X = x - integer_X;
    float fractional_Y = y - integer_Y;

    return (this->cosineInterpolation(this->cosineInterpolation(this->smoothNoise(i, integer_X, integer_Y),
                                                                this->smoothNoise(i, integer_X + 1, integer_Y),
                                                                fractional_X),
                                      this->cosineInterpolation(this->smoothNoise(i, integer_X, integer_Y + 1),
                                                                this->smoothNoise(i, integer_X + 1, integer_Y + 1),
                                                                fractional_X),
                                      fractional_Y));
}

float PerlinNoise::perlinNoise(float x, float y) {
    float total = 0;
    float frequency = static_cast<float>(this->_nbOctaves * this->_nbOctaves);
    float amplitude = 1;

    for (unsigned int i = 0; i < this->_nbOctaves; ++i) {
        frequency /= 2;
        amplitude *= this->_persistance;
        total += this->interpolateNoise((this->_prime + i) % PerlinNoise::maxPrime, x / frequency, y / frequency) * amplitude;
    }
    return (total / frequency);
}