#include <iostream>
#include "../header/Combat.h"

void Combat::attack(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage();
    attackee.damage(damage);
}

void Combat::block(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage() / 2.0;
    attackee.damage(damage);
}

void Combat::dodge(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage();
}