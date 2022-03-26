cmake_minimum_required(VERSION 3.21)
project(CPP_Module_01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)

add_executable(CPP_Module_01
        ex00/main.cpp
        ex00/Zombie.cpp
        ex00/Zombie.h)
