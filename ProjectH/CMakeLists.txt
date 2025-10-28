cmake_minimum_required(VERSION 3.10)
project(ProjectH)

set(CMAKE_CXX_STANDARD 17)

add_library(HLib src/H.cpp)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} include)

add_executable(runTests tests/test_h.cpp)
target_link_libraries(runTests HLib ${GTEST_LIBRARIES} pthread)
add_test(NAME HTests COMMAND runTests)
