#pragma once
#include "Curso.h"

class NodoCurso {
public:
    Curso dato;
    NodoCurso* prox;
    NodoCurso* atr;
    NodoCurso(Curso& dato);

};
