/*
Realice un programa que defina varias formas diferentes,
cree un vector de punteros de la clase Forma que apunten
a los objetos creados. El programa debe realizar un bucle
que recorra todas las formas, las ponga todas del mismo
color y las mueva a una determinada posición.
*/

#include <iostream>
#include <vector>

#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio1\Forma.h"          //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio1\Rectangulo.h"         //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio2\Elipse.h"         //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio3\Cuadrado.h"           //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio4\Circulo.h"            //Se incluye codigo del archivo especificado.


int main()
{
    std::vector<Forma *> Formas;            //Se crea el vector de punteros de la clase forma.
    Cuadrado C("Rojo",2,2,"Cuadrado",5,5);      //Se crea el objeto.
    Rectangulo R("Azul",3,3,"Rectangulo",5,10);     //Se crea el objeto.
    Elipse E("Rojo",0,0,"Elipse",5,3);      //Se crea el objeto.
    Circulo CC("Azul",1,3,"Circulo",5,0);       //Se crea el objeto.
    Formas.push_back(&C);       //Se le agrega al vector.
    Formas.push_back(&R);       //Se le agrega al vector.
    Formas.push_back(&E);       //Se le agrega al vector.
    Formas.push_back(&CC);      //Se le agrega al vector.

    for (int i = 0; i < Formas.size(); i++)     //Metodo para ejecutar funciones a cada elemnto del vector.
    {
        std::cout<<"------------------------------------\n";
        std::cout<<"-> Datos de la Forma:\n";
        Formas[i]->imprimir();      //Se imprime.
        std::cout<<"-> Cambiando color de la forma...\n";
        Formas[i]->set_color("Amarillo");       //Se cambia el color.
        std::cout<<"-> Moviendo forma...\n";
        Formas[i]->mover_forma(10,10);      //Se  mueve la forma.
        std::cout<<"-> Nuevos datos de la Forma:\n";
        Formas[i]->imprimir();          //Se imprime.
    }

    return 0;
}