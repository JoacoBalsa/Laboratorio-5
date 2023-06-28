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
        DtReloj fecReg;
        string biografia;
        string imgUrl;        
        DtReloj ultVez;            
    public:
        DtUsuario();
        DtUsuario (int tel, string nom, DtReloj fec, string bio, string img, DtReloj ultvez);
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
        ~DtUsuario();
};

#endif