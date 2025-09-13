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

NodoAlumno* Sistema::buscarAlumno(NodoAlumno* headAlumno, int id, std::string nombre) {

    NodoAlumno* encontrado = nullptr;
    if (nombre == "") {
        NodoAlumno* aux = headAlumno;
        while (aux != nullptr) {
            if (aux -> dato -> getId() == id) {
                std::cout << aux -> toString() << std::endl;
                encontrado = aux;

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

    return encontrado;
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
            aux -> prox = aux2 -> prox;
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

NodoCurso* Sistema::buscarCurso(NodoCurso* headCurso, int id, std::string nombre) {
    NodoCurso* encontrado = nullptr;

    if (nombre == "") {
        NodoCurso* aux = headCurso;
        while (aux != nullptr) {
            if (aux -> dato -> getId() == id) {
                std::cout << aux -> toString() << std::endl;
                encontrado = aux;
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

    return encontrado;

}
void Sistema::eliminarCurso(NodoCurso*& headCurso, int id) {
    if (headCurso -> dato -> getId() == id) {
        NodoCurso* aux = headCurso;
        headCurso = headCurso -> prox;
        delete aux;
        return;
    }
    NodoCurso* aux = headCurso;
    while (aux != nullptr && aux -> prox != nullptr) {
        if (aux -> prox -> dato -> getId() == id) {
            NodoCurso* aux2 = aux -> prox;
            aux -> prox = aux2 -> prox;
            delete aux2;
            return;
        }
        aux = aux -> prox;
    }
}

//Manejo de inscripciones
void Sistema::inscribirAlumnoCurso(NodoCurso*& headCurso, NodoAlumno*& headAlumno) {
    //Mostrar listado de los alumnos registrado que aun no estan inscritos en un curso
    std::cout << "\nListado de los alumnos que no estan inscritos en un curso" << std::endl;

    NodoAlumno* aux = headAlumno;
    while (aux != nullptr) {
        if (aux->dato -> getCurso() == nullptr) {
            std::cout << aux -> toString() << std::endl;
        }
        aux = aux -> prox;
    }

    int opcionID;
    std::cout <<"Ingrese el ID del alumno a registrar: ";
    std::cin >> opcionID;
    std::cout << "Alumno elegido: " << std::endl;
    NodoAlumno* elegido = buscarAlumno(headAlumno, opcionID, "");
    std::cout << std::endl;
    std::cout << "Listado de cursos disponibles para inscribir" << std::endl;
    NodoCurso* aux2 = headCurso;
    while (aux2 != nullptr) {
        if (aux2 -> dato -> getCantidadMaxEstudiantes() > 0 && aux2 -> dato ->getCarrera() == elegido -> dato -> getCarrera()) {
            std::cout << aux2 -> toString() << std::endl;
        }
        aux2 = aux2 -> prox;
    }

    int opcionIDCurso;
    std::cout <<"Ingrese el ID del alumno a registrar: ";
    std::cin >> opcionIDCurso;
    std::cout << "Curso elegido: " << std::endl;
    NodoCurso* cursoElegido = buscarCurso(headCurso, opcionIDCurso, "");
    std::cout << std::endl;

    //cursoElegido -> dato -> registrarAlumnoEnCurso(elegido);
    //cursoElegido -> dato -> mostrarAlumnoEnCurso();

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








