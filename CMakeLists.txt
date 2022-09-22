cmake_minimum_required(VERSION 3.24.2)
project(mosquitto-example C)

set(CMAKE_C_COMPILER "gcc")

include(ExternalProject)
set(EXTERNAL_INSTALL_LOCATION ${CMAKE_BINARY_DIR}/external)

ExternalProject_Add(
    libmosquitto
    GIT_REPOSITORY https://github.com/eclipse/mosquitto
    GIT_TAG develop
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
    )

include_directories(${EXTERNAL_INSTALL_LOCATION}/include)
link_directories(${EXTERNAL_INSTALL_LOCATION}/lib)
add_executable(example main.c)
add_dependencies(example libmosquitto)
target_link_libraries(example mosquitto)
