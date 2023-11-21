#ifndef PLAYERTYPE_H
#define PLAYERTYPE_H

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

class TankPlayer : public Player {

    public: 
        TankPlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory);
        void attack(Character &) override;
        void block(Character &) override;
};

class NimblePlayer : public Player {

    public: 
        NimblePlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory);
        void attack(Character &) override;
        void block(Character &) override;
};

class AllRounderPlayer : public Player {

    public: 
        AllRounderPlayer(const string &name, double health, double stamina, double attackDamage, double oxygenLevel, vector<string> inventory);
        void attack(Character &) override;
        void block(Character &) override;
};
#endif
