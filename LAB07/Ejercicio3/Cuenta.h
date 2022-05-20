#ifndef _CUENTA_H_
#define _CUENTA_H_

#include "ProductoBancario.h"       //Se incluye codigo del archivo especificado.

class Cuenta:public ProductoBancario        //Clase Cuenta hereda datos de Clase ProductoBancario.
{
private:
    /* Sin atributos de datos propios */
public:
    Cuenta();       //Metodo Constructor.
    ~Cuenta();      //Metodo Destructor.

    void Imprimir();        //Metodo Imprimir, imprime visibilidad de datos heredados.
};

#endif