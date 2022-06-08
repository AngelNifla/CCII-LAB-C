/*
Dado una posición válida dentro de la lista, permita al usuario eliminar un elemento
de cualquier posición sin perder referencia de los demás elementos.
*/

#include "Lista.h"

int main()      //Fucnion principal.
{
    int dato{},pos{};
    Lista L1;       //Se crea un objeto Lista.
    L1.insertar_nodo_al_final(5);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(4);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(8);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(10);       //Dato de inicio agregando valores a la lista.
    L1.insertar_nodo_al_final(6);       //Dato de inicio agregando valores a la lista.

    cout<<"-> Lista creada.\n";

    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.

    cout<<"ELIMINANDO UN NODO POR POSICION:\n";
    cout<<"Ingrese posicion:";
    cin>>pos;               //Se ingresa posicion.
    L1.eliminar_nodo_por_posicion(pos);         //Se elimina un nodo de la lista por posicion.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"INGRESANDO UN NUEVO DATO POR POSICION EN LA LISTA:\n";
    cout<<"Ingrese posicion:";
    cin>>pos;               //Se ingresa posicion.
    L1.eliminar_nodo_por_posicion(pos);         //Se elimina un nodo de la lista por posicion.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"INGRESANDO UN NUEVO DATO POR POSICION EN LA LISTA:\n";
    cout<<"Ingrese posicion:";
    cin>>pos;               //Se ingresa posicion.
    L1.eliminar_nodo_por_posicion(pos);         //Se elimina un nodo de la lista por posicion.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    
    return 0;
}