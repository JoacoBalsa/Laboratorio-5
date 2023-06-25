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
        DtReloj fec_env;
    public:
        DtMensaje();
        DtMensaje(int id, DtReloj fec);
        int getId();
        void setId(int id);
        DtReloj getFecEnv();
        void setFecEnv(DtReloj fec);
        ~DtMensaje();
};

#endif