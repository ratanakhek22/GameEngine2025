//
// Created by ratan on 12/28/2025.
//

#ifndef GAMEENGINE2025_RANDOM_H
#define GAMEENGINE2025_RANDOM_H

#include <random>

struct Random {
    static std::mt19937& engine() {
        static std::mt19937 rng{ std::random_device{}() };
        return rng;
    }
};


#endif //GAMEENGINE2025_RANDOM_H