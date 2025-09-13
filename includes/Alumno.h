#pragma once


#include <iostream>

class Curso;

class Alumno{
    private:
        int id;
        std::string nombre;
        std::string apellido;
        std::string carrera;
        std::string anioIngreso;
        Curso* curso;
        
    public:
        Alumno();
        Alumno(int id, std::string nombre, std::string apellido, std::string carrera, std::string anioIngreso);
        ~Alumno();

        int getId();
        std::string getNombre(); 
        std::string getApellido();
        std::string getCarrera();
        std::string getAnioIngreso();
        Curso* getCurso();

};