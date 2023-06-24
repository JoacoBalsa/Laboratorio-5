#ifndef FABRICA_H
#define FABRICA_H
#include "IControlAbrirApp.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControlAbrirApp* getIControlAbrirApp();
        ~Fabrica();
};
#endif