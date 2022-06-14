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
    if (next)   //Si un nodo tiene tiene a la direccion de otro
        next->~Nodo();  //sed destruye ese siguiente nodo.
    delete this;    //Si no, se destruye el mismo nodo.
}