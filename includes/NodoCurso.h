#pragma once
#include "Curso.h"
#include <string>
class NodoCurso {
public:
    Curso* dato;
    NodoCurso* prox;
    NodoCurso* atr;
    NodoCurso(Curso* dato);
    ~NodoCurso();
    std::string toString();

};
