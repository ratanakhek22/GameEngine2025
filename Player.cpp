//
// Created by ratan on 12/24/2025.
//

#include "Player.h"

#include <algorithm>

void Player::setDeck(const std::vector<Card> &collection) {
    deck = collection;
}

void Player::addCard(const Card &card) {
    deck.push_back(card);
}

void Player::removeCard(const Card &card) {
    deck.erase(
        std::remove_if(deck.begin(), deck.end(),
            [card](const Card &c) {
                return c.id == card.id;
            }),
        deck.end()
    );
}