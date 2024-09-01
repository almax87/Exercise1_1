cmake_minimum_required(VERSION 3.20)
project(dynamic_lib)
include_directories(air terrain)

set(dll_files race.cpp transport.cpp air/air.cpp air/broom.cpp air/eagle.cpp air/magic_carpet.cpp terrain/terrain.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(dynamic_lib SHARED ${dll_files})