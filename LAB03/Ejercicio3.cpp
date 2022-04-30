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

//funcion para hallar la edad exacta en años, meses y dias.
void edad(int dia_nac,int mes_nac,int year_nac,int dia_act,int mes_act,int year_act)
{
    int years_edad, meses_edad, dias_edad;  //variables para la diferencia de años, meses y dias.
    years_edad=year_act-year_nac;   //diferencia de años, donde no se sabe si ya cumplio esa diferencia.
    meses_edad=mes_act-mes_nac; //diferencia de meses.
    dias_edad=dia_act-dia_nac;  //diferencia de dias.

    if (meses_edad<0)   //si la diferencia de meses es negativa = le falta meses para cumplir el siguiente año.
    {
        years_edad--;       //se resta 1(el año actual) porque aun no los cumplio.
        meses_edad=12+meses_edad;       //se suma +12 a la diferencia de meses = meses ya cumplidos
        if(dias_edad<0)     //si la diferencia de dias es negativa = le faltan dias para el siguiente mes
        {
            meses_edad--;       //restamos 1 (el mes actual) de la diferencia, porque aun no cumplio el mes
            int mes=mes_act-1;        //en una variable guardamos el mes anterior al que nos encontramos
            if (mes== 4|| mes==6|| mes==9|| mes==11)    // si ese mes tiene 30 dias
            {
                dias_edad=30-dia_nac+dia_act;       //restamos 30 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
            }else if (mes==2)   // si ese mes es febrero
            {
                if(bisiesto(year_act))  //si el año actual es bisiesto
                {
                    dias_edad=29-dia_nac+dia_act;   //restamos 29 - los dias hasta el dia de cumpleaños y sumamos+ los dias actuales
                }else           //si no es bisiesto
                {
                    dias_edad=28-dia_nac+dia_act;   //restamos 28 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
                }
            }else   // si ese mes tiene 30 dias
            {
                dias_edad=31-dia_nac+dia_act;   //restamos 31 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
            }
        }
    }else if (meses_edad>0)         //si la diferencia de meses es positiva = ya cumplio años y tiene mas meses y/o dias 
    {
        if(dias_edad<0)     //si la diferencia de dias es negativa = le faltan dias para el siguiente mes
        {
            meses_edad--;       //restamos 1 (el mes actual) de la diferencia, porque aun no cumplio el mes
            int mes=mes_act-1;        //en una variable guardamos el mes anterior al que nos encontramos
            if (mes== 4|| mes==6|| mes==9|| mes==11)    // si ese mes tiene 30 dias
            {
                dias_edad=30-dia_nac+dia_act;       //restamos 30 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
            }else if (mes==2)   // si ese mes es febrero
            {
                if(bisiesto(year_act))  //si el año actual es bisiesto
                {
                    dias_edad=29-dia_nac+dia_act;   //restamos 29 - los dias hasta el dia de cumpleaños y sumamos+ los dias actuales
                }else           //si no es bisiesto
                {
                    dias_edad=28-dia_nac+dia_act;   //restamos 28 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
                }
            }else   // si ese mes tiene 30 dias
            {
                dias_edad=31-dia_nac+dia_act;   //restamos 31 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
            }
        } 
    }else   ////si la diferencia de meses es 0 = estamos en el mes que cumple años.
    {
        if(dias_edad<0)     //si la diferencia de dias es negativa = le falta dias para cumplir el siguiente año.
        {
            years_edad--;   //se resta 1(el año actual) porque aun no los cumplio.
            meses_edad=11;      //los meses ya vividos son 11 porque solo faltand dias para cumplir años
            int mes=mes_act-1;      //en una variable guardamos el mes anterior al que nos encontramos
            if (mes== 4|| mes==6|| mes==9|| mes==11)    // si ese mes tiene 30 dias
            {
                dias_edad=30+dias_edad; //restamos 30 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
            }else if (mes==2)   //si ese mes es febrero
            {
                if(bisiesto(year_act))  //si el año actual es bisiesto
                {
                    dias_edad=29+dias_edad; //restamos 29 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
                }else           // si no es bisiesto
                {
                    dias_edad=28+dias_edad; //restamos 28 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
                }
                
            }else   //si ese mes tiene 31 dias.
            {
                dias_edad=31+dias_edad; //restamos 31 - los dias hasta el dia de cumpleaños y sumamos+ los diasactuales
            }
            
        }
    }
    //se imprime la edad exacta.
    cout<<"-> La edad exacta es : "<<years_edad<<" years, ";
    cout<<meses_edad<<" meses con ";
    cout<<dias_edad<<" dias.";
}

int main()      //funcion principal
{
    int dia_nac, mes_nac, year_nac; //variables para las fechas actuales
    int dia_act, mes_act, year_act; //variables para las fechas de nacimiento

    cout<<"Ingrese la fecha actual : \n";
    cout<<"\tIngrese el year :  ";
    cin>> year_act;
    while (year_act<1 || year_act>3000) //bucle para pedir el año actual en el rango
    {
        cout<<"\tIngrese el year :  ";
        cin>> year_act;
    }
    cout<<"\tIngrese el mes :  ";
    cin>> mes_act;
    while (mes_act<1 || mes_act>12) //bucle para pedir el mes actual en el rango
    {
        cout<<"\tIngrese el mes :  ";
        cin>> mes_act;
    }
    cout<<"\tIngrese el dia :  ";
    cin>> dia_act;
    while (dia_act<1 || dia_act>31) //bucle para pedir el dia actual en el rango
    {
        cout<<"\tIngrese el dia :  ";
        cin>> dia_act;
        if (bisiesto(year_act) && mes_act==2 && dia_act>30) //condicional para que se ingrese datos en rago de bisiesto
        {
            dia_act=33;
            cout<<"->INGRESE de nuevo el dia, los dias del mes de febrero en este year son hasta el 29.\n";
        }else if(mes_act==2 && dia_act>29)
        {
            dia_act=33;
            cout<<"->INGRESE de nuevo el dia, los dias del mes de febrero en este year son hasta el 28.\n";
        }
    }
    

    cout<<"Ingrese la fecha de nacimiento : \n";
    cout<<"\tIngrese el year :  ";
    cin>> year_nac;
    while (year_nac<1 || year_nac>3000) //bucle para pedir el año de nacimiento en el rango
    {
        cout<<"\tIngrese el year :  ";
        cin>> year_nac;
    }
    cout<<"\tIngrese el mes :  ";
    cin>> mes_nac;
    while (mes_nac<1 || mes_nac>12) //bucle para pedir el mes de nacimiento en el rango
    {
        cout<<"\tIngrese el mes :  ";
        cin>> mes_nac;
    }
    cout<<"\tIngrese el dia :  ";
    cin>> dia_nac;
    while (dia_nac<1 || dia_nac>31) //bucle para pedir el dia de nacimiento en el rango
    {
        cout<<"\tIngrese el dia :  ";
        cin>> dia_nac;
        if (bisiesto(year_nac) && mes_nac==2 && dia_nac>30) //condicional para que se ingrese datos en rago de bisiesto
        {
            dia_nac=33;
            cout<<"->INGRESE de nuevo el dia, los dias del mes de febrero en este year son hasta el 29.\n";
        }else if(mes_nac==2 && dia_nac>29)  //condicional para que se ingrese datos en rago de no bisiesto
        {
            dia_nac=33;
            cout<<"->INGRESE de nuevo el dia, los dias del mes de febrero en este year son hasta el 28.\n";
        }
    }
    
    edad(dia_nac,mes_nac,year_nac,dia_act,mes_act,year_act);     //llamamos a la funcion edad()
    
    return 0;
}