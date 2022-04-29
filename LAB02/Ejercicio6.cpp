#include <iostream>

using namespace std;

int main()
{
    int limite, num_anterior=0, num_actual=1, aux;      //declaracion de variables

    cout<<"Ingresar el limite para la serie fibonacci :  ";     //ingreamos limite para la serie
    cin>>limite;

    cout<<"Serie de Fibonacci : \n-> "; //Imprimos los dos primeros numeros de la serie
    cout<<num_anterior<<", "<<num_actual;

    for (int i = 0; i < limite-2; i++)  //bucle para el resto de numeros de la serie
    {
        aux=num_anterior;       //se guarda en el auxiliar el numero anterior 
        num_anterior=num_actual;    //se guarada el actual en el anterior 
        num_actual=aux+num_actual;//se suman el anterior que esta en el aux y el actual, en la variable actual
        cout<<", "<<num_actual;     //se imprime el actual
    }
    
    return 0;
}