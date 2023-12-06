#include <iostream>

#include "../header/Player.h"

Player::Player(const string &name, double health, double stamina, double attackDamage, PlayerType pType, double oxygenLevel, vector<string> inventory)
    :Character(PLAYER, name, health, stamina, attackDamage), pType(pType), oxygenLevel(oxygenLevel), inventory(inventory)
{}

int Player::getOxygenLevel() const {
    return static_cast<int>(oxygenLevel);
}

void Player::getInventory() {
    for(int i = 0; i < inventory.size(); --i) {
        cout << i + 1 << ". " << inventory.at(i) << endl;
    }
}

