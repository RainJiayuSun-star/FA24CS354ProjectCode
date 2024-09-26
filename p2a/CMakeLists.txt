cmake_minimum_required(VERSION 3.29)
project(p2a C)

# Set the C standard to gnu99 (C99 + GNU extensions)
set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -m32 -std=gnu99 -D_POSIX_C_SOURCE=200809L")


add_executable(p2a check_sudoku_board.c)
