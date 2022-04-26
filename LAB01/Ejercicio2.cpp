#include <iostream>

using namespace std;

int main()
{
    string nombre, apellido_paterno, apellido_materno;
    string correo_uni;

    cout<<"Ingrese su primer nombre:\n";     //ingreso del primer número entero
    cin>>nombre;

    cout<<"Ingrese su primer apellido:\n";    //ingreso del segundo número entero
    cin>>apellido_paterno;

    cout<<"Ingrese su segundo apellido:\n";    //ingreso del segundo número entero
    cin>>apellido_materno;

    correo_uni=nombre[0]+apellido_paterno+apellido_materno[0]+"@unsa.edu.pe";

    cout<<"-> Su correo universitario es : "<<correo_uni;

    return 0;
}