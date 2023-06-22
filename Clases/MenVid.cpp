#include "MenVid.h"

MenVid::MenVid(){};
MenVid::MenVid(int id, Reloj fec, float dur):Mensaje(id, fec){
    this->dur = dur;
};
float MenVid::getDuracion(){
    return this->dur;
};
void MenVid::setDuracion(float dur){
    this->dur = dur;
};
MenVid::~MenVid(){};