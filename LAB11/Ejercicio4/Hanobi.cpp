# include "Hanobi.h"            //Se utiliza codigo del archivo especificado.

Hanobi::Hanobi(int _n_discos)           //Cosntructor.
{
    n_discos = _n_discos;
    std::cout<<"---------------------------------------------------\n";
    std::cout<<"-> Creando e insertando discos en la torre origen...\n";
    for (int i = n_discos; i > 0; i--)      //Se ingresa datos a la pila de la torre origen segun el numero de discos utilizados.
    {
        origen.push(i);
    }
    std::cout<<"\nTORRE ORIGEN: \t";
    origen.mostrar_Pila();
    std::cout<<"\n\tTORRE AUXILIAR:\t";
    aux.mostrar_Pila();
    std::cout<<"\n\t\tTORRE DESTINO:\t" ;   
    destino.mostrar_Pila();
}

void Hanobi::resolviendo()          //Fucnion que resuelve las torres de Hanobi
{
    for (int i = 0; i < n_discos; i++)      //Se intercambia datos entre la pila de la torre origen y auxiliar segun el numero de discos utilizados.
    {
        aux.push(origen.get_back());
        origen.pop();
    }
    std::cout<<"\n---------------------------------------------------\n";
    std::cout<<"-> Cambiando discos de Torre Origen a Auxiliar...\n";
    std::cout<<"\nTORRE ORIGEN: \t";
    origen.mostrar_Pila();
    std::cout<<"\n\tTORRE AUXILIAR:\t";
    aux.mostrar_Pila();
    std::cout<<"\n\t\tTORRE DESTINO:\t" ;   
    destino.mostrar_Pila();
    for (int i = 0; i < n_discos; i++)      //Se intercambia datos entre la pila de la torre auxiliar y destino segun el numero de discos utilizados.
    {
        destino.push(aux.get_back());
        aux.pop();
    }
    std::cout<<"\n---------------------------------------------------\n";
    std::cout<<"-> Cambiando discos de Torre Auxiliar a Destino...\n";
    std::cout<<"\nTORRE ORIGEN: \t";
    origen.mostrar_Pila();
    std::cout<<"\n\tTORRE AUXILIAR:\t";
    aux.mostrar_Pila();
    std::cout<<"\n\t\tTORRE DESTINO:\t" ;   
    destino.mostrar_Pila();
    std::cout<<"\n---------------------------------------------------\n";
    std::cout<<"-> HANOBI RESUELTO.\n";
    std::cout<<"---------------------------------------------------\n";
}

Hanobi::~Hanobi()           //Destructor.
{
}