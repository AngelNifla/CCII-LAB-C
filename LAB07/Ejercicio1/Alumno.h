#ifndef _ALUMNO_H_
#define _ALUMNO_H_

#include "Persona.h"    //Se incluye codigo del archivo especificado.

class Alumno:public Persona     //Se crea la clase Alumno y hereda atributos y metodos de la clase Persona.
{
private:
    int year_escolar;   //Atributo para el año academico.
public:
    Alumno();       //Metodo Constructor.
    Alumno(int _edad,std::string _name,int _year_escolar);      //Metodo Constructor por parametro.
    ~Alumno();      //Metodo Desstructor.

    void set_year_escolar(int _year)        //Metodo para agregar valor al atributo año academico.
    {
        year_escolar = _year;
    }
    int get_year_escolar()      //Metodo para mostrar el año acedemico.
    {
        return year_escolar;
    }

    void mostrar_datos_alumnos();       //Metodo para mostrar los atributos (propios y heredados)del objeto.
};

#endif