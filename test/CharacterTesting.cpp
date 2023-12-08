#include <iostream>
#include "../header/Character.h"
#include "../header/Alien.h"
#include "../header/AlienType.h"
#include "../header/Player.h"
#include "../header/PlayerType.h"
#include "../header/Weapon.h"
#include "../header/WeaponType.h"

int main() {
    string charName;
    char userChoice;
    char userChoice2;
    cout << "Enter a name for the character: " << endl;
    cin >> charName;
    cout << "Is this a player (1) or an alien(2)?" << endl;
    cin >> userChoice;
    if (userChoice == '1') {                                // If Player is Chosen
        vector<string> items{"item1", "item2"};
        cout << "YOU CHOSE: Player" << endl;
        cout << "Choose a type of player:" << endl;
        cout << "1. Tank\n2. Nimble\n3. All Rounder\n";
        cin >> userChoice2;
        if (userChoice2 == '1') {                          
            cout << "YOU CHOSE: Tank Player" << endl;
            TankPlayer newPlayer(charName, 150.0, 15.0, items, 15.0);
            cout << "Displaying Stats:\n";
            cout << "  Type: " << newPlayer.getType() << endl;
            cout << "  Name: " << newPlayer.getName() << endl;
            cout << "  Health: " << newPlayer.getHealth() << endl;
            cout << "  Attack Damage: " << newPlayer.getAttackDamage() << endl;
            cout << "  Items in Inventory: " << items.at(0) << ", " << items.at(1) << endl;
        }
        else if (userChoice2 == '2') {
            cout << "YOU CHOSE: Nimble Player" << endl;
            NimblePlayer newPlayer(charName, 90.0, 20.0, items, 15.0);
            cout << "Displaying Stats:\n";
            cout << "  Type: " << newPlayer.getType() << endl;
            cout << "  Name: " << newPlayer.getName() << endl;
            cout << "  Health: " << newPlayer.getHealth() << endl;
            cout << "  Attack Damage: " << newPlayer.getAttackDamage() << endl;
            cout << "  Items in Inventory: " << items.at(0) << ", " << items.at(1) << endl;
        }
        else if (userChoice2 == '3') {
            cout << "YOU CHOSE: All Rounder Player" << endl;
            AllRounderPlayer newPlayer(charName, 110.0, 20.0, items, 15.0);
            cout << "Displaying Stats:\n";
            cout << "  Type: " << newPlayer.getType() << endl;
            cout << "  Name: " << newPlayer.getName() << endl;
            cout << "  Health: " << newPlayer.getHealth() << endl;
            cout << "  Attack Damage: " << newPlayer.getAttackDamage() << endl;
            cout << "  Items in Inventory: " << items.at(0) << ", " << items.at(1) << endl;
        }
        else {
            cout << "Invalid Option: [EXITING]";
        }
    }
    else if (userChoice == '2') {                            // If Alien is Chosen
        cout << "YOU CHOSE: Alien" << endl;
        cout << "Choose a type of alien:" << endl;
        cout << "1. Tank\n2. Slippery\n3. Boss\n";
        cin >> userChoice2;
        if (userChoice2 == '1') {
            cout << "YOU CHOSE: Tank Alien" << endl;
            TankAlien newAlien(charName,180.0, 20.0); 
            cout << "Displaying Stats:\n";
            cout << "  Type: " << newAlien.getType() << endl;
            cout << "  Name: " << newAlien.getName() << endl;
            cout << "  Health: " << newAlien.getHealth() << endl;
            cout << "  Attack Damage: " << newAlien.getAttackDamage() << endl;
        }
        else if (userChoice2 == '2') {
            cout << "YOU CHOSE: Slippery Alien" << endl;
            SlipperyAlien newAlien(charName,120.0,15.0);
            cout << "Displaying Stats:\n";
            cout << "  Type: " << newAlien.getType() << endl;
            cout << "  Name: " << newAlien.getName() << endl;
            cout << "  Health: " << newAlien.getHealth() << endl;
            cout << "  Attack Damage: " << newAlien.getAttackDamage() << endl;
        }
        else if (userChoice2 == '3') {
            cout << "YOU CHOSE: Boss Alien" << endl;
            BossAlien newAlien(charName,200.0,30.0);
            cout << "Displaying Stats:\n";
            cout << "  Type: " << newAlien.getType() << endl;
            cout << "  Name: " << newAlien.getName() << endl;
            cout << "  Health: " << newAlien.getHealth() << endl;
            cout << "  Attack Damage: " << newAlien.getAttackDamage() << endl;
        }
        else {
            "Invalid Option: [EXITING]";
        }

    }
    else {
        cout << "Invalid Option: [EXITING]";
    }
    return 0;
}