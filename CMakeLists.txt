CMAKE_MINIMUM_REQUIRED (VERSION 3.1.0)

PROJECT ( PBRT_ZERO )

SET( PBRT_CORE_SOURCE
    src/core/geometry.cpp
)

SET( PBRT_CORE_HEADERS
    src/core/geometry.h
)

INCLUDE_DIRECTORIES ( src )
INCLUDE_DIRECTORIES ( src/core )

ADD_LIBRARY ( pbrt STATIC
    ${PBRT_CORE_SOURCE}
    ${PBRT_CORE_HEADERS}
)

SET ( PBRT_CXX11_FEATURES
  cxx_auto_type
  cxx_explicit_conversions
  cxx_lambdas
  cxx_nullptr
  cxx_range_for
  cxx_static_assert
)

TARGET_COMPILE_FEATURES ( pbrt PRIVATE ${PBRT_CXX11_FEATURES} )

SET( ALL_PBRT_LIBS
    pbrt
)

ADD_EXECUTABLE ( pbre_exe src/main/pbrt.cpp )

# SET_TARGET_PROPERTIES ( pbrt_exe PROPERTIES OUTPUT_NAME pbrt )
# TARGET_COMPILE_FEATURES ( pbrt_exe PRIVATE ${PBRT_CXX11_FEATURES} )
# TARGET_LINK_LIBRARIES ( pbrt_exe ${ALL_PBRT_LIBS} )

# INSTALL ( TARGET
#     pbrt_exe
# )

# INSTALL ( TARGET
#     pbrt
# )