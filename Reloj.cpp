#include "Reloj.h"

Reloj* Reloj::instancia = NULL;

Reloj::Reloj(){
    this->fecha = Fecha();
    this->hora = Hora();
}

Reloj* Reloj::getInstancia(){
    if (instancia == NULL)
    {
        instancia = new Reloj();
    }
    return instancia;
}

Fecha Reloj::getFecha(){
    return this->fecha;
}

void Reloj::setFecha(Fecha f){
    cout << "seteo fecha desde reloj" << endl;
    this->fecha = f;
}

Hora Reloj::getHora(){
    return this->hora;
}

void Reloj::setHora(Hora h){
    this->hora = h;
}

Reloj::~Reloj(){}