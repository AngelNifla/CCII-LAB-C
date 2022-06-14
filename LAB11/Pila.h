#ifndef _PILA_H_
#define _PILA_H_

#include "Nodo.h"       //Se utiliza codigo del archivo especificado.

class Pila          //Clase Pila.
{
private:
    int size;           //Atributo: valor del tamaño de la pila.
    Nodo *head;         //Atributo: direccion del primer(cabeza) nodo de la pila.
public:
    Pila();             //Constructor.

    void insert_nodo_size(int _size);
    void push(int _elem);           //Funcion para insertar un solo nodo a la pila de forma secuencial (al inicio).
    void pop();            //Funcion que elimina el ultimo nodo de la pila.
    void buscar();          //Funcion para buscar un elemento en la pila.
    void mostrar_Pila();        //Funcion para mostrar la pila.

    int get_back()              //Funcion que devuelve el ultimo elemento de la pila.
    {
        Nodo *aux=head;
        while (aux->get_next() != NULL)
        {
            if (aux->get_next()->get_next() ==NULL)
            {
                return aux->get_next()->get_elem();
            }
            aux = aux->get_next();
        }
        if (aux == head)
        {
            return aux->get_elem();
        }else
        {
            return NULL;
        } 
    }

    ~Pila();            //Destructor.
};

#endif