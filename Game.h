//
// Created by ratan on 12/30/2025.
//

#ifndef GAMEENGINE2025_GAME_H
#define GAMEENGINE2025_GAME_H

#include "GameState.h"
#include "raylib.h"
#include "Button.h"
#include "Label.h"

enum class GameMode {
    StartMenu,
    Exploration,
    Combat,
    GameOver,
    Exit
};

class Game {
public:
    // constructor
    Game();
    ~Game();

    // methods
    void run();

private:
    // Game Objects
    GameState* gameState = nullptr;
    Player user = Player("Swizzy22");
    GameMode mode;

    // input
    Vector2 mousePos = Vector2();

    // UI Elements
    std::vector<Button> startMenuButtons = {};
    Label titleLabel = Label();

    void handleInput();
    void update();
    void render() const;

    // StartMenu GameMode
    void renderStartMenu() const;

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