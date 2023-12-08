#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include "../header/Character.h"

using namespace std;

enum WeaponType {HEAVYWEAPON, MEDIUMWEAPON, LIGHTWEAPON};

class Weapon {
    protected:
        WeaponType wType;
        string wName;
        double attackDamage;
        double criticalChance;

    public:
        Weapon(WeaponType wType, string wName, double attackDamage, double criticalChance);
        WeaponType getType() const;
        string getName() const;
        double getAttackDamage() const;
        double getCriticalChance()const;
};
#endif