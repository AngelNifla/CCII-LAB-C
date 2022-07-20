#if !defined(_IBUILDER_H_)
#define _IBUILDER_H_

class IBuilder            //Clase IIBuilder.
{
    public:
        virtual ~IBuilder() {}
        //Funciones para producir los componentes independientemente.
        virtual void Producir_color() const = 0;
        virtual void Producir_puertas() const = 0;
        virtual void Producir_llantas() const = 0;
        virtual void Producir_timon() const = 0;
        virtual void Producir_asientos() const = 0;
        virtual void Producir_motor() const = 0;
        virtual void Producir_espejos() const = 0;
        virtual void Producir_vidrios() const = 0;
        virtual void Producir_audio() const = 0;
        virtual void Producir_faros() const = 0;

};

#endif // _IBUILDER_H_
