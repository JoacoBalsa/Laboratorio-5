#include "DtConversacion.h"

DtConversacion::DtConversacion(){};

DtConversacion::DtConversacion(int i, bool act){
    this->id = i;
    this->activa = act;
};

int DtConversacion::getId(){
    return this->id;
};

void DtConversacion::setId(int i){
    this->id = i;
};

bool DtConversacion::getAct(){
    return this->activa;
};

void DtConversacion::setAct(bool act){
    this->activa = act;
};

DtConversacion::~DtConversacion(){};