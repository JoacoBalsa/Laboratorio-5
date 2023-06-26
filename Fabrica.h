#ifndef FABRICA_H
#define FABRICA_H
#include "IAbrirApp.h"
#include "IReloj.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IAbrirApp* getIAbrirApp();
        IReloj* getIReloj();
        ~Fabrica();
};
#endif