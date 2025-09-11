#include "../includes/Sistema.h"
#include "../includes/NodoAlumno.h"
#include <iostream>
#include <string>

Sistema::Sistema() {}
Sistema::~Sistema() {std::cout<<"Sistema eliminado"<<std::endl;}


//Manejo de Alumnos
void Sistema::registrarAlumno(int id, std::string nombre, std::string apellido, std::string carrera,std::string anioIngreso) {
    std::cout << "\nRegistrando Alumno..." << std::endl;
    Alumno* alumno = new Alumno(id,nombre, apellido, carrera, anioIngreso);
    std::cout<<"Alumno: "<< alumno -> getNombre() << " con ID: " << alumno -> getId() <<std::endl;
    NodoAlumno* al = new NodoAlumno(*alumno);
    eliminarNodosAlumnos(al);
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

//Todos los metodos privados
void Sistema::eliminarNodosAlumnos(NodoAlumno* head) {
    while (head != nullptr) {
        NodoAlumno* aux = head;
        head = head -> prox;
        delete aux;
    }
}


