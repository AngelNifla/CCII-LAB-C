#ifndef _CIRCULO_H_
#define _CIRCULO_H_

#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio2\Elipse.h"     //Se incluye codigo del archivo especificado.

class Circulo:public Elipse     //Clase Circulo hereda atributos de la clase Elipse.
{
private:
    /* data */
public:
    Circulo(std::string _color,double _x,double _y,std::string  _name, double _radio_mayor, double _radio_menor);       //Metodo Constructor.
    ~Circulo();     //Metodo Destructor.
    void calcular_area();       //Metodo para calular el area.
    double get_area()       //metodo para mostrar el area.
    {
        return 3.14*get_radio_mayor();
    };
};

#endif