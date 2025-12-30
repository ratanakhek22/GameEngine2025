//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_ACTION_H
#define GAMEENGINE2025_ACTION_H

class Player;
class GameState;

class Action {
public:
    virtual ~Action() = default;
    virtual void execute(GameState &state, Player &owner, Player &target) = 0;
};

#endif //GAMEENGINE2025_ACTION_H