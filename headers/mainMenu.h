#ifndef _MENU_H
#define _MENU_H
#include <iostream>

using namespace std;

class mainMenu {
private:
int _input;

public:
void print();
void input();
void quitInput();
int getInput();
void choice();
};
#endif