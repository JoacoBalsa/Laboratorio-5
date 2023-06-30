#include "MenVid.h"

MenVid::MenVid(){};
MenVid::MenVid(int id, DtReloj fec, float dur, string url):Mensaje(id, fec){
    this->dur = dur;
    this->url = url;
};

string MenVid::getUrl(){
    return this->url;
};

void MenVid::setUrl(string u){
    this->url = u;
};

float MenVid::getDuracion(){
    return this->dur;
};

void MenVid::setDuracion(float dur){
    this->dur = dur;
};

MenVid::~MenVid(){};