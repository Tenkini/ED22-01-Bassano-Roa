#include "ListaPersonas.hpp"
#include "Nodo.hpp"
#include "Nodo.cpp"

ListaPersonas::ListaPersonas(){
    ListaPersonas *lp = new ListaPersonas();
    first = nullptr;
}
void ListaPersona::insertar(Nodo n){
    //si la lista esta vacia
    if(lp->getFirst() == nullptr){
        lp->setFirst() = n;
        n.getNext->nullptr;
    }
    //agregar al comienzo
    else{
        Nodo *aux = first;
        lp->setFirst() = n;
        n.setNext(aux);
    }
}
