#pragma once
#include "Alumno.h"

class NodoAlumno {
public:
    Alumno dato;
    NodoAlumno* prox;
    NodoAlumno* atr;
    NodoAlumno(Alumno& dato);
};


