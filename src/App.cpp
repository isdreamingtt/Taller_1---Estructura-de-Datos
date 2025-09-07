#include "../includes/Sistema.h"
#include <iostream>

void menu(){
    int opcion;
    do{
        std::cout << "Menú de Opciones:"<< std::endl;
        std::cout << "1. Manejo de Alumnos"<< std::endl;
        std::cout << "2. Manejo de Cursos"<< std::endl;
        std::cout << "3. Manejo de Inscripciones"<< std::endl;
        std::cout << "4. Manejo de Notas"<< std::endl;
        std::cout << "5. Consultas y Reportes"<< std::endl;
        std::cout << "0. Salir" << std::endl << "> ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            //Llamar a funciones de manejo de alumnos
            break;
        case 2:
            //Llamar a funciones de manejo de cursos
            break;
        case 3:
            //Llamar a funciones de manejo de inscripciones
            break;
        case 4: 
            //Llamar a funciones de manejo de notas
            break;
        case 5:
            //Llamar a funciones de consultas y reportes
            break;
        case 0:
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
            break;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}


int main(){
    std::cout << "Bienvenido/a a la Gestión de Información Académica" << std::endl;
    menu();
    return 0;
}

