#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H

#include "header/Weapon.h"
using namespace std;

class HeavyWeapon : public Weapon {
    public: 
        heavyWeapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost);
};

class LightWeapon : public Weapon {
    public: 
        lightWeapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost);
};

#endif