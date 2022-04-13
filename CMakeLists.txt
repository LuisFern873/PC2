cmake_minimum_required(VERSION 3.10.2)
project(poo2_pc2_2021_0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})
if(UNIX AND NOT APPLE)
    set(CMAKE_CXX_FLAGS -pthread)
endif()

add_executable(poo2_pc2_2021_0
        main.cpp
        test_1_1.cpp
        test_1_2.cpp
        test_2_1.cpp
        test_2_2.cpp
        test_3_1.cpp
        test_3_2.cpp
        p1.h p1.cpp
        p2.h p2.cpp
        p3.h p3.cpp
        get_equivalent_pairs.h
        accumulator.h
        remove_duplicates.h
        remove_comments.cpp remove_comments.h)

configure_file(test_1_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
