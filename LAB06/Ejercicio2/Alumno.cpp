#include "Alumno.h"

Alumno::Alumno(std::string nombre,std::string apellido,int _CUI,int _nota1, int _nota2, int _nota3)     //Constructor por parametros.
{
    nombres = nombre;           //Se le da valores a los atributos.
    apellidos = apellido;           //Se le da valores a los atributos.
    CUI = _CUI;         //Se le da valores a los atributos.
    nota1 = _nota1;         //Se le da valores a los atributos.
    nota2 = _nota2;         //Se le da valores a los atributos.
    nota3 = _nota3;         //Se le da valores a los atributos. 
}

void Alumno::promedio()     //Funcio que da el promedio.
{
    float promedio =(nota1+nota2+nota3)/3;      //En una variable float se calcula el promedio.
    if (promedio<=10.5)     //Si el promedio en menor que 10.5
    {
        std::cout<<"El alumno DESAPROBO con un promedio de: "<<promedio;        //Se imprime que desaprobo.
    }else       //Si no, 
    {
        std::cout<<"El alumno APROBO con un promedio de: "<<promedio;           //Se imprime que aprobo.
    } 
}

Alumno::~Alumno()       //Destructor.
{
}