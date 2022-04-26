#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool exis=false;
    cout<<"Ingrese dos valores numericos\n";
    cout<<"Primer valor :  ";
    cin>>x;
    cout<<"Segundo valor :  ";
    cin>>y;
    if (x>y)
    {
        int aux;
        aux=x;
        x=y;
        y=aux;
    }
    
    
    cout<<"-> Los numeros primos entre "<<x<<" y "<<y<<" son:\n";
    for (int i = x; i <= y; i++)
    {
        int cont=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                cont=cont+1;
            }
        }
        if (cont==2)
        {
            cout<<i<<"   ";
            exis=true;
        }      
    }
   return 0;
}