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
    if (userChoice == 1) {
        cout << "Does nothing" << endl;
    }
    else if (userChoice == 2) {
        cout << "YOU CHOSE: Alien" << endl;
        cout << "Choose a type of alien:" << endl;
        cout << "1. Tank\n 2. Slippery\n 3. Boss\n";
        cin >> userChoice2;
        if (userChoice == 1) {
            cout << "YOU CHOSE: Tank Alien" << endl;
            Character newAlien = new TankAlien(charName,180.0,100.0,25.0,TANKALIEN);
            cout << "Displaying Stats:\n";
            cout << "Type: " << newAlien.getType() << endl;
            cout << "Name: " << newAlien.getName() << endl;
            cout << "Health: " << newAlien.getHealth() << endl;
            cout << "Stamina: " << newAlien.getStamina() << endl;
            cout << "Attack Damage: " << newAlien.getAttackDamage() << endl;

        }
        else if (userChoice == 2) {
            cout << "YOU CHOSE: Slippery Alien" << endl;
        }
        else if (userChoice == 3) {
            cout << "YOU CHOSE: Boss Alien" << endl;
        }
        else {
            cout << "Invalid Option: [EXITING]";
        }
    }
    else {
        cout << "Invalid input: [EXITING]";
    }
    

    return 0;
}