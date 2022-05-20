#ifndef _CLASEMULTIMEDIA_H_
#define _CLASEMULTIMEDIA_H_

#include <iostream>

class ClaseMultimedia       //Se crea la Clase Multimedia.
{
private:
    std::string nombre;     //Atributo para el nombre.
public:
    ClaseMultimedia();      //Metodo constructor.
    ClaseMultimedia(std::string _name);     //Metodo constructor por parametro.
    ~ClaseMultimedia();     //Metodo Destructor.

    std::string get_nombre_Multimedia()     //Metodo para mostrar el atributo nombre.
    {
        return nombre;
    }
    void set_nombre_Multimedia(std::string _name)       //Metodo para agregar valor al atributo nombre.
    {
        nombre = _name;
    }
};

#endif