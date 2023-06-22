#ifndef MENCONTACTO_H
#define MENCONTACTO_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Mensaje.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class MenContacto : public Mensaje{
    private:
        int telefono;
        string nombre;
    public: 
        MenContacto();
        MenContacto(int id, Reloj fec, int tel, string nom);
        int getTelefono();
        void setTelefono(int tel);
        string getNombre();
        void setNombre(string nom);
        ~MenContacto();
};

#endif