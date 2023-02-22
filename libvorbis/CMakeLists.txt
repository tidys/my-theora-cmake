cmake_minimum_required(VERSION 3.0.0)
set(lib "libvorbis")
project(${lib} VERSION 0.1.0)
file(GLOB_RECURSE vorbis_src ${CMAKE_CURRENT_LIST_DIR}/*.h ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${vorbis_src})
add_library(${lib} ${vorbis_src})
include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/
)