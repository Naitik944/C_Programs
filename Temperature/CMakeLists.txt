cmake_minimum_required(VERSION 4.3)
project(Temperature C)

set(CMAKE_C_STANDARD 11)

add_executable(Temperature
        main.c
        "Celsius .c"
        "Celsius .h"
        "Fahrenheit .c"
        "Fahrenheit .h"
        "Kelvin .c"
        "Kelvin .h")
