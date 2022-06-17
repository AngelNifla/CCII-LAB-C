#if !defined(_COLA_H_)
#define _COLA_H_

#include "Nodo.h"               //Se utiliza codigo del archivo especificado.

class Cola          //Clase Cola.
{
private:
    int size;       //Atributo: para el tamaño de la cola.
    Nodo *begin;        //Atributo: puntero de objeto Nodo para apuntar al nodo de enfrente.
    Nodo *back;     //Atributo: puntero de objeto Nodo para apuntar al nodo de espalda.
public:
    Cola();         //Constructor.
    void insert_nodo_size(int _size);           //Funcion para insertar nodos vacios en base a un tamaño.
    void push(int _elem);           //Funcion para insertar un solo nodo a la Cola de forma secuencial (al final).
    void pop();         //Funcion que elimina el ultimo nodo de la Cola.
    void buscar();          //Funcion para buscar un elemento en la Cola.
    void mostrar_Cola();            //Funcion para mostrar la Cola.

    int get_begin()
    {
        return begin->get_elem();
    }
    ~Cola();            //Destructor.
};

#endif // _COLA_H_
