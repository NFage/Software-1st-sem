cmake_minimum_required(VERSION 3.23)
project(lecture_6_Live_Coding C)

set(CMAKE_C_STANDARD 99)

add_library(hello hello.c)

add_executable(lecture_6_Live_Coding main.c)
target_link_libraries(lecture_6_Live_Coding hello)
