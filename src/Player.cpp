#include <iostream>

#include "../header/Player.h"

Player::Player(const string &name, double health, double attackDamage, PlayerType pType, vector<string> inventory)
    :Character(PLAYER, name, health, attackDamage), pType(pType), inventory(inventory)
{}

void Player::getInventory() {
    for(int i = 0; i < inventory.size(); --i) {
        cout << i + 1 << ". " << inventory.at(i) << endl;
    }
}

