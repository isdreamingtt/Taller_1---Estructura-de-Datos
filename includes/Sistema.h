#pragma once
#include <string>
#include <iostream>

class Sistema {
    public:
        Sistema();
        
        //Manejo de Alumnos
        void registrarAlumno();
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
        