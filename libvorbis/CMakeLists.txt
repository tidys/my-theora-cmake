cmake_minimum_required(VERSION 3.0.0)
set(lib "libvorbis")
project(${lib} VERSION 0.1.0)
set(vorbis_source

    # analysis.c
    # barkmel.c
    bitrate.c
    block.c
    codebook.c
    envelope.c
    floor0.c
    floor1.c
    info.c
    lookup.c
    lpc.c
    lsp.c
    mapping0.c
    mdct.c
    psy.c

    # psytune.c
    registry.c
    res0.c
    sharedbook.c
    smallft.c
    synthesis.c

    # tone.c
    # vorbisenc.c
    vorbisfile.c
    window.c
)
set(vorbis_src)

foreach(file ${vorbis_source})
    list(APPEND vorbis_src ${CMAKE_CURRENT_LIST_DIR}/${file})
endforeach()

# file(GLOB_RECURSE vorbis_src ${CMAKE_CURRENT_LIST_DIR}/*.h ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${vorbis_src})
add_library(${lib} ${vorbis_src})
include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/
)