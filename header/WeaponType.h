#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H

#include "../header/Weapon.h"
using namespace std;

class HeavyWeapon : public Weapon {
    public: 
        HeavyWeapon(string name, double attackDamage, double criticalChance);
};

class LightWeapon : public Weapon {
    public: 
        LightWeapon(string name, double attackDamage, double criticalChance);
};

#endif