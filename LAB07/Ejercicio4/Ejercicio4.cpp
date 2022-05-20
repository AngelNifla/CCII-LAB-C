/*
Escribe una clase de nombre ClaseDisco, que herede de la clase
ClaseMultimedia los atributos y métodos definidos por usted.
La clase ClaseDisco tiene, aparte de los elementos heredados,
un atributo más también definido por usted. Al momento de
imprimir la información debe mostrase por pantalla toda la información.
*/

#include <iostream>
#include <string>
#include "ClaseDisco.h"     //Se incluye el codigo del archivo especificado.

int main()
{
    std::string nombre_d{NULL},nombre_m{NULL};      //Variable para los nombres.

    std::cout<<"---------------------------\n";
    std::cout<<"Ingrese el nombre del Disco: ";
    getline(std::cin,nombre_d);         //Se pide ingresar el nombre del Disco.
    std::cout<<"Ingrese el nombre de la Multimedia del Disco: ";
    getline(std::cin,nombre_m);         //Se pide ingresar el nombre Multimedia.


    std::cout<<"---------------------------\n";
    std::cout<<"-> Objeto Disco CREADO por constructor de parametros.\n";    
    ClaseDisco D1(nombre_d,nombre_m);        //Se crea un objeto Disco.

    std::cout<<"---------------------------\n";
    std::cout<<"-> Mostrando datos del objeto.\n";
    std::cout<<"---------------------------\n";
    D1.mostrar_datos_Disco();                 //Se muestra los atributos (propios y heredados) del objeto creado.

    return 0;   //Fin.
}