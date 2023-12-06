#include <iostream>
#include <time.h>
#include "../header/Combat.h"

void Combat::attack(Character &attacker, Character &attackee) {
    srand(time(0));
    double damage = attacker.getAttackDamage();
    int crit = 1 + (rand() % 100); // rolls for critical chance
    if (crit <= 15) {
        damage *= 1.2;
    }
    attackee.damage(damage);
}

void Combat::block(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage() / 2.0;
    attackee.damage(damage);
}

void Combat::dodge(Character &attacker, Character &attackee) {
    double damage = attacker.getAttackDamage();
}