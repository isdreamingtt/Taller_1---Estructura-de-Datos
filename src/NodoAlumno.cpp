#include "../includes/NodoAlumno.h"
#include "../includes/Alumno.h"

NodoAlumno::NodoAlumno(Alumno* dato) {
    this -> dato = dato;
    this -> prox = nullptr;
}

NodoAlumno::~NodoAlumno() {
    //std::cout<<"Nodo eliminado" << std::endl;
    delete this -> dato;
}

std::string NodoAlumno::toString() {

    return "ID: " + std::to_string(this->dato->getId()) +
        ", Alumno: "+ this->dato->getNombre() + " " +
        this->dato->getApellido() + ", Carrera: " +
            this->dato->getCarrera() + ", anio de ingreso:  " +
                this->dato->getAnioIngreso();
}

