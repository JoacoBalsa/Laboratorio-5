#include "Usuario.h"
#include "Conversacion.h"

using namespace std;

Usuario::Usuario(){};
Usuario::Usuario (int tel, string nom, DtReloj fec, string bio, string img, DtReloj ultvez){
    this->telefono = tel;
    this->nombre = nom;
    this->fecReg = fec;
    this->biografia = bio;
    this->imgUrl = img;
    this->ultVez = ultVez;
};

int Usuario::getTel(){
    return this->telefono;
};

void Usuario::setTel(int tel){
    this->telefono = tel;
};

string Usuario::getNombre(){
    return this->nombre;
};

void Usuario::setNombre(string n){
    this->nombre = n;
};

DtReloj Usuario::getFecha(){
    return this->fecReg;
};

void Usuario::setFecha(DtReloj f){
    this->fecReg = f;
};

string Usuario::getBio(){
    return this->biografia;
};

void Usuario::setBio(string bio){
    this->biografia = bio;
};

string Usuario::getImg(){
    return this->imgUrl;
};

void Usuario::setImg(string url){
    this->imgUrl = url;
};

DtReloj Usuario::getUltVez(){
    return this->ultVez;
};

void Usuario::setUltVez(DtReloj fecha){
    this->ultVez = fecha;
};

Usuario* Usuario::getContacto(int tel){    
    if(this->contactos.find(tel) != this->contactos.end())
        return this->contactos[tel];
    else
       throw invalid_argument("No existe ningun contacto con ese telefono agendado.\n");
};
void Usuario::setContacto(int tel, Usuario* cont){
    if(this->contactos.find(tel) != this->contactos.end())
        throw invalid_argument("Contacto ya agendado.\n");
    else   
       this->contactos[tel] = cont;
};

Mensaje* Usuario::getMenRec(int id){
    if(this->menRec.find(id) != this->menRec.end())
        return this->menRec[id];
    else
        throw invalid_argument("No se ha recibido ese mensaje.\n");
};

void Usuario::setMenRec(int id, Mensaje* men){
    if(this->menRec.find(id) != this->menRec.end())
        throw invalid_argument("Ya se ha recibido ese mensaje.\n");
    else
        this->menRec[id] = men;
};

map<int, Conversacion*> Usuario::getActivas(){
    return this->activas;
};

map<int, Conversacion*> Usuario::getArchivadas(){
    return this->archivadas;
};


void Usuario::setActiva(int id, Conversacion* conve){
    if(this->activas.find(id) != this->activas.end())
        throw invalid_argument("Este usuario ya forma parte de esa conversacion.\n"); 
    else
        this->activas[id] = conve;
};

void Usuario::setArchivada(int id, Conversacion* conve){
    if(this->archivadas.find(id) != this->archivadas.end())
        throw invalid_argument("Este usuario ya forma parte de esa conversacion.\n"); 
    else
        this->archivadas[id] = conve;
};

bool Usuario::hayActivas(){
    return this->activas.size() > 0;
}

bool Usuario::hayArchivadas(){
    return this->archivadas.size() > 0;
}

Usuario::~Usuario(){};
