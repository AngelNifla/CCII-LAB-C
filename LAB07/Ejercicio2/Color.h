#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

class Color     //Clase Color
{
private:
    int R;      //Atributos para el color.
    int G;      //Atributos para el color.
    int B;      //Atributos para el color.
public:
    Color();        //Metodo Constructor.
    Color(int _R,int _G,int _B);        //Metodo Constructor por parametro.
    ~Color();       //Metodo Destructor.

    int get_R()     //Metodo para retornar el atributo R.
    {
        return R;
    }
    int get_G()     //Metodo para retornar el atributo G.
    {
        return G;
    }
    int get_B()     //Metodo para retornar el atributo B.
    {
        return B;
    }
    void set_R(int _R)      //Metodo para agregar valores al atributo R.
    {
        R = _R;
    }
    void set_G(int _G)      //Metodo para agregar valores al atributo G.
    {
        G = _G;
    }
    void set_B(int _B)      //Metodo para agregar valores al atributo B.
    {
        B = _B;
    }
};

#endif