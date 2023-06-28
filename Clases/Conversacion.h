#ifndef CONVERSACION_H
#define CONVERSACION_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <map>
#include "../DataTypes/DtMensaje.h"
#include "../DataTypes/DtUsuario.h"

using namespace std;

class Conversacion{
    private:
        //Atributos
        int id;
        bool activa;
        //Pseudoatributos
        map<int, DtMensaje> mensajes;
        map<int, DtUsuario> integrantes;
    public:
        Conversacion();
        Conversacion(int id, bool activa);
        int getId();
        void setId(int id);
        bool getActiva();
        void setActiva(bool a);
        DtMensaje getMensaje(int id);
        void setMensaje(int id, DtMensaje men);
        DtUsuario getIntegrante(int tel);
        void setIntegrante(int tel, DtUsuario integrante);
        map<int, DtUsuario> getIntegrantes();
        ~Conversacion();
};

#endif