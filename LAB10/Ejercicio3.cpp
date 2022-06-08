/*
Desarrolle una función que permita ingresar elementos en el medio de dos
elementos de la lista enlazada, como se muestra en la siguiente imagen. Solicite que
se ingrese una posición válida dentro de la lista y permita que el valor ingresado se
pueda anexar en esa posición.
*/

#include "Lista.h"

int main()      //Fucnion principal.
{
    int dato{},pos{};
    Lista L1;       //Se crea un objeto Lista.
    L1.insertar_nodo_al_final(5);       //Dato de inicio.

    cout<<"-> Lista creada.\n";

    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.

    cout<<"INGRESANDO UN NUEVO DATO POR POSICION EN LA LISTA:\n";
    cout<<"Ingrese posicion:";
    cin>>pos;               //Se ingresa posicion.
    cout<<"Ingrese el dato: ";
    cin>>dato;              //Se ingresa dato.
    L1.insertar_nodo_por_posicion(dato,pos);         //Se agrega un dato a la lista por medio de una posicion.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"INGRESANDO UN NUEVO DATO POR POSICION EN LA LISTA:\n";
    cout<<"Ingrese posicion:";
    cin>>pos;               //Se ingresa posicion.
    cout<<"Ingrese el dato: ";
    cin>>dato;              //Se ingresa dato.
    L1.insertar_nodo_por_posicion(dato,pos);         //Se agrega un dato a la lista por medio de una posicion.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    cout<<"INGRESANDO UN NUEVO DATO POR POSICION EN LA LISTA:\n";
    cout<<"Ingrese posicion:";
    cin>>pos;               //Se ingresa posicion.
    cout<<"Ingrese el dato: ";
    cin>>dato;              //Se ingresa dato.
    L1.insertar_nodo_por_posicion(dato,pos);         //Se agrega un dato a la lista por medio de una posicion.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    
    return 0;
}