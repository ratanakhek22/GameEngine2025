//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_PLAYER_H
#define GAMEENGINE2025_PLAYER_H

#include <utility>
#include <vector>
#include <string>
#include "Card.h"

class Player {
    std::vector<Card> deck = {};
    std::vector<Card> discard = {};
    std::vector<Card> deletedCards = {};
    std::string name;
    int maxHp = 0;
    int hp = 0;

public:
    // constructor
    explicit Player(std::string playerName)
        : name(std::move(playerName)) {}

    // methods
    void setDeck(const std::vector<Card>& collection);
    void addCard(const Card& card);
    void deleteCard(const Card& card);
    void hit(int damage);
    void setHp(int health);
    std::vector<Card> drawCards(int n, bool doShuffle = false);

    // gets
    [[nodiscard]] int getHp() const {return hp;}
    [[nodiscard]] int getMaxHp() const {return maxHp;}
    [[nodiscard]] std::string getName() const {return name;}
    [[nodiscard]] std::vector<Card> getDeck() const {return deck;}
    [[nodiscard]] std::vector<Card> getDiscard() const {return discard;}
    [[nodiscard]] std::vector<Card> getDeletedCards() const {return deletedCards;}
};

#endif //GAMEENGINE2025_PLAYER_H