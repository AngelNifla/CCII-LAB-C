#ifndef __ALUMNO_H__
#define __ALUMNO_H__

#include <iostream>

class Alumno            //Clase Alumno.
{
private:
    std::string nombres, apellidos;         //Atributos del objeto.
    int CUI;            //Atributos del objeto.
    int nota1, nota2, nota3;            //Atributos del objeto.
public:
    Alumno(std::string nombre,std::string apellido,int _CUI,int _nota1, int _nota2, int _nota3);        //Constructor por parametros.
    ~Alumno();          //Destructor.

    void promedio();        //Funcion para hallar el promedio.

    int get_CUI()           //Funcion para retornar el CUI.
    {
        return CUI;
    }

    std::string get_primer_nombre()     //Funcion para retornar el primer nombre.
    {
        std::string primer_nombre;      //Varibale para almacenar el primer nombre.
        for (int i = 0; i <= nombres.size(); i++)       //Bucle para estudiar cada valor de la cadena nombres.
        {
            if (nombres[i]==' ' || nombres[i]=='\0')        //Si un caracter de la cadena es espacio o el fin de la cadena.
            {
                return primer_nombre;       //Se retorna la suamtoria de caracteres que son el primer nombre.
            }else       //Si no, 
            {
                primer_nombre = primer_nombre + nombres[i];     //significa que se seguira sumando los caracteres del primer nombre.
            } 
        }    
    }
};
#endif