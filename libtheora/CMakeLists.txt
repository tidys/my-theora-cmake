cmake_minimum_required(VERSION 3.0.0)
set(lib "libtheora")
project(${lib} VERSION 0.1.0)
file(GLOB_RECURSE theora_src ${CMAKE_CURRENT_LIST_DIR}/*.h ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${theora_src})
add_library(${lib} ${theora_src})
target_include_directories(${lib} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include/theora
    ${CMAKE_CURRENT_LIST_DIR}/include
    ${CMAKE_CURRENT_LIST_DIR}/lib
    ${CMAKE_CURRENT_LIST_DIR}/x86
)