cmake_minimum_required(VERSION 3.0)
project(Exercise6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
endif(CMAKE_COMPILER_IS_GNUCXX)

set(SOURCE_FILES main.cpp)
add_executable(Exercise6 ${SOURCE_FILES})