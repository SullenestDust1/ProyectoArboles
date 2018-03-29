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

        int numero;
    int resp;

        do {

            numero = varb.LeerValidarNro("\n Numero(1,100): ",1,100);
            marbolA.InsertarRepetidos(numero);
            resp = varb.LeerValidarNro("\n Desea Agregar otro numero ? (1)Si (2)No : ", 1, 2);
        }while(resp==1);
    checkCargArbol1 = true;
    cout<<"Se Cargo el arbol A exitosamente";
}

void Controlador::CargarArbolB() {
    int numero;
    int resp;

    do {

        numero = varb.LeerValidarNro("\n Numero(1,100): ",1,100);
        marbolB.InsertarRepetidos(numero);
        resp = varb.LeerValidarNro("\n Desea Agregar otro numero ? (1)Si (2)No : ", 1, 2);
    }while(resp==1);
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
        cout<<"Se eliminaron los elementos repetidos del arbolunion";
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
