# include "Cola.h"              //Se utiliza codigo del archivo especificado.

Cola::Cola()                    //Constructor.
{
    size = NULL;
    begin = NULL;
    back = NULL;
}

void Cola::insert_nodo_size(int _size)     //Funcion para insertar nodos vacios en base a un tamaño.
{
    int valor{};
    for (int i = 0; i < _size; i++) {
        std::cout<<"Ingrese valor "<<i+1<<": ";
        std::cin>>valor;
        this->push(valor);
    }
}

void Cola::push(int _elem)            //Funcion para insertar un solo nodo a la Cola de forma secuencial (al final).
{
    Nodo *new_Nodo = new Nodo(_elem);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.
    Nodo *aux = back;                   //Puntero a un nodo auxiliar que apunta a un nodo.

    if (!back)
    {
        begin = new_Nodo;        //Se agrega la direccion del nuevo nodo creado tanto a begin como a back.
        back = new_Nodo;
    }else
    {
        aux->set_next(new_Nodo);
        back = new_Nodo;

    }
    aux = NULL;
    new_Nodo = NULL;
    aux->~Nodo();
    new_Nodo->~Nodo();
    size++;
}

void Cola::pop()          //Funcion que elimina el primer nodo de la Cola.
{
    Nodo *elim{};
    
    if (!begin)  //Si el nodo(cabeza) esta vacia o no existe.
    {
        std::cout<<"-> [error]...La Cola esta vacia.\n";  //informamos que la Cola esta vacia.
    }else if (begin == back)        //Si se llega al ultimo elemento.
    {
        elim = begin;           //Seelmina el nodo y se vacia los punteros del incio y el final.
        begin = NULL;
        back = NULL;
    }else           //Sino, 
    {
        elim = begin;
        begin = begin->get_next();      //Se elimina el primr valor y se modifica el puntero de inicio.
    }
    elim->~Nodo();            //Se libera memoria.
    size--;
}

void Cola::buscar()                 //Funcion para buscar un elemento en la Cola.
{
    Nodo *aux = begin;
    int _elem{};
    std::cout<<"Ingrese el elemento a buscar: ";
    std::cin>>_elem;        //Se ingresa el elemento a buscar.
    for (int i=0; i<size;i++)       //Bucle infinito. Se parte por el primer valor.
    {
        if (!begin)         //Si el nodo inicial no existe.
        {
            std::cout<<"-> El elemento no puede ser encontrado.\n";      //No se encontrara el valore.
            break;
        }else if (aux->get_elem() == _elem)       //Si se encuentra el valor.
        {
            std::cout<<"-> Elemento encontrado.\n";     //Se informa.
            break;
        }else if (i == size-1)
        {
            std::cout<<"-> Elemento no encontrado.\n";      //No se encontrara el valore.
        }
        aux = aux->get_next();
    }
    aux = NULL;
    aux->~Nodo();
}

void Cola::mostrar_Cola()         //Mostrar la Cola.
{
    Nodo *aux = begin;       //Puntero auxiliar que apunta al nodo(cabeza).
    if (!begin)  //Si la el nodo(cabeza) esta vacia.
    {
        std::cout<<"-> La Cola esta vacia.\n";  //informamos que la Cola esta vacia.
    }else       //Si no,
    {
        while(aux) //Mientras el nodo de aux apunte a un nodo
        {
            aux->mostrar_nodo();    //se imprimira el nodo al que apunta aux.
            if (aux == back)   //Si la direccion del nodo de aux es igual al nodo al que apunta back
            {
                std::cout<<"vacio(FIN)";      //se imprimer vacio porque ya no hay mas nodos en la Cola.
            }      //Si no,
            aux = aux->get_next();      //El aux se le agrega la direccion del nodo siguiente de aux.
   
        }
        std::cout<<"\n";
    }
    aux = NULL;
    aux->~Nodo();
}

Cola::~Cola()           //Destructor.
{
}