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

    return "Nombre y apellido :"+ this->dato->getNombre() + " " +
        this->dato->getApellido() + ", Carrera: " +
            this->dato->getCarrera() + ", año de ingreso:  " +
                this->dato->getAnioIngreso();
}

