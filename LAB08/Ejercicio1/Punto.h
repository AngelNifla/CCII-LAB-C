#ifndef _PUNTO_H_
#define _PUNTO_H_

#include <iostream>

class Punto     //Clase Punto.
{
private:
    double centro_x;        //Atributo para la coordenada x.
    double centro_y;        //Atributo para la coordenada y.
public:
    Punto();        //Metodo Constructor.
    ~Punto();       //Metodo Destructor.

    double get_x()      //Metodo para mostrar atributo x.
    {
        return centro_x;
    }
    double get_y()      //Metodo para mostrar atributo y.
    {
        return centro_y;
    }
    void set_x(double _x)       //Metodo para agregar valor al atributo x.
    {
        centro_x = _x;
    }
    void set_y(double _y)       //Metodo para agregar valor al atributo y.
    {
        centro_y = _y;
    }    

};

#endif