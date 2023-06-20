#include "DtMensaje.h"

DtMensaje::DtMensaje(){};

DtMensaje::DtMensaje(int id, Registro fec){
    this->id = id;
    this->fec_env = fec;
};

int DtMensaje::getId(){
    return this->id;
}

void DtMensaje::setId(int id){
    this->id = id;
};

Registro DtMensaje::getFecEnv(){
    return this->fec_env;
};

void DtMensaje::setFecEnv(Registro fec){
    this->fec_env = fec;
};

DtMensaje::~DtMensaje(){};