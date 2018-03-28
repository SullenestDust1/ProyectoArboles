//
// Created by marco on 3/27/18.
////
#include "MArbol.h"

template<class Tipo>
MArbol<Tipo>::MArbol(){

}

template<class Tipo>
bool MArbol<Tipo>::UnirArbol(Arbol<Tipo> *arb, Arbol<Tipo> *arb2) {
    Nodo<int>* p,*p2, *p3;
    p = this->CopiaArbol(arb->ObtRaiz());
    p2 = this->CopiaArbol(arb2->ObtRaiz());
    p3 = this->Combinar(p,p2,1);
    this->AsigRaiz(p3);
    return false;
}


template class MArbol<int>;
