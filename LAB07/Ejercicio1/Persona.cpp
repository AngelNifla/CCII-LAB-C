# include "Persona.h"       //Se incluye codigo del archivo especificado.

Persona::Persona()      //Ejecucion del Metodo Constructor.
{
    nombre = "";
    edad = NULL;
}

Persona::Persona(std::string _name, int _edad)      //Ejecucion del Metodo Constructor por parametros.
{
    nombre = _name;
    edad = _edad;
}

Persona::~Persona()     //Ejecucion del Metodo Destructor.
{
}