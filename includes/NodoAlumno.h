#pragma once
#include <string>

class Alumno;

class NodoAlumno {
public:
    Alumno* dato;
    NodoAlumno* prox;
    NodoAlumno(Alumno* dato);
    ~NodoAlumno();
    std::string toString();
};


