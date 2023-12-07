#include "../header/WeaponType.h"
#include <iostream>

HeavyWeapon::HeavyWeapon(string name)
    :Weapon(HEAVYWEAPON, name, 20.0, 15)
{}

MediumWeapon::MediumWeapon(string name)
    :Weapon(MEDIUMWEAPON, name, 15.0, 30)
{}

LightWeapon::LightWeapon(string name)
    :Weapon(LIGHTWEAPON, name, 10.0, 45)
{}
