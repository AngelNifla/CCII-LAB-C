#include "Nodo.h"           //Se utiliza codigo del archivo especificado.

Nodo::Nodo()        //Constructor principal.
{
    elem = NULL;
    next = NULL;
}

Nodo::Nodo(int _elem)       //Constructor por parametro.
{
    elem = _elem;
    next = NULL;
}

void Nodo::mostrar_nodo()          //Funcion para imprimir un nodo.
{
    std::cout << elem << "-> ";
}

Nodo::~Nodo()       //Destructor.
{
    
}