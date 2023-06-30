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

bool ManejadorUsuario::haySesionActiva(){
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

void ManejadorUsuario::getActivas(list<DtConversacion>& Activas){
    this->sesionActual->getActivas(Activas);
}

void ManejadorUsuario::getArchivadas(list<DtConversacion>& Archivadas){
    this->sesionActual->getArchivadas(Archivadas);
}

int ManejadorUsuario::getCantArch(){
    Usuario* usuarioActual = this->sesionActual;
    return usuarioActual->getCantArch();
}

void ManejadorUsuario::getContactos(list<DtUsuario>& cont) {
    this->sesionActual->getContactos(cont);
}

void ManejadorUsuario::setContacto(int tel){
    this->sesionActual->setContacto(tel, this->usuarios.find(tel)->second);
}

Usuario* ManejadorUsuario::getUser(int tel){
    return this->usuarios.find(tel)->second;
}

bool ManejadorUsuario::hayConverActiva(int id){
    return (this->sesionActual->getActiva(id) != NULL);
}

bool ManejadorUsuario::hayConverArchivada(int id){
    return (this->sesionActual->getArchivada(id) != NULL);
}

bool ManejadorUsuario::existeConverActiva(){
    return (this->sesionActual->hayActivas());
}

bool ManejadorUsuario::existeConverArchivada(){
    return (this->sesionActual->hayArchivadas());
}

bool ManejadorUsuario::esContacto(int tel){
    return (this->sesionActual->getContacto(tel) != NULL);
}

bool ManejadorUsuario::hayConverconUser(int tel){
    return (this->sesionActual->hayConverconUser(tel, this->sesionActual->getTel()));
}

ManejadorUsuario::~ManejadorUsuario(){} //Eliminar todos los usuarios de la coleccion liberando la memoria de cada uno