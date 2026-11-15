cmake_minimum_required(VERSION 3.16)
project(Rough C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(Rough
        main.c
        bitwise_AND.c
        bitwise_OR.c
        bitwise_XOR.c)
