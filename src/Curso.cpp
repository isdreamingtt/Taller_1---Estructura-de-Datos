#include "../includes/Curso.h"
#include "../includes/NodoAlumno.h"
#include <iostream>

Curso::Curso(){};
Curso::Curso(int id, std::string nombre, int cantidadMaxEstudiantes, std::string carrera, std::string nombreProfesor){
    this->id = id;
    this->nombre = nombre;
    this->cantidadMaxEstudiantes = cantidadMaxEstudiantes;
    this->carrera = carrera;
    this->nombreProfesor = nombreProfesor;
    this->alumnos = nullptr;
    this->notas = nullptr;
}

Curso::~Curso(){}

int Curso::getId(){
    return this->id;
}
std::string Curso::getNombre(){
    return this->nombre;
}
int Curso::getCantidadMaxEstudiantes(){
    return this->cantidadMaxEstudiantes;
}
std::string Curso::getCarrera(){
    return this->carrera;
}
std::string Curso::getNombreProfesor(){
    return this->nombreProfesor;
}

NodoAlumno* Curso::getAlumnos() {
    return  this->alumnos;
}

NodoNotas* Curso::getNotas() {
    return  this->notas;
}

