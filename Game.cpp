//
// Created by ratan on 12/30/2025.
//

#include "Game.h"
#include "Testing.h"
#include "raylib.h"
#include "Enemy.h"

Game::Game() {
    InitWindow(1280, 720, "Card Game");
    SetTargetFPS(60);
    mode = GameMode::StartMenu;

    // HARD CODED OPPONENT
    Enemy enemy1("Orc King (Frank)");

    // Initialize UI Elements
    titleLabel = Label(20, 20, {
        .text = "Welcome to Game :)",
        .fontSize = 40,
    });

    // Start Game Button
    startMenuButtons.push_back(Button({20, 70, 200, 40}, BLUE, RED,
        [this, enemy1]() {
            delete gameState;
            gameState = new GameState(user, enemy1);
            mode = GameMode::Combat;
        }, {
            .text = "Start Game",
        }));

    // Quit Button
    startMenuButtons.push_back(Button({20, 120, 200, 40}, BLUE, RED,
        []() {
            CloseWindow();
        }, {
            .text = "Quit",
        }));
}

Game::~Game() {
    // if (gameState != nullptr) {
    //     delete gameState;
    // }
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

    switch (mode) {
        case GameMode::StartMenu:
            for (const Button& button : startMenuButtons) {
                if (button.isClicked(mousePos)) {
                    button.onClick();
                    break;
                }
            }
            break;
        default:
            break;
    }
}

void Game::update() {
    switch (mode) {
        case GameMode::Combat:
            gameState->doTurn();
            break;
        default:
            break;
    }
}

void Game::renderStartMenu() const {
    titleLabel.draw();

    for (const Button& button : startMenuButtons) {
        button.draw(mousePos);
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
