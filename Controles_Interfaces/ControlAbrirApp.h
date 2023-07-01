#ifndef CONTROLABRIRAPP_H
#define CONTROLABRIRAPP_H
#include "IAbrirApp.h"
#include <string.h>
#include <iostream>
#include <map>
#include "../Clases/Usuario.h"
#include "../Clases/Reloj.h"
#include "../DataTypes/DtReloj.h"
#include "ICasosMensaje.h"
#include "ManejadorUsuario.h"
#include "ControlAgregarContacto.h"

using namespace std;

class ControlAbrirApp: public IAbrirApp{
    public:
        ControlAbrirApp();
        DtReloj altaUsuario(int telefono, string nombre, string url, string desc, IReloj* ireloj);
        bool existeUsuario(int tel);
        void setSesionActual(int tel);
        bool sesionActiva();
        void cerrarSesion(IReloj* ireloj);
        void cargarUsuarios(IReloj* ireloj);
        void modificarUsuario(int opc, string nom, string url, string desc);
};
#endif