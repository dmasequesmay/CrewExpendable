#include <iostream>

#include "PlayerType.h"

TankPlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory)
    :Player(const string &name, double health, double stamina, double attackDamage, TANKPLAYER, double oxygenLevel, vector<string> inventory)
{}

NimblePlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory)
    :Player(const string &name, double health, double stamina, double attackDamage, NIMBLEPLAYER, double oxygenLevel, vector<string> inventory)
{}

AllRounderPlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory)
    :Player(const string &name, double health, double stamina, double attackDamage, ALLROUNDERPLAYER, double oxygenLevel, vector<string> inventory)
{}
