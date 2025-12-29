//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_PLAYER_H
#define GAMEENGINE2025_PLAYER_H

#include <utility>
#include <vector>
#include "Card.h"

struct Player {
    std::vector<Card> deck;
    std::string name;
    int hp = 0;

    // constructor
    explicit Player(std::string playerName)
        : name(std::move(playerName)) {}

    // methods
    void setDeck(const std::vector<Card> &collection);
    void addCard(const Card &card);
    void removeCard(const Card &card);

    // gets
    int getHp() const {return hp;}
    std::string getName() const {return name;}
};

#endif //GAMEENGINE2025_PLAYER_H