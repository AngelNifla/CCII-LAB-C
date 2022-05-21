/*
Defina una clase Elipse derivada de forma. Recordatorio:
una elipse queda definida por su radio mayor (R) y su
radio menor (r), tal que el área de una elipse es igual a π*(R*r).
*/

#include <iostream>
#include "Elipse.h"     //Se incluye codigo del archivo especificado.

int main()
{
    Elipse E("Rojo",0,0,"Elipse",5,3);      //Se crea el objeto.
    std::cout<<"------------------------------------\n";
    std::cout<<"-> Datos de la Forma:\n";
    E.imprimir();       //Se imprime.
    std::cout<<"-> Calculando area de la forma...\n";
    E.calcular_area();      //Se calcula el area.
    
    return 0;
}