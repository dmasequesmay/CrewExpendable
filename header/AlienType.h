#ifndef ALIENTYPE_H
#define ALIENTYPE_H

#include "../header/Alien.h"
#include <iostream>
#include <string>

using namespace std;

class TankAlien : public Alien {
    public: 
        TankAlien(const string &name, double health, double attackDamage);
};

class SlipperyAlien : public Alien {
    public: 
        SlipperyAlien(const string &name, double health, double attackDamage);
};

class BossAlien : public Alien {
    public: 
        BossAlien(const string &name, double health, double attackDamage);
};
#endif