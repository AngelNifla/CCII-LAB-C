#include "CuentaJoven.h"        //Se incluye codigo del archivo especificado.

CuentaJoven::CuentaJoven()          //Metodo Constructor.
{
    saldo = 0;
    numProductos = 0;
}

void CuentaJoven::Imprimir()        //Metodo Imprimir, imprime visibilidad de datos heredados.
{
    std::cout<<"---------------------------------------\n";
    std::cout<<"-> CLASE CUENTAJOVEN:\n\tHEREDA DATOS DE CLASE CUENTA QUE SON DE CLASE PRODUCTOBANCARIO\n";
    std::cout<<"-> VISIVILIDAD DE DATOS:\n";
    std::cout<<"\tCliente: /DATO NO HEREDADO/\n";
    std::cout<<"\tSaldo: /DATO NO VISIBLE/\n";
    std::cout<<"\tNumero de Productos: /DATO NO VISIBLE/\n";

}

CuentaJoven::~CuentaJoven()         //Metodo Destructor.
{
}