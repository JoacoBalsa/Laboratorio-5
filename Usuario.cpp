#include "Usuario.h"

Usuario::Usuario(){};
Usuario::Usuario (int tel, string nom, Fecha fec, string bio, string img, Reloj ultvez){
    this->telefono = tel;
    this->nombre = nom;
    this->fecReg = fec;
    this->biografia = bio;
    this->imgUrl = img;
    this->registrado = ultVez;
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

Fecha Usuario::getFecha(){
    return this->fecReg;
};

void Usuario::setFecha(Fecha f){
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

Reloj Usuario::getReg(){
    return this->registrado;
};

void Usuario::setReg(Reloj reg){
    this->registrado = reg;
};

Reloj Usuario::getUltVez(){
    return this->ultVez;
};

void Usuario::setUltVez(Reloj fecha){
    this->ultVez = fecha;
};

DtUsuario Usuario::getContacto(int tel){    
    if(this->contactos.find(tel) != this->contactos.end())
        return this->contactos[tel];
    else
       throw invalid_argument("No existe ningun contacto con ese telefono agendado.\n");
};
void Usuario::setContacto(int tel, DtUsuario cont){
    if(this->contactos.find(tel) == this->contactos.end())
        this->contactos.insert({tel, cont});
    else   
       throw invalid_argument("Contacto ya agendado.\n");
};

DtMensaje Usuario::getMenEnv(int id){
    if(this->menEnv.find(id) != this->menEnv.end())
        return this->menEnv[id];
    else
        throw invalid_argument("No se ha mandado ese mensaje.\n");
};

void Usuario::setMenEnv(int id, DtMensaje men){
    if(this->menEnv.find(id) == this->menEnv.end())
        this->menEnv.insert({id, men});
    else
        throw invalid_argument("Ya se ha mandado ese mensaje.\n");
};

DtMensaje Usuario::getMenRec(int id){
    if(this->menRec.find(id) != this->menRec.end())
        return this->menRec[id];
    else
        throw invalid_argument("No se ha recibido ese mensaje.\n");
};

void Usuario::setMenRec(int id, DtMensaje men){
    if(this->menRec.find(id) == this->menRec.end())
        this->menRec.insert({id, men});
    else
        throw invalid_argument("Ya se ha recibido ese mensaje.\n");
};

DtConversacion Usuario::getChat(int id){
    if(this->chats.find(id) != this->chats.end())
        return this->chats[id];
    else
        throw invalid_argument("Este usuario no forma parte de esa conversacion.\n");
};

void Usuario::setChat(int id, DtConversacion conve){
    if(this->chats.find(id) == this->chats.end())
        this->chats.insert({id, conve});
    else
        throw invalid_argument("Este usuario ya forma parte de esa conversacion.\n");
};

Usuario::~Usuario(){};