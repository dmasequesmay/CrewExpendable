#ifndef ALIENTYPE_H
#define ALIENTYPE_H

#include "Alien.h"
#include <iostream>
#include <string>

using namespace std;

class TankAlien : public Player {
    public: 
        tankAlien(const string &name, double health, double stamina, double attackDamage);
        void attack(Character &) override;
}

class SlipperyAlien : public Player {
    public: 
        slipperyAlien(const string &name, double health, double stamina, double attackDamage);
        void attack(Character &) override;
}

class BossAlien : public Player {
    public: 
        bossAlien(const string &name, double health, double stamina, double attackDamage);
        void attack(Character &) override;
}