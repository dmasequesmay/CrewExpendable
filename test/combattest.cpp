#include "../header/Character.h"
#include "../header/Alien.h"
#include "../header/AlienType.h"
#include "../header/Player.h"
#include "../header/PlayerType.h"
#include "../header/Combat.h"
#include <iostream>

// void Combat(Character &newPlayer, Character &newAlien);
using namespace std;

int main() {
    string charName;
    string enemName;
    vector<string> items{"item1","item2","item3"};
    cout << "Enter a name for the player: ";
    cin >> charName;
    cout << "Enter a name for the enemy: ";
    cin >> enemName;

    AllRounderPlayer newPlayer(charName, 120.0, 30.0, items, 15.0);
    TankAlien newAlien(enemName,160.0, 20.0);
    char charChoice;
    int itemChoice;
    bool combatEnd = false;
    while (!combatEnd) {
        Combat newCombat;
        cout << "----- It is your turn ----" << endl;
        cout << "Choose your action:" << endl;
        cout << "1. Attack 2. Block 3. Dodge 4. Items" << endl;
        cin >> charChoice;
        if (charChoice == '1') {
            newCombat.attack(newPlayer,newAlien);
            if (!newAlien.isAlive()) {
                combatEnd = true;
            }
            else {
                cout << "It is the Alien's turn:" << endl;
                newCombat.attack(newAlien,newPlayer);
            }
        }
        else if (charChoice == '2') {
            newCombat.block(newAlien,newPlayer);
        }
        else if (charChoice == '3') {
            newCombat.dodge(newAlien,newPlayer);
        }
        else {
            newPlayer.getInventory();
            cout << endl;
            cout << "Which item would you like to use?" << endl;
            cin >> itemChoice;
            if (itemChoice == 1) {
                cout << "Used a health potion, you heal 25.0 health" << endl;
                newPlayer.getHeal();
            }
            else {
                cout << "You do not have any items to use." << endl;
            }
            
        }
        if (newPlayer.isAlive() && !newAlien.isAlive() || !newPlayer.isAlive()) {
            combatEnd = true;
        }
    }
    if (!newPlayer.isAlive()) {
        cout << newPlayer.getName() << " was defeated." << endl;
        cout << "======= GAME OVER ========";
    }
    else if (!newAlien.isAlive()) {
        cout << newAlien.getName() << " was defeated." << endl;
        cout << "======= YOU WIN! ========";
    }

    return 0;
}