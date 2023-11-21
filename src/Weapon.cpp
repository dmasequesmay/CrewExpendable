#include "header/Weapon.h"

#include <iostream>

using namespace std;

Weapon::Weapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost)
    :type(type), attackDamage(attackDamage), criticalChance(criticalChance), durability(durability), staminaCost(staminaCost)
{}

WeaponType Weapon::getType() const {
    return type;
}

double Weapon::getAttackDamage() {
    return attackDamage;
}

double Weapon::getCriticalChance() {
    return criticalChance;
}

double Weapon::getDurability() {
    return durability;
}

double Weapon::getStaminaCost() {
    return staminaCost;
}