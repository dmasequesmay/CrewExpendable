#include <iostream>

#include "../header/PlayerType.h"

TankPlayer::TankPlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory)
    :Player(name, health, stamina, attackDamage, TANKPLAYER, oxygenLevel, inventory)
{}

NimblePlayer::NimblePlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory)
    :Player(name, health, stamina, attackDamage, NIMBLEPLAYER, oxygenLevel, inventory)
{}

AllRounderPlayer::AllRounderPlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory)
    :Player(name, health, stamina, attackDamage, ALLROUNDERPLAYER, oxygenLevel, inventory)
{}
