cmake_minimum_required(VERSION 3.20)

# Set the name of the project and the language it is written in
project(VideoCapture C CXX)

set(CMAKE_CXX_STANDARD 20)

# needed to get rid of clang buils error
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -std=c++20")
endif()

# add sources
add_subdirectory(src)

# Add the tests
include(CTest)
add_subdirectory(tests)
