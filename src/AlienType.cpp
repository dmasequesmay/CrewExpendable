#include <iostream>
#include "../header/AlienType.h"

using namespace std;

TankAlien::TankAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(name, health, stamina, attackDamage, TANKALIEN)
{}


SlipperyAlien::SlipperyAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(name, health, stamina, attackDamage, SLIPPERYALIEN)
{}

BossAlien::BossAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(name, health, stamina, attackDamage, BOSSALIEN) 
{}
