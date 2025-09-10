#include "../includes/Sistema.h"
#include "../includes/Alumno.h"
#include <iostream>
#include <string>

Sistema::Sistema() {}
Sistema::~Sistema() {std::cout<<"Sistema eliminado"<<std::endl;}
//Manejo de Alumnos
void Sistema::registrarAlumno() {
    std::cout << "Registrando Alumno...\n" << std::endl;

    int id;
    std::string nombre;
    std::string apellido;
    std::string carrera;
    std::string anioIngreso;

    std::cout << "Ingrese ID: ";
    std::cin >> id;
    std::cout << "Ingrese Nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese Apellido: ";
    std::cin >> apellido;
    std::cout << "Ingrese Carrera: ";
    std::cin >> carrera;
    std::cout << "Ingrese Anio Ingreso: ";
    std::cin >> anioIngreso;

    Alumno* alumno = new Alumno(id,nombre, apellido, carrera, anioIngreso);
}

bool Sistema::buscarAlumno() {
    return false;
}

void Sistema::eliminarAlumno() {
}

//Manejo de Cursos
void Sistema::registrarCurso() {
}
bool Sistema::buscarCurso() {
    return false;
}
void Sistema::eliminarCurso() {
}

//Manejo de inscripciones
void Sistema::inscribirAlumnoCurso() {  
}
void Sistema::eliminarAlumnoCurso() {
}

//Manejo de Notas (1.0 - 7.0)
void Sistema::registrarNotasAlumno(){
}; 

//Consultas y Reportes
void Sistema::obtenerAlumnosPorCarrera() {
}
void Sistema::cursosInscritosPorAlumno() {
}
double Sistema::promedioNotasAlumnoCurso() {
    return 0.0;
}
double Sistema::promedioGeneralAlumno() {
    return 0.0;
}