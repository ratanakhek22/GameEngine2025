//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_GAMESTATE_H
#define GAMEENGINE2025_GAMESTATE_H

#include <array>
#include "Player.h"

struct GameState {
    std::array<Player, 2> players;
    int turnIndex = 0;

    void nextTurn();
};


#endif //GAMEENGINE2025_GAMESTATE_H