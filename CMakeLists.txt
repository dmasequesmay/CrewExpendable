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
)