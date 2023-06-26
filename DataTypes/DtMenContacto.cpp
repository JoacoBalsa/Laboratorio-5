#include "DtMenContacto.h"

DtMenContacto::DtMenContacto(){};

DtMenContacto::DtMenContacto(int id, DtReloj fec, int tel, string nom):DtMensaje(id, fec){
    this->telefono = tel;
    this->nombre = nom;
};


int DtMenContacto::getTelefono(){
    return this->telefono;
};

void DtMenContacto::setTelefono(int tel){
    this->telefono=tel;
};

string DtMenContacto::getNombre(){
    return this->nombre;
};

void DtMenContacto::setNombre(string nom){
    this->nombre=nom;
};

DtMenContacto::~DtMenContacto(){};