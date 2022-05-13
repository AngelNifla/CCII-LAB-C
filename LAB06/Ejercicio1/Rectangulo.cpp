#include "Rectangulo.h"
Rectangulo::Rectangulo(int _ancho, int _largo)          //Constructor por parametro.
{
    ancho = _ancho;     //Se ingresa valores al atributo ancho.
    largo = _largo;     //Se ingresa valores al atributo largo.
}

int Rectangulo::area()                      //Funcion para retornar el area.
{
    return ancho*largo;             //Se retorna el ancho.
}

int Rectangulo::perimetro()                     //Funcion para retornar el perimetro.
{
    return 2*(ancho+largo);             //Se retorna el largo.
}

Rectangulo::~Rectangulo()                   //Destructor.
{
}