#include "Grupo.h"

Grupo::Grupo(){};
Grupo::Grupo(string n, string p, Fecha fc){
    this->nombre = n;
    this->perfil_URL = p;
    this->fecCreac = fc;
};
string Grupo::getNombre(){
    return this->nombre;
};
void Grupo::setNombre(string n){
    this->nombre = n;
};
string Grupo::getPerfil(){
    return this->perfil_URL;
};
void Grupo::setPerfil(string p){
    this->perfil_URL = p;
};
Fecha Grupo::getFecCreac(){
    return this->fecCreac;
};
void Grupo::setFecCreac(Fecha f){
    this->fecCreac = f;
};
Grupo::~Grupo(){};