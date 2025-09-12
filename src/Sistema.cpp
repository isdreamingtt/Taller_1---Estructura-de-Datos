#include "../includes/Sistema.h"
#include "../includes/NodoAlumno.h"
#include <iostream>
#include <string>

Sistema::Sistema() {}
Sistema::~Sistema() {/*std::cout<<"Sistema eliminado"<<std::endl;*/}


//Manejo de Alumnos
NodoAlumno* Sistema::registrarAlumno(int id, std::string nombre, std::string apellido,
    std::string carrera,std::string anioIngreso, NodoAlumno*& headAlumno) {

    std::cout << "\nRegistrando Alumno..." << std::endl;
    Alumno* alumno = new Alumno(id,nombre, apellido, carrera, anioIngreso);
    //std::cout<<"Alumno: "<< alumno -> getNombre() << " con ID: " << alumno -> getId() <<std::endl;

    NodoAlumno* nodoAlumno = new NodoAlumno(alumno);

    insertarNodoAlFinalAlumnos(nodoAlumno, headAlumno);
    return nodoAlumno;
}

void Sistema::buscarAlumno(NodoAlumno* headAlumno, int id, std::string nombre) {
    if (nombre == "") {
        NodoAlumno* aux = headAlumno;
        while (aux != nullptr) {
            if (aux -> dato -> getId() == id) {
                std::cout << aux -> toString() << std::endl;

            }
            aux = aux -> prox;
        }
    } else {
        NodoAlumno* aux = headAlumno;
        while (aux != nullptr) {
            if (aux -> dato -> getNombre() == nombre) {
                std::cout << aux -> toString() << std::endl;
            }
            aux = aux -> prox;
        }
    }
}

void Sistema::eliminarAlumno(NodoAlumno*& headAlumno, int id) {
    //Esto es por si el alumno buscado esta en al principio, osea el head
    if (headAlumno -> dato -> getId() == id) {
        NodoAlumno* aux = headAlumno;
        headAlumno = headAlumno -> prox;
        delete aux;
        return;
    }

    //Si esta en otro lado que no sea head
    NodoAlumno* aux = headAlumno;
    while (aux != nullptr && aux -> prox != nullptr) {
        if (aux -> prox -> dato -> getId() == id) {
            NodoAlumno* aux2 = aux -> prox;
            aux -> prox = aux2 -> prox -> prox;
            delete aux2;
            return;
        }
        aux = aux -> prox;
    }
}

//Manejo de Cursos
void Sistema::registrarCurso(int id, std::string nombre, int cantMaxEstudiantes, std::string carrera, std::string nombreProfesor, NodoCurso*& headCurso) {
    std::cout << "\nRegistrando Curso..." << std::endl;
    Curso* curso = new Curso(id, nombre, cantMaxEstudiantes, carrera, nombreProfesor);
    NodoCurso* nodoCurso = new NodoCurso(curso);
    insertarNodoAlFinalCursos(nodoCurso, headCurso);

}

void Sistema::buscarCurso(NodoCurso* headCurso, int id, std::string nombre) {
    if (nombre == "") {
        NodoCurso* aux = headCurso;
        while (aux != nullptr) {
            if (aux -> dato -> getId() == id) {
                std::cout << aux -> toString() << std::endl;

            }
            aux = aux -> prox;
        }
    } else {
        NodoCurso* aux = headCurso;
        while (aux != nullptr) {
            if (aux -> dato -> getNombre() == nombre) {
                std::cout << aux -> toString() << std::endl;
            }
            aux = aux -> prox;
        }
    }

}
void Sistema::eliminarCurso() {
}

//Manejo de inscripciones
void Sistema::inscribirAlumnoCurso() {  
}
void Sistema::eliminarAlumnoCurso() {
}

//Manejo de Notas (1.0 - 7.0)
void Sistema::registrarNotasAlumno(){
}; 

//Consultas y Reportes
void Sistema::obtenerAlumnosPorCarrera() {
}
void Sistema::cursosInscritosPorAlumno() {
}
double Sistema::promedioNotasAlumnoCurso() {
    return 0.0;
}
double Sistema::promedioGeneralAlumno() {
    return 0.0;
}

//Lo que se pide
void Sistema::mostrarAlumnos(NodoAlumno *head) {
    NodoAlumno* aux = head;
    while (aux != nullptr) {
        std::cout << aux -> toString() << std::endl;
        aux = aux -> prox;
    }
}



//Todos los metodos privados
void Sistema::eliminarNodosAlumnos(NodoAlumno*& head) {
    NodoAlumno* aux;
    while (head != nullptr) {
        aux = head;
        head = head -> prox;
        delete aux;
    }
    head = nullptr;
}

void Sistema::eliminarNodosCurso(NodoCurso*& head) {
    NodoCurso* aux;
    while (head != nullptr) {
        aux = head;
        head = head -> prox;
        delete aux;
    }
    head = nullptr;
}

void Sistema::insertarNodoAlFinalAlumnos(NodoAlumno*& nodo_alumno, NodoAlumno*& head) {
    if (head == nullptr) {
        head = nodo_alumno;
        return;
    }
    NodoAlumno* aux = head;
    while (aux -> prox != nullptr) {
        aux = aux -> prox;
    }
    aux -> prox = nodo_alumno;
}

void Sistema::eliminarNodoCursoID(NodoAlumno *&nodo_alumno, NodoAlumno *&head, bool op) {

}

void Sistema::insertarNodoAlFinalCursos(NodoCurso *&nodo_curso, NodoCurso *&head) {
    if (head == nullptr) {
        head = nodo_curso;
        return;
    }

    NodoCurso* aux = head;
    while (aux -> prox != nullptr) {
        aux = aux -> prox;
    }

    aux -> prox = nodo_curso;
}







