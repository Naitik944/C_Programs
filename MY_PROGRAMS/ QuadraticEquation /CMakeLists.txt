cmake_minimum_required(VERSION 4.3)
project(_QuadraticEquation_ C)

set(CMAKE_C_STANDARD 11)

add_executable(_QuadraticEquation_
        main.c
        discriminant.c
        discriminant.h
        formula_roots.c
        formula_roots.h
)
