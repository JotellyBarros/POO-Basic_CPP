cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
project(veiculos)

file(GLOB_RECURSE HEADERS include/*.hpp)
file(GLOB_RECURSE SOURCES src/*.cpp)

INCLUDE_DIRECTORIES(include)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
