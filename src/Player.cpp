#include <iostream>
#include <vector>

#include "../header/Player.h"

Player::Player(const string &name, double health, double attackDamage, PlayerType pType, vector<string> inventory, double heal)
    :Character(PLAYER, name, health, attackDamage), pType(pType), inventory(inventory), heal(heal)
{}

void Player::getHeal() {
    this->health += 25.0;
}

void Player::getInventory() {
    for(int i = 0; i < inventory.size(); ++i) {
        cout << i + 1 << ". " << inventory.at(i) << endl;
    }
}

void Player::addInventory(string &inventoryName) {
    inventory.push_back(inventoryName);
}

void Player::removeInventory(string &inventoryName) {
    for(int i = 0; i < inventory.size(); ++i) {
        if (inventory.at(i) == inventoryName) {
            inventory.pop_back();
        }
    }
}

bool Player::hasHeavyWeapon() {
    for(int i = 0; i < inventory.size(); ++i) {
        if (inventory.at(i) == "Heavy Weapon") {
            return true;
        }
    }
    return false;
}

bool Player::hasMediumWeapon() {
    for(int i = 0; i < inventory.size(); ++i) {
        if (inventory.at(i) == "Medium Weapon") {
            return true;
        }
    }
    return false;
}

bool Player::hasLightWeapon() {
    for(int i = 0; i < inventory.size(); ++i) {
        if (inventory.at(i) == "Light Weapon") {
            return true;
        }
    }
    return false;
}

bool Player::hasHeal() {
    for(int i = 0; i < inventory.size(); ++i) {
        if (inventory.at(i) == "Heal") {
            return true;
        }
    }
    return false;
}
