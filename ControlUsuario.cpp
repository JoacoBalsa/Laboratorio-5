#include "ControlUsuario.h"
#include "DtReloj.h"
#include "Reloj.h"

ControlUsuario* ControlUsuario::instancia = NULL;

ControlUsuario::ControlUsuario(){
    sesionActual = NULL;
}

ControlUsuario* ControlUsuario::getInstancia(){
    if (instancia == NULL)
        instancia = new ControlUsuario();
    return instancia;
}

bool ControlUsuario::existeUsuario(int tel){
    return usuarios.find(tel) != usuarios.end();
}

void ControlUsuario::setSesionActual(int tel){
    Reloj* relojSistema = Reloj::getInstancia();
    Usuario* usuarioActual = usuarios.find(tel)->second;
    usuarioActual->setUltVez(DtReloj(relojSistema->getFecha(), relojSistema->getHora()));
    sesionActual = usuarioActual;
}

DtReloj ControlUsuario::altaUsuario(int telefono, string nombre, string url, string desc, IReloj* ireloj){
    DtReloj relojSis = ireloj->getFecha();
    Usuario* user = new Usuario(telefono, nombre, relojSis, desc, url, relojSis);
    pair <int, Usuario*> p(telefono, user);
    usuarios.insert(p);
    return user->getFecha();
}

bool ControlUsuario::sesionActiva(){
    return this->sesionActual != NULL;
}

void ControlUsuario::cerrarSesion(){
    this->sesionActual = NULL;
}

ControlUsuario::~ControlUsuario(){} //Eliminar todos los usuarios de la coleccion liberando la memoria de cada uno