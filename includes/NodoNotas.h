#pragma once

class NodoNotas {
public:
    double nota;
    NodoNotas* prox;
    NodoNotas(double nota);
    ~NodoNotas();
};

