#ifndef ICONTROLABRIRAPP_H
#define ICONTROLABRIRAPP_H
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class IControlAbrirApp{
    public:
        virtual void abrirSesion() = 0;
        virtual void altaUsuario(int telefono, string nombre, string url, string desc) = 0;
        virtual ~IControlAbrirApp() = 0 ;
};

#endif