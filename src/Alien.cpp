#include <iostream>
#include "../header/Alien.h"

Alien::Alien(const string &name, double health, double stamina, double attackDamage, AlienType alienClass) 
    :Character(ALIEN, name, health, stamina, attackDamage), alienClass(alienClass)
{}

