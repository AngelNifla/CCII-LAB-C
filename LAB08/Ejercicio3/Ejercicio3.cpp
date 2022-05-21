/*
Defina una clase Cuadrado derivada de la clase Rectángulo.
*/

#include <iostream>
#include "Cuadrado.h"       //Se incluye codigo del archivo especificado.

int main()      //Funcion principal.
{
    Cuadrado C("Azul",3,3,"Cuadrado",5,10);     //Se crea el objeto.
    std::cout<<"------------------------------------\n";
    std::cout<<"-> Datos de la Forma:\n";
    C.imprimir();       //Se imprime los datos.
    std::cout<<"-> Calculando area de la forma...\n";
    C.calcular_area();      //Se calcula el area.
    std::cout<<"-> Calculando area de la perimetro...\n";
    C.calcular_perimetro();     //Se calcula el perimetro.
    std::cout<<"-> Cambiando size de la forma...\n";
    C.cambiar_size(2);      //Se cambia el tamaño.
    std::cout<<"-> Nuevos datos de la Forma:\n";
    C.imprimir();       //Se imprime los datos.
    return 0;
}