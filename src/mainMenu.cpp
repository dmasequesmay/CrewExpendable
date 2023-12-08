#include "../header/mainMenu.h"

void mainMenu::print() {
    cout <<  endl << "===================================" << endl;
    cout << "CREW EXPENDABLE" << endl;
    cout << "1. Start" << endl;
    cout << "2. Help" << endl; 
    cout << "3. Quit" << endl;
    cout << "===================================" << endl;
    cout << "What will you do? ";
}

void mainMenu::quitInput() {
     cin >> userInput;

    if (!cin.good() || userInput < 1 || userInput > 2) {
        cout << "Invalid Input!" << endl;
        cin.clear();
        cin.ignore();
        // print();
        // getInput();
    }   
}

void mainMenu::choice() {
    if (userInput == 2) {
        cout <<  endl << "===================================" << endl;
        cout << "HELP" << endl;
        cout << "Crew Expendable is a simple text-based RPG that is controlled by inputting numbers to decide what you want to do." << endl;
        cout << "View Inventory: shows you what you currently have in your inventory" << endl;
        cout << "View Health shows your current health" << endl;
        cout << "===================================" << endl;

        cout << "There are three classes you can choose from: Tank, Nimble, and All-Around." << endl;
        cout << "The Tank class has more health, but does less damage and has a lower chance to dodge." << endl;
        cout << "The Nimble class has less health but has a higher chance to be able to dodge." << endl;
        cout << "The All-Around class has all average stats to be a more rounded character." << endl;
        
        cout << "===================================" << endl;
        cout << "Type any key to continue ";
        string unused;
        cin >> unused; 
    }
    else if (userInput == 3) {
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
        else if (userInput > 2) {
            cout << "Invalid Input!" << endl;
            choice();
        }
    }
}

