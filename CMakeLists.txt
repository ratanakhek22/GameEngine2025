cmake_minimum_required(VERSION 4.1)
project(GameEngine2025)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)
include_directories(Actions)
include_directories(Utility)
include_directories(GUI)

# Fetch raylib
include(FetchContent)
FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.5
)
FetchContent_MakeAvailable(raylib)

add_executable(GameEngine2025
        GameState.cpp
        GameState.h
        Player.cpp
        Player.h
        Card.cpp
        Card.h
        Actions/Action.cpp
        Actions/Action.h
        Utility/Random.cpp
        Utility/Random.h
        main.cpp
        Actions/DealDamageAction.cpp
        Actions/DealDamageAction.h
        Game.cpp
        Game.h
        Utility/Testing.cpp
        Utility/Testing.h
        GUI/Button.cpp
        GUI/Button.h
        GUI/Label.cpp
        GUI/Label.h)

target_link_libraries(GameEngine2025 raylib)