#ifndef RELOJ_H
#define RELOJ_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtHora.h"

class Reloj{
    private:
        Fecha fecha;
        Hora hora;
    public:
        Reloj();
        Reloj(Fecha f, Hora h);
        Fecha getFecha();
        void setFecha(Fecha f);
        Hora getHora();
        void setHora(Hora h);
        ~Reloj();   
};

#endif