cmake_minimum_required(VERSION 3.29)
project(Lab1_1 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab1_1 main.c
        functions.c
        functions.h
        ../../courses/course_03/main.c
        ../lab_03/main.c
)
