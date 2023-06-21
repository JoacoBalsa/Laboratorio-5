#ifndef DTUSUARIO_H
#define DTUSUARIO_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtReloj.h"
using namespace std;

class DtUsuario{
    private:
        int telefono;
        string nombre;
        Fecha fecReg;
        string biografia;
        string imgUrl;
        Registro registrado;        
        Registro ultVez;            
    public:
        DtUsuario();
        DtUsuario (int tel, string nom, Fecha fec, string bio, string img, Registro ultvez);
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
        Registro getReg();
        void setReg(Registro reg);
        Registro getUltVez();
        void setUltVez(Registro fecha);
        ~DtUsuario();
};

#endif