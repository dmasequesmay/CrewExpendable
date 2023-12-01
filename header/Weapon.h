#ifndef WEAPON_H
#define WEAPON_H

using namespace std;

enum WeaponType {HEAVYWEAPON, LIGHTWEAPON};

class Weapon {
    protected:
        WeaponType wType;
        double attackDamage;
        double criticalChance;
        double durability;
        double staminaCost;

    public:
        Weapon(WeaponType type, double attackDamage, double criticalChance, double durability, double staminaCost);
        
        WeaponType getType() const;
        double getAttackDamage();
        double getCriticalChance();
        double getDurability();
        double getStaminaCost();
}

#endif