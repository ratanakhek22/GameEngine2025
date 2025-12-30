//
// Created by ratan on 12/24/2025.
//

#include "Player.h"
#include "Random.h"

#include <algorithm>
#include <stdexcept>

void Player::setDeck(const std::vector<Card> &collection) {
    deck = collection;
}

void Player::addCard(const Card &card) {
    deck.push_back(card);
}

void Player::deleteCard(const Card &card) {
    deck.erase(
        std::remove_if(deck.begin(), deck.end(),
            [card](const Card &c) {
                return c.getID() == card.getID();
            }),
        deck.end()
    );
}

void Player::setHp(const int health) {
    if (maxHp < health) maxHp = health;
    hp = health;
}

std::vector<Card> Player::drawCards(const int n, const bool doShuffle) {
    // Out of bounds guard
    if (n > static_cast<int>(deck.size())) {
        throw std::out_of_range("Not enough cards in deck");
    }

    // Optional Shuffle Flag
    if (doShuffle) {
        std::shuffle(
        deck.begin(),
        deck.end(),
        Random::engine());
    }

    // Draw n cards + deck updates
    std::vector<Card> drawnCards;
    for (int i = 0; i < n; i++) {
        drawnCards.push_back(deck.back());
        deck.pop_back();
    }

    return drawnCards;
}

void Player::hit(const int damage) {
    hp = std::max(0, std::min(maxHp, hp - damage));
}
