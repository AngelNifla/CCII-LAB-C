#include "Ave.h"           //Se incluye codigo del archivo especificado.

Ave::Ave()          //Metodo Constructor.
{
    set_habitad("");
    set_color_plumas("");
    set_n_patas(0);
}

Ave::Ave(std::string _color_plumas,std::string _habitad, int _n_patas)          //Metodo Constructor por parametro.
{
    set_habitad(_habitad);
    set_color_plumas(_color_plumas);
    set_n_patas(_n_patas);
}

Ave::~Ave()         //Metodo Desstructor.
{
}