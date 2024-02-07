cmake_minimum_required(VERSION 3.24)
project(TestFeatureInducedArchitecture)

set(CMAKE_CXX_STANDARD 20)

add_executable(TestFeatureInducedArchitecture main.cpp Foo.h Foo.cpp Bar.h Bar.cpp Logger.h Logger.cpp Modularity.h
        Modularity.cpp)
