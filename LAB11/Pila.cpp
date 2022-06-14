#include "Pila.h"       //Se utiliza codigo del archivo especificado.

Pila::Pila()                    //Constructor.
{
    size = NULL;
    head = NULL;
}

void Pila::insert_nodo_size(int _size)     //Funcion para insertar nodos vacios en base a un tamaño.
{
    int valor{};
    for (int i = 0; i < _size; i++) {
        std::cout<<"Ingrese valor "<<i+1<<": ";
        std::cin>>valor;
        this->push(valor);
    }
}

void Pila::push(int _elem)            //Funcion para insertar un solo nodo a la pila de forma secuencial (al final).
{
    Nodo *new_Nodo = new Nodo(_elem);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.

    if (!head)
    {
        head = new_Nodo;        //Se agrega una la direccion del nuevo nodo creado.
    }else
    {
        while (aux->get_next() != NULL)
        {
            aux = aux->get_next();
        }
        aux->set_next(new_Nodo);
    }
    size++;
}

void Pila::pop()          //Funcion que elimina el ultimo nodo de la pila.
{
    Nodo *elim{};
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.
    
    while (aux->get_next() != NULL)
    {
        if (aux->get_next()->get_next() ==NULL)
        {
            elim = aux->get_next();
            if (aux == head)
            {
                aux->set_next(NULL);
                return;
            }
            break;
        }
        aux = aux->get_next();
    }
    if (aux == head)
    {
        elim = head;
        head = NULL;
    }else
    {
        aux->set_next(NULL);
    }
    size--;
}

void Pila::buscar()                 //Funcion para buscar un elemento en la pila.
{
    int _elem{};
    std::cout<<"Ingrese el elemnto a buscar: ";
    std::cin>>_elem;

    Nodo *aux{}; 
    while (1)
    {
        aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.
        while (aux->get_next() != NULL)
        {
            aux = aux->get_next();
        }
        if (aux->get_elem() == _elem)
        {
            std::cout<<"-> Elemento encontrado.\n";
            break;
        }else
        {
            this->pop();
        }
    } 
}

void Pila::mostrar_Pila()         //Mostrar la pila.
{
    Nodo *aux = head;       //Puntero auxiliar que apunta al nodo(cabeza).
    if (!head)  //Si la el nodo(cabeza) esta vacia.
    {
        std::cout<<"-> La pila esta vacia.\n";  //informamos que la pila esta vacia.
    }else       //Si no,
    {
        while(aux) //Minetras el nodo de aux apunte a un nodo
        {
            aux->mostrar_nodo();    //se imprimira el nodo al que apunta aux.
            if (!aux->get_next())   //Si la direccion del nodo de aux esta vacia
            {
                std::cout<<"vacio(FIN)";      //se imprimer vacio porque ya no hay mas nodos en la pila.
            }      //Si no,
            aux = aux->get_next();      //El aux se le agrega la direccion del nodo de aux.
   
        }
        std::cout<<"\n";
    }
}

Pila::~Pila()                   //Destructor.
{
}