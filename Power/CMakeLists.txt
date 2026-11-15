cmake_minimum_required(VERSION 4.3)
project(Power C)

set(CMAKE_C_STANDARD 11)

add_executable(Power
        main.c
        power.c
        power.h)
