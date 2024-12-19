set(SOURCES
        server.hpp
        requestHandler/router.hpp
        requestHandler/requestHandler.hpp
        ioHandler/ioHandler.hpp
        ioHandler/stdIoHandler.hpp

        server.cpp
        requestHandler/router.cpp
        requestHandler/requestHandler.cpp
        requestHandler/methodHandlers/initializeHandler.hpp
        requestHandler/methodHandlers/shutdownHandler.hpp
)

add_subdirectory(models)

target_sources(lsps PRIVATE ${SOURCES})
target_include_directories(lsps PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Test sources.
set(TEST_SOURCES
        unittest/test_server.hpp
        unittest/test_requestHandler.hpp
        unittest/test_router.hpp

        unittest/test_server.cpp
        unittest/test_requestHandler.cpp
        unittest/test_router.cpp
)
target_sources(lsps_test PRIVATE ${SOURCES} ${TEST_SOURCES})
target_include_directories(lsps_test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
