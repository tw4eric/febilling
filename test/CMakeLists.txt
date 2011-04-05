enable_testing()
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules/")
find_package(GTest REQUIRED)
find_package(GMock REQUIRED)

include_directories(${GMOCK_INC})
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB_RECURSE TEST_FILES_CPP "*test.cpp" "*Test.cpp") 
file(GLOB_RECURSE TEST_FILES_CC "*test.cc" "*Test.cc") 

foreach(testfile ${TEST_FILES_CPP})
    GET_FILENAME_COMPONENT(testname ${testfile} NAME_WE)
    add_executable(${testname} ${testname}.cpp)
    target_link_libraries(${testname} ${SRC_OBJ} ${GOOGLEMOCK_LIBRARIES} gmock pthread)
    add_test(${testname} ${testname})
endforeach()

foreach(testfile ${TEST_FILES_CC})
    GET_FILENAME_COMPONENT(testname ${testfile} NAME_WE)
    add_executable(${testname} ${testname}.cpp)
    target_link_libraries(${testname} ${SRC_OBJ} ${GOOGLEMOCK_LIBRARIES} gmock pthread)
    add_test(${testname} ${testname})
endforeach()
