#pragma once
#include "Alumno.h"
#include <string>
#include <iostream>

#include "NodoAlumno.h"

class Sistema {
    private:
        void eliminarNodosAlumnos(NodoAlumno *head);


    public:
        Sistema();
        
        //Manejo de Alumnos
        void registrarAlumno(int id, std::string nombre, std::string apellido, std::string carrera, std::string anioIngreso);
        bool buscarAlumno();
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

};    
        