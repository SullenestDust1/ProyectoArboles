/*#include <iostream>

#include "Librerias/Arbol/ArbolBB.cpp"
#include "Librerias/Pila/Pila.cpp"
int main() {
    ArbolBB<int> arboldemierda;
    Pila<int> pilademierda;
    Nodo<int> *p1;
    p1= arboldemierda.CrearNodo(9);
    arboldemierda.AsigRaiz(p1);
    p1 = arboldemierda.CrearNodo(1231);
    arboldemierda.ObtRaiz()->AsigDer(p1);
    cout<< arboldemierda.ObtRaiz()->ObtInfo()<<endl;
    cout << arboldemierda.ObtRaiz()->ObtDer()->ObtInfo() << endl;
    return 0;
}
*/

#include "Librerias/Genericas/VGeneral.h"
#include "Controlador/Controlador.h"
using namespace std;
int main()
{

    int opc;
    VGeneral  vg;
    Controlador c;
    vg.Pausa();
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(2);
        vg.Limpiar();
        vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
        vg.ImprimirMensaje("   1. CARGAR ARBOL A\n");
        vg.ImprimirMensaje("   2. CARGAR ARBOL B\n");
        vg.ImprimirMensaje("   3. UNIR ARBOLES\n");
        vg.ImprimirMensaje("   4. ELIMINAR REPETIDOS\n");
        vg.ImprimirMensaje("   5. IMPRIMIR ARBOL \n");
        vg.ImprimirMensaje("   6. FINALIZAR\n\n");
        opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,6);
        switch (opc)
        {
            case 1: c.CargarArbolA();
                break;
            case 2: c.CargarArbolB();
                break;
            case 3: c.UnirArboles();
                break;
            case 4:  c.EliminarRepetidos();
                break;
            case 5:  {
                int arb;
                do
                {
                vg.Limpiar();
                vg.ImprimirLineasBlanco(2);
                vg.Limpiar();
                vg.ImprimirEncabezado("\n      SELECCIONA EL ARBOL A IMPRIMIR \n","      =======  ===============");
                vg.ImprimirMensaje("   1. ARBOL A\n");
                vg.ImprimirMensaje("   2. ARBOL B\n");
                vg.ImprimirMensaje("   3. ARBOL UNION\n");vg.ImprimirMensaje("  4. VOLVER AL MENU\n");
                arb = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,4);
                }
                while(arb != 3);
                  }
                break;
        }
    }
    while(opc != 6);


    return 0;
}


