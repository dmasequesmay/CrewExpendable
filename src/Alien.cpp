#include <iostream>
#include "../header/Alien.h"

Alien::Alien (const string &name, double health, double stamina, double attackDamage, AlienType alienType) 
    :Character(ALIEN, name, health, stamina, attackDamage)
{}

