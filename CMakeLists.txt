cmake_minimum_required(VERSION 3.27)
project(tp_gl)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tp_gl
        lexer.cpp
        lexer.h
        main.cpp
        symbole.cpp
        symbole.h
        Etats/Etat.h
        Automate.h
        Automate.cpp
        Etats/E0.cpp
        Etats/E0.h)
