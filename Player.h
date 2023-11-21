#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "Character.h"

using namespace std;

enum PlayerType {TANKPLAYER, NIMBLEPLAYER, ALLROUNDERPLAYER};

class Player : public Character {

    protected:
        PlayerType pType;
        double oxygenLevel;
        vector<string> inventory;

    public: 
        Player(const string &name, double health, double stamina, double attackDamage, PlayerType pType, double oxygenLevel, vector<string> inventory);
        //Returns the whole number of the oxygen level value (static_cast to int)
 	    int getOxygenLevel() const;
        //Returns the names of each object listed in the inventory array
        void getInventory();
        virtual void attack(Character &) = 0;
        virtual void block(Character &) = 0;
};

#endif
