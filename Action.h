//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_ACTION_H
#define GAMEENGINE2025_ACTION_H

#include "GameState.h"

struct Action {
    virtual ~Action() = default;
    virtual void execute(GameState &state) = 0;
};

#endif //GAMEENGINE2025_ACTION_H