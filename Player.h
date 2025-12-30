//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_PLAYER_H
#define GAMEENGINE2025_PLAYER_H

#include <utility>
#include <vector>
#include "Card.h"

struct Player {
    std::vector<Card> deck = {};
    std::vector<Card> discard = {};
    std::vector<Card> deletedCards = {};
    std::string name;
    int maxHp = 0;
    int hp = 0;

    // constructor
    explicit Player(std::string playerName)
        : name(std::move(playerName)) {}

    // methods
    void setDeck(const std::vector<Card> &collection);
    void addCard(const Card &card);
    void deleteCard(const Card &card);
    std::vector<Card> drawCards(int n, bool doShuffle);
    void hit(int damage);
    void setHp(int health);

    // gets
    int getHp() const {return hp;}
    int getMaxHp() const {return maxHp;}
    std::string getName() const {return name;}
    std::vector<Card> getDeck() const {return deck;}
    std::vector<Card> getDiscard() const {return discard;}
    std::vector<Card> getDeletedCards() const {return deletedCards;}
};

#endif //GAMEENGINE2025_PLAYER_H