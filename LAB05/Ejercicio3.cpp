#include <iostream>
#include <time.h>

using namespace std;

class Nodo          //clase Nodo.
{
    private:
        int elem;       //Atributo: valor que guardara un nodo.
        Nodo *next;     //Atributo: direccion del siguiente nodo.
    public:
        Nodo();             //Constructor principal.
        Nodo(int _elem);    //Constructor por parametro.

        void mostrar_nodo();       //Funcion para immprimir un nodo.
        int get_elem()      //Funcion para obtener el valor actual.
        {     
            return elem;
        };
        Nodo* get_next(){       //Funcion para obtener la direccion actual.
            return next;
        };
        void set_elem(int _elem)    //Funcion para ingresar nuevo valor.
        {   
            elem = _elem;
        }
        void set_next(Nodo*_next)       //Funcion para ingresar nueva direccion.
        {
            next = _next;
        }
        
        ~Nodo();    //Destructor.
};

Nodo::Nodo()        //Constructor principal.
{
    elem = NULL;
    next = NULL;
}

Nodo::Nodo(int _elem)       //Constructor por parametro.
{
    elem = _elem;
    next = NULL;
}

void Nodo::mostrar_nodo()          //Funcion para imprimir un nodo.
{
    cout << elem << "-> ";
}

Nodo::~Nodo()       //Destructor.
{
    if (next)   //Si un nodo tiene tiene a la direccion de otro
        next->~Nodo();  //sed destruye ese siguiente nodo.
    delete this;    //Si no, se destruye el mismo nodo.
}
////////////////////////////////////////////////////////////////////
class Lista         //Clase Lista
{
    private:
        int size;           //Atributo: valor del tamaño de la lista.
        Nodo *head;         //Atributo: direccion del primer(cabeza) nodo de la lista.
    public:
        Lista();            //Constrctor Principal.
        void insertar_nodo(int _size);       //Funcion para insertar nodo a la lista de forma creciente.
        void elminiar_nodo(int elem);      //Funcion para eliminar un nodo de la lista.
        void mostrar_lista();           //Mostrar la lista.
        
        ~Lista();                   //Destructor.
};

Lista::Lista()      //constructor principal
{
    size = NULL;
    head = NULL;
}

void Lista::insertar_nodo(int _dato)        //Funcion para insertar nodo a la lista de forma creciente.
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

void Lista::elminiar_nodo(int elem)     //Funcion para eliminar un nodo de la lista.
{
    Nodo *aux = head;           //Puntero auxiliar que apunta al prmier nodo(cabeza).
    Nodo *aux1 = aux->get_next();       //Puntero auxiliar 1 que apunta a la direccion que guarda el nodo(cabeza).

    if (head->get_elem()==elem)     //Si el valor a eliminar esta en el nodo cabeza de la lista.
    {
        head=aux1;      //agregamos al puntero(cabeza) de la lista la direccion del auxiliar 1.
    }else       //Si no, 
    {
        for (int i=1; i<size; i++)  //Bucle para recorrer los nodos, desde el segundo, de la lista.
        {
            if(aux->get_next()->get_elem() == elem)     //Comprobamos si el valor del siguiente nodo del auxiliar es igual al valor a eliminar.
            {
                aux->set_next(aux1->get_next());        //Si es asi, le agregamos al nodo del auxiliar la direccion del siguiente nodo del auxiliar 1.
            }else//Si no,
            {
                aux=aux->get_next();    //Al auxliliar le agregamos la direccion del siguiente nodo del nodo del axuliar
                aux1=aux1->get_next();  //y al axiliar 1 le agregamos la direccion del siguiente nodo del nodo del axuliar 1.
            }
            
        }
    }
    size--;     //Finalmente disminuimos en uno el tamaño de la lista
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
                cout<<"vacio";      //se imprimer vacio porque ya no hay mas nodos en la lista.
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
//////////////////////////////////////////////////////////////
int main()      //Funcion Principal.
{
    Lista L1;   //Se crea una lista.

    int size;       //Variable para el tamaño de la lista.
    int numero_aleatorio;       //Variable para el numero aleatorio a generar.

    cout<<"---------------------------------------------------------\n";
    cout <<"Lista Inicial\n";
    L1.mostrar_lista();   //Mostramos la lista inicial.
    cout<<"---------------------------------------------------------\n";

    cout<<"Ingresa la dimension de la lista de numeros aleatorios: ";
    cin>>size;          //Ingresamos el tamaño para la lista.
    while (size==NULL || size<1)    //Mientras el tamaño de la lista este vacia o sea negativa
    {
        cout << "\n-> Ingrese un numero positivo para el tamaño de la lista: ";
        cin>>size;      //se ingresara un nuevo valor.
    }

    cout<<"---------------------------------------------------------\n";
    cout << "-> Agregando "<<size<<" numeros aleatorios a la lista..." << endl;
    srand(time(NULL));      //Inicializamos el generador de numeros aleatorios, como si se empezara a girar una ruleta.
    for (int i = 0; i < size; i++)      //Bucle para agregar nodo a la lista conforme al tamaño ingresado.
    {
        numero_aleatorio = rand()%(100 - 1);    //En cada ciclo generamos un numero aleatorio, como si detuvieramos la ruleta,
        L1.insertar_nodo(numero_aleatorio);     //y insertamos ese numero en un nodo de la lista.
    }
    cout << "Lista Completada:\n->  ";
    L1.mostrar_lista();     //Al ingresar todos los numeros en nodos a la lista, mostramos la lista.

    cout<<"---------------------------------------------------------\n";
    cout << "Eliminando otros "<<size<<" numeros aleatorios que sean iguales en la lista..." << endl;
    for (int i = 0; i < size; i++)      //Bucle para elmimnar numeros aleatorio de la lista, conforme al numero del tamaño de la lista.
    {
        numero_aleatorio = rand()%(100 - 1);    //En cada ciclo generamos un numero aleatorio, como si detuvieramos la ruleta,
        L1.elminiar_nodo(numero_aleatorio);     //y eliminamos ese numero que esta en un nodo , si ese nodo y nuermo estan en la lista.
    }
    cout << "Nueva lista:\n->  ";
    L1.mostrar_lista();     //Al eliminar todos los numeros que estabanen la lista, mostramos la nueva lista.
 
    cout<<"---------------------------------------------------------\n";
    cout<<"Lista Eliminada.\n";
    cout<<"---------------------------------------------------------\n";
    L1.~Lista();        //Finalmente eliminamos la lista.
  
    return 0;
}