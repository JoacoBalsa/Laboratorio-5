#ifndef MENSIMPLE_H
#define MENSIMPLE_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Mensaje.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class MenSimple : public Mensaje{
    private:
        string texto;
    public:
        MenSimple();
        MenSimple(int id, DtReloj fec, string text);
        void setTexto(string text);
        string getTexto();
        ~MenSimple();
};

#endif