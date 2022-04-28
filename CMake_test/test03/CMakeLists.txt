cmake_minimum_required(VERSION 3.0)

project(TEST03)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_compile_options(-Wall -std=c++11 -O2 -g)
# set(TEST03 Debbug)

add_executable(test03 main.cpp src/Gun.cpp src/Soldlier.cpp)
