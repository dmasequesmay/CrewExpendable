#include "../header/WeaponType.h"
#include <iostream>

HeavyWeapon::HeavyWeapon(WeaponType wType, double attackDamage, double criticalChance, double durability, double staminaCost)
    :Weapon(wType, attackDamage, criticalChance, durability, staminaCost)
{
    // wType = HeavyWeapon;
    // attackDamage = 20.0
    // criticalChance = 15;
    // durability = 50;
    // staminaCost = 20;
}

LightWeapon::LightWeapon(WeaponType wType, double attackDamage, double criticalChance, double durability, double staminaCost)
    :Weapon(wType, attackDamage, criticalChance, durability, staminaCost)
{
    // wType = LightWeapon;
    // attackDamage = 10.0
    // criticalChance = 45;
    // durability = 30;
    // staminaCost = 10;
}
