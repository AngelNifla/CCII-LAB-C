/*
Escribe un programa que implemente la siguiente jerarquía de clases,
Debe implementar aquellos atributos y métodos necesarios para que
se pueda ejecutar el siguiente programa:
*/

#include <iostream>
#include <string>
#include "Pato.h"       //Se incluye codigo del archivo especificado.
#include "Gallina.h"        //Se incluye codigo del archivo especificado.
#include "Ganso.h"      //Se incluye codigo del archivo especificado.

int main()      //Funcion principal.
{
    Gallina G1("Lola","Tierra","Blancas",2);        //Se crea el objeto Gallina por parametro.
    Pato P1("Lucas","Tierra y Agua","Negras",2);        //Se crea el objeto Páto por parametro.
    Ganso G2("Box","Tierra y Agua","Blancas y Negras",2);       //Se crea el objeto Ganso por parametro.
    
    std::cout<<"\n---------------------------\n";
    std::cout<<"-> Mostrando datos del objeto.\n";
    std::cout<<"---------------------------\n";
    G1.mostrar_gallina();           ////Metodo para mostrar los atributos (propios y heredados) del objeto.

    std::cout<<"\n---------------------------\n";
    std::cout<<"-> Mostrando datos del objeto.\n";
    std::cout<<"---------------------------\n";
    P1.mostrar_pato();          ////Metodo para mostrar los atributos (propios y heredados) del objeto.

    std::cout<<"\n---------------------------\n";
    std::cout<<"-> Mostrando datos del objeto.\n";
    std::cout<<"---------------------------\n";
    G2.mostrar_ganso();         ////Metodo para mostrar los atributos (propios y heredados) del objeto.

    return 0;       //Fin.
}