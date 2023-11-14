#include "../headers/characterMenu.h"

void characterMenu::print() {
    cout <<  endl << "===================================" << endl;
    cout << "CHARACTER CREATION" << endl;
    cout << "What is your name? ";

    //cin used for testing purposes, as character class has not been made
    cin >> name;    
}

void characterMenu::printClass() {
    cout << endl << "What class will you choose?" << endl;
    cout << "1. Tank" << endl;
    cout << "2. All-Around" << endl;
    cout << "3. Nimble" << endl;
    cout << "===================================" << endl;
    cout << "What will you choose? ";
}

void characterMenu::input() {
    cin >> _input;

    if (!cin.good() || _input < 1 || _input > 3) {
        cout << "Invalid Input!" << endl;
        cin.clear();
        cin.ignore();
        printClass();
        input();
    }
}

void characterMenu::correct() {
    //FIXME: add check for class
    cout << endl << "Your name is " << getName() << " and you chose the Tank class." << endl;
    cout << "Is this correct?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "===================================" << endl;
    cout << "What will you choose? ";
    //FIXME: check for valid inputs
    cin >> _input;
    setNext();
}

void characterMenu::setNext() {
    if (_input == 1) {
        next = true;
    }
    else if (_input == 2) {
        next = false;
    }
}

int characterMenu::getInput() {
    return _input;
}

bool characterMenu::getNext() {
    return next;
}

string characterMenu::getName() {
    return name;
}

void checkvalid() {
    
}
