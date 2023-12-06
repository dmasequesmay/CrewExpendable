#include <iostream>
#include "../header/Alien.h"

Alien::Alien(const string &name, double health, double attackDamage, AlienType alienClass) 
    :Character(ALIEN, name, health, attackDamage), alienClass(alienClass)
{}

