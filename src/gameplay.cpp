#include "../headers/gameplay.h"

void gameMenu::input() {
    cin >> _input;

    if (!cin.good() || _input < 1 || _input > 5) {
        cout << "Invalid Input!" << endl;
        cin.clear();
        cin.ignore();
    }
}

int gameMenu::getInput() {
    return _input;
}

void gameMenu::print() {
    cout <<  endl << "===================================" << endl;
    cout << "MENU" << endl;
    cout << "1. Action" << endl << "2. View Inventory" << endl << "3. View Stats";
    cout << endl << "4. Help" << endl << "5. Quit" << endl;
    cout << "===================================" << endl;
    cout << "What will you do? ";
}

void gameMenu::inputSelect() {
    if (getInput() == 1) {
        action();
    }
    else if (getInput() == 2) {
        inv();
    }
    else if (getInput() == 3) {
        stats();
    }
    else if (getInput() == 4) {
        help();
    }
    else if (getInput() == 5) {
        quit();
    }
}

void gameMenu::action() {
    cout <<  endl << "===================================" << endl;
    cout << "ACTION" << endl;
    cout << "*IMPLEMENT ACTION SCREEN*" << endl;
    cout << "===================================" << endl;

}

void gameMenu::inv() {
    cout <<  endl << "===================================" << endl;
    cout << "INVENTORY" << endl;
    cout << "*IMPLEMENT INVENTORY SCREEN*" << endl;
    cout << "===================================" << endl;
}

void gameMenu::stats() {
    cout <<  endl << "===================================" << endl;
    cout << "STATS" << endl;
    cout << "*IMPLEMENT STATS SCREEN*" << endl;
    cout << "===================================" << endl;
}

void gameMenu::help() {
    cout <<  endl << "===================================" << endl;
    cout << "HELP" << endl;
    cout << "*IMPLEMENT HELP SCREEN*" << endl;
    cout << "===================================" << endl;
}

void gameMenu::quit() {
        int userInput;
        cout <<  endl << "===================================" << endl;
        cout << "Are you sure you want to quit?" << endl;
        cout << "1. Yes" << endl << "2. No" << endl;
        cout << "===================================" << endl;
        cout << "What will you do? ";
        cin >> userInput;

        if (userInput == 1) {
            cout << "Thanks for playing!" << endl << endl;
            exit(1);
        }
        else if (userInput > 2 || !cin.good()) {
            cin.clear();
            cin.ignore();
            cout << "Invalid Input!" << endl;
            quit();
        }
}
