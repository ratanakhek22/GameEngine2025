//
// Created by ratan on 12/29/2025.
//

#ifndef GAMEENGINE2025_DEALDAMAGEACTION_H
#define GAMEENGINE2025_DEALDAMAGEACTION_H

#include "Action.h"

class DealDamageAction : public Action {
    int damage;

public:
    // constructor
    explicit DealDamageAction(const int damage) : damage(damage) {}

    // deconstructor
    ~DealDamageAction() override = default;

    void execute(GameState &state, Player &owner, Player &target) override;
};


#endif //GAMEENGINE2025_DEALDAMAGEACTION_H