#include <iostream>

#include "../header/PlayerType.h"

TankPlayer::TankPlayer(const string &name, double health, double attackDamage, vector<string> inventory)
    :Player(name, health, attackDamage, TANKPLAYER, inventory)
{}

NimblePlayer::NimblePlayer(const string &name, double health, double attackDamage, vector<string> inventory)
    :Player(name, health, attackDamage, NIMBLEPLAYER, inventory)
{}

AllRounderPlayer::AllRounderPlayer(const string &name, double health, double attackDamage, vector<string> inventory)
    :Player(name, health, attackDamage, ALLROUNDERPLAYER, inventory)
{}
