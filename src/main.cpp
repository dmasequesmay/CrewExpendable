#include "../headers/mainMenu.h"
#include "../headers/gameplay.h"
#include "../headers/characterMenu.h"


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
    main.input();
    main.choice();
    }

    while (!cMenu.getNext()) {
    cMenu.print();
    cMenu.printClass();
    cMenu.input();
    cMenu.correct();
    }

    cout <<  endl << "===================================" << endl;
    cout << "*INSERT STORY HERE" << endl << endl;
    wait();
    cout << "===================================" << endl;

//while(1) only used for testing purposes
    while (1) {
    game.print();
    game.input();
    game.inputSelect();
    }

    return 0;
}