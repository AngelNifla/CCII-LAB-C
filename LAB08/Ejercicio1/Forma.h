#ifndef _FORMA_H_
#define _FORMA_H_

#include <iostream>
#include "Punto.h"      //Se incluye codigo del archivo especificado.

class Forma     //Clase Forma.
{
private:
    std::string color;      //Atributo para el color.
    Punto punto_centro;     //Atributo objeto para el punto centro.
    std::string nombre;     //Atributo para el nombre.
    
public:
    Forma(std::string _color,double _x,double _y,std::string _nombre);      //Metodo Constructor.
    ~Forma();       //Metodo Destructor.
    virtual void imprimir();        //Metodo para imprimir datos de la Forma.
    void mover_forma(double _x,double _y);      //Metodo para mover la forma cambiando las coordenadas.
    virtual void calcular_area();       //Metodo  para calcular el area.

    std::string get_color()     //Metodo para mostrar el color.
    {
        return color;
    }
    void set_color(std::string _color)      //Metodo para agregar valro al color.
    {
        color = _color;
    }
    virtual double get_area()       //Metodo para mostrar el area.
    {
        return NULL;
    };
};

#endif