#ifndef DTMENSAJE_H
#define DTMENSAJE_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtRegistro.h"
using namespace std;

class DtMensaje{
    private:
        int id;
        Registro fec_env;
    public:
        DtMensaje();
        DtMensaje(int id, Registro fec);
        int getId();
        void setId(int id);
        Registro getFecEnv();
        void setFecEnv(Registro fec);
        ~DtMensaje();
};

#endif