#ifndef DTMENCONTACTO_H
#define DTMENCONTACTO_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtMensaje.h"

using namespace std;

class DtMenContacto : public DtMensaje{
    private:
        int telefono;
        string nombre;
    public: 
        DtMenContacto();
        DtMenContacto(int id, Reloj fec, int tel, string nom);
        int getTelefono();
        void setTelefono(int tel);
        string getNombre();
        void setNombre(string nom);
        ~DtMenContacto();

};
#endif