#ifndef _CHARACTER_MENU_H_
#define _CHARACTER_MENU_H_
#include <iostream>

using namespace std;

class characterMenu {
private:
int _input;
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
void input();
void correct();

//Made for testing as no Character class made
string getName();
};



#endif