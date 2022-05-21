#include "Elipse.h"

//Metodo Constructor.
Elipse::Elipse(std::string _color,double _x,double _y,std::string  _name, double _radio_mayor, double _radio_menor):Forma(_color,_x,_y,_name)
{
    radio_mayor = _radio_mayor;
    radio_menor = _radio_menor;
}

void Elipse::calcular_area()        //Metodo para calcular el area.
{
    Forma::calcular_area();
    std::cout<<3.14*radio_mayor*radio_menor<<std::endl;
}
void Elipse::imprimir()     //Metodo para imprimir.
{
    Forma::imprimir();
    std::cout<<"\tRadio mayor: "<<radio_mayor<<std::endl;
    std::cout<<"\tRadio menor: "<<radio_menor<<std::endl;
}

Elipse::~Elipse()   //Metodo Destructor.
{
}