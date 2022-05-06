/*
Utilizando punteros a funciones, implemente las funciones:
    a. void sumar (int a, int b);
    b. void restar (int a, int b);
    c. void multiplicar (int a, int b);
    d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa
que permita la invocación de cada función, pero a través del puntero.
*/

#include <iostream>

using namespace std;

void sumar(int* a,int* b)                           //Funcion que recibe punteros, que
{
    cout<<"-> La suma entre ambos valores es: "<<*a+*b<<endl;   //imprime la suma del contenido de punteros. 
}
void restar(int* a,int* b)                          //Funcion que recibe punteros, que
{
    cout<<"-> La resta entre ambos valores es: "<<*a-*b<<endl;  //imprime la resta del contenido de punteros.
}
void multiplicar(int* a,int* b)                         //Funcion que recibe punteros, que
{
    cout<<"-> El producto entre ambos valores es: "<<*a**b<<endl;   //imprime el producto del contenido de punteros.
}
void dividir(int* a,int* b)                         //Funcion que recibe punteros, que
{
    float v1=*a,v2=*b;                  //Introducimos el contenido de los punteros a un dato float. 
    cout<<"-> El cociente entre ambos valores es: "<<v1/v2<<endl;   //imprime el cociente del contenido de punteros.
}

int main()      //Funcion principal.
{
    void (*vector[])(int*,int*)={sumar,restar,multiplicar,dividir}; //Creamos el vector funcion punteros.
    int valorA,valorB,opcion=NULL;  //Variables para los datos.

    cout<<"Ingresar primer valor: "; 
    cin>>valorA;        //Se ingresa el valor1.
    cout<<"Ingresar segundo valor: ";
    cin>>valorB;    //Se ingresa el valor2.
    
    while (opcion==NULL)    //Si la opcion esta vacia seguira preguntando.
    {
        cout<<"\n/////////////////////////////////////////"<<endl<<endl;
        cout<<"Elija una opcion :\n\n";
        cout<<"\t1) Sumar.\n";
        cout<<"\t2) Restar.\n";
        cout<<"\t3) Multiplicar.\n";
        cout<<"\t4) Dividir.\n";
        cout<<"\t5) Terminar.\n";

        cout<<"Ingrese el numero de la opcion: ";
        cin>>opcion;        //Se ingresa el numero de una opcion.
        if (1>opcion || opcion>5)   //Si la opcion es diferente de las opciones, seguira preguntando.
        {
            opcion=NULL;
            cout<<"/////////////////////////////////////////"<<endl<<endl;
            cout<<"-> LA OPCION NO EXISTE :\n\n";
        }
    }

    cout<<"/////////////////////////////////////////"<<endl<<endl;
    if (opcion==1)      //Si la opcion es igual con la presentada
    {
        vector[0](&valorA,&valorB);     //se imprime la funcion de la opcion escogida.
    }else if (opcion==2)        //Si la opcion es igual con la presentada.
    {
        vector[1](&valorA,&valorB);     //se imprime la funcion de la opcion escogida.
    }else if (opcion==3)        //Si la opcion es igual con la presentada.
    {
        vector[2](&valorA,&valorB);     //se imprime la funcion de la opcion escogida.
    }else if (opcion==4)        //Si la opcion es igual con la presentada.
    {
        vector[3](&valorA,&valorB);     //se imprime la funcion de la opcion escogida.
    }else       //Si no, termina el programa.
    {
        cout<<"-> El programa termino."<<endl;
    }

    cout<<"\n/////////////////////////////////////////"<<endl<<endl;
    
    return 0;
}