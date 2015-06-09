set(LIBNAME ${ASG_KERNEL_LIB_NAME})

set(LIBVERSION_MAJOR 1)
set(LIBVERSION_MINOR 0)
set(LIBVERSION_PATCH 0)

set(LIBSOVERSION ${LIBVERSION_MAJOR})
set(LIBVERSION ${LIBVERSION_MAJOR}.${LIBVERSION_MINOR}.${LIBVERSION_PATCH})

set(CMAKE_CXX_FLAGS "${PROJECT_COMPILER_FLAGS}")

set(KERNEL_HEADERS
    asg.h
    types.h
    node_id.h
    node_name.h
    node_id_factory.h
    abstract_node.h
    node.h
    root_node.h
)

set(KERNEL_SOURCES
    asg.cpp
    node_id.cpp
    node_name.cpp
    node_id_factory.cpp
    abstract_node.cpp
    node.cpp
    root_node.cpp
)

set(HEADERS
    ${KERNEL_HEADERS}
)

set(SOURCES
    ${KERNEL_SOURCES}
)

# this dummy target ensures headers without cpp file are shown in qtcreator (eg. template files)
add_custom_target(${LIBNAME}${DUMMY_TARGET_NAME} SOURCES ${HEADERS}) 

add_library(${LIBNAME} SHARED ${SOURCES})

set_target_properties(${LIBNAME}
    PROPERTIES
    VERSION ${LIBVERSION}
    SOVERSION ${LIBSOVERSION}
)

#target_link_libraries(${APPNAME})
