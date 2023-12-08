#include "../header/Weapon.h"
#include "../header/WeaponType.h"
#include <iostream>

using namespace std;

int main() {
    string w1 = "Crowbar";
    string w2 = "Wrench";
    string w3 = "Scissors";
    double attack;
    double critical;
    cout << "Enter attack damage for the weapons: ";
    cin >> attack; 
    cout << "Enter critical chance: ";
    cin >> critical;
    cout << "===================================" << endl;
    cout << "-Testing Weapon Constructors-" << endl << endl;
    Weapon wep1(HEAVYWEAPON, w1, attack, critical);
    cout << "Weapon 1 stats:" << endl;
    cout << "  Name: " << wep1.getName() << endl;
    cout << "  Attack Damage: " << wep1.getAttackDamage() << endl;
    cout << "  Critical Chance: " << wep1.getCriticalChance() << endl << endl;
    Weapon wep2(MEDIUMWEAPON, w2, attack, critical);
    cout << "Weapon 2 stats:" << endl;
    cout << "  Name: " << wep2.getName() << endl;
    cout << "  Attack Damage: " << wep2.getAttackDamage() << endl;
    cout << "  Critical Chance: " << wep2.getCriticalChance() << endl << endl;
    Weapon wep3(LIGHTWEAPON, w3, attack, critical);
    cout << "Weapon 3 stats:" << endl;
    cout << "  Name: " << wep3.getName() << endl;
    cout << "  Attack Damage: " << wep3.getAttackDamage() << endl;
    cout << "  Critical Chance: " << wep3.getCriticalChance() << endl;

    cout << "===================================" << endl;
    cout << "-Testing WeaponType Constructors-" << endl;
    cout << "       With Hardcoded Values       " << endl << endl;

    HeavyWeapon wep4(w1);
    cout << "Weapon 4 stats:" << endl;
    cout << "  Name: " << wep4.getName() << endl;
    cout << "  Attack Damage: " << wep4.getAttackDamage() << endl;
    cout << "  Critical Chance: " << wep4.getCriticalChance() << endl << endl;
    MediumWeapon wep5(w2);
    cout << "Weapon 5 stats:" << endl;
    cout << "  Name: " << wep5.getName() << endl;
    cout << "  Attack Damage: " << wep5.getAttackDamage() << endl;
    cout << "  Critical Chance: " << wep5.getCriticalChance() << endl << endl;
    LightWeapon wep6(w3);
    cout << "Weapon 6 stats:" << endl;
    cout << "  Name: " << wep6.getName() << endl;
    cout << "  Attack Damage: " << wep6.getAttackDamage() << endl;
    cout << "  Critical Chance: " << wep6.getCriticalChance() << endl;









    return 0;
}