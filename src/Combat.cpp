#include <iostream>
#include "../header/Combat.h"

void Combat::attack(Character &player, Character &alien) {
    double damage = (player.getHealth() / MAX_HEALTH) * player.getAttackDamage();
    alien.damage(damage);
    cout << "Player uses weapons to attack the alien! The alien takes " << damage << " damage!" << endl;
}

void Combat::block(Character &player, Character &alien) {
    double damage = (alien.getHealth() / MAX_HEALTH) * alien.getAttackDamage() / 2;
    player.damage(damage);
    cout << "The alien attacks! You try to dodge the attack, but can only block the attack. You take " << damage << " damage!" << endl;
}

void Combat::dodge(Character &player, Character &alien) {
    double damage = (alien.getHealth() / MAX_HEALTH) * alien.getAttackDamage();
    cout << "The alien attacks! You were able to successfully dodge the attack and take no damage from the alien!" << endl;
}