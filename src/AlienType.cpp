#include "header/AlienType.h"
#include <iostream>

using namespace std;

TankAlien::tankAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(const string &name, double health, double stamina, double attackDamage, TANKALIEN)
{
    health = 180;
    stamina = 100;
    attackDamage = 25;
}

void TankAlien::attack(Character &c) override {
        c.damage(attackDamage);
}


SlipperyAlien::slipperyAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(const string &name, double health, double stamina, double attackDamage, SLIPPERYALIEN)
{
    health = 100;
    stamina = 150;
    attackDamage = 15;
}

void SlipperyAlien::attack(Character &c) override {
        c.damage(attackDamage);
}

BossAlien::bossAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(const string &name, double health, double stamina, double attackDamage, BOSSALIEN)
{
    health = 20;
    stamina = 150;
    attackDamage = 30;
}

void BossAlien::attack(Character &c) override {
    c.damage(attackDamage);
}
