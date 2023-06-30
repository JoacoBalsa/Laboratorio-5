#ifndef DTMENVID_H
#define DTMENVID_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtReloj.h"
#include "DtMensaje.h"

using namespace std;

class DtMenVid : public DtMensaje {
    private:
        string url;
        float dur;
    public:
        DtMenVid();
        DtMenVid(int id, DtReloj fec, float dur);
        string getUrl();
        void setUrl(string u);
        float getDuracion();
        void setDuracion(float dur);
        ~DtMenVid();
};
#endif