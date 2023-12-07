#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H
#include <string>

#include "../header/Weapon.h"
using namespace std;

class HeavyWeapon : public Weapon {
    public: 
        HeavyWeapon(string name);
};

class LightWeapon : public Weapon {
    public: 
        LightWeapon(string name);
};

#endif