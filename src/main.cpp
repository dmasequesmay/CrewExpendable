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
