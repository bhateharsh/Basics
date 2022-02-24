cmake_minimum_required(VERSION 3.0.0)
project(CheckPermutations VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(permutationFunc checkPermutations.cpp)
add_executable(CheckPermutations main.cpp)
target_link_libraries(CheckPermutations permutationFunc)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

################
# Testing
################
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(runTests test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread permutationFunc)
