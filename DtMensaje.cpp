#include "DtMensaje.h"

DtMensaje::DtMensaje(){};

DtMensaje::DtMensaje(int id, Reloj fec){
    this->id = id;
    this->fec_env = fec;
};

int DtMensaje::getId(){
    return this->id;
}

void DtMensaje::setId(int id){
    this->id = id;
};

Reloj DtMensaje::getFecEnv(){
    return this->fec_env;
};

void DtMensaje::setFecEnv(Reloj fec){
    this->fec_env = fec;
};

DtMensaje::~DtMensaje(){};