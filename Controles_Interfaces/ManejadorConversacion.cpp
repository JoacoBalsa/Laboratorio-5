#include "ManejadorConversacion.h"

ManejadorConversacion* ManejadorConversacion::instancia = NULL;

ManejadorConversacion::ManejadorConversacion(){
    conversacionActual = NULL;
}

void ManejadorConversacion::setConversacionActual(int id){
    this->conversacionActual = this->conversaciones.find(id)->second;
}

void ManejadorConversacion::addConver(Conversacion* conver){
    pair <int, Conversacion*> p((this->conversaciones.size()+1), conver);
    this->conversaciones.insert(p);
}

Conversacion* ManejadorConversacion::crearConversacion(Usuario* emisor, Usuario* receptor){
    Conversacion *conver = new Conversacion((this->conversaciones.size()+1), true);
    conver->setIntegrante(emisor->getTel(), emisor);
    conver->setIntegrante(receptor->getTel(), receptor);
    addConver(conver);
    return conver;
} 

ManejadorConversacion* ManejadorConversacion::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorConversacion();
    return instancia;
}

DtUsuario ManejadorConversacion::getReceptor(Usuario* user, int id){
    this->setConversacionActual(id);
    DtUsuario receptor =  this->conversacionActual->getReceptor(user->getTel());
    return receptor;
}

Conversacion* ManejadorConversacion::getConver(int id){
    return this->conversaciones.find(id)->second;
}
