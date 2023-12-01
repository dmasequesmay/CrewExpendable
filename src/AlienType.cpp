#include "../header/AlienType.h"
#include <iostream>

using namespace std;

TankAlien::tankAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(const string &name, double health, double stamina, double attackDamage, TANKALIEN)
{
    health = 180;
    stamina = 100;
    attackDamage = 25;
}


SlipperyAlien::slipperyAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(const string &name, double health, double stamina, double attackDamage, SLIPPERYALIEN)
{
    health = 100;
    stamina = 150;
    attackDamage = 15;
}

BossAlien::bossAlien(const string &name, double health, double stamina, double attackDamage)
    :Alien(const string &name, double health, double stamina, double attackDamage, BOSSALIEN)
{
    health = 200;
    stamina = 150;
    attackDamage = 30;
}
