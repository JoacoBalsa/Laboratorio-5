#ifndef RELOJ_H
#define RELOJ_H
#include "../DataTypes/DtFecha.h"
#include "../DataTypes/DtHora.h"

class Reloj{
    private:
        static Reloj* instancia;
        Fecha fecha;
        Hora hora;
        Reloj();
    public:
        static Reloj* getInstancia();
        Fecha getFecha();
        void setFecha(Fecha f);
        Hora getHora();
        void setHora(Hora h);
        ~Reloj();  
};

#endif