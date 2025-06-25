cmake_minimum_required(VERSION 3.10)
project(leetcode-solutions LANGUAGES C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add library target (sources directly listed)
add_library(leetcode_solutions STATIC
    src/1-two-sum.c
)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/test/Unity/src
)

# Add test executable
add_executable(leetcode_tests
    test/1-two-sum-test.c
    test/test-runner.c
    test/Unity/src/unity.c
)

# Link with our library and GTest
target_link_libraries(leetcode_tests leetcode_solutions)

# Enable testing
enable_testing()

# Add the test to CTest
add_test(NAME leetcode_tests COMMAND leetcode_tests)