cmake_minimum_required(VERSION 3.10)

project(bmstu_al_rk_2)

file(GLOB_RECURSE SRC "source/*.cpp")
include_directories(include)

add_library(Matrix source/Matrix.cpp)
add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME})  
