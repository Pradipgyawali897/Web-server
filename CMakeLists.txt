cmake_minimum_required(VERSION 3.10)
project(webserver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -O2
    -march=native
    -Wall
    -Wextra
    -Wpedantic
)

file(GLOB_RECURSE SOCKETS_SRC Networking/Sockets/*.cpp)
file(GLOB_RECURSE SERVER_SRC Networking/Server/*.cpp)
file(GLOB_RECURSE HANDLER_SRC Networking/Handler/*.cpp)
file(GLOB_RECURSE PATHHANDLER_SRC Networking/PathHandler/*.cpp)

set(RENDER_SRC Networking/Filehandeler/render.cpp)

add_executable(webserver
    main.cpp
    ${SOCKETS_SRC}
    ${SERVER_SRC}
    ${HANDLER_SRC}
    ${PATHHANDLER_SRC}
    ${RENDER_SRC}
)

target_link_libraries(webserver pthread)
