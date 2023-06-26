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
    cout << "Voy a setear la fecha" << endl;
    instancia->relojSistema->setFecha(r.getFecha());
    cout << "Voy a setear la hora" << endl;
    instancia->relojSistema->setHora(r.getHora());
}

ControlReloj::~ControlReloj(){};