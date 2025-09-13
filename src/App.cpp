#include "../includes/Sistema.h"
#include "../includes/Alumno.h"
#include "../includes/Curso.h"
#include <iostream>
#include <string>


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

        if (opcion == 0) {
            std::cout << "Volviendo al menú principal..." << std::endl;
        }else if (opcion == 1) {

        }else if (opcion == 2) {

        }else if (opcion == 3) {

        }else if (opcion == 4) {

        }else {
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
        if (opcion == 0) {
            std::cout << "Volviendo al menú principal..." << std::endl;
        }else if (opcion == 1) {

        }else if (opcion == 2) {

        }else {
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoInscripciones(Sistema* sistema,NodoCurso* headCurso ,NodoAlumno* headAlumno){
    int opcion;
    do{
        std::cout << "Manejo de Inscripciones:"<< std::endl;
        std::cout << "1. Inscribir Alumno a Curso"<< std::endl;
        std::cout << "2. Eliminar Inscripción de Alumno a Curso"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;


        if (opcion == 0) {
            std::cout << "Volviendo al menú principal..." << std::endl;
        }else if (opcion == 1) {
            if (headCurso == nullptr) {
                std::cout << "No se encuentra ningun curso creado aun" << std::endl;
                std::cout << std::endl;
                break;
            }
            if (headAlumno == nullptr) {
                std::cout << "No se encuentra ningun alumno registrado aun" << std::endl;
                std::cout << std::endl;
                break;
            }
            sistema -> inscribirAlumnoCurso(headCurso, headAlumno);

        }else if (opcion == 2) {

        }else {
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoCursos(Sistema* sistema, NodoCurso*& headCurso){
    int opcion;
    do{
        std::cout << "Manejo de Cursos:"<< std::endl;
        std::cout << "1. Registrar Curso"<< std::endl;
        std::cout << "2. Buscar Curso"<< std::endl;
        std::cout << "3. Eliminar Curso"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;
        if (opcion == 0) {
            std::cout << "Volviendo al menú principal..." << std::endl;
        }else if (opcion == 1) {
            std::cout << std::endl;
            int id;
            std::string nombre;
            int cantidadMaxEstudiantes;
            std::string carrera;
            std::string NombreProfesor;

            std::cout << "Ingrese ID: ";
            std::cin >> id;
            std::cout << "Ingrese Nombre: ";
            std::cin >> nombre;
            std::cout << "Ingrese cantidad maxima de alumnos en el curso: ";
            std::cin >> cantidadMaxEstudiantes;
            std::cout << "Ingrese Carrera al que pertenece el curso: ";
            std::cin >> carrera;
            std::cin.ignore(1000, '\n');
            std::cout << "Ingrese el nombre del profesor que ejerce el curso: ";
            std::getline(std::cin, NombreProfesor) ;

            sistema -> registrarCurso(id, nombre, cantidadMaxEstudiantes, carrera, NombreProfesor, headCurso);
            std::cout << std::endl;
        }else if (opcion == 2) {
            if (headCurso == nullptr) {
                std::cout << "No se encuentra ningun curso creado aun" << std::endl;
                std::cout << std::endl;
                break;
            }
            std::cout << std::endl;
            int opBuscar;
            std::cout << "Buscar por: \n1. ID \n2. Nombre\n> " << std::endl;
            std::cin >> opBuscar;

            if (opBuscar == 1) {
                int id;
                std::cout << std::endl;
                std::cout << "Ingrese ID: ";
                std::cin  >> id;
                sistema -> buscarCurso(headCurso, id, "");
            }else if (opBuscar == 2) {
                std::string nombre;
                std::cout << std::endl;
                std::cout << "Ingrese Nombre: ";
                std::cin >> nombre;
                sistema -> buscarCurso(headCurso, -1, nombre);

            }
            std::cout << std::endl;

        }else if (opcion == 3) {
            if (headCurso == nullptr) {
                std::cout << "No se encuentra ningun alumno inscrito aun" << std::endl;
                std::cout << std::endl;
                break;
            }
            std::cout << std::endl;
            int opBuscarEliminar;
            std::cout << "Ingrese ID de curso para eliminar: ";
            std::cin >> opBuscarEliminar;

            sistema -> eliminarCurso(headCurso, opBuscarEliminar);
            std::cout << std::endl;
        }else {
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        }
        std::cout << std::endl;

    }while(opcion != 0);
}

void ManejoAlumnos(Sistema *sistema, NodoAlumno*& headAlumno){
    int opcion;
    do{
        std::cout << "Manejo de Alumnos:"<< std::endl;
        std::cout << "1. Registrar Alumno"<< std::endl;
        std::cout << "2. Buscar Alumno"<< std::endl;
        std::cout << "3. Eliminar Alumno"<< std::endl;
        std::cout << "0. Volver al menú principal" << std::endl << "> ";
        std::cin >> opcion;

        if (opcion == 0) {
            std::cout << "Volviendo al menú principal..." <<std::endl;
        }else if (opcion == 1) {
            std::cout << std::endl;
            int id;
            std::string nombre;
            std::string apellido;
            std::string carrera;
            std::string anioIngreso;

            std::cout << "Ingrese ID: ";
            std::cin >> id;
            std::cout << "Ingrese Nombre: ";
            std::cin >> nombre;
            std::cout << "Ingrese Apellido: ";
            std::cin >> apellido;
            std::cout << "Ingrese Carrera: ";
            std::cin >> carrera;
            std::cout << "Ingrese Anio Ingreso: ";
            std::cin >> anioIngreso;

            sistema -> registrarAlumno(id, nombre, apellido, carrera, anioIngreso, headAlumno);
            std::cout << std::endl;

        }else if (opcion == 2) {
            if (headAlumno == nullptr) {
                std::cout << "No se encuentra ningun alumno registrado aun" << std::endl;
                std::cout << std::endl;
                break;
            }
            std::cout << std::endl;
            int opBuscar;
            std::cout << "Buscar por: \n1. ID \n2. Nombre\n> " << std::endl;
            std::cin >> opBuscar;

            if (opBuscar == 1) {
                int id;
                std::cout << std::endl;
                std::cout << "Ingrese ID: ";
                std::cin  >> id;
                sistema -> buscarAlumno(headAlumno, id, "");
            }else if (opBuscar == 2) {
                std::string nombre;
                std::cout << std::endl;
                std::cout << "Ingrese Nombre: ";
                std::cin >> nombre;
                sistema -> buscarAlumno(headAlumno, -1, nombre);

            }
            std::cout << std::endl;

        }else if (opcion == 3) {
            if (headAlumno == nullptr) {
                std::cout << "No se encuentra ningun alumno registrado aun" << std::endl;
                std::cout << std::endl;
                break;
            }
            std::cout << std::endl;
            int opBuscarEliminar;
            std::cout << "Ingrese ID de alumno para eliminar: ";
            std::cin >> opBuscarEliminar;

            sistema -> eliminarAlumno(headAlumno, opBuscarEliminar);
            std::cout << std::endl;

        }else {
                std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        }

    }while(opcion != 0);
}

void menu(Sistema* sistema, NodoAlumno*& headAlumno, NodoCurso*& headCurso){
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

        std::cout << std::endl;
        if (opcion == 0) {
            std::cout << "Saliendo del programa..." << std::endl;
        }else if (opcion == 1) {
            std::cout << std::endl;
            ManejoAlumnos(sistema, headAlumno);
        }else if (opcion == 2) {
            std::cout << std::endl;
            ManejoCursos(sistema, headCurso);
        }else if (opcion == 3) {
            ManejoInscripciones(sistema, headCurso, headAlumno);
        }else if (opcion == 4) {
            std::cout << std::endl;
            ManejoNotas(sistema);
        }else if (opcion == 5) {
            std::cout << std::endl;
            ConsultasReportes(sistema);
        }else {
            std::cout << std::endl;
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        }

    }while(opcion != 0);
}

int main(){
    Sistema* sistema = new Sistema();
    std::cout << "Bienvenido/a a la Gestión de Información Académica" << std::endl;
    NodoAlumno* headAlumno = nullptr;
    NodoCurso* headCurso = nullptr;
    menu(sistema, headAlumno, headCurso);
    //sistema -> mostrarAlumnos(headAlumno);
    sistema -> eliminarNodosAlumnos(headAlumno);
    sistema -> eliminarNodosCurso(headCurso);
    delete sistema;
    return 0;
}

