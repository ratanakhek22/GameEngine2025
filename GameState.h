//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_GAMESTATE_H
#define GAMEENGINE2025_GAMESTATE_H

#include <vector>
#include "Player.h"
#include "Enemy.h"

enum State {
    StartTurn,
    TakingTurn,
    EndTurn,
    EnemyTurn,
};

struct InputFlags {
    bool a_key = false;
};

class GameState {
    Player player;
    Enemy enemy;
    std::vector<Action> actionQueue = {};
    int turnCounter = 0;
    State state;

    // methods
    void startTurn();
    void takingTurn();
    void endTurn();
    void enemyTurn();

public:
    // constructor
    GameState(const Player& player, const Enemy& enemy);

    // methods
    void update();
};

#endif //GAMEENGINE2025_GAMESTATE_H