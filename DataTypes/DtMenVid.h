#ifndef DTMENVID_H
#define DTMENVID_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtReloj.h"
#include "DtMensaje.h"
#include "Formato.h"
using namespace std;

class DtMenVid : public DtMensaje {
    private:
        float dur;
    public:
        DtMenVid();
        DtMenVid(int id, Reloj fec, float dur);
        float getDuracion();
        void setDuracion(float dur);
        ~DtMenVid();
};
#endif