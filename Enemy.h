//
// Created by ratan on 1/5/2026.
//

#ifndef GAMEENGINE2025_ENEMY_H
#define GAMEENGINE2025_ENEMY_H

#include <vector>
#include "Card.h"

class Enemy {
    std::vector<Card> deck = {};
    std::vector<Card> discard = {};
    std::string name;
    int maxHp = 0;
    int hp = 0;

public:
    explicit Enemy(std::string name);

    // get methods
    [[nodiscard]] int getHp() const {return hp;}
    [[nodiscard]] int getMaxHp() const {return maxHp;}
    [[nodiscard]] std::string getName() const {return name;}
    [[nodiscard]] std::vector<Card> getDeck() const {return deck;}
    [[nodiscard]] std::vector<Card> getDiscard() const {return discard;}
};

#endif //GAMEENGINE2025_ENEMY_H