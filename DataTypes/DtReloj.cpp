#include "DtReloj.h"

Reloj::Reloj(){};

Reloj::Reloj(Fecha f, Hora h){
    this->fecha = f;
    this->hora = h;
};

Fecha Reloj::getFecha(){
    return this->fecha;
};

void Reloj::setFecha(Fecha f){
    this->fecha = f;
};

Hora Reloj::getHora(){
    return this->hora;
};

void Reloj::setHora(Hora h){
    this->hora = h;
};

Reloj::~Reloj(){};