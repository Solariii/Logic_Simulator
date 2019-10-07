cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Node.cpp Node.h Gate.cpp Gate.h ANDGate.cpp ANDGate.h ORGate.cpp ORGate.h Simulator.cpp Simulator.h)