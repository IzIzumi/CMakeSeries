cmake_minimum_required(VERSION 3.15)
project(HelloWorld 
        VERSION 1.0
        LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(HelloWorld main.cpp src/Animal.cpp src/add_func.cpp)
target_include_directories(HelloWorld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

