cmake_minimum_required (VERSION 3.8)

project(chat)

file (GLOB_RECURSE SRCS *.h *.hpp *.cpp *.cc)

add_executable (chat-server ${SRCS})

include_directories (${PROJECT_SOURCE_DIR})