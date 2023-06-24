#ifndef MENIMG_H
#define MENIMG_H
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
        MenSimple(int id, Reloj fec, string text);
        void setTexto(string text);
        string getTexto();
        ~MenSimple();
};

#endif