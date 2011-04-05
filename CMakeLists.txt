cmake_minimum_required(VERSION 2.6)
ENABLE_TESTING()
set(PROJ_NAME "gtestdemo")
project(${PROJ_NAME} CXX)

find_package(Boost REQUIRED)
find_package(Boost 1.4.0 COMPONENTS REQUIRED)

set(CCN_COVERAGE "-O0 -pg -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CCN_COVERAGE}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CCN_COVERAGE}")
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage -lgcov")

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INC_DIR ${SRC_DIR})
set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)
set(SRC_OBJ "${PROJ_NAME}") 

include_directories("${INC_DIR}")

add_subdirectory(src)
add_subdirectory(test)

# add lcov target
include(${CMAKE_SOURCE_DIR}/cmake/lcov.cmake)
