cmake_minimum_required(VERSION 3.20)

# fetch google test to use for testing
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
  GIT_SHALLOW TRUE
  GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(googletest)

# Add test executables
add_executable(self_test self_test.cpp)

# Link against google test and the C_Callback library
target_link_libraries(self_test gtest_main)

add_test(NAME self_test COMMAND self_test)