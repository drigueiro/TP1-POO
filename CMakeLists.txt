cmake_minimum_required(VERSION 3.10)
project(TP1)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(TP1
        livro.cpp
        livro.h
        main.cpp
        impresso.cpp
        impresso.h
        eletronico.cpp
        eletronico.h audiobook.cpp audiobook.h)
