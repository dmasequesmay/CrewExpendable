#ifndef _CHARACTER_MENU_H_
#define _CHARACTER_MENU_H_
#include "../header/menu.h"
#include <iostream>

using namespace std;

class characterMenu : public Menu{
private:
bool next;
string name;
string choice;
string chosenClass;

public:
bool getNext();
int getInput();
void print();
void setNext();
void printClass();
void correct();
bool validClass();
void setClass();
string getName();
string classChosen();
//Made for testing as no Character class made

};



#endif