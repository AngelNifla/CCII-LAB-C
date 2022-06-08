/*
Elabore una función que permita eliminar el último elemento de una lista enlazada.
(Evite copiar los elementos en una nueva lista para completar la eliminación del
elemento )
*/

#include "Lista.h"

int main()      //Fucnion principal.
{
    Lista L1;       //Se crea un objeto Lista.
    L1.insertar_nodo_al_final(5);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(4);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(8);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(10);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(6);       //Dato de inicio agregando valores a la lista.

    cout<<"-> Lista creada.\n";

    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.

    cout<<"ELIMINANDO ULTIMO NODO DE LA LISTA:\n";
    L1.eliminar_ultimo_nodo();         //Se elimina el ultimo nodo de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"ELIMINANDO ULTIMO NODO DE LA LISTA:\n";
    L1.eliminar_ultimo_nodo();         //Se elimina el ultimo nodo de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"ELIMINANDO ULTIMO NODO DE LA LISTA:\n";
    L1.eliminar_ultimo_nodo();         //Se elimina el ultimo nodo de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    
    return 0;
}