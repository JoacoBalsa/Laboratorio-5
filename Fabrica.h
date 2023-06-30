#ifndef FABRICA_H
#define FABRICA_H
#include "Controles_Interfaces/IAbrirApp.h"
#include "Controles_Interfaces/IReloj.h"
#include "Controles_Interfaces/ICasosMensaje.h"
#include "Controles_Interfaces/IControlAgregarContacto.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IAbrirApp* getIAbrirApp();
        IReloj* getIReloj();
        IControlAgregarContacto* getICAgregarCon();
        ICasosMensaje* getICasosMensaje();
        ~Fabrica();
};
#endif