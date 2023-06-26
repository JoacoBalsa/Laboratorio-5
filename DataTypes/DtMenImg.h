#ifndef DTMENIMG_H
#define DTMENIMG_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtMensaje.h"
#include "../Formato.h"
using namespace std;

class DtMenImg : public DtMensaje {
    private:
        float tamanio;
        Formato formato;
        string texto;
    public:
        DtMenImg();
        DtMenImg(int id, DtReloj fec, float tam, Formato form, string tex);
        float getTamanio();
        void setTamanio(float tam);
        Formato getFormato();
        void setFormato(Formato form);
        string getTexto();
        void setTexto(string text);
        ~DtMenImg();
};
#endif