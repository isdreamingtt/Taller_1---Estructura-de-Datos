#pragma once
#include <string>

class Curso;

class NodoCurso {
public:
    Curso* dato;
    NodoCurso* prox;
    NodoCurso(Curso* dato);
    ~NodoCurso();
    std::string toString();

};
