#include "Datos.h"      //Se incluye codigo del archivo especificado.

Datos::Datos(int _num_filas)                //Constructor.
{
    num_columnas = 4;
    num_filas = _num_filas;
    matriz = new int*[num_filas];
    for (int i = 0; i < num_filas; i++)
    {
        matriz[i] = new int[num_columnas];
        for (int j = 0; j < num_columnas; j++)
        {
            (*(*(matriz+i)+j)) = NULL;
        }
    }
}

void  Datos::Dar_alta_producto()                //Funcion para Dar de alta a un producto nuevo.
{
    for (int i = 0; i < num_filas; i++)
    {
        if (!(*(*(matriz+i)+0)))
        {
            std::cout<<"\n\tIngrese Codigo-> Nombre(numeros) -> Precio -> Stock:\n";
            for (int j = 0; j < num_columnas; j++)
            {
                std::cout<<"Ingresar dato: ";
                std::cin>>(*(*(matriz+i)+j));
            }
            return;
        } 
    }
    std::cout<<"\n-> Lista llena.\n";
}

void  Datos::Dar_baja_producto()                //Funcion para Dar de baja a un producto.
{
    int _codigo{};
    std::cout<<"\n\tIngrese el codigo del producto a dar de baja:";
    std::cin>>_codigo;
    for (int i = 0; i < num_filas; i++)
    {
        if ((*(*(matriz+i)))==_codigo)
        {
            if ((*(*(matriz+i)+3))==0)
            {
                std::cout<<"\n-> Producto agotado. No se puede dar de baja.\n";
            }else
            {
                (*(*(matriz+i)+3))--;
                std::cout<<"\n-> Producto dado de baja.\n";
            }
        }
        
    }
    
}

void  Datos::buscar_producto(int opcion)                //Funcion para buscar un producto.
{
    int nombre_o_codigo{};
    if (opcion == 1)    //Buscar por nombre.
    {
        std::cout<<"\n\tIngrese el nombre del producto a buscar:";
        std::cin>>nombre_o_codigo;
        for (int i = 0; i < num_filas; i++)
        {
            if ((*(*(matriz+i)+1)) == nombre_o_codigo)
            {
                std::cout<<"-> Producto encontrado.\n";
                this->mostrar_producto_s(1,i);
                return;
            }
        }
    }else
    {
        std::cout<<"\n\tIngrese el codigo del producto a buscar:";
        std::cin>>nombre_o_codigo;
        for (int i = 0; i < num_filas; i++)
        {
            if ((*(*(matriz+i))) == nombre_o_codigo)
            {
                std::cout<<"-> Producto encontrado.\n";
                this->mostrar_producto_s(1,i);
                return;
            }
        }
    }
    std::cout<<"-> Producto no encontrado.\n";
}

void  Datos::modificar_producto(int opcion)             //Funcion para modificar un producto.
{
    int _codigo{};
    std::cout<<"\n\tIngrese el codigo del producto a modificar:";
    std::cin>>_codigo;
    for (int i = 0; i < num_filas; i++)
    {
        if ((*(*(matriz+i))) == _codigo)
        {
            std::cout<<"\n\tIngrese el nuevo valor:";
            std::cin>>(*(*(matriz+i)+opcion));
            std::cout<<"-> Producto modificado.\n";
            this->mostrar_producto_s(1,i);
        }
    }
}

void Datos::mostrar_producto_s(int opcion, int fila)                //Funcion para mostrar uno o los productos.
{
    std::cout<<"\nCodigo -> Nombre -> Precio -> Stock\n";
    if (opcion == 1)
    {
        for (int i = 0; i < num_columnas; i++)
        {
            std::cout<<(*(*(matriz+fila)+i))<<"\t";
        }
    }else
    {
        for (int i = 0; i < num_filas; i++)
        {
            for (int j = 0; j < num_columnas; j++)
            {
                std::cout<<(*(*(matriz+i)+j))<<"\t";
            }
            std::cout<<"\n";
        }
    }
    std::cout<<"\n";
}

Datos::~Datos()             //Destructor.
{
}