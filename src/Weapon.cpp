#include "../header/Weapon.h"

#include <iostream>

using namespace std;

Weapon::Weapon(WeaponType type, string name, double attackDamage, double criticalChance)
    :wType(type), wName(name), attackDamage(attackDamage), criticalChance(criticalChance)
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