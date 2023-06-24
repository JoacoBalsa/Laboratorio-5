#ifndef USUARIO
#define USUARIO
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtMensaje.h"
#include "DtReloj.h"
#include <map>
#include <set>
#include "DtConversacion.h"
#include "DtUsuario.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class Usuario{
    private:
        //Atributos
        int telefono;
        string nombre;
        Fecha fecReg;
        string biografia;
        string imgUrl;
        Reloj registrado;         
        Reloj ultVez;
        //Pseudoatributos
        map<int, DtUsuario> contactos;
        map<int, DtMensaje> menEnv;
        map<int, DtMensaje> menRec;
        map<int, DtConversacion> chats;
    public:
        Usuario();
        Usuario (int tel, string nom, Fecha fec, string bio, string img, Reloj ultvez);
        int getTel();
        void setTel(int tel);
        string getNombre();
        void setNombre(string n);
        Fecha getFecha();
        void setFecha(Fecha f);
        string getBio();
        void setBio(string bio);
        string getImg();
        void setImg(string url);
        Reloj getReg();
        void setReg(Reloj reg);
        Reloj getUltVez();
        void setUltVez(Reloj fecha);
        DtUsuario getContacto(int tel);
        void setContacto(int tel, DtUsuario cont);
        DtMensaje getMenEnv(int id);
        void setMenEnv(int id, DtMensaje men);
        DtMensaje getMenRec(int id);
        void setMenRec(int id, DtMensaje men);
        DtConversacion getChat(int id);
        void setChat(int id, DtConversacion conve);
        ~Usuario();
};

#endif