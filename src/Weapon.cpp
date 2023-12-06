#include "../header/Weapon.h"

#include <iostream>

using namespace std;

Weapon::Weapon(WeaponType wType, double attackDamage, double criticalChance, double durability, double staminaCost)
    :wType(wType), attackDamage(attackDamage), criticalChance(criticalChance), durability(durability), staminaCost(staminaCost)
{}

WeaponType Weapon::getType() const {
    return wType;
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