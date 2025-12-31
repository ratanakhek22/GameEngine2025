//
// Created by ratan on 12/30/2025.
//

#include "Game.h"
#include "Testing.h"
#include "raylib.h"

Game::Game() {
    InitWindow(1280, 720, "Card Game");
    SetTargetFPS(60);
    mode = GameMode::StartMenu;
}

Game::~Game() {
    CloseWindow();
}

void Game::run() const {
    while (!WindowShouldClose()) {
        // handleInput();
        // update();

        BeginDrawing();
            ClearBackground(BLUE);
            render();
        EndDrawing();
    }
}

// void Game::handleInput() {
//
// }

// void Game::update() {
//
// }

void Game::renderStartMenu() {
    constexpr int HEIGHT = 40;
    constexpr int OFFSET = HEIGHT + 20;

    const std::vector<const char *> options = {
        "Welcome to Game :)",
        "Menu",
        "Exit",
    };
    for (int i = 0; i < options.size(); i++) {
        constexpr int FONT = 30;
        if (i != 0) DrawRectangle(20, 20 + OFFSET * i, MeasureText(options[i], FONT) + 60, HEIGHT, WHITE);
        DrawText(options[i], 20, 20 + OFFSET * i + ((HEIGHT - FONT) / 2), FONT, BLACK);
    }
}

void Game::render() const {
    switch (mode) {
        case GameMode::StartMenu:
            renderStartMenu();
            break;
        // case GameMode::Exploration:
        //     renderExplore();
        //     break;
        // case GameMode::Combat:
        //     renderCombat();
        //     break;
        // case GameMode::GameOver:
        //     renderGameOver();
        //     break;
        // case GameMode::Exit:
        //     renderExit();
        //     break;
        default:
            break;
    }
}
