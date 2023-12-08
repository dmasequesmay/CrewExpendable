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

ADD_EXECUTABLE(CharacterTesting
    src/Alien.cpp
    src/AlienType.cpp
    src/Character.cpp
    src/Player.cpp
    src/PlayerType.cpp
    test/CharacterTesting.cpp
)

ADD_EXECUTABLE(wepTest
src/Weapon.cpp 
src/WeaponType.cpp 
test/WeaponTests.cpp
)

ADD_EXECUTABLE(charTest
    src/Alien.cpp
    src/AlienType.cpp
    src/Character.cpp
    src/Player.cpp
    src/PlayerType.cpp
    src/Weapon.cpp
    src/WeaponType.cpp
    test/charTest.cpp
)

ADD_EXECUTABLE(menuTest
    src/Alien.cpp
    src/AlienType.cpp
    src/Character.cpp
    src/Player.cpp
    src/PlayerType.cpp
    src/Weapon.cpp
    src/WeaponType.cpp
    src/characterMenu.cpp
    src/gameplay.cpp 
    src/mainMenu.cpp
    src/menu.cpp 
    src/node.cpp
    src/storyTree.cpp
    test/menuTest.cpp
)

ADD_EXECUTABLE(combatTest
    src/Alien.cpp
    src/AlienType.cpp
    src/Character.cpp
    src/Player.cpp
    src/PlayerType.cpp
    src/Weapon.cpp
    src/WeaponType.cpp
    src/Combat.cpp
    test/combatTest.cpp
)

TARGET_LINK_LIBRARIES(charTest gtest)
TARGET_COMPILE_DEFINITIONS(charTest PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(menuTest gtest)
TARGET_COMPILE_DEFINITIONS(menuTest PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(combatTest gtest)
TARGET_COMPILE_DEFINITIONS(combatTest PRIVATE gtest_disable_pthreads=ON)
