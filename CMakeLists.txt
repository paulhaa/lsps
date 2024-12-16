cmake_minimum_required(VERSION 3.29)

project(lsps VERSION 0.0.1)

include(FetchContent)

FetchContent_Declare(
        json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.11.3
)

FetchContent_MakeAvailable(json)

FetchContent_GetProperties(json)
if (NOT json_POPULATED)
    FetchContent_Populate(json)
    add_subdirectory(${json_SOURCE_DIR} ${json_BINARY_DIR} EXCLUDE_FROM_ALL)
endif ()

# Build the library.
add_library(lsps STATIC)
target_include_directories(lsps PRIVATE ${json_SOURCE_DIR}/single_include)

# Build the tests.
find_path(CPPUNIT_INCLUDE_DIR NAMES cppunit/TestCase.h)
find_library(CPPUNIT_LIBRARY NAMES cppunit)

if (CPPUNIT_INCLUDE_DIR AND CPPUNIT_LIBRARY)
    include_directories(${CPPUNIT_INCLUDE_DIR})
    link_libraries(${CPPUNIT_LIBRARY})
else ()
    message(FATAL_ERROR "Could not find CppUnit")
endif ()

add_executable(lsps_test src/unittest/test_lsps.cpp)
target_link_libraries(lsps_test ${CPPUNIT_LIBRARIES})
include_directories(${CPPUNIT_INCLUDE_DIR})
target_include_directories(lsps_test PRIVATE ${json_SOURCE_DIR}/single_include)

# Add source files.
add_subdirectory(src)
