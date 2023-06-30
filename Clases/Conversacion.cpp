#include "Conversacion.h"
#include "Usuario.h"

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
    this->activa = a;
};
Mensaje* Conversacion::getMensaje(int id){
    if(this->mensajes.find(id) != this->mensajes.end())
        return this->mensajes[id];
    else
        throw invalid_argument("No se ha mandado ese mensaje en esta conversacion.\n");
};
void Conversacion::setMensaje(int id, Mensaje* men){
    if(this->mensajes.find(id) == this->mensajes.end()){
        //pair <int, Mensaje*> p(id, men);
        this->mensajes[id] = men;
    }else
        throw invalid_argument("Ya se ha mandado ese mensaje en esta conversacion.\n");
};

Usuario* Conversacion::getIntegrante(int tel){
    if(this->integrantes.find(tel) != this->integrantes.end())
        return this->integrantes[tel];
    else
        throw invalid_argument("Ese usuario no es integrante de esta conversacion.\n");
};
void Conversacion::setIntegrante(int tel, Usuario* integrante){
    if(this->integrantes.find(tel) != this->integrantes.end())
        throw invalid_argument("Ese usuario ya forma parte de esta conversacion.\n");
    else
        this->integrantes[tel] = integrante;
};

DtUsuario Conversacion::getReceptor(int emisor){
    DtUsuario ret;
    for(auto itr = this->integrantes.begin(); itr != this->integrantes.end(); itr++){
        if(itr->first != emisor){
            ret.setTel(itr->first);
            ret.setNombre(itr->second->getNombre());
            ret.setBio(itr->second->getBio());
            ret.setImg(itr->second->getImg());
            ret.setFecha(itr->second->getFecha());
            ret.setUltVez(itr->second->getUltVez());
        }
    }
    return ret;
}


Conversacion::~Conversacion(){};