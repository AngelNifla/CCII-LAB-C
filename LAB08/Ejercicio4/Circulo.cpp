#include "Circulo.h"        //Se incluye codigo del archivo especificado.

//Metodo Constructor.
Circulo::Circulo(std::string _color,double _x,double _y,std::string  _name, double _radio_mayor, double _radio_menor):Elipse( _color, _x, _y, _name, _radio_mayor, _radio_menor)
{
}
void Circulo::calcular_area()       //Metodo para calular el area.
{
    Forma::calcular_area();
    std::cout<<3.14*get_radio_mayor()<<std::endl;
}

Circulo::~Circulo()     //Metodo Destructor.
{
}

