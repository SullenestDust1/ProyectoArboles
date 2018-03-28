//
// Created by marco on 3/26/18.
//

#ifndef PROYECTOARBOLES_CONTROLADOR_H
#define PROYECTOARBOLES_CONTROLADOR_H

#include "../Vista/VArbol.h"

class Controlador {
private : VArbol<int> varb;
public:
    Controlador();
    void CargarArbolA();
    void CargarArbolB();
    void UnirArboles();
    void EliminarRepetidos();
    void ImprimirArbol(int arbol, int metodo);
};


#endif //PROYECTOARBOLES_CONTROLADOR_H
