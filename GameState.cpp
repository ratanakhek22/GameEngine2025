//
// Created by ratan on 12/24/2025.
//

#include "GameState.h"

#include "Player.h"
#include "Random.h"
#include <algorithm>
#include <array>
#include <stdexcept>


GameState::GameState(Player& p1, Player& p2)
    : players{ &p1, &p2 } {
    for (int i = 0; i < 2; ++i) {
        drawPiles[i] = players[i]->deck;
        std::shuffle(
            drawPiles.begin(),
            drawPiles.end(),
            Random::engine());
    }
}

void GameState::nextTurn() {
    // handle end of turn updates
    Player *player = players[turnIndex];

    // update turn index
    turnIndex = (turnIndex + 1) % 2;
}

std::vector<Card> GameState::drawCards(const int n, const int playerIndex, const bool doShuffle) {
    auto &deck = drawPiles[playerIndex];

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

    // Draw n cards + drawPile updates
    std::vector<Card> drawnCards;
    for (int i = 0; i < n; i++) {
        drawnCards.push_back(deck.back());
        deck.pop_back();
    }

    return drawnCards;
}
