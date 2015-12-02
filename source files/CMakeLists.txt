cmake_minimum_required(VERSION 3.1)
project(test2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Subject.cpp Subject.h Utils.cpp Utils.h)
add_executable(test2 ${SOURCE_FILES})
