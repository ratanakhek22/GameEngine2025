#include <iostream>
#include "Player.h"
#include "GameState.h"
#include "Card.h"
#include "Actions/DealDamageAction.h"

int main() {
    std::cout << "Welcome to the Game" << std::endl;

    Player user("Swizzy");
    user.setHp(30);

    Player enemy("Frank");
    enemy.setHp(30);

    DealDamageAction shootArrowAction(3);
    const Card shootArrow("Shoot Arrow", 1, &shootArrowAction);

    user.addCard(shootArrow);
    enemy.addCard(shootArrow);

    GameState game(user, enemy);
    game.nextTurn();
}
