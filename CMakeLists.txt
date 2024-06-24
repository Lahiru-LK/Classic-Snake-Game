cmake_minimum_required(VERSION 3.25)
project(SnakeGame C)

set(CMAKE_C_STANDARD 11)

add_executable(SnakeGame snake.c snake.h main.c)
