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

void Usuario::getContactos(list<DtUsuario>& cont){
    for(auto itr = this->contactos.begin(); itr != this->contactos.end(); itr++){
        cont.emplace_back(itr->second->getTel(), itr->second->getNombre(), itr->second->getFecha(), itr->second->getBio(), itr->second->getImg(), itr->second->getUltVez());
    }
};

Usuario* Usuario::getContacto(int tel){    
    if(this->contactos.find(tel) != this->contactos.end())
        return this->contactos[tel];
    else
       return NULL;
};
void Usuario::setContacto(int tel, Usuario* cont){
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

void Usuario::getActivas(list<DtConversacion>& Activas){
    for(auto itr = this->activas.begin(); itr != this->activas.end(); itr++){
        Activas.emplace_back(itr->second->getId(), itr->second->getActiva());
    }
}

void Usuario::getArchivadas(list<DtConversacion>& Archivadas){
    for(auto itr = this->archivadas.begin(); itr != this->archivadas.end(); itr++){
        Archivadas.emplace_back(itr->second->getId(), itr->second->getActiva());
    }
}

int Usuario::getCantArch(){
    return this->archivadas.size();
}

void Usuario::setActiva(int id, Conversacion* conve){
    this->activas[id] = conve;
};

void Usuario::setArchivada(int id, Conversacion* conve){
    this->archivadas[id] = conve;
};

bool Usuario::hayActivas(){
    return this->activas.size() > 0;
}

bool Usuario::hayArchivadas(){
    return this->archivadas.size() > 0;
}

Conversacion* Usuario::getActiva(int id){
    if(this->activas.find(id) != this->activas.end())
        return this->activas[id];
    else    
        return NULL;
}

Conversacion* Usuario::getArchivada(int id){
    if(this->archivadas.find(id) != this->archivadas.end())
        return this->archivadas[id];
    else    
        return NULL;
}

void Usuario::dropConver(int id){
    if(this->archivadas.find(id) != this->archivadas.end()){
        this->archivadas.erase(id);
    }
    else{
        this->activas.erase(id);
    }      
}

bool Usuario::hayConverconUser(int receptor, int emisor){
    for(auto itr = this->archivadas.begin(); itr != this->archivadas.end(); itr++){
        if(itr->second->getReceptor(emisor).getTel() == receptor)
            return true;
    }
    for(auto itr = this->activas.begin(); itr != this->activas.end(); itr++){
        if(itr->second->getReceptor(emisor).getTel() == receptor)
            return true;
    }
    return false;
}

Usuario::~Usuario(){};
