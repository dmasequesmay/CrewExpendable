#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H
#include <iostream>

using namespace std;

class gameMenu {
private:
int _input;

public:
void print();
void input();
void choice();
void inputSelect();
int getInput();
void help();
void action();
void stats();
void inv();
void quit();
};

#endif