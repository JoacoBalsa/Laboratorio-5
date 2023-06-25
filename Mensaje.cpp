#include "Mensaje.h"

using namespace std;

Mensaje::Mensaje(){};
Mensaje::Mensaje(int id, DtReloj fec){
    this->id = id;
    this->fec_env = fec;
};

int Mensaje::getId(){
    return this->id;
};

void Mensaje::setId(int id){
    this->id = id;
};

DtReloj Mensaje::getFecEnv(){
    return this->fec_env;
};

void Mensaje::setFecEnv(DtReloj fec){
    this->fec_env = fec;
};

Visto Mensaje::getConfLec(int tel){
    if(this->confsLec.find(tel) != this->confsLec.end())
        return this->confsLec[tel];
    else
        throw invalid_argument("Este usuario aun no ha visto el mensaje.\n");
};
void Mensaje::setConfLec(int tel, Visto confLec){
    if(this->confsLec.find(tel) != this->confsLec.end())
        throw invalid_argument("Este usuario ya ha visto el mensaje.\n");
    else
        this->confsLec[tel] = confLec;
};
DtUsuario Mensaje::getEmisor(){
    return this->emisor;
};
void Mensaje::setEmisor(DtUsuario e){
    this->emisor = e;
};
Mensaje::~Mensaje(){};