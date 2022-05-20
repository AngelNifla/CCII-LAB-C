#include "ClaseMultimedia.h"        //Se incluye el codigo del archivo especificado

ClaseMultimedia::ClaseMultimedia()      //Metodo Constructor.
{
    set_nombre_Multimedia("");
}

ClaseMultimedia::ClaseMultimedia(std::string _name)     //Metodo Constructor por parametro.
{
    set_nombre_Multimedia(_name);
}

ClaseMultimedia::~ClaseMultimedia()     //Metodo Destructor.
{
}
