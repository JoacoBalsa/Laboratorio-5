#ifndef MANEJADORUSUARIO_H
#define MANEJADORUSUARIO_H
#include "IAbrirApp.h"
#include <string.h>
#include <iostream>
#include <map>
#include <list>
#include "../Clases/Usuario.h"
#include "../Clases/Reloj.h"
#include "../DataTypes/DtReloj.h"
#include "ICasosMensaje.h"

using namespace std;

class ManejadorUsuario{
    private:
        static ManejadorUsuario* instancia; 
        Usuario* sesionActual;              
        map<int, Usuario*> usuarios;
        ManejadorUsuario();
    public:
        static ManejadorUsuario* getInstancia();
        void agregarUsuario(Usuario* user);
        bool hayActiva();
        bool existeUser(int tel);
        void setActual(int tel);
        void cerrarSesion(IReloj* ireloj);
        Usuario* getUsuario();
        map<int, Conversacion*> getActivas();
        map<int, Conversacion*> getArchivadas();
        void getContactos(list<DtUsuario>& cont);
        ~ManejadorUsuario();
};
#endif