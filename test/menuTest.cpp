#include <gtest/gtest.h>
#include <cassert>
#include "../header/characterMenu.h"
#include "../header/gameplay.h"
#include "../header/mainMenu.h"
#include "../header/menu.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(menuTest, mainMenu) {
    mainMenu main = mainMenu();
    while (main.getInput() != 1) {
    main.print();
    cout << "TEST: CHOOSE 1" << endl;
    main.input(3);
    main.choice();
    assert(main.getInput() >= 1);
    assert(main.getInput() <= 3);
    }
}

TEST(menuTest, TankChosen) {
    characterMenu cMenu = characterMenu();
    cin.ignore();
    while (!cMenu.getNext()) {
    cMenu.print();

    
    while (!cMenu.validClass()) {
        cMenu.printClass();
        cout << "TEST: CHOOSE 1" << endl;
        cMenu.input(3);
    }
    
    cMenu.setClass();
    
    cMenu.correct();
    }
    EXPECT_EQ(cMenu.getNext(), true);
    EXPECT_EQ(cMenu.getName(), "name");
    EXPECT_EQ(cMenu.classChosen(), "Tank");
}

TEST(menuTest, AllAroundChosen) {
    characterMenu cMenu = characterMenu();
    cin.ignore();
    while (!cMenu.getNext()) {
    cMenu.print();

    
    while (!cMenu.validClass()) {
        cMenu.printClass();
        cout << "TEST: CHOOSE 2" << endl;
        cMenu.input(3);
    }
    
    cMenu.setClass();
    
    cMenu.correct();
    }
    EXPECT_EQ(cMenu.getNext(), true);
    EXPECT_EQ(cMenu.getName(), "name");
    EXPECT_EQ(cMenu.classChosen(), "All-Around");
}

TEST(menuTest, NimbleChosen) {
    characterMenu cMenu = characterMenu();
    cin.ignore();
    while (!cMenu.getNext()) {
    cMenu.print();

    while (!cMenu.validClass()) {
        cMenu.printClass();
        cout << "TEST: CHOOSE 3" << endl;
        cMenu.input(3);
    }
    
    cMenu.setClass();
    
    cMenu.correct();
    }
    EXPECT_EQ(cMenu.getNext(), true);
    EXPECT_EQ(cMenu.getName(), "name");
    EXPECT_EQ(cMenu.classChosen(), "Nimble");
}