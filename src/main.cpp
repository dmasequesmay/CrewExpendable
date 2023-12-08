#include <iostream>
#include "../header/mainMenu.h"
#include "../header/gameplay.h"
#include "../header/characterMenu.h"
#include "../header/node.h"
#include "../header/storyTree.h"
#include "../header/Character.h"
#include "../header/Combat.h"
#include "../header/Player.h"
#include "../header/PlayerType.h"

void Combat(Character &newPlayer, Character &newAlien);

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

    while (!cMenu.getNext()) {
    cMenu.print();

    while (!cMenu.validClass()) {
        cMenu.printClass();
        cMenu.input(3);
    }

    cMenu.setClass();
    //end here
    cMenu.correct();
    }

    cout <<  endl << "===================================" << endl;
    storyTree Tree = storyTree();
    cout << "Prologue: " << endl;
    cout << Tree.curr->getChoice() << endl; // PROLOGUE 
    wait();
    cout << "===================================" << endl;

//while(1) only used for testing purposes
    while (1) {
    game.print();
    game.input(5);
    game.inputSelect(Tree);
    }

    

    return 0;
}

void Combat(Character &newPlayer, Character &newAlien) {
    int userChoice;
    int itemChoice;
    bool combatEnd = false;
    while (!combatEnd) {
        Combat newCombat;
        cout << "------- It is your turn ------" << endl;
        cout << "Choose your action:" << endl;
        cout << "1.Attack 2.Block 3.Dodge 4.Items" << endl;
        cin >> charChoice; 
        if (charChoice == 1) {
            newCombat.attack(newPlayer,newAlien);
            if (!newAlien.isAlive()) {
                combatEnd = true;
            }
            else {
                cout << "------- It is the Alien's turn ------" << endl;
                newCombat.attack(newAlien,newPlayer);
            }
        }
        else if (charChoice == 2) {
            newCombat.block(newAlien,newPlayer);
        }
        else if (charChoice == 3) {
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
                cout << "This item cannot be used." << endl;
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

}