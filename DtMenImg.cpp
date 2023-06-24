#include "DtMenImg.h"

DtMenImg::DtMenImg(){};

DtMenImg::DtMenImg(int id, Reloj fec, float tam, Formato form, string tex):DtMensaje(id,fec){
    this->tamanio = tam;
    this->formato = form;
    this->texto = tex;
};

float DtMenImg::getTamanio(){
    return this->tamanio;
};

void DtMenImg::setTamanio(float tam){
    this->tamanio = tam;
};

Formato DtMenImg::getFormato(){
    return this->formato;
};

void DtMenImg::setFormato(Formato form){
    this->formato = form;
};

string DtMenImg::getTexto(){
    return this->texto;
};

void DtMenImg::setTexto(string text){
    this->texto = text;
};

DtMenImg::~DtMenImg(){};