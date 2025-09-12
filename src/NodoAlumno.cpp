#include "../includes/NodoAlumno.h"

NodoAlumno::NodoAlumno(Alumno* dato) {
    this -> dato = dato;
    this -> prox = nullptr;
    this -> atr = nullptr;
}

NodoAlumno::~NodoAlumno() {
    //std::cout<<"Nodo eliminado" << std::endl;
    delete this -> dato;
}

std::string NodoAlumno::toString() {

    return "Alumno "+ this->dato->getNombre() + " " +
        this->dato->getApellido() + " " +
            this->dato->getCarrera() + " " +
                this->dato->getAnioIngreso() + " ";
}

