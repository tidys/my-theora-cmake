cmake_minimum_required(VERSION 3.0.0)
set(lib "libogg")
project(${lib} VERSION 0.1.0)
file(GLOB_RECURSE ogg_src ${CMAKE_CURRENT_LIST_DIR}/*.h ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${ogg_src})
add_library(${lib} ${ogg_src})
target_include_directories(${lib} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/ogg
    ${CMAKE_CURRENT_LIST_DIR}/
)