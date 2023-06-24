#ifndef DTVISTO_H
#define DTVISTO_H
#include <stdio.h>
#include <iostream>
#include <string>
#include "DtUsuario.h"
#include "DtReloj.h"

using namespace std;

class Visto{
    private:
        bool confLec;
        DtUsuario user;
        Reloj datoLec;
    public:
        Visto();
        Visto(bool cl, DtUsuario u, Reloj dl);
        bool getConfLec();
        DtUsuario getUser();
        Reloj getDatoLec();
        void setConfLec(bool cl);
        void setUser(DtUsuario u);
        void setDatoLec(Reloj dl);
};

#endif