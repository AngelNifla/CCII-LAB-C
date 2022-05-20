#include "Alumno.h"     //Se incluye codigo del archivo especificado.

Alumno::Alumno()        //Metodo Constructor.
{
    set_year_escolar(NULL);
    set_nombre("");
    set_edad(NULL);
}

Alumno::Alumno(int _edad,std::string _name,int _year_escolar)       //Metodo Constructor por parametro.
{
    set_edad(_edad);
    set_nombre(_name);
    set_year_escolar(_year_escolar);
}

void Alumno::mostrar_datos_alumnos()        //Metodo para mostrar datos (propios y heredados) del objeto Alumno.
{
    std::cout<<"\t-> Alumno: "<<get_nombre()<<" -> Edad: "<<get_edad()
    <<" -> Year Academico: "<<get_year_escolar()<<std::endl;
}

Alumno::~Alumno()       //Metodo Destructor.
{
}
