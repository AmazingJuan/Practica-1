cmake_minimum_required(VERSION 3.27)
project(Practica1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Practica1 ../main.cpp
        Headers/F1Team.h
        Headers/PitCrewTeam.h
        Headers/TeamDriverA.h
        Headers/TeamDriverB.h
        Headers/TyreGunner.h
        Headers/TyreOff.h
        Headers/TyreOn.h
        Headers/FrontJack.h
        Headers/RearJack.h
        Headers/SideJack.h
        Headers/FrontWingAdjust.h
        Headers/LollipopMan.h
        Sources/F1Team.cpp
        Sources/FrontJack.cpp
        Sources/FrontWingAdjust.cpp
        Sources/LollipopMan.cpp
        Sources/PitCrewTeam.cpp
        Sources/RearJack.cpp
        Sources/SideJack.cpp
        Sources/TeamDriverA.cpp
        Sources/TeamDriverB.cpp
        Sources/TyreGunner.cpp
        Sources/TyreOff.cpp
        Sources/TyreOn.cpp
        Headers/Utilities.h
        Sources/Utilities.cpp)
