/*
Crear una clase Color que mantenga 3 valores (RGB). Una segunda clase Material,
tendrá como información una variable de texto que describa algún material
(Ejemplo: madera, vidrio, platico, etc.) Una tercera clase, Objetos, deberá de
heredar contenido de ambas clases con la finalidad de describir diferentes
objetos en cuanto a color y el material. (Ejemplo: mesa de color café y
material de plástico)
*/

#include <string>
#include "Objeto.h"     //Se incluye el codigo del archivo especificado.

int main()      //Funcion principal.
{
    int R{0},G{0},B{0};
    std::string material{NULL},objeto{NULL};

    std::cout<<"---------------------------\n";
    std::cout<<"Ingrese nombre del Objeto: ";
    getline(std::cin,objeto);           //Se ingresa el nombre en la varibale.
    std::cout<<"Ingrese la edad del Material del Objeto: ";
    getline(std::cin,material);        //Se ingresa el material.
    std::cout<<"Ingrese el color en valores RGB:\n";
    std::cout<<"Ingrese el valor R: ";
    std::cin>>R;        //Se ingresa el numerod e color.
    std::cout<<"Ingrese el valor G: ";
    std::cin>>G;        //Se ingresa el numerod e color.
    std::cout<<"Ingrese el valor B: ";
    std::cin>>B;        //Se ingresa el numerod e color.

    std::cout<<"---------------------------\n";
    std::cout<<"-> Objeto CREADO por constructor de parametros.\n";    
    Objeto O1(objeto,material,R,G,B);        //Se crea un objeto Objeto.

    std::cout<<"---------------------------\n";
    std::cout<<"-> Mostrando datos del objeto.\n";
    std::cout<<"---------------------------\n";
    O1.Mostrar_datos_objeto();                 //Se muestra los datos (propios y heredados) del objeto creado.

    return 0;
}