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
        DtReloj fechaCreacion;
    public:
        DtGrupo();
        DtGrupo(int id, bool act, string nom, string url, DtReloj fecha);
        string getNombre();
        void setNombre(string nom);
        string getImg();
        void setImg(string url);
        DtReloj getFechaCreacion();
        void setFechaCreacion(DtReloj fecha);
        ~DtGrupo();
};

#endif