#include "Material.h"       //Se incluye el codigo del archivo especificado.

Material::Material()        //Metodo Constructor.
{
    set_material("");
}

Material::Material(std::string _material)       //Metodo Constructor por parametro.
{
    set_material(_material);
}

Material::~Material()       //Metodo Destructor.
{
}