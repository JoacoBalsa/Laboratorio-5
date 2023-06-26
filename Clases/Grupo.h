#ifndef GRUPO_H
#define GRUPO_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Conversacion.h"

using namespace std;

class Grupo : public Conversacion{
    private:
        string nombre;
        string perfil_URL;
        Fecha fecCreac;
    public:
        Grupo();
        Grupo(string n, string p, Fecha fc);
        string getNombre();
        void setNombre(string n);
        string getPerfil();
        void setPerfil(string p);
        Fecha getFecCreac();
        void setFecCreac(Fecha f);
        ~Grupo();
};

#endif