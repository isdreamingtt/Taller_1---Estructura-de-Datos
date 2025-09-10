cmake_minimum_required(VERSION 4.0)
project(Taller_1_ED)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(Taller_1_ED
        includes/Alumno.h
        includes/Curso.h
        includes/Sistema.h
        src/Alumno.cpp
        src/App.cpp
        src/Curso.cpp
        src/Sistema.cpp)
