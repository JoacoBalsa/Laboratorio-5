#include "MenImg.h"

MenImg::MenImg(){};
MenImg::MenImg(int id, DtReloj fec, float tam, Formato form, string text):Mensaje(id,fec){
    this->tamanio = tam;
    this->formato = form;
    this->texto = text;
};
float MenImg::getTamanio(){
    return this->tamanio;
};
void MenImg::setTamanio(float tam){
    this->tamanio = tam;
};
Formato MenImg::getFormato(){
    return this->formato;
};
void MenImg::setFormato(Formato form){
    this->formato = form;
};
string MenImg::getTexto(){
    return this->texto;
};
void MenImg::setTexto(string text){
    this->texto = text;
};
MenImg::~MenImg(){};