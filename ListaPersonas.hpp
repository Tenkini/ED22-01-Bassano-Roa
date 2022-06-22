#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H

#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
//#include "Persona.hpp"
//#include "Persona.cpp"
#include "Nodo.hpp"
#include "Nodo.cpp"

class ListaPersonas
{
private:
    Nodo *first;
public:
    ListaPersonas::ListaPersonas();
    Nodo getFirst();
    setFirst(Nodo);
    void insertar(Nodo);
    void eliminar();
};

#endif