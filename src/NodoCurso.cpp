#include "../includes/NodoCurso.h"

NodoCurso::NodoCurso(Curso &dato) {
    this -> dato = dato;
    this -> prox = nullptr;
    this -> atr = nullptr;
}
