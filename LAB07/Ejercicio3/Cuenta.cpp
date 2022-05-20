#include "Cuenta.h"

Cuenta::Cuenta()            //Metodo Constructor.
{
    saldo = 0;
    numProductos = 0;
}


void Cuenta::Imprimir()     //Metodo Imprimir, imprime visibilidad de datos heredados.
{
    std::cout<<"---------------------------------------\n";
    std::cout<<"-> CLASE CUENTA:\n\tHEREDA DATOS DE CLASE PRODUCTOBANCARIO\n";
    std::cout<<"-> VISIVILIDAD DE DATOS:\n";
    std::cout<<"\tCliente: /DATO NO HEREDADO/\n";
    std::cout<<"\tSaldo: /DATO VISIBLE PARA SU CLASE HEREDERA/\n";
    std::cout<<"\tNumero de Productos: /DATO VISIBLE/\n";
}

Cuenta::~Cuenta()           //Metodo Destructor.
{
}