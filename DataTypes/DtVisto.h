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
        DtReloj datoLec;
    public:
        Visto();
        Visto(bool cl, DtUsuario u, DtReloj dl);
        bool getConfLec();
        DtUsuario getUser();
        DtReloj getDatoLec();
        void setConfLec(bool cl);
        void setUser(DtUsuario u);
        void setDatoLec(DtReloj dl);
};

#endif