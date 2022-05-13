#include "Persona.h"    //Se incluye el codigo del archivo especificado.

Persona::Persona(int year,int mes,int dia)      //Constructor.
{
    year_naci = year;               //Colocando valores iniciales a los atributos.
    mes_naci = mes;             //Colocando valores iniciales a los atributos.
    dia_naci = dia;             //Colocando valores iniciales a los atributos.
}

int Persona::edad(int year,int mes,int dia)     //Funcion para calcular la edad.
{
    int edad = year-year_naci;      //Variable para la edad, restando el año actual y el de nacimiento.
    if (mes==mes_naci   && dia<dia_naci)        ///Si ambos meses son iguales y el dia actual es menor que el de nacimiento.
    {
        edad--;         //No cumplio la edad aun, y se resat en 1.
    }else if (mes<mes_naci)     //Si el mes actual es menor que el de cumpleaños
    {
        edad--;             //No cumplio la edad aun, y se resat en 1.
    }
    return edad;        //Al final se retorna la edad.
}

Persona::~Persona()         //Destructor.
{
}
