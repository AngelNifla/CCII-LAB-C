#ifndef _GALLINA_H_
#define _GALLINA_H_

#include "Ave.h"    //Se incluye codigo del archivo especificado.

class Gallina:public Ave    //Clase Gallina heredando atributos de la Clase Ave.
{
private:
    std::string nombre;         //Atributo para el nombre.
public:
    Gallina();      //Metodo Constructor.
    Gallina(std::string _nombre,std::string _color_plumas,std::string _habitad, int _n_patas);      //Metodo Constructor por parametro.
    ~Gallina();     //Metodo Destructor.

    std::string get_nombre()        //Metodo para mostrar el atributo nombre.
    {
        return nombre;
    }
    void set_nombre(std::string _nombre)        //Metodo para agregar valor al atributo nombre.
    {
        nombre = _nombre;
    }

    void mostrar_gallina();     //Metodo para mostrar los atributo(propios y heredados) del objeto.
};

#endif