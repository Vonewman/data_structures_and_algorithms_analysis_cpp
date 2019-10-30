cmake_minimum_required(VERSION 3.13.4)
project(directory_test)

#Bring the headersm such as IntCell.h into the project
include_directories(include)

#Can manually add sources using the set command as follows:
set(SOURCES src/mainapp.cpp src/IntCell.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(test ${SOURCES})
