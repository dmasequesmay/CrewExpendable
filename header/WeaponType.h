#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H
#include <string>

#include "../header/Weapon.h"
using namespace std;

class HeavyWeapon : public Weapon {
    public: 
        HeavyWeapon(WeaponType type, string name, double attackDamage, double criticalChance);
};

class MediumWeapon : public Weapon {
    public:
        MediumWeapon(WeaponType type, string name, double attackDamage, double criticalChance);
};

class LightWeapon : public Weapon {
    public: 
        LightWeapon(WeaponType type, string name, double attackDamage, double criticalChance);
};

#endif