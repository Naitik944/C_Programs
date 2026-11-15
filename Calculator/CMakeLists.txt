cmake_minimum_required(VERSION 3.10)
project(SimpleCalculator C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(SimpleCalculator
        main.c
        single.c
        single.h
        multiple.c
        multiple.h)

if (UNIX)
    target_link_libraries(SimpleCalculator PRIVATE m)
endif()
