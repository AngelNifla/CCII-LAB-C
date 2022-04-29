#include <iostream>

using namespace std;

int main()
{
    long double num, aux;     //numero flotante

    cout<<"Ingrese un numero decimal para redondearlo (ejemplo: 12.15545...) :  ";
    cin>>num;

    long int entero = num,aux_int;       //numero en entero, sin redondeo
    
    aux = num*100;
    aux_int=aux;
    aux_int= aux_int-(entero*100);

    if(aux_int%10>=5)
    {
        aux_int=(aux_int/10)+1;
    }else
    {
        aux_int=aux_int/10;
    }

    if(aux_int>=5)
    {
        cout<<"-> el numero redondeado es :  "<<entero+1;
    }else
    {
        cout<<"-> el numero redondeado es :  "<<entero;
    }

    return 0;
}