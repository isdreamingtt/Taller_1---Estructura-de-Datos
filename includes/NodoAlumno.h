#pragma once
#include "Alumno.h"
#include <string>
class NodoAlumno {
public:
    Alumno* dato;
    NodoAlumno* prox;
    NodoAlumno(Alumno* dato);
    ~NodoAlumno();
    std::string toString();
};


