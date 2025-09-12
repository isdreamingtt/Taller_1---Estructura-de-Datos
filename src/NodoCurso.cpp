#include "../includes/NodoCurso.h"
#include <string>

NodoCurso::NodoCurso(Curso* dato) {
    this -> dato = dato;
    this -> prox = nullptr;
}

std::string NodoCurso::toString() {
    return "Curso "+ this->dato->getNombre();
}

NodoCurso::~NodoCurso() {
    std::cout<<"Nodo eliminado" << std::endl;
    delete this -> dato;
}
