#include "Color.h"      //Se incluye el codigo del archivo especificado.

Color::Color()      //Metodo Constructor.
{
    set_R(NULL);
    set_G(NULL);
    set_B(NULL);
}

Color::Color(int _R,int _G,int _B)      //Metodo Constructor por parametro.
{
    set_R(_R);
    set_G(_G);
    set_B(_B);
}

Color::~Color()     //Metodo Desstructor.
{
}