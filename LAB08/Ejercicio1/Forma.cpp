#include "Forma.h"              //Se incluye codigo del archivo especificado.

Forma::Forma(std::string _color,double _x,double _y,std::string _nombre)        //Metodo Constructor.
{
    color = _color;
    punto_centro.set_x(_x);
    punto_centro.set_y(_y);
    nombre = _nombre; 
}

void Forma::imprimir()      //Metodo para imprimir datos de la Forma.
{
    std::cout<<"\tNombre: "<<nombre<<std::endl;
    std::cout<<"\tColor: "<<color<<std::endl;
    std::cout<<"\tCentro: ("<<punto_centro.get_x()<<","<<punto_centro.get_y()<<")\n";
}
void Forma::mover_forma(double _x,double _y)        //Metodo para mover la forma cambiando las coordenadas.
{
    punto_centro.set_x(_x);
    punto_centro.set_y(_y);
}

void Forma::calcular_area()     //Metodo  para calcular el area.
{
    std::cout<<"\tTiene un Area de: ";
}

Forma::~Forma()     //Metodo Destructor.
{
}