#pragma once

#include <iostream>

class Alumno{
    private:
        int id;
        std::string nombre;
        std::string apellido;
        std::string carrera;
        std::string anioIngreso;
        
    public:
        Alumno(int id, std::string nombre, std::string apellido, std::string carrera, std::string anioIngreso);
        ~Alumno();

        Alumno* sig;

        int getId();
        std::string getNombre(); 
        std::string getApellido();
        std::string getCarrera();
        std::string getAnioIngreso();

};