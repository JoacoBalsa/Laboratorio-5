#ifndef CONVERSACION_H
#define CONVERSACION_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <map>
#include "DtMensaje.h"

using namespace std;

class Conversacion{
    private:
        //Atributos
        int id;
        bool activa;
        //Pseudoatributos
        map<int, DtMensaje> mensajes;
    public:
        Conversacion();
        Conversacion(int id, bool activa);
        int getId();
        void setId(int id);
        bool getActiva();
        void setActiva(bool a);
        DtMensaje getMensaje(int id);
        void setMensaje(int id, DtMensaje men);
        ~Conversacion();
};

#endif