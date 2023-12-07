#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H
#include <iostream>
#include "menu.h"
#include "storyTree.h"
#include "Player.h"
#include "PlayerType.h"



using namespace std;

class gameMenu : public Menu {
    protected:
        bool endingType;
    public:
        gameMenu();
        void print();
        void inputSelect(storyTree& t, Player &player);
        void help();
        void action(storyTree& t, Player &player);
        void stats(Player &p);
        void inv(Player &p);
        void quit(storyTree& t);
        bool getEnding() const;
};

#endif