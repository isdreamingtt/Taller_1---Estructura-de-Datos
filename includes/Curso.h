#pragma once
#include <iostream>

class Curso{
    private:
        int id;
        std::string nombre;
        int cantidadMaxEstudiantes;
        std::string carrera;
        std::string nombreProfesor;

    public:
        Curso(int id, std::string nombre, int cantidadMaxEstudiantes, std::string carrera, std::string nombreProfesor);
        Curso* sig;
        
        int getId();
        std::string getNombre();
        int getCantidadMaxEstudiantes();
        std::string getCarrera();
        std::string getNombreProfesor();
        ~Curso(); 
};