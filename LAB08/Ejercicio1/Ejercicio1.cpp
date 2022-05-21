/*
Defina una clase Forma que tenga los siguientes miembros de datos:
    - Color
    - Coordenada del centro de la forma (objeto Punto)
    - Nombre de la forma (char *)
Y, al menos, las siguientes funciones miembro:
    - Imprimir
    - Obtener y cambiar el color
    - Mover la forma (o sea, su centro)
Defina una clase derivada Rectángulo que tenga los siguientes miembros como datos:
    - Lado menor.
    - Lado mayor.
Y, al menos, las siguientes funciones miembro:
    - Imprimir. Debe imprimir qué se trata de un rectángulo mostrando su nombre,
        color, centro y lado. Debería usarse la función Imprimir de la clase base
        para realizar parte de este trabajo.
    - Calcular el área (lado menor * lado mayor).
    - Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
    - Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala.
    Así, por ejemplo, si el factor vale 2, el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.
Realice un programa que pruebe el funcionamiento de estas clases. Debe crear objetos y comprobar el correcto
funcionamiento de las funciones miembro.
*/

#include <iostream>
#include "Rectangulo.h"     //Se incluye codigo del archivo especificado.

int main()      //Funcion principal.
{
    Forma F("Rojo",0,0,"Cuadrado");     //Se crea los objetos.
    std::cout<<"------------------------------------\n";
    std::cout<<"-> Datos de la Forma:\n";
    F.imprimir();       //Se imprime sus datos.
    std::cout<<"-> Cambiando color de la Forma...\n";
    F.set_color("Verde");       //Se cambia el color.
    std::cout<<"-> Moviendo Forma...\n";
    F.mover_forma(5,1);     //Se mueve.
    std::cout<<"-> Nuevos datos de la Forma:\n";
    F.imprimir();       //Se imprime sus datos.

    Rectangulo R("Azul",3,3,"Rectangulo",5,10);     //Se crea los objetos.
    std::cout<<"------------------------------------\n";
    std::cout<<"-> Datos de la Forma:\n";
    R.imprimir();       //Se imprime sus datos.
    std::cout<<"-> Calculando area de la forma...\n";
    R.calcular_area();          //Se calcula el area.
    std::cout<<"-> Calculando area de la perimetro...\n";
    R.calcular_perimetro();         //Se calcula el perimetro.
    std::cout<<"-> Cambiando size de la forma...\n";
    R.cambiar_size(2);      //Se cambia el tamaño.
    std::cout<<"-> Nuevos datos de la Forma:\n";
    R.imprimir();       //Se imprime sus datos.

    return 0;
}