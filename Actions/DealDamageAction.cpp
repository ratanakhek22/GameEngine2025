//
// Created by ratan on 12/29/2025.
//

#include "DealDamageAction.h"
#include "Player.h"

void DealDamageAction::execute(GameState &state, Player &owner, Player &target) {
    target.hit(damage);
}