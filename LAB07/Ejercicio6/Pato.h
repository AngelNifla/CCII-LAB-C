#ifndef _PATO_H_
#define _PATO_H_

#include "Ave.h"        //Se incluye codigo del archivo especificado.

class Pato:public Ave       //Clase Pato heredando atributos de la Clase Ave.
{
private:
    std::string nombre;     //Atributo para el nombre.
public:
    Pato();     //Metodo Constructor.
    Pato(std::string _nombre,std::string _color_plumas,std::string _habitad, int _n_patas);     //Metodo Constructor por parametro.
    ~Pato();        //Metodo Destructor.

    std::string get_nombre()        //Metodo para mostrar el atributo nombre.
    {
        return nombre;
    }
    void set_nombre(std::string _nombre)        //Metodo para agregar valor al atributo nombre.
    {
        nombre = _nombre;
    }

    void mostrar_pato();        //Metodo para mostrar los atributos (propios y heredados) del objeto.
};


#endif