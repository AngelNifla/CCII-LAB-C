#include "OperacionBase.h"

int OperacionBase::get_operador_base()      //Metodo para mostrar el atributo operador.
{
    return operador;
}

void OperacionBase::set_operador_base(int _operador)        //Metodo para agregar valor al atributo operador.
{
    operador = operador*_operador;      //El valor que se reciba se multiplica con el valor actual del atributo.
}