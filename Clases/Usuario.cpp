#include "Usuario.h"

Usuario::Usuario(){};
Usuario::Usuario (int tel, string nom, Fecha fec, string bio, string img, Reloj ultvez){
    this->telefono = tel;
    this->nombre = nom;
    this->fecReg = fec;
    this->biografia = bio;
    this->imgUrl = img;
    this->registrado = ultVez;
};
int Usuario::getTel(){
    return this->telefono;
};
void Usuario::setTel(int tel){
    this->telefono = tel;
};
string Usuario::getNombre(){
    return this->nombre;
};
void Usuario::setNombre(string n){
    this->nombre = n;
};
Fecha Usuario::getFecha(){
    return this->fecReg;
};
void Usuario::setFecha(Fecha f){
    this->fecReg = f;
};
string Usuario::getBio(){
    return this->biografia;
};
void Usuario::setBio(string bio){
    this->biografia = bio;
};
string Usuario::getImg(){
    return this->imgUrl;
};
void Usuario::setImg(string url){
    this->imgUrl = url;
};
Reloj Usuario::getReg(){
    return this->registrado;
};
void Usuario::setReg(Reloj reg){
    this->registrado = reg;
};
Reloj Usuario::getUltVez(){
    return this->ultVez;
};
void Usuario::setUltVez(Reloj fecha){
    this->ultVez = fecha;
};
Usuario::~Usuario(){};