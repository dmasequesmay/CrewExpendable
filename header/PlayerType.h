#ifndef PLAYERTYPE_H
#define PLAYERTYPE_H

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

class TankPlayer : public Player {

    public: 
        TankPlayer(const string &name, double health, double attackDamage, vector<string> inventory);
};

class NimblePlayer : public Player {

    public: 
        NimblePlayer(const string &name, double health, double attackDamage, vector<string> inventory);
};

class AllRounderPlayer : public Player {

    public: 
        AllRounderPlayer(const string &name, double health, double attackDamage, vector<string> inventory);
};
#endif
