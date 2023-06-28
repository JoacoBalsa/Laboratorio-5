#ifndef CONVERSACION_H
#define CONVERSACION_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <map>
#include "Mensaje.h"
#include "Usuario.h"

class Usuario;

using namespace std;

class Conversacion{
    private:
        //Atributos
        int id;
        bool activa;
        //Pseudoatributos
        map<int, Mensaje*> mensajes;
        map<int, Usuario*> integrantes;
    public:
        Conversacion();
        Conversacion(int id, bool activa);
        int getId();
        void setId(int id);
        bool getActiva();
        void setActiva(bool a);
        Mensaje* getMensaje(int id);
        void setMensaje(int id, Mensaje* men);
        Usuario* getIntegrante(int tel);
        void setIntegrante(int tel, Usuario* integrante);
        ~Conversacion();
};

#endif