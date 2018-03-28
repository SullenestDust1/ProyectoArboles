//
// Created by marco on 3/27/18.
////
#include "MArbol.h"

template<class Tipo>
MArbol<Tipo>::MArbol(){

}

template<class Tipo>
bool MArbol<Tipo>::UnirArbol(Arbol<Tipo> *arb, Arbol<Tipo> *arb2, Nodo<Tipo> * raiza, Nodo<Tipo> * raizb) {
    ///// insertar valores del arbol A
    InsertarArbolenOtro(arb,raiza);
    ///// insertar valores del arbol B
    InsertarArbolenOtro(arb2,raizb);
    return true;
}

template<class Tipo>
bool MArbol<Tipo>::InsertarArbolenOtro(Arbol<Tipo> *arb, Nodo<Tipo> *raiz) {
    int simbolo=0;
    if (raiz!=NULL)
    {
        this->InsertarArbolenOtro(arb,raiz->ObtIzq());
        this->InsertarArbolenOtro(arb,raiz->ObtDer());
        simbolo=raiz->ObtInfo();
        this->InsertarRepetidos(simbolo);
    }
    return false;
}
template<class Tipo>
bool MArbol<Tipo>::InsertarRepetidos(Tipo valor)
{
    Nodo<Tipo>  *p,*nuevo,*ant;
    Tipo auxiliar;

    nuevo=this->CrearNodo(valor);
    if (Arbol<Tipo>::ObtRaiz()==NULL)
        this->AsigRaiz(nuevo);
    else
    {
        p=Arbol<Tipo>::ObtRaiz();
        while (p!=NULL)
        {
            auxiliar=p->ObtInfo();
            if  (valor<auxiliar)
            {
                ant=p;
                p=p->ObtIzq();
                if (p==NULL)
                    this->InsIzquierdo(ant,valor);
            }
            else
            {
                ant=p;
                p=p->ObtDer();
                if (p==NULL)
                    this->InsDerecho(ant,valor);
            };
        };
    };
    return true;
}

template<class Tipo>
bool MArbol<Tipo>::EliminarRepetidos(Arbol<Tipo>  & Arbol, Nodo<Tipo> * raiz,bool x) {
    if(x==true) {
        MArbol<Tipo> ma;
        ma.operator=(ma);
        this->Liberar(raiz);
    }

    int simbolo;
    if (raiz!=NULL)
    {
        this->EliminarRepetidos(Arbol,raiz->ObtIzq(),false);
        this->EliminarRepetidos(Arbol,raiz->ObtDer(),false);
        simbolo=raiz->ObtInfo();
        this->Insertar(simbolo);
    }

    return false;
}
template class MArbol<int>;
