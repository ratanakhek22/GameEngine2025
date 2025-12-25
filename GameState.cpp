//
// Created by ratan on 12/24/2025.
//

#include "GameState.h"
#include "Player.h"

void GameState::nextTurn() {
    // handle end of turn updates
    Player p = players[turnIndex];

    // update turn index
    turnIndex = (turnIndex + 1) % 2;
}