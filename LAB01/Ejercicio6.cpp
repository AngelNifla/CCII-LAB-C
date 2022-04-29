#include <iostream>

using namespace std;

int main()
{
    int numero, num_cifras_binario=1;   //variables para el numero y la cantidad de cifras en binario
    bool verificar=true;

    cout<<"Ingrese un numero entre <100,999> : ";
    cin>>numero;

    while (numero<=100 || numero>=999)     //bucle para que se ingrese correctamente el rango de numero
    {                                      /*el codigo puede convertir cualquier numero a binario*/
        cout<<"Ingrese un numero ENTRE <100,999> : "; /*el rango solo esta por el ejrcicio*/
        cin>>numero;
    }
    

    int aux=numero;     //variable auxiliar para modificar el numero en el bucle

    while(verificar)    //bucle que para obtener el numero de cifras en binario
    {
        if(aux/2>=2)    //si el numero dividido 2 tiene un cociente que es mayor a 2, tiene una cifra mas en binario
        {
            aux=aux/2;
        }else
        {
            verificar=false;
        }
        num_cifras_binario=num_cifras_binario+1;
    }

    int num_a_binario[num_cifras_binario];  //array para almacenar cada cifra en binario, tamaño obtenido del bucle anterior
    aux=numero;     //volvemos a agregar el numero al auxiliar, para no crear mas variables

    for (int i = 0; i < num_cifras_binario; i++)    //bucle para hallar cada cifra binaria del numero
    {
        if(i==num_cifras_binario-1) //al llegar al ultimo espacio se debe guardar la primera cifra del numero binario
        {
            num_a_binario[i]=aux;    //la cifra llega del cociente, por ello se agrego +1 al numero de cifras
        }else
        {
            num_a_binario[i]=aux%2;  //las cifras en binario llegan del residuo del numero entre 2
            aux=aux/2;    //el cociente resatante se vuelve a dividir en 2
        }
        
    }

    cout<<"-> El numero "<<numero<<" en el sistema binario es el siguiente :  ";

    for (int i = num_cifras_binario-1; i >=0; i--)  //bucle para imprimir las cifras en binario de atras para adelante
    {
        if(i==num_cifras_binario-1 && num_a_binario[i]==0)//si la primera cifra en binario es un cero, no se imprime
        {}else
        {
            cout<<num_a_binario[i];
        }
    }

    return 0;
}