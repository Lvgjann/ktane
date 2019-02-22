cmake_minimum_required(VERSION 3.12)
project(ktane)

set(CMAKE_CXX_STANDARD 14)

add_executable(ktane src/main.cpp src/Wire.cpp include/Wire.h src/appli.cpp include/appli.h src/instruction.cpp include/instruction.h src/module.cpp include/module.h)