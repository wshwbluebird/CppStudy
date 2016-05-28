cmake_minimum_required(VERSION 3.3)
project(ToObject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp pointerObject.cpp)
add_executable(ToObject ${SOURCE_FILES} Study-Abstract.cpp Constuctedf.cpp Study_Static.cpp Study_const.cpp Study_friend.cpp)