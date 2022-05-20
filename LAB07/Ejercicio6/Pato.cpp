#include "Pato.h"       //Se incluye codigo del archivo especificado.

Pato::Pato()        //Metodo Constructor.
{
    set_nombre("");
    set_habitad("");
    set_color_plumas("");
    set_n_patas(0);
}

Pato::Pato(std::string _nombre,std::string _color_plumas,std::string _habitad, int _n_patas)        //Metodo Constructor por parametro.
{
    set_nombre(_nombre);
    set_habitad(_habitad);
    set_color_plumas(_color_plumas);
    set_n_patas(_n_patas);
}

void Pato::mostrar_pato()       //Metodo para mostrar los atributos (propios y heredados) del objeto.
{
    std::cout<<"\t-> Nombre de la Gallina: "<<get_nombre();
    std::cout<<" -> Habitad: "<<get_habitad();
    std::cout<<" -> Color de Plumas: "<<get_color_plumas();
    std::cout<<" -> Numero de Patas: "<<get_n_patas();
}

Pato::~Pato()       //Metodo Destructor.
{
}