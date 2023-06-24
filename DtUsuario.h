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
        Reloj registrado;        
        Reloj ultVez;            
    public:
        DtUsuario();
        DtUsuario (int tel, string nom, Fecha fec, string bio, string img, Reloj ultvez);
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
        ~DtUsuario();
};

#endif