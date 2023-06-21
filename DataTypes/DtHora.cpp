#include "DtHora.h"

Hora::Hora(){};
Hora::Hora(int h, int m){
    this->hor=h;
    this->minu=m;
};
Hora::Hora(Hora &hor){
    this->hor=hor.hor;
    this->minu=hor.minu;
};
int Hora::getHora(){
    return this->hor;
};
int Hora::getMin(){
    return this->minu;
};
void Hora::setHora(int h){
    this->hor = h;
};
void Hora::setMin(int m){
    this->minu = m;
}
Hora::~Hora(){};