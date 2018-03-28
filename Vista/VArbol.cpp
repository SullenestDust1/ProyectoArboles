//
// Created by juan on 3/27/18.
//
#include "VArbol.h"


VArbol::VArbol() {

}

void InOrden(Arbol<string> &Arbol, Nodo<int>* raiz)
{
    string simbolo;
    if (raiz!=NULL)
    {
        InOrden(Arbol,raiz->ObtIzq());
        simbolo=raiz->ObtInfo();
        cout << simbolo << "-";
        InOrden(Arbol,raiz->ObtDer());
    };
};

void PosOrden(Arbol<string> &Arbol,Nodo<int>* raiz)
{
    string simbolo;
    if (raiz!=NULL)
    {
        PosOrden(Arbol,raiz->ObtIzq());
        PosOrden(Arbol,raiz->ObtDer());
        simbolo=raiz->ObtInfo();
        cout << simbolo << "-";
    };
};

void PreOrden(Arbol<string> &Arbol, Nodo<int>* raiz)
{
    string simbolo;
    if (raiz!=NULL)
    {
        simbolo=raiz->ObtInfo();
        cout << simbolo << "-";
        PreOrden(Arbol,raiz->ObtIzq());
        PreOrden(Arbol,raiz->ObtDer());
    };
};

