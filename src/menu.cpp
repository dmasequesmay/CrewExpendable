#include "../headers/menu.h"

void Menu::input(int max) {
    cin >> userInput;

    if (max == 2) {
        if (!cin.good() || userInput < 1 || userInput > 2) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
        }
    }

    if (max == 3) {
        if (!cin.good() || userInput < 1 || userInput > 2) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
        }
    }
}

int Menu::getInput() {
    return userInput;
}