#ifndef DTGRUPO_H
#define DTGRUPO_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtConversacion.h"
#include "DtReloj.h"

using namespace std;

class DtGrupo : public DtConversacion{
    private:
        string nombre;
        string imgUrl;
        Reloj fechaCreacion;
    public:
        DtGrupo();
        DtGrupo(int id, bool act, string nom, string url, Reloj fecha);
        string getNombre();
        void setNombre(string nom);
        string getImg();
        void setImg(string url);
        Reloj getFechaCreacion();
        void setFechaCreacion(Reloj fecha);
        ~DtGrupo();
};

#endif