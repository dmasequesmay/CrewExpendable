#include "../header/Weapon.h"

#include <iostream>

using namespace std;

Weapon::Weapon(WeaponType wType, string name, double attackDamage, double criticalChance)
    :wType(wType), wName(name), attackDamage(attackDamage), criticalChance(criticalChance)
{}

WeaponType Weapon::getType() const {
    return wType;
}

string Weapon::getName() const {
    return wName;
}

double Weapon::getAttackDamage() {
    return attackDamage;
}

double Weapon::getCriticalChance() {
    return criticalChance;
}