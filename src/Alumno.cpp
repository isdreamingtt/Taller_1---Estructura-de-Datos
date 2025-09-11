#include "../includes/Alumno.h"
#include <iostream>

Alumno::Alumno(){};
Alumno::Alumno(int id, std::string nombre, std::string apellido, std::string carrera, std::string anioIngreso){
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->carrera = carrera;
    this->anioIngreso = anioIngreso;
}
Alumno::~Alumno(){std::cout<<"Alumno eliminado"<<std::endl;}

int Alumno::getId(){
    return this->id;
}
std::string Alumno::getNombre(){
    return this->nombre;
}
std::string Alumno::getApellido(){
    return this->apellido;
}
std::string Alumno::getCarrera(){
    return this->carrera;
}
std::string Alumno::getAnioIngreso(){
    return this->anioIngreso;
}


