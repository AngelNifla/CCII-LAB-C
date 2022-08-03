#if !defined(_NODO_H_)
#define _NODO_H_

template<typename T>        //Template.
class Nodo          //Clase.
{
private:
    T dato;         //Atributo: dato del nodo.
    Nodo<T>* HijoI;     //Atributo: Puntero Nodo Hijo Izquierdo.
    Nodo<T>* HijoD;     //Atributo: Puntero Nodo Hijo Derecho.
public:
    Nodo();     //Constructor.
    ~Nodo();        //Destructor.

    void set_dato(T _dato)      //Funcion que modifica el dato.
    {
        this->dato = _dato;
    }
    void set_HijoI()        //Funcion que inicializa el puneto nodo HijoI.
    {
        this->HijoI = new Nodo<T>;
    }
    void set_HijoD()        //Funcion que inicializa el puneto nodo HijoD.
    {
        this->HijoD = new Nodo<T>;
    }
    T get_dato()        //Funcion que retorna el dato del nodo.
    {
        return this->dato;
    }
    Nodo* get_HijoI()       //Funcion que retorna el puntero del nodo HijoI.
    {
        return this->HijoI;
    }
    Nodo* get_HijoD()       //Funcion que retorna el puntero del nodo HijoD.
    {
        return this->HijoD;
    }
};

template<typename T>        //Template
Nodo<T>::Nodo()     //Constructor.
{
    this->dato = NULL;
    this->HijoD = NULL;
    this->HijoI = NULL;
}

template<typename T>        //Template
Nodo<T>::~Nodo()        //Destructor.
{
}

#endif // _NODO_H_
