#ifndef MENIMG_H
#define MENIMG_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Mensaje.h"
#include "../Formato.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class MenImg : public Mensaje{
    private:
        string url;
        float tamanio;
        Formato formato;
        string texto;
    public:
        MenImg();
        MenImg(int id, DtReloj fec, float tam, Formato form, string text);
        string getUrl();
        void setUrl(string u);
        float getTamanio();
        void setTamanio(float tam);
        Formato getFormato();
        void setFormato(Formato form);
        string getTexto();
        void setTexto(string text);
        ~MenImg();
};

#endif