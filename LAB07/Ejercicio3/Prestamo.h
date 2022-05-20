#ifndef _PRESTAMO_H_
#define _PRESTAMO_H_

#include "ProductoBancario.h"       //Se incluye codigo del archivo especificado.

class Prestamo : protected ProductoBancario     //Clase Prestamo hereda datos de Clase ProductoBancario.
{
private:
    /* Sin atributos de datos propios */
public:
    Prestamo();     //Metodo Constructor.
    ~Prestamo();        //Metodo Destructor.

    void Imprimir();        //Metodo Imprimir, imprime visibilidad de datos heredados.
};

#endif