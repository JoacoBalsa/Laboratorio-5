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
        float dur;
    public:
        MenVid();
        MenVid(int id, Reloj fec, float dur);
        float getDuracion();
        void setDuracion(float dur);
        ~MenVid();
};
#endif