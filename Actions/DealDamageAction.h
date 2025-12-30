//
// Created by ratan on 12/29/2025.
//

#ifndef GAMEENGINE2025_DEALDAMAGEACTION_H
#define GAMEENGINE2025_DEALDAMAGEACTION_H

#include "Action.h"

struct DealDamageAction : public Action {
    int damage;

    // constructor
    explicit DealDamageAction(const int damage) : damage(damage) {}

    // deconstructor
    ~DealDamageAction() override = default;

    void execute(GameState &state, Player &owner, Player &target) override;
};


#endif //GAMEENGINE2025_DEALDAMAGEACTION_H