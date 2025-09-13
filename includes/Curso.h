#pragma once

#include "NodoCurso.h"
#include "NodoNotas.h"
#include <iostream>

class NodoAlumno;

class Curso{
    private:
        int id;
        std::string nombre;
        int cantidadMaxEstudiantes;
        std::string carrera;
        std::string nombreProfesor;
        NodoAlumno* alumnos;
        NodoNotas* notas;
    public:
        Curso();
        Curso(int id, std::string nombre, int cantidadMaxEstudiantes, std::string carrera, std::string nombreProfesor);

        int getId();
        std::string getNombre();
        int getCantidadMaxEstudiantes();
        std::string getCarrera();
        std::string getNombreProfesor();
        NodoAlumno* getAlumnos();
        NodoNotas* getNotas();
        ~Curso();
};
