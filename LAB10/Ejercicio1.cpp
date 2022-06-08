/*
Defina una lista enlazada que permita insertar elementos al final de todos los
elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
orden, simplemente los elementos nuevos deben de ingresar como el último
elemento.
*/

#include "Lista.h"      //Se incluye codigo del archivo especificado.

int main()      //Fucnion principal.
{
    int size{};
    Lista L1;       //Se crea un objeto Lista.

    cout<<"Ingrese el size de la lista a crear: ";
    cin>>size;      //Se ingresa el tamaño.

    cout<<"-> Lista creada.\n";
    L1.insert_nodo_size(size);      //Se crea una lisat de un tamaño especificado.(opcional)

    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.

    cout<<"INGRESANDO UN NUEVO DATO AL FINAL DE LA LISTA:\n";
    cout<<"Ingrese el dato: ";
    cin>>size;              //Se ingresa dato.
    L1.insertar_nodo_al_final(size);         //Se agrega un dato al final de la lista.
    cout<<"INGRESANDO UN NUEVO DATO AL FINAL DE LA LISTA:\n";
    cout<<"Ingrese el dato: ";
    cin>>size;              //Se ingresa dato.
    L1.insertar_nodo_al_final(size);         //Se agrega un dato al final de la lista.
    cout<<"INGRESANDO UN NUEVO DATO AL FINAL DE LA LISTA:\n";
    cout<<"Ingrese el dato: ";
    cin>>size;              //Se ingresa dato.
    L1.insertar_nodo_al_final(size);         //Se agrega un dato al final de la lista.
    cout<<"MOSTRANDO LISTA:\n\t";
    L1.mostrar_lista();         //Se muestra la la lista.
    
    return 0;
}