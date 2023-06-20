#ifndef DTREGISTRO_H
#define DTREGISTRO_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtHora.h"

class Registro{
    private:
        Fecha fecha;
        Hora hora;
    public:
        Registro();
        Registro(Fecha f, Hora h);
        Fecha getFecha();
        void setFecha(Fecha f);
        Hora getHora();
        void setHora(Hora h);
        ~Registro();   
};

#endif