CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(cs100finalproject)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(game
    src/Character.cpp
    src/Combat.cpp
    src/Player.cpp
    src/PlayerType.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)