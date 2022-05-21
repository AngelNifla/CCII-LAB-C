/*
Defina una clase Circulo derivada de la clase Elipse.
*/

#include <iostream>
#include "Circulo.h"        //Se incluye codigo del archivo especificado.

int main()
{
    Circulo C("Rojo",0,0,"Circulo",3,0);        //Se crea el objeto.
    std::cout<<"------------------------------------\n";
    std::cout<<"-> Datos de la Forma:\n";
    C.imprimir();       //se imprime.
    std::cout<<"-> Calculando area de la forma...\n";
    C.calcular_area();      //se  calcula el area.
    return 0;
}