#include "Fabrica.h"
#include "ControlAbrirApp.h"

Fabrica* Fabrica::instancia=NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia==NULL)
        instancia= new Fabrica();
    return instancia;
}

IControlAbrirApp* getIControlAbrirApp(){
    return new ControlAbrirApp();
}