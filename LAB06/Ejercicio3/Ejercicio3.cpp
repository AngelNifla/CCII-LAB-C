/*
Implemente un programa con clases que lea la fecha
de nacimiento y la fecha de hoy y muestre por pantalla
el nombre y la edad de la persona.
*/

#include "Persona.h"        //Se incluye el codigo del archivo especificado.
#include <iostream>

int main()      //Funcion principal.
{
    int year{0},mes{0},dia{0};      //Variables para las fechas.
    std::cout<<"Ingrese el year de nacimiento de la persona: ";
    std::cin>>year;             //Se ingresa el year de nacimiento.
    std::cout<<"Ingrese el mes de nacimiento de la persona: ";
    std::cin>>mes;              //Se ingresa el mes de nacimiento.
    while (mes<1 || mes>12)     //Si el mes no se ingresa en el rango
    {
        std::cout<<"-> Mes fuera de rango, ingrese de nuevo: ";
        std::cin>>mes;          //Se sigue pidiendo el ingreso del mes.
    }
    std::cout<<"Ingrese el dia de nacimiento de la persona: ";
    std::cin>>dia;              //Se ingresa el dia de nacimiento.
    while (dia<1 || dia>31)     //Si el dia no se ingresa en el rango
    {
        std::cout<<"-> Dia fuera de rango, ingrese de nuevo: ";
        std::cin>>dia;          //Se sigue pidiendo el ingreso del dia.
    }
    std::cout<<std::endl;

    Persona P1(year,mes,dia);       //Se crea un objeto Persona.

    std::cout<<"Ingrese el year actual: ";
    std::cin>>year;             //Se ingresa el year actual.
    std::cout<<"Ingrese el mes actual: ";
    std::cin>>mes;              //Se ingresa el mes actual.
    while (mes<1 || mes>12)     //Si el mes no se ingresa en el rango
    {
        std::cout<<"-> Mes fuera de rango, ingrese de nuevo: ";
        std::cin>>mes;          //Se sigue pidiendo el ingreso del mes.
    }
    std::cout<<"Ingrese el dia actual: ";
    std::cin>>dia;              //Se ingresa el dia actual.
    while (dia<1 || dia>31)     //Si el dia no se ingresa en el rango
    {
        std::cout<<"-> Dia fuera de rango, ingrese de nuevo: ";
        std::cin>>dia;          //Se sigue pidiendo el ingreso del dia.
    }
    std::cout<<std::endl;

    std::cout<<"-> La edad de la Persona es: "<<P1.edad(year,mes,dia);          //Se imprime la edad actual por emdio de la funcion de la clase.

    return 0;
}