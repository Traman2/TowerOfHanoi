cmake_minimum_required(VERSION 3.28)
project(TowerOfHanoi)

set(CMAKE_CXX_STANDARD 26)

add_executable(TowerOfHanoi main.cpp
        Stack.cpp
        Stack.h)
