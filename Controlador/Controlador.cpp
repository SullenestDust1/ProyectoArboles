//
// Created by marco on 3/26/18.
//

#include "Controlador.h"
//
Controlador::Controlador()  {
    checkCargArbol1 = false;
    checkCargArbol2 = false;
    checkCargArbol3 = false;

}

void Controlador::CargarArbolA() {
    marbolA.InsertarRepetidos(3);
    marbolA.InsertarRepetidos(2);
    marbolA.InsertarRepetidos(10);
    marbolA.InsertarRepetidos(5);
    marbolA.InsertarRepetidos(3);
    checkCargArbol1 = true;
    cout<<"Se Cargo el arbol A exitosamente";
}

void Controlador::CargarArbolB() {
    marbolB.InsertarRepetidos(5);
    marbolB.InsertarRepetidos(2);
    marbolB.InsertarRepetidos(7);
    marbolB.InsertarRepetidos(9);
    checkCargArbol2 = true;
    cout<<"Se Cargo el arbol B exitosamente";

}

void Controlador::UnirArboles() {
//marbolu = marbolu.Combinar(marbolA.ObtRaiz(),marbolB.ObtRaiz(),1);
    if(checkCargArbol1 && checkCargArbol2){
        marbolu.UnirArbol(&marbolA,&marbolB,marbolA.ObtRaiz(),marbolB.ObtRaiz());
        checkCargArbol3 = true;
        cout<<"Se Unieron los arboles satisfactoriamente";
    }
    else
        cout<<"Se deben cargar los dos arboles antes de poder unirlos";
}

void Controlador::EliminarRepetidos() {
    if(checkCargArbol3) {
        MArbol<int> ma; //arbolcopia
        ma = ma.operator=(marbolu); // arbol copiado
        marbolu.EliminarRepetidos(ma.ObtRaiz(), true);
    }else
        cout<<"Se debe crear primero el arbolunion"<<endl;
}

void Controlador::ImprimirArbol(int arbol, int metodo) {
    MArbol<int> arbols;
    switch (arbol) {
        case 1:
            arbols = marbolA;
            break;
        case 2:
            arbols = marbolB;
            break;
        case 3:
            arbols = marbolu;
            break;
    }
    switch (metodo) {
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
