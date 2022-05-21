#ifndef _ELIPSE_H_
#define _ELIPSE_H_

#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio1\Forma.h"      //Se incluye codigo del archivo especificado.

class Elipse: public Forma      //Clase Elipse hereda atributos de la clase Forma.
{
private:
    double radio_mayor;     //Atributo para el radio.
    double radio_menor;     //Atributo para el radio.
public:
    Elipse(std::string _color,double _x,double _y,std::string  _name, double _radio_mayor, double _radio_menor);    //Metodo Constructor.
    ~Elipse();  //Metodo Destructor.

    virtual void calcular_area();       //Metodo para calcular el area.
    void imprimir();        //Metodo para imprimir.
    double get_radio_mayor()        //metodo para mostrar el radio.
    {
        return radio_mayor;
    };
    virtual double get_area()       //metodo para mostrar el area.
    {
        return 3.14*radio_mayor*radio_menor;
    };
};

#endif