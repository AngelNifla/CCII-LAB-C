/*
Desarrolle un programa que, dado un conjunto de formas,
calcule cuál tiene el área máxima e imprima la información de dicha forma.
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
    std::vector<Forma *> Formas;            //Se crea el vector de punteros de la clase forma.
    Cuadrado C("Rojo",2,2,"Cuadrado",5,5);      //Se crea el objeto.
    Rectangulo R("Azul",3,3,"Rectangulo",5,10);     //Se crea el objeto.
    Elipse E("Rojo",0,0,"Elipse",5,3);      //Se crea el objeto.
    Circulo CC("Azul",1,3,"Circulo",5,0);       //Se crea el objeto.
    Formas.push_back(&C);       //Se le agrega al vector.
    Formas.push_back(&R);       //Se le agrega al vector.
    Formas.push_back(&E);       //Se le agrega al vector.
    Formas.push_back(&CC);      //Se le agrega al vector.

    double mayor_area{0};       //Variable para almacenar el area mayor de todos.
    int orden{0};           //Variable para guardar la ubicaiond el elemento en el vector.

    for (int i = 0; i < Formas.size(); i++)     //Metodo para ejecutar estudiar a cada area de cada elemento del vector.
    {
        if (Formas[i]->get_area()>= mayor_area)     //Si el area del elemnto en el actual ciclo es amyor que otro.
        {
            mayor_area = Formas[i]->get_area();     //Se agreag ese area a la variable.
            orden = i;      //Y se guarda la ubicacion.
        }  
    }
    std::cout<<"El area mayor es de la Forma:\n";
    Formas[orden]->imprimir();      //se imprime.
    Formas[orden]->calcular_area();     //Se muestra el valor del area mayor.
    return 0;
}