#include "../includes/Sistema.h"
#include <iostream>

void ConsultasReportes(Sistema* sistema){
    int opcion;
    do{
        std::cout << "Consultas y Reportes:"<< std::endl;
        std::cout << "1. Obtener Alumnos por Carrera"<< std::endl;
        std::cout << "2. Cursos Inscritos por Alumno"<< std::endl;
        std::cout << "3. Promedio de Notas de Alumno en un Curso"<< std::endl;
        std::cout << "4. Promedio General de Notas de Alumno"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            std::cout << "Volviendo al menú principal..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoNotas(Sistema* sistema){
    int opcion;
    do{
        std::cout << "Manejo de Notas:"<< std::endl;
        std::cout << "1. Registrar Notas de Alumno"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            break;
        case 0:
            std::cout << "Volviendo al menú principal..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
            break;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoInscripciones(Sistema* sistema){
    int opcion;
    do{
        std::cout << "Manejo de Inscripciones:"<< std::endl;
        std::cout << "1. Inscribir Alumno a Curso"<< std::endl;
        std::cout << "2. Eliminar Inscripción de Alumno a Curso"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 0:
            std::cout << "Volviendo al menú principal..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
            break;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoCursos(Sistema* sistema){
    int opcion;
    do{
        std::cout << "Manejo de Cursos:"<< std::endl;
        std::cout << "1. Registrar Curso"<< std::endl;
        std::cout << "2. Buscar Curso"<< std::endl;
        std::cout << "3. Eliminar Curso"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            std::cout << "Volviendo al menú principal..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
            break;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoAlumnos(Sistema* sistema){
    int opcion;
    do{
        std::cout << "Manejo de Alumnos:"<< std::endl;
        std::cout << "1. Registrar Alumno"<< std::endl;
        std::cout << "2. Buscar Alumno"<< std::endl;
        std::cout << "3. Eliminar Alumno"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
                std::cout << std::endl;
            sistema -> registrarAlumno();
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            std::cout << "Volviendo al menú principal..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
            break;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}


void menu(Sistema* sistema){
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
            std::cout << std::endl;
            ManejoAlumnos(sistema);
            break;
        case 2:
            std::cout << std::endl;
            ManejoCursos(sistema);
            break;
        case 3:
            std::cout << std::endl;
            ManejoInscripciones(sistema);
            break;
        case 4: 
            std::cout << std::endl;
            ManejoNotas(sistema);
            break;
        case 5:
            std::cout << std::endl;
            ConsultasReportes(sistema);
            break;
        case 0:
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
            
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

int main(){
    Sistema* sistema = new Sistema();

    std::cout << "Bienvenido/a a la Gestión de Información Académica" << std::endl;
    menu(sistema);
    delete sistema;
    return 0;
}

