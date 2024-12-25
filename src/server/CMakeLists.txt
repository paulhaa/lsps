set(SOURCES
        server.cpp
        router.cpp
        methodProviders/method.cpp
)

target_sources(lsps PRIVATE ${SOURCES})
target_include_directories(lsps PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Test sources.
set(TEST_SOURCES
        unittest/test_server.hpp
        unittest/test_router.hpp
        methodProviders/unittest/test_initializeProvider.hpp

        unittest/test_server.cpp
        unittest/test_router.cpp
        methodProviders/unittest/test_initializeProvider.cpp
)
target_sources(lsps_test PRIVATE ${SOURCES} ${TEST_SOURCES})
target_include_directories(lsps_test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
