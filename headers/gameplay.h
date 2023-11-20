#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H
#include <iostream>
#include "menu.h"

using namespace std;

class gameMenu : public Menu {
public:
void print();
void choice();
void inputSelect();
void help();
void action();
void stats();
void inv();
void quit();
};

#endif