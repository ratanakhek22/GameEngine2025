//
// Created by ratan on 12/24/2025.
//

#include "GameState.h"
#include "Player.h"
#include "Random.h"
#include <array>
#include <iostream>
#include <ostream>

GameState::GameState(const Player &p1, const Player &p2)
    : players{ p1, p2 } {}

void GameState::nextTurn() {
    Player &player = players[turnIndex];
    Player &opponent = players[(turnIndex + 1) % 2];
    bool playing = true;
    int iter = 0;

    // prompt players for moves
    std::cout << player.getName() << " HP: " << player.getHp() << "/" << player.getMaxHp() << std::endl;
    std::cout << opponent.getName() << " HP: " << opponent.getHp() << "/" << opponent.getMaxHp() << std::endl;
    while (playing && iter < 20) {
        std::cout << "1: Deal 3 damage to opponent" << std::endl;
        std::cout << "2: Heal 3 damage to self" << std::endl;

        // read/handle input
        int input;
        std::cin >> input;
        switch (input) {
            case 1:
                std::cout << "You chose " << input << std::endl;
                opponent.hit(3);
                break;
            case 2:
                std::cout << "You chose " << input << std::endl;
                player.hit(-3);
                break;
            default:
                std::cout << "You chose " << input << std::endl;
                break;
        }

        // Show update after input
        std::cout << player.getName() << " HP: " << player.getHp() << "/" << player.getMaxHp() << std::endl;
        std::cout << opponent.getName() << " HP: " << opponent.getHp() << "/" << opponent.getMaxHp() << std::endl;

        // Check win-condition?
        if (opponent.getHp() <= 0 || player.getHp() <= 0) playing = false;

        // max iter for debug
        iter++;
    }

    // end of turn updates
    turnIndex = (turnIndex + 1) % 2;
}
