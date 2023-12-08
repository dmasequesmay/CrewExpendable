CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(cs100finalproject)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(game
    src/Alien.cpp
    src/AlienType.cpp
    src/Character.cpp 
    src/Combat.cpp
    src/main.cpp
    src/Player.cpp
    src/PlayerType.cpp
    src/Weapon.cpp
    src/WeaponType.cpp
    src/gameplay.cpp
    src/mainMenu.cpp
    src/characterMenu.cpp
    src/menu.cpp
    src/storyTree.cpp
    src/node.cpp
)

ADD_EXECUTABLE(charTest
    src/Alien.cpp
    src/AlienType.cpp
    src/Character.cpp
    src/Player.cpp
    src/PlayerType.cpp
    test/CharacterTesting.cpp
)

ADD_EXECUTABLE(storyTest
    src/node.cpp
    src/storyTree.cpp
    test/storyTesting.cpp
)

TARGET_LINK_LIBRARIES(storyTest gtest)
TARGET_COMPILE_DEFINITIONS(charTest PRIVATE gtest_disable_pthreads=ON)