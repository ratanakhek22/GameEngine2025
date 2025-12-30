//
// Created by ratan on 12/24/2025.
//

#ifndef GAMEENGINE2025_CARD_H
#define GAMEENGINE2025_CARD_H

#include <string>
#include <utility>

#include "Actions/Action.h"

struct Card {
    std::string name;
    int id = -1;
    Action *action = nullptr;

    // constructor
    Card(std::string name, const int id, Action *action) : name(std::move(name)), id(id), action(action) {};

    // methods

    // gets
    int getID() const {return id;}
    std::string getName() const {return name;}
    Action *getAction() const {return action;}
};


#endif //GAMEENGINE2025_CARD_H