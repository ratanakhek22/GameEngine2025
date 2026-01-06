//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_CARD_H
#define GAMEENGINE2025_CARD_H

#include <string>
#include <utility>
#include "Action.h"

class Card {
    std::string name;
    Action* action = nullptr;
    int id = -1;

public:
    // constructor
    Card(std::string name, const int id, Action* action)
    : name(std::move(name)), action(action), id(id) {};

    // methods

    // gets
    [[nodiscard]] int getID() const {return id;}
    [[nodiscard]] std::string getName() const {return name;}
    [[nodiscard]] Action* getAction() const {return action;}
};

#endif //GAMEENGINE2025_CARD_H