cmake_minimum_required(VERSION 4.0)
project(FileCompressorC C)

set(CMAKE_C_STANDARD 11)

add_executable(FileCompressorC main.c
        Compressor.c
        Decompressor.h
        Decompressor.c
        Decompressor.c)
