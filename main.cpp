/*#include <iostream>

#include "Librerias/Arbol/ArbolBB.cpp"
#include "Librerias/Pila/Pila.cpp"
#include "Librerias/Genericas/VGeneral.cpp"

int main() {
    ArbolBB<int> arboldemierda;
    Pila<int> pilademierda;
    Nodo<int> *p1;
    p1= arboldemierda.CrearNodo(9);
    arboldemierda.AsigRaiz(p1);
    pilademierda.Insertar(p1->ObtInfo());
    p1 = arboldemierda.CrearNodo(1231);
    arboldemierda.ObtRaiz()->AsigDer(p1);
    pilademierda.Insertar(p1->ObtInfo());
    cout<< arboldemierda.ObtRaiz()->ObtInfo()<<endl;
    cout << arboldemierda.ObtRaiz()->ObtDer()->ObtInfo() << endl;
    return 0;
}
*/

#include "Librerias/Genericas/VGeneral.h"
#include "Controlador/Controlador.h"
using namespace std;

void MenuPrincipal(VGeneral vg, Controlador c);
void Sub_Arbol(VGeneral vg, Controlador c);
void Sub_Metodo(VGeneral vg, Controlador c,int arb);
int main()
{
    VGeneral  vg;
    Controlador c;
    MenuPrincipal(vg,c);
    return 0;
}

void MenuPrincipal(VGeneral vg, Controlador c){

    int opc;
    vg.Pausa();
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(1);
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
              Sub_Arbol(vg,c);
            }
                break;
        }
    }
    while(opc != 6);
}
void Sub_Arbol(VGeneral vg, Controlador c){
    int arb;
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(1);
        vg.Limpiar();
        vg.ImprimirEncabezado("\n      SELECCIONA EL ARBOL A IMPRIMIR \n","      =======  ===============");
        vg.ImprimirMensaje("   1. ARBOL A\n");
        vg.ImprimirMensaje("   2. ARBOL B\n");
        vg.ImprimirMensaje("   3. ARBOL UNION\n");
        vg.ImprimirMensaje("  4. VOLVER AL MENU\n");
        arb = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,4);
        switch(arb) {
            case 4:
                MenuPrincipal(vg,c);
                break;
            default:
                Sub_Metodo(vg,c,arb);

        }
    } while(arb != 4);
}
void Sub_Metodo(VGeneral vg, Controlador c,int arb){
    int met;
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(2);
        vg.Limpiar();
        vg.ImprimirEncabezado("\n      SELECCIONA EL METODO A USAR \n","      =======  ===============");
        vg.ImprimirMensaje("   1. INORDEN \n");
        vg.ImprimirMensaje("   2. PREORDEN \n");
        vg.ImprimirMensaje("   3. POSTORDEN \n");
        vg.ImprimirMensaje("  4. VOLVER AL MENU\n");
        arb = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,4);
        switch(arb) {
            case 4:
                MenuPrincipal(vg,c);
                break;
            default:
                c.ImprimirArbol(arb,met);
        }
    } while(arb != 4);
}

