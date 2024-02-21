cmake_minimum_required(VERSION 3.24)
project(TestFeatureInducedArchitecture)

set(CMAKE_CXX_STANDARD 20)

add_executable(TestFeatureInducedArchitecture main.cpp Node.h
        Graph.cpp
        Color.h
        Color.cpp
        Node.cpp)