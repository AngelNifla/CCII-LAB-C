#include <iostream>

using namespace std;

int main()
{
    int n, valor, medida=0, mayor, menor;
    bool entrada=false;
    cout<<"Cuantos numeros va a ingresar:  ";
    cin>>n;
    cout<<"1 valor:  ";
    cin>>valor;
    mayor=valor;
    menor=valor;
    medida=valor;
    for (int i = 1; i < n; i++)
    {
        cout<<i+1<<" valor:  ";
        cin>>valor;
        if(valor>=mayor)
        {
            mayor=valor;
        }else if (valor<=menor)
        {
            menor=valor;
        }
        medida=medida+valor;
    }
    cout<<"-> El mayor numero ingresado es: "<<mayor<<endl;
    cout<<"-> El menor numero ingresado es: "<<menor<<endl;
    cout<<"-> La medida de los numeros ingresados es: "<<medida;
    return 0;
}