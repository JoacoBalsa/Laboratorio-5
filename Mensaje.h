#ifndef MENSAJE_H
#define MENSAJE_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtReloj.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class Mensaje{
    private:
        int id;
        Reloj fec_env;
    public:
        Mensaje();
        Mensaje(int id, Reloj fec);
        int getId();
        void setId(int id);
        Reloj getFecEnv();
        void setFecEnv(Reloj fec);
        ~Mensaje();
};

#endif