#ifndef USUARIO
#define USUARIO
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <list>
#include <map>
#include "../Clases/Conversacion.h"
#include "../DataTypes/DtReloj.h"
#include "../DataTypes/DtConversacion.h"

using namespace std;

class Conversacion;

class Usuario{
    private:
        //Atributos
        int telefono;
        string nombre;
        DtReloj fecReg;
        string biografia;
        string imgUrl;        
        DtReloj ultVez;
        //Pseudoatributos
        map<int, Usuario*> contactos;
        map<int, Mensaje*> menRec;
        map<int, Conversacion*> activas;
        map<int, Conversacion*> archivadas;
    public:
        Usuario();
        Usuario (int tel, string nom, DtReloj fec, string bio, string img, DtReloj ultvez);
        int getTel();
        void setTel(int tel);
        string getNombre();
        void setNombre(string n);
        DtReloj getFecha();
        void setFecha(DtReloj f);
        string getBio();
        void setBio(string bio);
        string getImg();
        void setImg(string url);
        DtReloj getUltVez();
        void setUltVez(DtReloj fecha);
        void getContactos(list<DtUsuario>& cont);
        Usuario* getContacto(int tel);
        void setContacto(int tel, Usuario* cont);
        Mensaje* getMenRec(int id);
        void setMenRec(int id, Mensaje* men);
        Conversacion* getActiva(int id);
        Conversacion* getArchivada(int id);
        void setActiva(int id, Conversacion* conve);
        void getActivas(list<DtConversacion>& Activas);
        void getArchivadas(list<DtConversacion>& Archivadas);
        void dropConver(int id);
        int getCantArch();
        void setArchivada(int id, Conversacion* conve);
        bool hayActivas();
        bool hayArchivadas();
        bool hayConverconUser(int receptor, int emisor);
        ~Usuario();
};

#endif