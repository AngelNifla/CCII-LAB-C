#include "Lista.h"

Lista::Lista()      //constructor principal
{
    size = NULL;
    head = NULL;
}

void Lista::insertar_nodo_al_final(int _elem)            //Funcion para insertar un solo nodo a la lista de forma secuencial (al final).
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

void Lista::insertar_nodo_al_inicio(int _elem)         //Funcion para insertar un solo nodo a la lista de forma secuencial (al inicio).
{
    Nodo *new_Nodo = new Nodo(_elem);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.

    if (!head)
    {
        head = new_Nodo;        //Se agrega una la direccion del nuevo nodo creado.
    }else
    {
        new_Nodo->set_next(head);
        head = new_Nodo;
    }
    size++;
}

void Lista::insertar_nodo_por_posicion(int _elem,int _posicion)
{
    Nodo *new_Nodo = new Nodo(_elem);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.

    if (_posicion<1 || _posicion>size)
    {
        std::cout<<"\n[Error][posicion no valida]\n";
        exit(-1);
    }else if (_posicion == 1)
    {
        new_Nodo->set_next(head);
        head = new_Nodo;
        size++;
    }else
    {
        for (int i = 2; i < _posicion; i++)
        {
            aux = aux->get_next();
        }
        new_Nodo->set_next(aux->get_next());
        aux->set_next(new_Nodo);
        size++;
    }
}

void Lista::insert_nodo_size(int _size)     //Funcion para insertar nodos vacios en base a un tamaño.
{
    for (int i = 0; i < _size; i++) {
        insertar_nodo_al_final(NULL);
    }
}

void Lista::eliminar_ultimo_nodo()          //Funcion que elimina el ultimo nodo de la lista.
{
    Nodo *elim{};
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.
    while (aux->get_next() != NULL)
    {
        if (aux->get_next()->get_next() ==NULL)
        {
            elim = aux->get_next();
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

void Lista::eliminar_primer_nodo()          //Funcion que elimina el primer nodo de la lista.
{
    Nodo *elim = head;
    head = head->get_next();
    size--;
}

void Lista::eliminar_nodo_por_posicion(int _posicion)           //Funcion que elimina un nodo de la lista en base a la posicion.
{
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.
    if (_posicion<1 || _posicion>size)
    {
        std::cout<<"\n[Error][posicion no valida]\n";
        exit(-1);
    }else if (_posicion == 1)
    {
        head = head->get_next();
        size--;
    }else
    {
        for (int i = 2; i < _posicion; i++)
        {
            aux = aux->get_next();
        }
        aux->set_next(aux->get_next()->get_next());
        size--;
    }
    
}

void Lista::insertar_nodo_creciente(int _dato)        //Funcion para insertar nodo a la lista de forma creciente.
{
    Nodo *new_Nodo = new Nodo(_dato);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.

    if (!head)                  //Si la lista no tiene un direccion a un Nodo incial(cabeza)
    {
        head = new_Nodo;        //Se agrega una la direccion del nuevo nodo creado.
    } else      //Si no,
    {
        if (head->get_elem() > _dato)       //Comprobamos si el dato del primer nodo es mayor al dato del nodo creado.
        {
            new_Nodo->set_next(head);       //Si es asi, al nodo creado le agregamos la direccion del primer nodo
            head = new_Nodo;            //y la direccion del nodo cabeza de la lista le pasamos la direccion del nuevo nodo.
        }else       //Si no es asi,
        {
            while ((aux->get_next() != NULL) && (aux->get_next()->get_elem() < _dato))  //Mientras la direccion del auxilar no sea vacia y el valor del auxliar sea menor que el valor. 
            {
                aux = aux->get_next();      //al auxiliar le pasamos la direccion que guarda nodo al que apunta el auxiliar
            }
            new_Nodo->set_next(aux->get_next());        //Si no, al nuevo nodo se le agrega la direccion del nodo del axuliar
            aux->set_next(new_Nodo);            //y al auxiliar se le agrega la direccion del nuevo nodo.
        }
    }
    size++;     //Y finalmente aumentamos en uno al tamaño de la lista.
}

void Lista::insertar_nodo_decreciente(int _dato)        //Funcion para insertar nodo a la lista de forma decreciente.
{
    Nodo *new_Nodo = new Nodo(_dato);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.
    Nodo *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.

    if (!head)                  //Si la lista no tiene un direccion a un Nodo incial(cabeza).
    {
        head = new_Nodo;        //Se agrega una la direccion del nuevo nodo creado.
    } else      //Si no,
    {
        if (head->get_elem() < _dato)       //Comprobamos si el dato del primer nodo es menor al dato del nodo creado.
        {
            new_Nodo->set_next(head);       //Si es asi, al nodo creado le agregamos la direccion del primer nodo
            head = new_Nodo;            //y la direccion del nodo cabeza de la lista le pasamos la direccion del nuevo nodo.
        }else       //Si no es asi,
        {
            while ((aux->get_next() != NULL) && (aux->get_next()->get_elem() > _dato))  //Mientras la direccion del auxilar no sea vacia y el valor del auxliar sea mayor que el valor. 
            {
                aux = aux->get_next();      //al auxiliar le pasamos la direccion que guarda nodo al que apunta el auxiliar
            }
            new_Nodo->set_next(aux->get_next());        //Si no, al nuevo nodo se le agrega la direccion del nodo del axuliar
            aux->set_next(new_Nodo);            //y al auxiliar se le agrega la direccion del nuevo nodo.
        }
    }
    size++;     //Y finalmente aumentamos en uno al tamaño de la lista.
}

void Lista::mostrar_lista()         //Mostrar la lista.
{
    Nodo *aux = head;       //Puntero auxiliar que apunta al nodo(cabeza).
    if (!head)  //Si la el nodo(cabeza) esta vacia.
    {
        cout<<"-> La Lista esta vacia.\n";  //informamos que la lista esta vacia.
    }else       //Si no,
    {
        while(aux) //Minetras el nodo de aux apunte a un nodo
        {
            aux->mostrar_nodo();    //se imprimira el nodo al que apunta aux.
            if (!aux->get_next())   //Si la direccion del nodo de aux esta vacia
            {
                cout<<"vacio(FIN)";      //se imprimer vacio porque ya no hay mas nodos en la lista.
            }      //Si no,
            aux = aux->get_next();      //El aux se le agrega la direccion del nodo de aux.
   
        }
        cout<<"\n";
    }
}

Lista::~Lista()     //Destructor.
{
    head->~Nodo();
    head = 0;
}