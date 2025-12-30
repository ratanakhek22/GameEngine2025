cmake_minimum_required(VERSION 4.1)
project(GameEngine2025)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GameEngine2025
        GameState.cpp
        GameState.h
        Player.cpp
        Player.h
        Card.cpp
        Card.h
        Actions/Action.cpp
        Actions/Action.h
        Random.cpp
        Random.h
        main.cpp
        Actions/dealDamageAction.cpp
        Actions/dealDamageAction.h)
