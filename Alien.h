#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
#include "Character.h"
#include <string>
#include <vector>

enum AlienType {TANKALIEN, SLIPPERYALIEN, BOSSALIEN}

class Alien : public Character {
    protected:
        AlienType alienClass;
    public:
        virtual void attack(Character &) = 0;
}

#endif