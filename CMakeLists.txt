cmake_minimum_required(VERSION 3.20)

# Set the name of the project and the language it is written in
project(VideoCapture C CXX)

# Add the tests
include(CTest)
add_subdirectory(tests)