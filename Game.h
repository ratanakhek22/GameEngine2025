//
// Created by ratan on 12/30/2025.
//

#ifndef GAMEENGINE2025_GAME_H
#define GAMEENGINE2025_GAME_H

#include "GameState.h"

enum class GameMode {
    StartMenu,
    Exploration,
    Combat,
    GameOver,
    Exit
};

class Game {
public:
    void run() const;

    //constructor
    Game();
    ~Game();

private:
    GameMode mode;
    GameState *gameState = nullptr;

    // void handleInput();
    // void update();
    void render() const;

    // StartMenu GameMode
    static void renderStartMenu();

    // Exploration GameMode
    // void renderExplore();

    // Combat GameMode
    // void renderCombat();
    // void startCombat();
    // void endCombat();

    // GameOver GameMode
    // void renderGameOver();

    // Exit GameMode
    // void renderExit();
};

#endif //GAMEENGINE2025_GAME_H