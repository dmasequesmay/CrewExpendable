#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
#include "../header/Character.h"
#include <string>
#include <vector>

enum AlienType {TANKALIEN, SLIPPERYALIEN, BOSSALIEN};

class Alien : public Character {
    protected:
        AlienType alienClass;
    public:
        Alien(const string &name, double health, double stamina, double attackDamage, AlienType alienClass);
};

#endif