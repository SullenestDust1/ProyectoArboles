cmake_minimum_required(VERSION 3.9)
project(ProyectoArboles)

set(CMAKE_CXX_STANDARD 17)

ADD_LIBRARY(LibreriaArbol STATIC
        Librerias/Genericas/VGeneral.cpp
        Librerias/Pila/Pila.cpp
        Librerias/Arbol/Nodo.cpp
        Librerias/Arbol/Arbol.cpp
        Librerias/Arbol/ArbolBB.cpp)

add_executable(ProyectoArboles main.cpp Controlador/Controlador.cpp Controlador/Controlador.h)
TARGET_LINK_LIBRARIES(ProyectoArboles LibreriaArbol)
