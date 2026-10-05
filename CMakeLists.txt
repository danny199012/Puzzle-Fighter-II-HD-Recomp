# puzzlefighter - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(puzzlefighter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(PUZZLEFIGHTER_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(puzzlefighter WIN32 ${PUZZLEFIGHTER_SOURCES})
else()
    add_executable(puzzlefighter ${PUZZLEFIGHTER_SOURCES})
endif()

rexglue_setup_target(puzzlefighter)
