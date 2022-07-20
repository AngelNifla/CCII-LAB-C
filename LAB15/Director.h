#if !defined(_DIRECTOR_H_)
#define _DIRECTOR_H_

#include "IBuilder.h"       //Se incluye codigo del archivo especificado.

class Director {            //Clase Director.
    private:
        IBuilder* builder;
    public:
        void set_builder(IBuilder* builder)
        {
            this->builder = builder;
        }
        void BuildProductoMin()
        {
            this->builder->Producir_color();
            this->builder->Producir_puertas();
            this->builder->Producir_llantas();
            this->builder->Producir_timon();
            this->builder->Producir_asientos();
            this->builder->Producir_motor();
        }
        void BuildProductoCompleto() {
            this->builder->Producir_color();
            this->builder->Producir_puertas();
            this->builder->Producir_llantas();
            this->builder->Producir_timon();
            this->builder->Producir_asientos();
            this->builder->Producir_motor();
            this->builder->Producir_espejos();
            this->builder->Producir_vidrios();
            this->builder->Producir_audio();
            this->builder->Producir_faros();
        }
};

#endif // _DIRECTOR_H_
