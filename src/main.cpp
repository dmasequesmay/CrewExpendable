#include <iostream>
#include <vector>
#include "../header/Alien.h"
#include "../header/AlienType.h"
#include "../header/Character.h"
#include "../header/characterMenu.h"
#include "../header/Combat.h"
#include "../header/gameplay.h"
#include "../header/mainMenu.h"
#include "../header/menu.h"
#include "../header/node.h"
#include "../header/Player.h"
#include "../header/PlayerType.h"
#include "../header/storyTree.h"
#include "../header/Weapon.h"
#include "../header/WeaponType.h"

void Fight(Player &newPlayer, Character &newAlien, Combat &battle);

using namespace std;

void wait() {
    string unused;
    cout << "Enter any key to continue " ;
    cin >> unused;
}

int main() {
    gameMenu game = gameMenu();
    mainMenu main = mainMenu();
    characterMenu cMenu = characterMenu();

    while (main.getInput() != 1) {
    main.print();
    main.input(3);
    main.choice();
    }
    vector<string> inventory;
    Player newPlayer(inventory);
    double health;
    double attackDamage;
    double heal;
    PlayerType type;
    cin.ignore();
    while (!cMenu.getNext()) {
    cMenu.print();

    while (!cMenu.validClass()) {
        cMenu.printClass();
        cMenu.input(3);
    }

    cMenu.setClass();
    //Make player objects
        
    if (cMenu.classChosen() == "Tank") {
        health = 140.0;
        attackDamage = 16.0;
        heal = 15.0;
        type = TANKPLAYER;
    }
    else if (cMenu.classChosen() == "All-Around") {
        health = 105;
        attackDamage = 20;
        heal = 15;
        type = ALLROUNDERPLAYER;
    }
    else {
        health = 90.0;
        attackDamage = 24.5;
        heal = 20;
        type = NIMBLEPLAYER;
    }
    
    cMenu.correct();
    }

    string name = cMenu.getName();

    newPlayer = Player(name, health, attackDamage, type, inventory, heal);
    cout <<  endl << "===================================" << endl;
    storyTree Tree = storyTree();
    cout << "Prologue: " << endl;
    cout << Tree.curr->getChoice() << endl; // PROLOGUE 
    wait();
    cout << "===================================" << endl;

    //Combat

    //while(1) only used for testing purposes
    while (!Tree.isLeaf(Tree.curr)) {
        game.print();
        game.input(5);
        game.inputSelect(Tree, newPlayer);
    }
    SlipperyAlien newAlien("TestAlien", 120.0, 15.0);
    Combat newCombat;
    Fight(newPlayer, newAlien, newCombat);
    cout << "===================================" << endl;
    cout << "ENDING: " << endl;
    cout << "You wipe your brow and catch your breath. You survived your first encounter with death. The gravity of the situation is clear now. You two were sent to your deaths but you survived (for now). Now you’re determined to make it out of this place alive to make the company pay. To be continued?" << endl;

    return 0;
}

void Fight(Player &newPlayer, Character &newAlien,Combat &battle) {
    int userChoice;
    int itemChoice;
    bool combatEnd = false;
    while (!combatEnd) {
        cout << endl << "===================================" << endl;
        cout << "It is your turn" << endl;
        cout << "You have " << newPlayer.getHealth() << " health." << endl << endl;
        cout << "Choose your action:" << endl;
        cout << "1.Attack \n2.Block\n3.Dodge \n4.Items" << endl;
        cout << "===================================" << endl;
        cout << "What will you do? ";
        cin >> userChoice; 
        cout << endl;

        if (!cin.good() || userChoice < 1 || userChoice > 4) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
            Fight(newPlayer, newAlien, battle);
        }

        if (userChoice == 1) {
            battle.attack(newPlayer,newAlien);
            if (!newAlien.isAlive()) {
                combatEnd = true;
            }
            else {
                cout << endl << "It is " << newAlien.getName() << "'s turn" << endl;
                battle.attack(newAlien,newPlayer);
            }
        }
        else if (userChoice == 2) {
            battle.block(newAlien,newPlayer);
            if (!newPlayer.isAlive()) {
                combatEnd = true;
            }
        }
        else if (userChoice == 3) {
            battle.dodge(newAlien,newPlayer);
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
                cout << "This item cannot be used." << endl;
            }
            
        }
        if (newPlayer.isAlive() && !newAlien.isAlive() || !newPlayer.isAlive()) {
            combatEnd = true;
        }
    }
    if (!newPlayer.isAlive()) {
        cout << newPlayer.getName() << " was defeated." << endl << endl;
        cout << "======= GAME OVER ========";
    }
    else if (!newAlien.isAlive()) {
        cout << newAlien.getName() << " was defeated." << endl << endl;
        cout << "======= YOU WIN! ========";
    }

}