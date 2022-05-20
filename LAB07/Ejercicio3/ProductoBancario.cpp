#include "ProductoBancario.h"       //Se incluye codigo del archivo especificado.

ProductoBancario::ProductoBancario()            //Metodo Constructor.
{
    cliente = "";
    saldo = NULL;
    numProductos = NULL;
}

void ProductoBancario::Imprimir()       //Metodo Imprimir, imprime visibilidad de datos.
{
    std::cout<<"---------------------------------------\n";
    std::cout<<"-> CLASE PRODUCTO BANCARIO:\n -> DATOS:\n";
    std::cout<<"\tCliente: /DATO NO VISIBLE PARA OTRA CLASE/\n";
    std::cout<<"\tSaldo: /DATO VISIBLE PARA SU CLASE HEREDERA/\n";
    std::cout<<"\tNumero de Productos: /DATO VISIBLE/\n";
}

ProductoBancario::~ProductoBancario()           //Metodo Destructor.
{
}