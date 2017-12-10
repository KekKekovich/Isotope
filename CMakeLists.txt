cmake_minimum_required(VERSION 3.8)
project(untitled7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Isotope.cpp Isotope.h Element.cpp Element.h)
add_executable(untitled7 ${SOURCE_FILES})