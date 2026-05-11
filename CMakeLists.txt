cmake_minimum_required(VERSION 4.2)
project(MyMusicViewer)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyMusicViewer main.cpp
        MusicStorage.h)
