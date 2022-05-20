#include "OperacionFactorial.h"

int OperacionFactorial::get_operador_factorial()        //Metodo para mostrar el atributo operador factorial.
{
    return operador_fac;
}

void OperacionFactorial::set_operador_factorial(int _operador)      //Metodo para agregar valor al atributo operador factorial.
{
    operador_fac = _operador;
}

int OperacionFactorial::devolver_factorial()        //Metodo para devolver el resultado de la operacion.
{
    int respuesta{NULL};        //Variable para almacenar la respuesta.
    for (int i = 2; i <= get_operador_factorial(); i++)     //Metodo para el factorial de un numero.
    {
        set_operador_base(i);       //Se envia el numero a multiplicar.
    }
    respuesta = get_operador_base();        //Se almacena la multiplicacion total de la operacion base.
    set_operador_base(1);       //Se regresa el valor 1 al objeto base.
    return respuesta;       //Se retorna la variable respuesta.
}