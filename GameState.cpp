//
// Created by ratan on 12/24/2025.
//

#include "GameState.h"
#include "Player.h"
#include "Enemy.h"

GameState::GameState(const Player& player, const Enemy& enemy)
    : player(player), enemy(enemy) {

    state = State::StartTurn;
}

void GameState::startTurn() {
    player.drawCards(1);
}

void GameState::updateTurn() {

}

void GameState::endTurn() {
    // end of turn updates
    turnIndex = (turnIndex + 1) % 2;
}
