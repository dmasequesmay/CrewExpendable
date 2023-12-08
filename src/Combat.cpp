#include <iostream>
#include "../header/Combat.h"

void Combat::attack(Character &attacker, Character &defender) {
    double damage = (attacker.getHealth() / MAX_HEALTH) * attacker.getAttackDamage();
    defender.damage(damage);
    cout << attacker.getName() << " strikes " << defender.getName() << ". " << "They take " << damage << " damage!" << endl;
    if (!defender.isAlive()) {
        cout << attacker.getName() << " wins the battle!" << endl;
    }
}

void Combat::block(Character &attacker, Character &defender) {
    double damage = (attacker.getHealth() / MAX_HEALTH) * attacker.getAttackDamage() / 2;
    defender.damage(damage);
    cout << defender.getName() << " readies themself to block an attack. " << attacker.getName() << " attacks and " << defender.getName() << " only takes " << damage << " damage!";
    if (!defender.isAlive()) {
        cout << attacker.getName() << " wins the battle!" << endl;
    }
}

void Combat::dodge(Character &attacker, Character &defender) {
    double damage = (defender.getHealth() / MAX_HEALTH) * defender.getAttackDamage();
    cout << attacker.getName() << " attacks! " << defender.getName() << " was able to successfully dodge the attack and take no damage!";
}