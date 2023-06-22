#include "MenContacto.h"

MenContacto::MenContacto(){};
MenContacto::MenContacto(int id, Reloj fec, int tel, string nom):Mensaje(id,fec){
    this->telefono = tel;
    this->nombre = nom;
};
int MenContacto::getTelefono(){
    return this->telefono;
};
void MenContacto::setTelefono(int tel){
    this->telefono = tel;
};
string MenContacto::getNombre(){
    return this->nombre;
};
void MenContacto::setNombre(string nom){
    this->nombre = nom;
};
MenContacto::~MenContacto(){};