#include <iostream>

using namespace std;

int main()
{
    int num_alum, alum[num_alum][4];    //declaramos un variable para n alumnos y un array para organizar

    cout<<"Ingrese el numero de alumnos :   ";  //ingresamos numero de alumnos n
    cin>>num_alum;

    int promedio;       //variable para el promedio

    for (int i = 0; i < num_alum; i++)  //bucle para ingresar notas de los n alumnos al array
    {
        promedio=0;

        cout<<"Ingrese las nota del alumno Numero "<<i+1<<" : \n";

        for (int j = 0; j < 3; j++) // el ultimo espacio del array de notas es para el promedio de las notas
        {
            cout<<"\tNota Numero "<<j+1<<" :  ";
            cin>>alum[i][j];

            while (alum[i][j]==NULL)    //bucle para verificar que ingrese la nota especificada
            {
                cout<<"\t-> INGRESE Nota Numero "<<j+1<<" :  ";
                cin>>alum[i][j];
            }

            promedio=promedio+alum[i][j];   //n cada bucle se suma las notas ingresadas
        }

        alum[i][3]=promedio/3;  //se agrega al ultimo espacio el promedio
    }

    cout<<"\nPROMEDIOS : \n";

    for (int i = 0; i < num_alum; i++)  //bucle para imprimir el promerdio de los alumnos
    {
        cout<<"-> El promedio de notas del alumno Numero "<<i+1<<" es :  "<<alum[i][3]<<endl;
        
    }

    return 0;
}