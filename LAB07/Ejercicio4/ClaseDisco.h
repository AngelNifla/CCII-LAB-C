#ifndef _CLASEDISCO_H_
#define _CLASEDISCO_H_

#include "ClaseMultimedia.h"        //Se incluye el codigo del archivo especificado.

class ClaseDisco: public ClaseMultimedia        //Se crea la clase Disco y hereda atributos y metodos de la clase Multimedia.
{
private:
    std::string nombre;     //Atributo para el nombre.
public:
    ClaseDisco();           //Metodo Constructor.
    ClaseDisco(std::string _name, std::string _name_m);         //Metodo Constructor por parametro.
    ~ClaseDisco();          //Metodo Destructor.

    std::string get_nombre_disco()      //Metodo para mostrar el atributo nombre.
    {
        return nombre;
    }
    void set_nombre_disco(std::string _name)        //Metodo para agregar valor al atributo nombre.
    {
        nombre = _name;
    }

    void mostrar_datos_Disco();     //Metodo para mostrar los atributos (propios y heredados) del objeto.
};

#endif