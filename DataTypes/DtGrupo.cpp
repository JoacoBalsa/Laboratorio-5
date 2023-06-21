#include "DtGrupo.h"

DtGrupo::DtGrupo(){};

DtGrupo::DtGrupo(int id, bool act, string nom, string url, Reloj fecha):DtConversacion(id, act){
    this->nombre = nom;
    this->imgUrl = url;
    this->fechaCreacion = fecha;
};

string DtGrupo::getNombre(){
    return this->nombre;<
};

void DtGrupo::setNombre(string nom){
    this->nombre = nom;
};

string DtGrupo::getImg(){
    return this->imgUrl;
};

void DtGrupo::setImg(string url){
    this->imgUrl = url;
};

Reloj DtGrupo::getFechaCreacion(){
    return this->fechaCreacion;
};

void DtGrupo::setFechaCreacion(Reloj fecha){
    this->fechaCreacion = fecha;
};

DtGrupo::~DtGrupo(){};