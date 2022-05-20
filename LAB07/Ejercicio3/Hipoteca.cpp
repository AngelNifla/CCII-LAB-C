#include "Hipoteca.h"       //Se incluye codigo del archivo especificado.

Hipoteca::Hipoteca()            //Metodo Constructor.
{
    saldo = 0;
    numProductos = 0;
}

void Hipoteca::Imprimir()           //Metodo Imprimir, imprime visibilidad de datos heredados.
{
    std::cout<<"---------------------------------------\n";
    std::cout<<"-> CLASE HIPOTECA:\n\tHEREDA DATOS DE CLASE PRESTAMO QUE SON DE CLASE PRODUCTOBANCARIO\n";
    std::cout<<"-> VISIVILIDAD DE DATOS:\n";
    std::cout<<"\tCliente: /DATO NO HEREDADO/\n";
    std::cout<<"\tSaldo: /DATO VISIBLE PARA SU CLASE HEREDERA/\n";
    std::cout<<"\tNumero de Productos: /DATO VISIBLE PARA SU CLASE HEREDERA/\n";
}

Hipoteca::~Hipoteca()           //Metodo Destructor.
{
}
