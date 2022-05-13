/*
Se conoce de un alumno de la Universidad Nacional de San Agustín: 
CUI, nombre completo y tres notas parciales (nota1, nota2, nota3).
El programa con clases debe imprimir: CUI, el primer nombre, el
promedio de las tres notas e indique con un mensaje si el alumno
aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.
*/

#include "Alumno.h"     //Se incluye el codigo del archivo especificado.
#include <string>

int main()              //Funcion principal.
{
    std::string nombre,apellido;        //Variable para los datos.
    int CUI,nota1,nota2,nota3;          //Variable para los datos.

    std::cout<<"Ingrese los nombres del alumno: ";
    getline(std::cin,nombre);           //Se ingresa los nombres.
    std::cout<<"Ingrese los apellidos del alumno: ";
    getline(std::cin,apellido);         //Se ingresa los apellidos.
    std::cout<<"Ingrese el CUI del alumno: ";
    std::cin>>CUI;                  //Se ingresa los datos.
    std::cout<<"Ingrese la Nota 1 del alumno: ";
    std::cin>>nota1;                    //Se ingresa los datos.
    std::cout<<"Ingrese la Nota 2 del alumno: ";
    std::cin>>nota2;                    //Se ingresa los datos.
    std::cout<<"Ingrese la Nota 3 del alumno: ";
    std::cin>>nota3;                    //Se ingresa los datos.

    Alumno A1(nombre,apellido,CUI,nota1,nota2,nota3);           //Se construye el objeto Alumno.

    std::cout<<"-> El primer nombre del alumno es: "<<A1.get_primer_nombre()<<std::endl;        //Se imprime el nombre llamando a la funcion.
    std::cout<<"-> El CUI del alumno es: "<<A1.get_CUI()<<std::endl;        //Se imprime el cui llamando a la funcion.
    std::cout<<"-> ";
    A1.promedio();      //Se llama a la funcion.

    return 0;
}