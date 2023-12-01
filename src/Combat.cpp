#include <iostream>
#include "../lib/Combat.h"

void Combat::attack(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage();
    attackee.damage(damage);
}

void Combat::block(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage() / 2.0;
    attackee.damage(damage);
}