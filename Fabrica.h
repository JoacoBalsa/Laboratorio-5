#ifndef FABRICA_H
#define FABRICA_H
#include "Controles_Interfaces/IAbrirApp.h"
#include "Controles_Interfaces/IReloj.h"
#include "Controles_Interfaces/IMensaje.h"

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