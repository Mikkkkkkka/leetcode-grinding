cmake_minimum_required(VERSION 3.15)
project(CPPSolutions LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use Ninja as the generator (optional)
set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "")

# Enable testing
enable_testing()

# Add library target (sources directly listed)
add_library(leetcode_solutions STATIC
    src/1-two-sum.cpp
)

# Include directories
target_include_directories(leetcode_solutions PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Find GoogleTest package
find_package(GTest REQUIRED)

# Add test executable
add_executable(leetcode_tests
    test/1-two-sum-test.cpp
)

# Link with our library and GTest
target_link_libraries(leetcode_tests
    leetcode_solutions
    GTest::GTest
    GTest::Main
)

# Add the test to CTest
add_test(NAME leetcode_tests COMMAND leetcode_tests)

# PS: Yes, AI comments are kept because I am not smart enough to work with CMake on my own.
