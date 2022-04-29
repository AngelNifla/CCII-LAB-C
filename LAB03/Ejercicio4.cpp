#include <iostream>

using namespace std;

void primos(int maximo)     //funcio que imprime los x primeros numeros primos
{
    cout<<"-> Los 50 primeros numeros primos son:\n";
    for (int i = 1, c = 0; c < maximo; i++) //bucle para elegir un numero h
    {
        int cont=0; //variable para contar los divisores en cada ciclo del bucle
        for (int j = 1; j <= i; j++)    //bucle para estudiar el numero de divisores de h
        {
            if(i%j==0)
            {
                cont=cont+1;
            }
        }
        if (cont==2)    //si h tiene solo 2 divisores, es primo y se imprime
        {
            cout<<i<<"   ";
            c++;
        }      
    }
}

int main()      //funcion principal
{
    int maximo; // variable para el maximo de numero primos

    cout<<"Cuantos numeros primos desea otener? :  ";
    cin>>maximo;

    primos(maximo); //llamamos a la funcion para obtener los numeros primos.
    
    return 0;
}