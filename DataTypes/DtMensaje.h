#ifndef DTMENSAJE_H
#define DTMENSAJE_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtReloj.h"
using namespace std;

class DtMensaje{
    private:
        int id;
        Reloj fec_env;
    public:
        DtMensaje();
        DtMensaje(int id, Reloj fec);
        int getId();
        void setId(int id);
        Reloj getFecEnv();
        void setFecEnv(Reloj fec);
        ~DtMensaje();
};

#endif