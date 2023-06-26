#include "ControlAbrirApp.h"
#include "ManejadorUsuario.h"

ControlAbrirApp::ControlAbrirApp(){}

DtReloj ControlAbrirApp::altaUsuario(int telefono, string nombre, string url, string desc, IReloj* ireloj){
    DtReloj relojSis = ireloj->getFecha();
    Usuario* user = new Usuario(telefono, nombre, relojSis, desc, url, relojSis); 
    ManejadorUsuario *mU = mU->getInstancia();
    mU->agregarUsuario(user);
    return user->getFecha();
}

void ControlAbrirApp::setSesionActual(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    mU->setActual(tel);
}

bool ControlAbrirApp::existeUsuario(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    return mU->existeUser(tel);
}

bool ControlAbrirApp::sesionActiva(){
    ManejadorUsuario *mU = mU->getInstancia();
    return mU->hayActiva();
}

void ControlAbrirApp::cerrarSesion(IReloj* ireloj){
    ManejadorUsuario *mU = mU->getInstancia();
    mU->cerrarSesion(ireloj);
}