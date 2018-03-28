//
// Created by marco on 3/26/18.
//

#include "Controlador.h"
//
Controlador::Controlador()  {}

void Controlador::CargarArbolA() {
    marbolA.Insertar(3);
    marbolA.Insertar(9);
    marbolA.Insertar(10);
    marbolA.Insertar(3);
}

void Controlador::CargarArbolB() {

}

void Controlador::UnirArboles() {

}

void Controlador::EliminarRepetidos() {

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
