#include <iostream>

using namespace std;

bool bisiesto(int year) //funcion para verificar si un año es bisiesto
{
    bool confirmacion;
    if(year%4==0 && year%400==0 && year%100==0)
    {
        confirmacion=true;
    }else if(year%4==0 && year%100!=0)
    {
        confirmacion=true;
    }else
    {
        confirmacion=false;
    }

    return confirmacion;
}

int main()  //funcion principal
{
    int year;   //variable para ingresar el año

    cout<<"Ingrese el año :  ";
    cin>>year;

    if (bisiesto(year)) //imprime segun la confirmacion de la funcion
    {
        cout<<"-> El año "<<year<<" SI es Bisiesto";
    }else
    {
        cout<<"-> El año "<<year<<" NO es Bisiesto";
    }

    return 0;
}