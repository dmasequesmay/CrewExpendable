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

    while (!cMenu.getNext()) {
    cMenu.print();

    while (!cMenu.validClass()) {
        cMenu.printClass();
        cMenu.input(3);
    }

    cMenu.setClass();
    //Make player objects
        
    if (cMenu.classChosen() == "Tank") {
        health = 115;
        attackDamage = 10;
        heal = 10;
        type = TANKPLAYER;
    }
    else if (cMenu.classChosen() == "All-Around") {
        health = 100;
        attackDamage = 15;
        heal = 15;
        type = ALLROUNDERPLAYER;
    }
    else {
        health = 90;
        attackDamage = 20;
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

    cout << "===================================" << endl;
    cout << "ENDING: " << endl;
    cout << "You wipe your brow and catch your breath. You survived your first encounter with death. The gravity of the situation is clear now. You two were sent to your deaths but you survived (for now). Now you’re determined to make it out of this place alive to make the company pay. To be continued?" << endl;

    //while(1) only used for testing purposes
    while (1) {
    game.print();
    game.input(5);
    game.inputSelect(Tree, newPlayer);
    }

    return 0;
}