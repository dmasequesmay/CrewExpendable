#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H
#include <iostream>
#include "menu.h"
#include "storyTree.h"

using namespace std;

class gameMenu : public Menu {
public:
void print();
void inputSelect(storyTree& t);
void help();
void action(storyTree& t);
void stats();
void inv();
void quit(storyTree& t);
};

#endif