#include "../includes/NodoAlumno.h"

NodoAlumno::NodoAlumno(Alumno& dato) {
    this -> dato = dato;
    this -> prox = nullptr;
    this -> atr = nullptr;
}
