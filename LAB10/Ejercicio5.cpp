/*
Desarrolle una función que permita eliminar el primer elemento de una lista sin
perder referencia de los demás elementos que ya se encuentran almacenados en la
estructura .(Evite copiar los elementos en una nueva lista para completar la
eliminación de los elementos)
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
    L1.eliminar_primer_nodo();         //Se elimina el primer nodo de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"ELIMINANDO ULTIMO NODO DE LA LISTA:\n";
    L1.eliminar_primer_nodo();         //Se elimina el primer nodo de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"ELIMINANDO ULTIMO NODO DE LA LISTA:\n";
    L1.eliminar_primer_nodo();         //Se elimina el primer nodo de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    
    return 0;
}