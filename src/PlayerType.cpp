#include <iostream>

#include "../header/PlayerType.h"

TankPlayer::TankPlayer(const string &name, double health, double attackDamage, vector<string> inventory, double heal)
    :Player(name, health, attackDamage, TANKPLAYER, inventory, heal)
{}

NimblePlayer::NimblePlayer(const string &name, double health, double attackDamage, vector<string> inventory, double heal)
    :Player(name, health, attackDamage, NIMBLEPLAYER, inventory, heal)
{}

AllRounderPlayer::AllRounderPlayer(const string &name, double health, double attackDamage, vector<string> inventory, double heal)
    :Player(name, health, attackDamage, ALLROUNDERPLAYER, inventory, heal)
{}
