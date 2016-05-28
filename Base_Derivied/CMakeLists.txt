cmake_minimum_required(VERSION 3.3)
project(Base_Derivied)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp derivied_init.cpp)
add_executable(Base_Derivied ${SOURCE_FILES} Study_based.cpp Study_derivied.cpp inherit_public.cpp)