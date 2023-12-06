#include "../header/mainMenu.h"

void mainMenu::print() {
    cout <<  endl << "===================================" << endl;
    cout << "SPACE GAME" << endl;
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
        cout << "*Write Help Screen*" << endl;
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

