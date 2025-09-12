#pragma once
#include "Curso.h"
#include <string>
class NodoCurso {
public:
    Curso* dato;
    NodoCurso* prox;
    NodoCurso(Curso* dato);
    ~NodoCurso();
    std::string toString();

};
