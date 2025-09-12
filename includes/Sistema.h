#pragma once
#include "Alumno.h"
#include "Curso.h"
#include "NodoAlumno.h"
#include "NodoCurso.h"
#include <string>
#include <iostream>


class Sistema {
private:
    void insertarNodoAlFinalAlumnos(NodoAlumno*& nodo_alumno, NodoAlumno*& head);

public:
    Sistema();

    //Manejo de Alumnos
    NodoAlumno* registrarAlumno(int id, std::string nombre, std::string apellido,
        std::string carrera, std::string anioIngreso, NodoAlumno*& headAlumno);
    void buscarAlumno(NodoAlumno* headAlumno, int id, std::string nombre);
    void eliminarAlumno();

    //Manejo de Cursos
    void registrarCurso();
    bool buscarCurso();
    void eliminarCurso();

    //Manejo de inscripciones
    void inscribirAlumnoCurso();
    void eliminarAlumnoCurso();

    //Manejo de Notas (1.0 - 7.0)
    void registrarNotasAlumno();

    //Consultas y Reportes
    void obtenerAlumnosPorCarrera();
    void cursosInscritosPorAlumno();
    double promedioNotasAlumnoCurso();
    double promedioGeneralAlumno();
    ~Sistema();
    void eliminarNodosAlumnos(NodoAlumno*& head);
    void mostrarAlumnos(NodoAlumno* head);

    //Metodos requeridos

};    
        