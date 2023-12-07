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


void gameMenu::print() {
    cout <<  endl << "===================================" << endl;
    cout << "MENU" << endl;
    cout << "1. Action" << endl << "2. View Inventory" << endl << "3. View Stats";
    cout << endl << "4. Help" << endl << "5. Quit" << endl;
    cout << "===================================" << endl;
    cout << "What will you do? ";
}

void gameMenu::inputSelect(storyTree& t, Player &player) {
    if (userInput == 1) {
        action(t, player);
    }
    else if (userInput == 2) {
        inv(player);
    }
    else if (userInput == 3) {
        stats(player);
    }
    else if (userInput == 4) {
        help();
    }
    else if (userInput == 5) {
        quit(t);
    }
}

void gameMenu::action(storyTree& tree, Player &player) {
    cout <<  endl << "===================================" << endl;
    if (tree.isLeaf(tree.curr)) {
        cout << "NO MORE STORY" << endl;
        cout << "Thanks for playing!" << endl;
        return;
    }
    else {
        // if (tree.curr == v.at(x)) {
        //     // add to inventory
        // }
        // CHECK IF INVENTORY NEEDS TO BE UPDATED
        // CHECK IF ENCOUNTER
        if (tree.curr->getLeftChild() != nullptr && tree.curr->getRightChild() == nullptr) {
            tree.prev = tree.curr; 
            tree.curr = tree.curr->getLeftChild();
            cout << tree.curr->getChoice() << endl;
        }
        else {
            cout << "1. " << tree.curr->getLeftChild()->getChoice() << endl;
            cout << "2. " << tree.curr->getRightChild()->getChoice() << endl;
            cout << "===================================" << endl;

            int userInput = 0;
            cout << "What will you do? ";
            cin >> userInput;
            cout << endl << "===================================" << endl;

            if (userInput == 1) {
                tree.moveLeft();
                cout << tree.curr->getDescription() << endl;
            }
            else if (userInput == 2) {
                tree.moveRight();
                cout << tree.curr->getDescription() << endl;
            }
            else if (userInput > 2 || !cin.good()) {
                cin.clear();
                cin.ignore();
                cout << "Invalid Input!" << endl;
            }
        }
    }
}

void gameMenu::inv(Player &player) {
    cout <<  endl << "===================================" << endl;
    cout << "INVENTORY" << endl;
    player.getInventory();
    cout << "===================================" << endl;
}

void gameMenu::stats(Player &player) {
    cout <<  endl << "===================================" << endl;
    cout << "STATS" << endl;
    cout << "Player name: " << player.getName() << endl;
    cout << "Player health: " << player.getHealth() << endl;
    cout << "Player Attack Damage: " << player.getAttackDamage() << endl;
    cout << "Player Heal: " << player.getHeal() << endl;
    cout << "===================================" << endl;
}

void gameMenu::help() {
    cout <<  endl << "===================================" << endl;
    cout << "HELP" << endl;
    cout << "Space Game is a simple text-based RPG that is controlled by inputting numbers to decide what you want to do." << endl;
    cout << "View Inventory: shows you what you currently have in your inventory" << endl;
    cout << "View Stats shows your current stats" << endl;
    cout << "===================================" << endl;

    cout << "There are three classes you can choose from: Tank, Nimble, and All-Around." << endl;
    cout << "The Tank class has more health, but does less damage and has a lower chance to dodge." << endl;
    cout << "The Nimble class has less health but has a higher chance to be able to dodge." << endl;
    cout << "The All-Around class has all average stats to be a more rounded character." << endl;
    
    cout << "===================================" << endl;
}

void gameMenu::quit(storyTree& tree) {
        int userInput;
        cout <<  endl << "===================================" << endl;
        cout << "Are you sure you want to quit?" << endl;
        cout << "1. Yes" << endl << "2. No" << endl;
        cout << "===================================" << endl;
        cout << "What will you do? ";
        cin >> userInput;

        if (userInput == 1) {
            cout << "Thanks for playing!" << endl << endl;
            tree.~storyTree();
            exit(1);
        }
        else if (userInput > 2 || !cin.good()) {
            cin.clear();
            cin.ignore();
            cout << "Invalid Input!" << endl;
            quit(tree);
        }
}

