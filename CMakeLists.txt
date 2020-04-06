# SPDX-License-Identifier: GPL-2.0-only
# medlib CMake file
#
# Copyright (C) 2020  RxJet Incorporated
cmake_minimum_required(VERSION 3.11)

project(medlib)
set( PROJECT_NAME "medlib")

enable_language(C)
enable_language(CXX)

# Set to C++ 11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(CodeCoverage)

# Turn on all warnings, warnings as errors.
add_compile_options(-std=c++11 -Wall -Werror)

include_directories(${PROJECT_SOURCE_DIR}/include)

option(COMPILE_TESTS "Compile the tests" OFF)
if(COMPILE_TESTS)
    MESSAGE("** COMPILING UNIT TESTS **")
    ENABLE_TESTING()
    add_subdirectory(unittest)
endif(COMPILE_TESTS)
