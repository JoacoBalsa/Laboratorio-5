#include "DtUsuario.h"

DtUsuario::DtUsuario(){};

DtUsuario::DtUsuario (int tel, string nom, Fecha fec, string bio, string img, DtReloj ultvez){
    this->telefono = tel;
    this->nombre = nom;
    this->fecReg = fec;
    this->biografia = bio;
    this->imgUrl = img;
    this->registrado = ultVez;
};

int DtUsuario::getTel(){
    return this->telefono;
};

void DtUsuario::setTel(int tel){
    this->telefono = tel;
};

string DtUsuario::getNombre(){
    return this->nombre;
};

void DtUsuario::setNombre(string n){
    this->nombre = n;
};

Fecha DtUsuario::getFecha(){
    return this->fecReg;
};

void DtUsuario::setFecha(Fecha f){
    this->fecReg = f;
};

string DtUsuario::getBio(){
    return this->biografia;
};

void DtUsuario::setBio(string bio){
    this->biografia = bio;
};

string DtUsuario::getImg(){
    return this->imgUrl;
};

void DtUsuario::setImg(string url){
    this->imgUrl = url;
};

DtReloj DtUsuario::getReg(){
    return this->registrado;
};

void DtUsuario::setReg(DtReloj reg){
    this->registrado = reg;
};

DtReloj DtUsuario::getUltVez(){
    return this->ultVez;
};

void DtUsuario::setUltVez(DtReloj fecha){
    this->ultVez = fecha;
};

DtUsuario::~DtUsuario(){};