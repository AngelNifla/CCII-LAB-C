#include <iostream>

using namespace std;

int introducir_numero()
{
    int numero;
    cout<<"Ingrese un numero entre <0,100> :  ";
    cin>>numero;
    while(numero<1 || numero>99)
    {
        cout<<"\t-> INGRESE un numero entre <0,100> :  ";
        cin>>numero;
    }

    return numero;
}

int numero_par(int x=introducir_numero())
{
    if(x%2==0){
        return x;
    }else
    {
        cout<<"-> El numero no es par\n";
        x=0;
        return x;
    } 
}

void sumar_impares(int par=numero_par())
{
    int suma;

    if(par==0)
    {
        cout<<"-> La suma de los numero impares hasta el numero ingresaado es : "<<0;
    }else
    {
            for (int i = 0; i <= par; i++)
            {
                if(i%2!=0)
                {
                    suma=suma+i;
                }
            }
            cout<<"-> La suma de los numero impares hasta el numero ingresaado es : "<<suma;
    }
    
}

int main()
{
    sumar_impares();
    return 0;
}