//
// Created by ratan on 12/24/2025.
//

#include "GameState.h"
#include "Player.h"
#include <array>

GameState::GameState(Player &p1, Player &p2) {
    players = {&p1, &p2};
}

void GameState::nextTurn() {
    // handle end of turn updates
    Player *player = players[turnIndex];

    // update turn index
    turnIndex = (turnIndex + 1) % 2;
}