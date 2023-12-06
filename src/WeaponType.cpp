#include "../header/WeaponType.h"
#include <iostream>

HeavyWeapon::heavyWeapon(WeaponType type, string name, double attackDamage, double criticalChance)
    :Weapon(WeaponType type, string name, double attackDamage, double criticalChance)
{
    type = HeavyWeapon;
    attackDamage = 20.0
    criticalChance = 15;
    durability = 50;
    staminaCost = 20;
}

LightWeapon::lightWeapon(WeaponType type, string name, double attackDamage, double criticalChance)
    :Weapon(WeaponType type, string name, double attackDamage, double criticalChance)
{
    type = LightWeapon;
    attackDamage = 10.0
    criticalChance = 45;
    durability = 30;
    staminaCost = 10;
}
