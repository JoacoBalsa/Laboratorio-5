#ifndef CONTROLRELOJ_H
#define CONTROLRELOJ_H
#include <string.h>
#include <iostream>
#include "../Clases/Reloj.h"
#include "../DataTypes/DtReloj.h"
#include "IReloj.h"

using namespace std;

class ControlReloj : public IReloj{
    private:
        static ControlReloj* instancia;
        Reloj* relojSistema;
        ControlReloj();
    public:
        static ControlReloj* getInstancia();
        DtReloj getFecha();
        void setFecha(DtReloj r);
        ~ControlReloj();
};

#endif