#ifndef DTMENSIMPLE_H
#define DTMENSIMPLE_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtMensaje.h"

using namespace std;

class DtMenSimple : public DtMensaje {
    private:
        string texto;
    public:
        DtMenSimple();
        DtMenSimple(int id, Reloj fec, string text);
        void setTexto(string texto);
        string getTexto();
        ~DtMenSimple();
};

#endif
