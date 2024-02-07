cmake_minimum_required(VERSION 3.24)
project(TestFeatureInducedArchitecture)

set(CMAKE_CXX_STANDARD 20)

add_executable(TestFeatureInducedArchitecture main.cpp foo.h foo.cpp bar.h bar.cpp logger.h logger.cpp modularity.h)
