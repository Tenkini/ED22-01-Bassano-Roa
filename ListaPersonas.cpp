#include "ListaPersonas.hpp"
#include "Nodo.hpp"
#include "Nodo.cpp"

ListaPersonas::ListaPersonas(){
    ListaPersonas *lp = new ListaPersonas();
    first = nullptr;
}
ListaPersonas::setFirst(Nodo n){
    first = n;
}
Nodo ListaPersonas::getFirst(){
    return first;
}
void ListaPersonas::insertar(Nodo *n){
    //si la lista esta vacia
    if(first == nullptr){
        setFirst(n);
        n->getNext()->n;//apuntando a si mismo
    }
    else if (first->getNext() == first){//si solo tiene un nodo la lista
        first->setNext(n);
        n->setNext(first);
    } else {//insertar al final
        Nodo *aux = first->getNext();
        while (aux != first)
        {
            aux = aux->getNext();
        }
        aux->setNext(n);
        n->setNext(first);
    }
}
void ListaPersonas::eliminar(){
    
}
