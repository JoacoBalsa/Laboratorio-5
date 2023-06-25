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
        DtReloj fec_env;
        //Pseudoatributos
        map<int, Visto> confsLec;
        DtUsuario emisor;
    public:
        Mensaje();
        Mensaje(int id, DtReloj fec);
        int getId();
        void setId(int id);
        DtReloj getFecEnv();
        void setFecEnv(DtReloj fec);
        Visto getConfLec(int tel);
        void setConfLec(int tel, Visto confLec);
        DtUsuario getEmisor();
        void setEmisor(DtUsuario e);
        ~Mensaje();
};

#endif