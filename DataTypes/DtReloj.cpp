#include "DtReloj.h"

DtReloj::DtReloj(){}

DtReloj::DtReloj(Fecha f, Hora h){
    this->fecha = f;
    this->hora = h;
};

Fecha DtReloj::getFecha(){
    return this->fecha;
};

void DtReloj::setFecha(Fecha f){
    this->fecha = f;
};

Hora DtReloj::getHora(){
    return this->hora;
};

void DtReloj::setHora(Hora h){
    this->hora = h;
};

DtReloj::~DtReloj(){};