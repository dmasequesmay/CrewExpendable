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

void characterMenu::correct() {
    //FIXME: add check for class
    cout << endl << "Your name is " << getName() << " and you chose the Tank class." << endl;
    cout << "Is this correct?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "===================================" << endl;
    cout << "What will you choose? ";
    //FIXME: check for valid inputs
    cin >> userInput;
    setNext();
}

void characterMenu::setNext() {
    if (userInput == 1) {
        next = true;
    }
    else if (userInput == 2) {
        next = false;
    }
}

bool characterMenu::getNext() {
    return next;
}

string characterMenu::getName() {
    return name;
}

void checkvalid() {
    
}
