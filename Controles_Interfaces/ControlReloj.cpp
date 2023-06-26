#include "ControlReloj.h"

ControlReloj* ControlReloj::instancia = NULL;

ControlReloj::ControlReloj(){};

ControlReloj* ControlReloj::getInstancia(){
    if(instancia == NULL){
        instancia = new ControlReloj();
        instancia->relojSistema = Reloj::getInstancia();
    }
    return instancia;
}

DtReloj ControlReloj::getFecha(){
    DtReloj aux;
    aux.setFecha(instancia->relojSistema->getFecha());
    aux.setHora(instancia->relojSistema->getHora());
    return aux;
}

void ControlReloj::setFecha(DtReloj r){
    instancia->relojSistema->setFecha(r.getFecha());
    instancia->relojSistema->setHora(r.getHora());
}

ControlReloj::~ControlReloj(){};