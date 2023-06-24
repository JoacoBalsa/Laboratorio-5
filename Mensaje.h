#ifndef MENSAJE_H
#define MENSAJE_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtReloj.h"
#include "DtVisto.h"
#include <map>

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class Mensaje{
    private:
        //Atributos
        int id;
        Reloj fec_env;
        //Pseudoatributos
        map<int, Visto> confsLec;
        DtUsuario emisor;
    public:
        Mensaje();
        Mensaje(int id, Reloj fec);
        int getId();
        void setId(int id);
        Reloj getFecEnv();
        void setFecEnv(Reloj fec);
        Visto getConfLec(int tel);
        void setConfLec(int tel, Visto confLec);
        DtUsuario getEmisor();
        void setEmisor(DtUsuario e);
        ~Mensaje();
};

#endif