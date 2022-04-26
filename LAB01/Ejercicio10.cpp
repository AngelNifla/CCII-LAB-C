#include <iostream>

using namespace std;

int main()
{
    string contra;
    string dato;
    bool validez=false;
    cout<<"Ingrese una contraseña:  ";
    cin>>contra;
    cout<<"--Verifique su Contraseña--\n";
    while(validez==false){
        cout<<"Ingrese nuevamente su contraseña:  ";
        cin>>dato;
        if(contra==dato){
            cout<<"-> Constraseña Correcta!\n";
            validez=true;
        }else{
            cout<<"-> Constraseña Incorrecta!, Intente de nuevo:\n";
        } 
    }
    return 0;
}