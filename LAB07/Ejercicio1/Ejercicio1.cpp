/*
Crear una clase Persona del cual tendrá métodos asignar una edad y nombre.
Una segunda clase, alumno, tendrá que heredar este contenido y a través
de esta clase poder asignar los datos de edad y nombre de los estudiantes.
*/

#include <iostream>
#include <string>
#include "Alumno.h"     //Se incluye codigo del archivo especificado.

int main()      //  Funcion principal.
{
    int edad{NULL},year_escolar{NULL};      //Variable para la edad, y ela ño acedemico.
    std::string nombre{NULL};       //Variable para el nombre en la varibale.

    std::cout<<"---------------------------\n";
    std::cout<<"Ingrese nombre del Alumno: ";
    getline(std::cin,nombre);           //Se ingresa el nombre en la varibale.
    std::cout<<"Ingrese la edad del Alumno: ";
    std::cin>>edad;         //Se ingresa la edad.
    std::cout<<"Ingrese el year en que cursa el Alumno: ";
    std::cin>>year_escolar;         //Se ingresa el año escolar en la varibale.

    std::cout<<"---------------------------\n";
    std::cout<<"-> Objeto Alumno CREADO por constructor de parametros.\n";    
    Alumno A1(edad,nombre,year_escolar);        //Se crea un objeto Alumno.

    std::cout<<"---------------------------\n";
    std::cout<<"-> Mostrando datos del alumno.\n";
    std::cout<<"---------------------------\n";
    A1.mostrar_datos_alumnos();                 //Se muestra los datos (propios y heredados) del objeto creado.

    return 0;       //Fin.
}