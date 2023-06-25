#include "ControlUsuario.h"
#include "DtReloj.h"
#include "Reloj.h"

ControlUsuario* ControlUsuario::instancia = NULL;

ControlUsuario::ControlUsuario(){
    sesionActual = NULL;
}

ControlUsuario* ControlUsuario::getInstancia(){
    if (instancia == NULL)
    {
        instancia = new ControlUsuario();
    }
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

DtReloj ControlUsuario::altaUsuario(int telefono, string nombre, string url, string desc){
    Reloj* relojSis = Reloj::getInstancia();
    Usuario* user = new Usuario(telefono, nombre, DtReloj(relojSis->getFecha(), relojSis->getHora()), desc, url, DtReloj(relojSis->getFecha(), relojSis->getHora()));
    pair <int, Usuario*> p(telefono, user);
    usuarios.insert(p);
    return user->getUltVez();
}

bool ControlUsuario::sesionActiva(){
    return this->sesionActual != NULL;
}

ControlUsuario::~ControlUsuario(){} //Eliminar todos los usuarios de la coleccion liberando la memoria de cada uno