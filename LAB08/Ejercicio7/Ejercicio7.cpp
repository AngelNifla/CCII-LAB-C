/*
Utilice la técnica de las funciones virtuales para arreglar
los comportamientos anómalos detectados en el ejercicio anterior.
*/

#include <iostream>
#include <vector>

#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio1\Forma.h"      //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio1\Rectangulo.h"     //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio2\Elipse.h"     //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio3\Cuadrado.h"       //Se incluye codigo del archivo especificado.
#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio4\Circulo.h"        //Se incluye codigo del archivo especificado.


int main()
{   
    std::vector<Forma *> Formas;        //Se crea el vector de punteros de la clase forma.
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
        Formas[i]->imprimir();      //Se imprime los datos.
        std::cout<<"-> Hallando area de la forma...\n";
        Formas[i]->calcular_area();     //Se calcula el area.
        std::cout<<"-> Moviendo forma...\n";  
    }

    return 0;
}