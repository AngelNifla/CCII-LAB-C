/*
Dada la siguiente jerarquía de herencia, indica la visibilidad
de los atributos de la clase ProductoBancario en las clases
CuentaJoven e Hipoteca.
*/

#include <iostream>
#include "CuentaJoven.h"        //Se incluye codigo del archivo especificado.
#include "Hipoteca.h"       //Se incluye codigo del archivo especificado.

int main()      //Funcion principal.
{
    /*ProductoBancario PB;      //Se crea clase ProductoBancario.
    PB.Imprimir();      //Se imprime la visibilidad de datos de la clase ProductoBancario desde esta clase.
    Cuenta C;       //Se crea clase Cuenta.
    C.Imprimir();       //Se imprime la visibilidad de datos de la clase ProductoBancario desde esta clase.
    Prestamo P;     //Se crea clase Prestamo.
    P.Imprimir();*/     //Se imprime la visibilidad de datos de la clase ProductoBancario desde esta clase.
    CuentaJoven CJ;     //Se crea clase CuentaJoven.
    CJ.Imprimir();      //Se imprime la visibilidad de datos de la clase ProductoBancario desde esta clase.
    Hipoteca H;     //Se crea clase Hipoteca.
    H.Imprimir();       //Se imprime la visibilidad de datos de la clase ProductoBancario desde esta clase.
    return 0;
}