cmake_minimum_required(VERSION 3.13)
project(AXC)

set(CMAKE_CXX_STANDARD 14)

add_executable(AXC main.cpp Person.cpp Person.h PersonFile.dat)