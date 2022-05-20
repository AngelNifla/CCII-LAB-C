#ifndef _PERSONA_H_
#define _PERSONA_H_

#include <iostream>

class Persona           //Se Crea la clase Persona.
{
private:
    std::string nombre;     //Atributo para el nombre.
    int edad;       //Atributo para la edad.
public:
    Persona();          //Metodo Constructor.
    Persona(std::string _name, int _edad);          //Metodo Constructor por parametro.
    ~Persona();         //Metodo Destructor.

    std::string get_nombre()        //Metodo para mostrar el nombre.
    {
        return nombre;      //Se retorna el nombre.
    }
    int get_edad()      //Metodo para mostrar la edad.
    {
        return edad;        //Se retorna la edad.
    }

    void set_nombre(std::string _name)      //Metodo para agregar valor al atributo nombre.
    {
        nombre = _name;     //Se agrega valores al atributo.
    }
    void set_edad(int _edad)        //Metodo para agregar valor al atributo edad.
    {
        edad = _edad;       //Se agrega valores al atributo.
    }
};

#endif