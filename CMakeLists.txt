cmake_minimum_required(VERSION 3.29)

project(lsps VERSION 0.0.1)

include(FetchContent)

FetchContent_Declare(
        json
        GIT_REPOSITORY ssh://git@github.com/nlohmann/json.git
        GIT_TAG v3.11.3
)

FetchContent_MakeAvailable(json)

FetchContent_GetProperties(json)
if (NOT json_POPULATED)
    FetchContent_Populate(json)
    add_subdirectory(${json_SOURCE_DIR} ${json_BINARY_DIR} EXCLUDE_FROM_ALL)
endif ()

# Build the library.
add_library(${PROJECT_NAME} STATIC)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        ${json_SOURCE_DIR}/single_include
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Build the tests.
find_path(CPPUNIT_INCLUDE_DIR NAMES cppunit/TestCase.h)
find_library(CPPUNIT_LIBRARY NAMES cppunit)

if (CPPUNIT_INCLUDE_DIR AND CPPUNIT_LIBRARY)
    include_directories(${CPPUNIT_INCLUDE_DIR})
    link_libraries(${CPPUNIT_LIBRARY})
else ()
    message(FATAL_ERROR "Could not find CppUnit")
endif ()

add_executable(${PROJECT_NAME}_test src/unittest/test_lsps.cpp)

target_link_libraries(${PROJECT_NAME}_test PRIVATE ${CPPUNIT_LIBRARIES})
target_include_directories(${PROJECT_NAME}_test
        PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        ${json_SOURCE_DIR}/single_include
        ${CPPUNIT_INCLUDE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Add source files.
add_subdirectory(src)
