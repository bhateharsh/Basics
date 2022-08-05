cmake_minimum_required(VERSION 3.0.0)
project(urlify VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(urlGen urlGen.cpp)
add_executable(urlify main.cpp)
target_link_libraries(urlify urlGen)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

################
# Testing
################
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread urlGen)