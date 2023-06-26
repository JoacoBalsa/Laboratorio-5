#ifndef CONTROLUSUARIO_H
#define CONTROLUSUARIO_H
#include "IAbrirApp.h"
#include <string.h>
#include <iostream>
#include <map>
#include "../Clases/Usuario.h"
#include "../Clases/Reloj.h"
#include "../DataTypes/DtReloj.h"

using namespace std;

class ControlUsuario: public IAbrirApp{
    private:
        static ControlUsuario* instancia; 
        Usuario* sesionActual;              //Sesion activa
        map<int, Usuario*> usuarios;
        ControlUsuario();
    public:
        static ControlUsuario* getInstancia();
        bool existeUsuario(int tel);
        void setSesionActual(int tel);
        DtReloj altaUsuario(int telefono, string nombre, string url, string desc, IReloj* ireloj);
        bool sesionActiva();
        void cerrarSesion(IReloj* ireloj);
        ~ControlUsuario();
};
#endif