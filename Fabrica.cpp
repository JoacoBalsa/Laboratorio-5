#include "Fabrica.h"
#include "IAbrirApp.h"
#include "ControlUsuario.h"
#include "ControlReloj.h"

Fabrica* Fabrica::instancia=NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia==NULL)
        instancia= new Fabrica();
    return instancia;
}

IAbrirApp* Fabrica::getIAbrirApp(){
    return ControlUsuario::getInstancia();
}

IReloj* Fabrica::getIReloj(){
    return ControlReloj::getInstancia();
}
