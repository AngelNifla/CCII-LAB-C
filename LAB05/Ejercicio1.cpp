/*
Asignar valores a dos variables enteras, intercambie
estos valores almacenados usando solo punteros a enteros.
*/

#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2, aux;    //varibales para los valores y un auxiliar.
    int *p1, *p2;   //punteros.

    cout<<"Ingresar valor 1: ";
    cin>>valor1;    //Ingresamos el primer valor a la variable "valor1".
    cout<<"Ingresar valor 2: ";
    cin>>valor2;    //Ingresamos el segundo valor a la variable "valor2".

    p1 = &valor2;   //Agregamos en el puntero "p1" la direccion de memoria de "valor1"
    p2 = &valor1;   //Agregamos en el puntero "p2" la direccion de memoria de "valor2"

    aux = *p1;  //En el auxiliar agregamos el contenido de la direccion de momoria del puntero "p1".
    *p1 = *p2;  //En el contenido de la direccion de momoria del puntero "p1" agregamos el contenido del puntero "p2".
    *p2 = aux;  //En el contenido de la direccion de momoria del puntero "p2" agregamos el contenido del auxiliar.

    cout<<"-> El intercambio de variables es : \n";
    cout<<"-> Valor 1 : "<<valor1<<endl;    //imprimimos el valor de la variable "valor1" ya cambiada.
    cout<<"-> Valor 2 : "<<valor2<<endl;    //imprimimos el valor de la variable "valor1" ya cambiada.
    
    return 0;
}