#ifndef _RECTANGULO_H_
#define _RECTANGULO_H_

#include "Forma.h"      //Se incluye codigo del archivo especificado.

class Rectangulo: public Forma      //Clase Rectangulo hereda atributos de la clase Forma.
{
private:
    int lado_menor;         //Atributo para los lados.
    int lado_mayor;         //Atributo para los lados.
public:
    Rectangulo(std::string _color,double _x,double _y,std::string  _name,int _lado_menor,int _lado_mayor);      //Metodo Constructor.
    ~Rectangulo();      //Metodo Destructor.

    void imprimir();        //Metodo para imprimir los datos de la forma.
    void calcular_area();       //Metodo para calcular el area de la forma.
    void calcular_perimetro();      //Metodo para calcular el perimetro.
    void cambiar_size(double _factor);      //Metodo para cambiar el tamaño de la forma.

    double get_area()       //Metodo
    {
        return lado_mayor*lado_menor;
    };
};

#endif