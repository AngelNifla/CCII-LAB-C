#ifndef _CUADRADO_H_
#define _CUADRADO_H_

#include "E:\C++\2022\CCII-LAB-C\LAB08\Ejercicio1\Rectangulo.h"     //Se incluye codigo del archivo especificado.

class Cuadrado:public Rectangulo        //Clase Cuadrado hereda atributos de la clase Rectangulo .
{
private:
    /* data */
public:
    Cuadrado(std::string _color,double _x,double _y,std::string  _name,int _lado_menor,int _lado_mayor);        //Metodo Constructor.
    ~Cuadrado();        //Metodo Constructor.
};

#endif