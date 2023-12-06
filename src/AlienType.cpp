#include <iostream>
#include "../header/AlienType.h"

using namespace std;

TankAlien::TankAlien(const string &name, double health, double attackDamage)
    :Alien(name, health, attackDamage, TANKALIEN)
{}


SlipperyAlien::SlipperyAlien(const string &name, double health, double attackDamage)
    :Alien(name, health, attackDamage, SLIPPERYALIEN)
{}

BossAlien::BossAlien(const string &name, double health, double attackDamage)
    :Alien(name, health, attackDamage, BOSSALIEN) 
{}
