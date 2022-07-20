#if !defined(_BUILDERESPECIFICO_H_)
#define _BUILDERESPECIFICO_H_

#include "Producto1.h"      //Se incluye codigo del archivo especificado.
#include "IBuilder.h"       //Se incluye codigo del archivo especificado.

std::string Ingresar_color()      //Funcion global para ingresar color.
{
    std::string _color;
    std::cout<<"\n-> Ingrese color: ";
    std::cin>>_color;
    return _color;
}

class BuilderEspecifico : public IBuilder       //Funcion BuilderEspecifico con herencia.
{
    private:
        Producto1* product;     //Atributo: objeto producto.
    public:
        BuilderEspecifico()     //Constructor.
        {   
            this->Reset();
        }
        ~BuilderEspecifico()        //Destructor.
        {  
            delete product;
        }
        void Reset()            //Funcion Reset.
        {
            this->product = new Producto1();
        }
        

        //Funciones donde se inicializa los componentes.
        void Producir_color() const override
        {
            std::string dato{"Auto "};
            std::cout<<"\n----------Produciendo Auto----------\n";
            dato += Ingresar_color();
            this->product->componentes.color = dato;
            dato.~basic_string();
        }
        void Producir_puertas() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Puertas:----------\n";
            while (opcion<1 || opcion>2)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) 4 puertas.\n";
                std::cout<<"\t2) 2 puertas.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "4 ";
            }else
            {
                dato = "2 ";
            }
            dato += Ingresar_color();
            this->product->componentes.puertas = dato;
            dato.~basic_string();
        }
        void Producir_llantas() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Llantas:----------\n";
            while (opcion<1 || opcion>3)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Aro 13.\n";
                std::cout<<"\t2) Aro 14.\n";
                std::cout<<"\t3) Aro 15.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Aro 13";
            }else if(opcion==2)
            {
                dato = "Aro 14";
            }else
            {
                dato = "Aro 15";
            }
            this->product->componentes.llantas = dato;
            dato.~basic_string();
        }
        void Producir_timon() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Timon:----------\n";
            while (opcion<1 || opcion>2)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Estandar.\n";
                std::cout<<"\t2) Amplio.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Size Estandar";
            }else
            {
                dato = "Size Amplio";
            }
            this->product->componentes.timon = dato;
            dato.~basic_string();
        }
        void Producir_asientos() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Asientos:----------\n";
            while (opcion<1 || opcion>2)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Cuero.\n";
                std::cout<<"\t2) Plastico.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "4 de cuero ";
            }else
            {
                dato = "4 plastificados ";
            }
            dato += Ingresar_color();
            this->product->componentes.asientos = dato;
            dato.~basic_string();
        }
        void Producir_motor() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Motor:----------\n";
            while (opcion<1 || opcion>3)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Potencia 1.4 .\n";
                std::cout<<"\t2) Potencia 1.6 .\n";
                std::cout<<"\t3) Potencia 2.0 .\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Potencia 1.4";
            }else if(opcion==2)
            {
                dato = "Potencia 1.6";
            }else
            {
                dato = "Potencia 2.0";
            }
            this->product->componentes.motor = dato;
            dato.~basic_string();
        }
        void Producir_espejos() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Espejos:----------\n";
            while (opcion<1 || opcion>2)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Manuales.\n";
                std::cout<<"\t2) Automaticos.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Manueales ";
            }else
            {
                dato = "Automaticos ";
            }
            dato += Ingresar_color();
            this->product->componentes.espejos = dato;
            dato.~basic_string();
        }
        void Producir_vidrios() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Vidrios:----------\n";
            while (opcion<1 || opcion>3)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Sin Polarizado.\n";
                std::cout<<"\t2) Polarizado Medio.\n";
                std::cout<<"\t3) Polarizado Fuerte.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Sin Polarizado";
            }else if(opcion==2)
            {
                dato = "Polarizado Medio";
            }else
            {
                dato = "Polarizado Fuerte";
            }
            this->product->componentes.vidrios = dato;
            dato.~basic_string();
        }
        void Producir_audio() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Audio:----------\n";
            while (opcion<1 || opcion>2)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Estandar.\n";
                std::cout<<"\t2) Tactil.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Estandar";
            }else
            {
                dato = "Tactil";
            }
            this->product->componentes.audio = dato;
            dato.~basic_string();
        }
        void Producir_faros() const override
        {
            std::string dato;
            int opcion{0};
            std::cout<<"\n----------Produciendo Faros:----------\n";
            while (opcion<1 || opcion>2)
            {
                std::cout<<"Opciones:\n";
                std::cout<<"\t1) Estandar.\n";
                std::cout<<"\t2) Led.\n";
                std::cout<<"\n-> Ingrese opcion:";
                std::cin>> opcion;
            }
            if (opcion==1)
            {
                dato = "Estandar ";
            }else
            {
                dato = "Led ";
            }
            dato += Ingresar_color();
            this->product->componentes.faros = dato;
            dato.~basic_string();
        }

        Producto1* GetProducto() {
            Producto1* resultado = this->product;
            this->Reset();
            return resultado;
        }
};

#endif // _BUILDERESPECIFICO_H_
