#include "Rectangulo.h"     //Se incluye codigo del archivo especificado.

        //Metodo Constructor.
Rectangulo::Rectangulo(std::string _color,double _x,double _y,std::string  _name,int _lado_menor,int _lado_mayor): Forma(_color, _x, _y,_name)
{
    lado_mayor = _lado_mayor;
    lado_menor = _lado_menor;
}

void Rectangulo::imprimir()     //Metodo para imprimir los datos de la forma.
{
    Forma::imprimir();
    std::cout<<"\tLado Mayor: "<<lado_mayor<<std::endl;
    std::cout<<"\tLado Menor: "<<lado_menor<<std::endl;
}

void Rectangulo::calcular_area()        //Metodo para calcular el area de la forma.
{
    Forma::calcular_area();
    std::cout<<lado_mayor*lado_menor<<std::endl;
}

void Rectangulo::calcular_perimetro()       //Metodo para calcular el perimetro.
{
    std::cout<<"\tPerimetro: "<<2*(lado_mayor+lado_menor)<<std::endl;
}

void Rectangulo::cambiar_size(double _factor)       //Metodo para cambiar el tamaño de la forma.
{
    lado_mayor = lado_mayor*_factor;
    lado_menor = lado_menor*_factor;
}

Rectangulo::~Rectangulo()       //Metodo Destructor.
{
}