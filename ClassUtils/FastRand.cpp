//
// Created by diguie_t on 01/06/2017.
//

#include <chrono>
#include "FastRand.hpp"

uint32_t FastRand::_seed = static_cast<uint32_t>(std::chrono::system_clock::now().time_since_epoch() / std::chrono::milliseconds(1));