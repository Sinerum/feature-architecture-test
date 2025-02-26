cmake_minimum_required(VERSION 3.28)
project(Example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_USE_CXX11_ABI=0")
include_directories(core)
include_directories(plugin)

add_executable(Example main.cpp
        plugin/TimeLogger.cpp
        plugin/ShowFile.cpp
        core/Fs.cpp
        core/Time.cpp
        core/Display.cpp
)
