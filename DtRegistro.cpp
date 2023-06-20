#include "DtRegistro.h"

Registro::Registro(){};

Registro::Registro(Fecha f, Hora h){
    this->fecha = f;
    this->hora = h;
};

Fecha Registro::getFecha(){
    return this->fecha;
};

void Registro::setFecha(Fecha f){
    this->fecha = f;
};

Hora Registro::getHora(){
    return this->hora;
};

void Registro::setHora(Hora h){
    this->hora = h;
};

Registro::~Registro(){};