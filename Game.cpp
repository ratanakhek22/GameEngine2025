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

    // Initialize UI Elements
}

Game::~Game() {
    CloseWindow();
}

void Game::run() {
    while (!WindowShouldClose()) {
        handleInput();
        // update();

        BeginDrawing();
            ClearBackground(WHITE);
            render();
        EndDrawing();
    }
}

void Game::handleInput() {
    mousePos = GetMousePosition();
}

// void Game::update() {
//
// }

void Game::renderStartMenu() const {
    titleLabel.draw(mousePos);
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
