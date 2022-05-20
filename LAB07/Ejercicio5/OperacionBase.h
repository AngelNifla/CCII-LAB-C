#ifndef _OPERACIONBASE_H_
#define _OPERACIONBASE_H_

#include <iostream>

class OperacionBase     //Clase OperacionBase
{
protected:
    int operador{1};    //Atributo operador(hara como un contador de multiplicaion de numeros, por eso inicia con el valor 1).
public:

    int get_operador_base();        //Metodo para mostrar el atributo operador.
    void set_operador_base(int _operador);      //Metodo para agregar valor al atributo operador.
};
    
#endif