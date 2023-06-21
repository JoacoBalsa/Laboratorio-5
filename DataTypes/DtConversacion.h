#ifndef DTCONVERSACION_H
#define DTCONVERSACION_H
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class DtConversacion{
    private:
        int id;
        bool activa;
    public:
        DtConversacion();
        DtConversacion(int i, bool act);
        int getId();
        void setId(int i);
        bool getAct();
        void setAct(bool act);
        ~DtConversacion();
};

#endif 