cmake_minimum_required(VERSION 3.11)

project(
  ModooCode
  VERSION 0.1
  DESCRIPTION "Chat Server"
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES
 ${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(source)