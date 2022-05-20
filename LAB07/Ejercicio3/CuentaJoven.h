#ifndef _CUENTAJOVEN_H_
#define _CUENTAJOVEN_H_

#include "Cuenta.h"     //Se incluye codigo del archivo especificado.

class CuentaJoven:private Cuenta        //Clase CuentaJoven hereda datos de Cuenta.
{
private:
    /* Sin atributos de datos propios*/
public:
    CuentaJoven();              //Metodo Constructor.
    ~CuentaJoven();             //Metodo Destructor.

    void Imprimir();        //Metodo Imprimir, imprime visibilidad de datos heredados.
};

#endif