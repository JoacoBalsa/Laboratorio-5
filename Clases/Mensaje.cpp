#include "Mensaje.h"

Mensaje::Mensaje(){};
Mensaje::Mensaje(int id, Reloj fec){
    this->id = id;
    this->fec_env = fec;
};
int Mensaje::getId(){
    return this->id;
};
void Mensaje::setId(int id){
    this->id = id;
};
Reloj Mensaje::getFecEnv(){
    return this->fec_env;
};
void Mensaje::setFecEnv(Reloj fec){
    this->fec_env = fec;
};
Mensaje::~Mensaje(){};