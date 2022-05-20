#ifndef _HIPOTECA_H_
#define _HIPOTECA_H_

#include "Prestamo.h"       //Se incluye codigo del archivo especificado.

class Hipoteca:protected Prestamo       //Clase Hipoteca hereda datos de Clase Prestamo.
{
private:
    /* Sin atributos de datos propios*/
public:
    Hipoteca();         //Metodo Constructor.
    ~Hipoteca();            //Metodo Destructor.

    void Imprimir();        //Metodo Imprimir, imprime visibilidad de datos heredados.
};

#endif