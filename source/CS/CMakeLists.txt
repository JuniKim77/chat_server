cmake_minimum_required(VERSION 3.11)

project("chat-server")

include (CMake/option.cmake)
include (CMake/config.cmake)
include (CMake/compiler.cmake)

include_directories (${CMAKE_CURRENT_SOURCE_DIR}/Service)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#Service
add_subdirectory ("Service/Chat")

#Executable
add_subdirectory ("Executable/ChatServer")