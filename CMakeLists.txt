cmake_minimum_required(VERSION 3.29)

project(lsps VERSION 0.0.1)

# Build the library.
add_library(lsps STATIC src/server/server.hpp src/server/server.cpp)

# Build the tests.
find_path(CPPUNIT_INCLUDE_DIR NAMES cppunit/TestCase.h)
find_library(CPPUNIT_LIBRARY NAMES cppunit)

if (CPPUNIT_INCLUDE_DIR AND CPPUNIT_LIBRARY)
    include_directories(${CPPUNIT_INCLUDE_DIR})
    link_libraries(${CPPUNIT_LIBRARY})
else ()
    message(FATAL_ERROR "Could not find CppUnit")
endif ()

add_executable(lsps_test src/test_lsps.cpp)
target_link_libraries(lsps_test ${CPPUNIT_LIBRARIES})
include_directories(${CPPUNIT_INCLUDE_DIR})