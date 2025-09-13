#include "../includes/NodoCurso.h"
#include "../includes/Curso.h"

#include <string>



NodoCurso::NodoCurso(Curso* dato) {
    this -> dato = dato;
    this -> prox = nullptr;
}

NodoCurso::~NodoCurso() {
    std::cout<<"Nodo eliminado" << std::endl;
    delete this -> dato;
}

std::string NodoCurso::toString() {
    return "Curso "+ this->dato->getNombre()+
        ", Cantidad de estudiantes: " +
            std::to_string(this -> dato -> getCantidadMaxEstudiantes())+
                ", Carrera: " + this -> dato -> getCarrera() +
                    ", Profesor: " + this-> dato -> getNombreProfesor();
}
