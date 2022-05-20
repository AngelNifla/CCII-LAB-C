#include "Objeto.h"     //Se incluye el codigo del archivo especificado.

Objeto::Objeto()        //Metodo Constructor.
{
    set_objeto("");
}

Objeto::Objeto(std::string _objeto,std::string _material,int _R,int _G,int _B)      //Metodo Constructor por parametro.
{
    set_objeto(_objeto);
    set_material(_material);
    set_R(_R);
    set_G(_G);
    set_B(_B);
}

void Objeto::Mostrar_datos_objeto()     //Metodo para mostrar los datos (heredados y propios) del objeto.
{
    std::cout<<"\t -> Objeto: "<<get_objeto();
    std::cout<<" -> Material: "<<get_material();
    std::cout<<" -> Color RGB: "<<get_R()<<"/"<<get_G()<<"/"<<get_B();
}

Objeto::~Objeto()       //Metodo Destructor.
{
}
