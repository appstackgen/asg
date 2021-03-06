set(TESTED_LIB_NAME ${ASG_KERNEL_LIB_NAME})
set(APPNAME ${TEST_PREFIX}${TESTED_LIB_NAME})

set(CMAKE_CXX_FLAGS "${PROJECT_COMPILER_FLAGS}")

set(TEST_HEADERS
)

set(TEST_SOURCES
    test_kernel.cpp
    test_node_id.cpp
    test_node_name.cpp
    test_node_id_factory.cpp
    test_node.cpp
    test_root_node.cpp
)

set(HEADERS
    ${TEST_HEADERS}
)

set(SOURCES
    ${TEST_SOURCES}
)

# this dummy target ensures headers without cpp file are shown in qtcreator (eg. template files)
add_custom_target(${APPNAME}${DUMMY_TARGET_NAME} SOURCES ${HEADERS})

add_executable(${APPNAME} ${SOURCES})

target_link_libraries(${APPNAME}
    ${TESTED_LIB_NAME}
    ${GTEST_LIBRARIES}
)

add_test(NAME ${APPNAME} COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${APPNAME})
