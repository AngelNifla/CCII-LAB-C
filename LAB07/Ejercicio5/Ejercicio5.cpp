/*
Escribe un programa que implemente la siguiente jerarquía de clases
*/

#include <iostream>
#include "OperacionFactorial.h"     //Incluye codigo del archivo especificado.

int main()      //Funcion Principal.
{
    OperacionFactorial F;       //Se crea un objeto OperacionFactorial.
    int num{NULL};      //Variable para un numero entero.
    std::cout<<"Ingrese un Numero: ";
    std::cin>>num;      //Se ingresa valor a la variable.
    
    F.set_operador_factorial(num);      //Se ingres valor al objeto creado.
    std::cout<<"Factorial de "<<F.get_operador_factorial()<<
    " es: "<<F.devolver_factorial();        //Se imprime el resultado del objeto creado.
    return 0;
}