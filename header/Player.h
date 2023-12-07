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
        vector<string> inventory;
        double heal;

    public: 
        Player(const string &name, double health, double attackDamage, PlayerType pType, vector<string> inventory, double heal);
        //Returns the names of each object listed in the inventory array
        void getInventory();
        void addInventory(string &inventoryName);
        void removeInventory(string &inventoryName);
        bool hasHeavyWeapon();
        bool hasMediumWeapon();
        bool hasLightWeapon();
        bool hasHeal();
        void getHeal();
};

#endif