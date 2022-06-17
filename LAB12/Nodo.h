#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>         //Se utiliza la libreria especificada.


class Nodo          //clase Nodo.
{
    private:
        int elem;       //Atributo: valor que guardara un nodo.
        Nodo *next;     //Atributo: direccion del siguiente nodo.
    public:
        Nodo();             //Constructor principal.
        Nodo(int _elem);    //Constructor por parametro.

        void mostrar_nodo();       //Funcion para immprimir un nodo.
        int get_elem()      //Funcion para obtener el valor actual.
        {     
            return elem;
        };
        Nodo* get_next(){       //Funcion para obtener la direccion actual.
            return next;
        };
        void set_elem(int _elem)    //Funcion para ingresar nuevo valor.
        {   
            elem = _elem;
        }
        void set_next(Nodo*_next)       //Funcion para ingresar nueva direccion.
        {
            next = _next;
        }
        
        ~Nodo();    //Destructor.
};

#endif