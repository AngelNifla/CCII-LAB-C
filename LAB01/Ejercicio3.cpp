#include <iostream>

using namespace std;

int main()
{
    char hora_ingresada[5];
    string turno;
    int hora_ingresada_int[5];
    int hora, minutos, minutos_adicionales;
    cout<<"Ingresar hora  en HH:MM :  ";
    cin>>hora_ingresada;
    for (int i = 0; i < 5; i++)
    {
        if (hora_ingresada[i]==NULL)
        {
            cout<<"-> Ingrese la hora correctamente, ejemplo 05:05\n";
            cout<<"Ingresar hora en HH:MM :  ";
            cin>>hora_ingresada;
        }
        
    }
    

    for (int i = 0; i < 5; i++)     //bucle para agregar la cedena en un array int
    {
        char aux=hora_ingresada[i];
        if(i!=2)
        {
            if(aux=='0')
            {
                hora_ingresada_int[i]=0;
            }else
            {
                hora_ingresada_int[i]=atoi(&aux);
            }
        }
    }

    if (hora_ingresada_int[0]==0)       //condicional para saber si la hora empieza con 01-09
    {
        hora = hora_ingresada_int[1];
    }else
    {
        hora = (hora_ingresada_int[0]*10)+hora_ingresada_int[1];
    }

    if (hora_ingresada_int[3]==0)       //condicional para saber si los minutos empiezan con 01-09
    {
        minutos=hora_ingresada_int[4];
    }else
    {
        minutos=hora_ingresada_int[3]*10+hora_ingresada_int[4];
    }

    cout<<"Cuantos minutos va a agregar :  ";
    cin>>minutos_adicionales;

    for (int i =0; i < minutos_adicionales; i++)        //bucle para agregar los minutos adicionales
    {
        if(minutos==59)
        {
            minutos=0;
            if(hora==23)
            {
                hora=0;
            }else
            {
                hora++;
            }
        }else
        {
            minutos++;
        }
    }

    if (hora<12)        //condicioanl para averiguar el turno AM o PM
    {
        turno = "AM";
    }else
    {
        turno = "PM";
    }
    
    
    cout<<"-> La nueva hora es :   ";

    if(hora>=10)      //imprimiendo la nueva hora en el formato HH:MM AM/PM
    {
        if(minutos<10)
        {
            cout<<hora<<":0"<<minutos<<"    "<<turno;
        }else
        {
            cout<<hora<<":"<<minutos<<"    "<<turno;
        }
        
    }else
    {
        if(minutos<10)
        {
            cout<<"0"<<hora<<":0"<<minutos<<"    "<<turno;
        }else
        {
            cout<<"0"<<hora<<":"<<minutos<<"    "<<turno;
        }
    }
    return 0;
}