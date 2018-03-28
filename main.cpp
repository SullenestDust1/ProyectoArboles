#include <iostream>

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