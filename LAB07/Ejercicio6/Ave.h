#ifndef _AVE_H_
#define _AVE_H_

#include <iostream>

class Ave       //Clase Ave.
{
private:
    std::string color_plumas;       //Atributo para el color de plumas.
    std::string habitad;        //Atributo para el habitad.
    int n_patas;        //Atributo para el numero de patas XD.
public:
    Ave();      //Metodo Constructor .
    Ave(std::string _color_plumas,std::string _habitad, int _n_patas);      //Metodo Constructor por parametro.
    ~Ave();     //Metodo Desstructor.

    std::string get_color_plumas()  //Metodo para mostrar el atributo color de plumas.
    {
        return color_plumas;
    }
    std::string get_habitad()   //Metodo para mostrar el atributo habitad.
    {
        return habitad;
    }
    int get_n_patas()   //Metodo para mostrar el atributo numero de patas.
    {
        return n_patas;
    }
    void set_habitad(std::string _habitad)  //Metodo para agregar valor al atributo habitad.
    {
        habitad = _habitad;
    }
    void set_color_plumas(std::string _color_plumas)    //Metodo para agregar valor al atributo  color de plumas.
    {
        color_plumas = _color_plumas;
    }
    void set_n_patas(int _n_patas)  //Metodo para agregar valor al atributo numero de patas.
    {
        n_patas = _n_patas;
    }
};

#endif