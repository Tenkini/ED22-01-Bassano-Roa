#ifndef NODO_H
#define NODO_H

#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include "Persona.hpp"
#include "Persona.cpp"

class Nodo
{
private:
    Persona persona;
    Nodo *next;
public: 
    Nodo(Persona);

    Persona getPersona();
    //setPersona(Persona);
    Nodo getNext();
    setNext(Nodo);
};

#endif