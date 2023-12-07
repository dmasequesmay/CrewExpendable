#include <iostream>
#include "../header/Character.h"
#include "../header/Alien.h"
#include "../header/AlienType.h"

int main() {
    string charName;
    char userChoice;
    char userChoice2;
    cout << "Enter a name for the character: " << endl;
    cin >> charName;
    cout << "Is this a player (1) or an alien(2)?" << endl;
    cin >> userChoice;
    if (userChoice == 1) {                                // If Player is Chosen
        vector<string> items{item1, item2};
        cout << "YOU CHOSE: Player" << endl;
        cout << "Choose a type of player:" << endl;
        cout << "1. Tank\n2. Nimble\n3. All Rounder\n";
        cin >> userChoice2;
        if (userChoice2 == 1) {                          
            cout << "YOU CHOSE: Tank Player" << endl;
            Character newPlayer = new Player(charName, 150.0, 15.0, TANKPLAYER, items);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newPlayer.getType() << endl;
            cout << "Name: " << newPlayer.getName() << endl;
            cout << "Health: " << newPlayer.getHealth() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;
            cout << "Items in Inventory: " << items.at(0) << ", " << items.at(1) << endl;

        }
        else if (userChoice == 2) {
            cout << "YOU CHOSE: Nimble Player" << endl;
            Character newPlayer = new Player(charName, 90.0, 20.0, NIMBLEPLAYER, items);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newPlayer.getType() << endl;
            cout << "Name: " << newPlayer.getName() << endl;
            cout << "Health: " << newPlayer.getHealth() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;
            cout << "Items in Inventory: " << items.at(0) << ", " << items.at(1) << endl;
        }
        else if (userChoice == 3) {
            cout << "YOU CHOSE: All Rounder Player" << endl;
            Character newPlayer = new Player(charName, 110.0, 20.0, ALLROUNDERPLAYER, items);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newPlayer.getType() << endl;
            cout << "Name: " << newPlayer.getName() << endl;
            cout << "Health: " << newPlayer.getHealth() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;
            cout << "Items in Inventory: " << items.at(0) << ", " << items.at(1) << endl;
        }
        else {
            cout << "Invalid Option: [EXITING]";
        }
    }
    else if (userChoice == 2) {                            // If Alien is Chosen
        cout << "YOU CHOSE: Alien" << endl;
        cout << "Choose a type of alien:" << endl;
        cout << "1. Tank\n 2. Slippery\n 3. Boss\n";
        cin >> userChoice2;
        if (userChoice2 == 1) {
            cout << "YOU CHOSE: Tank Alien" << endl;
            Character newAlien = new Alien(charName,180.0, 20.0, TANKALIEN);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newAlien.getType() << endl;
            cout << "Name: " << newAlien.getName() << endl;
            cout << "Health: " << newAlien.getHealth() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;
        }
        else if (userChoice2 == 2) {
            cout << "YOU CHOSE: Slippery Alien" << endl;
            Character newAlien = new Alien(charName,120.0,15.0,SLIPPERYALIEN);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newAlien.getType() << endl;
            cout << "Name: " << newAlien.getName() << endl;
            cout << "Health: " << newAlien.getHealth() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;
        }
        else if (userChoice2 == 3) {
            cout << "YOU CHOSE: Boss Alien" << endl;
            Character newAlien = new Alien(charName,200.0,30.0,BOSSALIEN);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newAlien.getType() << endl;
            cout << "Name: " << newAlien.getName() << endl;
            cout << "Health: " << newAlien.getHealth() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;
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