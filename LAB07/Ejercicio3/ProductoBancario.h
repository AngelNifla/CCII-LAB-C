#ifndef _PRODUCTOBANCARIO_H_
#define _PRODUCTOBANCARIO_H_

#include <iostream>

class ProductoBancario      //Clase ProductoBancario.
{
private:
    std::string cliente;        //Atributo Privado.
protected:
    double saldo;       //Atributo Protegido.
public:
    int numProductos;       //Atributo Publico.

    ProductoBancario();     //Metodo Constructor.
    ~ProductoBancario();        //Metodo Destructor.

    void Imprimir();        //Metodo Imprimir, imprime visibilidad de datos.
};

#endif