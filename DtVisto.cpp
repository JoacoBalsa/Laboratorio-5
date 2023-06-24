#include "DtVisto.h"

Visto::Visto(){};
Visto::Visto(int cl, DtUsuario u, Reloj dl){
    this->confLec = cl;
    this->user = u;
    this->datoLec = dl;
};
bool Visto::getConfLec(){
    return this->confLec;
};
DtUsuario Visto::getUser(){
    return this->user;
};
Reloj Visto::getDatoLec(){
    return this->datoLec;
};
void Visto::setConfLec(bool cl){
    this->confLec = cl;
};
void Visto::setUser(DtUsuario u){
    this->user = u;
};
void Visto::setDatoLec(Reloj dl){
    this->datoLec = dl;
};