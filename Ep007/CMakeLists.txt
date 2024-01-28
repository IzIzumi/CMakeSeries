cmake_minimum_required(VERSION 3.15)
project(HelloWorld 
        VERSION 1.0
        LANGUAGES CXX)
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
add_library(add_func STATIC src/add_func.cpp)
target_include_directories(add_func PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_compile_features(add_func PUBLIC cxx_std_17)

add_executable(HelloWorld main.cpp 
                                src/Animal.cpp 
                                src/log.cpp)
target_include_directories(HelloWorld PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_compile_features(HelloWorld PUBLIC cxx_std_17)
target_link_libraries(HelloWorld PUBLIC add_func)
