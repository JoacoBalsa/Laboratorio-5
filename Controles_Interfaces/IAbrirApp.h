#ifndef IABRIRAPP_H
#define IABRIRAPP_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "../DataTypes/DtReloj.h"
#include "IReloj.h"

using namespace std;

class IAbrirApp{
    public:
        virtual DtReloj altaUsuario(int telefono, string nombre, string url, string desc, IReloj* ireloj) = 0;\
        virtual bool existeUsuario(int tel) = 0;
        virtual void setSesionActual(int tel) = 0;
        virtual bool sesionActiva() = 0;
        virtual void cerrarSesion(IReloj* ireloj) = 0;
    
};

#endif