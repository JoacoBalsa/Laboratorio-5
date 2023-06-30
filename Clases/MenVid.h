#ifndef MENVID_H
#define MENVID_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Mensaje.h"

using namespace std;

//FALTAN LOS PSEUDOATRIBUTOS

class MenVid : public Mensaje {
    private:
        string url;
        float dur;
    public:
        MenVid();
        MenVid(int id, DtReloj fec, float dur, string url);
        string getUrl();
        void setUrl(string u);
        float getDuracion();
        void setDuracion(float dur);
        ~MenVid();
};
#endif