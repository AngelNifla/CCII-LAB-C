#ifndef _LISTA_H_
#define _LISTA_H_


#include "Nodo.h"

class Lista         //Clase Lista
{
    private:
        int size;           //Atributo: valor del tamaño de la lista.
        Nodo *head;         //Atributo: direccion del primer(cabeza) nodo de la lista.
    public:
        Lista();            //Constructor Principal.
        void insertar_nodo_al_final(int _elem);          //Funcion para insertar un solo nodo a la lista de forma secuencial (al final).
        void insertar_nodo_al_inicio(int _elem);           //Funcion para insertar un solo nodo a la lista de forma secuencial (al inicio).
        void insertar_nodo_por_posicion(int _elem,int _posicion);   //Funcion que inserta un nodo de la lista en base a la posicion.
        void insert_nodo_size(int _size);        //Funcion para inseratr nodos vacios en base a un tamaño.
        void eliminar_ultimo_nodo();            //Funcion que elimina el ultimo nodo de la lista.
        void eliminar_primer_nodo();            //Funcion que elimina el primer nodo de la lista.
        void eliminar_nodo_por_posicion(int _posicion);         //Funcion que elimina un nodo de la lista en base a la posicion.
        void insertar_nodo_creciente(int _dato);       //Funcion para insertar nodo a la lista de forma creciente.
        void insertar_nodo_decreciente(int _dato);       //Funcion para insertar nodo a la lista de forma decreciente.
        void mostrar_lista();           //Mostrar la lista.
        
        ~Lista();                   //Destructor.
};
#endif
