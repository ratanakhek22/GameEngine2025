//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_GAMESTATE_H
#define GAMEENGINE2025_GAMESTATE_H

#include <array>
#include <vector>
#include "Player.h"

struct GameState {
    std::array<Player *, 2> players = {};
    std::vector<Action> actionQueue = {};
    int turnIndex = 0;

    // constructor
    GameState(Player &p1, Player &p2);

    // methods
    void nextTurn();
};


#endif //GAMEENGINE2025_GAMESTATE_H