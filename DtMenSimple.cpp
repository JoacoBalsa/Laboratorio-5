#include "DtMenSimple.h"

DtMenSimple::DtMenSimple(){};

DtMenSimple::DtMenSimple(int id, DtReloj fec, string text):DtMensaje(id,fec){
    this->texto = text;
};

void DtMenSimple::setTexto(string texto){
    this->texto = texto;
};

string DtMenSimple::getTexto(){
    return this->texto;
};

DtMenSimple::~DtMenSimple(){};