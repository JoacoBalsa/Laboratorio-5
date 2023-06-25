#include "MenSimple.h"

MenSimple::MenSimple(){};
MenSimple::MenSimple(int id, DtReloj fec, string text):Mensaje(id,fec){
    this->texto = text;
};
void MenSimple::setTexto(string text){
    this->texto = text;
};
string MenSimple::getTexto(){
    return this->texto;
};
MenSimple::~MenSimple(){};