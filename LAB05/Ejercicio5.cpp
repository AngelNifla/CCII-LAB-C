/*
Implemente su propia función de concatenación de cadenas de
texto especial (¡no es la función ordinaria de concatenación!),
recibirá como parámetro dos punteros de caracteres y tendrá que
asignar el contenido del segundo puntero al INICIO del primer puntero.
La función no retorna ningún cadena.
*/

#include <iostream>

using namespace std;

void concatenacion(string* cadena1,string* cadena2) //Funcion Concatenacion.
{
    *cadena1=*cadena2+' '+*cadena1;     //Se concatenan los contenidos de cada cadena.
    cout<<"-> "<<*cadena1;     //Se imprime la cadena resultante.
}

int main()
{
    string *cadena1, *cadena2;  //Se crea dos punteros

    cadena1 = new string;   //Inicializamos memoria para la cedena.
    cadena2 = new string;   //Inicializamos memoria para la cedena.

    cout<<"Ingresar tetxo 1: ";
    getline(cin,*cadena1);    //Ingresamos el primer cadena al espacio de memoria del puntero "cadena1".
    cout<<"Ingresar tetxo 2: ";
    getline(cin,*cadena2);    //Ingresamos el primer cadena al espacio de memoria del puntero "cadena2".

    concatenacion(cadena1,cadena2); //Se llama a la funcion para concatenar y se envian las direcciones de memoria.

    return 0;
}