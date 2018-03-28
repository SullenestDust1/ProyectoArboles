//
// Created by juan on 3/27/18.
//

#ifndef PROYECTOARBOLES_VARBOL_H
#define PROYECTOARBOLES_VARBOL_H
#include "../Librerias/Arbol/Arbol.h"
#include "../Librerias/Genericas/VGeneral.h"

class VArbol : public VGeneral {
public:
    VArbol();
    void InOrden(Arbol<string> &Arbol, Nodo<int>* raiz);
    void PosOrden(Arbol<string> &Arbol,Nodo<int>* raiz);
    void PreOrden(Arbol<string> &Arbol, Nodo<int>* raiz);
};


#endif //PROYECTOARBOLES_VARBOL_H
