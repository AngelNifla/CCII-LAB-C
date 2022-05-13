#ifndef __PERSONA_H__
#define __PERSONA_H__

class Persona       //Clase persona.
{
private:
    int year_naci,mes_naci,dia_naci;        //Atributos de la fecha de nacimiento para el objeto.
public:
    Persona(int year,int mes,int dia);          ///Constructor.
    ~Persona();         //Destructor.

    int edad(int year,int mes,int dia);         //Funcion para calcular la edad.
};

#endif