#include "DtFecha.h"

Fecha::Fecha(){
    this->dia = 1;
    this->mes = 1;
    this->anio = 2000;
};
Fecha:: Fecha (int d, int m, int a){
    this->dia=d;
    this->mes=m;
    this->anio=a;
};
Fecha:: Fecha(Fecha &fec){
    this->dia = fec.dia;
    this->mes = fec.mes;
    this->anio = fec.anio;
}
int Fecha::getDia(){
    return this->dia;
};
int Fecha::getMes(){
    return this->mes;
};
int Fecha::getAnio(){
    return this->anio;
};
void Fecha::setDia(int d){
    this->dia=d;
};
void Fecha::setMes(int m){
    this->mes=m;
};
void Fecha::setAnio(int a){
    this->anio=a;
};
Fecha::~Fecha(){};