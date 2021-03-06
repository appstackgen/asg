set(LIBNAME ${ASG_RELATIONAL_MODEL_LIB_NAME})

set(LIBVERSION_MAJOR 1)
set(LIBVERSION_MINOR 0)
set(LIBVERSION_PATCH 0)

set(LIBSOVERSION ${LIBVERSION_MAJOR})
set(LIBVERSION ${LIBVERSION_MAJOR}.${LIBVERSION_MINOR}.${LIBVERSION_PATCH})

set(CMAKE_CXX_FLAGS "${PROJECT_COMPILER_FLAGS}")

set(RELATIONAL_MODEL_HEADERS
    model.h
    model_fragment.h
    data_type.h
)

set(RELATIONAL_MODEL_SOURCES
    model.cpp
    model_fragment.cpp
    data_type.cpp
)

set(HEADERS
    ${RELATIONAL_MODEL_HEADERS}
)

set(SOURCES
    ${RELATIONAL_MODEL_SOURCES}
)

# this dummy target ensures headers without cpp file are shown in qtcreator (eg. template files)
add_custom_target(${LIBNAME}${DUMMY_TARGET_NAME} SOURCES ${HEADERS})

add_library(${LIBNAME} SHARED ${SOURCES})

set_target_properties(${LIBNAME}
    PROPERTIES
    VERSION ${LIBVERSION}
    SOVERSION ${LIBSOVERSION}
)

target_link_libraries(${LIBNAME} ${ASG_MODELING_LIB_NAME})
