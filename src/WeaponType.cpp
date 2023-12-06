#include "../header/WeaponType.h"
#include <iostream>

HeavyWeapon::HeavyWeapon(string name, double attackDamage, double criticalChance)
    :Weapon(HEAVYWEAPON, name, attackDamage, criticalChance)
{
    // wType = HeavyWeapon;
    // attackDamage = 20.0
    // criticalChance = 15;
}

LightWeapon::LightWeapon(string name, double attackDamage, double criticalChance)
    :Weapon(LIGHTWEAPON, name, attackDamage, criticalChance)
{
    // wType = LightWeapon;
    // attackDamage = 10.0
    // criticalChance = 45;
}
