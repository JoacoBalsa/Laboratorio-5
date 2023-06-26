#ifndef DTRELOJ_H
#define DTRELOJ_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtHora.h"

class DtReloj{
    private:
        Fecha fecha;
        Hora hora;
    public:
        DtReloj();
        DtReloj(Fecha f, Hora h);
        Fecha getFecha();
        void setFecha(Fecha f);
        Hora getHora();
        void setHora(Hora h);
        ~DtReloj();   
};

#endif