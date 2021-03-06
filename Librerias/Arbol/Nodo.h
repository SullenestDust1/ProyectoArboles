#ifndef Nodo_H
#define Nodo_H
#include <string>
using namespace std;
template<class Tipo>
class Nodo {

private:
    Tipo info;
    Nodo<Tipo> *izq;
    Nodo<Tipo> *der;
public:
    Nodo();
    void AsigInfo(Tipo in);
    Tipo ObtInfo();
    void AsigIzq(Nodo<Tipo> *p);
    Nodo<Tipo> *ObtIzq();
    void AsigDer(Nodo<Tipo> *p);
    Nodo<Tipo> *ObtDer();
};
#
#endif

