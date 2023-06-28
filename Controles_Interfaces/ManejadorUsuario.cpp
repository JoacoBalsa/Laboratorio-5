#include "ManejadorUsuario.h"

ManejadorUsuario* ManejadorUsuario::instancia = NULL;

ManejadorUsuario::ManejadorUsuario(){
    sesionActual = NULL;
}

ManejadorUsuario* ManejadorUsuario::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorUsuario();
    return instancia;
}

bool ManejadorUsuario::existeUser(int tel){      
    return (this->usuarios.find(tel) != this->usuarios.end());
}

void ManejadorUsuario::setActual(int tel){      
    Reloj* relojSistema = Reloj::getInstancia();
    Usuario* usuarioActual = this->usuarios.find(tel)->second;
    usuarioActual->setUltVez(DtReloj(relojSistema->getFecha(), relojSistema->getHora()));
    sesionActual = usuarioActual;
}

void ManejadorUsuario::agregarUsuario(Usuario* user){  
    pair <int, Usuario*> p(user->getTel(), user);
    this->usuarios.insert(p);
}

bool ManejadorUsuario::hayActiva(){
    return (this->sesionActual != NULL);
}

void ManejadorUsuario::cerrarSesion(IReloj* ireloj){
    int tel = this->sesionActual->getTel();
    usuarios[tel]->setUltVez(ireloj->getFecha()); //Actualiza la ultima hora de conexion de la sesion actual
    this->sesionActual = NULL; //Cierra la sesion actual
}

Usuario* ManejadorUsuario::getUsuario(){
    return this->sesionActual;
}

map<int, Conversacion*> ManejadorUsuario::getActivas(){
    Usuario* usuarioActual = this->sesionActual;
    return usuarioActual->getActivas();
}

map<int, Conversacion*> ManejadorUsuario::getArchivadas(){
    Usuario* usuarioActual = this->sesionActual;
    return usuarioActual->getArchivadas();
}

void ManejadorUsuario::getContactos(list<DtUsuario>& cont) {
    this->sesionActual->getContactos(cont);
}

ManejadorUsuario::~ManejadorUsuario(){} //Eliminar todos los usuarios de la coleccion liberando la memoria de cada uno