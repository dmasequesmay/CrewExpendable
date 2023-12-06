#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H
#include <string>

#include "header/Weapon.h"
using namespace std;

class HeavyWeapon : public Weapon {
    public: 
        heavyWeapon(WeaponType type, string name, double attackDamage, double criticalChance);
};

class MediumWeapon : public Weapon {
    public:
        mediumWeapon(WeaponType type, string name, double attackDamage, double criticalChance);
}
class LightWeapon : public Weapon {
    public: 
        lightWeapon(WeaponType type, string name, double attackDamage, double criticalChance);
};

#endif