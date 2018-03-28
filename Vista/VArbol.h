//
// Created by juan on 3/27/18.
//

#ifndef PROYECTOARBOLES_VARBOL_H
#define PROYECTOARBOLES_VARBOL_H
#include "../Librerias/Arbol/Arbol.cpp"
#include "../Librerias/Genericas/VGeneral.h"
template<class Tipo>
class VArbol : public VGeneral {
public:
    VArbol();
    void PosOrden(Arbol<Tipo> &Arbol,Nodo<Tipo>* raiz);
    void PreOrden(Arbol<Tipo> &Arbol, Nodo<Tipo>* raiz);
    void InOrden(Arbol<Tipo> &Arbol,Nodo<Tipo>* raiz);
};


#endif //PROYECTOARBOLES_VARBOL_H
