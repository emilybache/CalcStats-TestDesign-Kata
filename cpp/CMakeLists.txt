cmake_minimum_required(VERSION 3.23)
set(CMAKE_VERBOSE_MAKEFILE ON)
project(CalcStats-TestDesign-Kata VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "--coverage")

enable_testing()
add_subdirectory(src)
add_subdirectory(test-catch2)
add_subdirectory(test-doctest)
add_subdirectory(test-gtest)

