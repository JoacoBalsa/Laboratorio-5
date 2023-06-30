#include "DtMenVid.h"

DtMenVid::DtMenVid(){};

DtMenVid::DtMenVid(int id, DtReloj fec, float dur):DtMensaje(id,fec){
    this->dur = dur;
};

string DtMenVid::getUrl(){
    return this->url;
};

void DtMenVid::setUrl(string u){
    this->url = u;
};

float DtMenVid::getDuracion(){
    return this->dur;
};

void DtMenVid::setDuracion(float dur){
    this->dur = dur;
};

DtMenVid::~DtMenVid(){};