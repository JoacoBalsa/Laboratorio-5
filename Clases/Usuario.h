#ifndef USUARIO
#define USUARIO
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "../DataTypes/DtMensaje.h"
#include "../DataTypes/DtReloj.h"
#include <map>
#include <set>
#include "../DataTypes/DtConversacion.h"
#include "../DataTypes/DtUsuario.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

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
        map<int, DtUsuario> contactos;
        map<int, DtMensaje> menRec;
        map<int, DtConversacion> chats;
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
        DtUsuario getContacto(int tel);
        void setContacto(int tel, DtUsuario cont);
        DtMensaje getMenRec(int id);
        void setMenRec(int id, DtMensaje men);
        DtConversacion getChat(int id);
        void setChat(int id, DtConversacion conve);
        ~Usuario();
};

#endif