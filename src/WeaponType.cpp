#include "../header/WeaponType.h"
#include <iostream>

HeavyWeapon::HeavyWeapon(WeaponType type, string name, double attackDamage, double criticalChance)
    :Weapon(type, attackDamage, criticalChance)
{}

MediumWeapon::MediumWeapon(WeaponType type, string name, double attackDamage, double criticalChance)
    :Weapon(type, attackDamage, criticalChance)
{}

LightWeapon::LightWeapon(WeaponType type, string name, double attackDamage, double criticalChance)
    :Weapon(type, attackDamage, criticalChance)
{}
