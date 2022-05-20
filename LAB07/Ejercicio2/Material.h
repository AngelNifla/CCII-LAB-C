#ifndef _MATERIAL_H_
#define _MATERIAL_H_

#include <iostream>

class Material      //Clase Material.
{
private:
    std::string material;       //Atributo para el nombre del objeto.
public:
    Material();     //Metodo Constructor.
    Material(std::string _material);        //Metodo Constructor por parametro.
    ~Material();        //Metodo Destructor.

    std::string get_material()      //Metodo para mostrar el atributo nombre.
    {
        return material;
    }
    void set_material(std::string _material)        //Metodo para agregar valor al atributo nombre.
    {
        material = _material;
    }
};

#endif