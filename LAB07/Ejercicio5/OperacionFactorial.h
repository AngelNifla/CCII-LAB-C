#ifndef _OPERACIONFACTORIAL_H_
#define _OPERACIONFACTORIAL_H_

#include "OperacionBase.h"      //Incluye codigo del archivo especificado.

class OperacionFactorial:public OperacionBase       //Clase OperacionFactorial que hereda atributos de la clase OperacionBase.
{
private:
    int operador_fac;       //Atributo para la operacion.
public:
    int get_operador_factorial();           //Metodo para mostrar el atributo operador factorial.
    void set_operador_factorial(int _operador);         //Metodo para agregar valor al atributo operador factorial.
    int devolver_factorial();           //Metodo para devolver el resultado de la operacion.
};

#endif