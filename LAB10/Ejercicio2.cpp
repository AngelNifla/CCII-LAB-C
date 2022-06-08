/*
Con la implementación de la lista enlazada anterior, desarrolle una función que
permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
modificar el comportamiento del puntero que tiene referencia al primer elemento
para que sea redireccionado al nuevo elemento por ingresar.
*/

#include "Lista.h"

int main()      //Fucnion principal.
{
    int dato{};
    Lista L1;       //Se crea un objeto Lista.

    cout<<"-> Lista creada.\n";

    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.

    cout<<"INGRESANDO UN NUEVO DATO AL INICIO DE LA LISTA:\n";
    cout<<"Ingrese el dato: ";
    cin>>dato;              //Se ingresa dato.
    L1.insertar_nodo_al_inicio(dato);         //Se agrega un dato al inicio de la lista.
    cout<<"INGRESANDO UN NUEVO DATO AL INICIO DE LA LISTA:\n";
    cout<<"Ingrese el dato: ";
    cin>>dato;              //Se ingresa dato.
    L1.insertar_nodo_al_inicio(dato);         //Se agrega un dato al inicio de la lista.
    cout<<"INGRESANDO UN NUEVO DATO AL INICIO DE LA LISTA:\n";
    cout<<"Ingrese el dato: ";
    cin>>dato;              //Se ingresa dato.
    L1.insertar_nodo_al_inicio(dato);         //Se agrega un dato al inicio de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    
    return 0;
}