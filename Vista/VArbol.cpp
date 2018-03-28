//
// Created by juan on 3/27/18.
//
#include "VArbol.h"



template<class Tipo>
void VArbol<Tipo>::PosOrden(Arbol<Tipo>  & Arbol, Nodo<Tipo> * raiz)
{
    int simbolo;
    if (raiz!=NULL)
    {
        this->PosOrden(Arbol,raiz->ObtIzq());
        this->PosOrden(Arbol,raiz->ObtDer());
        simbolo=raiz->ObtInfo();
        cout << simbolo << " - ";
    }
}
template<class Tipo>
void VArbol<Tipo>::PreOrden(Arbol<Tipo> & Arbol, Nodo<Tipo> * raiz) {
    int simbolo;
    if (raiz!=NULL)
    {
        simbolo=raiz->ObtInfo();
        cout << simbolo << " - ";
        this->PreOrden(Arbol,raiz->ObtIzq());
        this->PreOrden(Arbol,raiz->ObtDer());
    }
}

template<class Tipo>
VArbol<Tipo>::VArbol() {}

template<class Tipo>
void VArbol<Tipo>::InOrden(Arbol <Tipo> &Arbol, Nodo<Tipo> *raiz) {
    int  simbolo;
    if (raiz!=NULL)
    {
        this->InOrden(Arbol,raiz->ObtIzq());
        simbolo=raiz->ObtInfo();
        cout << simbolo << " - ";
       this->InOrden(Arbol,raiz->ObtDer());
    }
}
template  class VArbol<int>;




