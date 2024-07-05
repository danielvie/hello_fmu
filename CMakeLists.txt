cmake_minimum_required(VERSION 3.20)
project(hello)

include_directories(headers)

add_library(hello SHARED
    src/hello.cpp
)