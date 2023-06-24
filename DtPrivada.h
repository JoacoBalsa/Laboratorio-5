#ifndef DTPRIVADA_H
#define DTPRIVADA_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtConversacion.h"

using namespace std;

class DtPrivada : public DtConversacion{
    private:
    public:
        DtPrivada();
        DtPrivada(int id, bool act);
        ~DtPrivada();
};

#endif