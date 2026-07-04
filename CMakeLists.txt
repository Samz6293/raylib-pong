cmake_minimum_required(VERSION 3.20)

project(RaylibPong)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(RaylibPong
    src/main.cpp
    src/hi.cpp
)

target_link_libraries(RaylibPong raylib)
