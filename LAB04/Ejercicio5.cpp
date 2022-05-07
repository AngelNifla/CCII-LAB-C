/*
Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock.
La tienda dispone de 10 productos distintos. El programa debe ser capaz de:
    a. Dar de alta un producto nuevo.
    b. Buscar un producto por su nombre.
    c. Modificar el stock y precio de un producto.
*/

#include <iostream>

using namespace std;

void dar_alta_producto(string* nombre,double* precio,int* cantidad)     //Funcion que ejecuta la alta del producto.
{
    string new_name;
    cout<<"\n--------------------------------------------------\n\n";
    for (int i = 0; i < 10; i++)        //Bucle que recorrera todo elemento de los arrays.
    {
        if (nombre[i]=="")  //Si el nombre de la posicion del ciclo esta vacio
        {
            cout<<"\t-> Ingrese el nombre del producto: ";      //Se piden y se ingresan datos a ese espacio vacio en cada uno de los arrays.
            cin>>new_name;
            nombre[i]=new_name;
            cout<<"\t-> Ingrese el precio del producto: ";
            cin>>precio[i];
            cout<<"\t-> Ingrese la cantidad del producto: ";
            cin>>cantidad[i];
            break;              //y el bucle concluye.
        }else if(i==9 && nombre[i]!="")//Si el ultimo dato de las listas esat lleno
        {
            cout<<"-> Lista llena con 10 productos.";   //se informa que el array esta lleno.
        }
    }
}

void mostrar_producto(string* nombre,double* precio,int* cantidad,int posicion) //Funcion que muestra el producto en una determinada posicion.
{
    cout<<"\n--------------------------------------------------\n\n";
    cout<<"\t-> Nombre del producto: "<<nombre[posicion]<<endl;
    cout<<"\t-> Precio del producto: "<<precio[posicion]<<endl;
    cout<<"\t-> Stok del producto: "<<cantidad[posicion]<<endl;
}

void buscar_producto(string* nombre,double* precio,int* cantidad)       //Funcion que busca un producto por el nombre.
{
    string nombre_producto;
    int posicion_producto=-1;
    cout<<"\n--------------------------------------------------\n\n";
    cout<<"Ingrese el nombre del producto que decea buscar: ";      //Se pide el nombre del producto que se busca.
    cin>>nombre_producto;
    for(int i = 0; i < 10; i++)     //Bucle que recorrera todo elemento de los arrays.
    {
        if (nombre[i]==nombre_producto)     //Si el nombre concuerda con uno de los datos de la lista nombre.
        {
            posicion_producto=i;        //Se guarda esa posicion
            mostrar_producto(nombre, precio, cantidad, posicion_producto);      //y se muestra los detalles de ese dato.
        }
    }
    if (posicion_producto==-1)      //Si la posicion sigue siendo -1
    {
        cout<<"-> El producto no existe.";      //significa que el producto no existe en la lista.
    }
}

int mostrar_productos(string* nombre,double* precio,int* cantidad)      //Funcion que muestra los productos existentes en los arrays y envia su numero.
{
    int numero_de_productos=0;
    cout<<"\n--------------------------------------------------\n\n";
    for (int i = 0; i < 10; i++)        //Bucle que recorrera todo elemento de los array.
    {
        if (nombre[i]=="")      //Si el nombre de la posicion del ciclo esta vacio
        {
            cout<<" ) El resto de la lista esta vacia.";
            return numero_de_productos;     //Se envia el numero de productos existentes ya guardados.
        }
        cout<<i+1<<")   -> Producto: "<<nombre[i]<<" -> Precio: "<<   //SIi no, se imprime los datos existentes en una relacion desde el 1.
        precio[i]<<" -> Stok: "<<cantidad[i]<<endl;
        numero_de_productos=numero_de_productos+1;      //y se aumenta en 1 el numero de productos ya existentes
    }
    return numero_de_productos;     //y envia el numero de productos existentes ya guardados.
    
}

void modificar_producto(string* nombre,double* precio,int* cantidad)        //Funcion que modifica un producto.
{
    int limite = mostrar_productos(nombre, precio, cantidad);       //Se obtiene el numero de datos existentes de la funcion mostrar_producto.
    int posicion_producto=0;
    cout<<"\n--------------------------------------------------\n\n";
    cout<<"-> Ingrese el numero del producto que decea modificar: ";
    cin>>posicion_producto;                 //Mostrado los datos existentes, se pide el numero de dato segun la lista.
    posicion_producto=posicion_producto-1;      //A ese numero se le resta 1, para rastrear el dato en la lista.
    if (limite>=posicion_producto>0)            //Si ese el usuario ingresa el dato entre los que estaban en la lista de existencia
    {
        cout<<"\n-> Ingrese el nuevo precio del producto: ";
        cin>>precio[posicion_producto];         //se pide el nuevo precio del producto y
        cout<<"-> Ingrese la nueva cantidad del producto: ";
        cin>>cantidad[posicion_producto];           //tambien el nuevo stock.
    }else       //Si no,
    {
        cout<<"\n-> La Posicion no existe o no puede modificar esa posicion.";      //Se especifica que esa opcion no existe.
    }
}

int main()  //Funcion principal.
{
    string *nombre;         //Puntero a un string  
    double *precio;         //Puntero a un double
    int *cantidad;          //Puntero a un int
    nombre = new string[10];        //Inicializamos los punteros en array para el nombre del producto
    precio = new double[10];        //Inicializamos los punteros en array para el precio
    cantidad = new int[10];     //Inicializamos los punteros en array para el stock

    int opcion=1;           //variable para la opcion del menu, que al inicio seras 1.

    while (opcion==1)           //Si la opcion  es 1, se ejecuta el bucle.
    {
        cout<<"\n--------------------------------------------------\n\n";

        cout<<"1) Dar de alta un producto nuevo.\n";            //Se muestra las opciones de numeros a escojer.
        cout<<"2) Buscar un producto por su nombre.\n";
        cout<<"3) Modificar el stock y precio de un producto.\n";
        cout<<"4) Salir.\n";
        
        cout<<"\nIngrese una opcion: ";
        cin>>opcion;

        if (5>opcion>0)     //Si al opcion es igual a las que se ofrecieron o las existentes se procede a llamar a las funciones que se ofrecieron.
        {
            if (opcion==1)
            {
                dar_alta_producto(nombre, precio,cantidad);
            }else if(opcion==2)
            {
                buscar_producto( nombre,precio,cantidad);
            }else if (opcion==3)
            {
                modificar_producto(nombre,precio,cantidad);
            }else           //Solo si se eleige 4 como opcion el programa termina.
            {
                cout<<"\n--------------------------------------------------\n\n";
                cout<<"-> Usted saalio del programa.";
                cout<<"\n--------------------------------------------------\n\n";
                return 0;
            }
        }
        opcion=1;       //En caso contrario la variable opcion seguira siendo 1 y el bucle continuara.
    } 
}