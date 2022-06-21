/*//////////////////////////ENUNCIADO/////////////////////////////
Implementar un programa que maneje un arreglo de estructuras
para almacenar los nombres y las fechas de cumple de sus
n Compa. Y debe mostrarse por pantalla quienes cumplen
años en este mes.
*/

/*//////////////////////////CODIGO/////////////////////////////*/

#include <iostream>             //Se incluye la libreria especificada.
#include <vector>               //Se incluye la libreria especificada.
#include <string.h>               //Se incluye la libreria especificada.

struct Alumno       //Struct Alumno.
{
    std::string name;       //Atributo para el nombre.
    int dia;        //Atributo para el dia de cumple.
    int mes;        //Atributo para el mes de cumple.
    int year;       //Atributo para el year de cumple.
};


int main()          //Funcion principal.
{
    std::vector<Alumno> Compa;          //Vector de structuras.
    int num_alumnos{},mes_actual{};         //Variables para los datos.

    std::cout<<"Ingrese numero de alumnos:  ";
    std::cin>>num_alumnos;      //Se ingresa el numero de alumnos.
    std::cin.ignore();      //Se descarta el salto de linea.

    std::string name{};                 //Variable para el nombre.
    int dia{},mes{},year{};             //Variables para los datos.
    for (int i = 0; i < num_alumnos; i++)
    {
        std::cout<<"Ingrese Datos del Alumno "<<i+1<<":"<<std::endl;     //Se ingresa los datos.
        std::cout<<"\tNombre: ";
        std::getline(std::cin,name);
        std::cout<<"\tDia de Cumple: ";
        std::cin>>dia;
        std::cout<<"\tMes de Cumple: ";
        std::cin>>mes;
        std::cout<<"\tYear de Cumple: ";
        std::cin>>year;
        std::cin.ignore();      //Se descarta el salto de linea.

        Compa.push_back(Alumno{name,dia,mes,year});     //Se ingresa al vector.
    }
    std::cout<<"Ingrese mes Actual:  ";
    std::cin>>mes_actual;       //Se ingres el mes actual.

    for (int i = 0; i < num_alumnos; i++)       //Se muestra los datos.
    {
        if (Compa[i].mes == mes_actual)     //Si el mes coincide.
        {
            std::cout<<"-> "<<Compa[i].name<<" Cumple years este mes.\n";
        }
    }
    return 0;
}

/*//////////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB13> .\\a
Ingrese numero de alumnos:  3
Ingrese Datos del Alumno 1:
        Nombre: Alex Arias
        Dia de Cumple: 15
        Mes de Cumple: 04
        Year de Cumple: 2000
Ingrese Datos del Alumno 2:
        Nombre: Paola Suni
        Dia de Cumple: 02
        Mes de Cumple: 06
        Year de Cumple: 2001
Ingrese Datos del Alumno 3:
        Nombre: Jose Sanchez
        Dia de Cumple: 29
        Mes de Cumple: 03
        Year de Cumple: 2000
Ingrese mes Actual:  06
-> Paola Suni Cumple years este mes.
PS E:\C++\2022\CCII-LAB-C\LAB13>   

*/
