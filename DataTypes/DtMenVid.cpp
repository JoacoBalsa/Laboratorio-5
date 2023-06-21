#include "DtMenVid.h"

DtMenVid::DtMenVid(){};

DtMenVid::DtMenVid(int id, Reloj fec, float dur):DtMensaje(id,fec){
    this->dur = dur;
};

float DtMenVid::getDuracion(){
    return this->dur;
};

void DtMenVid::setDuracion(float dur){
    this->dur = dur;
};

DtMenVid::~DtMenVid(){};