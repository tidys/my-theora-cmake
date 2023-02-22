cmake_minimum_required(VERSION 3.0.0)
project(app VERSION 0.1.0)
add_compile_definitions(HAVE_STRING_H)
include(libogg/CMakeLists.txt)
include(libtheora/CMakeLists.txt)
include(libvorbis/CMakeLists.txt)
add_executable(app
    main.cpp

    # getopt.c
    # getopt.h

    # encoder_example.c
)
target_link_libraries(app PUBLIC libogg libtheora libvorbis)