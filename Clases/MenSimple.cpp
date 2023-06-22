#include "MenSimple.h"

MenSimple::MenSimple(){};
MenSimple::MenSimple(int id, Reloj fec, string text):Mensaje(id,fec){
    this->texto = text;
};
void MenSimple::setTexto(string texto){
    this->texto = texto;
};
string MenSimple::getTexto(){
    return this->texto;
};
MenSimple::~MenSimple(){};