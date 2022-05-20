#include "ClaseDisco.h"     //Se incluye el codigo del archivo especificado

ClaseDisco::ClaseDisco()            //Metodo Constructor.
{
    set_nombre_disco("");
    set_nombre_Multimedia("");
}

ClaseDisco::ClaseDisco(std::string _name, std::string _name_m)          //Metodo Constructor por parametro.
{
    set_nombre_disco(_name);
    set_nombre_Multimedia(_name_m);
}

void ClaseDisco::mostrar_datos_Disco()          //Metodo para mostrar los atributos (propios y heredados) del objeto.
{
    std::cout<<"\t-> Multimedia de tipo: "<<get_nombre_Multimedia();
    std::cout<<" -> Disco con nombre: "<<get_nombre_disco();
}

ClaseDisco::~ClaseDisco()           //Metodo Destructor.
{
}