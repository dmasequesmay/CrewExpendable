#include "../header/WeaponType.h"
#include <iostream>

HeavyWeapon::heavyWeapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost)
    :Weapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost)
{
    type = HeavyWeapon;
    attackDamage = 20.0
    criticalChance = 15;
    durability = 50;
    staminaCost = 20;
}

LightWeapon::lightWeapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost)
    :Weapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost)
{
    type = LightWeapon;
    attackDamage = 10.0
    criticalChance = 45;
    durability = 30;
    staminaCost = 10;
}
