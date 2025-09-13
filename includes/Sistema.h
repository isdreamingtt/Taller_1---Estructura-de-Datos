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
    void insertarNodoAlFinalCursos(NodoCurso*& nodo_curso, NodoCurso*& head);
    void eliminarNodoCursoID(NodoAlumno*& nodo_alumno, NodoAlumno*& head, bool op);

public:
    Sistema();

    //Manejo de Alumnos
    NodoAlumno* registrarAlumno(int id, std::string nombre, std::string apellido,
        std::string carrera, std::string anioIngreso, NodoAlumno*& headAlumno);
    NodoAlumno* buscarAlumno(NodoAlumno* headAlumno, int id, std::string nombre);
    void eliminarAlumno(NodoAlumno*& headAlumno, int id);

    //Manejo de Cursos
    void registrarCurso(int id, std::string nombre, int cantMaxEstudiantes, std::string carrera, std::string nombreProfesor, NodoCurso*& headCurso);
    NodoCurso* buscarCurso(NodoCurso* headCurso, int id, std::string nombre);
    void eliminarCurso(NodoCurso*& headCurso, int id);

    //Manejo de inscripciones
    void inscribirAlumnoCurso(NodoCurso*& headCurso, NodoAlumno*& headAlumno);
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
    void eliminarNodosCurso(NodoCurso*& head);
    void mostrarAlumnos(NodoAlumno* head);

    //Metodos requeridos

};    
        