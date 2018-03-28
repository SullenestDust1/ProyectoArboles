#ifndef Arbol_H
#define Arbol_H
//#include <stdlib>        // Para utilizar NULL
#include <iostream>
#include "Nodo.h"

/*Definicion de la Clase Arbol y sus Funciones Miembros                       */
template <class Tipo>
  class Arbol
  {
   typedef Nodo<Tipo>* Apuntador;
   private:
        Nodo<Tipo> *raiz;            /* Apuntador a Raiz del Arbol Binario  */       
   public:	
           
      	Arbol();
      	Arbol(Arbol<Tipo> &entrada);
      	Nodo<Tipo>* ObtRaiz();
      	void AsigRaiz(Nodo<Tipo> *p);
        bool Liberar(Nodo<Tipo> *p);
      	virtual ~Arbol(void);
      	bool Vacio(void);
      	bool Lleno(void);
      	
      	Nodo<Tipo> *CrearNodo(Tipo valor);
      	bool InsIzquierdo(Nodo<Tipo> *P, Tipo valor);
      	bool InsDerecho(Nodo<Tipo> *P, Tipo valor);
      	Nodo<Tipo> *Combinar(Nodo<Tipo> *arbol1,Nodo<Tipo> *arbol2, Tipo valor);
		bool EliDerecho(Nodo<Tipo>*  p,Tipo &valor);
        bool EliIzquierdo(Nodo<Tipo>*  p,Tipo &valor);         
        bool Eliminar(Nodo<Tipo> *ap,Nodo<Tipo>* &p,Tipo &valor); 
        
		Nodo<Tipo> *CopiaArbol(Nodo<Tipo> *p);
      	Arbol<Tipo> &operator = (Arbol<Tipo> &entrada);
          		
  };

// Inclusion Implementacion de Arbol Binario
#endif
