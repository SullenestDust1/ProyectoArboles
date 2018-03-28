//
// Created by marco on 3/26/18.
//

#include "Controlador.h"
//
Controlador::Controlador()  {}

void Controlador::CargarArbolA() {
    marbolA.InsertarRepetidos(3);
    marbolA.InsertarRepetidos(2);
    marbolA.InsertarRepetidos(10);
    marbolA.InsertarRepetidos(5);
}

void Controlador::CargarArbolB() {
    marbolB.InsertarRepetidos(1);
    marbolB.InsertarRepetidos(2);
    marbolB.InsertarRepetidos(7);
    marbolB.InsertarRepetidos(9);
}

void Controlador::UnirArboles() {
//marbolu = marbolu.Combinar(marbolA.ObtRaiz(),marbolB.ObtRaiz(),1);
    marbolu.UnirArbol(&marbolA,&marbolB,marbolA.ObtRaiz(),marbolB.ObtRaiz());
}

void Controlador::EliminarRepetidos() {
    marbolu.EliminarRepetidos(marbolu,marbolu.ObtRaiz(),true);
    varb.InOrden(marbolu,marbolu.ObtRaiz());
}

void Controlador::ImprimirArbol(int arbol, int metodo) {
    MArbol<int> arbols;
    switch (arbol){
    case 1:
        arbols = marbolA;
     break;
    case 2:
        arbols= marbolB;
        break;
    case 3:
         arbols= marbolu;
        break;
}
    switch (metodo){
        case 1:
            varb.InOrden(arbols, arbols.ObtRaiz());
            break;
        case 2:
            varb.PreOrden(arbols, arbols.ObtRaiz());
            break;
        case 3:
            varb.PosOrden(arbols, arbols.ObtRaiz());
            break;
    }
}
