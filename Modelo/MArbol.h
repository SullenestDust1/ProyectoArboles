//
// Created by marco on 3/27/18.
//
#ifndef MArbol_H
#define MArbol_H

#include "../Librerias/Arbol/ArbolBB.cpp"

template<class Tipo>
class MArbol: public ArbolBB<Tipo>{

public:
    MArbol();
    bool UnirArbol(Arbol<Tipo> *arb, Arbol<Tipo> *arb2);
};

#endif //MArbol_H
