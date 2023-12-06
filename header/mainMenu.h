#ifndef _MENU_H
#define _MENU_H
#include "../header/menu.h"
#include <iostream>

using namespace std;

class mainMenu : public Menu {
private:

public:
void print();
void quitInput();
void choice();
};
#endif