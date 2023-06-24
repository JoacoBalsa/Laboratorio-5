#ifndef CONTROLABRIRAPP_H
#define CONTROLABRIRAPP_H
#include "IControlAbrirApp.h"
#include <string.h>
#include <iostream>

using namespace std;

class ControlAbrirApp: public IControlAbrirApp{
    public:
        void abrirSesion();
        void altaUsuario(int telefono, string nombre, string url, string desc);
        ~ControlAbrirApp();
};
#endif