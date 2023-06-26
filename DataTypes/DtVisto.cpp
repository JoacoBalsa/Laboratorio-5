#include "DtVisto.h"

Visto::Visto(){};
Visto::Visto(bool cl, DtUsuario u, DtReloj dl){
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
DtReloj Visto::getDatoLec(){
    return this->datoLec;
};
void Visto::setConfLec(bool cl){
    this->confLec = cl;
};
void Visto::setUser(DtUsuario u){
    this->user = u;
};
void Visto::setDatoLec(DtReloj dl){
    this->datoLec = dl;
};