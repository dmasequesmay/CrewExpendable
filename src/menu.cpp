#include "../header/menu.h"

void Menu::input(int max) {
    cin >> userInput;

    if (max == 2) {
        if (!cin.good() || userInput < 1 || userInput > 2) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
        }
    }

    else if (max == 3) {
        if (!cin.good() || userInput < 1 || userInput > 3) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
        }
    }

    else if (max == 5) {
        if (!cin.good() || userInput < 1 || userInput > 5) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
        }
    }
}

int Menu::getInput() {
    return userInput;
}