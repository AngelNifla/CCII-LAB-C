/*
Implemente un programa con clases que calcule el área de
un rectángulo y perímetro.
*/

#include <iostream>
#include "Rectangulo.h"

int main()                  //Funcion principal.
{
    int ancho{0}, largo{0};     //Variables para obtener el ancho y largo del rectangulo.

    std::cout<<"Ingrese la medida del Ancho: ";
    std::cin>>ancho;            //Se agrega valores a las variables.
    std::cout<<"Ingrese la medida del Largo: ";
    std::cin>>largo;            //Se agrega valores a las variables.
    std::cout<<std::endl;

    Rectangulo R1(ancho,largo);             //Se crea un objeto Rectangulo con los valroes ingresados.

    std::cout<<"-> El area del rectangulo es : "<<R1.area()<<std::endl;     //Se solicita el area del rectangulo con su funcion.
    std::cout<<"-> El perimetro del rectangulo es : "<<R1.perimetro()<<std::endl;       //Se solicita el perimetro del rectangulo con su funcion.

    return 0;
}