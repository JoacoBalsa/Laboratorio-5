#include "ControlAbrirApp.h"
#include "ManejadorUsuario.h"
#include "ControlReloj.h"

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
    return mU->haySesionActiva();
}

void ControlAbrirApp::cerrarSesion(IReloj* ireloj){
    ManejadorUsuario *mU = mU->getInstancia();
    mU->cerrarSesion(ireloj);
}

void ControlAbrirApp::cargarUsuarios(IReloj* ireloj){
    altaUsuario(1, "Agustin", "url1", "Estudiante", ireloj);
    altaUsuario(2, "Joaquin", "url2", "Estudiante", ireloj);
    altaUsuario(3, "Felipe", "url3", "Estudiante", ireloj);
    altaUsuario(4, "Nicolas", "url6", "Estudiante", ireloj);
    altaUsuario(5, "Guillermo", "url8", "Estudiante", ireloj);
    ManejadorUsuario *mU = mU->getInstancia();
    mU->setActual(1);
    mU->setContacto(2);
    mU->setContacto(3);
    mU->setContacto(4);
    mU->setActual(2);
    mU->setContacto(1);
    mU->setContacto(3);
    mU->setContacto(4);
    mU->setContacto(5);
    mU->setActual(3);
    mU->setContacto(1);
    mU->setContacto(2);
    mU->setActual(4);
    mU->setContacto(1);
    mU->setContacto(3);
    mU->setContacto(3);
    mU->setContacto(5);
    mU->cerrarSesion(ireloj);
}

void ControlAbrirApp::modificarUsuario(int opc, string nom, string url, string desc){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    switch (opc){
    case 1:
        user->setNombre(nom);
    break;
    case 2:
        user->setImg(url);
    break;
    case 3:
        user->setBio(desc);
    break;
    }
}