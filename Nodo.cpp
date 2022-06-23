#include "Nodo.hpp"
#include "Persona.hpp"
#include "Persona.cpp"

Nodo::Nodo(Persona p){
    Nodo *n = new Nodo(p);
    next = nullptr;
}
Nodo Nodo::getNext(){
    return next;
}
Nodo::setNext(Nodo n){
    next = n;
}
Persona Nodo::getPersona(){
    return persona;
}