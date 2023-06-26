#include "Conversacion.h"

using namespace std;

Conversacion::Conversacion(){};
Conversacion::Conversacion(int id, bool activa){
    this->id = id;
    this->activa = activa;
};
int Conversacion::getId(){
    return this->id;
};
void Conversacion::setId(int id){
    this->id = id;
};
bool Conversacion::getActiva(){
    return this->activa;
};
void Conversacion::setActiva(bool a){
    this->activa = activa;
};
DtMensaje Conversacion::getMensaje(int id){
    if(this->mensajes.find(id) != this->mensajes.end())
        return this->mensajes[id];
    else
        throw invalid_argument("No se ha mandado ese mensaje en esta conversacion.\n");
};
void Conversacion::setMensaje(int id, DtMensaje men){
    if(this->mensajes.find(id) == this->mensajes.end())
        this->mensajes[id] = men;
    else
        throw invalid_argument("Ya se ha mandado ese mensaje en esta conversacion.\n");
};

DtUsuario Conversacion::getIntegrante(int tel){
    if(this->integrantes.find(tel) != this->integrantes.end())
        return this->integrantes[tel];
    else
        throw invalid_argument("Ese usuario no es integrante de esta conversacion.\n");
};
void Conversacion::setIntegrante(int tel, DtUsuario integrante){
    if(this->integrantes.find(tel) != this->integrantes.end())
        throw invalid_argument("Ese usuario ya forma parte de esta conversacion.\n");
    else
        this->integrantes[tel] = integrante;
};

Conversacion::~Conversacion(){};