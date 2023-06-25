#ifndef FABRICA_H
#define FABRICA_H
#include "IAbrirApp.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IAbrirApp* getIAbrirApp();
        ~Fabrica();
};
#endif